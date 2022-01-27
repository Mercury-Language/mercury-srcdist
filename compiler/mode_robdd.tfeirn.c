/*
** Automatically generated from `mode_robdd.tfeirn.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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


/* :- module mode_robdd.tfeirn. */
/* :- implementation. */

/*
INIT mercury__mode_robdd__tfeirn__init
ENDINIT
*/

#include "mode_robdd.tfeirn.mih"


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
#include "int.mih"
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
#include "mode_robdd.equiv_vars.mih"
#include "mode_robdd.implications.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 561 "mode_robdd.tfeirn.m"
struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s {
#line 561 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17;
#line 561 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7;
#line 561 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8;
#line 561 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont;
#line 561 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr;
#line 577 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21;
#line 577 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9;
#line 567 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12;
#line 572 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13;
#line 561 "mode_robdd.tfeirn.m"
};

#line 156 "mode_robdd.tfeirn.m"
struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s {
#line 156 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12;
#line 156 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13;
#line 156 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__labelling_4_p_0_env_0__cont;
#line 156 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr;
#line 546 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25;
#line 546 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14;
#line 546 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15;
#line 556 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17;
#line 556 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18;
#line 156 "mode_robdd.tfeirn.m"
};


#line 176 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1;

#line 179 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1;

#line 182 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1;

#line 185 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1;

#line 188 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 191 "mode_robdd.tfeirn.c"
static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6];

#line 194 "mode_robdd.tfeirn.c"
static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6];

#line 197 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDesc mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0;

#line 200 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1];

#line 203 "mode_robdd.tfeirn.c"
static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1];

#line 206 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1];

#line 209 "mode_robdd.tfeirn.c"
static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1];

#line 212 "mode_robdd.tfeirn.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0;

#line 215 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
#line 218 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 220 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 222 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

#line 225 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
#line 228 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 230 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_2,
#line 232 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3,
#line 234 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_4);

#line 237 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
#line 240 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 242 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 245 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
#line 248 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_1,
#line 250 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 252 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

#line 288 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4(
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 286 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3(
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 278 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2(
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 276 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1(
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 520 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1(
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 621 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 621 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1);

#line 743 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__RB_10);

#line 520 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__520__1_4_f_0(
#line 520 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
#line 520 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Var_6,
#line 520 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_18,
#line 520 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_19);

#line 767 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__767__1_4_f_0(
#line 767 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
#line 767 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_12,
#line 767 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_13,
#line 767 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_14);

#line 288 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_56_95_95_49_4_f_0(
#line 288 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 288 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 288 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_70,
#line 288 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_71);

#line 286 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_54_95_95_49_4_f_0(
#line 286 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 286 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 286 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_64,
#line 286 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_65);

#line 278 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_56_95_95_49_4_f_0(
#line 278 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 278 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 278 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_56,
#line 278 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_57);

#line 276 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_54_95_95_49_4_f_0(
#line 276 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 276 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 276 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_50,
#line 276 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_51);

#line 743 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__x_2_f_0(
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26,
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__RB_10);

#line 621 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__normalise_1_f_0(
#line 621 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_54,
#line 621 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1);

#line 597 "mode_robdd.tfeirn.m"
static MR_bool MR_CALL 
mode_robdd__tfeirn__minimal_model_2_4_p_0(
#line 597 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 597 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 597 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 597 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 597 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8);

#line 567 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_1(
#line 567 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg);

#line 572 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_2(
#line 572 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg);

#line 561 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0(
#line 561 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 561 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 561 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 561 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 561 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
#line 561 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__cont,
#line 561 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__cont_env_ptr);

#line 767 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0_1(
#line 767 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 767 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 767 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 767 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

#line 556 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0_1(
#line 556 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg);

#line 520 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0_1(
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 288 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_4(
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 286 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_3(
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 278 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_2(
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 276 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_1(
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);


static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_1[4][2];

static /* final */ const MR_Integer mode_robdd__tfeirn_scalar_common_2[1][2];

static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_3[3][8];

static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_4[1][3];




static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_imp_vars_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__robdd__robdd__type_ctor_info_robdd_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
};

static /* final */ const MR_Integer mode_robdd__tfeirn_scalar_common_2[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_3[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__tfeirn_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__tfeirn_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mode_robdd__tfeirn_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1)),
    ((MR_Box) (&mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1))
  },
};

static /* final */ const MR_Box mode_robdd__tfeirn_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mode_robdd__tfeirn_scalar_common_1[1]))
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 626 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 634 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 642 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_robdd_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 650 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 658 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__tfeirn__term__pti_var_1__pseudo_1
  }
};

#line 666 "mode_robdd.tfeirn.c"
static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6] = {
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 676 "mode_robdd.tfeirn.c"
static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6] = {
  (MR_String) "true_vars",
  (MR_String) "false_vars",
  (MR_String) "equiv_vars",
  (MR_String) "imp_vars",
  (MR_String) "robdd",
  (MR_String) "normalised"
};

#line 686 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDesc mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0 = {
  (MR_String) "mode_robdd",
  (MR_Integer) 6,
  (MR_Integer) 31,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0,
  mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0,
  NULL,
  NULL
};

#line 701 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1] = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0
};

#line 706 "mode_robdd.tfeirn.c"
static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0
  }
};

#line 715 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1] = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0
};

#line 720 "mode_robdd.tfeirn.c"
static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1] = {
  (MR_Integer) 0
};

#line 725 "mode_robdd.tfeirn.c"
const MR_TypeCtorInfo_Struct mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mode_robdd__tfeirn____Unify____tfeirn_1_0_10001)),
  ((MR_Box) (mode_robdd__tfeirn____Compare____tfeirn_1_0_10001)),
  (MR_String) "mode_robdd.tfeirn",
  (MR_String) "tfeirn",
  {
    mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1
  },
  {
    mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1
};

#line 746 "mode_robdd.tfeirn.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 754 "mode_robdd.tfeirn.c"
const MR_TypeCtorInfo_Struct mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mode_robdd__tfeirn____Unify____tfeirn_0_0_10001)),
  ((MR_Box) (mode_robdd__tfeirn____Compare____tfeirn_0_0_10001)),
  (MR_String) "mode_robdd.tfeirn",
  (MR_String) "tfeirn",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 775 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
#line 778 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 780 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 782 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
#line 784 "mode_robdd.tfeirn.c"
{
#line 786 "mode_robdd.tfeirn.c"
  {
#line 788 "mode_robdd.tfeirn.c"
    MR_bool mode_robdd__tfeirn__succeeded;

#line 791 "mode_robdd.tfeirn.c"
    {
#line 793 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 796 "mode_robdd.tfeirn.c"
    return mode_robdd__tfeirn__succeeded;
#line 798 "mode_robdd.tfeirn.c"
  }
#line 800 "mode_robdd.tfeirn.c"
}

#line 803 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
#line 806 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 808 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_2,
#line 810 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3,
#line 812 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_4)
#line 814 "mode_robdd.tfeirn.c"
{
#line 816 "mode_robdd.tfeirn.c"
  {
#line 818 "mode_robdd.tfeirn.c"
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__1_1;

#line 821 "mode_robdd.tfeirn.c"
    {
#line 823 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn____Compare____tfeirn_1_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), &mode_robdd__tfeirn__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_4));
    }
#line 826 "mode_robdd.tfeirn.c"
    *mode_robdd__tfeirn__wrapper_arg_2 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__1_1));
#line 828 "mode_robdd.tfeirn.c"
  }
#line 830 "mode_robdd.tfeirn.c"
}

#line 833 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
#line 836 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 838 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 840 "mode_robdd.tfeirn.c"
{
#line 842 "mode_robdd.tfeirn.c"
  {
#line 844 "mode_robdd.tfeirn.c"
    MR_bool mode_robdd__tfeirn__succeeded;

#line 847 "mode_robdd.tfeirn.c"
    {
#line 849 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_0_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 852 "mode_robdd.tfeirn.c"
    return mode_robdd__tfeirn__succeeded;
#line 854 "mode_robdd.tfeirn.c"
  }
#line 856 "mode_robdd.tfeirn.c"
}

#line 859 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
#line 862 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_1,
#line 864 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 866 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
#line 868 "mode_robdd.tfeirn.c"
{
#line 870 "mode_robdd.tfeirn.c"
  {
#line 872 "mode_robdd.tfeirn.c"
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__1_1;

#line 875 "mode_robdd.tfeirn.c"
    {
#line 877 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn____Compare____tfeirn_0_0(&mode_robdd__tfeirn__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 880 "mode_robdd.tfeirn.c"
    *mode_robdd__tfeirn__wrapper_arg_1 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__1_1));
#line 882 "mode_robdd.tfeirn.c"
  }
#line 884 "mode_robdd.tfeirn.c"
}

#line 39 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_110_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0(void)
#line 39 "mode_robdd.tfeirn.m"
{
#line 232 "mode_robdd.tfeirn.m"
  {
#line 232 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_2_2;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;

#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_2_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_5_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_6_6 = mercury__robdd__one_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 232 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_7_7 = (MR_Integer) 1;
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__V_2_2));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__V_3_3));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__V_4_4));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 232 "mode_robdd.tfeirn.m"
    }
#line 232 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__1_1;
#line 232 "mode_robdd.tfeirn.m"
  }
#line 39 "mode_robdd.tfeirn.m"
}

#line 42 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0(void)
#line 42 "mode_robdd.tfeirn.m"
{
#line 234 "mode_robdd.tfeirn.m"
  {
#line 234 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_2_2;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;

#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_2_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_5_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_6_6 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 234 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_7_7 = (MR_Integer) 1;
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__V_2_2));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__V_3_3));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__V_4_4));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 234 "mode_robdd.tfeirn.m"
    }
#line 234 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__1_1;
#line 234 "mode_robdd.tfeirn.m"
  }
#line 42 "mode_robdd.tfeirn.m"
}

#line 46 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 46 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 46 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 46 "mode_robdd.tfeirn.m"
{
#line 238 "mode_robdd.tfeirn.m"
  {
#line 238 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_44 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_46_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA1_16;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB1_17;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA1_18;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB1_19;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA1_20;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB1_21;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA1_22;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB1_23;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA1_24;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB1_25;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TU_26;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FU_27;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EU_28;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IU_29;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_32_32;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_33_33;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_34_34;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_35_35;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_36_36;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_37_37 = (MR_Integer) 0;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_38_38;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_39_39;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_40_40;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_41_41;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_42_42;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_43_43;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 243 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_30_30;
#line 245 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_31_31;

#line 239 "mode_robdd.tfeirn.m"
    {
#line 239 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__TU_26 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__TA_4, mode_robdd__tfeirn__TB_10);
    }
#line 240 "mode_robdd.tfeirn.m"
    {
#line 240 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__FU_27 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__FA_5, mode_robdd__tfeirn__FB_11);
    }
#line 241 "mode_robdd.tfeirn.m"
    {
#line 241 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__EU_28 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__EB_12);
    }
#line 242 "mode_robdd.tfeirn.m"
    {
#line 242 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__IU_29 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__IB_13);
    }
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_40_40 = (MR_Integer) 0;
#line 244 "mode_robdd.tfeirn.m"
    {
#line 244 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 4) = ((MR_Box) (mode_robdd__tfeirn__RA_8));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 5) = ((MR_Box) (mode_robdd__tfeirn__V_40_40));
#line 244 "mode_robdd.tfeirn.m"
    }
#line 243 "mode_robdd.tfeirn.m"
    {
#line 243 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_38_38 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_39_39);
    }
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TA1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 0)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FA1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 1)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__EA1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 2)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__IA1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 3)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__RA1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 4)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 5)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_43_43 = (MR_Integer) 0;
#line 246 "mode_robdd.tfeirn.m"
    {
#line 246 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_14));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 5) = ((MR_Box) (mode_robdd__tfeirn__V_43_43));
#line 246 "mode_robdd.tfeirn.m"
    }
#line 245 "mode_robdd.tfeirn.m"
    {
#line 245 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_41_41 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_42_42);
    }
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TB1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 0)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FB1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 1)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__EB1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 2)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__IB1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 3)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__RB1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 4)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 5)));
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_32_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__TA1_16, mode_robdd__tfeirn__TB1_17);
    }
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_33_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__FA1_18, mode_robdd__tfeirn__FB1_19);
    }
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_34_34 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA1_20, mode_robdd__tfeirn__EB1_21);
    }
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_35_35 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA1_22, mode_robdd__tfeirn__IB1_23);
    }
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_36_36 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__RA1_24, mode_robdd__tfeirn__RB1_25);
    }
#line 238 "mode_robdd.tfeirn.m"
    {
#line 238 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_32_32));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_33_33));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_34_34));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_35_35));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_36_36));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_37_37));
#line 238 "mode_robdd.tfeirn.m"
    }
#line 238 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 238 "mode_robdd.tfeirn.m"
  }
#line 46 "mode_robdd.tfeirn.m"
}

#line 288 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4(
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 288 "mode_robdd.tfeirn.m"
{
#line 288 "mode_robdd.tfeirn.m"
  {
#line 288 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 288 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 288 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv6_HeadVar__5_72;

#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv6_HeadVar__5_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_56_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 288 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv6_HeadVar__5_72));
#line 288 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 288 "mode_robdd.tfeirn.m"
  }
#line 288 "mode_robdd.tfeirn.m"
}

#line 286 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3(
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 286 "mode_robdd.tfeirn.m"
{
#line 286 "mode_robdd.tfeirn.m"
  {
#line 286 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 286 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 286 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv4_HeadVar__5_66;

#line 286 "mode_robdd.tfeirn.m"
    {
#line 286 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv4_HeadVar__5_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_54_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 286 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv4_HeadVar__5_66));
#line 286 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 286 "mode_robdd.tfeirn.m"
  }
#line 286 "mode_robdd.tfeirn.m"
}

#line 278 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2(
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 278 "mode_robdd.tfeirn.m"
{
#line 278 "mode_robdd.tfeirn.m"
  {
#line 278 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 278 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 278 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv2_HeadVar__5_58;

#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv2_HeadVar__5_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_56_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 278 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv2_HeadVar__5_58));
#line 278 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 278 "mode_robdd.tfeirn.m"
  }
#line 278 "mode_robdd.tfeirn.m"
}

#line 276 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1(
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 276 "mode_robdd.tfeirn.m"
{
#line 276 "mode_robdd.tfeirn.m"
  {
#line 276 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 276 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 276 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__5_52;

#line 276 "mode_robdd.tfeirn.m"
    {
#line 276 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_HeadVar__5_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_54_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 276 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__5_52));
#line 276 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 276 "mode_robdd.tfeirn.m"
  }
#line 276 "mode_robdd.tfeirn.m"
}

#line 50 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 50 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 50 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 50 "mode_robdd.tfeirn.m"
{
#line 249 "mode_robdd.tfeirn.m"
  {
#line 249 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_16;
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__NA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__NB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_92_92;

#line 250 "mode_robdd.tfeirn.m"
    {
#line 250 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_92_92 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
    }
#line 250 "mode_robdd.tfeirn.m"
    {
#line 250 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA0_8, mode_robdd__tfeirn__V_92_92);
    }
#line 252 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 251 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__2_2;
#line 252 "mode_robdd.tfeirn.m"
    else
#line 254 "mode_robdd.tfeirn.m"
      {
#line 252 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_93_93;

#line 252 "mode_robdd.tfeirn.m"
        {
#line 252 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_93_93 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
        }
#line 252 "mode_robdd.tfeirn.m"
        {
#line 252 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RB0_14, mode_robdd__tfeirn__V_93_93);
        }
#line 254 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 253 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__1_1;
#line 254 "mode_robdd.tfeirn.m"
        else
#line 255 "mode_robdd.tfeirn.m"
          {
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_87_87 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_89;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_90_90;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_91_91;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_98_98;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_99_99;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_100_100;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_101_101;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__T_17;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__F_18;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__E_19;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__I_20;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__R_21;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EA_22;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EB_23;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IA_24;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IB_25;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA_26;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB_27;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TAB_28;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FAB_29;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TBA_30;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FBA_31;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EAB_32;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EBA_33;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA1_34;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA2_37;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EA1_38;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA3_39;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IA1_40;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB1_41;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB2_42;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EB1_43;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB3_44;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IB1_45;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_46_46 = (MR_Integer) 0;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_47_47;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_48_48;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_49_49;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_55_55;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_61_61;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_62_62;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_63_63;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_69_69;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_75_75;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_76_76;
#line 276 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv1_RA1_34;
#line 278 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv3_RA2_37;
#line 286 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv5_RB1_41;
#line 288 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv7_RB2_42;

#line 256 "mode_robdd.tfeirn.m"
            {
#line 256 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__T_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TA0_4, mode_robdd__tfeirn__TB0_10);
            }
#line 257 "mode_robdd.tfeirn.m"
            {
#line 257 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__F_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FA0_5, mode_robdd__tfeirn__FB0_11);
            }
#line 262 "mode_robdd.tfeirn.m"
            {
#line 262 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__TAB_28 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TA0_4, mode_robdd__tfeirn__TB0_10);
            }
#line 263 "mode_robdd.tfeirn.m"
            {
#line 263 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__FAB_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FA0_5, mode_robdd__tfeirn__FB0_11);
            }
#line 264 "mode_robdd.tfeirn.m"
            {
#line 264 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_47_47 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TAB_28, mode_robdd__tfeirn__EA0_6);
            }
#line 264 "mode_robdd.tfeirn.m"
            {
#line 264 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EA_22 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FAB_29, mode_robdd__tfeirn__V_47_47);
            }
#line 266 "mode_robdd.tfeirn.m"
            {
#line 266 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__TBA_30 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TB0_10, mode_robdd__tfeirn__TA0_4);
            }
#line 267 "mode_robdd.tfeirn.m"
            {
#line 267 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__FBA_31 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FB0_11, mode_robdd__tfeirn__FA0_5);
            }
#line 268 "mode_robdd.tfeirn.m"
            {
#line 268 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_48_48 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TBA_30, mode_robdd__tfeirn__EB0_12);
            }
#line 268 "mode_robdd.tfeirn.m"
            {
#line 268 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EB_23 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FBA_31, mode_robdd__tfeirn__V_48_48);
            }
#line 258 "mode_robdd.tfeirn.m"
            {
#line 258 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__E_19 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 270 "mode_robdd.tfeirn.m"
            {
#line 270 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EAB_32 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 271 "mode_robdd.tfeirn.m"
            {
#line 271 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IA_24 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EAB_32, mode_robdd__tfeirn__IA0_7);
            }
#line 273 "mode_robdd.tfeirn.m"
            {
#line 273 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EBA_33 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
#line 274 "mode_robdd.tfeirn.m"
            {
#line 274 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IB_25 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EBA_33, mode_robdd__tfeirn__IB0_13);
            }
#line 259 "mode_robdd.tfeirn.m"
            {
#line 259 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__I_20 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
#line 1701 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 1703 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_89 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 1705 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_90_90 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 1707 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_91_91 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[3];
#line 276 "mode_robdd.tfeirn.m"
            {
#line 276 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1));
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 276 "mode_robdd.tfeirn.m"
            }
#line 1725 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_98_98 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 276 "mode_robdd.tfeirn.m"
            {
#line 276 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_RA1_34 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_98_98, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__V_49_49, mode_robdd__tfeirn__TAB_28, ((MR_Box) (mode_robdd__tfeirn__RA0_8)));
            }
#line 276 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RA1_34 = ((MR_Word) mode_robdd__tfeirn__conv1_RA1_34);
#line 278 "mode_robdd.tfeirn.m"
            {
#line 278 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2));
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 278 "mode_robdd.tfeirn.m"
            }
#line 1750 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_99_99 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 278 "mode_robdd.tfeirn.m"
            {
#line 278 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv3_RA2_37 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_99_99, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__V_55_55, mode_robdd__tfeirn__FAB_29, ((MR_Box) (mode_robdd__tfeirn__RA1_34)));
            }
#line 278 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RA2_37 = ((MR_Word) mode_robdd__tfeirn__conv3_RA2_37);
#line 281 "mode_robdd.tfeirn.m"
            {
#line 281 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_61_61 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 281 "mode_robdd.tfeirn.m"
            {
#line 281 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EA1_38 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_61_61, mode_robdd__tfeirn__EA0_6);
            }
#line 282 "mode_robdd.tfeirn.m"
            {
#line 282 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RA3_39 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA1_38, mode_robdd__tfeirn__RA2_37);
            }
#line 283 "mode_robdd.tfeirn.m"
            {
#line 283 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_62_62 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
#line 283 "mode_robdd.tfeirn.m"
            {
#line 283 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IA1_40 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_62_62, mode_robdd__tfeirn__IA0_7);
            }
#line 284 "mode_robdd.tfeirn.m"
            {
#line 284 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RA_26 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA1_40, mode_robdd__tfeirn__RA3_39);
            }
#line 286 "mode_robdd.tfeirn.m"
            {
#line 286 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3));
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 286 "mode_robdd.tfeirn.m"
            }
#line 1805 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_100_100 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 286 "mode_robdd.tfeirn.m"
            {
#line 286 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv5_RB1_41 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_100_100, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__V_63_63, mode_robdd__tfeirn__TBA_30, ((MR_Box) (mode_robdd__tfeirn__RB0_14)));
            }
#line 286 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RB1_41 = ((MR_Word) mode_robdd__tfeirn__conv5_RB1_41);
#line 288 "mode_robdd.tfeirn.m"
            {
#line 288 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4));
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 288 "mode_robdd.tfeirn.m"
            }
#line 1830 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_101_101 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 288 "mode_robdd.tfeirn.m"
            {
#line 288 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv7_RB2_42 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_101_101, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__V_69_69, mode_robdd__tfeirn__FBA_31, ((MR_Box) (mode_robdd__tfeirn__RB1_41)));
            }
#line 288 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RB2_42 = ((MR_Word) mode_robdd__tfeirn__conv7_RB2_42);
#line 291 "mode_robdd.tfeirn.m"
            {
#line 291 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_75_75 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
#line 291 "mode_robdd.tfeirn.m"
            {
#line 291 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EB1_43 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_75_75, mode_robdd__tfeirn__EB0_12);
            }
#line 292 "mode_robdd.tfeirn.m"
            {
#line 292 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RB3_44 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB1_43, mode_robdd__tfeirn__RB2_42);
            }
#line 293 "mode_robdd.tfeirn.m"
            {
#line 293 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_76_76 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB_25, mode_robdd__tfeirn__IA_24);
            }
#line 293 "mode_robdd.tfeirn.m"
            {
#line 293 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IB1_45 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_76_76, mode_robdd__tfeirn__IB0_13);
            }
#line 294 "mode_robdd.tfeirn.m"
            {
#line 294 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RB_27 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB1_45, mode_robdd__tfeirn__RB3_44);
            }
#line 260 "mode_robdd.tfeirn.m"
            {
#line 260 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__R_21 = mercury__robdd__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA_26, mode_robdd__tfeirn__RB_27);
            }
#line 255 "mode_robdd.tfeirn.m"
            {
#line 255 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 0) = ((MR_Box) (mode_robdd__tfeirn__T_17));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 1) = ((MR_Box) (mode_robdd__tfeirn__F_18));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 2) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 3) = ((MR_Box) (mode_robdd__tfeirn__I_20));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 4) = ((MR_Box) (mode_robdd__tfeirn__R_21));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 5) = ((MR_Box) (mode_robdd__tfeirn__V_46_46));
#line 255 "mode_robdd.tfeirn.m"
            }
#line 255 "mode_robdd.tfeirn.m"
          }
#line 254 "mode_robdd.tfeirn.m"
      }
#line 249 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_16;
#line 249 "mode_robdd.tfeirn.m"
  }
#line 50 "mode_robdd.tfeirn.m"
}

#line 55 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 55 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 55 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 55 "mode_robdd.tfeirn.m"
{
#line 350 "mode_robdd.tfeirn.m"
  {
#line 350 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 344 "mode_robdd.tfeirn.m"
    {
#line 344 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_27_27, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
    }
#line 350 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 350 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 350 "mode_robdd.tfeirn.m"
    else
#line 350 "mode_robdd.tfeirn.m"
      {
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 346 "mode_robdd.tfeirn.m"
        {
#line 346 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_28_28, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__F_7, mode_robdd__tfeirn__V_4);
        }
#line 350 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 350 "mode_robdd.tfeirn.m"
          {
#line 350 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 350 "mode_robdd.tfeirn.m"
        else
#line 349 "mode_robdd.tfeirn.m"
          {
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_12_12;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 349 "mode_robdd.tfeirn.m"
            {
#line 349 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
            }
#line 349 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_13_13 = (MR_Integer) 0;
#line 350 "mode_robdd.tfeirn.m"
            {
#line 350 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_7));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 350 "mode_robdd.tfeirn.m"
            }
#line 349 "mode_robdd.tfeirn.m"
          }
#line 350 "mode_robdd.tfeirn.m"
      }
#line 350 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 350 "mode_robdd.tfeirn.m"
  }
#line 55 "mode_robdd.tfeirn.m"
}

#line 59 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 59 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 59 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 59 "mode_robdd.tfeirn.m"
{
#line 360 "mode_robdd.tfeirn.m"
  {
#line 360 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 354 "mode_robdd.tfeirn.m"
    {
#line 354 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_27_27, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
#line 360 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 360 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 360 "mode_robdd.tfeirn.m"
    else
#line 360 "mode_robdd.tfeirn.m"
      {
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 356 "mode_robdd.tfeirn.m"
        {
#line 356 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_28_28, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__T_7, mode_robdd__tfeirn__V_4);
        }
#line 360 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 360 "mode_robdd.tfeirn.m"
          {
#line 360 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 360 "mode_robdd.tfeirn.m"
        else
#line 359 "mode_robdd.tfeirn.m"
          {
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_12_12;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 359 "mode_robdd.tfeirn.m"
            {
#line 359 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 359 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_13_13 = (MR_Integer) 0;
#line 360 "mode_robdd.tfeirn.m"
            {
#line 360 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 360 "mode_robdd.tfeirn.m"
            }
#line 359 "mode_robdd.tfeirn.m"
          }
#line 360 "mode_robdd.tfeirn.m"
      }
#line 360 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 360 "mode_robdd.tfeirn.m"
  }
#line 59 "mode_robdd.tfeirn.m"
}

#line 63 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 63 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 63 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 63 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 63 "mode_robdd.tfeirn.m"
{
#line 378 "mode_robdd.tfeirn.m"
  {
#line 378 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

#line 365 "mode_robdd.tfeirn.m"
    {
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34;

#line 365 "mode_robdd.tfeirn.m"
      {
#line 365 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
#line 365 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 365 "mode_robdd.tfeirn.m"
        {
#line 2221 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 365 "mode_robdd.tfeirn.m"
          {
#line 365 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
          }
#line 365 "mode_robdd.tfeirn.m"
        }
#line 365 "mode_robdd.tfeirn.m"
    }
#line 366 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 366 "mode_robdd.tfeirn.m"
      {
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36;

#line 366 "mode_robdd.tfeirn.m"
        {
#line 366 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
#line 366 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 366 "mode_robdd.tfeirn.m"
          {
#line 2258 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 366 "mode_robdd.tfeirn.m"
            {
#line 366 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
#line 366 "mode_robdd.tfeirn.m"
          }
#line 366 "mode_robdd.tfeirn.m"
      }
#line 378 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 378 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 378 "mode_robdd.tfeirn.m"
    else
#line 378 "mode_robdd.tfeirn.m"
      {
#line 371 "mode_robdd.tfeirn.m"
        {
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_37_37 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38;

#line 371 "mode_robdd.tfeirn.m"
          {
#line 371 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_37_37, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
#line 371 "mode_robdd.tfeirn.m"
          if (mode_robdd__tfeirn__succeeded)
#line 371 "mode_robdd.tfeirn.m"
            {
#line 2301 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 371 "mode_robdd.tfeirn.m"
              {
#line 371 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_38_38, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
              }
#line 371 "mode_robdd.tfeirn.m"
            }
#line 371 "mode_robdd.tfeirn.m"
        }
#line 372 "mode_robdd.tfeirn.m"
        if (!(mode_robdd__tfeirn__succeeded))
#line 372 "mode_robdd.tfeirn.m"
          {
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40;

#line 372 "mode_robdd.tfeirn.m"
            {
#line 372 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 372 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 372 "mode_robdd.tfeirn.m"
              {
#line 2338 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 372 "mode_robdd.tfeirn.m"
                {
#line 372 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
                }
#line 372 "mode_robdd.tfeirn.m"
              }
#line 372 "mode_robdd.tfeirn.m"
          }
#line 378 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 378 "mode_robdd.tfeirn.m"
          {
#line 378 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 378 "mode_robdd.tfeirn.m"
        else
#line 377 "mode_robdd.tfeirn.m"
          {
#line 377 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 377 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;

#line 377 "mode_robdd.tfeirn.m"
            {
#line 377 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = mode_robdd__equiv_vars__add_equality_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__E_10);
            }
#line 377 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_15_15 = (MR_Integer) 0;
#line 378 "mode_robdd.tfeirn.m"
            {
#line 378 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__I_11));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 378 "mode_robdd.tfeirn.m"
            }
#line 377 "mode_robdd.tfeirn.m"
          }
#line 378 "mode_robdd.tfeirn.m"
      }
#line 378 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 378 "mode_robdd.tfeirn.m"
  }
#line 63 "mode_robdd.tfeirn.m"
}

#line 67 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 67 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 67 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 67 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 67 "mode_robdd.tfeirn.m"
{
#line 396 "mode_robdd.tfeirn.m"
  {
#line 396 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

#line 383 "mode_robdd.tfeirn.m"
    {
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34;

#line 383 "mode_robdd.tfeirn.m"
      {
#line 383 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
#line 383 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 383 "mode_robdd.tfeirn.m"
        {
#line 2457 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 383 "mode_robdd.tfeirn.m"
          {
#line 383 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
          }
#line 383 "mode_robdd.tfeirn.m"
        }
#line 383 "mode_robdd.tfeirn.m"
    }
#line 384 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 384 "mode_robdd.tfeirn.m"
      {
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36;

#line 384 "mode_robdd.tfeirn.m"
        {
#line 384 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
#line 384 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 384 "mode_robdd.tfeirn.m"
          {
#line 2494 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 384 "mode_robdd.tfeirn.m"
            {
#line 384 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
#line 384 "mode_robdd.tfeirn.m"
          }
#line 384 "mode_robdd.tfeirn.m"
      }
#line 396 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 396 "mode_robdd.tfeirn.m"
      {
#line 396 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
#line 396 "mode_robdd.tfeirn.m"
    else
#line 396 "mode_robdd.tfeirn.m"
      {
#line 389 "mode_robdd.tfeirn.m"
        {
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_37_37 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38;

#line 389 "mode_robdd.tfeirn.m"
          {
#line 389 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_37_37, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
#line 389 "mode_robdd.tfeirn.m"
          if (mode_robdd__tfeirn__succeeded)
#line 389 "mode_robdd.tfeirn.m"
            {
#line 2540 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 389 "mode_robdd.tfeirn.m"
              {
#line 389 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_38_38, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
              }
#line 389 "mode_robdd.tfeirn.m"
            }
#line 389 "mode_robdd.tfeirn.m"
        }
#line 390 "mode_robdd.tfeirn.m"
        if (!(mode_robdd__tfeirn__succeeded))
#line 390 "mode_robdd.tfeirn.m"
          {
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40;

#line 390 "mode_robdd.tfeirn.m"
            {
#line 390 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 390 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 390 "mode_robdd.tfeirn.m"
              {
#line 2577 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 390 "mode_robdd.tfeirn.m"
                {
#line 390 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
                }
#line 390 "mode_robdd.tfeirn.m"
              }
#line 390 "mode_robdd.tfeirn.m"
          }
#line 396 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 396 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 396 "mode_robdd.tfeirn.m"
        else
#line 395 "mode_robdd.tfeirn.m"
          {
#line 395 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 395 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;

#line 395 "mode_robdd.tfeirn.m"
            {
#line 395 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__neq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
            }
#line 395 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_15_15 = (MR_Integer) 0;
#line 396 "mode_robdd.tfeirn.m"
            {
#line 396 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 396 "mode_robdd.tfeirn.m"
            }
#line 395 "mode_robdd.tfeirn.m"
          }
#line 396 "mode_robdd.tfeirn.m"
      }
#line 396 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 396 "mode_robdd.tfeirn.m"
  }
#line 67 "mode_robdd.tfeirn.m"
}

#line 71 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_109_112_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 71 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 71 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 71 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 71 "mode_robdd.tfeirn.m"
{
#line 408 "mode_robdd.tfeirn.m"
  {
#line 408 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30;

#line 400 "mode_robdd.tfeirn.m"
    {
#line 400 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
    }
#line 400 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 400 "mode_robdd.tfeirn.m"
      {
#line 2690 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 400 "mode_robdd.tfeirn.m"
        {
#line 400 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_30_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
        }
#line 400 "mode_robdd.tfeirn.m"
      }
#line 408 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 408 "mode_robdd.tfeirn.m"
      {
#line 408 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
#line 408 "mode_robdd.tfeirn.m"
    else
#line 408 "mode_robdd.tfeirn.m"
      {
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 402 "mode_robdd.tfeirn.m"
        {
#line 402 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_31_31, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
#line 408 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 408 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 408 "mode_robdd.tfeirn.m"
        else
#line 408 "mode_robdd.tfeirn.m"
          {
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_32_32 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 404 "mode_robdd.tfeirn.m"
            {
#line 404 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_32_32, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 408 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 408 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 408 "mode_robdd.tfeirn.m"
            else
#line 407 "mode_robdd.tfeirn.m"
              {
#line 407 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_14_14;
#line 407 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_15_15;

#line 407 "mode_robdd.tfeirn.m"
                {
#line 407 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                }
#line 407 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__V_15_15 = (MR_Integer) 0;
#line 408 "mode_robdd.tfeirn.m"
                {
#line 408 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 408 "mode_robdd.tfeirn.m"
                }
#line 407 "mode_robdd.tfeirn.m"
              }
#line 408 "mode_robdd.tfeirn.m"
          }
#line 408 "mode_robdd.tfeirn.m"
      }
#line 408 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 408 "mode_robdd.tfeirn.m"
  }
#line 71 "mode_robdd.tfeirn.m"
}

#line 75 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 75 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 75 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 75 "mode_robdd.tfeirn.m"
{
#line 418 "mode_robdd.tfeirn.m"
  {
#line 418 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 412 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 412 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 412 "mode_robdd.tfeirn.m"
    {
#line 412 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_6);
    }
#line 418 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 418 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 418 "mode_robdd.tfeirn.m"
    else
#line 418 "mode_robdd.tfeirn.m"
      {
#line 414 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 414 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 414 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 414 "mode_robdd.tfeirn.m"
        {
#line 414 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_7);
        }
#line 414 "mode_robdd.tfeirn.m"
        {
#line 414 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__V_12_12);
        }
#line 414 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 418 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 418 "mode_robdd.tfeirn.m"
          {
#line 418 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 418 "mode_robdd.tfeirn.m"
        else
#line 417 "mode_robdd.tfeirn.m"
          {
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;

#line 417 "mode_robdd.tfeirn.m"
            {
#line 417 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__Vars_4);
            }
#line 417 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_14_14 = (MR_Integer) 0;
#line 418 "mode_robdd.tfeirn.m"
            {
#line 418 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_7));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 418 "mode_robdd.tfeirn.m"
            }
#line 417 "mode_robdd.tfeirn.m"
          }
#line 418 "mode_robdd.tfeirn.m"
      }
#line 418 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 418 "mode_robdd.tfeirn.m"
  }
#line 75 "mode_robdd.tfeirn.m"
}

#line 79 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 79 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 79 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 79 "mode_robdd.tfeirn.m"
{
#line 428 "mode_robdd.tfeirn.m"
  {
#line 428 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 422 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 422 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 422 "mode_robdd.tfeirn.m"
    {
#line 422 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_6);
    }
#line 428 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 428 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 428 "mode_robdd.tfeirn.m"
    else
#line 428 "mode_robdd.tfeirn.m"
      {
#line 424 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 424 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 424 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 424 "mode_robdd.tfeirn.m"
        {
#line 424 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
        }
#line 424 "mode_robdd.tfeirn.m"
        {
#line 424 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__V_12_12);
        }
#line 424 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 428 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 428 "mode_robdd.tfeirn.m"
          {
#line 428 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 428 "mode_robdd.tfeirn.m"
        else
#line 427 "mode_robdd.tfeirn.m"
          {
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;

#line 427 "mode_robdd.tfeirn.m"
            {
#line 427 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__Vars_4);
            }
#line 427 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_14_14 = (MR_Integer) 0;
#line 428 "mode_robdd.tfeirn.m"
            {
#line 428 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 428 "mode_robdd.tfeirn.m"
            }
#line 427 "mode_robdd.tfeirn.m"
          }
#line 428 "mode_robdd.tfeirn.m"
      }
#line 428 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 428 "mode_robdd.tfeirn.m"
  }
#line 79 "mode_robdd.tfeirn.m"
}

#line 83 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 83 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 83 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_5)
#line 83 "mode_robdd.tfeirn.m"
{
#line 431 "mode_robdd.tfeirn.m"
  {
#line 431 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_6;
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_22 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 0)));
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 1)));
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 2)));
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 3)));
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 4)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___N_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 5)));
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;

#line 433 "mode_robdd.tfeirn.m"
    {
#line 433 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_18_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_24_24, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
    }
#line 433 "mode_robdd.tfeirn.m"
    {
#line 433 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_24_24, mode_robdd__tfeirn__V_18_18);
    }
#line 433 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 435 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 434 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__X0_5;
#line 435 "mode_robdd.tfeirn.m"
    else
#line 437 "mode_robdd.tfeirn.m"
      {
#line 435 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 435 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 435 "mode_robdd.tfeirn.m"
        {
#line 435 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_26_26, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_8);
        }
#line 437 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 436 "mode_robdd.tfeirn.m"
          {
#line 436 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 437 "mode_robdd.tfeirn.m"
        else
#line 438 "mode_robdd.tfeirn.m"
          {
#line 438 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 438 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 438 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__VarsNF_13;
#line 451 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_30;
#line 451 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__Var1_14;
#line 451 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__VarsNF1_15;
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29;
#line 439 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv0_Var1_14;

#line 438 "mode_robdd.tfeirn.m"
            {
#line 438 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__VarsNF_13 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_8);
            }
#line 3144 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3146 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 439 "mode_robdd.tfeirn.m"
            {
#line 439 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv0_Var1_14, mode_robdd__tfeirn__VarsNF_13, &mode_robdd__tfeirn__VarsNF1_15);
            }
#line 439 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 439 "mode_robdd.tfeirn.m"
              {
#line 439 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__Var1_14 = ((MR_Word) mode_robdd__tfeirn__conv0_Var1_14);
#line 439 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 439 "mode_robdd.tfeirn.m"
              }
#line 451 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 448 "mode_robdd.tfeirn.m"
              {
#line 448 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__Var2_16;
#line 448 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__VarsNF2_17;
#line 440 "mode_robdd.tfeirn.m"
                MR_Box mode_robdd__tfeirn__conv1_Var2_16;

#line 440 "mode_robdd.tfeirn.m"
                {
#line 440 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv1_Var2_16, mode_robdd__tfeirn__VarsNF1_15, &mode_robdd__tfeirn__VarsNF2_17);
                }
#line 440 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 440 "mode_robdd.tfeirn.m"
                  {
#line 440 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Var2_16 = ((MR_Word) mode_robdd__tfeirn__conv1_Var2_16);
#line 440 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 440 "mode_robdd.tfeirn.m"
                  }
#line 448 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 445 "mode_robdd.tfeirn.m"
                  {
#line 441 "mode_robdd.tfeirn.m"
                    {
#line 441 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__VarsNF2_17);
                    }
#line 445 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 442 "mode_robdd.tfeirn.m"
                      {
#line 442 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_19_19;
#line 442 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_20_20;

#line 442 "mode_robdd.tfeirn.m"
                        {
#line 442 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__V_19_19 = mode_robdd__implications__either_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__Var2_16, mode_robdd__tfeirn__I_10);
                        }
#line 442 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__V_20_20 = (MR_Integer) 0;
#line 442 "mode_robdd.tfeirn.m"
                        {
#line 442 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__X_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 2) = ((MR_Box) (mode_robdd__tfeirn__E_9));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 3) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 4) = ((MR_Box) (mode_robdd__tfeirn__R_11));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 5) = ((MR_Box) (mode_robdd__tfeirn__V_20_20));
#line 442 "mode_robdd.tfeirn.m"
                        }
#line 442 "mode_robdd.tfeirn.m"
                      }
#line 445 "mode_robdd.tfeirn.m"
                    else
#line 446 "mode_robdd.tfeirn.m"
                      {
#line 446 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_21_21;

#line 446 "mode_robdd.tfeirn.m"
                        {
#line 446 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__V_21_21 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__VarsNF_13);
                        }
#line 446 "mode_robdd.tfeirn.m"
                        {
#line 446 "mode_robdd.tfeirn.m"
                          return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__X0_5, mode_robdd__tfeirn__V_21_21);
                        }
#line 446 "mode_robdd.tfeirn.m"
                      }
#line 445 "mode_robdd.tfeirn.m"
                  }
#line 448 "mode_robdd.tfeirn.m"
                else
#line 449 "mode_robdd.tfeirn.m"
                  {
#line 449 "mode_robdd.tfeirn.m"
                    return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__X0_5);
                  }
#line 448 "mode_robdd.tfeirn.m"
              }
#line 451 "mode_robdd.tfeirn.m"
            else
#line 452 "mode_robdd.tfeirn.m"
              {
#line 452 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
              }
#line 438 "mode_robdd.tfeirn.m"
          }
#line 437 "mode_robdd.tfeirn.m"
      }
#line 431 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_6;
#line 431 "mode_robdd.tfeirn.m"
  }
#line 83 "mode_robdd.tfeirn.m"
}

#line 87 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_111_110_101_95_111_102_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 87 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 87 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 87 "mode_robdd.tfeirn.m"
{
#line 463 "mode_robdd.tfeirn.m"
  {
#line 463 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 457 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__V_12_12;
#line 457 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__V_13_13;
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;

#line 457 "mode_robdd.tfeirn.m"
    {
#line 457 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_22_22, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_6);
    }
#line 457 "mode_robdd.tfeirn.m"
    {
#line 457 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__V_14_14);
    }
#line 457 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_13_13 = (MR_Integer) 1;
#line 457 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_12_12 <= mode_robdd__tfeirn__V_13_13);
#line 463 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 463 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 463 "mode_robdd.tfeirn.m"
    else
#line 463 "mode_robdd.tfeirn.m"
      {
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 459 "mode_robdd.tfeirn.m"
        MR_Integer mode_robdd__tfeirn__V_15_15;
#line 459 "mode_robdd.tfeirn.m"
        MR_Integer mode_robdd__tfeirn__V_16_16;
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_17_17;

#line 459 "mode_robdd.tfeirn.m"
        {
#line 459 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_26_26, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
        }
#line 459 "mode_robdd.tfeirn.m"
        {
#line 459 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__V_17_17);
        }
#line 459 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_16_16 = (MR_Integer) 1;
#line 459 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_15_15 > mode_robdd__tfeirn__V_16_16);
#line 463 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 463 "mode_robdd.tfeirn.m"
          {
#line 463 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 463 "mode_robdd.tfeirn.m"
        else
#line 462 "mode_robdd.tfeirn.m"
          {
#line 462 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 462 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;

#line 462 "mode_robdd.tfeirn.m"
            {
#line 462 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_18_18 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__I_9);
            }
#line 462 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = (MR_Integer) 0;
#line 463 "mode_robdd.tfeirn.m"
            {
#line 463 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 463 "mode_robdd.tfeirn.m"
            }
#line 462 "mode_robdd.tfeirn.m"
          }
#line 463 "mode_robdd.tfeirn.m"
      }
#line 463 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 463 "mode_robdd.tfeirn.m"
  }
#line 87 "mode_robdd.tfeirn.m"
}

#line 91 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_98_111_116_104_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 91 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 91 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 91 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 91 "mode_robdd.tfeirn.m"
{
#line 477 "mode_robdd.tfeirn.m"
  {
#line 477 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 467 "mode_robdd.tfeirn.m"
    {
#line 467 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarA_5);
    }
#line 477 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 477 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 477 "mode_robdd.tfeirn.m"
    else
#line 477 "mode_robdd.tfeirn.m"
      {
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 469 "mode_robdd.tfeirn.m"
        {
#line 469 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarB_6);
        }
#line 477 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 477 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 477 "mode_robdd.tfeirn.m"
        else
#line 477 "mode_robdd.tfeirn.m"
          {
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 471 "mode_robdd.tfeirn.m"
            {
#line 471 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarA_5);
            }
#line 477 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 477 "mode_robdd.tfeirn.m"
              {
#line 477 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__X_7);
              }
#line 477 "mode_robdd.tfeirn.m"
            else
#line 477 "mode_robdd.tfeirn.m"
              {
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 473 "mode_robdd.tfeirn.m"
                {
#line 473 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarB_6);
                }
#line 477 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 477 "mode_robdd.tfeirn.m"
                  {
#line 477 "mode_robdd.tfeirn.m"
                    return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__X_7);
                  }
#line 477 "mode_robdd.tfeirn.m"
                else
#line 476 "mode_robdd.tfeirn.m"
                  {
#line 476 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_14_14;
#line 476 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_15_15;

#line 476 "mode_robdd.tfeirn.m"
                    {
#line 476 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                    }
#line 476 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_15_15 = (MR_Integer) 0;
#line 477 "mode_robdd.tfeirn.m"
                    {
#line 477 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_9));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 477 "mode_robdd.tfeirn.m"
                    }
#line 476 "mode_robdd.tfeirn.m"
                  }
#line 477 "mode_robdd.tfeirn.m"
              }
#line 477 "mode_robdd.tfeirn.m"
          }
#line 477 "mode_robdd.tfeirn.m"
      }
#line 477 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 477 "mode_robdd.tfeirn.m"
  }
#line 91 "mode_robdd.tfeirn.m"
}

#line 95 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_111_95_99_111_110_115_116_114_97_105_110_116_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_4_f_0(
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_in_6,
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_out_7,
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V__8,
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_9)
#line 95 "mode_robdd.tfeirn.m"
{
#line 481 "mode_robdd.tfeirn.m"
  {
#line 481 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_5;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_19;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Vars_10;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;

#line 481 "mode_robdd.tfeirn.m"
    {
#line 481 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_11_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_98_111_116_104_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__V_in_6, mode_robdd__tfeirn__V__8, mode_robdd__tfeirn__X_9);
    }
#line 3654 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3656 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3658 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 3660 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeClassInfo_for_enum_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 482 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_13_13, 0) = ((MR_Box) (mode_robdd__tfeirn__V__8));
#line 482 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_13_13, 1) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 482 "mode_robdd.tfeirn.m"
    }
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_12_12, 0) = ((MR_Box) (mode_robdd__tfeirn__V_in_6));
#line 482 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_12_12, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 482 "mode_robdd.tfeirn.m"
    }
#line 3684 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__TypeCtorInfo_20_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_19, mode_robdd__tfeirn__V_12_12);
    }
#line 481 "mode_robdd.tfeirn.m"
    {
#line 481 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_5 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__V_out_7, mode_robdd__tfeirn__V_11_11);
    }
#line 481 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_5;
#line 481 "mode_robdd.tfeirn.m"
  }
#line 95 "mode_robdd.tfeirn.m"
}

#line 520 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1(
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 520 "mode_robdd.tfeirn.m"
{
#line 520 "mode_robdd.tfeirn.m"
  {
#line 520 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 520 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 520 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_HeadVar__5_20;

#line 520 "mode_robdd.tfeirn.m"
    {
#line 520 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_HeadVar__5_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__520__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 520 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv1_HeadVar__5_20));
#line 520 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 520 "mode_robdd.tfeirn.m"
  }
#line 520 "mode_robdd.tfeirn.m"
}

#line 100 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 100 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_5,
#line 100 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Var_6,
#line 100 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 100 "mode_robdd.tfeirn.m"
{
#line 510 "mode_robdd.tfeirn.m"
  {
#line 510 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_21 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___R_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___N_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 485 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 485 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 485 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_25 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 485 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 485 "mode_robdd.tfeirn.m"
    {
#line 485 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_45_45, mode_robdd__tfeirn__TypeClassInfo_for_enum_25, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__Var_6);
    }
#line 510 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
      {
#line 486 "mode_robdd.tfeirn.m"
        {
#line 486 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_23_23, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
        }
#line 510 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 510 "mode_robdd.tfeirn.m"
        else
#line 510 "mode_robdd.tfeirn.m"
          {
#line 510 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
          }
#line 510 "mode_robdd.tfeirn.m"
      }
#line 510 "mode_robdd.tfeirn.m"
    else
#line 510 "mode_robdd.tfeirn.m"
      {
#line 510 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 491 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 491 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 491 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_31 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 491 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_46_46 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 491 "mode_robdd.tfeirn.m"
        {
#line 491 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_46_46, mode_robdd__tfeirn__TypeClassInfo_for_enum_31, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__Var_6);
        }
#line 510 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
          {
#line 492 "mode_robdd.tfeirn.m"
            {
#line 492 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_29_29, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
            }
#line 510 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
              {
#line 510 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
              }
#line 510 "mode_robdd.tfeirn.m"
            else
#line 510 "mode_robdd.tfeirn.m"
              {
#line 510 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
              }
#line 510 "mode_robdd.tfeirn.m"
          }
#line 510 "mode_robdd.tfeirn.m"
        else
#line 510 "mode_robdd.tfeirn.m"
          {
#line 497 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 497 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_35_35 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 497 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;

#line 497 "mode_robdd.tfeirn.m"
            {
#line 497 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_16_16 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_35_35, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__T_9);
            }
#line 497 "mode_robdd.tfeirn.m"
            {
#line 497 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_35_35, mode_robdd__tfeirn__V_16_16);
            }
#line 497 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 510 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
              {
#line 510 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
              }
#line 510 "mode_robdd.tfeirn.m"
            else
#line 510 "mode_robdd.tfeirn.m"
              {
#line 499 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 499 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_37_37 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 499 "mode_robdd.tfeirn.m"
                {
#line 499 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_37_37, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
                }
#line 510 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
                  {
#line 510 "mode_robdd.tfeirn.m"
                    return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                  }
#line 510 "mode_robdd.tfeirn.m"
                else
#line 510 "mode_robdd.tfeirn.m"
                  {
#line 510 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeInfo_39_39 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 510 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_41 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 510 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__Var1_10;
#line 510 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__Vars1_11;
#line 501 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 501 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 501 "mode_robdd.tfeirn.m"
                    MR_Box mode_robdd__tfeirn__conv0_Var1_10;

#line 501 "mode_robdd.tfeirn.m"
                    {
#line 501 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_41, &mode_robdd__tfeirn__conv0_Var1_10, mode_robdd__tfeirn__Vars_5, &mode_robdd__tfeirn__Vars1_11);
                    }
#line 501 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 501 "mode_robdd.tfeirn.m"
                      {
#line 501 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__Var1_10 = ((MR_Word) mode_robdd__tfeirn__conv0_Var1_10);
#line 501 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 501 "mode_robdd.tfeirn.m"
                      }
#line 510 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
                      {
#line 502 "mode_robdd.tfeirn.m"
                        {
#line 502 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_39_39, mode_robdd__tfeirn__Vars1_11);
                        }
#line 510 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
                          {
#line 510 "mode_robdd.tfeirn.m"
                            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var1_10, mode_robdd__tfeirn__X_7);
                          }
#line 510 "mode_robdd.tfeirn.m"
                        else
#line 505 "mode_robdd.tfeirn.m"
                          {
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeInfo_for_T_65 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_70;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeInfo_29_71;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_72;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_17_17;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_18_18;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_19_19;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_20_20;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__T_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__F_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__E_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__I0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__R_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__I_55;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_58_58 = (MR_Integer) 0;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_59_59;
#line 519 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 520 "mode_robdd.tfeirn.m"
                            MR_Box mode_robdd__tfeirn__conv2_I_55;

#line 520 "mode_robdd.tfeirn.m"
                            {
#line 520 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[1]));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_65));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
#line 520 "mode_robdd.tfeirn.m"
                            }
#line 4009 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeCtorInfo_28_70 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 4011 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeInfo_29_71 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[2];
#line 4013 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeCtorInfo_30_72 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 520 "mode_robdd.tfeirn.m"
                            {
#line 520 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__conv2_I_55 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_30_72, mode_robdd__tfeirn__TypeInfo_29_71, mode_robdd__tfeirn__TypeClassInfo_for_enum_41, mode_robdd__tfeirn__V_59_59, mode_robdd__tfeirn__Vars_5, ((MR_Box) (mode_robdd__tfeirn__I0_52)));
                            }
#line 520 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__I_55 = ((MR_Word) mode_robdd__tfeirn__conv2_I_55);
#line 519 "mode_robdd.tfeirn.m"
                            {
#line 519 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__T_49));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__F_50));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 2) = ((MR_Box) (mode_robdd__tfeirn__E_51));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 3) = ((MR_Box) (mode_robdd__tfeirn__I_55));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 4) = ((MR_Box) (mode_robdd__tfeirn__R_53));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 5) = ((MR_Box) (mode_robdd__tfeirn__V_58_58));
#line 519 "mode_robdd.tfeirn.m"
                            }
#line 506 "mode_robdd.tfeirn.m"
                            {
#line 506 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_19_19 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6);
                            }
#line 506 "mode_robdd.tfeirn.m"
                            {
#line 506 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_20_20 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5);
                            }
#line 505 "mode_robdd.tfeirn.m"
                            {
#line 505 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_18_18 = mercury__robdd__f_less_or_equal_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__V_19_19, mode_robdd__tfeirn__V_20_20);
                            }
#line 510 "mode_robdd.tfeirn.m"
                            {
#line 510 "mode_robdd.tfeirn.m"
                              return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__V_17_17, mode_robdd__tfeirn__V_18_18);
                            }
#line 505 "mode_robdd.tfeirn.m"
                          }
#line 510 "mode_robdd.tfeirn.m"
                      }
#line 510 "mode_robdd.tfeirn.m"
                    else
#line 510 "mode_robdd.tfeirn.m"
                      {
#line 510 "mode_robdd.tfeirn.m"
                        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                      }
#line 510 "mode_robdd.tfeirn.m"
                  }
#line 510 "mode_robdd.tfeirn.m"
              }
#line 510 "mode_robdd.tfeirn.m"
          }
#line 510 "mode_robdd.tfeirn.m"
      }
#line 510 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 510 "mode_robdd.tfeirn.m"
  }
#line 100 "mode_robdd.tfeirn.m"
}

#line 104 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_114_101_115_116_114_105_99_116_95_116_114_117_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 104 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 104 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 104 "mode_robdd.tfeirn.m"
{
#line 522 "mode_robdd.tfeirn.m"
  {
#line 522 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_11;
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_47_47 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 523 "mode_robdd.tfeirn.m"
    {
#line 523 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_47_47, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
#line 525 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 524 "mode_robdd.tfeirn.m"
      {
#line 524 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
#line 525 "mode_robdd.tfeirn.m"
    else
#line 527 "mode_robdd.tfeirn.m"
      {
#line 527 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 525 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 525 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 525 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 525 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 525 "mode_robdd.tfeirn.m"
        {
#line 525 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_48_48, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
#line 527 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 526 "mode_robdd.tfeirn.m"
          {
#line 526 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 526 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 526 "mode_robdd.tfeirn.m"
            {
#line 526 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_49_49, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
#line 526 "mode_robdd.tfeirn.m"
            {
#line 526 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 526 "mode_robdd.tfeirn.m"
            }
#line 526 "mode_robdd.tfeirn.m"
          }
#line 527 "mode_robdd.tfeirn.m"
        else
#line 528 "mode_robdd.tfeirn.m"
          {
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_51_51;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X0_12;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_20_20;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_21_21;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_22_22;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_23_23;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_25_25;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_26_26;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_27_27;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_28_28;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_29_29;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_24_24;

#line 528 "mode_robdd.tfeirn.m"
            {
#line 528 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_50_50, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
#line 528 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Integer) 0;
#line 528 "mode_robdd.tfeirn.m"
            {
#line 528 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 5) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 528 "mode_robdd.tfeirn.m"
            }
#line 528 "mode_robdd.tfeirn.m"
            {
#line 528 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_14_14);
            }
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 4285 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_51_51, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_4);
            }
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_25_25));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__V_26_26));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__V_27_27));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__V_28_28));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__V_29_29));
#line 529 "mode_robdd.tfeirn.m"
            }
#line 528 "mode_robdd.tfeirn.m"
          }
#line 527 "mode_robdd.tfeirn.m"
      }
#line 522 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_11;
#line 522 "mode_robdd.tfeirn.m"
  }
#line 104 "mode_robdd.tfeirn.m"
}

#line 108 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_114_101_115_116_114_105_99_116_95_102_97_108_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 108 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 108 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 108 "mode_robdd.tfeirn.m"
{
#line 532 "mode_robdd.tfeirn.m"
  {
#line 532 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_11;
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_47_47 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 533 "mode_robdd.tfeirn.m"
    {
#line 533 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_47_47, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
#line 535 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 534 "mode_robdd.tfeirn.m"
      {
#line 534 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
#line 535 "mode_robdd.tfeirn.m"
    else
#line 537 "mode_robdd.tfeirn.m"
      {
#line 537 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 535 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 535 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 535 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 535 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 535 "mode_robdd.tfeirn.m"
        {
#line 535 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_48_48, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
#line 537 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 536 "mode_robdd.tfeirn.m"
          {
#line 536 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 536 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 536 "mode_robdd.tfeirn.m"
            {
#line 536 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_49_49, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 536 "mode_robdd.tfeirn.m"
            {
#line 536 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 536 "mode_robdd.tfeirn.m"
            }
#line 536 "mode_robdd.tfeirn.m"
          }
#line 537 "mode_robdd.tfeirn.m"
        else
#line 538 "mode_robdd.tfeirn.m"
          {
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_51_51;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X0_12;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_20_20;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_21_21;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_22_22;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_23_23;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_24_24;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_26_26;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_27_27;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_28_28;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_29_29;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_25_25;

#line 538 "mode_robdd.tfeirn.m"
            {
#line 538 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_50_50, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 538 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Integer) 0;
#line 538 "mode_robdd.tfeirn.m"
            {
#line 538 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 5) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 538 "mode_robdd.tfeirn.m"
            }
#line 538 "mode_robdd.tfeirn.m"
            {
#line 538 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_14_14);
            }
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 4532 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_51_51, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_4);
            }
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_24_24));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__V_26_26));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__V_27_27));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__V_28_28));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__V_29_29));
#line 539 "mode_robdd.tfeirn.m"
            }
#line 538 "mode_robdd.tfeirn.m"
          }
#line 537 "mode_robdd.tfeirn.m"
      }
#line 532 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_11;
#line 532 "mode_robdd.tfeirn.m"
  }
#line 108 "mode_robdd.tfeirn.m"
}

#line 115 "mode_robdd.tfeirn.m"
MR_bool MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0(
#line 115 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3,
#line 115 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4)
#line 115 "mode_robdd.tfeirn.m"
{
#line 298 "mode_robdd.tfeirn.m"
  {
#line 298 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 298 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_12 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 298 "mode_robdd.tfeirn.m"
    {
#line 298 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 298 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_17_17;
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 298 "mode_robdd.tfeirn.m"
      {
#line 298 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_17_17 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_12);
      }
#line 298 "mode_robdd.tfeirn.m"
      {
#line 298 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_17_17);
      }
#line 298 "mode_robdd.tfeirn.m"
    }
#line 298 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 298 "mode_robdd.tfeirn.m"
      {
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_14_14 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 298 "mode_robdd.tfeirn.m"
        {
#line 298 "mode_robdd.tfeirn.m"
          return mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_20_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_16, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_4);
        }
#line 298 "mode_robdd.tfeirn.m"
      }
#line 298 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 298 "mode_robdd.tfeirn.m"
  }
#line 115 "mode_robdd.tfeirn.m"
}

#line 119 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 119 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 119 "mode_robdd.tfeirn.m"
{
#line 300 "mode_robdd.tfeirn.m"
  {
#line 300 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 300 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 300 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 301 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 301 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 301 "mode_robdd.tfeirn.m"
    {
#line 301 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
#line 301 "mode_robdd.tfeirn.m"
    {
#line 301 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__V_4_4, mode_robdd__tfeirn__V_12_12);
    }
#line 300 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 300 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "mode_robdd.tfeirn.m"
    else
#line 304 "mode_robdd.tfeirn.m"
      {
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 300 "mode_robdd.tfeirn.m"
        {
#line 300 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 300 "mode_robdd.tfeirn.m"
        }
#line 304 "mode_robdd.tfeirn.m"
      }
#line 300 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 300 "mode_robdd.tfeirn.m"
  }
#line 119 "mode_robdd.tfeirn.m"
}

#line 124 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_100_105_115_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 124 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 124 "mode_robdd.tfeirn.m"
{
#line 307 "mode_robdd.tfeirn.m"
  {
#line 307 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 307 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 307 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 308 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 308 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 308 "mode_robdd.tfeirn.m"
    {
#line 308 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
#line 308 "mode_robdd.tfeirn.m"
    {
#line 308 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__V_4_4, mode_robdd__tfeirn__V_12_12);
    }
#line 307 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 307 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "mode_robdd.tfeirn.m"
    else
#line 311 "mode_robdd.tfeirn.m"
      {
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 307 "mode_robdd.tfeirn.m"
        {
#line 307 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 307 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 307 "mode_robdd.tfeirn.m"
        }
#line 311 "mode_robdd.tfeirn.m"
      }
#line 307 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 307 "mode_robdd.tfeirn.m"
  }
#line 124 "mode_robdd.tfeirn.m"
}

#line 128 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_107_110_111_119_110_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_p_0(
#line 128 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_4,
#line 128 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_5,
#line 128 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_6)
#line 128 "mode_robdd.tfeirn.m"
{
#line 318 "mode_robdd.tfeirn.m"
  {
#line 318 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 318 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_18 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 315 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
#line 315 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_21_21;
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));

#line 315 "mode_robdd.tfeirn.m"
    {
#line 315 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_21_21 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_18);
    }
#line 315 "mode_robdd.tfeirn.m"
    {
#line 315 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_18, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_21_21);
    }
#line 318 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 316 "mode_robdd.tfeirn.m"
      {
#line 316 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 316 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 316 "mode_robdd.tfeirn.m"
        {
#line 316 "mode_robdd.tfeirn.m"
          *mode_robdd__tfeirn__TrueVars_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
#line 317 "mode_robdd.tfeirn.m"
        {
#line 317 "mode_robdd.tfeirn.m"
          *mode_robdd__tfeirn__FalseVars_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
#line 316 "mode_robdd.tfeirn.m"
      }
#line 318 "mode_robdd.tfeirn.m"
    else
#line 319 "mode_robdd.tfeirn.m"
      {
#line 319 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9;
#line 319 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10;
#line 319 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11;
#line 319 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 319 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__TrueVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
#line 319 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__FalseVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
#line 319 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
#line 319 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
#line 319 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
#line 319 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));
#line 319 "mode_robdd.tfeirn.m"
      }
#line 318 "mode_robdd.tfeirn.m"
  }
#line 128 "mode_robdd.tfeirn.m"
}

#line 132 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 132 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 132 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 132 "mode_robdd.tfeirn.m"
{
#line 323 "mode_robdd.tfeirn.m"
  {
#line 323 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 324 "mode_robdd.tfeirn.m"
    {
#line 324 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
#line 323 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 325 "mode_robdd.tfeirn.m"
      {
#line 325 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 325 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 325 "mode_robdd.tfeirn.m"
        {
#line 325 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
#line 323 "mode_robdd.tfeirn.m"
        {
#line 323 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
        }
#line 325 "mode_robdd.tfeirn.m"
      }
#line 323 "mode_robdd.tfeirn.m"
    else
#line 323 "mode_robdd.tfeirn.m"
      {
#line 323 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 326 "mode_robdd.tfeirn.m"
        {
#line 326 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_41_41, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
#line 323 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 327 "mode_robdd.tfeirn.m"
          {
#line 327 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_42_42 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 327 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 327 "mode_robdd.tfeirn.m"
            {
#line 327 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_42_42, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 323 "mode_robdd.tfeirn.m"
            {
#line 323 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
            }
#line 327 "mode_robdd.tfeirn.m"
          }
#line 323 "mode_robdd.tfeirn.m"
        else
#line 323 "mode_robdd.tfeirn.m"
          {
#line 323 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__L_11;

#line 328 "mode_robdd.tfeirn.m"
            {
#line 328 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_97_100_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7, &mode_robdd__tfeirn__L_11);
            }
#line 323 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 323 "mode_robdd.tfeirn.m"
              {
#line 329 "mode_robdd.tfeirn.m"
                {
#line 329 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__term____Unify____var_1_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__L_11, mode_robdd__tfeirn__V_4);
                }
#line 329 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 323 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 330 "mode_robdd.tfeirn.m"
                  {
#line 330 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_14_14;

#line 330 "mode_robdd.tfeirn.m"
                    {
#line 330 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_14_14 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
#line 323 "mode_robdd.tfeirn.m"
                    {
#line 323 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
                    }
#line 330 "mode_robdd.tfeirn.m"
                  }
#line 323 "mode_robdd.tfeirn.m"
                else
#line 332 "mode_robdd.tfeirn.m"
                  {
#line 332 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_15_15;
#line 332 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_16_16;
#line 332 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_17_17;

#line 332 "mode_robdd.tfeirn.m"
                    {
#line 332 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_15_15 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
#line 332 "mode_robdd.tfeirn.m"
                    {
#line 332 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_16_16 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                    }
#line 332 "mode_robdd.tfeirn.m"
                    {
#line 332 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_17_17 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                    }
#line 323 "mode_robdd.tfeirn.m"
                    {
#line 323 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
                    }
#line 332 "mode_robdd.tfeirn.m"
                  }
#line 323 "mode_robdd.tfeirn.m"
              }
#line 323 "mode_robdd.tfeirn.m"
            else
#line 336 "mode_robdd.tfeirn.m"
              {
#line 336 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_18_18;
#line 336 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_19_19;

#line 336 "mode_robdd.tfeirn.m"
                {
#line 336 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_18_18 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                }
#line 336 "mode_robdd.tfeirn.m"
                {
#line 336 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_19_19 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                }
#line 323 "mode_robdd.tfeirn.m"
                {
#line 323 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
                }
#line 336 "mode_robdd.tfeirn.m"
              }
#line 323 "mode_robdd.tfeirn.m"
          }
#line 323 "mode_robdd.tfeirn.m"
      }
#line 323 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 323 "mode_robdd.tfeirn.m"
  }
#line 132 "mode_robdd.tfeirn.m"
}

#line 137 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 137 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 137 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 137 "mode_robdd.tfeirn.m"
{
#line 339 "mode_robdd.tfeirn.m"
  {
#line 339 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15;

#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_11_11 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_5, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_6, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = mode_robdd__equiv_vars__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7);
    }
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__I_8);
    }
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_15_15 = mercury__robdd__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
    }
#line 339 "mode_robdd.tfeirn.m"
    {
#line 339 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 339 "mode_robdd.tfeirn.m"
    }
#line 339 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 339 "mode_robdd.tfeirn.m"
  }
#line 137 "mode_robdd.tfeirn.m"
}

#line 141 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 141 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__P_4,
#line 141 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 141 "mode_robdd.tfeirn.m"
{
#line 542 "mode_robdd.tfeirn.m"
  {
#line 542 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15;

#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_11_11 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__T_5);
    }
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__F_6);
    }
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = mode_robdd__equiv_vars__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__E_7);
    }
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__I_8);
    }
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_15_15 = mercury__robdd__restrict_filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__R_9);
    }
#line 542 "mode_robdd.tfeirn.m"
    {
#line 542 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 542 "mode_robdd.tfeirn.m"
    }
#line 542 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 542 "mode_robdd.tfeirn.m"
  }
#line 141 "mode_robdd.tfeirn.m"
}

#line 173 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 173 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 173 "mode_robdd.tfeirn.m"
{
#line 619 "mode_robdd.tfeirn.m"
  {
#line 619 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 619 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;

#line 619 "mode_robdd.tfeirn.m"
    {
#line 619 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__X_3);
    }
#line 619 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 619 "mode_robdd.tfeirn.m"
  }
#line 173 "mode_robdd.tfeirn.m"
}

#line 621 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 621 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
#line 621 "mode_robdd.tfeirn.m"
{
#line 624 "mode_robdd.tfeirn.m"
  while (MR_TRUE)
#line 624 "mode_robdd.tfeirn.m"
    {
#line 624 "mode_robdd.tfeirn.m"
      /* tailcall optimized into a loop */
#line 624 "mode_robdd.tfeirn.m"
      {
#line 624 "mode_robdd.tfeirn.m"
        MR_bool mode_robdd__tfeirn__succeeded;
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__X_2;
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_for_T_54 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));

#line 624 "mode_robdd.tfeirn.m"
#line 624 "mode_robdd.tfeirn.m"
        switch (mode_robdd__tfeirn__V_61_61) {
#line 624 "mode_robdd.tfeirn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 624 "mode_robdd.tfeirn.m"
          case (MR_Integer) 0:
#line 631 "mode_robdd.tfeirn.m"
            {
#line 629 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__TypeCtorInfo_55_55 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 629 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__TypeInfo_56_56 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 629 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__V_43_43;

#line 629 "mode_robdd.tfeirn.m"
              {
#line 629 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__V_43_43 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_56_56, mode_robdd__tfeirn__V_66_66, mode_robdd__tfeirn__V_65_65);
              }
#line 629 "mode_robdd.tfeirn.m"
              {
#line 629 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_56_56, mode_robdd__tfeirn__V_43_43);
              }
#line 629 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 631 "mode_robdd.tfeirn.m"
              if (mode_robdd__tfeirn__succeeded)
#line 630 "mode_robdd.tfeirn.m"
                {
#line 630 "mode_robdd.tfeirn.m"
                  return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                }
#line 631 "mode_robdd.tfeirn.m"
              else
#line 635 "mode_robdd.tfeirn.m"
                {
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed0_11;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__TrueVars1_12;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__FalseVars1_13;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__EQVars1_14;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed1_15;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__TrueVars2_16;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__FalseVars2_17;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__ImpVars1_18;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed2_19;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Robdd1_20;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed3_21;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_44_44;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed0_76;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed1_77;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__DCG_1_78;
#line 697 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__NewTrueVars_22;
#line 697 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__NewFalseVars_23;
#line 650 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_45_45;
#line 650 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_46_46;

#line 708 "mode_robdd.tfeirn.m"
                  {
#line 708 "mode_robdd.tfeirn.m"
                    mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&mode_robdd__tfeirn__Changed0_76, mode_robdd__tfeirn__V_66_66, &mode_robdd__tfeirn__TrueVars1_12, mode_robdd__tfeirn__V_64_64, &mode_robdd__tfeirn__DCG_1_78);
                  }
#line 709 "mode_robdd.tfeirn.m"
                  {
#line 709 "mode_robdd.tfeirn.m"
                    mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&mode_robdd__tfeirn__Changed1_77, mode_robdd__tfeirn__V_65_65, &mode_robdd__tfeirn__FalseVars1_13, mode_robdd__tfeirn__DCG_1_78, &mode_robdd__tfeirn__EQVars1_14);
                  }
#line 710 "mode_robdd.tfeirn.m"
                  {
#line 710 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed0_11 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_76, mode_robdd__tfeirn__Changed1_77);
                  }
#line 638 "mode_robdd.tfeirn.m"
                  {
#line 638 "mode_robdd.tfeirn.m"
                    mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, &mode_robdd__tfeirn__Changed1_15, mode_robdd__tfeirn__TrueVars1_12, &mode_robdd__tfeirn__TrueVars2_16, mode_robdd__tfeirn__FalseVars1_13, &mode_robdd__tfeirn__FalseVars2_17, mode_robdd__tfeirn__V_63_63, &mode_robdd__tfeirn__ImpVars1_18);
                  }
#line 641 "mode_robdd.tfeirn.m"
                  {
#line 641 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed2_19 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_11, mode_robdd__tfeirn__Changed1_15);
                  }
#line 644 "mode_robdd.tfeirn.m"
                  {
#line 644 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Robdd1_20 = mercury__robdd__restrict_true_false_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__TrueVars2_16, mode_robdd__tfeirn__FalseVars2_17, mode_robdd__tfeirn__V_62_62);
                  }
#line 646 "mode_robdd.tfeirn.m"
                  {
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__Robdd1_20, mode_robdd__tfeirn__V_62_62);
                  }
#line 646 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 646 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_44_44 = (MR_Integer) 1;
#line 646 "mode_robdd.tfeirn.m"
                  else
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_44_44 = (MR_Integer) 0;
#line 646 "mode_robdd.tfeirn.m"
                  {
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed3_21 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed2_19, mode_robdd__tfeirn__V_44_44);
                  }
#line 650 "mode_robdd.tfeirn.m"
                  {
#line 650 "mode_robdd.tfeirn.m"
                    mercury__robdd__definite_vars_3_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__Robdd1_20, &mode_robdd__tfeirn__V_45_45, &mode_robdd__tfeirn__V_46_46);
                  }
#line 650 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 650 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 650 "mode_robdd.tfeirn.m"
                    {
#line 650 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__NewTrueVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_45_45, (MR_Integer) 0)));
#line 650 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 650 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 650 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__NewFalseVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_46_46, (MR_Integer) 0)));
#line 650 "mode_robdd.tfeirn.m"
                    }
#line 697 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 664 "mode_robdd.tfeirn.m"
                    {
#line 664 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__Changed4_24;
#line 664 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TrueVars_25;
#line 664 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__FalseVars_26;
#line 654 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TypeCtorInfo_57_57 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 654 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TypeInfo_58_58 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 694 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__Changed5_27;
#line 694 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__ImpVars2_28;

#line 654 "mode_robdd.tfeirn.m"
                      {
#line 654 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_58_58, mode_robdd__tfeirn__NewTrueVars_22);
                      }
#line 654 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 655 "mode_robdd.tfeirn.m"
                        {
#line 655 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_58_58, mode_robdd__tfeirn__NewFalseVars_23);
                        }
#line 660 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 657 "mode_robdd.tfeirn.m"
                        {
#line 657 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__Changed4_24 = mode_robdd__tfeirn__Changed3_21;
#line 658 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__TrueVars_25 = mode_robdd__tfeirn__TrueVars2_16;
#line 659 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__FalseVars_26 = mode_robdd__tfeirn__FalseVars2_17;
#line 657 "mode_robdd.tfeirn.m"
                        }
#line 660 "mode_robdd.tfeirn.m"
                      else
#line 661 "mode_robdd.tfeirn.m"
                        {
#line 661 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeCtorInfo_59_59;
#line 661 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeInfo_60_60;

#line 661 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__Changed4_24 = (MR_Integer) 1;
#line 5662 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeCtorInfo_59_59 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5664 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeInfo_60_60 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 662 "mode_robdd.tfeirn.m"
                          {
#line 662 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__TrueVars_25 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_60_60, mode_robdd__tfeirn__TrueVars2_16, mode_robdd__tfeirn__NewTrueVars_22);
                          }
#line 663 "mode_robdd.tfeirn.m"
                          {
#line 663 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__FalseVars_26 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_60_60, mode_robdd__tfeirn__FalseVars2_17, mode_robdd__tfeirn__NewFalseVars_23);
                          }
#line 661 "mode_robdd.tfeirn.m"
                        }
#line 668 "mode_robdd.tfeirn.m"
                      {
#line 668 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__EQVars1_14, &mode_robdd__tfeirn__Changed5_27, mode_robdd__tfeirn__ImpVars1_18, &mode_robdd__tfeirn__ImpVars2_28);
                      }
#line 694 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 673 "mode_robdd.tfeirn.m"
                        {
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeInfo_for_T_89;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed6_29;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__EQVars2_30;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__ImpVars3_31;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed7_32;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed8_33;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd2_34;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__EQVars_35;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed9_36;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed10_37;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd_38;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__ImpVars_39;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed_40;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__X0_41;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_47_47;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_48_48;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed0_86;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd1_87;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_88_88;
#line 731 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__RobddEQVars_85;

#line 671 "mode_robdd.tfeirn.m"
                          {
#line 671 "mode_robdd.tfeirn.m"
                            mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, &mode_robdd__tfeirn__Changed6_29, mode_robdd__tfeirn__EQVars1_14, &mode_robdd__tfeirn__EQVars2_30, mode_robdd__tfeirn__ImpVars2_28, &mode_robdd__tfeirn__ImpVars3_31);
                          }
#line 675 "mode_robdd.tfeirn.m"
                          {
#line 675 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_47_47 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed4_24, mode_robdd__tfeirn__Changed5_27);
                          }
#line 674 "mode_robdd.tfeirn.m"
                          {
#line 674 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed7_32 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__V_47_47, mode_robdd__tfeirn__Changed6_29);
                          }
#line 5743 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeInfo_for_T_89 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 717 "mode_robdd.tfeirn.m"
                          {
#line 717 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_89, mode_robdd__tfeirn__Robdd1_20, &mode_robdd__tfeirn__RobddEQVars_85);
                          }
#line 731 "mode_robdd.tfeirn.m"
                          if (mode_robdd__tfeirn__succeeded)
#line 722 "mode_robdd.tfeirn.m"
                            {
#line 718 "mode_robdd.tfeirn.m"
                              {
#line 718 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_for_T_89, mode_robdd__tfeirn__RobddEQVars_85);
                              }
#line 722 "mode_robdd.tfeirn.m"
                              if (mode_robdd__tfeirn__succeeded)
#line 719 "mode_robdd.tfeirn.m"
                                {
#line 719 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Changed0_86 = (MR_Integer) 0;
#line 720 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Robdd1_87 = mode_robdd__tfeirn__Robdd1_20;
#line 721 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__EQVars_35 = mode_robdd__tfeirn__EQVars2_30;
#line 719 "mode_robdd.tfeirn.m"
                                }
#line 722 "mode_robdd.tfeirn.m"
                              else
#line 723 "mode_robdd.tfeirn.m"
                                {
#line 723 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Changed0_86 = (MR_Integer) 1;
#line 727 "mode_robdd.tfeirn.m"
                                  {
#line 727 "mode_robdd.tfeirn.m"
                                    mode_robdd__tfeirn__Robdd1_87 = mercury__robdd__squeeze_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_89, mode_robdd__tfeirn__RobddEQVars_85, mode_robdd__tfeirn__Robdd1_20);
                                  }
#line 729 "mode_robdd.tfeirn.m"
                                  {
#line 729 "mode_robdd.tfeirn.m"
                                    mode_robdd__tfeirn__EQVars_35 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_89, mode_robdd__tfeirn__EQVars2_30, mode_robdd__tfeirn__RobddEQVars_85);
                                  }
#line 723 "mode_robdd.tfeirn.m"
                                }
#line 722 "mode_robdd.tfeirn.m"
                            }
#line 731 "mode_robdd.tfeirn.m"
                          else
#line 732 "mode_robdd.tfeirn.m"
                            {
#line 732 "mode_robdd.tfeirn.m"
                              {
#line 732 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__EQVars_35 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_89);
                              }
#line 733 "mode_robdd.tfeirn.m"
                              {
#line 733 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_89, mode_robdd__tfeirn__EQVars_35, mode_robdd__tfeirn__EQVars2_30);
                              }
#line 733 "mode_robdd.tfeirn.m"
                              if (mode_robdd__tfeirn__succeeded)
#line 733 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__Changed0_86 = (MR_Integer) 0;
#line 733 "mode_robdd.tfeirn.m"
                              else
#line 733 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__Changed0_86 = (MR_Integer) 1;
#line 734 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__Robdd1_87 = mode_robdd__tfeirn__Robdd1_20;
#line 732 "mode_robdd.tfeirn.m"
                            }
#line 740 "mode_robdd.tfeirn.m"
                          {
#line 740 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Robdd2_34 = mode_robdd__equiv_vars__remove_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_89, mode_robdd__tfeirn__EQVars2_30, mode_robdd__tfeirn__Robdd1_87);
                          }
#line 741 "mode_robdd.tfeirn.m"
                          {
#line 741 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_89, mode_robdd__tfeirn__Robdd2_34, mode_robdd__tfeirn__Robdd1_87);
                          }
#line 741 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 741 "mode_robdd.tfeirn.m"
                          if (mode_robdd__tfeirn__succeeded)
#line 741 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_88_88 = (MR_Integer) 1;
#line 741 "mode_robdd.tfeirn.m"
                          else
#line 741 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_88_88 = (MR_Integer) 0;
#line 741 "mode_robdd.tfeirn.m"
                          {
#line 741 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed8_33 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_86, mode_robdd__tfeirn__V_88_88);
                          }
#line 680 "mode_robdd.tfeirn.m"
                          {
#line 680 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed9_36 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed7_32, mode_robdd__tfeirn__Changed8_33);
                          }
#line 683 "mode_robdd.tfeirn.m"
                          {
#line 683 "mode_robdd.tfeirn.m"
                            mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, &mode_robdd__tfeirn__Changed10_37, mode_robdd__tfeirn__Robdd2_34, &mode_robdd__tfeirn__Robdd_38, mode_robdd__tfeirn__ImpVars3_31, &mode_robdd__tfeirn__ImpVars_39);
                          }
#line 685 "mode_robdd.tfeirn.m"
                          {
#line 685 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed_40 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed9_36, mode_robdd__tfeirn__Changed10_37);
                          }
#line 687 "mode_robdd.tfeirn.m"
                          {
#line 687 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_48_48 = mercury__bool__not_1_f_0(mode_robdd__tfeirn__Changed_40);
                          }
#line 687 "mode_robdd.tfeirn.m"
                          {
#line 687 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__X0_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_25));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_26));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_35));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_39));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_38));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 5) = ((MR_Box) (mode_robdd__tfeirn__V_48_48));
#line 687 "mode_robdd.tfeirn.m"
                          }
#line 689 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Changed_40 == (MR_Integer) 1);
#line 691 "mode_robdd.tfeirn.m"
                          if (mode_robdd__tfeirn__succeeded)
#line 690 "mode_robdd.tfeirn.m"
                            {
#line 690 "mode_robdd.tfeirn.m"
                              /* direct tailcall eliminated */
#line 690 "mode_robdd.tfeirn.m"
                              {
#line 690 "mode_robdd.tfeirn.m"
                                MR_Word mode_robdd__tfeirn__HeadVar__1__tmp_copy_1 = mode_robdd__tfeirn__X0_41;

#line 690 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__HeadVar__1__tmp_copy_1;
#line 690 "mode_robdd.tfeirn.m"
                              }
#line 690 "mode_robdd.tfeirn.m"
                              continue;
#line 690 "mode_robdd.tfeirn.m"
                            }
#line 691 "mode_robdd.tfeirn.m"
                          else
#line 692 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__X0_41;
#line 673 "mode_robdd.tfeirn.m"
                        }
#line 694 "mode_robdd.tfeirn.m"
                      else
#line 695 "mode_robdd.tfeirn.m"
                        {
#line 695 "mode_robdd.tfeirn.m"
                          return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                        }
#line 664 "mode_robdd.tfeirn.m"
                    }
#line 697 "mode_robdd.tfeirn.m"
                  else
#line 698 "mode_robdd.tfeirn.m"
                    {
#line 698 "mode_robdd.tfeirn.m"
                      return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                    }
#line 635 "mode_robdd.tfeirn.m"
                }
#line 631 "mode_robdd.tfeirn.m"
            }
#line 624 "mode_robdd.tfeirn.m"
            break;
#line 624 "mode_robdd.tfeirn.m"
          case (MR_Integer) 1:
#line 624 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__HeadVar__1_1;
#line 624 "mode_robdd.tfeirn.m"
            break;
#line 624 "mode_robdd.tfeirn.m"
        }
#line 624 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__X_2;
#line 624 "mode_robdd.tfeirn.m"
      }
#line 624 "mode_robdd.tfeirn.m"
      break;
#line 624 "mode_robdd.tfeirn.m"
    }
#line 621 "mode_robdd.tfeirn.m"
}

#line 743 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__RB_10)
#line 743 "mode_robdd.tfeirn.m"
{
#line 749 "mode_robdd.tfeirn.m"
  {
#line 749 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T1_11;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F1_12;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E1_13;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I1_14;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R1_15;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_20_20;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_21_21;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_22_22 = (MR_Integer) 0;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_23_23;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_24_24;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_25_25 = (MR_Integer) 0;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 750 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16;

#line 751 "mode_robdd.tfeirn.m"
    {
#line 751 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TA_4));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__FA_5));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 2) = ((MR_Box) (mode_robdd__tfeirn__EA_6));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 3) = ((MR_Box) (mode_robdd__tfeirn__IA_7));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_10));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 5) = ((MR_Box) (mode_robdd__tfeirn__V_25_25));
#line 751 "mode_robdd.tfeirn.m"
    }
#line 750 "mode_robdd.tfeirn.m"
    {
#line 750 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_23_23 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_24_24);
    }
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 0)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__F1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 1)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__E1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 2)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__I1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 3)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__R1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 4)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 5)));
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__TA_4, mode_robdd__tfeirn__T1_11);
    }
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_18_18 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__FA_5, mode_robdd__tfeirn__F1_12);
    }
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_19_19 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__E1_13);
    }
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_20_20 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__I1_14);
    }
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_21_21 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__RA_8, mode_robdd__tfeirn__R1_15);
    }
#line 749 "mode_robdd.tfeirn.m"
    {
#line 749 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_20_20));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_21_21));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_22_22));
#line 749 "mode_robdd.tfeirn.m"
    }
#line 749 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 749 "mode_robdd.tfeirn.m"
  }
#line 743 "mode_robdd.tfeirn.m"
}

#line 520 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__520__1_4_f_0(
#line 520 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
#line 520 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Var_6,
#line 520 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_18,
#line 520 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_19)
#line 520 "mode_robdd.tfeirn.m"
{
#line 520 "mode_robdd.tfeirn.m"
  {
#line 520 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 520 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_20;

#line 520 "mode_robdd.tfeirn.m"
    {
#line 520 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_20 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_23, mode_robdd__tfeirn__HeadVar__3_18, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__HeadVar__4_19);
    }
#line 520 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_20;
#line 520 "mode_robdd.tfeirn.m"
  }
#line 520 "mode_robdd.tfeirn.m"
}

#line 767 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__767__1_4_f_0(
#line 767 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
#line 767 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_12,
#line 767 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_13,
#line 767 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_14)
#line 767 "mode_robdd.tfeirn.m"
{
#line 767 "mode_robdd.tfeirn.m"
  {
#line 767 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_15;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16;

#line 769 "mode_robdd.tfeirn.m"
    {
#line 769 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_16_16 = mercury__robdd__eq_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__HeadVar__2_12, mode_robdd__tfeirn__HeadVar__3_13);
    }
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_15 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__HeadVar__4_14, mode_robdd__tfeirn__V_16_16);
    }
#line 767 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_15;
#line 767 "mode_robdd.tfeirn.m"
  }
#line 767 "mode_robdd.tfeirn.m"
}

#line 288 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_56_95_95_49_4_f_0(
#line 288 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 288 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 288 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_70,
#line 288 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_71)
#line 288 "mode_robdd.tfeirn.m"
{
#line 288 "mode_robdd.tfeirn.m"
  {
#line 288 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 288 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_72;
#line 288 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_73_73;
#line 288 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_74_74;

#line 290 "mode_robdd.tfeirn.m"
    {
#line 290 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_74_74 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__3_70, mode_robdd__tfeirn__E_19);
    }
#line 289 "mode_robdd.tfeirn.m"
    {
#line 289 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_73_73 = mercury__robdd__not_var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_74_74);
    }
#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_72 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__4_71, mode_robdd__tfeirn__V_73_73);
    }
#line 288 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_72;
#line 288 "mode_robdd.tfeirn.m"
  }
#line 288 "mode_robdd.tfeirn.m"
}

#line 286 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_54_95_95_49_4_f_0(
#line 286 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 286 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 286 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_64,
#line 286 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_65)
#line 286 "mode_robdd.tfeirn.m"
{
#line 286 "mode_robdd.tfeirn.m"
  {
#line 286 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 286 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_66;
#line 286 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_67_67;
#line 286 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_68_68;

#line 287 "mode_robdd.tfeirn.m"
    {
#line 287 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_68_68 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__3_64, mode_robdd__tfeirn__E_19);
    }
#line 287 "mode_robdd.tfeirn.m"
    {
#line 287 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_67_67 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_68_68);
    }
#line 286 "mode_robdd.tfeirn.m"
    {
#line 286 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_66 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__4_65, mode_robdd__tfeirn__V_67_67);
    }
#line 286 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_66;
#line 286 "mode_robdd.tfeirn.m"
  }
#line 286 "mode_robdd.tfeirn.m"
}

#line 278 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_56_95_95_49_4_f_0(
#line 278 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 278 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 278 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_56,
#line 278 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_57)
#line 278 "mode_robdd.tfeirn.m"
{
#line 278 "mode_robdd.tfeirn.m"
  {
#line 278 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 278 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_58;
#line 278 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_59_59;
#line 278 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_60_60;

#line 280 "mode_robdd.tfeirn.m"
    {
#line 280 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_60_60 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__3_56, mode_robdd__tfeirn__E_19);
    }
#line 279 "mode_robdd.tfeirn.m"
    {
#line 279 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_59_59 = mercury__robdd__not_var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_60_60);
    }
#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_58 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__4_57, mode_robdd__tfeirn__V_59_59);
    }
#line 278 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_58;
#line 278 "mode_robdd.tfeirn.m"
  }
#line 278 "mode_robdd.tfeirn.m"
}

#line 276 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_54_95_95_49_4_f_0(
#line 276 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 276 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 276 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_50,
#line 276 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_51)
#line 276 "mode_robdd.tfeirn.m"
{
#line 276 "mode_robdd.tfeirn.m"
  {
#line 276 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 276 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_52;
#line 276 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_53_53;
#line 276 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_54_54;

#line 277 "mode_robdd.tfeirn.m"
    {
#line 277 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_54_54 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__3_50, mode_robdd__tfeirn__E_19);
    }
#line 277 "mode_robdd.tfeirn.m"
    {
#line 277 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_53_53 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_54_54);
    }
#line 276 "mode_robdd.tfeirn.m"
    {
#line 276 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_52 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__4_51, mode_robdd__tfeirn__V_53_53);
    }
#line 276 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_52;
#line 276 "mode_robdd.tfeirn.m"
  }
#line 276 "mode_robdd.tfeirn.m"
}

#line 218 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0(
#line 218 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
#line 218 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__HeadVar__1_1,
#line 218 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
#line 218 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_3)
#line 218 "mode_robdd.tfeirn.m"
{
#line 218 "mode_robdd.tfeirn.m"
  {
#line 218 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 218 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__CastX_21 = (MR_Integer) mode_robdd__tfeirn__HeadVar__2_2;
#line 218 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__CastY_22 = (MR_Integer) mode_robdd__tfeirn__HeadVar__3_3;

#line 218 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__CastX_21 == mode_robdd__tfeirn__CastY_22);
#line 218 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 6378 "mode_robdd.tfeirn.c"
      *mode_robdd__tfeirn__HeadVar__1_1 = (MR_Integer) 0;
#line 218 "mode_robdd.tfeirn.m"
    else
#line 218 "mode_robdd.tfeirn.m"
      {
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 2)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 3)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 4)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 5)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_16_16;
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_25_25;

#line 6415 "mode_robdd.tfeirn.c"
        {
#line 6417 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6419 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_24_24));
#line 6421 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 6423 "mode_robdd.tfeirn.c"
        }
#line 218 "mode_robdd.tfeirn.m"
        {
#line 218 "mode_robdd.tfeirn.m"
          mercury__sparse_bitset____Compare____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_25_25, &mode_robdd__tfeirn__V_16_16, (MR_Word) mode_robdd__tfeirn__V_4_4, (MR_Word) mode_robdd__tfeirn__V_10_10);
        }
#line 6430 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_16_16 == (MR_Integer) 0);
#line 218 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 218 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
          *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_16_16;
#line 218 "mode_robdd.tfeirn.m"
        else
#line 218 "mode_robdd.tfeirn.m"
          {
#line 218 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 218 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 218 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_29_29;

#line 6449 "mode_robdd.tfeirn.c"
            {
#line 6451 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6453 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_28));
#line 6455 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 6457 "mode_robdd.tfeirn.c"
            }
#line 218 "mode_robdd.tfeirn.m"
            {
#line 218 "mode_robdd.tfeirn.m"
              mercury__sparse_bitset____Compare____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_29_29, &mode_robdd__tfeirn__V_17_17, (MR_Word) mode_robdd__tfeirn__V_5_5, (MR_Word) mode_robdd__tfeirn__V_11_11);
            }
#line 6464 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_17_17 == (MR_Integer) 0);
#line 218 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 218 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
              *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_17_17;
#line 218 "mode_robdd.tfeirn.m"
            else
#line 218 "mode_robdd.tfeirn.m"
              {
#line 218 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_18_18;

#line 218 "mode_robdd.tfeirn.m"
                {
#line 218 "mode_robdd.tfeirn.m"
                  mercury__robdd____Compare____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_12_12);
                }
#line 6484 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_18_18 == (MR_Integer) 0);
#line 218 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 218 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
                  *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_18_18;
#line 218 "mode_robdd.tfeirn.m"
                else
#line 218 "mode_robdd.tfeirn.m"
                  {
#line 218 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_19_19;

#line 218 "mode_robdd.tfeirn.m"
                    {
#line 218 "mode_robdd.tfeirn.m"
                      mercury__robdd____Compare____imp_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__V_19_19, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_13_13);
                    }
#line 6504 "mode_robdd.tfeirn.c"
                    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_19_19 == (MR_Integer) 0);
#line 218 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 218 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
                      *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_19_19;
#line 218 "mode_robdd.tfeirn.m"
                    else
#line 218 "mode_robdd.tfeirn.m"
                      {
#line 218 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_20_20;

#line 218 "mode_robdd.tfeirn.m"
                        {
#line 218 "mode_robdd.tfeirn.m"
                          mercury__robdd____Compare____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__V_20_20, mode_robdd__tfeirn__V_8_8, mode_robdd__tfeirn__V_14_14);
                        }
#line 6524 "mode_robdd.tfeirn.c"
                        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_20_20 == (MR_Integer) 0);
#line 218 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 218 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
                          *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_20_20;
#line 218 "mode_robdd.tfeirn.m"
                        else
#line 218 "mode_robdd.tfeirn.m"
                          {
#line 218 "mode_robdd.tfeirn.m"
                            MR_Integer mode_robdd__tfeirn__V_39_39 = (MR_Integer) mode_robdd__tfeirn__V_9_9;
#line 218 "mode_robdd.tfeirn.m"
                            MR_Integer mode_robdd__tfeirn__V_40_40 = (MR_Integer) mode_robdd__tfeirn__V_15_15;

#line 218 "mode_robdd.tfeirn.m"
                            {
#line 218 "mode_robdd.tfeirn.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mode_robdd__tfeirn__HeadVar__1_1, mode_robdd__tfeirn__V_39_39, mode_robdd__tfeirn__V_40_40);
#line 218 "mode_robdd.tfeirn.m"
                              return;
                            }
#line 218 "mode_robdd.tfeirn.m"
                          }
#line 218 "mode_robdd.tfeirn.m"
                      }
#line 218 "mode_robdd.tfeirn.m"
                  }
#line 218 "mode_robdd.tfeirn.m"
              }
#line 218 "mode_robdd.tfeirn.m"
          }
#line 218 "mode_robdd.tfeirn.m"
      }
#line 218 "mode_robdd.tfeirn.m"
  }
#line 218 "mode_robdd.tfeirn.m"
}

#line 218 "mode_robdd.tfeirn.m"
MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0(
#line 218 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 218 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 218 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 218 "mode_robdd.tfeirn.m"
{
#line 218 "mode_robdd.tfeirn.m"
  {
#line 218 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 218 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__CastX_15 = (MR_Integer) mode_robdd__tfeirn__HeadVar__1_1;
#line 218 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__CastY_16 = (MR_Integer) mode_robdd__tfeirn__HeadVar__2_2;

#line 218 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__CastX_15 == mode_robdd__tfeirn__CastY_16);
#line 218 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 218 "mode_robdd.tfeirn.m"
    else
#line 218 "mode_robdd.tfeirn.m"
      {
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_23_23;
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 218 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));

#line 6624 "mode_robdd.tfeirn.c"
        {
#line 6626 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6628 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 6630 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 6632 "mode_robdd.tfeirn.c"
        }
#line 6634 "mode_robdd.tfeirn.c"
        {
#line 6636 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__V_3_3, (MR_Word) mode_robdd__tfeirn__V_9_9);
        }
#line 218 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
          {
#line 6643 "mode_robdd.tfeirn.c"
            {
#line 6645 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__V_4_4, (MR_Word) mode_robdd__tfeirn__V_10_10);
            }
#line 218 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
              {
#line 6652 "mode_robdd.tfeirn.c"
                {
#line 6654 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_11_11);
                }
#line 218 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
                  {
#line 6661 "mode_robdd.tfeirn.c"
                    {
#line 6663 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____imp_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_12_12);
                    }
#line 218 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 218 "mode_robdd.tfeirn.m"
                      {
#line 6670 "mode_robdd.tfeirn.c"
                        {
#line 6672 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_13_13);
                        }
#line 218 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 6677 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_8_8 == mode_robdd__tfeirn__V_14_14);
#line 218 "mode_robdd.tfeirn.m"
                      }
#line 218 "mode_robdd.tfeirn.m"
                  }
#line 218 "mode_robdd.tfeirn.m"
              }
#line 218 "mode_robdd.tfeirn.m"
          }
#line 218 "mode_robdd.tfeirn.m"
      }
#line 218 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 218 "mode_robdd.tfeirn.m"
  }
#line 218 "mode_robdd.tfeirn.m"
}

#line 26 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0(
#line 26 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__HeadVar__1_1,
#line 26 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
#line 26 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_3)
#line 26 "mode_robdd.tfeirn.m"
{
#line 26 "mode_robdd.tfeirn.m"
  {
#line 26 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 26 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_6_6 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[0];
#line 26 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Cast_HeadVar1_4 = mode_robdd__tfeirn__HeadVar__2_2;
#line 26 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Cast_HeadVar2_5 = mode_robdd__tfeirn__HeadVar__3_3;

#line 26 "mode_robdd.tfeirn.m"
    {
#line 26 "mode_robdd.tfeirn.m"
      mercury__builtin__compare_3_p_0(mode_robdd__tfeirn__TypeInfo_6_6, mode_robdd__tfeirn__HeadVar__1_1, ((MR_Box) (mode_robdd__tfeirn__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__tfeirn__Cast_HeadVar2_5)));
#line 26 "mode_robdd.tfeirn.m"
      return;
    }
#line 26 "mode_robdd.tfeirn.m"
  }
#line 26 "mode_robdd.tfeirn.m"
}

#line 26 "mode_robdd.tfeirn.m"
MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0(
#line 26 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 26 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 26 "mode_robdd.tfeirn.m"
{
#line 26 "mode_robdd.tfeirn.m"
  {
#line 26 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 26 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 26 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Cast_HeadVar1_3 = mode_robdd__tfeirn__HeadVar__1_1;
#line 26 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Cast_HeadVar2_4 = mode_robdd__tfeirn__HeadVar__2_2;

#line 26 "mode_robdd.tfeirn.m"
    {
#line 26 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(mode_robdd__tfeirn__TypeCtorInfo_5_5, mode_robdd__tfeirn__Cast_HeadVar1_3, mode_robdd__tfeirn__Cast_HeadVar2_4);
    }
#line 26 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 26 "mode_robdd.tfeirn.m"
  }
#line 26 "mode_robdd.tfeirn.m"
}

#line 743 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__x_2_f_0(
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26,
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 743 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__RB_10)
#line 743 "mode_robdd.tfeirn.m"
{
#line 749 "mode_robdd.tfeirn.m"
  {
#line 749 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_28_28;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T1_11;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F1_12;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E1_13;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I1_14;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R1_15;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_20_20;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_21_21;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_22_22;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_23_23;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_24_24;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_25_25;
#line 749 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 750 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16;
#line 748 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_17_17;
#line 748 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_18_18;

#line 6830 "mode_robdd.tfeirn.c"
    {
#line 6832 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6834 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_27_27));
#line 6836 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_26));
#line 6838 "mode_robdd.tfeirn.c"
    }
#line 748 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_22_22 = (MR_Integer) 0;
#line 751 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_25_25 = (MR_Integer) 0;
#line 751 "mode_robdd.tfeirn.m"
    {
#line 751 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TA_4));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__FA_5));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 2) = ((MR_Box) (mode_robdd__tfeirn__EA_6));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 3) = ((MR_Box) (mode_robdd__tfeirn__IA_7));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_10));
#line 751 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 5) = ((MR_Box) (mode_robdd__tfeirn__V_25_25));
#line 751 "mode_robdd.tfeirn.m"
    }
#line 750 "mode_robdd.tfeirn.m"
    {
#line 750 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_23_23 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__V_24_24);
    }
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 0)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__F1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 1)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__E1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 2)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__I1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 3)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__R1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 4)));
#line 750 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 5)));
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_17_17 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__TA_4, (MR_Word) mode_robdd__tfeirn__T1_11);
    }
#line 748 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_17_17 = (MR_Word) mode_robdd__tfeirn__conv0_V_17_17;
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_18_18 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__FA_5, (MR_Word) mode_robdd__tfeirn__F1_12);
    }
#line 748 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_18_18 = (MR_Word) mode_robdd__tfeirn__conv1_V_18_18;
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_19_19 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__E1_13);
    }
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_20_20 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__I1_14);
    }
#line 748 "mode_robdd.tfeirn.m"
    {
#line 748 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_21_21 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__RA_8, mode_robdd__tfeirn__R1_15);
    }
#line 749 "mode_robdd.tfeirn.m"
    {
#line 749 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_20_20));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_21_21));
#line 749 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_22_22));
#line 749 "mode_robdd.tfeirn.m"
    }
#line 749 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 749 "mode_robdd.tfeirn.m"
  }
#line 743 "mode_robdd.tfeirn.m"
}

#line 621 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__normalise_1_f_0(
#line 621 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_54,
#line 621 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
#line 621 "mode_robdd.tfeirn.m"
{
#line 624 "mode_robdd.tfeirn.m"
  while (MR_TRUE)
#line 624 "mode_robdd.tfeirn.m"
    {
#line 624 "mode_robdd.tfeirn.m"
      /* tailcall optimized into a loop */
#line 624 "mode_robdd.tfeirn.m"
      {
#line 624 "mode_robdd.tfeirn.m"
        MR_bool mode_robdd__tfeirn__succeeded;
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__X_2;
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));

#line 624 "mode_robdd.tfeirn.m"
#line 624 "mode_robdd.tfeirn.m"
        switch (mode_robdd__tfeirn__V_61_61) {
#line 624 "mode_robdd.tfeirn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 624 "mode_robdd.tfeirn.m"
          case (MR_Integer) 0:
#line 631 "mode_robdd.tfeirn.m"
            {
#line 629 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__TypeCtorInfo_55_55 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 629 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__TypeInfo_56_56;
#line 629 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__V_43_43;
#line 629 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__conv0_V_43_43;

#line 6985 "mode_robdd.tfeirn.c"
              {
#line 6987 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6989 "mode_robdd.tfeirn.c"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_56_56, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_55_55));
#line 6991 "mode_robdd.tfeirn.c"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_56_56, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_54));
#line 6993 "mode_robdd.tfeirn.c"
              }
#line 629 "mode_robdd.tfeirn.m"
              {
#line 629 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__conv0_V_43_43 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_56_56, (MR_Word) mode_robdd__tfeirn__V_66_66, (MR_Word) mode_robdd__tfeirn__V_65_65);
              }
#line 629 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_43_43 = (MR_Word) mode_robdd__tfeirn__conv0_V_43_43;
#line 629 "mode_robdd.tfeirn.m"
              {
#line 629 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_56_56, (MR_Word) mode_robdd__tfeirn__V_43_43);
              }
#line 629 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 631 "mode_robdd.tfeirn.m"
              if (mode_robdd__tfeirn__succeeded)
#line 630 "mode_robdd.tfeirn.m"
                {
#line 630 "mode_robdd.tfeirn.m"
                  return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54);
                }
#line 631 "mode_robdd.tfeirn.m"
              else
#line 635 "mode_robdd.tfeirn.m"
                {
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed0_11;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__TrueVars1_12;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__FalseVars1_13;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__EQVars1_14;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed1_15;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__TrueVars2_16;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__FalseVars2_17;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__ImpVars1_18;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed2_19;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Robdd1_20;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed3_21;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_44_44;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed0_76;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed1_77;
#line 635 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__DCG_1_78;
#line 697 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__NewTrueVars_22;
#line 697 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__NewFalseVars_23;
#line 650 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_45_45;
#line 650 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_46_46;

#line 708 "mode_robdd.tfeirn.m"
                  {
#line 708 "mode_robdd.tfeirn.m"
                    mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, &mode_robdd__tfeirn__Changed0_76, mode_robdd__tfeirn__V_66_66, &mode_robdd__tfeirn__TrueVars1_12, mode_robdd__tfeirn__V_64_64, &mode_robdd__tfeirn__DCG_1_78);
                  }
#line 709 "mode_robdd.tfeirn.m"
                  {
#line 709 "mode_robdd.tfeirn.m"
                    mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, &mode_robdd__tfeirn__Changed1_77, mode_robdd__tfeirn__V_65_65, &mode_robdd__tfeirn__FalseVars1_13, mode_robdd__tfeirn__DCG_1_78, &mode_robdd__tfeirn__EQVars1_14);
                  }
#line 710 "mode_robdd.tfeirn.m"
                  {
#line 710 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed0_11 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_76, mode_robdd__tfeirn__Changed1_77);
                  }
#line 638 "mode_robdd.tfeirn.m"
                  {
#line 638 "mode_robdd.tfeirn.m"
                    mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, &mode_robdd__tfeirn__Changed1_15, mode_robdd__tfeirn__TrueVars1_12, &mode_robdd__tfeirn__TrueVars2_16, mode_robdd__tfeirn__FalseVars1_13, &mode_robdd__tfeirn__FalseVars2_17, mode_robdd__tfeirn__V_63_63, &mode_robdd__tfeirn__ImpVars1_18);
                  }
#line 641 "mode_robdd.tfeirn.m"
                  {
#line 641 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed2_19 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_11, mode_robdd__tfeirn__Changed1_15);
                  }
#line 644 "mode_robdd.tfeirn.m"
                  {
#line 644 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Robdd1_20 = mercury__robdd__restrict_true_false_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__TrueVars2_16, mode_robdd__tfeirn__FalseVars2_17, mode_robdd__tfeirn__V_62_62);
                  }
#line 646 "mode_robdd.tfeirn.m"
                  {
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__Robdd1_20, mode_robdd__tfeirn__V_62_62);
                  }
#line 646 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 646 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_44_44 = (MR_Integer) 1;
#line 646 "mode_robdd.tfeirn.m"
                  else
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_44_44 = (MR_Integer) 0;
#line 646 "mode_robdd.tfeirn.m"
                  {
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed3_21 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed2_19, mode_robdd__tfeirn__V_44_44);
                  }
#line 650 "mode_robdd.tfeirn.m"
                  {
#line 650 "mode_robdd.tfeirn.m"
                    mercury__robdd__definite_vars_3_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__Robdd1_20, &mode_robdd__tfeirn__V_45_45, &mode_robdd__tfeirn__V_46_46);
                  }
#line 650 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 650 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 650 "mode_robdd.tfeirn.m"
                    {
#line 650 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__NewTrueVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_45_45, (MR_Integer) 0)));
#line 650 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 650 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 650 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__NewFalseVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_46_46, (MR_Integer) 0)));
#line 650 "mode_robdd.tfeirn.m"
                    }
#line 697 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 664 "mode_robdd.tfeirn.m"
                    {
#line 664 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__Changed4_24;
#line 664 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TrueVars_25;
#line 664 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__FalseVars_26;
#line 654 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TypeCtorInfo_57_57 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 654 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TypeInfo_58_58;
#line 694 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__Changed5_27;
#line 694 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__ImpVars2_28;

#line 7149 "mode_robdd.tfeirn.c"
                      {
#line 7151 "mode_robdd.tfeirn.c"
                        mode_robdd__tfeirn__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7153 "mode_robdd.tfeirn.c"
                        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_58_58, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_57_57));
#line 7155 "mode_robdd.tfeirn.c"
                        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_58_58, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_54));
#line 7157 "mode_robdd.tfeirn.c"
                      }
#line 654 "mode_robdd.tfeirn.m"
                      {
#line 654 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_58_58, (MR_Word) mode_robdd__tfeirn__NewTrueVars_22);
                      }
#line 654 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 655 "mode_robdd.tfeirn.m"
                        {
#line 655 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_58_58, (MR_Word) mode_robdd__tfeirn__NewFalseVars_23);
                        }
#line 660 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 657 "mode_robdd.tfeirn.m"
                        {
#line 657 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__Changed4_24 = mode_robdd__tfeirn__Changed3_21;
#line 658 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__TrueVars_25 = mode_robdd__tfeirn__TrueVars2_16;
#line 659 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__FalseVars_26 = mode_robdd__tfeirn__FalseVars2_17;
#line 657 "mode_robdd.tfeirn.m"
                        }
#line 660 "mode_robdd.tfeirn.m"
                      else
#line 661 "mode_robdd.tfeirn.m"
                        {
#line 661 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeCtorInfo_59_59;
#line 661 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeInfo_60_60;
#line 662 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__conv1_TrueVars_25;
#line 663 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__conv2_FalseVars_26;

#line 661 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__Changed4_24 = (MR_Integer) 1;
#line 7198 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeCtorInfo_59_59 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7200 "mode_robdd.tfeirn.c"
                          {
#line 7202 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7204 "mode_robdd.tfeirn.c"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_60_60, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_59_59));
#line 7206 "mode_robdd.tfeirn.c"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_60_60, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_54));
#line 7208 "mode_robdd.tfeirn.c"
                          }
#line 662 "mode_robdd.tfeirn.m"
                          {
#line 662 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__conv1_TrueVars_25 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_60_60, (MR_Word) mode_robdd__tfeirn__TrueVars2_16, (MR_Word) mode_robdd__tfeirn__NewTrueVars_22);
                          }
#line 662 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__TrueVars_25 = (MR_Word) mode_robdd__tfeirn__conv1_TrueVars_25;
#line 663 "mode_robdd.tfeirn.m"
                          {
#line 663 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__conv2_FalseVars_26 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_60_60, (MR_Word) mode_robdd__tfeirn__FalseVars2_17, (MR_Word) mode_robdd__tfeirn__NewFalseVars_23);
                          }
#line 663 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__FalseVars_26 = (MR_Word) mode_robdd__tfeirn__conv2_FalseVars_26;
#line 661 "mode_robdd.tfeirn.m"
                        }
#line 668 "mode_robdd.tfeirn.m"
                      {
#line 668 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__EQVars1_14, &mode_robdd__tfeirn__Changed5_27, mode_robdd__tfeirn__ImpVars1_18, &mode_robdd__tfeirn__ImpVars2_28);
                      }
#line 694 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 673 "mode_robdd.tfeirn.m"
                        {
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed6_29;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__EQVars2_30;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__ImpVars3_31;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed7_32;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed8_33;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd2_34;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__EQVars_35;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed9_36;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed10_37;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd_38;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__ImpVars_39;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed_40;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__X0_41;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_47_47;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_48_48;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed0_85;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd1_86;
#line 673 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_87_87;
#line 731 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__RobddEQVars_84;

#line 671 "mode_robdd.tfeirn.m"
                          {
#line 671 "mode_robdd.tfeirn.m"
                            mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, &mode_robdd__tfeirn__Changed6_29, mode_robdd__tfeirn__EQVars1_14, &mode_robdd__tfeirn__EQVars2_30, mode_robdd__tfeirn__ImpVars2_28, &mode_robdd__tfeirn__ImpVars3_31);
                          }
#line 675 "mode_robdd.tfeirn.m"
                          {
#line 675 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_47_47 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed4_24, mode_robdd__tfeirn__Changed5_27);
                          }
#line 674 "mode_robdd.tfeirn.m"
                          {
#line 674 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed7_32 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__V_47_47, mode_robdd__tfeirn__Changed6_29);
                          }
#line 717 "mode_robdd.tfeirn.m"
                          {
#line 717 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__Robdd1_20, &mode_robdd__tfeirn__RobddEQVars_84);
                          }
#line 731 "mode_robdd.tfeirn.m"
                          if (mode_robdd__tfeirn__succeeded)
#line 722 "mode_robdd.tfeirn.m"
                            {
#line 718 "mode_robdd.tfeirn.m"
                              {
#line 718 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__RobddEQVars_84);
                              }
#line 722 "mode_robdd.tfeirn.m"
                              if (mode_robdd__tfeirn__succeeded)
#line 719 "mode_robdd.tfeirn.m"
                                {
#line 719 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Changed0_85 = (MR_Integer) 0;
#line 720 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Robdd1_86 = mode_robdd__tfeirn__Robdd1_20;
#line 721 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__EQVars_35 = mode_robdd__tfeirn__EQVars2_30;
#line 719 "mode_robdd.tfeirn.m"
                                }
#line 722 "mode_robdd.tfeirn.m"
                              else
#line 723 "mode_robdd.tfeirn.m"
                                {
#line 723 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Changed0_85 = (MR_Integer) 1;
#line 727 "mode_robdd.tfeirn.m"
                                  {
#line 727 "mode_robdd.tfeirn.m"
                                    mode_robdd__tfeirn__Robdd1_86 = mercury__robdd__squeeze_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__RobddEQVars_84, mode_robdd__tfeirn__Robdd1_20);
                                  }
#line 729 "mode_robdd.tfeirn.m"
                                  {
#line 729 "mode_robdd.tfeirn.m"
                                    mode_robdd__tfeirn__EQVars_35 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__EQVars2_30, mode_robdd__tfeirn__RobddEQVars_84);
                                  }
#line 723 "mode_robdd.tfeirn.m"
                                }
#line 722 "mode_robdd.tfeirn.m"
                            }
#line 731 "mode_robdd.tfeirn.m"
                          else
#line 732 "mode_robdd.tfeirn.m"
                            {
#line 732 "mode_robdd.tfeirn.m"
                              {
#line 732 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__EQVars_35 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54);
                              }
#line 733 "mode_robdd.tfeirn.m"
                              {
#line 733 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__EQVars_35, mode_robdd__tfeirn__EQVars2_30);
                              }
#line 733 "mode_robdd.tfeirn.m"
                              if (mode_robdd__tfeirn__succeeded)
#line 733 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__Changed0_85 = (MR_Integer) 0;
#line 733 "mode_robdd.tfeirn.m"
                              else
#line 733 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__Changed0_85 = (MR_Integer) 1;
#line 734 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__Robdd1_86 = mode_robdd__tfeirn__Robdd1_20;
#line 732 "mode_robdd.tfeirn.m"
                            }
#line 740 "mode_robdd.tfeirn.m"
                          {
#line 740 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Robdd2_34 = mode_robdd__equiv_vars__remove_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__EQVars2_30, mode_robdd__tfeirn__Robdd1_86);
                          }
#line 741 "mode_robdd.tfeirn.m"
                          {
#line 741 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_54, mode_robdd__tfeirn__Robdd2_34, mode_robdd__tfeirn__Robdd1_86);
                          }
#line 741 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 741 "mode_robdd.tfeirn.m"
                          if (mode_robdd__tfeirn__succeeded)
#line 741 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_87_87 = (MR_Integer) 1;
#line 741 "mode_robdd.tfeirn.m"
                          else
#line 741 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_87_87 = (MR_Integer) 0;
#line 741 "mode_robdd.tfeirn.m"
                          {
#line 741 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed8_33 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_85, mode_robdd__tfeirn__V_87_87);
                          }
#line 680 "mode_robdd.tfeirn.m"
                          {
#line 680 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed9_36 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed7_32, mode_robdd__tfeirn__Changed8_33);
                          }
#line 683 "mode_robdd.tfeirn.m"
                          {
#line 683 "mode_robdd.tfeirn.m"
                            mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_54, &mode_robdd__tfeirn__Changed10_37, mode_robdd__tfeirn__Robdd2_34, &mode_robdd__tfeirn__Robdd_38, mode_robdd__tfeirn__ImpVars3_31, &mode_robdd__tfeirn__ImpVars_39);
                          }
#line 685 "mode_robdd.tfeirn.m"
                          {
#line 685 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed_40 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed9_36, mode_robdd__tfeirn__Changed10_37);
                          }
#line 687 "mode_robdd.tfeirn.m"
                          {
#line 687 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_48_48 = mercury__bool__not_1_f_0(mode_robdd__tfeirn__Changed_40);
                          }
#line 687 "mode_robdd.tfeirn.m"
                          {
#line 687 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__X0_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_25));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_26));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_35));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_39));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_38));
#line 687 "mode_robdd.tfeirn.m"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_41, 5) = ((MR_Box) (mode_robdd__tfeirn__V_48_48));
#line 687 "mode_robdd.tfeirn.m"
                          }
#line 689 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Changed_40 == (MR_Integer) 1);
#line 691 "mode_robdd.tfeirn.m"
                          if (mode_robdd__tfeirn__succeeded)
#line 690 "mode_robdd.tfeirn.m"
                            {
#line 690 "mode_robdd.tfeirn.m"
                              /* direct tailcall eliminated */
#line 690 "mode_robdd.tfeirn.m"
                              {
#line 690 "mode_robdd.tfeirn.m"
                                MR_Word mode_robdd__tfeirn__HeadVar__1__tmp_copy_1 = mode_robdd__tfeirn__X0_41;

#line 690 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__HeadVar__1__tmp_copy_1;
#line 690 "mode_robdd.tfeirn.m"
                              }
#line 690 "mode_robdd.tfeirn.m"
                              continue;
#line 690 "mode_robdd.tfeirn.m"
                            }
#line 691 "mode_robdd.tfeirn.m"
                          else
#line 692 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__X0_41;
#line 673 "mode_robdd.tfeirn.m"
                        }
#line 694 "mode_robdd.tfeirn.m"
                      else
#line 695 "mode_robdd.tfeirn.m"
                        {
#line 695 "mode_robdd.tfeirn.m"
                          return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54);
                        }
#line 664 "mode_robdd.tfeirn.m"
                    }
#line 697 "mode_robdd.tfeirn.m"
                  else
#line 698 "mode_robdd.tfeirn.m"
                    {
#line 698 "mode_robdd.tfeirn.m"
                      return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_54);
                    }
#line 635 "mode_robdd.tfeirn.m"
                }
#line 631 "mode_robdd.tfeirn.m"
            }
#line 624 "mode_robdd.tfeirn.m"
            break;
#line 624 "mode_robdd.tfeirn.m"
          case (MR_Integer) 1:
#line 624 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__HeadVar__1_1;
#line 624 "mode_robdd.tfeirn.m"
            break;
#line 624 "mode_robdd.tfeirn.m"
        }
#line 624 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__X_2;
#line 624 "mode_robdd.tfeirn.m"
      }
#line 624 "mode_robdd.tfeirn.m"
      break;
#line 624 "mode_robdd.tfeirn.m"
    }
#line 621 "mode_robdd.tfeirn.m"
}

#line 597 "mode_robdd.tfeirn.m"
static MR_bool MR_CALL 
mode_robdd__tfeirn__minimal_model_2_4_p_0(
#line 597 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 597 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 597 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 597 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 597 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8)
#line 597 "mode_robdd.tfeirn.m"
{
#line 612 "mode_robdd.tfeirn.m"
  {
#line 612 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 612 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_21;
#line 612 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9;
#line 612 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Vars_10;
#line 601 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 601 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
#line 601 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 601 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__conv1_V_9;
#line 601 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_Vars_10;

#line 7528 "mode_robdd.tfeirn.c"
    {
#line 7530 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7532 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 7534 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7536 "mode_robdd.tfeirn.c"
    }
#line 7538 "mode_robdd.tfeirn.c"
    {
#line 7540 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7542 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20));
#line 7544 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7546 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_19_19));
#line 7548 "mode_robdd.tfeirn.c"
    }
#line 601 "mode_robdd.tfeirn.m"
    {
#line 601 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_21, &mode_robdd__tfeirn__conv1_V_9, (MR_Word) mode_robdd__tfeirn__Vars0_5, &mode_robdd__tfeirn__conv0_Vars_10);
    }
#line 601 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 601 "mode_robdd.tfeirn.m"
      {
#line 601 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_9 = ((MR_Word) mode_robdd__tfeirn__conv1_V_9);
#line 601 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__Vars_10 = (MR_Word) mode_robdd__tfeirn__conv0_Vars_10;
#line 601 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 601 "mode_robdd.tfeirn.m"
      }
#line 612 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 602 "mode_robdd.tfeirn.m"
      {
#line 602 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__X1_11;
#line 603 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_15_15;
#line 603 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_32_32;
#line 181 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_38_38;
#line 181 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_39_39;
#line 181 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_40_40;
#line 181 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_41_41;
#line 181 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_42_42;

#line 602 "mode_robdd.tfeirn.m"
        {
#line 602 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__X1_11 = mode_robdd__tfeirn__var_restrict_false_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_9, mode_robdd__tfeirn__X0_6);
        }
#line 181 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 4)));
#line 181 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 5)));
#line 603 "mode_robdd.tfeirn.m"
        {
#line 603 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_32_32 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17);
        }
#line 603 "mode_robdd.tfeirn.m"
        {
#line 603 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_15_15, mode_robdd__tfeirn__V_32_32);
        }
#line 603 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 606 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 604 "mode_robdd.tfeirn.m"
          {
#line 604 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FalseVars0_12;

#line 604 "mode_robdd.tfeirn.m"
            {
#line 604 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X1_11, mode_robdd__tfeirn__TrueVars_7, &mode_robdd__tfeirn__FalseVars0_12);
            }
#line 604 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 604 "mode_robdd.tfeirn.m"
              {
#line 605 "mode_robdd.tfeirn.m"
                {
#line 605 "mode_robdd.tfeirn.m"
                  *mode_robdd__tfeirn__FalseVars_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__TypeClassInfo_for_enum_21, mode_robdd__tfeirn__FalseVars0_12, mode_robdd__tfeirn__V_9);
                }
#line 605 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 604 "mode_robdd.tfeirn.m"
              }
#line 604 "mode_robdd.tfeirn.m"
          }
#line 606 "mode_robdd.tfeirn.m"
        else
#line 607 "mode_robdd.tfeirn.m"
          {
#line 607 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X2_13;
#line 607 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TrueVars0_14;
#line 608 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 608 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_33_33;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_43_43;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_44_44;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_45_45;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_46_46;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_47_47;

#line 607 "mode_robdd.tfeirn.m"
            {
#line 607 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X2_13 = mode_robdd__tfeirn__var_restrict_true_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_9, mode_robdd__tfeirn__X0_6);
            }
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 4)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 5)));
#line 608 "mode_robdd.tfeirn.m"
            {
#line 608 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_33_33 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17);
            }
#line 608 "mode_robdd.tfeirn.m"
            {
#line 608 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_16_16, mode_robdd__tfeirn__V_33_33);
            }
#line 608 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 607 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 607 "mode_robdd.tfeirn.m"
              {
#line 609 "mode_robdd.tfeirn.m"
                {
#line 609 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X2_13, &mode_robdd__tfeirn__TrueVars0_14, mode_robdd__tfeirn__FalseVars_8);
                }
#line 607 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 607 "mode_robdd.tfeirn.m"
                  {
#line 610 "mode_robdd.tfeirn.m"
                    {
#line 610 "mode_robdd.tfeirn.m"
                      *mode_robdd__tfeirn__TrueVars_7 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__TypeClassInfo_for_enum_21, mode_robdd__tfeirn__TrueVars0_14, mode_robdd__tfeirn__V_9);
                    }
#line 610 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 607 "mode_robdd.tfeirn.m"
                  }
#line 607 "mode_robdd.tfeirn.m"
              }
#line 607 "mode_robdd.tfeirn.m"
          }
#line 602 "mode_robdd.tfeirn.m"
      }
#line 612 "mode_robdd.tfeirn.m"
    else
#line 613 "mode_robdd.tfeirn.m"
      {
#line 613 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 613 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_31_31;
#line 613 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv2_TrueVars_7;
#line 614 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv3_FalseVars_8;

#line 7737 "mode_robdd.tfeirn.c"
        {
#line 7739 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7741 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_30_30));
#line 7743 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7745 "mode_robdd.tfeirn.c"
        }
#line 613 "mode_robdd.tfeirn.m"
        {
#line 613 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv2_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
        }
#line 613 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__TrueVars_7 = (MR_Word) mode_robdd__tfeirn__conv2_TrueVars_7;
#line 614 "mode_robdd.tfeirn.m"
        {
#line 614 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv3_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
        }
#line 614 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__FalseVars_8 = (MR_Word) mode_robdd__tfeirn__conv3_FalseVars_8;
#line 613 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 613 "mode_robdd.tfeirn.m"
      }
#line 612 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 612 "mode_robdd.tfeirn.m"
  }
#line 597 "mode_robdd.tfeirn.m"
}

#line 567 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_1(
#line 567 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg)
#line 567 "mode_robdd.tfeirn.m"
{
#line 567 "mode_robdd.tfeirn.m"
  {
#line 567 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

#line 570 "mode_robdd.tfeirn.m"
    {
#line 570 "mode_robdd.tfeirn.m"
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8) = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9);
    }
#line 570 "mode_robdd.tfeirn.m"
    {
#line 570 "mode_robdd.tfeirn.m"
      ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
#line 570 "mode_robdd.tfeirn.m"
      return;
    }
#line 567 "mode_robdd.tfeirn.m"
  }
#line 567 "mode_robdd.tfeirn.m"
}

#line 572 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_2(
#line 572 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg)
#line 572 "mode_robdd.tfeirn.m"
{
#line 572 "mode_robdd.tfeirn.m"
  {
#line 572 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

#line 575 "mode_robdd.tfeirn.m"
    {
#line 575 "mode_robdd.tfeirn.m"
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7) = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9);
    }
#line 575 "mode_robdd.tfeirn.m"
    {
#line 575 "mode_robdd.tfeirn.m"
      ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
#line 575 "mode_robdd.tfeirn.m"
      return;
    }
#line 572 "mode_robdd.tfeirn.m"
  }
#line 572 "mode_robdd.tfeirn.m"
}

#line 561 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0(
#line 561 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 561 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 561 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 561 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 561 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
#line 561 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__cont,
#line 561 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__cont_env_ptr)
#line 561 "mode_robdd.tfeirn.m"
{
#line 561 "mode_robdd.tfeirn.m"
  {
#line 561 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s mode_robdd__tfeirn__env;
#line 561 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = &mode_robdd__tfeirn__env;

#line 561 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17 = mode_robdd__tfeirn__TypeInfo_for_T_17;
#line 561 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7 = mode_robdd__tfeirn__TrueVars_7;
#line 561 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8 = mode_robdd__tfeirn__FalseVars_8;
#line 561 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont = mode_robdd__tfeirn__cont;
#line 561 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr = mode_robdd__tfeirn__cont_env_ptr;
#line 577 "mode_robdd.tfeirn.m"
    {
#line 577 "mode_robdd.tfeirn.m"
      MR_bool mode_robdd__tfeirn__succeeded;
#line 577 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__Vars_10;
#line 565 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 565 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
#line 565 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 565 "mode_robdd.tfeirn.m"
      MR_Box mode_robdd__tfeirn__conv1_V_9;
#line 565 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv0_Vars_10;

#line 7883 "mode_robdd.tfeirn.c"
      {
#line 7885 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7887 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 7889 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 7891 "mode_robdd.tfeirn.c"
      }
#line 7893 "mode_robdd.tfeirn.c"
      {
#line 7895 "mode_robdd.tfeirn.c"
        MR_Word base;
#line 7897 "mode_robdd.tfeirn.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7899 "mode_robdd.tfeirn.c"
        (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21 = base;
#line 7901 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20));
#line 7903 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 7905 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_19_19));
#line 7907 "mode_robdd.tfeirn.c"
      }
#line 565 "mode_robdd.tfeirn.m"
      {
#line 565 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, &mode_robdd__tfeirn__conv1_V_9, (MR_Word) mode_robdd__tfeirn__Vars0_5, &mode_robdd__tfeirn__conv0_Vars_10);
      }
#line 565 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 565 "mode_robdd.tfeirn.m"
        {
#line 565 "mode_robdd.tfeirn.m"
          (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9 = ((MR_Word) mode_robdd__tfeirn__conv1_V_9);
#line 565 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__Vars_10 = (MR_Word) mode_robdd__tfeirn__conv0_Vars_10;
#line 565 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 565 "mode_robdd.tfeirn.m"
        }
#line 577 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 571 "mode_robdd.tfeirn.m"
        {
#line 567 "mode_robdd.tfeirn.m"
          {
#line 567 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X_11;
#line 568 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 568 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_32_32;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_38_38;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_39_39;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_40_40;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_41_41;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_42_42;

#line 567 "mode_robdd.tfeirn.m"
            {
#line 567 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__var_restrict_false_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9, mode_robdd__tfeirn__X0_6);
            }
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 4)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 5)));
#line 568 "mode_robdd.tfeirn.m"
            {
#line 568 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_32_32 = mercury__robdd__zero_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17);
            }
#line 568 "mode_robdd.tfeirn.m"
            {
#line 568 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__V_15_15, mode_robdd__tfeirn__V_32_32);
            }
#line 568 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 567 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 569 "mode_robdd.tfeirn.m"
              {
#line 569 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__labelling_2_4_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X_11, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12, mode_robdd__tfeirn__labelling_2_4_p_0_1, mode_robdd__tfeirn__env_ptr);
              }
#line 567 "mode_robdd.tfeirn.m"
          }
#line 572 "mode_robdd.tfeirn.m"
          {
#line 572 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X_16;
#line 573 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 573 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_33_33;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_43_43;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_44_44;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_45_45;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_46_46;
#line 181 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_47_47;

#line 572 "mode_robdd.tfeirn.m"
            {
#line 572 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__var_restrict_true_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9, mode_robdd__tfeirn__X0_6);
            }
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 4)));
#line 181 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 5)));
#line 573 "mode_robdd.tfeirn.m"
            {
#line 573 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_33_33 = mercury__robdd__zero_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17);
            }
#line 573 "mode_robdd.tfeirn.m"
            {
#line 573 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__V_14_14, mode_robdd__tfeirn__V_33_33);
            }
#line 573 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 572 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 574 "mode_robdd.tfeirn.m"
              {
#line 574 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__labelling_2_4_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X_16, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8, mode_robdd__tfeirn__labelling_2_4_p_0_2, mode_robdd__tfeirn__env_ptr);
              }
#line 572 "mode_robdd.tfeirn.m"
          }
#line 571 "mode_robdd.tfeirn.m"
        }
#line 577 "mode_robdd.tfeirn.m"
      else
#line 578 "mode_robdd.tfeirn.m"
        {
#line 578 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 578 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_31_31;
#line 578 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__conv2_TrueVars_7;
#line 579 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__conv3_FalseVars_8;

#line 8059 "mode_robdd.tfeirn.c"
          {
#line 8061 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8063 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_30_30));
#line 8065 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 8067 "mode_robdd.tfeirn.c"
          }
#line 578 "mode_robdd.tfeirn.m"
          {
#line 578 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__conv2_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
          }
#line 578 "mode_robdd.tfeirn.m"
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7) = (MR_Word) mode_robdd__tfeirn__conv2_TrueVars_7;
#line 579 "mode_robdd.tfeirn.m"
          {
#line 579 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__conv3_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
          }
#line 579 "mode_robdd.tfeirn.m"
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8) = (MR_Word) mode_robdd__tfeirn__conv3_FalseVars_8;
#line 578 "mode_robdd.tfeirn.m"
          {
#line 578 "mode_robdd.tfeirn.m"
            ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
#line 578 "mode_robdd.tfeirn.m"
            return;
          }
#line 578 "mode_robdd.tfeirn.m"
        }
#line 577 "mode_robdd.tfeirn.m"
    }
#line 561 "mode_robdd.tfeirn.m"
  }
#line 561 "mode_robdd.tfeirn.m"
}

#line 188 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__robdd_to_mode_robdd_1_f_0(
#line 188 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_10,
#line 188 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__R_3)
#line 188 "mode_robdd.tfeirn.m"
{
#line 761 "mode_robdd.tfeirn.m"
  {
#line 761 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_12_12;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_8_8;
#line 761 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9;
#line 762 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_5_5;
#line 762 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_6_6;

#line 8135 "mode_robdd.tfeirn.c"
    {
#line 8137 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8139 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_11_11));
#line 8141 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_10));
#line 8143 "mode_robdd.tfeirn.c"
    }
#line 762 "mode_robdd.tfeirn.m"
    {
#line 762 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_5_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_12_12);
    }
#line 762 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_5_5 = (MR_Word) mode_robdd__tfeirn__conv0_V_5_5;
#line 762 "mode_robdd.tfeirn.m"
    {
#line 762 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_6_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_12_12);
    }
#line 762 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_6_6 = (MR_Word) mode_robdd__tfeirn__conv1_V_6_6;
#line 762 "mode_robdd.tfeirn.m"
    {
#line 762 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_7_7 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10);
    }
#line 762 "mode_robdd.tfeirn.m"
    {
#line 762 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_8_8 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10);
    }
#line 762 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_9_9 = (MR_Integer) 0;
#line 762 "mode_robdd.tfeirn.m"
    {
#line 762 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 762 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 762 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 762 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 762 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__V_8_8));
#line 762 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_3));
#line 762 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_9_9));
#line 762 "mode_robdd.tfeirn.m"
    }
#line 761 "mode_robdd.tfeirn.m"
    {
#line 761 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10, mode_robdd__tfeirn__V_4_4);
    }
#line 761 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 761 "mode_robdd.tfeirn.m"
  }
#line 188 "mode_robdd.tfeirn.m"
}

#line 767 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0_1(
#line 767 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 767 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 767 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 767 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
#line 767 "mode_robdd.tfeirn.m"
{
#line 767 "mode_robdd.tfeirn.m"
  {
#line 767 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_4;
#line 767 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__5_15;

#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_HeadVar__5_15 = mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__767__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_4 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__5_15));
#line 767 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_4;
#line 767 "mode_robdd.tfeirn.m"
  }
#line 767 "mode_robdd.tfeirn.m"
}

#line 184 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0(
#line 184 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
#line 184 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 184 "mode_robdd.tfeirn.m"
{
#line 767 "mode_robdd.tfeirn.m"
  {
#line 767 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_49_49;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_51_51;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_8_8;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_10_10;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_20_20;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_22_22;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_23_23;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
#line 768 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_32_32;
#line 768 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_33_33;
#line 768 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_34_34;
#line 768 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_35_35;
#line 768 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_36_36;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_37_37;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_38_38;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_39_39;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_40_40;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_41_41;
#line 767 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__conv1_V_10_10;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_42_42;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_43_43;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_44_44;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_45_45;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_46_46;

#line 768 "mode_robdd.tfeirn.m"
    {
#line 768 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_20_20 = mercury__robdd__conj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_52_52);
    }
#line 768 "mode_robdd.tfeirn.m"
    {
#line 768 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_18_18 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_19_19, mode_robdd__tfeirn__V_20_20);
    }
#line 768 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 768 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 768 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 768 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 768 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 768 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
#line 768 "mode_robdd.tfeirn.m"
    {
#line 768 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_22_22 = mercury__robdd__conj_not_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_23_23);
    }
#line 769 "mode_robdd.tfeirn.m"
    {
#line 769 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_7_7 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_22_22);
    }
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_8_8, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[2]));
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_8_8, 1) = ((MR_Box) (mode_robdd__tfeirn__to_robdd_1_f_0_1));
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_8_8, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
#line 767 "mode_robdd.tfeirn.m"
    }
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_9_9 = (MR_Word) mode_robdd__tfeirn__V_17_17;
#line 8385 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8387 "mode_robdd.tfeirn.c"
    {
#line 8389 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8391 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_49_49, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_48_48));
#line 8393 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
#line 8395 "mode_robdd.tfeirn.c"
    }
#line 8397 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 8399 "mode_robdd.tfeirn.c"
    {
#line 8401 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8403 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_51_51, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_50_50));
#line 8405 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_51_51, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
#line 8407 "mode_robdd.tfeirn.c"
    }
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_10_10 = mercury__map__foldl_3_f_0(mode_robdd__tfeirn__TypeInfo_49_49, mode_robdd__tfeirn__TypeInfo_49_49, mode_robdd__tfeirn__TypeInfo_51_51, (MR_Word) mode_robdd__tfeirn__V_8_8, (MR_Word) mode_robdd__tfeirn__V_9_9, ((MR_Box) (mode_robdd__tfeirn__V_7_7)));
    }
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_10_10 = ((MR_Word) mode_robdd__tfeirn__conv1_V_10_10);
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__2_2 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_11_11, mode_robdd__tfeirn__V_10_10);
    }
#line 767 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 767 "mode_robdd.tfeirn.m"
  }
#line 184 "mode_robdd.tfeirn.m"
}

#line 181 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__robdd_1_f_0(
#line 181 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8,
#line 181 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
#line 181 "mode_robdd.tfeirn.m"
{
#line 181 "mode_robdd.tfeirn.m"
  {
#line 181 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));

#line 181 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 181 "mode_robdd.tfeirn.m"
  }
#line 181 "mode_robdd.tfeirn.m"
}

#line 173 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__ensure_normalised_1_f_0(
#line 173 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_4,
#line 173 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 173 "mode_robdd.tfeirn.m"
{
#line 619 "mode_robdd.tfeirn.m"
  {
#line 619 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 619 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;

#line 619 "mode_robdd.tfeirn.m"
    {
#line 619 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_4, mode_robdd__tfeirn__X_3);
    }
#line 619 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 619 "mode_robdd.tfeirn.m"
  }
#line 173 "mode_robdd.tfeirn.m"
}

#line 168 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn__minimal_model_4_p_0(
#line 168 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
#line 168 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_5,
#line 168 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 168 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 168 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
#line 168 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__cont,
#line 168 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__cont_env_ptr)
#line 168 "mode_robdd.tfeirn.m"
{
#line 586 "mode_robdd.tfeirn.m"
  while (MR_TRUE)
#line 586 "mode_robdd.tfeirn.m"
    {
#line 586 "mode_robdd.tfeirn.m"
      /* tailcall optimized into a loop */
#line 586 "mode_robdd.tfeirn.m"
      {
#line 586 "mode_robdd.tfeirn.m"
        MR_bool mode_robdd__tfeirn__succeeded;
#line 586 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
#line 583 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;

#line 8535 "mode_robdd.tfeirn.c"
        {
#line 8537 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8539 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 8541 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 8543 "mode_robdd.tfeirn.c"
        }
#line 583 "mode_robdd.tfeirn.m"
        {
#line 583 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_16_16, (MR_Word) mode_robdd__tfeirn__Vars_5);
        }
#line 586 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 584 "mode_robdd.tfeirn.m"
          {
#line 584 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv0_TrueVars_7;
#line 585 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_FalseVars_8;

#line 584 "mode_robdd.tfeirn.m"
            {
#line 584 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv0_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_16_16);
            }
#line 584 "mode_robdd.tfeirn.m"
            *mode_robdd__tfeirn__TrueVars_7 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars_7;
#line 585 "mode_robdd.tfeirn.m"
            {
#line 585 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_16_16);
            }
#line 585 "mode_robdd.tfeirn.m"
            *mode_robdd__tfeirn__FalseVars_8 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars_8;
#line 584 "mode_robdd.tfeirn.m"
            {
#line 584 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__cont(mode_robdd__tfeirn__cont_env_ptr);
#line 584 "mode_robdd.tfeirn.m"
              return;
            }
#line 584 "mode_robdd.tfeirn.m"
          }
#line 586 "mode_robdd.tfeirn.m"
        else
#line 587 "mode_robdd.tfeirn.m"
          {
#line 587 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TrueVars0_9;
#line 587 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FalseVars0_10;

#line 587 "mode_robdd.tfeirn.m"
            {
#line 587 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X0_6, &mode_robdd__tfeirn__TrueVars0_9, &mode_robdd__tfeirn__FalseVars0_10);
            }
#line 587 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 587 "mode_robdd.tfeirn.m"
              {
#line 589 "mode_robdd.tfeirn.m"
                *mode_robdd__tfeirn__TrueVars_7 = mode_robdd__tfeirn__TrueVars0_9;
#line 590 "mode_robdd.tfeirn.m"
                *mode_robdd__tfeirn__FalseVars_8 = mode_robdd__tfeirn__FalseVars0_10;
#line 589 "mode_robdd.tfeirn.m"
                {
#line 589 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__cont(mode_robdd__tfeirn__cont_env_ptr);
                }
#line 592 "mode_robdd.tfeirn.m"
                {
#line 592 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__X_11;
#line 592 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_12_12;
#line 592 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_13_13;

#line 592 "mode_robdd.tfeirn.m"
                  {
#line 592 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_13_13 = mercury__robdd__conj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TrueVars0_9);
                  }
#line 592 "mode_robdd.tfeirn.m"
                  {
#line 592 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_12_12 = mercury__robdd__f_126_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__V_13_13);
                  }
#line 592 "mode_robdd.tfeirn.m"
                  {
#line 592 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__X0_6, mode_robdd__tfeirn__V_12_12);
                  }
#line 593 "mode_robdd.tfeirn.m"
                  /* direct tailcall eliminated */
#line 593 "mode_robdd.tfeirn.m"
                  {
#line 593 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__X0__tmp_copy_6 = mode_robdd__tfeirn__X_11;

#line 593 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__X0_6 = mode_robdd__tfeirn__X0__tmp_copy_6;
#line 593 "mode_robdd.tfeirn.m"
                  }
#line 593 "mode_robdd.tfeirn.m"
                  continue;
#line 592 "mode_robdd.tfeirn.m"
                }
#line 587 "mode_robdd.tfeirn.m"
              }
#line 587 "mode_robdd.tfeirn.m"
          }
#line 586 "mode_robdd.tfeirn.m"
      }
#line 586 "mode_robdd.tfeirn.m"
      break;
#line 586 "mode_robdd.tfeirn.m"
    }
#line 168 "mode_robdd.tfeirn.m"
}

#line 556 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0_1(
#line 556 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg)
#line 556 "mode_robdd.tfeirn.m"
{
#line 556 "mode_robdd.tfeirn.m"
  {
#line 556 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

#line 556 "mode_robdd.tfeirn.m"
    {
#line 557 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv6_TrueVars_12;
#line 558 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv7_FalseVars_13;

#line 557 "mode_robdd.tfeirn.m"
      {
#line 557 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv6_TrueVars_12 = mercury__sparse_bitset__union_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17);
      }
#line 557 "mode_robdd.tfeirn.m"
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12) = (MR_Word) mode_robdd__tfeirn__conv6_TrueVars_12;
#line 558 "mode_robdd.tfeirn.m"
      {
#line 558 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv7_FalseVars_13 = mercury__sparse_bitset__union_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18);
      }
#line 558 "mode_robdd.tfeirn.m"
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13) = (MR_Word) mode_robdd__tfeirn__conv7_FalseVars_13;
#line 558 "mode_robdd.tfeirn.m"
      {
#line 558 "mode_robdd.tfeirn.m"
        ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr);
#line 558 "mode_robdd.tfeirn.m"
        return;
      }
#line 556 "mode_robdd.tfeirn.m"
    }
#line 556 "mode_robdd.tfeirn.m"
  }
#line 556 "mode_robdd.tfeirn.m"
}

#line 156 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0(
#line 156 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
#line 156 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 156 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
#line 156 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_12,
#line 156 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_13,
#line 156 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__cont,
#line 156 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__cont_env_ptr)
#line 156 "mode_robdd.tfeirn.m"
{
#line 156 "mode_robdd.tfeirn.m"
  {
#line 156 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s mode_robdd__tfeirn__env;
#line 156 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = &mode_robdd__tfeirn__env;

#line 156 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12 = mode_robdd__tfeirn__TrueVars_12;
#line 156 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13 = mode_robdd__tfeirn__FalseVars_13;
#line 156 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont = mode_robdd__tfeirn__cont;
#line 156 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr = mode_robdd__tfeirn__cont_env_ptr;
#line 546 "mode_robdd.tfeirn.m"
    {
#line 546 "mode_robdd.tfeirn.m"
      MR_bool mode_robdd__tfeirn__succeeded;
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__N_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__Vars_16;
#line 546 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_19_19;
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv0_TrueVars0_14;
#line 548 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv1_FalseVars0_15;
#line 549 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv2_V_19_19;
#line 549 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv3_Vars_16;

#line 8773 "mode_robdd.tfeirn.c"
      {
#line 8775 "mode_robdd.tfeirn.c"
        MR_Word base;
#line 8777 "mode_robdd.tfeirn.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8779 "mode_robdd.tfeirn.c"
        (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25 = base;
#line 8781 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_24_24));
#line 8783 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 8785 "mode_robdd.tfeirn.c"
      }
#line 547 "mode_robdd.tfeirn.m"
      {
#line 547 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv0_TrueVars0_14 = mercury__sparse_bitset__intersect_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__T_6, (MR_Word) mode_robdd__tfeirn__Vars0_5);
      }
#line 547 "mode_robdd.tfeirn.m"
      (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars0_14;
#line 548 "mode_robdd.tfeirn.m"
      {
#line 548 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv1_FalseVars0_15 = mercury__sparse_bitset__intersect_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__F_7, (MR_Word) mode_robdd__tfeirn__Vars0_5);
      }
#line 548 "mode_robdd.tfeirn.m"
      (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars0_15;
#line 549 "mode_robdd.tfeirn.m"
      {
#line 549 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv2_V_19_19 = mercury__sparse_bitset__difference_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__Vars0_5, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14);
      }
#line 549 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_19_19 = (MR_Word) mode_robdd__tfeirn__conv2_V_19_19;
#line 549 "mode_robdd.tfeirn.m"
      {
#line 549 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv3_Vars_16 = mercury__sparse_bitset__difference_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__V_19_19, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15);
      }
#line 549 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__Vars_16 = (MR_Word) mode_robdd__tfeirn__conv3_Vars_16;
#line 551 "mode_robdd.tfeirn.m"
      {
#line 551 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__Vars_16);
      }
#line 554 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 552 "mode_robdd.tfeirn.m"
        {
#line 552 "mode_robdd.tfeirn.m"
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12) = (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14;
#line 553 "mode_robdd.tfeirn.m"
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13) = (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15;
#line 552 "mode_robdd.tfeirn.m"
          {
#line 552 "mode_robdd.tfeirn.m"
            ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr);
#line 552 "mode_robdd.tfeirn.m"
            return;
          }
#line 552 "mode_robdd.tfeirn.m"
        }
#line 554 "mode_robdd.tfeirn.m"
      else
#line 556 "mode_robdd.tfeirn.m"
        {
#line 556 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__V_20_20;
#line 556 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__V_21_21;
#line 556 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__V_22_22;
#line 555 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__conv4_V_21_21;
#line 555 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__conv5_V_22_22;

#line 555 "mode_robdd.tfeirn.m"
          {
#line 555 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__conv4_V_21_21 = mercury__sparse_bitset__init_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25);
          }
#line 555 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_21_21 = (MR_Word) mode_robdd__tfeirn__conv4_V_21_21;
#line 555 "mode_robdd.tfeirn.m"
          {
#line 555 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__conv5_V_22_22 = mercury__sparse_bitset__init_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25);
          }
#line 555 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_22_22 = (MR_Word) mode_robdd__tfeirn__conv5_V_22_22;
#line 555 "mode_robdd.tfeirn.m"
          {
#line 555 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 555 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__V_21_21));
#line 555 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__V_22_22));
#line 555 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 555 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 555 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 555 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 5) = ((MR_Box) (mode_robdd__tfeirn__N_11));
#line 555 "mode_robdd.tfeirn.m"
          }
#line 555 "mode_robdd.tfeirn.m"
          {
#line 555 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__labelling_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_23, mode_robdd__tfeirn__Vars_16, mode_robdd__tfeirn__V_20_20, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18, mode_robdd__tfeirn__labelling_4_p_0_1, mode_robdd__tfeirn__env_ptr);
          }
#line 556 "mode_robdd.tfeirn.m"
        }
#line 546 "mode_robdd.tfeirn.m"
    }
#line 156 "mode_robdd.tfeirn.m"
  }
#line 156 "mode_robdd.tfeirn.m"
}

#line 141 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_filter_2_f_0(
#line 141 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 141 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__P_4,
#line 141 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 141 "mode_robdd.tfeirn.m"
{
#line 542 "mode_robdd.tfeirn.m"
  {
#line 542 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 542 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_11_11;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_12_12;

#line 8950 "mode_robdd.tfeirn.c"
    {
#line 8952 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8954 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 8956 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 8958 "mode_robdd.tfeirn.c"
    }
#line 8960 "mode_robdd.tfeirn.c"
    {
#line 8962 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8964 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 8966 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 8968 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 8970 "mode_robdd.tfeirn.c"
    }
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_11_11 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__P_4, (MR_Word) mode_robdd__tfeirn__T_5);
    }
#line 543 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_11_11 = (MR_Word) mode_robdd__tfeirn__conv0_V_11_11;
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_12_12 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__P_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
#line 543 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_12_12 = (MR_Word) mode_robdd__tfeirn__conv1_V_12_12;
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = mode_robdd__equiv_vars__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__E_7);
    }
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__I_8);
    }
#line 543 "mode_robdd.tfeirn.m"
    {
#line 543 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_15_15 = mercury__robdd__restrict_filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__R_9);
    }
#line 542 "mode_robdd.tfeirn.m"
    {
#line 542 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 542 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 542 "mode_robdd.tfeirn.m"
    }
#line 542 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 542 "mode_robdd.tfeirn.m"
  }
#line 141 "mode_robdd.tfeirn.m"
}

#line 137 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_threshold_2_f_0(
#line 137 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 137 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 137 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 137 "mode_robdd.tfeirn.m"
{
#line 339 "mode_robdd.tfeirn.m"
  {
#line 339 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 339 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_11_11;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_12_12;

#line 9078 "mode_robdd.tfeirn.c"
    {
#line 9080 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9082 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 9084 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9086 "mode_robdd.tfeirn.c"
    }
#line 9088 "mode_robdd.tfeirn.c"
    {
#line 9090 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9092 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 9094 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9096 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 9098 "mode_robdd.tfeirn.c"
    }
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_11_11 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__T_5, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
#line 340 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_11_11 = (MR_Word) mode_robdd__tfeirn__conv0_V_11_11;
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_12_12 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__F_6, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
#line 340 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_12_12 = (MR_Word) mode_robdd__tfeirn__conv1_V_12_12;
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = mode_robdd__equiv_vars__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7);
    }
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__I_8);
    }
#line 340 "mode_robdd.tfeirn.m"
    {
#line 340 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_15_15 = mercury__robdd__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
    }
#line 339 "mode_robdd.tfeirn.m"
    {
#line 339 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 339 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 339 "mode_robdd.tfeirn.m"
    }
#line 339 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 339 "mode_robdd.tfeirn.m"
  }
#line 137 "mode_robdd.tfeirn.m"
}

#line 132 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_2_f_0(
#line 132 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20,
#line 132 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 132 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 132 "mode_robdd.tfeirn.m"
{
#line 323 "mode_robdd.tfeirn.m"
  {
#line 323 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 323 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

#line 9192 "mode_robdd.tfeirn.c"
    {
#line 9194 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9196 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 9198 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9200 "mode_robdd.tfeirn.c"
    }
#line 9202 "mode_robdd.tfeirn.c"
    {
#line 9204 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9206 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 9208 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9210 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 9212 "mode_robdd.tfeirn.c"
    }
#line 324 "mode_robdd.tfeirn.m"
    {
#line 324 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
#line 323 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 325 "mode_robdd.tfeirn.m"
      {
#line 325 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 325 "mode_robdd.tfeirn.m"
        {
#line 325 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
#line 323 "mode_robdd.tfeirn.m"
        {
#line 323 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 323 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
        }
#line 325 "mode_robdd.tfeirn.m"
      }
#line 323 "mode_robdd.tfeirn.m"
    else
#line 323 "mode_robdd.tfeirn.m"
      {
#line 323 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

#line 9264 "mode_robdd.tfeirn.c"
        {
#line 9266 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9268 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 9270 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9272 "mode_robdd.tfeirn.c"
        }
#line 9274 "mode_robdd.tfeirn.c"
        {
#line 9276 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9278 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 9280 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9282 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 9284 "mode_robdd.tfeirn.c"
        }
#line 326 "mode_robdd.tfeirn.m"
        {
#line 326 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
#line 323 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 327 "mode_robdd.tfeirn.m"
          {
#line 327 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 327 "mode_robdd.tfeirn.m"
            {
#line 327 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 323 "mode_robdd.tfeirn.m"
            {
#line 323 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 323 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
            }
#line 327 "mode_robdd.tfeirn.m"
          }
#line 323 "mode_robdd.tfeirn.m"
        else
#line 323 "mode_robdd.tfeirn.m"
          {
#line 323 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__L_11;

#line 328 "mode_robdd.tfeirn.m"
            {
#line 328 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7, &mode_robdd__tfeirn__L_11);
            }
#line 323 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 323 "mode_robdd.tfeirn.m"
              {
#line 329 "mode_robdd.tfeirn.m"
                {
#line 329 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__term____Unify____var_1_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__L_11, mode_robdd__tfeirn__V_4);
                }
#line 329 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 323 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 330 "mode_robdd.tfeirn.m"
                  {
#line 330 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_14_14;

#line 330 "mode_robdd.tfeirn.m"
                    {
#line 330 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_14_14 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
#line 323 "mode_robdd.tfeirn.m"
                    {
#line 323 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
                    }
#line 330 "mode_robdd.tfeirn.m"
                  }
#line 323 "mode_robdd.tfeirn.m"
                else
#line 332 "mode_robdd.tfeirn.m"
                  {
#line 332 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_15_15;
#line 332 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_16_16;
#line 332 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_17_17;

#line 332 "mode_robdd.tfeirn.m"
                    {
#line 332 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_15_15 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
#line 332 "mode_robdd.tfeirn.m"
                    {
#line 332 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_16_16 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                    }
#line 332 "mode_robdd.tfeirn.m"
                    {
#line 332 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_17_17 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                    }
#line 323 "mode_robdd.tfeirn.m"
                    {
#line 323 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 323 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
                    }
#line 332 "mode_robdd.tfeirn.m"
                  }
#line 323 "mode_robdd.tfeirn.m"
              }
#line 323 "mode_robdd.tfeirn.m"
            else
#line 336 "mode_robdd.tfeirn.m"
              {
#line 336 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_18_18;
#line 336 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_19_19;

#line 336 "mode_robdd.tfeirn.m"
                {
#line 336 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_18_18 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                }
#line 336 "mode_robdd.tfeirn.m"
                {
#line 336 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_19_19 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                }
#line 323 "mode_robdd.tfeirn.m"
                {
#line 323 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 323 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 323 "mode_robdd.tfeirn.m"
                }
#line 336 "mode_robdd.tfeirn.m"
              }
#line 323 "mode_robdd.tfeirn.m"
          }
#line 323 "mode_robdd.tfeirn.m"
      }
#line 323 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 323 "mode_robdd.tfeirn.m"
  }
#line 132 "mode_robdd.tfeirn.m"
}

#line 128 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn__known_vars_3_p_0(
#line 128 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_18,
#line 128 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_4,
#line 128 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_5,
#line 128 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_6)
#line 128 "mode_robdd.tfeirn.m"
{
#line 318 "mode_robdd.tfeirn.m"
  {
#line 318 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 315 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
#line 315 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_21_21;
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));

#line 315 "mode_robdd.tfeirn.m"
    {
#line 315 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_21_21 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_18);
    }
#line 315 "mode_robdd.tfeirn.m"
    {
#line 315 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_18, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_21_21);
    }
#line 318 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 316 "mode_robdd.tfeirn.m"
      {
#line 316 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 316 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
#line 316 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv0_TrueVars_5;
#line 317 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv1_FalseVars_6;

#line 9531 "mode_robdd.tfeirn.c"
        {
#line 9533 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9535 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 9537 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_18));
#line 9539 "mode_robdd.tfeirn.c"
        }
#line 316 "mode_robdd.tfeirn.m"
        {
#line 316 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv0_TrueVars_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
#line 316 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__TrueVars_5 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars_5;
#line 317 "mode_robdd.tfeirn.m"
        {
#line 317 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv1_FalseVars_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
#line 317 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__FalseVars_6 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars_6;
#line 316 "mode_robdd.tfeirn.m"
      }
#line 318 "mode_robdd.tfeirn.m"
    else
#line 319 "mode_robdd.tfeirn.m"
      {
#line 319 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9;
#line 319 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10;
#line 319 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11;
#line 319 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 319 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__TrueVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
#line 319 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__FalseVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
#line 319 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
#line 319 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
#line 319 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
#line 319 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));
#line 319 "mode_robdd.tfeirn.m"
      }
#line 318 "mode_robdd.tfeirn.m"
  }
#line 128 "mode_robdd.tfeirn.m"
}

#line 124 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__vars_disentailed_1_f_0(
#line 124 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11,
#line 124 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 124 "mode_robdd.tfeirn.m"
{
#line 307 "mode_robdd.tfeirn.m"
  {
#line 307 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 307 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 308 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 308 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 308 "mode_robdd.tfeirn.m"
    {
#line 308 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
#line 308 "mode_robdd.tfeirn.m"
    {
#line 308 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__V_4_4, mode_robdd__tfeirn__V_12_12);
    }
#line 307 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 307 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "mode_robdd.tfeirn.m"
    else
#line 311 "mode_robdd.tfeirn.m"
      {
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 311 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 307 "mode_robdd.tfeirn.m"
        {
#line 307 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 307 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 307 "mode_robdd.tfeirn.m"
        }
#line 311 "mode_robdd.tfeirn.m"
      }
#line 307 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 307 "mode_robdd.tfeirn.m"
  }
#line 124 "mode_robdd.tfeirn.m"
}

#line 119 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__vars_entailed_1_f_0(
#line 119 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11,
#line 119 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 119 "mode_robdd.tfeirn.m"
{
#line 300 "mode_robdd.tfeirn.m"
  {
#line 300 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 300 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 301 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 301 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 301 "mode_robdd.tfeirn.m"
    {
#line 301 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
#line 301 "mode_robdd.tfeirn.m"
    {
#line 301 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__V_4_4, mode_robdd__tfeirn__V_12_12);
    }
#line 300 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 300 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 300 "mode_robdd.tfeirn.m"
    else
#line 304 "mode_robdd.tfeirn.m"
      {
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 304 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 300 "mode_robdd.tfeirn.m"
        {
#line 300 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 300 "mode_robdd.tfeirn.m"
        }
#line 304 "mode_robdd.tfeirn.m"
      }
#line 300 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 300 "mode_robdd.tfeirn.m"
  }
#line 119 "mode_robdd.tfeirn.m"
}

#line 115 "mode_robdd.tfeirn.m"
MR_bool MR_CALL 
mode_robdd__tfeirn__var_entailed_2_p_0(
#line 115 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_12,
#line 115 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3,
#line 115 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4)
#line 115 "mode_robdd.tfeirn.m"
{
#line 298 "mode_robdd.tfeirn.m"
  {
#line 298 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;

#line 298 "mode_robdd.tfeirn.m"
    {
#line 298 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 298 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_17_17;
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 181 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 298 "mode_robdd.tfeirn.m"
      {
#line 298 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_17_17 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_12);
      }
#line 298 "mode_robdd.tfeirn.m"
      {
#line 298 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_17_17);
      }
#line 298 "mode_robdd.tfeirn.m"
    }
#line 298 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 298 "mode_robdd.tfeirn.m"
      {
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_14_14;
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_16;
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 298 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 9815 "mode_robdd.tfeirn.c"
        {
#line 9817 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9819 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_13_13));
#line 9821 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_12));
#line 9823 "mode_robdd.tfeirn.c"
        }
#line 9825 "mode_robdd.tfeirn.c"
        {
#line 9827 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9829 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15));
#line 9831 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_12));
#line 9833 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_14_14));
#line 9835 "mode_robdd.tfeirn.c"
        }
#line 298 "mode_robdd.tfeirn.m"
        {
#line 298 "mode_robdd.tfeirn.m"
          return mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__TypeClassInfo_for_enum_16, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_4);
        }
#line 298 "mode_robdd.tfeirn.m"
      }
#line 298 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 298 "mode_robdd.tfeirn.m"
  }
#line 115 "mode_robdd.tfeirn.m"
}

#line 108 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__var_restrict_false_2_f_0(
#line 108 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30,
#line 108 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 108 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 108 "mode_robdd.tfeirn.m"
{
#line 532 "mode_robdd.tfeirn.m"
  {
#line 532 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_11;
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 532 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34;

#line 9889 "mode_robdd.tfeirn.c"
    {
#line 9891 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9893 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_31_31));
#line 9895 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 9897 "mode_robdd.tfeirn.c"
    }
#line 9899 "mode_robdd.tfeirn.c"
    {
#line 9901 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9903 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33));
#line 9905 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 9907 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_32_32));
#line 9909 "mode_robdd.tfeirn.c"
    }
#line 533 "mode_robdd.tfeirn.m"
    {
#line 533 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
#line 535 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 534 "mode_robdd.tfeirn.m"
      {
#line 534 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30);
      }
#line 535 "mode_robdd.tfeirn.m"
    else
#line 537 "mode_robdd.tfeirn.m"
      {
#line 537 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38;
#line 535 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 535 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36;
#line 535 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

#line 9936 "mode_robdd.tfeirn.c"
        {
#line 9938 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9940 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_35_35));
#line 9942 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 9944 "mode_robdd.tfeirn.c"
        }
#line 9946 "mode_robdd.tfeirn.c"
        {
#line 9948 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9950 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37));
#line 9952 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 9954 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_36_36));
#line 9956 "mode_robdd.tfeirn.c"
        }
#line 535 "mode_robdd.tfeirn.m"
        {
#line 535 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
#line 537 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 536 "mode_robdd.tfeirn.m"
          {
#line 536 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 536 "mode_robdd.tfeirn.m"
            {
#line 536 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 536 "mode_robdd.tfeirn.m"
            {
#line 536 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 536 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 536 "mode_robdd.tfeirn.m"
            }
#line 536 "mode_robdd.tfeirn.m"
          }
#line 537 "mode_robdd.tfeirn.m"
        else
#line 538 "mode_robdd.tfeirn.m"
          {
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X0_12;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 538 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_20_20;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_21_21;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_22_22;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_23_23;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_24_24;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_26_26;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_27_27;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_28_28;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_29_29;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_25_25;

#line 10042 "mode_robdd.tfeirn.c"
            {
#line 10044 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10046 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_43_43));
#line 10048 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10050 "mode_robdd.tfeirn.c"
            }
#line 10052 "mode_robdd.tfeirn.c"
            {
#line 10054 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10056 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45));
#line 10058 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10060 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_44_44));
#line 10062 "mode_robdd.tfeirn.c"
            }
#line 538 "mode_robdd.tfeirn.m"
            {
#line 538 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 538 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Integer) 0;
#line 538 "mode_robdd.tfeirn.m"
            {
#line 538 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 538 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 5) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 538 "mode_robdd.tfeirn.m"
            }
#line 538 "mode_robdd.tfeirn.m"
            {
#line 538 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__V_14_14);
            }
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_4);
            }
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_24_24));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__V_26_26));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__V_27_27));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__V_28_28));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__V_29_29));
#line 539 "mode_robdd.tfeirn.m"
            }
#line 538 "mode_robdd.tfeirn.m"
          }
#line 537 "mode_robdd.tfeirn.m"
      }
#line 532 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_11;
#line 532 "mode_robdd.tfeirn.m"
  }
#line 108 "mode_robdd.tfeirn.m"
}

#line 104 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__var_restrict_true_2_f_0(
#line 104 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30,
#line 104 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 104 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 104 "mode_robdd.tfeirn.m"
{
#line 522 "mode_robdd.tfeirn.m"
  {
#line 522 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_11;
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 522 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34;

#line 10190 "mode_robdd.tfeirn.c"
    {
#line 10192 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10194 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_31_31));
#line 10196 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10198 "mode_robdd.tfeirn.c"
    }
#line 10200 "mode_robdd.tfeirn.c"
    {
#line 10202 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10204 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33));
#line 10206 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10208 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_32_32));
#line 10210 "mode_robdd.tfeirn.c"
    }
#line 523 "mode_robdd.tfeirn.m"
    {
#line 523 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
#line 525 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 524 "mode_robdd.tfeirn.m"
      {
#line 524 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30);
      }
#line 525 "mode_robdd.tfeirn.m"
    else
#line 527 "mode_robdd.tfeirn.m"
      {
#line 527 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38;
#line 525 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 525 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36;
#line 525 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

#line 10237 "mode_robdd.tfeirn.c"
        {
#line 10239 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10241 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_35_35));
#line 10243 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10245 "mode_robdd.tfeirn.c"
        }
#line 10247 "mode_robdd.tfeirn.c"
        {
#line 10249 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10251 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37));
#line 10253 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10255 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_36_36));
#line 10257 "mode_robdd.tfeirn.c"
        }
#line 525 "mode_robdd.tfeirn.m"
        {
#line 525 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
#line 527 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 526 "mode_robdd.tfeirn.m"
          {
#line 526 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 526 "mode_robdd.tfeirn.m"
            {
#line 526 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
#line 526 "mode_robdd.tfeirn.m"
            {
#line 526 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 526 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 526 "mode_robdd.tfeirn.m"
            }
#line 526 "mode_robdd.tfeirn.m"
          }
#line 527 "mode_robdd.tfeirn.m"
        else
#line 528 "mode_robdd.tfeirn.m"
          {
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X0_12;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 528 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_20_20;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_21_21;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_22_22;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_23_23;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_25_25;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_26_26;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_27_27;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_28_28;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_29_29;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_24_24;

#line 10343 "mode_robdd.tfeirn.c"
            {
#line 10345 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10347 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_43_43));
#line 10349 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10351 "mode_robdd.tfeirn.c"
            }
#line 10353 "mode_robdd.tfeirn.c"
            {
#line 10355 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10357 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45));
#line 10359 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10361 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_44_44));
#line 10363 "mode_robdd.tfeirn.c"
            }
#line 528 "mode_robdd.tfeirn.m"
            {
#line 528 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
#line 528 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Integer) 0;
#line 528 "mode_robdd.tfeirn.m"
            {
#line 528 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 528 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 5) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 528 "mode_robdd.tfeirn.m"
            }
#line 528 "mode_robdd.tfeirn.m"
            {
#line 528 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__V_14_14);
            }
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_4);
            }
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_25_25));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__V_26_26));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__V_27_27));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__V_28_28));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__V_29_29));
#line 529 "mode_robdd.tfeirn.m"
            }
#line 528 "mode_robdd.tfeirn.m"
          }
#line 527 "mode_robdd.tfeirn.m"
      }
#line 522 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_11;
#line 522 "mode_robdd.tfeirn.m"
  }
#line 104 "mode_robdd.tfeirn.m"
}

#line 520 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0_1(
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 520 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 520 "mode_robdd.tfeirn.m"
{
#line 520 "mode_robdd.tfeirn.m"
  {
#line 520 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 520 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 520 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv3_HeadVar__5_20;

#line 520 "mode_robdd.tfeirn.m"
    {
#line 520 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv3_HeadVar__5_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__520__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 520 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv3_HeadVar__5_20));
#line 520 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 520 "mode_robdd.tfeirn.m"
  }
#line 520 "mode_robdd.tfeirn.m"
}

#line 100 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0(
#line 100 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_21,
#line 100 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_5,
#line 100 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Var_6,
#line 100 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 100 "mode_robdd.tfeirn.m"
{
#line 510 "mode_robdd.tfeirn.m"
  {
#line 510 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___R_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___N_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 510 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_23_23;
#line 485 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 485 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 485 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_25;

#line 10527 "mode_robdd.tfeirn.c"
    {
#line 10529 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10531 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_22_22));
#line 10533 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10535 "mode_robdd.tfeirn.c"
    }
#line 10537 "mode_robdd.tfeirn.c"
    {
#line 10539 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10541 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24));
#line 10543 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10545 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_23_23));
#line 10547 "mode_robdd.tfeirn.c"
    }
#line 485 "mode_robdd.tfeirn.m"
    {
#line 485 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeClassInfo_for_enum_25, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__Var_6);
    }
#line 510 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
      {
#line 486 "mode_robdd.tfeirn.m"
        {
#line 486 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
        }
#line 510 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 510 "mode_robdd.tfeirn.m"
        else
#line 510 "mode_robdd.tfeirn.m"
          {
#line 510 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__conj_not_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
          }
#line 510 "mode_robdd.tfeirn.m"
      }
#line 510 "mode_robdd.tfeirn.m"
    else
#line 510 "mode_robdd.tfeirn.m"
      {
#line 510 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_29_29;
#line 491 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 491 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 491 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_31;

#line 10589 "mode_robdd.tfeirn.c"
        {
#line 10591 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10593 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_28));
#line 10595 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10597 "mode_robdd.tfeirn.c"
        }
#line 10599 "mode_robdd.tfeirn.c"
        {
#line 10601 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10603 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30));
#line 10605 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10607 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_29_29));
#line 10609 "mode_robdd.tfeirn.c"
        }
#line 491 "mode_robdd.tfeirn.m"
        {
#line 491 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeClassInfo_for_enum_31, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__Var_6);
        }
#line 510 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
          {
#line 492 "mode_robdd.tfeirn.m"
            {
#line 492 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_29_29, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
            }
#line 510 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
              {
#line 510 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21);
              }
#line 510 "mode_robdd.tfeirn.m"
            else
#line 510 "mode_robdd.tfeirn.m"
              {
#line 510 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__disj_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
              }
#line 510 "mode_robdd.tfeirn.m"
          }
#line 510 "mode_robdd.tfeirn.m"
        else
#line 510 "mode_robdd.tfeirn.m"
          {
#line 497 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 497 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_35_35;
#line 497 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 497 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv0_V_16_16;

#line 10654 "mode_robdd.tfeirn.c"
            {
#line 10656 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10658 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_35_35, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_34_34));
#line 10660 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10662 "mode_robdd.tfeirn.c"
            }
#line 497 "mode_robdd.tfeirn.m"
            {
#line 497 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv0_V_16_16 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_35_35, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__T_9);
            }
#line 497 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Word) mode_robdd__tfeirn__conv0_V_16_16;
#line 497 "mode_robdd.tfeirn.m"
            {
#line 497 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_35_35, (MR_Word) mode_robdd__tfeirn__V_16_16);
            }
#line 497 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 510 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
              {
#line 510 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
              }
#line 510 "mode_robdd.tfeirn.m"
            else
#line 510 "mode_robdd.tfeirn.m"
              {
#line 499 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 499 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_37_37;

#line 10694 "mode_robdd.tfeirn.c"
                {
#line 10696 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10698 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_37_37, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_36_36));
#line 10700 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_37_37, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10702 "mode_robdd.tfeirn.c"
                }
#line 499 "mode_robdd.tfeirn.m"
                {
#line 499 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_37_37, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
                }
#line 510 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
                  {
#line 510 "mode_robdd.tfeirn.m"
                    return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                  }
#line 510 "mode_robdd.tfeirn.m"
                else
#line 510 "mode_robdd.tfeirn.m"
                  {
#line 510 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeInfo_39_39;
#line 510 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_41;
#line 510 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__Var1_10;
#line 510 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__Vars1_11;
#line 501 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 501 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 501 "mode_robdd.tfeirn.m"
                    MR_Box mode_robdd__tfeirn__conv2_Var1_10;
#line 501 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__conv1_Vars1_11;

#line 10737 "mode_robdd.tfeirn.c"
                    {
#line 10739 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10741 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_39_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_38_38));
#line 10743 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_39_39, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10745 "mode_robdd.tfeirn.c"
                    }
#line 10747 "mode_robdd.tfeirn.c"
                    {
#line 10749 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10751 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40));
#line 10753 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10755 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_39_39));
#line 10757 "mode_robdd.tfeirn.c"
                    }
#line 501 "mode_robdd.tfeirn.m"
                    {
#line 501 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_41, &mode_robdd__tfeirn__conv2_Var1_10, (MR_Word) mode_robdd__tfeirn__Vars_5, &mode_robdd__tfeirn__conv1_Vars1_11);
                    }
#line 501 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 501 "mode_robdd.tfeirn.m"
                      {
#line 501 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__Var1_10 = ((MR_Word) mode_robdd__tfeirn__conv2_Var1_10);
#line 501 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__Vars1_11 = (MR_Word) mode_robdd__tfeirn__conv1_Vars1_11;
#line 501 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 501 "mode_robdd.tfeirn.m"
                      }
#line 510 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
                      {
#line 502 "mode_robdd.tfeirn.m"
                        {
#line 502 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_39_39, (MR_Word) mode_robdd__tfeirn__Vars1_11);
                        }
#line 510 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 510 "mode_robdd.tfeirn.m"
                          {
#line 510 "mode_robdd.tfeirn.m"
                            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__eq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var1_10, mode_robdd__tfeirn__X_7);
                          }
#line 510 "mode_robdd.tfeirn.m"
                        else
#line 505 "mode_robdd.tfeirn.m"
                          {
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_67;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeInfo_29_68;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_17_17;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_18_18;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_19_19;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_20_20;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__T_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__F_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__E_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__I0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__R_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__I_53;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_56_56 = (MR_Integer) 0;
#line 505 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_57_57;
#line 519 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 520 "mode_robdd.tfeirn.m"
                            MR_Box mode_robdd__tfeirn__conv4_I_53;

#line 520 "mode_robdd.tfeirn.m"
                            {
#line 520 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[1]));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 1) = ((MR_Box) (mode_robdd__tfeirn__disj_vars_eq_3_f_0_1));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
#line 520 "mode_robdd.tfeirn.m"
                            }
#line 10845 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeCtorInfo_28_67 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 10847 "mode_robdd.tfeirn.c"
                            {
#line 10849 "mode_robdd.tfeirn.c"
                              mode_robdd__tfeirn__TypeInfo_29_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10851 "mode_robdd.tfeirn.c"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_68, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_67));
#line 10853 "mode_robdd.tfeirn.c"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_68, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10855 "mode_robdd.tfeirn.c"
                            }
#line 520 "mode_robdd.tfeirn.m"
                            {
#line 520 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__conv4_I_53 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeInfo_29_68, mode_robdd__tfeirn__TypeClassInfo_for_enum_41, (MR_Word) mode_robdd__tfeirn__V_57_57, mode_robdd__tfeirn__Vars_5, ((MR_Box) (mode_robdd__tfeirn__I0_50)));
                            }
#line 520 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__I_53 = ((MR_Word) mode_robdd__tfeirn__conv4_I_53);
#line 519 "mode_robdd.tfeirn.m"
                            {
#line 519 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__T_47));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__F_48));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 2) = ((MR_Box) (mode_robdd__tfeirn__E_49));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 3) = ((MR_Box) (mode_robdd__tfeirn__I_53));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 4) = ((MR_Box) (mode_robdd__tfeirn__R_51));
#line 519 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 5) = ((MR_Box) (mode_robdd__tfeirn__V_56_56));
#line 519 "mode_robdd.tfeirn.m"
                            }
#line 506 "mode_robdd.tfeirn.m"
                            {
#line 506 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_19_19 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6);
                            }
#line 506 "mode_robdd.tfeirn.m"
                            {
#line 506 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_20_20 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5);
                            }
#line 505 "mode_robdd.tfeirn.m"
                            {
#line 505 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_18_18 = mercury__robdd__f_less_or_equal_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__V_19_19, mode_robdd__tfeirn__V_20_20);
                            }
#line 510 "mode_robdd.tfeirn.m"
                            {
#line 510 "mode_robdd.tfeirn.m"
                              return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__V_17_17, mode_robdd__tfeirn__V_18_18);
                            }
#line 505 "mode_robdd.tfeirn.m"
                          }
#line 510 "mode_robdd.tfeirn.m"
                      }
#line 510 "mode_robdd.tfeirn.m"
                    else
#line 510 "mode_robdd.tfeirn.m"
                      {
#line 510 "mode_robdd.tfeirn.m"
                        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                      }
#line 510 "mode_robdd.tfeirn.m"
                  }
#line 510 "mode_robdd.tfeirn.m"
              }
#line 510 "mode_robdd.tfeirn.m"
          }
#line 510 "mode_robdd.tfeirn.m"
      }
#line 510 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 510 "mode_robdd.tfeirn.m"
  }
#line 100 "mode_robdd.tfeirn.m"
}

#line 95 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__io_constraint_4_f_0(
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_in_6,
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_out_7,
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V__8,
#line 95 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_9)
#line 95 "mode_robdd.tfeirn.m"
{
#line 481 "mode_robdd.tfeirn.m"
  {
#line 481 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_5;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_19;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Vars_10;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 481 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;

#line 481 "mode_robdd.tfeirn.m"
    {
#line 481 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_11_11 = mode_robdd__tfeirn__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__V_in_6, mode_robdd__tfeirn__V__8, mode_robdd__tfeirn__X_9);
    }
#line 10973 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 10975 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10977 "mode_robdd.tfeirn.c"
    {
#line 10979 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10981 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 10983 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 10985 "mode_robdd.tfeirn.c"
    }
#line 10987 "mode_robdd.tfeirn.c"
    {
#line 10989 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10991 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18));
#line 10993 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 10995 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_17_17));
#line 10997 "mode_robdd.tfeirn.c"
    }
#line 482 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_13_13, 0) = ((MR_Box) (mode_robdd__tfeirn__V__8));
#line 482 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_13_13, 1) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 482 "mode_robdd.tfeirn.m"
    }
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_12_12, 0) = ((MR_Box) (mode_robdd__tfeirn__V_in_6));
#line 482 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_12_12, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 482 "mode_robdd.tfeirn.m"
    }
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__TypeClassInfo_for_enum_19, mode_robdd__tfeirn__V_12_12);
    }
#line 481 "mode_robdd.tfeirn.m"
    {
#line 481 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_5 = mode_robdd__tfeirn__disj_vars_eq_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__V_out_7, mode_robdd__tfeirn__V_11_11);
    }
#line 481 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_5;
#line 481 "mode_robdd.tfeirn.m"
  }
#line 95 "mode_robdd.tfeirn.m"
}

#line 91 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__not_both_3_f_0(
#line 91 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 91 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 91 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 91 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 91 "mode_robdd.tfeirn.m"
{
#line 477 "mode_robdd.tfeirn.m"
  {
#line 477 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 477 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 467 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

#line 11078 "mode_robdd.tfeirn.c"
    {
#line 11080 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11082 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 11084 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11086 "mode_robdd.tfeirn.c"
    }
#line 11088 "mode_robdd.tfeirn.c"
    {
#line 11090 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11092 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 11094 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11096 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 11098 "mode_robdd.tfeirn.c"
    }
#line 467 "mode_robdd.tfeirn.m"
    {
#line 467 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarA_5);
    }
#line 477 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 477 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 477 "mode_robdd.tfeirn.m"
    else
#line 477 "mode_robdd.tfeirn.m"
      {
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 469 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

#line 11122 "mode_robdd.tfeirn.c"
        {
#line 11124 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11126 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 11128 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11130 "mode_robdd.tfeirn.c"
        }
#line 11132 "mode_robdd.tfeirn.c"
        {
#line 11134 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11136 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 11138 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11140 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 11142 "mode_robdd.tfeirn.c"
        }
#line 469 "mode_robdd.tfeirn.m"
        {
#line 469 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarB_6);
        }
#line 477 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 477 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 477 "mode_robdd.tfeirn.m"
        else
#line 477 "mode_robdd.tfeirn.m"
          {
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 471 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

#line 11166 "mode_robdd.tfeirn.c"
            {
#line 11168 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11170 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11172 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11174 "mode_robdd.tfeirn.c"
            }
#line 11176 "mode_robdd.tfeirn.c"
            {
#line 11178 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11180 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 11182 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11184 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 11186 "mode_robdd.tfeirn.c"
            }
#line 471 "mode_robdd.tfeirn.m"
            {
#line 471 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarA_5);
            }
#line 477 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 477 "mode_robdd.tfeirn.m"
              {
#line 477 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__X_7);
              }
#line 477 "mode_robdd.tfeirn.m"
            else
#line 477 "mode_robdd.tfeirn.m"
              {
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 473 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

#line 11213 "mode_robdd.tfeirn.c"
                {
#line 11215 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11217 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 11219 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11221 "mode_robdd.tfeirn.c"
                }
#line 11223 "mode_robdd.tfeirn.c"
                {
#line 11225 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11227 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 11229 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11231 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 11233 "mode_robdd.tfeirn.c"
                }
#line 473 "mode_robdd.tfeirn.m"
                {
#line 473 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarB_6);
                }
#line 477 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 477 "mode_robdd.tfeirn.m"
                  {
#line 477 "mode_robdd.tfeirn.m"
                    return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__X_7);
                  }
#line 477 "mode_robdd.tfeirn.m"
                else
#line 476 "mode_robdd.tfeirn.m"
                  {
#line 476 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_14_14;
#line 476 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_15_15;

#line 476 "mode_robdd.tfeirn.m"
                    {
#line 476 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                    }
#line 476 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_15_15 = (MR_Integer) 0;
#line 477 "mode_robdd.tfeirn.m"
                    {
#line 477 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_9));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
#line 477 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 477 "mode_robdd.tfeirn.m"
                    }
#line 476 "mode_robdd.tfeirn.m"
                  }
#line 477 "mode_robdd.tfeirn.m"
              }
#line 477 "mode_robdd.tfeirn.m"
          }
#line 477 "mode_robdd.tfeirn.m"
      }
#line 477 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 477 "mode_robdd.tfeirn.m"
  }
#line 91 "mode_robdd.tfeirn.m"
}

#line 87 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__at_most_one_of_2_f_0(
#line 87 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20,
#line 87 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 87 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 87 "mode_robdd.tfeirn.m"
{
#line 463 "mode_robdd.tfeirn.m"
  {
#line 463 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 463 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;
#line 457 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__V_12_12;
#line 457 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__V_13_13;
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 457 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_14_14;

#line 11342 "mode_robdd.tfeirn.c"
    {
#line 11344 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11346 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 11348 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11350 "mode_robdd.tfeirn.c"
    }
#line 11352 "mode_robdd.tfeirn.c"
    {
#line 11354 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11356 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 11358 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11360 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 11362 "mode_robdd.tfeirn.c"
    }
#line 457 "mode_robdd.tfeirn.m"
    {
#line 457 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_14_14 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_22_22, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
#line 457 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_14_14 = (MR_Word) mode_robdd__tfeirn__conv0_V_14_14;
#line 457 "mode_robdd.tfeirn.m"
    {
#line 457 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_24, (MR_Word) mode_robdd__tfeirn__V_14_14);
    }
#line 457 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_13_13 = (MR_Integer) 1;
#line 457 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_12_12 <= mode_robdd__tfeirn__V_13_13);
#line 463 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 463 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 463 "mode_robdd.tfeirn.m"
    else
#line 463 "mode_robdd.tfeirn.m"
      {
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;
#line 459 "mode_robdd.tfeirn.m"
        MR_Integer mode_robdd__tfeirn__V_15_15;
#line 459 "mode_robdd.tfeirn.m"
        MR_Integer mode_robdd__tfeirn__V_16_16;
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_17_17;
#line 459 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv1_V_17_17;

#line 11405 "mode_robdd.tfeirn.c"
        {
#line 11407 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11409 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11411 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11413 "mode_robdd.tfeirn.c"
        }
#line 11415 "mode_robdd.tfeirn.c"
        {
#line 11417 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11419 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 11421 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11423 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 11425 "mode_robdd.tfeirn.c"
        }
#line 459 "mode_robdd.tfeirn.m"
        {
#line 459 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv1_V_17_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_26_26, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
        }
#line 459 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_17_17 = (MR_Word) mode_robdd__tfeirn__conv1_V_17_17;
#line 459 "mode_robdd.tfeirn.m"
        {
#line 459 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_28, (MR_Word) mode_robdd__tfeirn__V_17_17);
        }
#line 459 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_16_16 = (MR_Integer) 1;
#line 459 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_15_15 > mode_robdd__tfeirn__V_16_16);
#line 463 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 463 "mode_robdd.tfeirn.m"
          {
#line 463 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20);
          }
#line 463 "mode_robdd.tfeirn.m"
        else
#line 462 "mode_robdd.tfeirn.m"
          {
#line 462 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 462 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;

#line 462 "mode_robdd.tfeirn.m"
            {
#line 462 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_18_18 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__I_9);
            }
#line 462 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = (MR_Integer) 0;
#line 463 "mode_robdd.tfeirn.m"
            {
#line 463 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 463 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 463 "mode_robdd.tfeirn.m"
            }
#line 462 "mode_robdd.tfeirn.m"
          }
#line 463 "mode_robdd.tfeirn.m"
      }
#line 463 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 463 "mode_robdd.tfeirn.m"
  }
#line 87 "mode_robdd.tfeirn.m"
}

#line 83 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__disj_vars_2_f_0(
#line 83 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_22,
#line 83 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 83 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_5)
#line 83 "mode_robdd.tfeirn.m"
{
#line 431 "mode_robdd.tfeirn.m"
  {
#line 431 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_6;
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 0)));
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 1)));
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 2)));
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 3)));
#line 431 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 4)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___N_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 5)));
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_18_18;

#line 11533 "mode_robdd.tfeirn.c"
    {
#line 11535 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11537 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 11539 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11541 "mode_robdd.tfeirn.c"
    }
#line 433 "mode_robdd.tfeirn.m"
    {
#line 433 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_18_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_24_24, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
    }
#line 433 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_18_18 = (MR_Word) mode_robdd__tfeirn__conv0_V_18_18;
#line 433 "mode_robdd.tfeirn.m"
    {
#line 433 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_24_24, (MR_Word) mode_robdd__tfeirn__V_18_18);
    }
#line 433 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 435 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 434 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__X0_5;
#line 435 "mode_robdd.tfeirn.m"
    else
#line 437 "mode_robdd.tfeirn.m"
      {
#line 435 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 435 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26;

#line 11570 "mode_robdd.tfeirn.c"
        {
#line 11572 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11574 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11576 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11578 "mode_robdd.tfeirn.c"
        }
#line 435 "mode_robdd.tfeirn.m"
        {
#line 435 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_26_26, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_8);
        }
#line 437 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 436 "mode_robdd.tfeirn.m"
          {
#line 436 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22);
          }
#line 437 "mode_robdd.tfeirn.m"
        else
#line 438 "mode_robdd.tfeirn.m"
          {
#line 438 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 438 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_28_28;
#line 438 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__VarsNF_13;
#line 438 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_VarsNF_13;
#line 451 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_30;
#line 451 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__Var1_14;
#line 451 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__VarsNF1_15;
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29;
#line 439 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv3_Var1_14;
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv2_VarsNF1_15;

#line 11617 "mode_robdd.tfeirn.c"
            {
#line 11619 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11621 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_27_27));
#line 11623 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11625 "mode_robdd.tfeirn.c"
            }
#line 438 "mode_robdd.tfeirn.m"
            {
#line 438 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_VarsNF_13 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_8);
            }
#line 438 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__VarsNF_13 = (MR_Word) mode_robdd__tfeirn__conv1_VarsNF_13;
#line 11634 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 11636 "mode_robdd.tfeirn.c"
            {
#line 11638 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11640 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29));
#line 11642 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11644 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_28_28));
#line 11646 "mode_robdd.tfeirn.c"
            }
#line 439 "mode_robdd.tfeirn.m"
            {
#line 439 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv3_Var1_14, (MR_Word) mode_robdd__tfeirn__VarsNF_13, &mode_robdd__tfeirn__conv2_VarsNF1_15);
            }
#line 439 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 439 "mode_robdd.tfeirn.m"
              {
#line 439 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__Var1_14 = ((MR_Word) mode_robdd__tfeirn__conv3_Var1_14);
#line 439 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__VarsNF1_15 = (MR_Word) mode_robdd__tfeirn__conv2_VarsNF1_15;
#line 439 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 439 "mode_robdd.tfeirn.m"
              }
#line 451 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 448 "mode_robdd.tfeirn.m"
              {
#line 448 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__Var2_16;
#line 448 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__VarsNF2_17;
#line 440 "mode_robdd.tfeirn.m"
                MR_Box mode_robdd__tfeirn__conv5_Var2_16;
#line 440 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__conv4_VarsNF2_17;

#line 440 "mode_robdd.tfeirn.m"
                {
#line 440 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv5_Var2_16, (MR_Word) mode_robdd__tfeirn__VarsNF1_15, &mode_robdd__tfeirn__conv4_VarsNF2_17);
                }
#line 440 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 440 "mode_robdd.tfeirn.m"
                  {
#line 440 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Var2_16 = ((MR_Word) mode_robdd__tfeirn__conv5_Var2_16);
#line 440 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__VarsNF2_17 = (MR_Word) mode_robdd__tfeirn__conv4_VarsNF2_17;
#line 440 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 440 "mode_robdd.tfeirn.m"
                  }
#line 448 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 445 "mode_robdd.tfeirn.m"
                  {
#line 441 "mode_robdd.tfeirn.m"
                    {
#line 441 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__VarsNF2_17);
                    }
#line 445 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 442 "mode_robdd.tfeirn.m"
                      {
#line 442 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_19_19;
#line 442 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_20_20;

#line 442 "mode_robdd.tfeirn.m"
                        {
#line 442 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__V_19_19 = mode_robdd__implications__either_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__Var2_16, mode_robdd__tfeirn__I_10);
                        }
#line 442 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__V_20_20 = (MR_Integer) 0;
#line 442 "mode_robdd.tfeirn.m"
                        {
#line 442 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__X_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 2) = ((MR_Box) (mode_robdd__tfeirn__E_9));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 3) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 4) = ((MR_Box) (mode_robdd__tfeirn__R_11));
#line 442 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 5) = ((MR_Box) (mode_robdd__tfeirn__V_20_20));
#line 442 "mode_robdd.tfeirn.m"
                        }
#line 442 "mode_robdd.tfeirn.m"
                      }
#line 445 "mode_robdd.tfeirn.m"
                    else
#line 446 "mode_robdd.tfeirn.m"
                      {
#line 446 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_21_21;

#line 446 "mode_robdd.tfeirn.m"
                        {
#line 446 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__V_21_21 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__VarsNF_13);
                        }
#line 446 "mode_robdd.tfeirn.m"
                        {
#line 446 "mode_robdd.tfeirn.m"
                          return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__X0_5, mode_robdd__tfeirn__V_21_21);
                        }
#line 446 "mode_robdd.tfeirn.m"
                      }
#line 445 "mode_robdd.tfeirn.m"
                  }
#line 448 "mode_robdd.tfeirn.m"
                else
#line 449 "mode_robdd.tfeirn.m"
                  {
#line 449 "mode_robdd.tfeirn.m"
                    return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__X0_5);
                  }
#line 448 "mode_robdd.tfeirn.m"
              }
#line 451 "mode_robdd.tfeirn.m"
            else
#line 452 "mode_robdd.tfeirn.m"
              {
#line 452 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22);
              }
#line 438 "mode_robdd.tfeirn.m"
          }
#line 437 "mode_robdd.tfeirn.m"
      }
#line 431 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_6;
#line 431 "mode_robdd.tfeirn.m"
  }
#line 83 "mode_robdd.tfeirn.m"
}

#line 79 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__conj_not_vars_2_f_0(
#line 79 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
#line 79 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 79 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 79 "mode_robdd.tfeirn.m"
{
#line 428 "mode_robdd.tfeirn.m"
  {
#line 428 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 428 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 422 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 422 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;

#line 11822 "mode_robdd.tfeirn.c"
    {
#line 11824 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11826 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 11828 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11830 "mode_robdd.tfeirn.c"
    }
#line 422 "mode_robdd.tfeirn.m"
    {
#line 422 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
#line 428 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 428 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 428 "mode_robdd.tfeirn.m"
    else
#line 428 "mode_robdd.tfeirn.m"
      {
#line 424 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 424 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
#line 424 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;
#line 424 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv0_V_12_12;

#line 11854 "mode_robdd.tfeirn.c"
        {
#line 11856 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11858 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 11860 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11862 "mode_robdd.tfeirn.c"
        }
#line 424 "mode_robdd.tfeirn.m"
        {
#line 424 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv0_V_12_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
        }
#line 424 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_12_12 = (MR_Word) mode_robdd__tfeirn__conv0_V_12_12;
#line 424 "mode_robdd.tfeirn.m"
        {
#line 424 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__V_12_12);
        }
#line 424 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 428 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 428 "mode_robdd.tfeirn.m"
          {
#line 428 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
          }
#line 428 "mode_robdd.tfeirn.m"
        else
#line 427 "mode_robdd.tfeirn.m"
          {
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21;
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 427 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_V_13_13;

#line 11900 "mode_robdd.tfeirn.c"
            {
#line 11902 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11904 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_20_20));
#line 11906 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11908 "mode_robdd.tfeirn.c"
            }
#line 427 "mode_robdd.tfeirn.m"
            {
#line 427 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_V_13_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, (MR_Word) mode_robdd__tfeirn__F_6, (MR_Word) mode_robdd__tfeirn__Vars_4);
            }
#line 427 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_13_13 = (MR_Word) mode_robdd__tfeirn__conv1_V_13_13;
#line 427 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_14_14 = (MR_Integer) 0;
#line 428 "mode_robdd.tfeirn.m"
            {
#line 428 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 428 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 428 "mode_robdd.tfeirn.m"
            }
#line 427 "mode_robdd.tfeirn.m"
          }
#line 428 "mode_robdd.tfeirn.m"
      }
#line 428 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 428 "mode_robdd.tfeirn.m"
  }
#line 79 "mode_robdd.tfeirn.m"
}

#line 75 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__conj_vars_2_f_0(
#line 75 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
#line 75 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 75 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 75 "mode_robdd.tfeirn.m"
{
#line 418 "mode_robdd.tfeirn.m"
  {
#line 418 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 418 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 412 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 412 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;

#line 11982 "mode_robdd.tfeirn.c"
    {
#line 11984 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11986 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 11988 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11990 "mode_robdd.tfeirn.c"
    }
#line 412 "mode_robdd.tfeirn.m"
    {
#line 412 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_6);
    }
#line 418 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 418 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 418 "mode_robdd.tfeirn.m"
    else
#line 418 "mode_robdd.tfeirn.m"
      {
#line 414 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 414 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
#line 414 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;
#line 414 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv0_V_12_12;

#line 12014 "mode_robdd.tfeirn.c"
        {
#line 12016 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12018 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 12020 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12022 "mode_robdd.tfeirn.c"
        }
#line 414 "mode_robdd.tfeirn.m"
        {
#line 414 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv0_V_12_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_7);
        }
#line 414 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_12_12 = (MR_Word) mode_robdd__tfeirn__conv0_V_12_12;
#line 414 "mode_robdd.tfeirn.m"
        {
#line 414 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__V_12_12);
        }
#line 414 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 418 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 418 "mode_robdd.tfeirn.m"
          {
#line 418 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
          }
#line 418 "mode_robdd.tfeirn.m"
        else
#line 417 "mode_robdd.tfeirn.m"
          {
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21;
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 417 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_V_13_13;

#line 12060 "mode_robdd.tfeirn.c"
            {
#line 12062 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12064 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_20_20));
#line 12066 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12068 "mode_robdd.tfeirn.c"
            }
#line 417 "mode_robdd.tfeirn.m"
            {
#line 417 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_V_13_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, (MR_Word) mode_robdd__tfeirn__T_6, (MR_Word) mode_robdd__tfeirn__Vars_4);
            }
#line 417 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_13_13 = (MR_Word) mode_robdd__tfeirn__conv1_V_13_13;
#line 417 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_14_14 = (MR_Integer) 0;
#line 418 "mode_robdd.tfeirn.m"
            {
#line 418 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_7));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 418 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 418 "mode_robdd.tfeirn.m"
            }
#line 417 "mode_robdd.tfeirn.m"
          }
#line 418 "mode_robdd.tfeirn.m"
      }
#line 418 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 418 "mode_robdd.tfeirn.m"
  }
#line 75 "mode_robdd.tfeirn.m"
}

#line 71 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__imp_vars_3_f_0(
#line 71 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 71 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 71 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 71 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 71 "mode_robdd.tfeirn.m"
{
#line 408 "mode_robdd.tfeirn.m"
  {
#line 408 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 408 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 400 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

#line 12148 "mode_robdd.tfeirn.c"
    {
#line 12150 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12152 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12154 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12156 "mode_robdd.tfeirn.c"
    }
#line 12158 "mode_robdd.tfeirn.c"
    {
#line 12160 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12162 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12164 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12166 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12168 "mode_robdd.tfeirn.c"
    }
#line 400 "mode_robdd.tfeirn.m"
    {
#line 400 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
    }
#line 400 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 400 "mode_robdd.tfeirn.m"
      {
#line 400 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
      }
#line 408 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 408 "mode_robdd.tfeirn.m"
      {
#line 408 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
      }
#line 408 "mode_robdd.tfeirn.m"
    else
#line 408 "mode_robdd.tfeirn.m"
      {
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 402 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

#line 12202 "mode_robdd.tfeirn.c"
        {
#line 12204 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12206 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12208 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12210 "mode_robdd.tfeirn.c"
        }
#line 12212 "mode_robdd.tfeirn.c"
        {
#line 12214 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12216 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12218 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12220 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12222 "mode_robdd.tfeirn.c"
        }
#line 402 "mode_robdd.tfeirn.m"
        {
#line 402 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
#line 408 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 408 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 408 "mode_robdd.tfeirn.m"
        else
#line 408 "mode_robdd.tfeirn.m"
          {
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 404 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

#line 12246 "mode_robdd.tfeirn.c"
            {
#line 12248 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12250 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12252 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12254 "mode_robdd.tfeirn.c"
            }
#line 12256 "mode_robdd.tfeirn.c"
            {
#line 12258 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12260 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12262 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12264 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12266 "mode_robdd.tfeirn.c"
            }
#line 404 "mode_robdd.tfeirn.m"
            {
#line 404 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 408 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 408 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 408 "mode_robdd.tfeirn.m"
            else
#line 407 "mode_robdd.tfeirn.m"
              {
#line 407 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_14_14;
#line 407 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_15_15;

#line 407 "mode_robdd.tfeirn.m"
                {
#line 407 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                }
#line 407 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__V_15_15 = (MR_Integer) 0;
#line 408 "mode_robdd.tfeirn.m"
                {
#line 408 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
#line 408 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 408 "mode_robdd.tfeirn.m"
                }
#line 407 "mode_robdd.tfeirn.m"
              }
#line 408 "mode_robdd.tfeirn.m"
          }
#line 408 "mode_robdd.tfeirn.m"
      }
#line 408 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 408 "mode_robdd.tfeirn.m"
  }
#line 71 "mode_robdd.tfeirn.m"
}

#line 67 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__neq_vars_3_f_0(
#line 67 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 67 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 67 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 67 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 67 "mode_robdd.tfeirn.m"
{
#line 396 "mode_robdd.tfeirn.m"
  {
#line 396 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 396 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

#line 383 "mode_robdd.tfeirn.m"
    {
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 383 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

#line 12367 "mode_robdd.tfeirn.c"
      {
#line 12369 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12371 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12373 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12375 "mode_robdd.tfeirn.c"
      }
#line 12377 "mode_robdd.tfeirn.c"
      {
#line 12379 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12381 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12383 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12385 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12387 "mode_robdd.tfeirn.c"
      }
#line 383 "mode_robdd.tfeirn.m"
      {
#line 383 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
#line 383 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 383 "mode_robdd.tfeirn.m"
        {
#line 383 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
#line 383 "mode_robdd.tfeirn.m"
    }
#line 384 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 384 "mode_robdd.tfeirn.m"
      {
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 384 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

#line 12416 "mode_robdd.tfeirn.c"
        {
#line 12418 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12420 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12422 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12424 "mode_robdd.tfeirn.c"
        }
#line 12426 "mode_robdd.tfeirn.c"
        {
#line 12428 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12430 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12432 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12434 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12436 "mode_robdd.tfeirn.c"
        }
#line 384 "mode_robdd.tfeirn.m"
        {
#line 384 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
#line 384 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 384 "mode_robdd.tfeirn.m"
          {
#line 384 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
          }
#line 384 "mode_robdd.tfeirn.m"
      }
#line 396 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 396 "mode_robdd.tfeirn.m"
      {
#line 396 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
      }
#line 396 "mode_robdd.tfeirn.m"
    else
#line 396 "mode_robdd.tfeirn.m"
      {
#line 389 "mode_robdd.tfeirn.m"
        {
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 389 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

#line 12474 "mode_robdd.tfeirn.c"
          {
#line 12476 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12478 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12480 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12482 "mode_robdd.tfeirn.c"
          }
#line 12484 "mode_robdd.tfeirn.c"
          {
#line 12486 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12488 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12490 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12492 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12494 "mode_robdd.tfeirn.c"
          }
#line 389 "mode_robdd.tfeirn.m"
          {
#line 389 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
#line 389 "mode_robdd.tfeirn.m"
          if (mode_robdd__tfeirn__succeeded)
#line 389 "mode_robdd.tfeirn.m"
            {
#line 389 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
#line 389 "mode_robdd.tfeirn.m"
        }
#line 390 "mode_robdd.tfeirn.m"
        if (!(mode_robdd__tfeirn__succeeded))
#line 390 "mode_robdd.tfeirn.m"
          {
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 390 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

#line 12523 "mode_robdd.tfeirn.c"
            {
#line 12525 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12527 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 12529 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12531 "mode_robdd.tfeirn.c"
            }
#line 12533 "mode_robdd.tfeirn.c"
            {
#line 12535 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12537 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 12539 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12541 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 12543 "mode_robdd.tfeirn.c"
            }
#line 390 "mode_robdd.tfeirn.m"
            {
#line 390 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 390 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 390 "mode_robdd.tfeirn.m"
              {
#line 390 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
              }
#line 390 "mode_robdd.tfeirn.m"
          }
#line 396 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 396 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 396 "mode_robdd.tfeirn.m"
        else
#line 395 "mode_robdd.tfeirn.m"
          {
#line 395 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 395 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;

#line 395 "mode_robdd.tfeirn.m"
            {
#line 395 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__neq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
            }
#line 395 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_15_15 = (MR_Integer) 0;
#line 396 "mode_robdd.tfeirn.m"
            {
#line 396 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
#line 396 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 396 "mode_robdd.tfeirn.m"
            }
#line 395 "mode_robdd.tfeirn.m"
          }
#line 396 "mode_robdd.tfeirn.m"
      }
#line 396 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 396 "mode_robdd.tfeirn.m"
  }
#line 67 "mode_robdd.tfeirn.m"
}

#line 63 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__eq_vars_3_f_0(
#line 63 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 63 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 63 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 63 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 63 "mode_robdd.tfeirn.m"
{
#line 378 "mode_robdd.tfeirn.m"
  {
#line 378 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 378 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

#line 365 "mode_robdd.tfeirn.m"
    {
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 365 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

#line 12651 "mode_robdd.tfeirn.c"
      {
#line 12653 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12655 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12657 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12659 "mode_robdd.tfeirn.c"
      }
#line 12661 "mode_robdd.tfeirn.c"
      {
#line 12663 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12665 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12667 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12669 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12671 "mode_robdd.tfeirn.c"
      }
#line 365 "mode_robdd.tfeirn.m"
      {
#line 365 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
#line 365 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 365 "mode_robdd.tfeirn.m"
        {
#line 365 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
#line 365 "mode_robdd.tfeirn.m"
    }
#line 366 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 366 "mode_robdd.tfeirn.m"
      {
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 366 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

#line 12700 "mode_robdd.tfeirn.c"
        {
#line 12702 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12704 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12706 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12708 "mode_robdd.tfeirn.c"
        }
#line 12710 "mode_robdd.tfeirn.c"
        {
#line 12712 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12714 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12716 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12718 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12720 "mode_robdd.tfeirn.c"
        }
#line 366 "mode_robdd.tfeirn.m"
        {
#line 366 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
#line 366 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 366 "mode_robdd.tfeirn.m"
          {
#line 366 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
          }
#line 366 "mode_robdd.tfeirn.m"
      }
#line 378 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 378 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 378 "mode_robdd.tfeirn.m"
    else
#line 378 "mode_robdd.tfeirn.m"
      {
#line 371 "mode_robdd.tfeirn.m"
        {
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 371 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

#line 12755 "mode_robdd.tfeirn.c"
          {
#line 12757 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12759 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12761 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12763 "mode_robdd.tfeirn.c"
          }
#line 12765 "mode_robdd.tfeirn.c"
          {
#line 12767 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12769 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12771 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12773 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12775 "mode_robdd.tfeirn.c"
          }
#line 371 "mode_robdd.tfeirn.m"
          {
#line 371 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
#line 371 "mode_robdd.tfeirn.m"
          if (mode_robdd__tfeirn__succeeded)
#line 371 "mode_robdd.tfeirn.m"
            {
#line 371 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
#line 371 "mode_robdd.tfeirn.m"
        }
#line 372 "mode_robdd.tfeirn.m"
        if (!(mode_robdd__tfeirn__succeeded))
#line 372 "mode_robdd.tfeirn.m"
          {
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 372 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

#line 12804 "mode_robdd.tfeirn.c"
            {
#line 12806 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12808 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 12810 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12812 "mode_robdd.tfeirn.c"
            }
#line 12814 "mode_robdd.tfeirn.c"
            {
#line 12816 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12818 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 12820 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12822 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 12824 "mode_robdd.tfeirn.c"
            }
#line 372 "mode_robdd.tfeirn.m"
            {
#line 372 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 372 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 372 "mode_robdd.tfeirn.m"
              {
#line 372 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
              }
#line 372 "mode_robdd.tfeirn.m"
          }
#line 378 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 378 "mode_robdd.tfeirn.m"
          {
#line 378 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
          }
#line 378 "mode_robdd.tfeirn.m"
        else
#line 377 "mode_robdd.tfeirn.m"
          {
#line 377 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 377 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;

#line 377 "mode_robdd.tfeirn.m"
            {
#line 377 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = mode_robdd__equiv_vars__add_equality_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__E_10);
            }
#line 377 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_15_15 = (MR_Integer) 0;
#line 378 "mode_robdd.tfeirn.m"
            {
#line 378 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__I_11));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
#line 378 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 378 "mode_robdd.tfeirn.m"
            }
#line 377 "mode_robdd.tfeirn.m"
          }
#line 378 "mode_robdd.tfeirn.m"
      }
#line 378 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 378 "mode_robdd.tfeirn.m"
  }
#line 63 "mode_robdd.tfeirn.m"
}

#line 59 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__not_var_2_f_0(
#line 59 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
#line 59 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 59 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 59 "mode_robdd.tfeirn.m"
{
#line 360 "mode_robdd.tfeirn.m"
  {
#line 360 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 360 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 354 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18;

#line 12930 "mode_robdd.tfeirn.c"
    {
#line 12932 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12934 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 12936 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 12938 "mode_robdd.tfeirn.c"
    }
#line 12940 "mode_robdd.tfeirn.c"
    {
#line 12942 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12944 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17));
#line 12946 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 12948 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_16_16));
#line 12950 "mode_robdd.tfeirn.c"
    }
#line 354 "mode_robdd.tfeirn.m"
    {
#line 354 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
#line 360 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 360 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 360 "mode_robdd.tfeirn.m"
    else
#line 360 "mode_robdd.tfeirn.m"
      {
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 356 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22;

#line 12974 "mode_robdd.tfeirn.c"
        {
#line 12976 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12978 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 12980 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 12982 "mode_robdd.tfeirn.c"
        }
#line 12984 "mode_robdd.tfeirn.c"
        {
#line 12986 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12988 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21));
#line 12990 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 12992 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_20_20));
#line 12994 "mode_robdd.tfeirn.c"
        }
#line 356 "mode_robdd.tfeirn.m"
        {
#line 356 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__T_7, mode_robdd__tfeirn__V_4);
        }
#line 360 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 360 "mode_robdd.tfeirn.m"
          {
#line 360 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14);
          }
#line 360 "mode_robdd.tfeirn.m"
        else
#line 359 "mode_robdd.tfeirn.m"
          {
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_12_12;
#line 359 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 13025 "mode_robdd.tfeirn.c"
            {
#line 13027 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13029 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 13031 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13033 "mode_robdd.tfeirn.c"
            }
#line 13035 "mode_robdd.tfeirn.c"
            {
#line 13037 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13039 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25));
#line 13041 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13043 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_24_24));
#line 13045 "mode_robdd.tfeirn.c"
            }
#line 359 "mode_robdd.tfeirn.m"
            {
#line 359 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 359 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_13_13 = (MR_Integer) 0;
#line 360 "mode_robdd.tfeirn.m"
            {
#line 360 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 360 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 360 "mode_robdd.tfeirn.m"
            }
#line 359 "mode_robdd.tfeirn.m"
          }
#line 360 "mode_robdd.tfeirn.m"
      }
#line 360 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 360 "mode_robdd.tfeirn.m"
  }
#line 59 "mode_robdd.tfeirn.m"
}

#line 55 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__var_2_f_0(
#line 55 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
#line 55 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 55 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 55 "mode_robdd.tfeirn.m"
{
#line 350 "mode_robdd.tfeirn.m"
  {
#line 350 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 350 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 344 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18;

#line 13121 "mode_robdd.tfeirn.c"
    {
#line 13123 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13125 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 13127 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13129 "mode_robdd.tfeirn.c"
    }
#line 13131 "mode_robdd.tfeirn.c"
    {
#line 13133 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13135 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17));
#line 13137 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13139 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_16_16));
#line 13141 "mode_robdd.tfeirn.c"
    }
#line 344 "mode_robdd.tfeirn.m"
    {
#line 344 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
    }
#line 350 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 350 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 350 "mode_robdd.tfeirn.m"
    else
#line 350 "mode_robdd.tfeirn.m"
      {
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 346 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22;

#line 13165 "mode_robdd.tfeirn.c"
        {
#line 13167 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13169 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 13171 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13173 "mode_robdd.tfeirn.c"
        }
#line 13175 "mode_robdd.tfeirn.c"
        {
#line 13177 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13179 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21));
#line 13181 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13183 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_20_20));
#line 13185 "mode_robdd.tfeirn.c"
        }
#line 346 "mode_robdd.tfeirn.m"
        {
#line 346 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__F_7, mode_robdd__tfeirn__V_4);
        }
#line 350 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 350 "mode_robdd.tfeirn.m"
          {
#line 350 "mode_robdd.tfeirn.m"
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14);
          }
#line 350 "mode_robdd.tfeirn.m"
        else
#line 349 "mode_robdd.tfeirn.m"
          {
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_12_12;
#line 349 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 13216 "mode_robdd.tfeirn.c"
            {
#line 13218 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13220 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 13222 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13224 "mode_robdd.tfeirn.c"
            }
#line 13226 "mode_robdd.tfeirn.c"
            {
#line 13228 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13230 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25));
#line 13232 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13234 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_24_24));
#line 13236 "mode_robdd.tfeirn.c"
            }
#line 349 "mode_robdd.tfeirn.m"
            {
#line 349 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
            }
#line 349 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_13_13 = (MR_Integer) 0;
#line 350 "mode_robdd.tfeirn.m"
            {
#line 350 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_7));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 350 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 350 "mode_robdd.tfeirn.m"
            }
#line 349 "mode_robdd.tfeirn.m"
          }
#line 350 "mode_robdd.tfeirn.m"
      }
#line 350 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 350 "mode_robdd.tfeirn.m"
  }
#line 55 "mode_robdd.tfeirn.m"
}

#line 288 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_4(
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 288 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 288 "mode_robdd.tfeirn.m"
{
#line 288 "mode_robdd.tfeirn.m"
  {
#line 288 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 288 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 288 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv12_HeadVar__5_72;

#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv12_HeadVar__5_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_56_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 288 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv12_HeadVar__5_72));
#line 288 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 288 "mode_robdd.tfeirn.m"
  }
#line 288 "mode_robdd.tfeirn.m"
}

#line 286 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_3(
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 286 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 286 "mode_robdd.tfeirn.m"
{
#line 286 "mode_robdd.tfeirn.m"
  {
#line 286 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 286 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 286 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv10_HeadVar__5_66;

#line 286 "mode_robdd.tfeirn.m"
    {
#line 286 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv10_HeadVar__5_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_54_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 286 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv10_HeadVar__5_66));
#line 286 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 286 "mode_robdd.tfeirn.m"
  }
#line 286 "mode_robdd.tfeirn.m"
}

#line 278 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_2(
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 278 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 278 "mode_robdd.tfeirn.m"
{
#line 278 "mode_robdd.tfeirn.m"
  {
#line 278 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 278 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 278 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv8_HeadVar__5_58;

#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv8_HeadVar__5_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_56_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 278 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv8_HeadVar__5_58));
#line 278 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 278 "mode_robdd.tfeirn.m"
  }
#line 278 "mode_robdd.tfeirn.m"
}

#line 276 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_1(
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 276 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 276 "mode_robdd.tfeirn.m"
{
#line 276 "mode_robdd.tfeirn.m"
  {
#line 276 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 276 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 276 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv6_HeadVar__5_52;

#line 276 "mode_robdd.tfeirn.m"
    {
#line 276 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv6_HeadVar__5_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_54_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 276 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv6_HeadVar__5_52));
#line 276 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 276 "mode_robdd.tfeirn.m"
  }
#line 276 "mode_robdd.tfeirn.m"
}

#line 50 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0(
#line 50 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 50 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 50 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 50 "mode_robdd.tfeirn.m"
{
#line 249 "mode_robdd.tfeirn.m"
  {
#line 249 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_16;
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__NA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__NB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_92_92;

#line 250 "mode_robdd.tfeirn.m"
    {
#line 250 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_92_92 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
    }
#line 250 "mode_robdd.tfeirn.m"
    {
#line 250 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA0_8, mode_robdd__tfeirn__V_92_92);
    }
#line 252 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 251 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__2_2;
#line 252 "mode_robdd.tfeirn.m"
    else
#line 254 "mode_robdd.tfeirn.m"
      {
#line 252 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_93_93;

#line 252 "mode_robdd.tfeirn.m"
        {
#line 252 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_93_93 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
        }
#line 252 "mode_robdd.tfeirn.m"
        {
#line 252 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RB0_14, mode_robdd__tfeirn__V_93_93);
        }
#line 254 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 253 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__1_1;
#line 254 "mode_robdd.tfeirn.m"
        else
#line 255 "mode_robdd.tfeirn.m"
          {
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_87_87;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_89;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_90_90;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_91_91;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__T_17;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__F_18;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__E_19;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__I_20;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__R_21;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EA_22;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EB_23;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IA_24;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IB_25;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA_26;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB_27;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TAB_28;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FAB_29;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TBA_30;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FBA_31;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EAB_32;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EBA_33;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA1_34;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA2_37;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EA1_38;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA3_39;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IA1_40;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB1_41;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB2_42;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EB1_43;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB3_44;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IB1_45;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_46_46 = (MR_Integer) 0;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_47_47;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_48_48;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_49_49;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_55_55;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_61_61;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_62_62;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_63_63;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_69_69;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_75_75;
#line 255 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_76_76;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv0_T_17;
#line 257 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_F_18;
#line 262 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv2_TAB_28;
#line 263 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv3_FAB_29;
#line 266 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv4_TBA_30;
#line 267 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv5_FBA_31;
#line 276 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv7_RA1_34;
#line 278 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv9_RA2_37;
#line 286 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv11_RB1_41;
#line 288 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv13_RB2_42;

#line 13602 "mode_robdd.tfeirn.c"
            {
#line 13604 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13606 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_87_87, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_86_86));
#line 13608 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_87_87, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13610 "mode_robdd.tfeirn.c"
            }
#line 256 "mode_robdd.tfeirn.m"
            {
#line 256 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv0_T_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TA0_4, (MR_Word) mode_robdd__tfeirn__TB0_10);
            }
#line 256 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__T_17 = (MR_Word) mode_robdd__tfeirn__conv0_T_17;
#line 257 "mode_robdd.tfeirn.m"
            {
#line 257 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_F_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FA0_5, (MR_Word) mode_robdd__tfeirn__FB0_11);
            }
#line 257 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__F_18 = (MR_Word) mode_robdd__tfeirn__conv1_F_18;
#line 262 "mode_robdd.tfeirn.m"
            {
#line 262 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv2_TAB_28 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TA0_4, (MR_Word) mode_robdd__tfeirn__TB0_10);
            }
#line 262 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__TAB_28 = (MR_Word) mode_robdd__tfeirn__conv2_TAB_28;
#line 263 "mode_robdd.tfeirn.m"
            {
#line 263 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv3_FAB_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FA0_5, (MR_Word) mode_robdd__tfeirn__FB0_11);
            }
#line 263 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__FAB_29 = (MR_Word) mode_robdd__tfeirn__conv3_FAB_29;
#line 264 "mode_robdd.tfeirn.m"
            {
#line 264 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_47_47 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TAB_28, mode_robdd__tfeirn__EA0_6);
            }
#line 264 "mode_robdd.tfeirn.m"
            {
#line 264 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EA_22 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FAB_29, mode_robdd__tfeirn__V_47_47);
            }
#line 266 "mode_robdd.tfeirn.m"
            {
#line 266 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv4_TBA_30 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TB0_10, (MR_Word) mode_robdd__tfeirn__TA0_4);
            }
#line 266 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__TBA_30 = (MR_Word) mode_robdd__tfeirn__conv4_TBA_30;
#line 267 "mode_robdd.tfeirn.m"
            {
#line 267 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv5_FBA_31 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FB0_11, (MR_Word) mode_robdd__tfeirn__FA0_5);
            }
#line 267 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__FBA_31 = (MR_Word) mode_robdd__tfeirn__conv5_FBA_31;
#line 268 "mode_robdd.tfeirn.m"
            {
#line 268 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_48_48 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TBA_30, mode_robdd__tfeirn__EB0_12);
            }
#line 268 "mode_robdd.tfeirn.m"
            {
#line 268 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EB_23 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FBA_31, mode_robdd__tfeirn__V_48_48);
            }
#line 258 "mode_robdd.tfeirn.m"
            {
#line 258 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__E_19 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 270 "mode_robdd.tfeirn.m"
            {
#line 270 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EAB_32 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 271 "mode_robdd.tfeirn.m"
            {
#line 271 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IA_24 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EAB_32, mode_robdd__tfeirn__IA0_7);
            }
#line 273 "mode_robdd.tfeirn.m"
            {
#line 273 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EBA_33 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
#line 274 "mode_robdd.tfeirn.m"
            {
#line 274 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IB_25 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EBA_33, mode_robdd__tfeirn__IB0_13);
            }
#line 259 "mode_robdd.tfeirn.m"
            {
#line 259 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__I_20 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
#line 13704 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 13706 "mode_robdd.tfeirn.c"
            {
#line 13708 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13710 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88));
#line 13712 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13714 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_87_87));
#line 13716 "mode_robdd.tfeirn.c"
            }
#line 13718 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_90_90 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 13720 "mode_robdd.tfeirn.c"
            {
#line 13722 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13724 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_91_91, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_90_90));
#line 13726 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_91_91, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13728 "mode_robdd.tfeirn.c"
            }
#line 276 "mode_robdd.tfeirn.m"
            {
#line 276 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_1));
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 276 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 276 "mode_robdd.tfeirn.m"
            }
#line 276 "mode_robdd.tfeirn.m"
            {
#line 276 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv7_RA1_34 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__V_49_49, mode_robdd__tfeirn__TAB_28, ((MR_Box) (mode_robdd__tfeirn__RA0_8)));
            }
#line 276 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RA1_34 = ((MR_Word) mode_robdd__tfeirn__conv7_RA1_34);
#line 278 "mode_robdd.tfeirn.m"
            {
#line 278 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_2));
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 278 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 278 "mode_robdd.tfeirn.m"
            }
#line 278 "mode_robdd.tfeirn.m"
            {
#line 278 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv9_RA2_37 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__V_55_55, mode_robdd__tfeirn__FAB_29, ((MR_Box) (mode_robdd__tfeirn__RA1_34)));
            }
#line 278 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RA2_37 = ((MR_Word) mode_robdd__tfeirn__conv9_RA2_37);
#line 281 "mode_robdd.tfeirn.m"
            {
#line 281 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_61_61 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 281 "mode_robdd.tfeirn.m"
            {
#line 281 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EA1_38 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_61_61, mode_robdd__tfeirn__EA0_6);
            }
#line 282 "mode_robdd.tfeirn.m"
            {
#line 282 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RA3_39 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA1_38, mode_robdd__tfeirn__RA2_37);
            }
#line 283 "mode_robdd.tfeirn.m"
            {
#line 283 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_62_62 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
#line 283 "mode_robdd.tfeirn.m"
            {
#line 283 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IA1_40 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_62_62, mode_robdd__tfeirn__IA0_7);
            }
#line 284 "mode_robdd.tfeirn.m"
            {
#line 284 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RA_26 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA1_40, mode_robdd__tfeirn__RA3_39);
            }
#line 286 "mode_robdd.tfeirn.m"
            {
#line 286 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_3));
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 286 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 286 "mode_robdd.tfeirn.m"
            }
#line 286 "mode_robdd.tfeirn.m"
            {
#line 286 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv11_RB1_41 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__V_63_63, mode_robdd__tfeirn__TBA_30, ((MR_Box) (mode_robdd__tfeirn__RB0_14)));
            }
#line 286 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RB1_41 = ((MR_Word) mode_robdd__tfeirn__conv11_RB1_41);
#line 288 "mode_robdd.tfeirn.m"
            {
#line 288 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_4));
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 288 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 288 "mode_robdd.tfeirn.m"
            }
#line 288 "mode_robdd.tfeirn.m"
            {
#line 288 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv13_RB2_42 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__V_69_69, mode_robdd__tfeirn__FBA_31, ((MR_Box) (mode_robdd__tfeirn__RB1_41)));
            }
#line 288 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RB2_42 = ((MR_Word) mode_robdd__tfeirn__conv13_RB2_42);
#line 291 "mode_robdd.tfeirn.m"
            {
#line 291 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_75_75 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
#line 291 "mode_robdd.tfeirn.m"
            {
#line 291 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EB1_43 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_75_75, mode_robdd__tfeirn__EB0_12);
            }
#line 292 "mode_robdd.tfeirn.m"
            {
#line 292 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RB3_44 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB1_43, mode_robdd__tfeirn__RB2_42);
            }
#line 293 "mode_robdd.tfeirn.m"
            {
#line 293 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_76_76 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB_25, mode_robdd__tfeirn__IA_24);
            }
#line 293 "mode_robdd.tfeirn.m"
            {
#line 293 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IB1_45 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_76_76, mode_robdd__tfeirn__IB0_13);
            }
#line 294 "mode_robdd.tfeirn.m"
            {
#line 294 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RB_27 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB1_45, mode_robdd__tfeirn__RB3_44);
            }
#line 260 "mode_robdd.tfeirn.m"
            {
#line 260 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__R_21 = mercury__robdd__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA_26, mode_robdd__tfeirn__RB_27);
            }
#line 255 "mode_robdd.tfeirn.m"
            {
#line 255 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 0) = ((MR_Box) (mode_robdd__tfeirn__T_17));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 1) = ((MR_Box) (mode_robdd__tfeirn__F_18));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 2) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 3) = ((MR_Box) (mode_robdd__tfeirn__I_20));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 4) = ((MR_Box) (mode_robdd__tfeirn__R_21));
#line 255 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 5) = ((MR_Box) (mode_robdd__tfeirn__V_46_46));
#line 255 "mode_robdd.tfeirn.m"
            }
#line 255 "mode_robdd.tfeirn.m"
          }
#line 254 "mode_robdd.tfeirn.m"
      }
#line 249 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_16;
#line 249 "mode_robdd.tfeirn.m"
  }
#line 50 "mode_robdd.tfeirn.m"
}

#line 46 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_times_2_f_0(
#line 46 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_44,
#line 46 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 46 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 46 "mode_robdd.tfeirn.m"
{
#line 238 "mode_robdd.tfeirn.m"
  {
#line 238 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_46_46;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA1_16;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB1_17;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA1_18;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB1_19;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA1_20;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB1_21;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA1_22;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB1_23;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA1_24;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB1_25;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TU_26;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FU_27;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EU_28;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IU_29;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_32_32;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_33_33;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_34_34;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_35_35;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_36_36;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_37_37;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_38_38;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_39_39;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_40_40;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_41_41;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_42_42;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_43_43;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_TU_26;
#line 240 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_FU_27;
#line 243 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_30_30;
#line 245 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_31_31;
#line 237 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv2_V_32_32;
#line 237 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv3_V_33_33;

#line 14026 "mode_robdd.tfeirn.c"
    {
#line 14028 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14030 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_46_46, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_45_45));
#line 14032 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_46_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_44));
#line 14034 "mode_robdd.tfeirn.c"
    }
#line 237 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_37_37 = (MR_Integer) 0;
#line 239 "mode_robdd.tfeirn.m"
    {
#line 239 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_TU_26 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__TA_4, (MR_Word) mode_robdd__tfeirn__TB_10);
    }
#line 239 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TU_26 = (MR_Word) mode_robdd__tfeirn__conv0_TU_26;
#line 240 "mode_robdd.tfeirn.m"
    {
#line 240 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_FU_27 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__FA_5, (MR_Word) mode_robdd__tfeirn__FB_11);
    }
#line 240 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FU_27 = (MR_Word) mode_robdd__tfeirn__conv1_FU_27;
#line 241 "mode_robdd.tfeirn.m"
    {
#line 241 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__EU_28 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__EB_12);
    }
#line 242 "mode_robdd.tfeirn.m"
    {
#line 242 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__IU_29 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__IB_13);
    }
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_40_40 = (MR_Integer) 0;
#line 244 "mode_robdd.tfeirn.m"
    {
#line 244 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 4) = ((MR_Box) (mode_robdd__tfeirn__RA_8));
#line 244 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 5) = ((MR_Box) (mode_robdd__tfeirn__V_40_40));
#line 244 "mode_robdd.tfeirn.m"
    }
#line 243 "mode_robdd.tfeirn.m"
    {
#line 243 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_38_38 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__V_39_39);
    }
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TA1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 0)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FA1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 1)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__EA1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 2)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__IA1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 3)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__RA1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 4)));
#line 243 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 5)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_43_43 = (MR_Integer) 0;
#line 246 "mode_robdd.tfeirn.m"
    {
#line 246 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_14));
#line 246 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 5) = ((MR_Box) (mode_robdd__tfeirn__V_43_43));
#line 246 "mode_robdd.tfeirn.m"
    }
#line 245 "mode_robdd.tfeirn.m"
    {
#line 245 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_41_41 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__V_42_42);
    }
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TB1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 0)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FB1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 1)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__EB1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 2)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__IB1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 3)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__RB1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 4)));
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 5)));
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv2_V_32_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__TA1_16, (MR_Word) mode_robdd__tfeirn__TB1_17);
    }
#line 237 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_32_32 = (MR_Word) mode_robdd__tfeirn__conv2_V_32_32;
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv3_V_33_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__FA1_18, (MR_Word) mode_robdd__tfeirn__FB1_19);
    }
#line 237 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_33_33 = (MR_Word) mode_robdd__tfeirn__conv3_V_33_33;
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_34_34 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA1_20, mode_robdd__tfeirn__EB1_21);
    }
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_35_35 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA1_22, mode_robdd__tfeirn__IB1_23);
    }
#line 237 "mode_robdd.tfeirn.m"
    {
#line 237 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_36_36 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__RA1_24, mode_robdd__tfeirn__RB1_25);
    }
#line 238 "mode_robdd.tfeirn.m"
    {
#line 238 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_32_32));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_33_33));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_34_34));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_35_35));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_36_36));
#line 238 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_37_37));
#line 238 "mode_robdd.tfeirn.m"
    }
#line 238 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 238 "mode_robdd.tfeirn.m"
  }
#line 46 "mode_robdd.tfeirn.m"
}

#line 42 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__zero_0_f_0(
#line 42 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8)
#line 42 "mode_robdd.tfeirn.m"
{
#line 234 "mode_robdd.tfeirn.m"
  {
#line 234 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_2_2;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_2_2;
#line 234 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_3_3;

#line 14224 "mode_robdd.tfeirn.c"
    {
#line 14226 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14228 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_9_9));
#line 14230 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_8));
#line 14232 "mode_robdd.tfeirn.c"
    }
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_2_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 234 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_2_2 = (MR_Word) mode_robdd__tfeirn__conv0_V_2_2;
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 234 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_3_3 = (MR_Word) mode_robdd__tfeirn__conv1_V_3_3;
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_5_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_6_6 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 234 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_7_7 = (MR_Integer) 1;
#line 234 "mode_robdd.tfeirn.m"
    {
#line 234 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__V_2_2));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__V_3_3));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__V_4_4));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 234 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 234 "mode_robdd.tfeirn.m"
    }
#line 234 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__1_1;
#line 234 "mode_robdd.tfeirn.m"
  }
#line 42 "mode_robdd.tfeirn.m"
}

#line 39 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__one_0_f_0(
#line 39 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8)
#line 39 "mode_robdd.tfeirn.m"
{
#line 232 "mode_robdd.tfeirn.m"
  {
#line 232 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_2_2;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_2_2;
#line 232 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_3_3;

#line 14324 "mode_robdd.tfeirn.c"
    {
#line 14326 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14328 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_9_9));
#line 14330 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_8));
#line 14332 "mode_robdd.tfeirn.c"
    }
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_2_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 232 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_2_2 = (MR_Word) mode_robdd__tfeirn__conv0_V_2_2;
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 232 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_3_3 = (MR_Word) mode_robdd__tfeirn__conv1_V_3_3;
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_5_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_6_6 = mercury__robdd__one_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 232 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_7_7 = (MR_Integer) 1;
#line 232 "mode_robdd.tfeirn.m"
    {
#line 232 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__V_2_2));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__V_3_3));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__V_4_4));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 232 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 232 "mode_robdd.tfeirn.m"
    }
#line 232 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__1_1;
#line 232 "mode_robdd.tfeirn.m"
  }
#line 39 "mode_robdd.tfeirn.m"
}

void mercury__mode_robdd__tfeirn__init(void)
{
}

void mercury__mode_robdd__tfeirn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1);
	MR_register_type_ctor_info(&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_0);
}

void mercury__mode_robdd__tfeirn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mode_robdd.tfeirn. */
