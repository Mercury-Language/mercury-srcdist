/*
** Automatically generated from `mode_robdd.tfeirn.m'
** by the Mercury compiler,
** version DEV
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


/* :- module mode_robdd.tfeirn. */
/* :- implementation. */

/*
INIT mercury__mode_robdd__tfeirn__init
ENDINIT
*/

#include "mode_robdd.tfeirn.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "int.mih"
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
#include "mode_robdd.equiv_vars.mih"
#include "mode_robdd.implications.mih"
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



#line 562 "mode_robdd.tfeirn.m"
struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s {
#line 562 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17;
#line 562 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7;
#line 562 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8;
#line 562 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont;
#line 562 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr;
#line 578 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21;
#line 578 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9;
#line 568 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12;
#line 573 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13;
#line 562 "mode_robdd.tfeirn.m"
};

#line 158 "mode_robdd.tfeirn.m"
struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s {
#line 158 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12;
#line 158 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13;
#line 158 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__labelling_4_p_0_env_0__cont;
#line 158 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr;
#line 547 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25;
#line 547 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14;
#line 547 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15;
#line 557 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17;
#line 557 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18;
#line 158 "mode_robdd.tfeirn.m"
};


#line 185 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1;

#line 188 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1;

#line 191 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1;

#line 194 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1;

#line 197 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 200 "mode_robdd.tfeirn.c"
static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6];

#line 203 "mode_robdd.tfeirn.c"
static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6];

#line 206 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDesc mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0;

#line 209 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1];

#line 212 "mode_robdd.tfeirn.c"
static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1];

#line 215 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1];

#line 218 "mode_robdd.tfeirn.c"
static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1];

#line 221 "mode_robdd.tfeirn.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0;

#line 224 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
#line 227 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 229 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 231 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

#line 234 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
#line 237 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 239 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_2,
#line 241 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3,
#line 243 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_4);

#line 246 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
#line 249 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 251 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 254 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
#line 257 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_1,
#line 259 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 261 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

#line 289 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4(
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 287 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3(
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 279 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2(
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 277 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1(
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 521 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1(
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 622 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 622 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1);

#line 717 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_120_116_114_97_99_116_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_102_114_111_109_95_114_111_98_100_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(
#line 717 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__Changed_6,
#line 717 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Robdd0_7,
#line 717 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__Robdd_8,
#line 717 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__EQVars0_9,
#line 717 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__EQVars_10);

#line 748 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__RB_10);

#line 521 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Var_6,
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_18,
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_19);

#line 772 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__772__1_4_f_0(
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_12,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_13,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_14);

#line 289 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_70,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_71);

#line 287 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_64,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_65);

#line 279 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_56,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_57);

#line 277 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_50,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_51);

#line 748 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__x_2_f_0(
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26,
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__RB_10);

#line 622 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__normalise_1_f_0(
#line 622 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_57,
#line 622 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1);

#line 598 "mode_robdd.tfeirn.m"
static MR_bool MR_CALL 
mode_robdd__tfeirn__minimal_model_2_4_p_0(
#line 598 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 598 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 598 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 598 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 598 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8);

#line 568 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_1(
#line 568 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg);

#line 573 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_2(
#line 573 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg);

#line 562 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0(
#line 562 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 562 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 562 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 562 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 562 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
#line 562 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__cont,
#line 562 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__cont_env_ptr);

#line 772 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0_1(
#line 772 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 772 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 772 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 772 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

#line 557 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0_1(
#line 557 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg);

#line 521 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0_1(
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 289 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_4(
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 287 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_3(
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 279 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_2(
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 277 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_1(
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 277 "mode_robdd.tfeirn.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 641 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 649 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 657 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_robdd_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 665 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 673 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__tfeirn__term__pti_var_1__pseudo_1
  }
};

#line 681 "mode_robdd.tfeirn.c"
static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6] = {
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 691 "mode_robdd.tfeirn.c"
static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6] = {
  (MR_String) "true_vars",
  (MR_String) "false_vars",
  (MR_String) "equiv_vars",
  (MR_String) "imp_vars",
  (MR_String) "robdd",
  (MR_String) "normalised"
};

#line 701 "mode_robdd.tfeirn.c"
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

#line 716 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1] = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0
};

#line 721 "mode_robdd.tfeirn.c"
static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0
  }
};

#line 730 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1] = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0
};

#line 735 "mode_robdd.tfeirn.c"
static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1] = {
  (MR_Integer) 0
};

#line 740 "mode_robdd.tfeirn.c"
const MR_TypeCtorInfo_Struct mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mode_robdd__tfeirn____Unify____tfeirn_1_0_10001)),
  ((MR_Box) (mode_robdd__tfeirn____Compare____tfeirn_1_0_10001)),
  (MR_String) "mode_robdd.tfeirn",
  (MR_String) "tfeirn",
  {     mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1 },
  {     mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1
};

#line 757 "mode_robdd.tfeirn.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 765 "mode_robdd.tfeirn.c"
const MR_TypeCtorInfo_Struct mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mode_robdd__tfeirn____Unify____tfeirn_0_0_10001)),
  ((MR_Box) (mode_robdd__tfeirn____Compare____tfeirn_0_0_10001)),
  (MR_String) "mode_robdd.tfeirn",
  (MR_String) "tfeirn",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 782 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
#line 785 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 787 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 789 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
#line 791 "mode_robdd.tfeirn.c"
{
#line 793 "mode_robdd.tfeirn.c"
  {
#line 795 "mode_robdd.tfeirn.c"
    MR_bool mode_robdd__tfeirn__succeeded;

#line 798 "mode_robdd.tfeirn.c"
    {
#line 800 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 803 "mode_robdd.tfeirn.c"
    return mode_robdd__tfeirn__succeeded;
#line 805 "mode_robdd.tfeirn.c"
  }
#line 807 "mode_robdd.tfeirn.c"
}

#line 810 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
#line 813 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 815 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_2,
#line 817 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3,
#line 819 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_4)
#line 821 "mode_robdd.tfeirn.c"
{
#line 823 "mode_robdd.tfeirn.c"
  {
#line 825 "mode_robdd.tfeirn.c"
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__1_1;

#line 828 "mode_robdd.tfeirn.c"
    {
#line 830 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn____Compare____tfeirn_1_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), &mode_robdd__tfeirn__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_4));
    }
#line 833 "mode_robdd.tfeirn.c"
    *mode_robdd__tfeirn__wrapper_arg_2 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__1_1));
#line 835 "mode_robdd.tfeirn.c"
  }
#line 837 "mode_robdd.tfeirn.c"
}

#line 840 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
#line 843 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 845 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 847 "mode_robdd.tfeirn.c"
{
#line 849 "mode_robdd.tfeirn.c"
  {
#line 851 "mode_robdd.tfeirn.c"
    MR_bool mode_robdd__tfeirn__succeeded;

#line 854 "mode_robdd.tfeirn.c"
    {
#line 856 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_0_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 859 "mode_robdd.tfeirn.c"
    return mode_robdd__tfeirn__succeeded;
#line 861 "mode_robdd.tfeirn.c"
  }
#line 863 "mode_robdd.tfeirn.c"
}

#line 866 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
#line 869 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_1,
#line 871 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 873 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
#line 875 "mode_robdd.tfeirn.c"
{
#line 877 "mode_robdd.tfeirn.c"
  {
#line 879 "mode_robdd.tfeirn.c"
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__1_1;

#line 882 "mode_robdd.tfeirn.c"
    {
#line 884 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn____Compare____tfeirn_0_0(&mode_robdd__tfeirn__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 887 "mode_robdd.tfeirn.c"
    *mode_robdd__tfeirn__wrapper_arg_1 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__1_1));
#line 889 "mode_robdd.tfeirn.c"
  }
#line 891 "mode_robdd.tfeirn.c"
}

#line 41 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_110_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0(void)
#line 41 "mode_robdd.tfeirn.m"
{
#line 233 "mode_robdd.tfeirn.m"
  {
#line 233 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_2_2;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;

#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_2_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_5_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_6_6 = mercury__robdd__one_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 233 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_7_7 = (MR_Integer) 1;
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__V_2_2));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__V_3_3));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__V_4_4));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 233 "mode_robdd.tfeirn.m"
    }
#line 233 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__1_1;
#line 233 "mode_robdd.tfeirn.m"
  }
#line 41 "mode_robdd.tfeirn.m"
}

#line 44 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0(void)
#line 44 "mode_robdd.tfeirn.m"
{
#line 235 "mode_robdd.tfeirn.m"
  {
#line 235 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_2_2;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;

#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_2_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_5_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_6_6 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 235 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_7_7 = (MR_Integer) 1;
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__V_2_2));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__V_3_3));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__V_4_4));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 235 "mode_robdd.tfeirn.m"
    }
#line 235 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__1_1;
#line 235 "mode_robdd.tfeirn.m"
  }
#line 44 "mode_robdd.tfeirn.m"
}

#line 48 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 48 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 48 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 48 "mode_robdd.tfeirn.m"
{
#line 239 "mode_robdd.tfeirn.m"
  {
#line 239 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_44 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_46_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA1_16;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB1_17;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA1_18;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB1_19;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA1_20;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB1_21;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA1_22;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB1_23;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA1_24;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB1_25;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TU_26;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FU_27;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EU_28;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IU_29;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_32_32;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_33_33;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_34_34;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_35_35;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_36_36;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_37_37 = (MR_Integer) 0;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_38_38;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_39_39;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_40_40;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_41_41;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_42_42;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_43_43;
#line 237 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 237 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 244 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_30_30;
#line 246 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_31_31;

#line 240 "mode_robdd.tfeirn.m"
    {
#line 240 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__TU_26 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__TA_4, mode_robdd__tfeirn__TB_10);
    }
#line 241 "mode_robdd.tfeirn.m"
    {
#line 241 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__FU_27 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__FA_5, mode_robdd__tfeirn__FB_11);
    }
#line 242 "mode_robdd.tfeirn.m"
    {
#line 242 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__EU_28 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__EB_12);
    }
#line 243 "mode_robdd.tfeirn.m"
    {
#line 243 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__IU_29 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__IB_13);
    }
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_40_40 = (MR_Integer) 0;
#line 245 "mode_robdd.tfeirn.m"
    {
#line 245 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 4) = ((MR_Box) (mode_robdd__tfeirn__RA_8));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 5) = ((MR_Box) (mode_robdd__tfeirn__V_40_40));
#line 245 "mode_robdd.tfeirn.m"
    }
#line 245 "mode_robdd.tfeirn.m"
    {
#line 245 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_38_38 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_39_39);
    }
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TA1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 0)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FA1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 1)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__EA1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 2)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__IA1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 3)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__RA1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 4)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 5)));
#line 247 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_43_43 = (MR_Integer) 0;
#line 247 "mode_robdd.tfeirn.m"
    {
#line 247 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_14));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 5) = ((MR_Box) (mode_robdd__tfeirn__V_43_43));
#line 247 "mode_robdd.tfeirn.m"
    }
#line 247 "mode_robdd.tfeirn.m"
    {
#line 247 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_41_41 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_42_42);
    }
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TB1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 0)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FB1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 1)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__EB1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 2)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__IB1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 3)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__RB1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 4)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 5)));
#line 238 "mode_robdd.tfeirn.m"
    {
#line 238 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_32_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__TA1_16, mode_robdd__tfeirn__TB1_17);
    }
#line 238 "mode_robdd.tfeirn.m"
    {
#line 238 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_33_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__FA1_18, mode_robdd__tfeirn__FB1_19);
    }
#line 239 "mode_robdd.tfeirn.m"
    {
#line 239 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_34_34 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA1_20, mode_robdd__tfeirn__EB1_21);
    }
#line 239 "mode_robdd.tfeirn.m"
    {
#line 239 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_35_35 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA1_22, mode_robdd__tfeirn__IB1_23);
    }
#line 239 "mode_robdd.tfeirn.m"
    {
#line 239 "mode_robdd.tfeirn.m"
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
#line 239 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 239 "mode_robdd.tfeirn.m"
  }
#line 48 "mode_robdd.tfeirn.m"
}

#line 289 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4(
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 289 "mode_robdd.tfeirn.m"
{
#line 289 "mode_robdd.tfeirn.m"
  {
#line 289 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 289 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 289 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv6_LambdaHeadVar__3_72;

#line 289 "mode_robdd.tfeirn.m"
    {
#line 289 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv6_LambdaHeadVar__3_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 289 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv6_LambdaHeadVar__3_72));
#line 289 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 289 "mode_robdd.tfeirn.m"
  }
#line 289 "mode_robdd.tfeirn.m"
}

#line 287 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3(
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 287 "mode_robdd.tfeirn.m"
{
#line 287 "mode_robdd.tfeirn.m"
  {
#line 287 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 287 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 287 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv4_LambdaHeadVar__3_66;

#line 287 "mode_robdd.tfeirn.m"
    {
#line 287 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv4_LambdaHeadVar__3_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 287 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv4_LambdaHeadVar__3_66));
#line 287 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 287 "mode_robdd.tfeirn.m"
  }
#line 287 "mode_robdd.tfeirn.m"
}

#line 279 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2(
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 279 "mode_robdd.tfeirn.m"
{
#line 279 "mode_robdd.tfeirn.m"
  {
#line 279 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 279 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 279 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv2_LambdaHeadVar__3_58;

#line 279 "mode_robdd.tfeirn.m"
    {
#line 279 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv2_LambdaHeadVar__3_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 279 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv2_LambdaHeadVar__3_58));
#line 279 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 279 "mode_robdd.tfeirn.m"
  }
#line 279 "mode_robdd.tfeirn.m"
}

#line 277 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1(
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 277 "mode_robdd.tfeirn.m"
{
#line 277 "mode_robdd.tfeirn.m"
  {
#line 277 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 277 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 277 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_LambdaHeadVar__3_52;

#line 277 "mode_robdd.tfeirn.m"
    {
#line 277 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_LambdaHeadVar__3_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 277 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv0_LambdaHeadVar__3_52));
#line 277 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 277 "mode_robdd.tfeirn.m"
  }
#line 277 "mode_robdd.tfeirn.m"
}

#line 52 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 52 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 52 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 52 "mode_robdd.tfeirn.m"
{
#line 250 "mode_robdd.tfeirn.m"
  {
#line 250 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_16;
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__NA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__NB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 251 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_92_92;

#line 251 "mode_robdd.tfeirn.m"
    {
#line 251 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_92_92 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
    }
#line 251 "mode_robdd.tfeirn.m"
    {
#line 251 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA0_8, mode_robdd__tfeirn__V_92_92);
    }
#line 253 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 252 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__2_2;
#line 253 "mode_robdd.tfeirn.m"
    else
#line 255 "mode_robdd.tfeirn.m"
      {
#line 253 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_93_93;

#line 253 "mode_robdd.tfeirn.m"
        {
#line 253 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_93_93 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
        }
#line 253 "mode_robdd.tfeirn.m"
        {
#line 253 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RB0_14, mode_robdd__tfeirn__V_93_93);
        }
#line 255 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 254 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__1_1;
#line 255 "mode_robdd.tfeirn.m"
        else
#line 256 "mode_robdd.tfeirn.m"
          {
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_87_87 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_89;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_90_90;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_91_91;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_98_98;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_99_99;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_100_100;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_101_101;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__T_17;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__F_18;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__E_19;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__I_20;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__R_21;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EA_22;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EB_23;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IA_24;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IB_25;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA_26;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB_27;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TAB_28;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FAB_29;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TBA_30;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FBA_31;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EAB_32;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EBA_33;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA1_34;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA2_37;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EA1_38;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA3_39;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IA1_40;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB1_41;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB2_42;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EB1_43;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB3_44;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IB1_45;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_46_46 = (MR_Integer) 0;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_47_47;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_48_48;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_49_49;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_55_55;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_61_61;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_62_62;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_63_63;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_69_69;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_75_75;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_76_76;
#line 277 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv1_RA1_34;
#line 279 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv3_RA2_37;
#line 287 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv5_RB1_41;
#line 289 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv7_RB2_42;

#line 257 "mode_robdd.tfeirn.m"
            {
#line 257 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__T_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TA0_4, mode_robdd__tfeirn__TB0_10);
            }
#line 258 "mode_robdd.tfeirn.m"
            {
#line 258 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__F_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FA0_5, mode_robdd__tfeirn__FB0_11);
            }
#line 263 "mode_robdd.tfeirn.m"
            {
#line 263 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__TAB_28 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TA0_4, mode_robdd__tfeirn__TB0_10);
            }
#line 264 "mode_robdd.tfeirn.m"
            {
#line 264 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__FAB_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FA0_5, mode_robdd__tfeirn__FB0_11);
            }
#line 265 "mode_robdd.tfeirn.m"
            {
#line 265 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_47_47 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TAB_28, mode_robdd__tfeirn__EA0_6);
            }
#line 265 "mode_robdd.tfeirn.m"
            {
#line 265 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EA_22 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FAB_29, mode_robdd__tfeirn__V_47_47);
            }
#line 267 "mode_robdd.tfeirn.m"
            {
#line 267 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__TBA_30 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TB0_10, mode_robdd__tfeirn__TA0_4);
            }
#line 268 "mode_robdd.tfeirn.m"
            {
#line 268 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__FBA_31 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FB0_11, mode_robdd__tfeirn__FA0_5);
            }
#line 269 "mode_robdd.tfeirn.m"
            {
#line 269 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_48_48 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TBA_30, mode_robdd__tfeirn__EB0_12);
            }
#line 269 "mode_robdd.tfeirn.m"
            {
#line 269 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EB_23 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FBA_31, mode_robdd__tfeirn__V_48_48);
            }
#line 259 "mode_robdd.tfeirn.m"
            {
#line 259 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__E_19 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 271 "mode_robdd.tfeirn.m"
            {
#line 271 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EAB_32 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 272 "mode_robdd.tfeirn.m"
            {
#line 272 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IA_24 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EAB_32, mode_robdd__tfeirn__IA0_7);
            }
#line 274 "mode_robdd.tfeirn.m"
            {
#line 274 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EBA_33 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
#line 275 "mode_robdd.tfeirn.m"
            {
#line 275 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IB_25 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EBA_33, mode_robdd__tfeirn__IB0_13);
            }
#line 260 "mode_robdd.tfeirn.m"
            {
#line 260 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__I_20 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
#line 1708 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 1710 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_89 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 1712 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_90_90 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 1714 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_91_91 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[3];
#line 277 "mode_robdd.tfeirn.m"
            {
#line 277 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1));
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 277 "mode_robdd.tfeirn.m"
            }
#line 1732 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_98_98 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 277 "mode_robdd.tfeirn.m"
            {
#line 277 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_RA1_34 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_98_98, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__V_49_49, mode_robdd__tfeirn__TAB_28, ((MR_Box) (mode_robdd__tfeirn__RA0_8)));
            }
#line 277 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RA1_34 = ((MR_Word) mode_robdd__tfeirn__conv1_RA1_34);
#line 279 "mode_robdd.tfeirn.m"
            {
#line 279 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2));
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 279 "mode_robdd.tfeirn.m"
            }
#line 1757 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_99_99 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 279 "mode_robdd.tfeirn.m"
            {
#line 279 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv3_RA2_37 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_99_99, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__V_55_55, mode_robdd__tfeirn__FAB_29, ((MR_Box) (mode_robdd__tfeirn__RA1_34)));
            }
#line 279 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RA2_37 = ((MR_Word) mode_robdd__tfeirn__conv3_RA2_37);
#line 282 "mode_robdd.tfeirn.m"
            {
#line 282 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_61_61 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 282 "mode_robdd.tfeirn.m"
            {
#line 282 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EA1_38 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_61_61, mode_robdd__tfeirn__EA0_6);
            }
#line 283 "mode_robdd.tfeirn.m"
            {
#line 283 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RA3_39 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA1_38, mode_robdd__tfeirn__RA2_37);
            }
#line 284 "mode_robdd.tfeirn.m"
            {
#line 284 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_62_62 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
#line 284 "mode_robdd.tfeirn.m"
            {
#line 284 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IA1_40 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_62_62, mode_robdd__tfeirn__IA0_7);
            }
#line 285 "mode_robdd.tfeirn.m"
            {
#line 285 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RA_26 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA1_40, mode_robdd__tfeirn__RA3_39);
            }
#line 287 "mode_robdd.tfeirn.m"
            {
#line 287 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3));
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 287 "mode_robdd.tfeirn.m"
            }
#line 1812 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_100_100 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 287 "mode_robdd.tfeirn.m"
            {
#line 287 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv5_RB1_41 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_100_100, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__V_63_63, mode_robdd__tfeirn__TBA_30, ((MR_Box) (mode_robdd__tfeirn__RB0_14)));
            }
#line 287 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RB1_41 = ((MR_Word) mode_robdd__tfeirn__conv5_RB1_41);
#line 289 "mode_robdd.tfeirn.m"
            {
#line 289 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4));
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 289 "mode_robdd.tfeirn.m"
            }
#line 1837 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_101_101 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 289 "mode_robdd.tfeirn.m"
            {
#line 289 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv7_RB2_42 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_101_101, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__V_69_69, mode_robdd__tfeirn__FBA_31, ((MR_Box) (mode_robdd__tfeirn__RB1_41)));
            }
#line 289 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RB2_42 = ((MR_Word) mode_robdd__tfeirn__conv7_RB2_42);
#line 292 "mode_robdd.tfeirn.m"
            {
#line 292 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_75_75 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
#line 292 "mode_robdd.tfeirn.m"
            {
#line 292 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EB1_43 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_75_75, mode_robdd__tfeirn__EB0_12);
            }
#line 293 "mode_robdd.tfeirn.m"
            {
#line 293 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RB3_44 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB1_43, mode_robdd__tfeirn__RB2_42);
            }
#line 294 "mode_robdd.tfeirn.m"
            {
#line 294 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_76_76 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB_25, mode_robdd__tfeirn__IA_24);
            }
#line 294 "mode_robdd.tfeirn.m"
            {
#line 294 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IB1_45 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_76_76, mode_robdd__tfeirn__IB0_13);
            }
#line 295 "mode_robdd.tfeirn.m"
            {
#line 295 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RB_27 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB1_45, mode_robdd__tfeirn__RB3_44);
            }
#line 261 "mode_robdd.tfeirn.m"
            {
#line 261 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__R_21 = mercury__robdd__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA_26, mode_robdd__tfeirn__RB_27);
            }
#line 256 "mode_robdd.tfeirn.m"
            {
#line 256 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 0) = ((MR_Box) (mode_robdd__tfeirn__T_17));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 1) = ((MR_Box) (mode_robdd__tfeirn__F_18));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 2) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 3) = ((MR_Box) (mode_robdd__tfeirn__I_20));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 4) = ((MR_Box) (mode_robdd__tfeirn__R_21));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 5) = ((MR_Box) (mode_robdd__tfeirn__V_46_46));
#line 256 "mode_robdd.tfeirn.m"
            }
#line 256 "mode_robdd.tfeirn.m"
          }
#line 255 "mode_robdd.tfeirn.m"
      }
#line 250 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_16;
#line 250 "mode_robdd.tfeirn.m"
  }
#line 52 "mode_robdd.tfeirn.m"
}

#line 57 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 57 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 57 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 57 "mode_robdd.tfeirn.m"
{
#line 351 "mode_robdd.tfeirn.m"
  {
#line 351 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 352 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 345 "mode_robdd.tfeirn.m"
    {
#line 345 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_27_27, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
    }
#line 351 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 346 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 351 "mode_robdd.tfeirn.m"
    else
#line 349 "mode_robdd.tfeirn.m"
      {
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 347 "mode_robdd.tfeirn.m"
        {
#line 347 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_28_28, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__F_7, mode_robdd__tfeirn__V_4);
        }
#line 349 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 348 "mode_robdd.tfeirn.m"
          {
#line 348 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 349 "mode_robdd.tfeirn.m"
        else
#line 350 "mode_robdd.tfeirn.m"
          {
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_12_12;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 350 "mode_robdd.tfeirn.m"
            {
#line 350 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
            }
#line 350 "mode_robdd.tfeirn.m"
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
#line 350 "mode_robdd.tfeirn.m"
          }
#line 349 "mode_robdd.tfeirn.m"
      }
#line 351 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 351 "mode_robdd.tfeirn.m"
  }
#line 57 "mode_robdd.tfeirn.m"
}

#line 61 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 61 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 61 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 61 "mode_robdd.tfeirn.m"
{
#line 361 "mode_robdd.tfeirn.m"
  {
#line 361 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 362 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 355 "mode_robdd.tfeirn.m"
    {
#line 355 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_27_27, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
#line 361 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 356 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 361 "mode_robdd.tfeirn.m"
    else
#line 359 "mode_robdd.tfeirn.m"
      {
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 357 "mode_robdd.tfeirn.m"
        {
#line 357 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_28_28, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__T_7, mode_robdd__tfeirn__V_4);
        }
#line 359 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 358 "mode_robdd.tfeirn.m"
          {
#line 358 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 359 "mode_robdd.tfeirn.m"
        else
#line 360 "mode_robdd.tfeirn.m"
          {
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_12_12;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 360 "mode_robdd.tfeirn.m"
            {
#line 360 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 360 "mode_robdd.tfeirn.m"
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
#line 360 "mode_robdd.tfeirn.m"
          }
#line 359 "mode_robdd.tfeirn.m"
      }
#line 361 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 361 "mode_robdd.tfeirn.m"
  }
#line 61 "mode_robdd.tfeirn.m"
}

#line 65 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 65 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 65 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 65 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 65 "mode_robdd.tfeirn.m"
{
#line 379 "mode_robdd.tfeirn.m"
  {
#line 379 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 380 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

#line 366 "mode_robdd.tfeirn.m"
    {
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34;

#line 366 "mode_robdd.tfeirn.m"
      {
#line 366 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
#line 366 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 366 "mode_robdd.tfeirn.m"
        {
#line 2228 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 366 "mode_robdd.tfeirn.m"
          {
#line 366 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
          }
#line 366 "mode_robdd.tfeirn.m"
        }
#line 366 "mode_robdd.tfeirn.m"
    }
#line 367 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 367 "mode_robdd.tfeirn.m"
      {
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36;

#line 367 "mode_robdd.tfeirn.m"
        {
#line 367 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
#line 367 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 367 "mode_robdd.tfeirn.m"
          {
#line 2265 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 367 "mode_robdd.tfeirn.m"
            {
#line 367 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
#line 367 "mode_robdd.tfeirn.m"
          }
#line 367 "mode_robdd.tfeirn.m"
      }
#line 379 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 370 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 379 "mode_robdd.tfeirn.m"
    else
#line 377 "mode_robdd.tfeirn.m"
      {
#line 372 "mode_robdd.tfeirn.m"
        {
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_37_37 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38;

#line 372 "mode_robdd.tfeirn.m"
          {
#line 372 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_37_37, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
#line 372 "mode_robdd.tfeirn.m"
          if (mode_robdd__tfeirn__succeeded)
#line 372 "mode_robdd.tfeirn.m"
            {
#line 2308 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 372 "mode_robdd.tfeirn.m"
              {
#line 372 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_38_38, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
              }
#line 372 "mode_robdd.tfeirn.m"
            }
#line 372 "mode_robdd.tfeirn.m"
        }
#line 373 "mode_robdd.tfeirn.m"
        if (!(mode_robdd__tfeirn__succeeded))
#line 373 "mode_robdd.tfeirn.m"
          {
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40;

#line 373 "mode_robdd.tfeirn.m"
            {
#line 373 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 373 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 373 "mode_robdd.tfeirn.m"
              {
#line 2345 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 373 "mode_robdd.tfeirn.m"
                {
#line 373 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
                }
#line 373 "mode_robdd.tfeirn.m"
              }
#line 373 "mode_robdd.tfeirn.m"
          }
#line 377 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 376 "mode_robdd.tfeirn.m"
          {
#line 376 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 377 "mode_robdd.tfeirn.m"
        else
#line 378 "mode_robdd.tfeirn.m"
          {
#line 378 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 378 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;

#line 378 "mode_robdd.tfeirn.m"
            {
#line 378 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = mode_robdd__equiv_vars__add_equality_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__E_10);
            }
#line 378 "mode_robdd.tfeirn.m"
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
#line 378 "mode_robdd.tfeirn.m"
          }
#line 377 "mode_robdd.tfeirn.m"
      }
#line 379 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 379 "mode_robdd.tfeirn.m"
  }
#line 65 "mode_robdd.tfeirn.m"
}

#line 69 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 69 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 69 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 69 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 69 "mode_robdd.tfeirn.m"
{
#line 397 "mode_robdd.tfeirn.m"
  {
#line 397 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 398 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

#line 384 "mode_robdd.tfeirn.m"
    {
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34;

#line 384 "mode_robdd.tfeirn.m"
      {
#line 384 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
#line 384 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 384 "mode_robdd.tfeirn.m"
        {
#line 2464 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 384 "mode_robdd.tfeirn.m"
          {
#line 384 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
          }
#line 384 "mode_robdd.tfeirn.m"
        }
#line 384 "mode_robdd.tfeirn.m"
    }
#line 385 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 385 "mode_robdd.tfeirn.m"
      {
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36;

#line 385 "mode_robdd.tfeirn.m"
        {
#line 385 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
#line 385 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 385 "mode_robdd.tfeirn.m"
          {
#line 2501 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 385 "mode_robdd.tfeirn.m"
            {
#line 385 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
#line 385 "mode_robdd.tfeirn.m"
          }
#line 385 "mode_robdd.tfeirn.m"
      }
#line 397 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 388 "mode_robdd.tfeirn.m"
      {
#line 388 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
#line 397 "mode_robdd.tfeirn.m"
    else
#line 395 "mode_robdd.tfeirn.m"
      {
#line 390 "mode_robdd.tfeirn.m"
        {
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_37_37 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38;

#line 390 "mode_robdd.tfeirn.m"
          {
#line 390 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_37_37, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
#line 390 "mode_robdd.tfeirn.m"
          if (mode_robdd__tfeirn__succeeded)
#line 390 "mode_robdd.tfeirn.m"
            {
#line 2547 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 390 "mode_robdd.tfeirn.m"
              {
#line 390 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_38_38, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
              }
#line 390 "mode_robdd.tfeirn.m"
            }
#line 390 "mode_robdd.tfeirn.m"
        }
#line 391 "mode_robdd.tfeirn.m"
        if (!(mode_robdd__tfeirn__succeeded))
#line 391 "mode_robdd.tfeirn.m"
          {
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40;

#line 391 "mode_robdd.tfeirn.m"
            {
#line 391 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 391 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 391 "mode_robdd.tfeirn.m"
              {
#line 2584 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 391 "mode_robdd.tfeirn.m"
                {
#line 391 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
                }
#line 391 "mode_robdd.tfeirn.m"
              }
#line 391 "mode_robdd.tfeirn.m"
          }
#line 395 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 394 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 395 "mode_robdd.tfeirn.m"
        else
#line 396 "mode_robdd.tfeirn.m"
          {
#line 396 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 396 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;

#line 396 "mode_robdd.tfeirn.m"
            {
#line 396 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__neq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
            }
#line 396 "mode_robdd.tfeirn.m"
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
#line 396 "mode_robdd.tfeirn.m"
          }
#line 395 "mode_robdd.tfeirn.m"
      }
#line 397 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 397 "mode_robdd.tfeirn.m"
  }
#line 69 "mode_robdd.tfeirn.m"
}

#line 73 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_109_112_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 73 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 73 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 73 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 73 "mode_robdd.tfeirn.m"
{
#line 409 "mode_robdd.tfeirn.m"
  {
#line 409 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 410 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30;

#line 401 "mode_robdd.tfeirn.m"
    {
#line 401 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
    }
#line 401 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 401 "mode_robdd.tfeirn.m"
      {
#line 2697 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 401 "mode_robdd.tfeirn.m"
        {
#line 401 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_30_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
        }
#line 401 "mode_robdd.tfeirn.m"
      }
#line 409 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 402 "mode_robdd.tfeirn.m"
      {
#line 402 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
#line 409 "mode_robdd.tfeirn.m"
    else
#line 405 "mode_robdd.tfeirn.m"
      {
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 403 "mode_robdd.tfeirn.m"
        {
#line 403 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_31_31, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
#line 405 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 404 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 405 "mode_robdd.tfeirn.m"
        else
#line 407 "mode_robdd.tfeirn.m"
          {
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_32_32 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 405 "mode_robdd.tfeirn.m"
            {
#line 405 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_32_32, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 407 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 406 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 407 "mode_robdd.tfeirn.m"
            else
#line 408 "mode_robdd.tfeirn.m"
              {
#line 408 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_14_14;
#line 408 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_15_15;

#line 408 "mode_robdd.tfeirn.m"
                {
#line 408 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                }
#line 408 "mode_robdd.tfeirn.m"
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
#line 408 "mode_robdd.tfeirn.m"
              }
#line 407 "mode_robdd.tfeirn.m"
          }
#line 405 "mode_robdd.tfeirn.m"
      }
#line 409 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 409 "mode_robdd.tfeirn.m"
  }
#line 73 "mode_robdd.tfeirn.m"
}

#line 77 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 77 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 77 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 77 "mode_robdd.tfeirn.m"
{
#line 419 "mode_robdd.tfeirn.m"
  {
#line 419 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 420 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 413 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 413 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 413 "mode_robdd.tfeirn.m"
    {
#line 413 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_6);
    }
#line 419 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 414 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 419 "mode_robdd.tfeirn.m"
    else
#line 417 "mode_robdd.tfeirn.m"
      {
#line 415 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 415 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 415 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 415 "mode_robdd.tfeirn.m"
        {
#line 415 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_7);
        }
#line 415 "mode_robdd.tfeirn.m"
        {
#line 415 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__V_12_12);
        }
#line 415 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 417 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 416 "mode_robdd.tfeirn.m"
          {
#line 416 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 417 "mode_robdd.tfeirn.m"
        else
#line 418 "mode_robdd.tfeirn.m"
          {
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;

#line 418 "mode_robdd.tfeirn.m"
            {
#line 418 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__Vars_4);
            }
#line 418 "mode_robdd.tfeirn.m"
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
#line 418 "mode_robdd.tfeirn.m"
          }
#line 417 "mode_robdd.tfeirn.m"
      }
#line 419 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 419 "mode_robdd.tfeirn.m"
  }
#line 77 "mode_robdd.tfeirn.m"
}

#line 81 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 81 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 81 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 81 "mode_robdd.tfeirn.m"
{
#line 429 "mode_robdd.tfeirn.m"
  {
#line 429 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 430 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 423 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 423 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 423 "mode_robdd.tfeirn.m"
    {
#line 423 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_6);
    }
#line 429 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 424 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 429 "mode_robdd.tfeirn.m"
    else
#line 427 "mode_robdd.tfeirn.m"
      {
#line 425 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 425 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 425 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 425 "mode_robdd.tfeirn.m"
        {
#line 425 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
        }
#line 425 "mode_robdd.tfeirn.m"
        {
#line 425 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__V_12_12);
        }
#line 425 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 427 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 426 "mode_robdd.tfeirn.m"
          {
#line 426 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 427 "mode_robdd.tfeirn.m"
        else
#line 428 "mode_robdd.tfeirn.m"
          {
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;

#line 428 "mode_robdd.tfeirn.m"
            {
#line 428 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__Vars_4);
            }
#line 428 "mode_robdd.tfeirn.m"
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
#line 428 "mode_robdd.tfeirn.m"
          }
#line 427 "mode_robdd.tfeirn.m"
      }
#line 429 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 429 "mode_robdd.tfeirn.m"
  }
#line 81 "mode_robdd.tfeirn.m"
}

#line 85 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 85 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 85 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_5)
#line 85 "mode_robdd.tfeirn.m"
{
#line 432 "mode_robdd.tfeirn.m"
  {
#line 432 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_6;
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_22 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 0)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 1)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 2)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 3)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 4)));
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___N_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 5)));
#line 434 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 434 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 434 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;

#line 434 "mode_robdd.tfeirn.m"
    {
#line 434 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_18_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_24_24, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
    }
#line 434 "mode_robdd.tfeirn.m"
    {
#line 434 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_24_24, mode_robdd__tfeirn__V_18_18);
    }
#line 434 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 436 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 435 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__X0_5;
#line 436 "mode_robdd.tfeirn.m"
    else
#line 438 "mode_robdd.tfeirn.m"
      {
#line 436 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 436 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 436 "mode_robdd.tfeirn.m"
        {
#line 436 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_26_26, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_8);
        }
#line 438 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 437 "mode_robdd.tfeirn.m"
          {
#line 437 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 438 "mode_robdd.tfeirn.m"
        else
#line 439 "mode_robdd.tfeirn.m"
          {
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__VarsNF_13;
#line 452 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_30;
#line 452 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__Var1_14;
#line 452 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__VarsNF1_15;
#line 440 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29;
#line 440 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv0_Var1_14;

#line 439 "mode_robdd.tfeirn.m"
            {
#line 439 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__VarsNF_13 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_8);
            }
#line 3151 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3153 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 440 "mode_robdd.tfeirn.m"
            {
#line 440 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv0_Var1_14, mode_robdd__tfeirn__VarsNF_13, &mode_robdd__tfeirn__VarsNF1_15);
            }
#line 440 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 440 "mode_robdd.tfeirn.m"
              {
#line 440 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__Var1_14 = ((MR_Word) mode_robdd__tfeirn__conv0_Var1_14);
#line 440 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 440 "mode_robdd.tfeirn.m"
              }
#line 452 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 449 "mode_robdd.tfeirn.m"
              {
#line 449 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__Var2_16;
#line 449 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__VarsNF2_17;
#line 441 "mode_robdd.tfeirn.m"
                MR_Box mode_robdd__tfeirn__conv1_Var2_16;

#line 441 "mode_robdd.tfeirn.m"
                {
#line 441 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv1_Var2_16, mode_robdd__tfeirn__VarsNF1_15, &mode_robdd__tfeirn__VarsNF2_17);
                }
#line 441 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 441 "mode_robdd.tfeirn.m"
                  {
#line 441 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Var2_16 = ((MR_Word) mode_robdd__tfeirn__conv1_Var2_16);
#line 441 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 441 "mode_robdd.tfeirn.m"
                  }
#line 449 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 446 "mode_robdd.tfeirn.m"
                  {
#line 442 "mode_robdd.tfeirn.m"
                    {
#line 442 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__VarsNF2_17);
                    }
#line 446 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 443 "mode_robdd.tfeirn.m"
                      {
#line 443 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_19_19;
#line 443 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_20_20;

#line 443 "mode_robdd.tfeirn.m"
                        {
#line 443 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__V_19_19 = mode_robdd__implications__either_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__Var2_16, mode_robdd__tfeirn__I_10);
                        }
#line 445 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__V_20_20 = (MR_Integer) 0;
#line 443 "mode_robdd.tfeirn.m"
                        {
#line 443 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__X_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 2) = ((MR_Box) (mode_robdd__tfeirn__E_9));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 3) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 4) = ((MR_Box) (mode_robdd__tfeirn__R_11));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 5) = ((MR_Box) (mode_robdd__tfeirn__V_20_20));
#line 443 "mode_robdd.tfeirn.m"
                        }
#line 443 "mode_robdd.tfeirn.m"
                      }
#line 446 "mode_robdd.tfeirn.m"
                    else
#line 447 "mode_robdd.tfeirn.m"
                      {
#line 447 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_21_21;

#line 447 "mode_robdd.tfeirn.m"
                        {
#line 447 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__V_21_21 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__VarsNF_13);
                        }
#line 447 "mode_robdd.tfeirn.m"
                        {
#line 447 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__X0_5, mode_robdd__tfeirn__V_21_21);
                        }
#line 447 "mode_robdd.tfeirn.m"
                      }
#line 446 "mode_robdd.tfeirn.m"
                  }
#line 449 "mode_robdd.tfeirn.m"
                else
#line 450 "mode_robdd.tfeirn.m"
                  {
#line 450 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__X0_5);
                  }
#line 449 "mode_robdd.tfeirn.m"
              }
#line 452 "mode_robdd.tfeirn.m"
            else
#line 453 "mode_robdd.tfeirn.m"
              {
#line 453 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
              }
#line 439 "mode_robdd.tfeirn.m"
          }
#line 438 "mode_robdd.tfeirn.m"
      }
#line 432 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_6;
#line 432 "mode_robdd.tfeirn.m"
  }
#line 85 "mode_robdd.tfeirn.m"
}

#line 89 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_111_110_101_95_111_102_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 89 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 89 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 89 "mode_robdd.tfeirn.m"
{
#line 464 "mode_robdd.tfeirn.m"
  {
#line 464 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 465 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 458 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__V_12_12;
#line 458 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__V_13_13;
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;

#line 458 "mode_robdd.tfeirn.m"
    {
#line 458 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_22_22, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_6);
    }
#line 458 "mode_robdd.tfeirn.m"
    {
#line 458 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__V_14_14);
    }
#line 458 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_13_13 = (MR_Integer) 1;
#line 458 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_12_12 <= mode_robdd__tfeirn__V_13_13);
#line 464 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 459 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 464 "mode_robdd.tfeirn.m"
    else
#line 462 "mode_robdd.tfeirn.m"
      {
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 460 "mode_robdd.tfeirn.m"
        MR_Integer mode_robdd__tfeirn__V_15_15;
#line 460 "mode_robdd.tfeirn.m"
        MR_Integer mode_robdd__tfeirn__V_16_16;
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_17_17;

#line 460 "mode_robdd.tfeirn.m"
        {
#line 460 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_26_26, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
        }
#line 460 "mode_robdd.tfeirn.m"
        {
#line 460 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__V_17_17);
        }
#line 460 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_16_16 = (MR_Integer) 1;
#line 460 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_15_15 > mode_robdd__tfeirn__V_16_16);
#line 462 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 461 "mode_robdd.tfeirn.m"
          {
#line 461 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
#line 462 "mode_robdd.tfeirn.m"
        else
#line 463 "mode_robdd.tfeirn.m"
          {
#line 463 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 463 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;

#line 463 "mode_robdd.tfeirn.m"
            {
#line 463 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_18_18 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__I_9);
            }
#line 463 "mode_robdd.tfeirn.m"
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
#line 463 "mode_robdd.tfeirn.m"
          }
#line 462 "mode_robdd.tfeirn.m"
      }
#line 464 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 464 "mode_robdd.tfeirn.m"
  }
#line 89 "mode_robdd.tfeirn.m"
}

#line 93 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_98_111_116_104_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 93 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 93 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 93 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 93 "mode_robdd.tfeirn.m"
{
#line 478 "mode_robdd.tfeirn.m"
  {
#line 478 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 479 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 468 "mode_robdd.tfeirn.m"
    {
#line 468 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarA_5);
    }
#line 478 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 469 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 478 "mode_robdd.tfeirn.m"
    else
#line 472 "mode_robdd.tfeirn.m"
      {
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 470 "mode_robdd.tfeirn.m"
        {
#line 470 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarB_6);
        }
#line 472 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 471 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 472 "mode_robdd.tfeirn.m"
        else
#line 474 "mode_robdd.tfeirn.m"
          {
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 472 "mode_robdd.tfeirn.m"
            {
#line 472 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarA_5);
            }
#line 474 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 473 "mode_robdd.tfeirn.m"
              {
#line 473 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__X_7);
              }
#line 474 "mode_robdd.tfeirn.m"
            else
#line 476 "mode_robdd.tfeirn.m"
              {
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 474 "mode_robdd.tfeirn.m"
                {
#line 474 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarB_6);
                }
#line 476 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 475 "mode_robdd.tfeirn.m"
                  {
#line 475 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__X_7);
                  }
#line 476 "mode_robdd.tfeirn.m"
                else
#line 477 "mode_robdd.tfeirn.m"
                  {
#line 477 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_14_14;
#line 477 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_15_15;

#line 477 "mode_robdd.tfeirn.m"
                    {
#line 477 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                    }
#line 477 "mode_robdd.tfeirn.m"
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
#line 477 "mode_robdd.tfeirn.m"
                  }
#line 476 "mode_robdd.tfeirn.m"
              }
#line 474 "mode_robdd.tfeirn.m"
          }
#line 472 "mode_robdd.tfeirn.m"
      }
#line 478 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 478 "mode_robdd.tfeirn.m"
  }
#line 93 "mode_robdd.tfeirn.m"
}

#line 97 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_111_95_99_111_110_115_116_114_97_105_110_116_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_4_f_0(
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_in_6,
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_out_7,
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V__8,
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_9)
#line 97 "mode_robdd.tfeirn.m"
{
#line 482 "mode_robdd.tfeirn.m"
  {
#line 482 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_5;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_19;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Vars_10;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;

#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_11_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_98_111_116_104_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__V_in_6, mode_robdd__tfeirn__V__8, mode_robdd__tfeirn__X_9);
    }
#line 3661 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3663 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3665 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 3667 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeClassInfo_for_enum_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 483 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 483 "mode_robdd.tfeirn.m"
    {
#line 483 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_13_13, 0) = ((MR_Box) (mode_robdd__tfeirn__V__8));
#line 483 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_13_13, 1) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 483 "mode_robdd.tfeirn.m"
    }
#line 483 "mode_robdd.tfeirn.m"
    {
#line 483 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_12_12, 0) = ((MR_Box) (mode_robdd__tfeirn__V_in_6));
#line 483 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_12_12, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 483 "mode_robdd.tfeirn.m"
    }
#line 3691 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 483 "mode_robdd.tfeirn.m"
    {
#line 483 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__TypeCtorInfo_20_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_19, mode_robdd__tfeirn__V_12_12);
    }
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__5_5 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__V_out_7, mode_robdd__tfeirn__V_11_11);
    }
#line 482 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_5;
#line 482 "mode_robdd.tfeirn.m"
  }
#line 97 "mode_robdd.tfeirn.m"
}

#line 521 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1(
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 521 "mode_robdd.tfeirn.m"
{
#line 521 "mode_robdd.tfeirn.m"
  {
#line 521 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 521 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 521 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_LambdaHeadVar__3_20;

#line 521 "mode_robdd.tfeirn.m"
    {
#line 521 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_LambdaHeadVar__3_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 521 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv1_LambdaHeadVar__3_20));
#line 521 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 521 "mode_robdd.tfeirn.m"
  }
#line 521 "mode_robdd.tfeirn.m"
}

#line 102 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
#line 102 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_5,
#line 102 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Var_6,
#line 102 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 102 "mode_robdd.tfeirn.m"
{
#line 511 "mode_robdd.tfeirn.m"
  {
#line 511 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_21 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 512 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 512 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 512 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___R_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 512 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___N_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 486 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 486 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 486 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_25 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 486 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 486 "mode_robdd.tfeirn.m"
    {
#line 486 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_45_45, mode_robdd__tfeirn__TypeClassInfo_for_enum_25, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__Var_6);
    }
#line 511 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 489 "mode_robdd.tfeirn.m"
      {
#line 487 "mode_robdd.tfeirn.m"
        {
#line 487 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_23_23, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
        }
#line 489 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 488 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 489 "mode_robdd.tfeirn.m"
        else
#line 490 "mode_robdd.tfeirn.m"
          {
#line 490 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
          }
#line 489 "mode_robdd.tfeirn.m"
      }
#line 511 "mode_robdd.tfeirn.m"
    else
#line 498 "mode_robdd.tfeirn.m"
      {
#line 498 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 492 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 492 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 492 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_31 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 492 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_46_46 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 492 "mode_robdd.tfeirn.m"
        {
#line 492 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_46_46, mode_robdd__tfeirn__TypeClassInfo_for_enum_31, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__Var_6);
        }
#line 498 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 495 "mode_robdd.tfeirn.m"
          {
#line 493 "mode_robdd.tfeirn.m"
            {
#line 493 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_29_29, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
            }
#line 495 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 494 "mode_robdd.tfeirn.m"
              {
#line 494 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
              }
#line 495 "mode_robdd.tfeirn.m"
            else
#line 496 "mode_robdd.tfeirn.m"
              {
#line 496 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
              }
#line 495 "mode_robdd.tfeirn.m"
          }
#line 498 "mode_robdd.tfeirn.m"
        else
#line 500 "mode_robdd.tfeirn.m"
          {
#line 498 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 498 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_35_35 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 498 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;

#line 498 "mode_robdd.tfeirn.m"
            {
#line 498 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_16_16 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_35_35, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__T_9);
            }
#line 498 "mode_robdd.tfeirn.m"
            {
#line 498 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_35_35, mode_robdd__tfeirn__V_16_16);
            }
#line 498 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 500 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 499 "mode_robdd.tfeirn.m"
              {
#line 499 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
              }
#line 500 "mode_robdd.tfeirn.m"
            else
#line 502 "mode_robdd.tfeirn.m"
              {
#line 500 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 500 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_37_37 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 500 "mode_robdd.tfeirn.m"
                {
#line 500 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_37_37, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
                }
#line 502 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 501 "mode_robdd.tfeirn.m"
                  {
#line 501 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                  }
#line 502 "mode_robdd.tfeirn.m"
                else
#line 509 "mode_robdd.tfeirn.m"
                  {
#line 509 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeInfo_39_39 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 509 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_41 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 509 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__Var1_10;
#line 509 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__Vars1_11;
#line 502 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 502 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 502 "mode_robdd.tfeirn.m"
                    MR_Box mode_robdd__tfeirn__conv0_Var1_10;

#line 502 "mode_robdd.tfeirn.m"
                    {
#line 502 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_41, &mode_robdd__tfeirn__conv0_Var1_10, mode_robdd__tfeirn__Vars_5, &mode_robdd__tfeirn__Vars1_11);
                    }
#line 502 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 502 "mode_robdd.tfeirn.m"
                      {
#line 502 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__Var1_10 = ((MR_Word) mode_robdd__tfeirn__conv0_Var1_10);
#line 502 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 502 "mode_robdd.tfeirn.m"
                      }
#line 509 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 505 "mode_robdd.tfeirn.m"
                      {
#line 503 "mode_robdd.tfeirn.m"
                        {
#line 503 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_39_39, mode_robdd__tfeirn__Vars1_11);
                        }
#line 505 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 504 "mode_robdd.tfeirn.m"
                          {
#line 504 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var1_10, mode_robdd__tfeirn__X_7);
                          }
#line 505 "mode_robdd.tfeirn.m"
                        else
#line 506 "mode_robdd.tfeirn.m"
                          {
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeInfo_for_T_65 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_70;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeInfo_29_71;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_72;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_17_17;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_18_18;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_19_19;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_20_20;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__T_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__F_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__E_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__I0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__R_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__I_55;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_58_58 = (MR_Integer) 0;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_59_59;
#line 519 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 521 "mode_robdd.tfeirn.m"
                            MR_Box mode_robdd__tfeirn__conv2_I_55;

#line 521 "mode_robdd.tfeirn.m"
                            {
#line 521 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[1]));
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1));
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_65));
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_59_59, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
#line 521 "mode_robdd.tfeirn.m"
                            }
#line 4016 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeCtorInfo_28_70 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 4018 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeInfo_29_71 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[2];
#line 4020 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeCtorInfo_30_72 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 521 "mode_robdd.tfeirn.m"
                            {
#line 521 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__conv2_I_55 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_30_72, mode_robdd__tfeirn__TypeInfo_29_71, mode_robdd__tfeirn__TypeClassInfo_for_enum_41, mode_robdd__tfeirn__V_59_59, mode_robdd__tfeirn__Vars_5, ((MR_Box) (mode_robdd__tfeirn__I0_52)));
                            }
#line 521 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__I_55 = ((MR_Word) mode_robdd__tfeirn__conv2_I_55);
#line 520 "mode_robdd.tfeirn.m"
                            {
#line 520 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__T_49));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__F_50));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 2) = ((MR_Box) (mode_robdd__tfeirn__E_51));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 3) = ((MR_Box) (mode_robdd__tfeirn__I_55));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 4) = ((MR_Box) (mode_robdd__tfeirn__R_53));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 5) = ((MR_Box) (mode_robdd__tfeirn__V_58_58));
#line 520 "mode_robdd.tfeirn.m"
                            }
#line 507 "mode_robdd.tfeirn.m"
                            {
#line 507 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_19_19 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6);
                            }
#line 507 "mode_robdd.tfeirn.m"
                            {
#line 507 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_20_20 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5);
                            }
#line 507 "mode_robdd.tfeirn.m"
                            {
#line 507 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_18_18 = mercury__robdd__f_less_or_equal_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__V_19_19, mode_robdd__tfeirn__V_20_20);
                            }
#line 506 "mode_robdd.tfeirn.m"
                            {
#line 506 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__V_17_17, mode_robdd__tfeirn__V_18_18);
                            }
#line 506 "mode_robdd.tfeirn.m"
                          }
#line 505 "mode_robdd.tfeirn.m"
                      }
#line 509 "mode_robdd.tfeirn.m"
                    else
#line 510 "mode_robdd.tfeirn.m"
                      {
#line 510 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                      }
#line 509 "mode_robdd.tfeirn.m"
                  }
#line 502 "mode_robdd.tfeirn.m"
              }
#line 500 "mode_robdd.tfeirn.m"
          }
#line 498 "mode_robdd.tfeirn.m"
      }
#line 511 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 511 "mode_robdd.tfeirn.m"
  }
#line 102 "mode_robdd.tfeirn.m"
}

#line 106 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_114_101_115_116_114_105_99_116_95_116_114_117_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 106 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 106 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 106 "mode_robdd.tfeirn.m"
{
#line 523 "mode_robdd.tfeirn.m"
  {
#line 523 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_11;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_47_47 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 524 "mode_robdd.tfeirn.m"
    {
#line 524 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_47_47, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
#line 526 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 525 "mode_robdd.tfeirn.m"
      {
#line 525 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
#line 526 "mode_robdd.tfeirn.m"
    else
#line 528 "mode_robdd.tfeirn.m"
      {
#line 528 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 526 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 526 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 526 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 526 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 526 "mode_robdd.tfeirn.m"
        {
#line 526 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_48_48, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
#line 528 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 527 "mode_robdd.tfeirn.m"
          {
#line 527 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 527 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 527 "mode_robdd.tfeirn.m"
            {
#line 527 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_49_49, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
#line 527 "mode_robdd.tfeirn.m"
            {
#line 527 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 527 "mode_robdd.tfeirn.m"
            }
#line 527 "mode_robdd.tfeirn.m"
          }
#line 528 "mode_robdd.tfeirn.m"
        else
#line 529 "mode_robdd.tfeirn.m"
          {
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_51_51;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X0_12;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_20_20;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_21_21;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_22_22;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_23_23;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_25_25;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_26_26;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_27_27;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_28_28;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_29_29;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_24_24;

#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_50_50, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Integer) 0;
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 5) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 529 "mode_robdd.tfeirn.m"
            }
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_14_14);
            }
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 4292 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 530 "mode_robdd.tfeirn.m"
            {
#line 530 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_51_51, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_4);
            }
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 530 "mode_robdd.tfeirn.m"
            {
#line 530 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_25_25));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__V_26_26));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__V_27_27));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__V_28_28));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__V_29_29));
#line 530 "mode_robdd.tfeirn.m"
            }
#line 529 "mode_robdd.tfeirn.m"
          }
#line 528 "mode_robdd.tfeirn.m"
      }
#line 523 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_11;
#line 523 "mode_robdd.tfeirn.m"
  }
#line 106 "mode_robdd.tfeirn.m"
}

#line 110 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_114_101_115_116_114_105_99_116_95_102_97_108_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 110 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 110 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 110 "mode_robdd.tfeirn.m"
{
#line 533 "mode_robdd.tfeirn.m"
  {
#line 533 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_11;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_47_47 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 534 "mode_robdd.tfeirn.m"
    {
#line 534 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_47_47, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
#line 536 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 535 "mode_robdd.tfeirn.m"
      {
#line 535 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
#line 536 "mode_robdd.tfeirn.m"
    else
#line 538 "mode_robdd.tfeirn.m"
      {
#line 538 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 536 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 536 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 536 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 536 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 536 "mode_robdd.tfeirn.m"
        {
#line 536 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_48_48, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
#line 538 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 537 "mode_robdd.tfeirn.m"
          {
#line 537 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 537 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 537 "mode_robdd.tfeirn.m"
            {
#line 537 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_49_49, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 537 "mode_robdd.tfeirn.m"
            {
#line 537 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 537 "mode_robdd.tfeirn.m"
            }
#line 537 "mode_robdd.tfeirn.m"
          }
#line 538 "mode_robdd.tfeirn.m"
        else
#line 539 "mode_robdd.tfeirn.m"
          {
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_51_51;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X0_12;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_20_20;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_21_21;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_22_22;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_23_23;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_24_24;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_26_26;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_27_27;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_28_28;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_29_29;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_25_25;

#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_50_50, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Integer) 0;
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 5) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 539 "mode_robdd.tfeirn.m"
            }
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_14_14);
            }
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 4539 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 540 "mode_robdd.tfeirn.m"
            {
#line 540 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_51_51, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_4);
            }
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 540 "mode_robdd.tfeirn.m"
            {
#line 540 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_24_24));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__V_26_26));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__V_27_27));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__V_28_28));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__V_29_29));
#line 540 "mode_robdd.tfeirn.m"
            }
#line 539 "mode_robdd.tfeirn.m"
          }
#line 538 "mode_robdd.tfeirn.m"
      }
#line 533 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_11;
#line 533 "mode_robdd.tfeirn.m"
  }
#line 110 "mode_robdd.tfeirn.m"
}

#line 117 "mode_robdd.tfeirn.m"
MR_bool MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0(
#line 117 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3,
#line 117 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4)
#line 117 "mode_robdd.tfeirn.m"
{
#line 299 "mode_robdd.tfeirn.m"
  {
#line 299 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 299 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_12 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 299 "mode_robdd.tfeirn.m"
    {
#line 299 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 299 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_17_17;
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 299 "mode_robdd.tfeirn.m"
      {
#line 299 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_17_17 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_12);
      }
#line 299 "mode_robdd.tfeirn.m"
      {
#line 299 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_17_17);
      }
#line 299 "mode_robdd.tfeirn.m"
    }
#line 299 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 299 "mode_robdd.tfeirn.m"
      {
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_14_14 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 299 "mode_robdd.tfeirn.m"
        {
#line 299 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_20_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_16, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_4);
        }
#line 299 "mode_robdd.tfeirn.m"
      }
#line 299 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 299 "mode_robdd.tfeirn.m"
  }
#line 117 "mode_robdd.tfeirn.m"
}

#line 121 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 121 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 121 "mode_robdd.tfeirn.m"
{
#line 301 "mode_robdd.tfeirn.m"
  {
#line 301 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 301 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 301 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 302 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 302 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 302 "mode_robdd.tfeirn.m"
    {
#line 302 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
#line 302 "mode_robdd.tfeirn.m"
    {
#line 302 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__V_4_4, mode_robdd__tfeirn__V_12_12);
    }
#line 301 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 303 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "mode_robdd.tfeirn.m"
    else
#line 305 "mode_robdd.tfeirn.m"
      {
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 305 "mode_robdd.tfeirn.m"
        {
#line 305 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 305 "mode_robdd.tfeirn.m"
        }
#line 305 "mode_robdd.tfeirn.m"
      }
#line 301 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 301 "mode_robdd.tfeirn.m"
  }
#line 121 "mode_robdd.tfeirn.m"
}

#line 126 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_100_105_115_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 126 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 126 "mode_robdd.tfeirn.m"
{
#line 308 "mode_robdd.tfeirn.m"
  {
#line 308 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 308 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 308 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 309 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 309 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 309 "mode_robdd.tfeirn.m"
    {
#line 309 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
#line 309 "mode_robdd.tfeirn.m"
    {
#line 309 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__V_4_4, mode_robdd__tfeirn__V_12_12);
    }
#line 308 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 310 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "mode_robdd.tfeirn.m"
    else
#line 312 "mode_robdd.tfeirn.m"
      {
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 312 "mode_robdd.tfeirn.m"
        {
#line 312 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 312 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 312 "mode_robdd.tfeirn.m"
        }
#line 312 "mode_robdd.tfeirn.m"
      }
#line 308 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 308 "mode_robdd.tfeirn.m"
  }
#line 126 "mode_robdd.tfeirn.m"
}

#line 130 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_107_110_111_119_110_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_p_0(
#line 130 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_4,
#line 130 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_5,
#line 130 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_6)
#line 130 "mode_robdd.tfeirn.m"
{
#line 319 "mode_robdd.tfeirn.m"
  {
#line 319 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 319 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_18 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 316 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
#line 316 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_21_21;
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));

#line 316 "mode_robdd.tfeirn.m"
    {
#line 316 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_21_21 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_18);
    }
#line 316 "mode_robdd.tfeirn.m"
    {
#line 316 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_18, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_21_21);
    }
#line 319 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 317 "mode_robdd.tfeirn.m"
      {
#line 317 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 317 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

#line 317 "mode_robdd.tfeirn.m"
        {
#line 317 "mode_robdd.tfeirn.m"
          *mode_robdd__tfeirn__TrueVars_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
#line 318 "mode_robdd.tfeirn.m"
        {
#line 318 "mode_robdd.tfeirn.m"
          *mode_robdd__tfeirn__FalseVars_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
#line 317 "mode_robdd.tfeirn.m"
      }
#line 319 "mode_robdd.tfeirn.m"
    else
#line 320 "mode_robdd.tfeirn.m"
      {
#line 320 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9;
#line 320 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10;
#line 320 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11;
#line 320 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 320 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__TrueVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
#line 320 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__FalseVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
#line 320 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
#line 320 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
#line 320 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
#line 320 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));
#line 320 "mode_robdd.tfeirn.m"
      }
#line 319 "mode_robdd.tfeirn.m"
  }
#line 130 "mode_robdd.tfeirn.m"
}

#line 134 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 134 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 134 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 134 "mode_robdd.tfeirn.m"
{
#line 324 "mode_robdd.tfeirn.m"
  {
#line 324 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 325 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 325 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 325 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 325 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 325 "mode_robdd.tfeirn.m"
    {
#line 325 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
#line 324 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 326 "mode_robdd.tfeirn.m"
      {
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 326 "mode_robdd.tfeirn.m"
        {
#line 326 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
#line 326 "mode_robdd.tfeirn.m"
        {
#line 326 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 326 "mode_robdd.tfeirn.m"
        }
#line 326 "mode_robdd.tfeirn.m"
      }
#line 324 "mode_robdd.tfeirn.m"
    else
#line 329 "mode_robdd.tfeirn.m"
      {
#line 329 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 327 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 327 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 327 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 327 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 327 "mode_robdd.tfeirn.m"
        {
#line 327 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_41_41, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
#line 329 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 328 "mode_robdd.tfeirn.m"
          {
#line 328 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_42_42 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 328 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 328 "mode_robdd.tfeirn.m"
            {
#line 328 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_42_42, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 328 "mode_robdd.tfeirn.m"
            {
#line 328 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 328 "mode_robdd.tfeirn.m"
            }
#line 328 "mode_robdd.tfeirn.m"
          }
#line 329 "mode_robdd.tfeirn.m"
        else
#line 336 "mode_robdd.tfeirn.m"
          {
#line 336 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__L_11;

#line 329 "mode_robdd.tfeirn.m"
            {
#line 329 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_97_100_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7, &mode_robdd__tfeirn__L_11);
            }
#line 336 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 332 "mode_robdd.tfeirn.m"
              {
#line 330 "mode_robdd.tfeirn.m"
                {
#line 330 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__term____Unify____var_1_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__L_11, mode_robdd__tfeirn__V_4);
                }
#line 330 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 332 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 331 "mode_robdd.tfeirn.m"
                  {
#line 331 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_14_14;

#line 331 "mode_robdd.tfeirn.m"
                    {
#line 331 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_14_14 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
#line 331 "mode_robdd.tfeirn.m"
                    {
#line 331 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 331 "mode_robdd.tfeirn.m"
                    }
#line 331 "mode_robdd.tfeirn.m"
                  }
#line 332 "mode_robdd.tfeirn.m"
                else
#line 333 "mode_robdd.tfeirn.m"
                  {
#line 333 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_15_15;
#line 333 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_16_16;
#line 333 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_17_17;

#line 333 "mode_robdd.tfeirn.m"
                    {
#line 333 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_15_15 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
#line 333 "mode_robdd.tfeirn.m"
                    {
#line 333 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_16_16 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                    }
#line 334 "mode_robdd.tfeirn.m"
                    {
#line 334 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_17_17 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                    }
#line 333 "mode_robdd.tfeirn.m"
                    {
#line 333 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 333 "mode_robdd.tfeirn.m"
                    }
#line 333 "mode_robdd.tfeirn.m"
                  }
#line 332 "mode_robdd.tfeirn.m"
              }
#line 336 "mode_robdd.tfeirn.m"
            else
#line 337 "mode_robdd.tfeirn.m"
              {
#line 337 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_18_18;
#line 337 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_19_19;

#line 337 "mode_robdd.tfeirn.m"
                {
#line 337 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_18_18 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                }
#line 337 "mode_robdd.tfeirn.m"
                {
#line 337 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_19_19 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                }
#line 337 "mode_robdd.tfeirn.m"
                {
#line 337 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 337 "mode_robdd.tfeirn.m"
                }
#line 337 "mode_robdd.tfeirn.m"
              }
#line 336 "mode_robdd.tfeirn.m"
          }
#line 329 "mode_robdd.tfeirn.m"
      }
#line 324 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 324 "mode_robdd.tfeirn.m"
  }
#line 134 "mode_robdd.tfeirn.m"
}

#line 139 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 139 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 139 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 139 "mode_robdd.tfeirn.m"
{
#line 340 "mode_robdd.tfeirn.m"
  {
#line 340 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15;

#line 341 "mode_robdd.tfeirn.m"
    {
#line 341 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_11_11 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_5, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
#line 341 "mode_robdd.tfeirn.m"
    {
#line 341 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_6, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
#line 341 "mode_robdd.tfeirn.m"
    {
#line 341 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = mode_robdd__equiv_vars__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7);
    }
#line 342 "mode_robdd.tfeirn.m"
    {
#line 342 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__I_8);
    }
#line 342 "mode_robdd.tfeirn.m"
    {
#line 342 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_15_15 = mercury__robdd__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
    }
#line 341 "mode_robdd.tfeirn.m"
    {
#line 341 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 341 "mode_robdd.tfeirn.m"
    }
#line 340 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 340 "mode_robdd.tfeirn.m"
  }
#line 139 "mode_robdd.tfeirn.m"
}

#line 143 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 143 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__P_4,
#line 143 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 143 "mode_robdd.tfeirn.m"
{
#line 543 "mode_robdd.tfeirn.m"
  {
#line 543 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15;

#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_11_11 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__T_5);
    }
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__F_6);
    }
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = mode_robdd__equiv_vars__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__E_7);
    }
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__I_8);
    }
#line 545 "mode_robdd.tfeirn.m"
    {
#line 545 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_15_15 = mercury__robdd__restrict_filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__R_9);
    }
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 544 "mode_robdd.tfeirn.m"
    }
#line 543 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 543 "mode_robdd.tfeirn.m"
  }
#line 143 "mode_robdd.tfeirn.m"
}

#line 175 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 175 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 175 "mode_robdd.tfeirn.m"
{
#line 620 "mode_robdd.tfeirn.m"
  {
#line 620 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 620 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;

#line 620 "mode_robdd.tfeirn.m"
    {
#line 620 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__X_3);
    }
#line 620 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 620 "mode_robdd.tfeirn.m"
  }
#line 175 "mode_robdd.tfeirn.m"
}

#line 622 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
#line 622 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
#line 622 "mode_robdd.tfeirn.m"
{
#line 625 "mode_robdd.tfeirn.m"
  while (MR_TRUE)
#line 625 "mode_robdd.tfeirn.m"
    {
#line 625 "mode_robdd.tfeirn.m"
      /* tailcall optimized into a loop */
#line 625 "mode_robdd.tfeirn.m"
      {
#line 625 "mode_robdd.tfeirn.m"
        MR_bool mode_robdd__tfeirn__succeeded;
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__X_2;
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_for_T_57 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));

#line 625 "mode_robdd.tfeirn.m"
#line 625 "mode_robdd.tfeirn.m"
        switch (mode_robdd__tfeirn__V_64_64) {
#line 625 "mode_robdd.tfeirn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 625 "mode_robdd.tfeirn.m"
          case (MR_Integer) 0:
#line 633 "mode_robdd.tfeirn.m"
            {
#line 631 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__TypeCtorInfo_58_58 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 631 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__TypeInfo_59_59 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 631 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__V_50_50;

#line 631 "mode_robdd.tfeirn.m"
              {
#line 631 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__V_50_50 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_59_59, mode_robdd__tfeirn__V_69_69, mode_robdd__tfeirn__V_68_68);
              }
#line 631 "mode_robdd.tfeirn.m"
              {
#line 631 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_59_59, mode_robdd__tfeirn__V_50_50);
              }
#line 631 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 633 "mode_robdd.tfeirn.m"
              if (mode_robdd__tfeirn__succeeded)
#line 632 "mode_robdd.tfeirn.m"
                {
#line 632 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                }
#line 633 "mode_robdd.tfeirn.m"
              else
#line 637 "mode_robdd.tfeirn.m"
                {
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed0_18;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__TrueVars1_19;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__FalseVars1_20;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__EQVars1_21;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed1_22;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__TrueVars2_23;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__FalseVars2_24;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__ImpVars1_25;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed2_26;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Robdd1_27;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed3_28;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_51_51;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed0_79;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed1_80;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__DCG_1_81;
#line 702 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__NewTrueVars_29;
#line 702 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__NewFalseVars_30;
#line 652 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_52_52;
#line 652 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_53_53;

#line 713 "mode_robdd.tfeirn.m"
                  {
#line 713 "mode_robdd.tfeirn.m"
                    mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&mode_robdd__tfeirn__Changed0_79, mode_robdd__tfeirn__V_69_69, &mode_robdd__tfeirn__TrueVars1_19, mode_robdd__tfeirn__V_67_67, &mode_robdd__tfeirn__DCG_1_81);
                  }
#line 714 "mode_robdd.tfeirn.m"
                  {
#line 714 "mode_robdd.tfeirn.m"
                    mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&mode_robdd__tfeirn__Changed1_80, mode_robdd__tfeirn__V_68_68, &mode_robdd__tfeirn__FalseVars1_20, mode_robdd__tfeirn__DCG_1_81, &mode_robdd__tfeirn__EQVars1_21);
                  }
#line 715 "mode_robdd.tfeirn.m"
                  {
#line 715 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed0_18 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_79, mode_robdd__tfeirn__Changed1_80);
                  }
#line 640 "mode_robdd.tfeirn.m"
                  {
#line 640 "mode_robdd.tfeirn.m"
                    mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed1_22, mode_robdd__tfeirn__TrueVars1_19, &mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__FalseVars1_20, &mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__V_66_66, &mode_robdd__tfeirn__ImpVars1_25);
                  }
#line 643 "mode_robdd.tfeirn.m"
                  {
#line 643 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed2_26 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_18, mode_robdd__tfeirn__Changed1_22);
                  }
#line 646 "mode_robdd.tfeirn.m"
                  {
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Robdd1_27 = mercury__robdd__restrict_true_false_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__V_65_65);
                  }
#line 648 "mode_robdd.tfeirn.m"
                  {
#line 648 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, mode_robdd__tfeirn__V_65_65);
                  }
#line 648 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 648 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 648 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_51_51 = (MR_Integer) 1;
#line 648 "mode_robdd.tfeirn.m"
                  else
#line 648 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_51_51 = (MR_Integer) 0;
#line 648 "mode_robdd.tfeirn.m"
                  {
#line 648 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed3_28 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed2_26, mode_robdd__tfeirn__V_51_51);
                  }
#line 652 "mode_robdd.tfeirn.m"
                  {
#line 652 "mode_robdd.tfeirn.m"
                    mercury__robdd__definite_vars_3_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, &mode_robdd__tfeirn__V_52_52, &mode_robdd__tfeirn__V_53_53);
                  }
#line 653 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 653 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 653 "mode_robdd.tfeirn.m"
                    {
#line 653 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__NewTrueVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_52_52, (MR_Integer) 0)));
#line 653 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 653 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 653 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__NewFalseVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_53_53, (MR_Integer) 0)));
#line 653 "mode_robdd.tfeirn.m"
                    }
#line 702 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 666 "mode_robdd.tfeirn.m"
                    {
#line 666 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__Changed4_31;
#line 666 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TrueVars_32;
#line 666 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__FalseVars_33;
#line 656 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 656 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TypeInfo_61_61 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 699 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__Changed5_34;
#line 699 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__ImpVars2_35;

#line 656 "mode_robdd.tfeirn.m"
                      {
#line 656 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_61_61, mode_robdd__tfeirn__NewTrueVars_29);
                      }
#line 656 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 657 "mode_robdd.tfeirn.m"
                        {
#line 657 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_61_61, mode_robdd__tfeirn__NewFalseVars_30);
                        }
#line 662 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 659 "mode_robdd.tfeirn.m"
                        {
#line 659 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__Changed4_31 = mode_robdd__tfeirn__Changed3_28;
#line 660 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__TrueVars_32 = mode_robdd__tfeirn__TrueVars2_23;
#line 661 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__FalseVars_33 = mode_robdd__tfeirn__FalseVars2_24;
#line 659 "mode_robdd.tfeirn.m"
                        }
#line 662 "mode_robdd.tfeirn.m"
                      else
#line 663 "mode_robdd.tfeirn.m"
                        {
#line 663 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeCtorInfo_62_62;
#line 663 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeInfo_63_63;

#line 663 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__Changed4_31 = (MR_Integer) 1;
#line 5669 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeCtorInfo_62_62 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5671 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeInfo_63_63 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 664 "mode_robdd.tfeirn.m"
                          {
#line 664 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__TrueVars_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_63_63, mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__NewTrueVars_29);
                          }
#line 665 "mode_robdd.tfeirn.m"
                          {
#line 665 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__FalseVars_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_63_63, mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__NewFalseVars_30);
                          }
#line 663 "mode_robdd.tfeirn.m"
                        }
#line 670 "mode_robdd.tfeirn.m"
                      {
#line 670 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars1_21, &mode_robdd__tfeirn__Changed5_34, mode_robdd__tfeirn__ImpVars1_25, &mode_robdd__tfeirn__ImpVars2_35);
                      }
#line 699 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 675 "mode_robdd.tfeirn.m"
                        {
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed6_36;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__EQVars2_37;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__ImpVars3_38;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed7_39;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed8_40;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd2_41;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__EQVars_42;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed9_43;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed10_44;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd_45;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__ImpVars_46;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed_47;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_54_54;

#line 673 "mode_robdd.tfeirn.m"
                          {
#line 673 "mode_robdd.tfeirn.m"
                            mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed6_36, mode_robdd__tfeirn__EQVars1_21, &mode_robdd__tfeirn__EQVars2_37, mode_robdd__tfeirn__ImpVars2_35, &mode_robdd__tfeirn__ImpVars3_38);
                          }
#line 676 "mode_robdd.tfeirn.m"
                          {
#line 676 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_54_54 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed4_31, mode_robdd__tfeirn__Changed5_34);
                          }
#line 677 "mode_robdd.tfeirn.m"
                          {
#line 677 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed7_39 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__V_54_54, mode_robdd__tfeirn__Changed6_36);
                          }
#line 680 "mode_robdd.tfeirn.m"
                          {
#line 680 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_120_116_114_97_99_116_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_102_114_111_109_95_114_111_98_100_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&mode_robdd__tfeirn__Changed8_40, mode_robdd__tfeirn__Robdd1_27, &mode_robdd__tfeirn__Robdd2_41, mode_robdd__tfeirn__EQVars2_37, &mode_robdd__tfeirn__EQVars_42);
                          }
#line 682 "mode_robdd.tfeirn.m"
                          {
#line 682 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed9_43 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed7_39, mode_robdd__tfeirn__Changed8_40);
                          }
#line 685 "mode_robdd.tfeirn.m"
                          {
#line 685 "mode_robdd.tfeirn.m"
                            mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed10_44, mode_robdd__tfeirn__Robdd2_41, &mode_robdd__tfeirn__Robdd_45, mode_robdd__tfeirn__ImpVars3_38, &mode_robdd__tfeirn__ImpVars_46);
                          }
#line 687 "mode_robdd.tfeirn.m"
                          {
#line 687 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed_47 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed9_43, mode_robdd__tfeirn__Changed10_44);
                          }
#line 694 "mode_robdd.tfeirn.m"
#line 694 "mode_robdd.tfeirn.m"
                          switch (mode_robdd__tfeirn__Changed_47) {
#line 694 "mode_robdd.tfeirn.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 694 "mode_robdd.tfeirn.m"
                            case (MR_Integer) 0:
#line 695 "mode_robdd.tfeirn.m"
                              {
#line 695 "mode_robdd.tfeirn.m"
                                MR_Word mode_robdd__tfeirn__V_55_55 = (MR_Integer) 1;

#line 696 "mode_robdd.tfeirn.m"
                                {
#line 696 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__X_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_32));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_33));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_42));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_46));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_45));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 5) = ((MR_Box) (mode_robdd__tfeirn__V_55_55));
#line 696 "mode_robdd.tfeirn.m"
                                }
#line 695 "mode_robdd.tfeirn.m"
                              }
#line 694 "mode_robdd.tfeirn.m"
                              break;
#line 694 "mode_robdd.tfeirn.m"
                            case (MR_Integer) 1:
#line 690 "mode_robdd.tfeirn.m"
                              {
#line 690 "mode_robdd.tfeirn.m"
                                MR_Word mode_robdd__tfeirn__X0_48;
#line 690 "mode_robdd.tfeirn.m"
                                MR_Word mode_robdd__tfeirn__V_56_56 = (MR_Integer) 0;

#line 691 "mode_robdd.tfeirn.m"
                                {
#line 691 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__X0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_32));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_33));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_42));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_46));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_45));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 5) = ((MR_Box) (mode_robdd__tfeirn__V_56_56));
#line 691 "mode_robdd.tfeirn.m"
                                }
#line 693 "mode_robdd.tfeirn.m"
                                /* direct tailcall eliminated */
#line 693 "mode_robdd.tfeirn.m"
                                {
#line 693 "mode_robdd.tfeirn.m"
                                  MR_Word mode_robdd__tfeirn__HeadVar__1__tmp_copy_1 = mode_robdd__tfeirn__X0_48;

#line 693 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__HeadVar__1__tmp_copy_1;
#line 693 "mode_robdd.tfeirn.m"
                                }
#line 693 "mode_robdd.tfeirn.m"
                                continue;
#line 690 "mode_robdd.tfeirn.m"
                              }
#line 694 "mode_robdd.tfeirn.m"
                              break;
#line 694 "mode_robdd.tfeirn.m"
                          }
#line 675 "mode_robdd.tfeirn.m"
                        }
#line 699 "mode_robdd.tfeirn.m"
                      else
#line 700 "mode_robdd.tfeirn.m"
                        {
#line 700 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                        }
#line 666 "mode_robdd.tfeirn.m"
                    }
#line 702 "mode_robdd.tfeirn.m"
                  else
#line 703 "mode_robdd.tfeirn.m"
                    {
#line 703 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                    }
#line 637 "mode_robdd.tfeirn.m"
                }
#line 633 "mode_robdd.tfeirn.m"
            }
#line 625 "mode_robdd.tfeirn.m"
            break;
#line 625 "mode_robdd.tfeirn.m"
          case (MR_Integer) 1:
#line 625 "mode_robdd.tfeirn.m"
            {
#line 625 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__V_11_11 = (MR_Integer) 1;

#line 627 "mode_robdd.tfeirn.m"
              {
#line 627 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__X_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_69_69));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 1) = ((MR_Box) (mode_robdd__tfeirn__V_68_68));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 2) = ((MR_Box) (mode_robdd__tfeirn__V_67_67));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 3) = ((MR_Box) (mode_robdd__tfeirn__V_66_66));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 4) = ((MR_Box) (mode_robdd__tfeirn__V_65_65));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 5) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 627 "mode_robdd.tfeirn.m"
              }
#line 625 "mode_robdd.tfeirn.m"
            }
#line 625 "mode_robdd.tfeirn.m"
            break;
#line 625 "mode_robdd.tfeirn.m"
        }
#line 625 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__X_2;
#line 625 "mode_robdd.tfeirn.m"
      }
#line 625 "mode_robdd.tfeirn.m"
      break;
#line 625 "mode_robdd.tfeirn.m"
    }
#line 622 "mode_robdd.tfeirn.m"
}

#line 717 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_120_116_114_97_99_116_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_102_114_111_109_95_114_111_98_100_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(
#line 717 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__Changed_6,
#line 717 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Robdd0_7,
#line 717 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__Robdd_8,
#line 717 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__EQVars0_9,
#line 717 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__EQVars_10)
#line 717 "mode_robdd.tfeirn.m"
{
#line 721 "mode_robdd.tfeirn.m"
  {
#line 721 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 721 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 721 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Changed0_12;
#line 721 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Robdd1_13;
#line 721 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 736 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RobddEQVars_11;

#line 722 "mode_robdd.tfeirn.m"
    {
#line 722 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__Robdd0_7, &mode_robdd__tfeirn__RobddEQVars_11);
    }
#line 736 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 727 "mode_robdd.tfeirn.m"
      {
#line 723 "mode_robdd.tfeirn.m"
        {
#line 723 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__RobddEQVars_11);
        }
#line 727 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 724 "mode_robdd.tfeirn.m"
          {
#line 724 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__Changed0_12 = (MR_Integer) 0;
#line 725 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__Robdd1_13 = mode_robdd__tfeirn__Robdd0_7;
#line 726 "mode_robdd.tfeirn.m"
            *mode_robdd__tfeirn__EQVars_10 = mode_robdd__tfeirn__EQVars0_9;
#line 724 "mode_robdd.tfeirn.m"
          }
#line 727 "mode_robdd.tfeirn.m"
        else
#line 728 "mode_robdd.tfeirn.m"
          {
#line 728 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__Changed0_12 = (MR_Integer) 1;
#line 732 "mode_robdd.tfeirn.m"
            {
#line 732 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__Robdd1_13 = mercury__robdd__squeeze_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__RobddEQVars_11, mode_robdd__tfeirn__Robdd0_7);
            }
#line 734 "mode_robdd.tfeirn.m"
            {
#line 734 "mode_robdd.tfeirn.m"
              *mode_robdd__tfeirn__EQVars_10 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__EQVars0_9, mode_robdd__tfeirn__RobddEQVars_11);
            }
#line 728 "mode_robdd.tfeirn.m"
          }
#line 727 "mode_robdd.tfeirn.m"
      }
#line 736 "mode_robdd.tfeirn.m"
    else
#line 737 "mode_robdd.tfeirn.m"
      {
#line 737 "mode_robdd.tfeirn.m"
        {
#line 737 "mode_robdd.tfeirn.m"
          *mode_robdd__tfeirn__EQVars_10 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
        }
#line 738 "mode_robdd.tfeirn.m"
        {
#line 738 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_15, *mode_robdd__tfeirn__EQVars_10, mode_robdd__tfeirn__EQVars0_9);
        }
#line 738 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 738 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__Changed0_12 = (MR_Integer) 0;
#line 738 "mode_robdd.tfeirn.m"
        else
#line 738 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__Changed0_12 = (MR_Integer) 1;
#line 739 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__Robdd1_13 = mode_robdd__tfeirn__Robdd0_7;
#line 737 "mode_robdd.tfeirn.m"
      }
#line 745 "mode_robdd.tfeirn.m"
    {
#line 745 "mode_robdd.tfeirn.m"
      *mode_robdd__tfeirn__Robdd_8 = mode_robdd__equiv_vars__remove_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__EQVars0_9, mode_robdd__tfeirn__Robdd1_13);
    }
#line 746 "mode_robdd.tfeirn.m"
    {
#line 746 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_15, *mode_robdd__tfeirn__Robdd_8, mode_robdd__tfeirn__Robdd1_13);
    }
#line 746 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 746 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 746 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = (MR_Integer) 1;
#line 746 "mode_robdd.tfeirn.m"
    else
#line 746 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = (MR_Integer) 0;
#line 746 "mode_robdd.tfeirn.m"
    {
#line 746 "mode_robdd.tfeirn.m"
      *mode_robdd__tfeirn__Changed_6 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_12, mode_robdd__tfeirn__V_14_14);
    }
#line 721 "mode_robdd.tfeirn.m"
  }
#line 717 "mode_robdd.tfeirn.m"
}

#line 748 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__RB_10)
#line 748 "mode_robdd.tfeirn.m"
{
#line 754 "mode_robdd.tfeirn.m"
  {
#line 754 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T1_11;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F1_12;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E1_13;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I1_14;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R1_15;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_20_20;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_21_21;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_22_22 = (MR_Integer) 0;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_23_23;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_24_24;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_25_25 = (MR_Integer) 0;
#line 752 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 755 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16;

#line 756 "mode_robdd.tfeirn.m"
    {
#line 756 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TA_4));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__FA_5));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 2) = ((MR_Box) (mode_robdd__tfeirn__EA_6));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 3) = ((MR_Box) (mode_robdd__tfeirn__IA_7));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_10));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 5) = ((MR_Box) (mode_robdd__tfeirn__V_25_25));
#line 756 "mode_robdd.tfeirn.m"
    }
#line 756 "mode_robdd.tfeirn.m"
    {
#line 756 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_23_23 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__V_24_24);
    }
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 0)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__F1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 1)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__E1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 2)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__I1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 3)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__R1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 4)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 5)));
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__TA_4, mode_robdd__tfeirn__T1_11);
    }
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_18_18 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__FA_5, mode_robdd__tfeirn__F1_12);
    }
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_19_19 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__E1_13);
    }
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_20_20 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__I1_14);
    }
#line 754 "mode_robdd.tfeirn.m"
    {
#line 754 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_21_21 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__RA_8, mode_robdd__tfeirn__R1_15);
    }
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_20_20));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_21_21));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_22_22));
#line 753 "mode_robdd.tfeirn.m"
    }
#line 754 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 754 "mode_robdd.tfeirn.m"
  }
#line 748 "mode_robdd.tfeirn.m"
}

#line 521 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Var_6,
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_18,
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_19)
#line 521 "mode_robdd.tfeirn.m"
{
#line 521 "mode_robdd.tfeirn.m"
  {
#line 521 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 521 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_20;

#line 521 "mode_robdd.tfeirn.m"
    {
#line 521 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__LambdaHeadVar__3_20 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_23, mode_robdd__tfeirn__LambdaHeadVar__1_18, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__LambdaHeadVar__2_19);
    }
#line 521 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__LambdaHeadVar__3_20;
#line 521 "mode_robdd.tfeirn.m"
  }
#line 521 "mode_robdd.tfeirn.m"
}

#line 772 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__772__1_4_f_0(
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_12,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_13,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_14)
#line 772 "mode_robdd.tfeirn.m"
{
#line 772 "mode_robdd.tfeirn.m"
  {
#line 772 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__4_15;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16;

#line 774 "mode_robdd.tfeirn.m"
    {
#line 774 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_16_16 = mercury__robdd__eq_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__LambdaHeadVar__1_12, mode_robdd__tfeirn__LambdaHeadVar__2_13);
    }
#line 774 "mode_robdd.tfeirn.m"
    {
#line 774 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__LambdaHeadVar__4_15 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__LambdaHeadVar__3_14, mode_robdd__tfeirn__V_16_16);
    }
#line 772 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__LambdaHeadVar__4_15;
#line 772 "mode_robdd.tfeirn.m"
  }
#line 772 "mode_robdd.tfeirn.m"
}

#line 289 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_70,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_71)
#line 289 "mode_robdd.tfeirn.m"
{
#line 289 "mode_robdd.tfeirn.m"
  {
#line 289 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 289 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_72;
#line 289 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_73_73;
#line 289 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_74_74;

#line 291 "mode_robdd.tfeirn.m"
    {
#line 291 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_74_74 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__1_70, mode_robdd__tfeirn__E_19);
    }
#line 291 "mode_robdd.tfeirn.m"
    {
#line 291 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_73_73 = mercury__robdd__not_var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_74_74);
    }
#line 290 "mode_robdd.tfeirn.m"
    {
#line 290 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__LambdaHeadVar__3_72 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__2_71, mode_robdd__tfeirn__V_73_73);
    }
#line 289 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__LambdaHeadVar__3_72;
#line 289 "mode_robdd.tfeirn.m"
  }
#line 289 "mode_robdd.tfeirn.m"
}

#line 287 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_64,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_65)
#line 287 "mode_robdd.tfeirn.m"
{
#line 287 "mode_robdd.tfeirn.m"
  {
#line 287 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 287 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_66;
#line 287 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_67_67;
#line 287 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_68_68;

#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_68_68 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__1_64, mode_robdd__tfeirn__E_19);
    }
#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_67_67 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_68_68);
    }
#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__LambdaHeadVar__3_66 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__2_65, mode_robdd__tfeirn__V_67_67);
    }
#line 287 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__LambdaHeadVar__3_66;
#line 287 "mode_robdd.tfeirn.m"
  }
#line 287 "mode_robdd.tfeirn.m"
}

#line 279 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_56,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_57)
#line 279 "mode_robdd.tfeirn.m"
{
#line 279 "mode_robdd.tfeirn.m"
  {
#line 279 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 279 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_58;
#line 279 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_59_59;
#line 279 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_60_60;

#line 281 "mode_robdd.tfeirn.m"
    {
#line 281 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_60_60 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__1_56, mode_robdd__tfeirn__E_19);
    }
#line 281 "mode_robdd.tfeirn.m"
    {
#line 281 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_59_59 = mercury__robdd__not_var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_60_60);
    }
#line 280 "mode_robdd.tfeirn.m"
    {
#line 280 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__LambdaHeadVar__3_58 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__2_57, mode_robdd__tfeirn__V_59_59);
    }
#line 279 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__LambdaHeadVar__3_58;
#line 279 "mode_robdd.tfeirn.m"
  }
#line 279 "mode_robdd.tfeirn.m"
}

#line 277 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_50,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_51)
#line 277 "mode_robdd.tfeirn.m"
{
#line 277 "mode_robdd.tfeirn.m"
  {
#line 277 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 277 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_52;
#line 277 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_53_53;
#line 277 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_54_54;

#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_54_54 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__1_50, mode_robdd__tfeirn__E_19);
    }
#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_53_53 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_54_54);
    }
#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__LambdaHeadVar__3_52 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__2_51, mode_robdd__tfeirn__V_53_53);
    }
#line 277 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__LambdaHeadVar__3_52;
#line 277 "mode_robdd.tfeirn.m"
  }
#line 277 "mode_robdd.tfeirn.m"
}

#line 219 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0(
#line 219 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
#line 219 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__HeadVar__1_1,
#line 219 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
#line 219 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_3)
#line 219 "mode_robdd.tfeirn.m"
{
#line 219 "mode_robdd.tfeirn.m"
  {
#line 219 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 219 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__CastX_21 = (MR_Integer) mode_robdd__tfeirn__HeadVar__2_2;
#line 219 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__CastY_22 = (MR_Integer) mode_robdd__tfeirn__HeadVar__3_3;

#line 219 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__CastX_21 == mode_robdd__tfeirn__CastY_22);
#line 219 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 6464 "mode_robdd.tfeirn.c"
      *mode_robdd__tfeirn__HeadVar__1_1 = (MR_Integer) 0;
#line 219 "mode_robdd.tfeirn.m"
    else
#line 219 "mode_robdd.tfeirn.m"
      {
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 0)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 1)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 2)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 3)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 4)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 5)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_16_16;
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_25_25;

#line 6501 "mode_robdd.tfeirn.c"
        {
#line 6503 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6505 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_24_24));
#line 6507 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 6509 "mode_robdd.tfeirn.c"
        }
#line 219 "mode_robdd.tfeirn.m"
        {
#line 219 "mode_robdd.tfeirn.m"
          mercury__sparse_bitset____Compare____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_25_25, &mode_robdd__tfeirn__V_16_16, (MR_Word) mode_robdd__tfeirn__V_4_4, (MR_Word) mode_robdd__tfeirn__V_10_10);
        }
#line 6516 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_16_16 == (MR_Integer) 0);
#line 219 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 219 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
          *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_16_16;
#line 219 "mode_robdd.tfeirn.m"
        else
#line 219 "mode_robdd.tfeirn.m"
          {
#line 219 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 219 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 219 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_29_29;

#line 6535 "mode_robdd.tfeirn.c"
            {
#line 6537 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6539 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_28));
#line 6541 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 6543 "mode_robdd.tfeirn.c"
            }
#line 219 "mode_robdd.tfeirn.m"
            {
#line 219 "mode_robdd.tfeirn.m"
              mercury__sparse_bitset____Compare____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_29_29, &mode_robdd__tfeirn__V_17_17, (MR_Word) mode_robdd__tfeirn__V_5_5, (MR_Word) mode_robdd__tfeirn__V_11_11);
            }
#line 6550 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_17_17 == (MR_Integer) 0);
#line 219 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 219 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
              *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_17_17;
#line 219 "mode_robdd.tfeirn.m"
            else
#line 219 "mode_robdd.tfeirn.m"
              {
#line 219 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_18_18;

#line 219 "mode_robdd.tfeirn.m"
                {
#line 219 "mode_robdd.tfeirn.m"
                  mercury__robdd____Compare____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_12_12);
                }
#line 6570 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_18_18 == (MR_Integer) 0);
#line 219 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 219 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
                  *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_18_18;
#line 219 "mode_robdd.tfeirn.m"
                else
#line 219 "mode_robdd.tfeirn.m"
                  {
#line 219 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_19_19;

#line 219 "mode_robdd.tfeirn.m"
                    {
#line 219 "mode_robdd.tfeirn.m"
                      mercury__robdd____Compare____imp_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__V_19_19, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_13_13);
                    }
#line 6590 "mode_robdd.tfeirn.c"
                    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_19_19 == (MR_Integer) 0);
#line 219 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 219 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
                      *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_19_19;
#line 219 "mode_robdd.tfeirn.m"
                    else
#line 219 "mode_robdd.tfeirn.m"
                      {
#line 219 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_20_20;

#line 219 "mode_robdd.tfeirn.m"
                        {
#line 219 "mode_robdd.tfeirn.m"
                          mercury__robdd____Compare____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__V_20_20, mode_robdd__tfeirn__V_8_8, mode_robdd__tfeirn__V_14_14);
                        }
#line 6610 "mode_robdd.tfeirn.c"
                        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_20_20 == (MR_Integer) 0);
#line 219 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 219 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
                          *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__V_20_20;
#line 219 "mode_robdd.tfeirn.m"
                        else
#line 219 "mode_robdd.tfeirn.m"
                          {
#line 219 "mode_robdd.tfeirn.m"
                            MR_Integer mode_robdd__tfeirn__V_39_39 = (MR_Integer) mode_robdd__tfeirn__V_9_9;
#line 219 "mode_robdd.tfeirn.m"
                            MR_Integer mode_robdd__tfeirn__V_40_40 = (MR_Integer) mode_robdd__tfeirn__V_15_15;

#line 219 "mode_robdd.tfeirn.m"
                            {
#line 219 "mode_robdd.tfeirn.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mode_robdd__tfeirn__HeadVar__1_1, mode_robdd__tfeirn__V_39_39, mode_robdd__tfeirn__V_40_40);
                            }
#line 219 "mode_robdd.tfeirn.m"
                          }
#line 219 "mode_robdd.tfeirn.m"
                      }
#line 219 "mode_robdd.tfeirn.m"
                  }
#line 219 "mode_robdd.tfeirn.m"
              }
#line 219 "mode_robdd.tfeirn.m"
          }
#line 219 "mode_robdd.tfeirn.m"
      }
#line 219 "mode_robdd.tfeirn.m"
  }
#line 219 "mode_robdd.tfeirn.m"
}

#line 219 "mode_robdd.tfeirn.m"
MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0(
#line 219 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 219 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 219 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 219 "mode_robdd.tfeirn.m"
{
#line 219 "mode_robdd.tfeirn.m"
  {
#line 219 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 219 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__CastX_15 = (MR_Integer) mode_robdd__tfeirn__HeadVar__1_1;
#line 219 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__CastY_16 = (MR_Integer) mode_robdd__tfeirn__HeadVar__2_2;

#line 219 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__CastX_15 == mode_robdd__tfeirn__CastY_16);
#line 219 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 219 "mode_robdd.tfeirn.m"
    else
#line 219 "mode_robdd.tfeirn.m"
      {
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_23_23;
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 219 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));

#line 6708 "mode_robdd.tfeirn.c"
        {
#line 6710 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6712 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 6714 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 6716 "mode_robdd.tfeirn.c"
        }
#line 6718 "mode_robdd.tfeirn.c"
        {
#line 6720 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__V_3_3, (MR_Word) mode_robdd__tfeirn__V_9_9);
        }
#line 219 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
          {
#line 6727 "mode_robdd.tfeirn.c"
            {
#line 6729 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__V_4_4, (MR_Word) mode_robdd__tfeirn__V_10_10);
            }
#line 219 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
              {
#line 6736 "mode_robdd.tfeirn.c"
                {
#line 6738 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_11_11);
                }
#line 219 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
                  {
#line 6745 "mode_robdd.tfeirn.c"
                    {
#line 6747 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____imp_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_12_12);
                    }
#line 219 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
                      {
#line 6754 "mode_robdd.tfeirn.c"
                        {
#line 6756 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_13_13);
                        }
#line 219 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 6761 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_8_8 == mode_robdd__tfeirn__V_14_14);
#line 219 "mode_robdd.tfeirn.m"
                      }
#line 219 "mode_robdd.tfeirn.m"
                  }
#line 219 "mode_robdd.tfeirn.m"
              }
#line 219 "mode_robdd.tfeirn.m"
          }
#line 219 "mode_robdd.tfeirn.m"
      }
#line 219 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 219 "mode_robdd.tfeirn.m"
  }
#line 219 "mode_robdd.tfeirn.m"
}

#line 28 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0(
#line 28 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__HeadVar__1_1,
#line 28 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
#line 28 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_3)
#line 28 "mode_robdd.tfeirn.m"
{
#line 28 "mode_robdd.tfeirn.m"
  {
#line 28 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 28 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_6_6 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[0];
#line 28 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Cast_HeadVar1_4 = mode_robdd__tfeirn__HeadVar__2_2;
#line 28 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Cast_HeadVar2_5 = mode_robdd__tfeirn__HeadVar__3_3;

#line 28 "mode_robdd.tfeirn.m"
    {
#line 28 "mode_robdd.tfeirn.m"
      mercury__builtin__compare_3_p_0(mode_robdd__tfeirn__TypeInfo_6_6, mode_robdd__tfeirn__HeadVar__1_1, ((MR_Box) (mode_robdd__tfeirn__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__tfeirn__Cast_HeadVar2_5)));
    }
#line 28 "mode_robdd.tfeirn.m"
  }
#line 28 "mode_robdd.tfeirn.m"
}

#line 28 "mode_robdd.tfeirn.m"
MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0(
#line 28 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 28 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 28 "mode_robdd.tfeirn.m"
{
#line 28 "mode_robdd.tfeirn.m"
  {
#line 28 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 28 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 28 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Cast_HeadVar1_3 = mode_robdd__tfeirn__HeadVar__1_1;
#line 28 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Cast_HeadVar2_4 = mode_robdd__tfeirn__HeadVar__2_2;

#line 28 "mode_robdd.tfeirn.m"
    {
#line 28 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(mode_robdd__tfeirn__TypeCtorInfo_5_5, mode_robdd__tfeirn__Cast_HeadVar1_3, mode_robdd__tfeirn__Cast_HeadVar2_4);
    }
#line 28 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 28 "mode_robdd.tfeirn.m"
  }
#line 28 "mode_robdd.tfeirn.m"
}

#line 748 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__x_2_f_0(
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26,
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 748 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__RB_10)
#line 748 "mode_robdd.tfeirn.m"
{
#line 754 "mode_robdd.tfeirn.m"
  {
#line 754 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_28_28;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T1_11;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F1_12;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E1_13;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I1_14;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R1_15;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_20_20;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_21_21;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_22_22;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_23_23;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_24_24;
#line 754 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_25_25;
#line 752 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 755 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16;
#line 753 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_17_17;
#line 753 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_18_18;

#line 6912 "mode_robdd.tfeirn.c"
    {
#line 6914 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6916 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_27_27));
#line 6918 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_26));
#line 6920 "mode_robdd.tfeirn.c"
    }
#line 754 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_22_22 = (MR_Integer) 0;
#line 756 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_25_25 = (MR_Integer) 0;
#line 756 "mode_robdd.tfeirn.m"
    {
#line 756 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TA_4));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__FA_5));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 2) = ((MR_Box) (mode_robdd__tfeirn__EA_6));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 3) = ((MR_Box) (mode_robdd__tfeirn__IA_7));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_10));
#line 756 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_24_24, 5) = ((MR_Box) (mode_robdd__tfeirn__V_25_25));
#line 756 "mode_robdd.tfeirn.m"
    }
#line 756 "mode_robdd.tfeirn.m"
    {
#line 756 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_23_23 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__V_24_24);
    }
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 0)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__F1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 1)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__E1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 2)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__I1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 3)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__R1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 4)));
#line 755 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_23_23, (MR_Integer) 5)));
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_17_17 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__TA_4, (MR_Word) mode_robdd__tfeirn__T1_11);
    }
#line 753 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_17_17 = (MR_Word) mode_robdd__tfeirn__conv0_V_17_17;
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_18_18 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__FA_5, (MR_Word) mode_robdd__tfeirn__F1_12);
    }
#line 753 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_18_18 = (MR_Word) mode_robdd__tfeirn__conv1_V_18_18;
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_19_19 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__E1_13);
    }
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_20_20 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__I1_14);
    }
#line 754 "mode_robdd.tfeirn.m"
    {
#line 754 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_21_21 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__RA_8, mode_robdd__tfeirn__R1_15);
    }
#line 753 "mode_robdd.tfeirn.m"
    {
#line 753 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_20_20));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_21_21));
#line 753 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__V_22_22));
#line 753 "mode_robdd.tfeirn.m"
    }
#line 754 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 754 "mode_robdd.tfeirn.m"
  }
#line 748 "mode_robdd.tfeirn.m"
}

#line 622 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__normalise_1_f_0(
#line 622 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_57,
#line 622 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
#line 622 "mode_robdd.tfeirn.m"
{
#line 625 "mode_robdd.tfeirn.m"
  while (MR_TRUE)
#line 625 "mode_robdd.tfeirn.m"
    {
#line 625 "mode_robdd.tfeirn.m"
      /* tailcall optimized into a loop */
#line 625 "mode_robdd.tfeirn.m"
      {
#line 625 "mode_robdd.tfeirn.m"
        MR_bool mode_robdd__tfeirn__succeeded;
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__X_2;
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 625 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));

#line 625 "mode_robdd.tfeirn.m"
#line 625 "mode_robdd.tfeirn.m"
        switch (mode_robdd__tfeirn__V_64_64) {
#line 625 "mode_robdd.tfeirn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 625 "mode_robdd.tfeirn.m"
          case (MR_Integer) 0:
#line 633 "mode_robdd.tfeirn.m"
            {
#line 631 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__TypeCtorInfo_58_58 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 631 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__TypeInfo_59_59;
#line 631 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__V_50_50;
#line 631 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__conv0_V_50_50;

#line 7067 "mode_robdd.tfeirn.c"
              {
#line 7069 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__TypeInfo_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7071 "mode_robdd.tfeirn.c"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_59_59, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_58_58));
#line 7073 "mode_robdd.tfeirn.c"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_59_59, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
#line 7075 "mode_robdd.tfeirn.c"
              }
#line 631 "mode_robdd.tfeirn.m"
              {
#line 631 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__conv0_V_50_50 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_59_59, (MR_Word) mode_robdd__tfeirn__V_69_69, (MR_Word) mode_robdd__tfeirn__V_68_68);
              }
#line 631 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_50_50 = (MR_Word) mode_robdd__tfeirn__conv0_V_50_50;
#line 631 "mode_robdd.tfeirn.m"
              {
#line 631 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_59_59, (MR_Word) mode_robdd__tfeirn__V_50_50);
              }
#line 631 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 633 "mode_robdd.tfeirn.m"
              if (mode_robdd__tfeirn__succeeded)
#line 632 "mode_robdd.tfeirn.m"
                {
#line 632 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                }
#line 633 "mode_robdd.tfeirn.m"
              else
#line 637 "mode_robdd.tfeirn.m"
                {
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed0_18;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__TrueVars1_19;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__FalseVars1_20;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__EQVars1_21;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed1_22;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__TrueVars2_23;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__FalseVars2_24;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__ImpVars1_25;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed2_26;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Robdd1_27;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed3_28;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_51_51;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed0_79;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__Changed1_80;
#line 637 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__DCG_1_81;
#line 702 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__NewTrueVars_29;
#line 702 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__NewFalseVars_30;
#line 652 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_52_52;
#line 652 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_53_53;

#line 713 "mode_robdd.tfeirn.m"
                  {
#line 713 "mode_robdd.tfeirn.m"
                    mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed0_79, mode_robdd__tfeirn__V_69_69, &mode_robdd__tfeirn__TrueVars1_19, mode_robdd__tfeirn__V_67_67, &mode_robdd__tfeirn__DCG_1_81);
                  }
#line 714 "mode_robdd.tfeirn.m"
                  {
#line 714 "mode_robdd.tfeirn.m"
                    mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed1_80, mode_robdd__tfeirn__V_68_68, &mode_robdd__tfeirn__FalseVars1_20, mode_robdd__tfeirn__DCG_1_81, &mode_robdd__tfeirn__EQVars1_21);
                  }
#line 715 "mode_robdd.tfeirn.m"
                  {
#line 715 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed0_18 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_79, mode_robdd__tfeirn__Changed1_80);
                  }
#line 640 "mode_robdd.tfeirn.m"
                  {
#line 640 "mode_robdd.tfeirn.m"
                    mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed1_22, mode_robdd__tfeirn__TrueVars1_19, &mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__FalseVars1_20, &mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__V_66_66, &mode_robdd__tfeirn__ImpVars1_25);
                  }
#line 643 "mode_robdd.tfeirn.m"
                  {
#line 643 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed2_26 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_18, mode_robdd__tfeirn__Changed1_22);
                  }
#line 646 "mode_robdd.tfeirn.m"
                  {
#line 646 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Robdd1_27 = mercury__robdd__restrict_true_false_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__V_65_65);
                  }
#line 648 "mode_robdd.tfeirn.m"
                  {
#line 648 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, mode_robdd__tfeirn__V_65_65);
                  }
#line 648 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 648 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 648 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_51_51 = (MR_Integer) 1;
#line 648 "mode_robdd.tfeirn.m"
                  else
#line 648 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_51_51 = (MR_Integer) 0;
#line 648 "mode_robdd.tfeirn.m"
                  {
#line 648 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Changed3_28 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed2_26, mode_robdd__tfeirn__V_51_51);
                  }
#line 652 "mode_robdd.tfeirn.m"
                  {
#line 652 "mode_robdd.tfeirn.m"
                    mercury__robdd__definite_vars_3_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, &mode_robdd__tfeirn__V_52_52, &mode_robdd__tfeirn__V_53_53);
                  }
#line 653 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 653 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 653 "mode_robdd.tfeirn.m"
                    {
#line 653 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__NewTrueVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_52_52, (MR_Integer) 0)));
#line 653 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 653 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 653 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__NewFalseVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_53_53, (MR_Integer) 0)));
#line 653 "mode_robdd.tfeirn.m"
                    }
#line 702 "mode_robdd.tfeirn.m"
                  if (mode_robdd__tfeirn__succeeded)
#line 666 "mode_robdd.tfeirn.m"
                    {
#line 666 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__Changed4_31;
#line 666 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TrueVars_32;
#line 666 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__FalseVars_33;
#line 656 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 656 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__TypeInfo_61_61;
#line 699 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__Changed5_34;
#line 699 "mode_robdd.tfeirn.m"
                      MR_Word mode_robdd__tfeirn__ImpVars2_35;

#line 7231 "mode_robdd.tfeirn.c"
                      {
#line 7233 "mode_robdd.tfeirn.c"
                        mode_robdd__tfeirn__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7235 "mode_robdd.tfeirn.c"
                        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_60_60));
#line 7237 "mode_robdd.tfeirn.c"
                        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
#line 7239 "mode_robdd.tfeirn.c"
                      }
#line 656 "mode_robdd.tfeirn.m"
                      {
#line 656 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_61_61, (MR_Word) mode_robdd__tfeirn__NewTrueVars_29);
                      }
#line 656 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 657 "mode_robdd.tfeirn.m"
                        {
#line 657 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_61_61, (MR_Word) mode_robdd__tfeirn__NewFalseVars_30);
                        }
#line 662 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 659 "mode_robdd.tfeirn.m"
                        {
#line 659 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__Changed4_31 = mode_robdd__tfeirn__Changed3_28;
#line 660 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__TrueVars_32 = mode_robdd__tfeirn__TrueVars2_23;
#line 661 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__FalseVars_33 = mode_robdd__tfeirn__FalseVars2_24;
#line 659 "mode_robdd.tfeirn.m"
                        }
#line 662 "mode_robdd.tfeirn.m"
                      else
#line 663 "mode_robdd.tfeirn.m"
                        {
#line 663 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeCtorInfo_62_62;
#line 663 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__TypeInfo_63_63;
#line 664 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__conv1_TrueVars_32;
#line 665 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__conv2_FalseVars_33;

#line 663 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__Changed4_31 = (MR_Integer) 1;
#line 7280 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeCtorInfo_62_62 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7282 "mode_robdd.tfeirn.c"
                          {
#line 7284 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7286 "mode_robdd.tfeirn.c"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_63_63, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_62_62));
#line 7288 "mode_robdd.tfeirn.c"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_63_63, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
#line 7290 "mode_robdd.tfeirn.c"
                          }
#line 664 "mode_robdd.tfeirn.m"
                          {
#line 664 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__conv1_TrueVars_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_63_63, (MR_Word) mode_robdd__tfeirn__TrueVars2_23, (MR_Word) mode_robdd__tfeirn__NewTrueVars_29);
                          }
#line 664 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__TrueVars_32 = (MR_Word) mode_robdd__tfeirn__conv1_TrueVars_32;
#line 665 "mode_robdd.tfeirn.m"
                          {
#line 665 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__conv2_FalseVars_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_63_63, (MR_Word) mode_robdd__tfeirn__FalseVars2_24, (MR_Word) mode_robdd__tfeirn__NewFalseVars_30);
                          }
#line 665 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__FalseVars_33 = (MR_Word) mode_robdd__tfeirn__conv2_FalseVars_33;
#line 663 "mode_robdd.tfeirn.m"
                        }
#line 670 "mode_robdd.tfeirn.m"
                      {
#line 670 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars1_21, &mode_robdd__tfeirn__Changed5_34, mode_robdd__tfeirn__ImpVars1_25, &mode_robdd__tfeirn__ImpVars2_35);
                      }
#line 699 "mode_robdd.tfeirn.m"
                      if (mode_robdd__tfeirn__succeeded)
#line 675 "mode_robdd.tfeirn.m"
                        {
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed6_36;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__EQVars2_37;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__ImpVars3_38;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed7_39;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed8_40;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd2_41;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__EQVars_42;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed9_43;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed10_44;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd_45;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__ImpVars_46;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed_47;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_54_54;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Changed0_88;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__Robdd1_89;
#line 675 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__V_90_90;
#line 736 "mode_robdd.tfeirn.m"
                          MR_Word mode_robdd__tfeirn__RobddEQVars_87;

#line 673 "mode_robdd.tfeirn.m"
                          {
#line 673 "mode_robdd.tfeirn.m"
                            mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed6_36, mode_robdd__tfeirn__EQVars1_21, &mode_robdd__tfeirn__EQVars2_37, mode_robdd__tfeirn__ImpVars2_35, &mode_robdd__tfeirn__ImpVars3_38);
                          }
#line 676 "mode_robdd.tfeirn.m"
                          {
#line 676 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_54_54 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed4_31, mode_robdd__tfeirn__Changed5_34);
                          }
#line 677 "mode_robdd.tfeirn.m"
                          {
#line 677 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed7_39 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__V_54_54, mode_robdd__tfeirn__Changed6_36);
                          }
#line 722 "mode_robdd.tfeirn.m"
                          {
#line 722 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, &mode_robdd__tfeirn__RobddEQVars_87);
                          }
#line 736 "mode_robdd.tfeirn.m"
                          if (mode_robdd__tfeirn__succeeded)
#line 727 "mode_robdd.tfeirn.m"
                            {
#line 723 "mode_robdd.tfeirn.m"
                              {
#line 723 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__RobddEQVars_87);
                              }
#line 727 "mode_robdd.tfeirn.m"
                              if (mode_robdd__tfeirn__succeeded)
#line 724 "mode_robdd.tfeirn.m"
                                {
#line 724 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Changed0_88 = (MR_Integer) 0;
#line 725 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Robdd1_89 = mode_robdd__tfeirn__Robdd1_27;
#line 726 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__EQVars_42 = mode_robdd__tfeirn__EQVars2_37;
#line 724 "mode_robdd.tfeirn.m"
                                }
#line 727 "mode_robdd.tfeirn.m"
                              else
#line 728 "mode_robdd.tfeirn.m"
                                {
#line 728 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__Changed0_88 = (MR_Integer) 1;
#line 732 "mode_robdd.tfeirn.m"
                                  {
#line 732 "mode_robdd.tfeirn.m"
                                    mode_robdd__tfeirn__Robdd1_89 = mercury__robdd__squeeze_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__RobddEQVars_87, mode_robdd__tfeirn__Robdd1_27);
                                  }
#line 734 "mode_robdd.tfeirn.m"
                                  {
#line 734 "mode_robdd.tfeirn.m"
                                    mode_robdd__tfeirn__EQVars_42 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars2_37, mode_robdd__tfeirn__RobddEQVars_87);
                                  }
#line 728 "mode_robdd.tfeirn.m"
                                }
#line 727 "mode_robdd.tfeirn.m"
                            }
#line 736 "mode_robdd.tfeirn.m"
                          else
#line 737 "mode_robdd.tfeirn.m"
                            {
#line 737 "mode_robdd.tfeirn.m"
                              {
#line 737 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__EQVars_42 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                              }
#line 738 "mode_robdd.tfeirn.m"
                              {
#line 738 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars_42, mode_robdd__tfeirn__EQVars2_37);
                              }
#line 738 "mode_robdd.tfeirn.m"
                              if (mode_robdd__tfeirn__succeeded)
#line 738 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__Changed0_88 = (MR_Integer) 0;
#line 738 "mode_robdd.tfeirn.m"
                              else
#line 738 "mode_robdd.tfeirn.m"
                                mode_robdd__tfeirn__Changed0_88 = (MR_Integer) 1;
#line 739 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__Robdd1_89 = mode_robdd__tfeirn__Robdd1_27;
#line 737 "mode_robdd.tfeirn.m"
                            }
#line 745 "mode_robdd.tfeirn.m"
                          {
#line 745 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Robdd2_41 = mode_robdd__equiv_vars__remove_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars2_37, mode_robdd__tfeirn__Robdd1_89);
                          }
#line 746 "mode_robdd.tfeirn.m"
                          {
#line 746 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd2_41, mode_robdd__tfeirn__Robdd1_89);
                          }
#line 746 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 746 "mode_robdd.tfeirn.m"
                          if (mode_robdd__tfeirn__succeeded)
#line 746 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_90_90 = (MR_Integer) 1;
#line 746 "mode_robdd.tfeirn.m"
                          else
#line 746 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__V_90_90 = (MR_Integer) 0;
#line 746 "mode_robdd.tfeirn.m"
                          {
#line 746 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed8_40 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_88, mode_robdd__tfeirn__V_90_90);
                          }
#line 682 "mode_robdd.tfeirn.m"
                          {
#line 682 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed9_43 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed7_39, mode_robdd__tfeirn__Changed8_40);
                          }
#line 685 "mode_robdd.tfeirn.m"
                          {
#line 685 "mode_robdd.tfeirn.m"
                            mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed10_44, mode_robdd__tfeirn__Robdd2_41, &mode_robdd__tfeirn__Robdd_45, mode_robdd__tfeirn__ImpVars3_38, &mode_robdd__tfeirn__ImpVars_46);
                          }
#line 687 "mode_robdd.tfeirn.m"
                          {
#line 687 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__Changed_47 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed9_43, mode_robdd__tfeirn__Changed10_44);
                          }
#line 694 "mode_robdd.tfeirn.m"
#line 694 "mode_robdd.tfeirn.m"
                          switch (mode_robdd__tfeirn__Changed_47) {
#line 694 "mode_robdd.tfeirn.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 694 "mode_robdd.tfeirn.m"
                            case (MR_Integer) 0:
#line 695 "mode_robdd.tfeirn.m"
                              {
#line 695 "mode_robdd.tfeirn.m"
                                MR_Word mode_robdd__tfeirn__V_55_55 = (MR_Integer) 1;

#line 696 "mode_robdd.tfeirn.m"
                                {
#line 696 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__X_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_32));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_33));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_42));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_46));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_45));
#line 696 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 5) = ((MR_Box) (mode_robdd__tfeirn__V_55_55));
#line 696 "mode_robdd.tfeirn.m"
                                }
#line 695 "mode_robdd.tfeirn.m"
                              }
#line 694 "mode_robdd.tfeirn.m"
                              break;
#line 694 "mode_robdd.tfeirn.m"
                            case (MR_Integer) 1:
#line 690 "mode_robdd.tfeirn.m"
                              {
#line 690 "mode_robdd.tfeirn.m"
                                MR_Word mode_robdd__tfeirn__X0_48;
#line 690 "mode_robdd.tfeirn.m"
                                MR_Word mode_robdd__tfeirn__V_56_56 = (MR_Integer) 0;

#line 691 "mode_robdd.tfeirn.m"
                                {
#line 691 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__X0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_32));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_33));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_42));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_46));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_45));
#line 691 "mode_robdd.tfeirn.m"
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 5) = ((MR_Box) (mode_robdd__tfeirn__V_56_56));
#line 691 "mode_robdd.tfeirn.m"
                                }
#line 693 "mode_robdd.tfeirn.m"
                                /* direct tailcall eliminated */
#line 693 "mode_robdd.tfeirn.m"
                                {
#line 693 "mode_robdd.tfeirn.m"
                                  MR_Word mode_robdd__tfeirn__HeadVar__1__tmp_copy_1 = mode_robdd__tfeirn__X0_48;

#line 693 "mode_robdd.tfeirn.m"
                                  mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__HeadVar__1__tmp_copy_1;
#line 693 "mode_robdd.tfeirn.m"
                                }
#line 693 "mode_robdd.tfeirn.m"
                                continue;
#line 690 "mode_robdd.tfeirn.m"
                              }
#line 694 "mode_robdd.tfeirn.m"
                              break;
#line 694 "mode_robdd.tfeirn.m"
                          }
#line 675 "mode_robdd.tfeirn.m"
                        }
#line 699 "mode_robdd.tfeirn.m"
                      else
#line 700 "mode_robdd.tfeirn.m"
                        {
#line 700 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                        }
#line 666 "mode_robdd.tfeirn.m"
                    }
#line 702 "mode_robdd.tfeirn.m"
                  else
#line 703 "mode_robdd.tfeirn.m"
                    {
#line 703 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                    }
#line 637 "mode_robdd.tfeirn.m"
                }
#line 633 "mode_robdd.tfeirn.m"
            }
#line 625 "mode_robdd.tfeirn.m"
            break;
#line 625 "mode_robdd.tfeirn.m"
          case (MR_Integer) 1:
#line 625 "mode_robdd.tfeirn.m"
            {
#line 625 "mode_robdd.tfeirn.m"
              MR_Word mode_robdd__tfeirn__V_11_11 = (MR_Integer) 1;

#line 627 "mode_robdd.tfeirn.m"
              {
#line 627 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__X_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_69_69));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 1) = ((MR_Box) (mode_robdd__tfeirn__V_68_68));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 2) = ((MR_Box) (mode_robdd__tfeirn__V_67_67));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 3) = ((MR_Box) (mode_robdd__tfeirn__V_66_66));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 4) = ((MR_Box) (mode_robdd__tfeirn__V_65_65));
#line 627 "mode_robdd.tfeirn.m"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 5) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 627 "mode_robdd.tfeirn.m"
              }
#line 625 "mode_robdd.tfeirn.m"
            }
#line 625 "mode_robdd.tfeirn.m"
            break;
#line 625 "mode_robdd.tfeirn.m"
        }
#line 625 "mode_robdd.tfeirn.m"
        return mode_robdd__tfeirn__X_2;
#line 625 "mode_robdd.tfeirn.m"
      }
#line 625 "mode_robdd.tfeirn.m"
      break;
#line 625 "mode_robdd.tfeirn.m"
    }
#line 622 "mode_robdd.tfeirn.m"
}

#line 598 "mode_robdd.tfeirn.m"
static MR_bool MR_CALL 
mode_robdd__tfeirn__minimal_model_2_4_p_0(
#line 598 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 598 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 598 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 598 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 598 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8)
#line 598 "mode_robdd.tfeirn.m"
{
#line 613 "mode_robdd.tfeirn.m"
  {
#line 613 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 613 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_21;
#line 613 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9;
#line 613 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Vars_10;
#line 602 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 602 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
#line 602 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 602 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__conv1_V_9;
#line 602 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_Vars_10;

#line 7661 "mode_robdd.tfeirn.c"
    {
#line 7663 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7665 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 7667 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7669 "mode_robdd.tfeirn.c"
    }
#line 7671 "mode_robdd.tfeirn.c"
    {
#line 7673 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7675 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20));
#line 7677 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7679 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_19_19));
#line 7681 "mode_robdd.tfeirn.c"
    }
#line 602 "mode_robdd.tfeirn.m"
    {
#line 602 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_21, &mode_robdd__tfeirn__conv1_V_9, (MR_Word) mode_robdd__tfeirn__Vars0_5, &mode_robdd__tfeirn__conv0_Vars_10);
    }
#line 602 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 602 "mode_robdd.tfeirn.m"
      {
#line 602 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_9 = ((MR_Word) mode_robdd__tfeirn__conv1_V_9);
#line 602 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__Vars_10 = (MR_Word) mode_robdd__tfeirn__conv0_Vars_10;
#line 602 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 602 "mode_robdd.tfeirn.m"
      }
#line 613 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 603 "mode_robdd.tfeirn.m"
      {
#line 603 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__X1_11;
#line 604 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_15_15;
#line 604 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_32_32;
#line 183 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_38_38;
#line 183 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_39_39;
#line 183 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_40_40;
#line 183 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_41_41;
#line 183 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_42_42;

#line 603 "mode_robdd.tfeirn.m"
        {
#line 603 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__X1_11 = mode_robdd__tfeirn__var_restrict_false_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_9, mode_robdd__tfeirn__X0_6);
        }
#line 183 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 4)));
#line 183 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 5)));
#line 604 "mode_robdd.tfeirn.m"
        {
#line 604 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_32_32 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17);
        }
#line 604 "mode_robdd.tfeirn.m"
        {
#line 604 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_15_15, mode_robdd__tfeirn__V_32_32);
        }
#line 604 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 607 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 605 "mode_robdd.tfeirn.m"
          {
#line 605 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FalseVars0_12;

#line 605 "mode_robdd.tfeirn.m"
            {
#line 605 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X1_11, mode_robdd__tfeirn__TrueVars_7, &mode_robdd__tfeirn__FalseVars0_12);
            }
#line 605 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 605 "mode_robdd.tfeirn.m"
              {
#line 606 "mode_robdd.tfeirn.m"
                {
#line 606 "mode_robdd.tfeirn.m"
                  *mode_robdd__tfeirn__FalseVars_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__TypeClassInfo_for_enum_21, mode_robdd__tfeirn__FalseVars0_12, mode_robdd__tfeirn__V_9);
                }
#line 606 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 605 "mode_robdd.tfeirn.m"
              }
#line 605 "mode_robdd.tfeirn.m"
          }
#line 607 "mode_robdd.tfeirn.m"
        else
#line 608 "mode_robdd.tfeirn.m"
          {
#line 608 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X2_13;
#line 608 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TrueVars0_14;
#line 609 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 609 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_33_33;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_43_43;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_44_44;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_45_45;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_46_46;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_47_47;

#line 608 "mode_robdd.tfeirn.m"
            {
#line 608 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X2_13 = mode_robdd__tfeirn__var_restrict_true_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_9, mode_robdd__tfeirn__X0_6);
            }
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 4)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 5)));
#line 609 "mode_robdd.tfeirn.m"
            {
#line 609 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_33_33 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17);
            }
#line 609 "mode_robdd.tfeirn.m"
            {
#line 609 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_16_16, mode_robdd__tfeirn__V_33_33);
            }
#line 609 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 608 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 608 "mode_robdd.tfeirn.m"
              {
#line 610 "mode_robdd.tfeirn.m"
                {
#line 610 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X2_13, &mode_robdd__tfeirn__TrueVars0_14, mode_robdd__tfeirn__FalseVars_8);
                }
#line 608 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 608 "mode_robdd.tfeirn.m"
                  {
#line 611 "mode_robdd.tfeirn.m"
                    {
#line 611 "mode_robdd.tfeirn.m"
                      *mode_robdd__tfeirn__TrueVars_7 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__TypeClassInfo_for_enum_21, mode_robdd__tfeirn__TrueVars0_14, mode_robdd__tfeirn__V_9);
                    }
#line 611 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 608 "mode_robdd.tfeirn.m"
                  }
#line 608 "mode_robdd.tfeirn.m"
              }
#line 608 "mode_robdd.tfeirn.m"
          }
#line 603 "mode_robdd.tfeirn.m"
      }
#line 613 "mode_robdd.tfeirn.m"
    else
#line 614 "mode_robdd.tfeirn.m"
      {
#line 614 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 614 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_31_31;
#line 614 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv2_TrueVars_7;
#line 615 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv3_FalseVars_8;

#line 7870 "mode_robdd.tfeirn.c"
        {
#line 7872 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7874 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_30_30));
#line 7876 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7878 "mode_robdd.tfeirn.c"
        }
#line 614 "mode_robdd.tfeirn.m"
        {
#line 614 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv2_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
        }
#line 614 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__TrueVars_7 = (MR_Word) mode_robdd__tfeirn__conv2_TrueVars_7;
#line 615 "mode_robdd.tfeirn.m"
        {
#line 615 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv3_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
        }
#line 615 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__FalseVars_8 = (MR_Word) mode_robdd__tfeirn__conv3_FalseVars_8;
#line 614 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 614 "mode_robdd.tfeirn.m"
      }
#line 613 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 613 "mode_robdd.tfeirn.m"
  }
#line 598 "mode_robdd.tfeirn.m"
}

#line 568 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_1(
#line 568 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg)
#line 568 "mode_robdd.tfeirn.m"
{
#line 568 "mode_robdd.tfeirn.m"
  {
#line 568 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

#line 571 "mode_robdd.tfeirn.m"
    {
#line 571 "mode_robdd.tfeirn.m"
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8) = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9);
    }
#line 571 "mode_robdd.tfeirn.m"
    {
#line 571 "mode_robdd.tfeirn.m"
      ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
    }
#line 568 "mode_robdd.tfeirn.m"
  }
#line 568 "mode_robdd.tfeirn.m"
}

#line 573 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_2(
#line 573 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg)
#line 573 "mode_robdd.tfeirn.m"
{
#line 573 "mode_robdd.tfeirn.m"
  {
#line 573 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

#line 576 "mode_robdd.tfeirn.m"
    {
#line 576 "mode_robdd.tfeirn.m"
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7) = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9);
    }
#line 576 "mode_robdd.tfeirn.m"
    {
#line 576 "mode_robdd.tfeirn.m"
      ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
    }
#line 573 "mode_robdd.tfeirn.m"
  }
#line 573 "mode_robdd.tfeirn.m"
}

#line 562 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0(
#line 562 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
#line 562 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 562 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 562 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 562 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
#line 562 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__cont,
#line 562 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__cont_env_ptr)
#line 562 "mode_robdd.tfeirn.m"
{
#line 562 "mode_robdd.tfeirn.m"
  {
#line 562 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s mode_robdd__tfeirn__env;
#line 562 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = &mode_robdd__tfeirn__env;

#line 562 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17 = mode_robdd__tfeirn__TypeInfo_for_T_17;
#line 562 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7 = mode_robdd__tfeirn__TrueVars_7;
#line 562 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8 = mode_robdd__tfeirn__FalseVars_8;
#line 562 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont = mode_robdd__tfeirn__cont;
#line 562 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr = mode_robdd__tfeirn__cont_env_ptr;
#line 578 "mode_robdd.tfeirn.m"
    {
#line 578 "mode_robdd.tfeirn.m"
      MR_bool mode_robdd__tfeirn__succeeded;
#line 578 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__Vars_10;
#line 566 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 566 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
#line 566 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 566 "mode_robdd.tfeirn.m"
      MR_Box mode_robdd__tfeirn__conv1_V_9;
#line 566 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv0_Vars_10;

#line 8012 "mode_robdd.tfeirn.c"
      {
#line 8014 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8016 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 8018 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 8020 "mode_robdd.tfeirn.c"
      }
#line 8022 "mode_robdd.tfeirn.c"
      {
#line 8024 "mode_robdd.tfeirn.c"
        MR_Word base;
#line 8026 "mode_robdd.tfeirn.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8028 "mode_robdd.tfeirn.c"
        (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21 = base;
#line 8030 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20));
#line 8032 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 8034 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_19_19));
#line 8036 "mode_robdd.tfeirn.c"
      }
#line 566 "mode_robdd.tfeirn.m"
      {
#line 566 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, &mode_robdd__tfeirn__conv1_V_9, (MR_Word) mode_robdd__tfeirn__Vars0_5, &mode_robdd__tfeirn__conv0_Vars_10);
      }
#line 566 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 566 "mode_robdd.tfeirn.m"
        {
#line 566 "mode_robdd.tfeirn.m"
          (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9 = ((MR_Word) mode_robdd__tfeirn__conv1_V_9);
#line 566 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__Vars_10 = (MR_Word) mode_robdd__tfeirn__conv0_Vars_10;
#line 566 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 566 "mode_robdd.tfeirn.m"
        }
#line 578 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 572 "mode_robdd.tfeirn.m"
        {
#line 568 "mode_robdd.tfeirn.m"
          {
#line 568 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X_11;
#line 569 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 569 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_32_32;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_38_38;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_39_39;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_40_40;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_41_41;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_42_42;

#line 568 "mode_robdd.tfeirn.m"
            {
#line 568 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__var_restrict_false_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9, mode_robdd__tfeirn__X0_6);
            }
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 4)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 5)));
#line 569 "mode_robdd.tfeirn.m"
            {
#line 569 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_32_32 = mercury__robdd__zero_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17);
            }
#line 569 "mode_robdd.tfeirn.m"
            {
#line 569 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__V_15_15, mode_robdd__tfeirn__V_32_32);
            }
#line 569 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 568 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 570 "mode_robdd.tfeirn.m"
              {
#line 570 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__labelling_2_4_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X_11, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12, mode_robdd__tfeirn__labelling_2_4_p_0_1, mode_robdd__tfeirn__env_ptr);
              }
#line 568 "mode_robdd.tfeirn.m"
          }
#line 573 "mode_robdd.tfeirn.m"
          {
#line 573 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X_16;
#line 574 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 574 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_33_33;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_43_43;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_44_44;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_45_45;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_46_46;
#line 183 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_47_47;

#line 573 "mode_robdd.tfeirn.m"
            {
#line 573 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__var_restrict_true_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9, mode_robdd__tfeirn__X0_6);
            }
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 4)));
#line 183 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 5)));
#line 574 "mode_robdd.tfeirn.m"
            {
#line 574 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_33_33 = mercury__robdd__zero_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17);
            }
#line 574 "mode_robdd.tfeirn.m"
            {
#line 574 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__V_14_14, mode_robdd__tfeirn__V_33_33);
            }
#line 574 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 573 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 575 "mode_robdd.tfeirn.m"
              {
#line 575 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__labelling_2_4_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X_16, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8, mode_robdd__tfeirn__labelling_2_4_p_0_2, mode_robdd__tfeirn__env_ptr);
              }
#line 573 "mode_robdd.tfeirn.m"
          }
#line 572 "mode_robdd.tfeirn.m"
        }
#line 578 "mode_robdd.tfeirn.m"
      else
#line 579 "mode_robdd.tfeirn.m"
        {
#line 579 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 579 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_31_31;
#line 579 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__conv2_TrueVars_7;
#line 580 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__conv3_FalseVars_8;

#line 8188 "mode_robdd.tfeirn.c"
          {
#line 8190 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8192 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_30_30));
#line 8194 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 8196 "mode_robdd.tfeirn.c"
          }
#line 579 "mode_robdd.tfeirn.m"
          {
#line 579 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__conv2_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
          }
#line 579 "mode_robdd.tfeirn.m"
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7) = (MR_Word) mode_robdd__tfeirn__conv2_TrueVars_7;
#line 580 "mode_robdd.tfeirn.m"
          {
#line 580 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__conv3_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
          }
#line 580 "mode_robdd.tfeirn.m"
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8) = (MR_Word) mode_robdd__tfeirn__conv3_FalseVars_8;
#line 579 "mode_robdd.tfeirn.m"
          {
#line 579 "mode_robdd.tfeirn.m"
            ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
          }
#line 579 "mode_robdd.tfeirn.m"
        }
#line 578 "mode_robdd.tfeirn.m"
    }
#line 562 "mode_robdd.tfeirn.m"
  }
#line 562 "mode_robdd.tfeirn.m"
}

#line 190 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__robdd_to_mode_robdd_1_f_0(
#line 190 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_10,
#line 190 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__R_3)
#line 190 "mode_robdd.tfeirn.m"
{
#line 766 "mode_robdd.tfeirn.m"
  {
#line 766 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_12_12;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_8_8;
#line 766 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_5_5;
#line 767 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_6_6;

#line 8262 "mode_robdd.tfeirn.c"
    {
#line 8264 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8266 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_11_11));
#line 8268 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_10));
#line 8270 "mode_robdd.tfeirn.c"
    }
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_5_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_12_12);
    }
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_5_5 = (MR_Word) mode_robdd__tfeirn__conv0_V_5_5;
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_6_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_12_12);
    }
#line 767 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_6_6 = (MR_Word) mode_robdd__tfeirn__conv1_V_6_6;
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_7_7 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10);
    }
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_8_8 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10);
    }
#line 768 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_9_9 = (MR_Integer) 0;
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__V_8_8));
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_3));
#line 767 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__V_9_9));
#line 767 "mode_robdd.tfeirn.m"
    }
#line 767 "mode_robdd.tfeirn.m"
    {
#line 767 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10, mode_robdd__tfeirn__V_4_4);
    }
#line 766 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 766 "mode_robdd.tfeirn.m"
  }
#line 190 "mode_robdd.tfeirn.m"
}

#line 772 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0_1(
#line 772 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 772 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 772 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 772 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
#line 772 "mode_robdd.tfeirn.m"
{
#line 772 "mode_robdd.tfeirn.m"
  {
#line 772 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_4;
#line 772 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_LambdaHeadVar__4_15;

#line 772 "mode_robdd.tfeirn.m"
    {
#line 772 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_LambdaHeadVar__4_15 = mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__772__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_4 = ((MR_Box) (mode_robdd__tfeirn__conv0_LambdaHeadVar__4_15));
#line 772 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_4;
#line 772 "mode_robdd.tfeirn.m"
  }
#line 772 "mode_robdd.tfeirn.m"
}

#line 186 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0(
#line 186 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
#line 186 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 186 "mode_robdd.tfeirn.m"
{
#line 772 "mode_robdd.tfeirn.m"
  {
#line 772 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_49_49;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_51_51;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_8_8;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_10_10;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_20_20;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_22_22;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_23_23;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
#line 773 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_32_32;
#line 773 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_33_33;
#line 773 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_34_34;
#line 773 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_35_35;
#line 773 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_36_36;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_37_37;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_38_38;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_39_39;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_40_40;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_41_41;
#line 772 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__conv1_V_10_10;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_42_42;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_43_43;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_44_44;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_45_45;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_46_46;

#line 773 "mode_robdd.tfeirn.m"
    {
#line 773 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_20_20 = mercury__robdd__conj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_52_52);
    }
#line 773 "mode_robdd.tfeirn.m"
    {
#line 773 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_18_18 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_19_19, mode_robdd__tfeirn__V_20_20);
    }
#line 773 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 773 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 773 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 773 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 773 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 773 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
#line 773 "mode_robdd.tfeirn.m"
    {
#line 773 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_22_22 = mercury__robdd__conj_not_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_23_23);
    }
#line 773 "mode_robdd.tfeirn.m"
    {
#line 773 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_7_7 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_22_22);
    }
#line 772 "mode_robdd.tfeirn.m"
    {
#line 772 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 772 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_8_8, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[2]));
#line 772 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_8_8, 1) = ((MR_Box) (mode_robdd__tfeirn__to_robdd_1_f_0_1));
#line 772 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 772 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_8_8, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
#line 772 "mode_robdd.tfeirn.m"
    }
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_9_9 = (MR_Word) mode_robdd__tfeirn__V_17_17;
#line 8512 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8514 "mode_robdd.tfeirn.c"
    {
#line 8516 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8518 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_49_49, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_48_48));
#line 8520 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
#line 8522 "mode_robdd.tfeirn.c"
    }
#line 8524 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 8526 "mode_robdd.tfeirn.c"
    {
#line 8528 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8530 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_51_51, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_50_50));
#line 8532 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_51_51, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
#line 8534 "mode_robdd.tfeirn.c"
    }
#line 772 "mode_robdd.tfeirn.m"
    {
#line 772 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_10_10 = mercury__map__foldl_3_f_0(mode_robdd__tfeirn__TypeInfo_49_49, mode_robdd__tfeirn__TypeInfo_49_49, mode_robdd__tfeirn__TypeInfo_51_51, (MR_Word) mode_robdd__tfeirn__V_8_8, (MR_Word) mode_robdd__tfeirn__V_9_9, ((MR_Box) (mode_robdd__tfeirn__V_7_7)));
    }
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_10_10 = ((MR_Word) mode_robdd__tfeirn__conv1_V_10_10);
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
#line 772 "mode_robdd.tfeirn.m"
    {
#line 772 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_11_11, mode_robdd__tfeirn__V_10_10);
    }
#line 772 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 772 "mode_robdd.tfeirn.m"
  }
#line 186 "mode_robdd.tfeirn.m"
}

#line 183 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__robdd_1_f_0(
#line 183 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8,
#line 183 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
#line 183 "mode_robdd.tfeirn.m"
{
#line 183 "mode_robdd.tfeirn.m"
  {
#line 183 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));

#line 183 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 183 "mode_robdd.tfeirn.m"
  }
#line 183 "mode_robdd.tfeirn.m"
}

#line 175 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__ensure_normalised_1_f_0(
#line 175 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_4,
#line 175 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 175 "mode_robdd.tfeirn.m"
{
#line 620 "mode_robdd.tfeirn.m"
  {
#line 620 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 620 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;

#line 620 "mode_robdd.tfeirn.m"
    {
#line 620 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_4, mode_robdd__tfeirn__X_3);
    }
#line 620 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 620 "mode_robdd.tfeirn.m"
  }
#line 175 "mode_robdd.tfeirn.m"
}

#line 170 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn__minimal_model_4_p_0(
#line 170 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
#line 170 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_5,
#line 170 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_6,
#line 170 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
#line 170 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
#line 170 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__cont,
#line 170 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__cont_env_ptr)
#line 170 "mode_robdd.tfeirn.m"
{
#line 587 "mode_robdd.tfeirn.m"
  while (MR_TRUE)
#line 587 "mode_robdd.tfeirn.m"
    {
#line 587 "mode_robdd.tfeirn.m"
      /* tailcall optimized into a loop */
#line 587 "mode_robdd.tfeirn.m"
      {
#line 587 "mode_robdd.tfeirn.m"
        MR_bool mode_robdd__tfeirn__succeeded;
#line 587 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
#line 584 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;

#line 8662 "mode_robdd.tfeirn.c"
        {
#line 8664 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8666 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 8668 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 8670 "mode_robdd.tfeirn.c"
        }
#line 584 "mode_robdd.tfeirn.m"
        {
#line 584 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_16_16, (MR_Word) mode_robdd__tfeirn__Vars_5);
        }
#line 587 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 585 "mode_robdd.tfeirn.m"
          {
#line 585 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv0_TrueVars_7;
#line 586 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_FalseVars_8;

#line 585 "mode_robdd.tfeirn.m"
            {
#line 585 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv0_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_16_16);
            }
#line 585 "mode_robdd.tfeirn.m"
            *mode_robdd__tfeirn__TrueVars_7 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars_7;
#line 586 "mode_robdd.tfeirn.m"
            {
#line 586 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_16_16);
            }
#line 586 "mode_robdd.tfeirn.m"
            *mode_robdd__tfeirn__FalseVars_8 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars_8;
#line 585 "mode_robdd.tfeirn.m"
            {
#line 585 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__cont(mode_robdd__tfeirn__cont_env_ptr);
            }
#line 585 "mode_robdd.tfeirn.m"
          }
#line 587 "mode_robdd.tfeirn.m"
        else
#line 588 "mode_robdd.tfeirn.m"
          {
#line 588 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TrueVars0_9;
#line 588 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FalseVars0_10;

#line 588 "mode_robdd.tfeirn.m"
            {
#line 588 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X0_6, &mode_robdd__tfeirn__TrueVars0_9, &mode_robdd__tfeirn__FalseVars0_10);
            }
#line 588 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 588 "mode_robdd.tfeirn.m"
              {
#line 590 "mode_robdd.tfeirn.m"
                *mode_robdd__tfeirn__TrueVars_7 = mode_robdd__tfeirn__TrueVars0_9;
#line 591 "mode_robdd.tfeirn.m"
                *mode_robdd__tfeirn__FalseVars_8 = mode_robdd__tfeirn__FalseVars0_10;
#line 590 "mode_robdd.tfeirn.m"
                {
#line 590 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__cont(mode_robdd__tfeirn__cont_env_ptr);
                }
#line 593 "mode_robdd.tfeirn.m"
                {
#line 593 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__X_11;
#line 593 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_12_12;
#line 593 "mode_robdd.tfeirn.m"
                  MR_Word mode_robdd__tfeirn__V_13_13;

#line 593 "mode_robdd.tfeirn.m"
                  {
#line 593 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_13_13 = mercury__robdd__conj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TrueVars0_9);
                  }
#line 593 "mode_robdd.tfeirn.m"
                  {
#line 593 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__V_12_12 = mercury__robdd__f_126_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__V_13_13);
                  }
#line 593 "mode_robdd.tfeirn.m"
                  {
#line 593 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__X0_6, mode_robdd__tfeirn__V_12_12);
                  }
#line 594 "mode_robdd.tfeirn.m"
                  /* direct tailcall eliminated */
#line 594 "mode_robdd.tfeirn.m"
                  {
#line 594 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__X0__tmp_copy_6 = mode_robdd__tfeirn__X_11;

#line 594 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__X0_6 = mode_robdd__tfeirn__X0__tmp_copy_6;
#line 594 "mode_robdd.tfeirn.m"
                  }
#line 594 "mode_robdd.tfeirn.m"
                  continue;
#line 593 "mode_robdd.tfeirn.m"
                }
#line 588 "mode_robdd.tfeirn.m"
              }
#line 588 "mode_robdd.tfeirn.m"
          }
#line 587 "mode_robdd.tfeirn.m"
      }
#line 587 "mode_robdd.tfeirn.m"
      break;
#line 587 "mode_robdd.tfeirn.m"
    }
#line 170 "mode_robdd.tfeirn.m"
}

#line 557 "mode_robdd.tfeirn.m"
static void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0_1(
#line 557 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__env_ptr_arg)
#line 557 "mode_robdd.tfeirn.m"
{
#line 557 "mode_robdd.tfeirn.m"
  {
#line 557 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

#line 557 "mode_robdd.tfeirn.m"
    {
#line 558 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv6_TrueVars_12;
#line 559 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv7_FalseVars_13;

#line 558 "mode_robdd.tfeirn.m"
      {
#line 558 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv6_TrueVars_12 = mercury__sparse_bitset__union_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17);
      }
#line 558 "mode_robdd.tfeirn.m"
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12) = (MR_Word) mode_robdd__tfeirn__conv6_TrueVars_12;
#line 559 "mode_robdd.tfeirn.m"
      {
#line 559 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv7_FalseVars_13 = mercury__sparse_bitset__union_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18);
      }
#line 559 "mode_robdd.tfeirn.m"
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13) = (MR_Word) mode_robdd__tfeirn__conv7_FalseVars_13;
#line 559 "mode_robdd.tfeirn.m"
      {
#line 559 "mode_robdd.tfeirn.m"
        ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr);
      }
#line 557 "mode_robdd.tfeirn.m"
    }
#line 557 "mode_robdd.tfeirn.m"
  }
#line 557 "mode_robdd.tfeirn.m"
}

#line 158 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0(
#line 158 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
#line 158 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars0_5,
#line 158 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
#line 158 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_12,
#line 158 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_13,
#line 158 "mode_robdd.tfeirn.m"
  MR_Cont mode_robdd__tfeirn__cont,
#line 158 "mode_robdd.tfeirn.m"
  void * mode_robdd__tfeirn__cont_env_ptr)
#line 158 "mode_robdd.tfeirn.m"
{
#line 158 "mode_robdd.tfeirn.m"
  {
#line 158 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s mode_robdd__tfeirn__env;
#line 158 "mode_robdd.tfeirn.m"
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = &mode_robdd__tfeirn__env;

#line 158 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12 = mode_robdd__tfeirn__TrueVars_12;
#line 158 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13 = mode_robdd__tfeirn__FalseVars_13;
#line 158 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont = mode_robdd__tfeirn__cont;
#line 158 "mode_robdd.tfeirn.m"
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr = mode_robdd__tfeirn__cont_env_ptr;
#line 547 "mode_robdd.tfeirn.m"
    {
#line 547 "mode_robdd.tfeirn.m"
      MR_bool mode_robdd__tfeirn__succeeded;
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__N_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__Vars_16;
#line 547 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_19_19;
#line 548 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv0_TrueVars0_14;
#line 549 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv1_FalseVars0_15;
#line 550 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv2_V_19_19;
#line 550 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__conv3_Vars_16;

#line 8896 "mode_robdd.tfeirn.c"
      {
#line 8898 "mode_robdd.tfeirn.c"
        MR_Word base;
#line 8900 "mode_robdd.tfeirn.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8902 "mode_robdd.tfeirn.c"
        (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25 = base;
#line 8904 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_24_24));
#line 8906 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 8908 "mode_robdd.tfeirn.c"
      }
#line 548 "mode_robdd.tfeirn.m"
      {
#line 548 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv0_TrueVars0_14 = mercury__sparse_bitset__intersect_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__T_6, (MR_Word) mode_robdd__tfeirn__Vars0_5);
      }
#line 548 "mode_robdd.tfeirn.m"
      (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars0_14;
#line 549 "mode_robdd.tfeirn.m"
      {
#line 549 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv1_FalseVars0_15 = mercury__sparse_bitset__intersect_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__F_7, (MR_Word) mode_robdd__tfeirn__Vars0_5);
      }
#line 549 "mode_robdd.tfeirn.m"
      (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars0_15;
#line 550 "mode_robdd.tfeirn.m"
      {
#line 550 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv2_V_19_19 = mercury__sparse_bitset__difference_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__Vars0_5, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14);
      }
#line 550 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_19_19 = (MR_Word) mode_robdd__tfeirn__conv2_V_19_19;
#line 550 "mode_robdd.tfeirn.m"
      {
#line 550 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__conv3_Vars_16 = mercury__sparse_bitset__difference_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__V_19_19, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15);
      }
#line 550 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__Vars_16 = (MR_Word) mode_robdd__tfeirn__conv3_Vars_16;
#line 552 "mode_robdd.tfeirn.m"
      {
#line 552 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__Vars_16);
      }
#line 555 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 553 "mode_robdd.tfeirn.m"
        {
#line 553 "mode_robdd.tfeirn.m"
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12) = (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14;
#line 554 "mode_robdd.tfeirn.m"
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13) = (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15;
#line 553 "mode_robdd.tfeirn.m"
          {
#line 553 "mode_robdd.tfeirn.m"
            ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr);
          }
#line 553 "mode_robdd.tfeirn.m"
        }
#line 555 "mode_robdd.tfeirn.m"
      else
#line 557 "mode_robdd.tfeirn.m"
        {
#line 557 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__V_20_20;
#line 557 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__V_21_21;
#line 557 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__V_22_22;
#line 556 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__conv4_V_21_21;
#line 556 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__conv5_V_22_22;

#line 556 "mode_robdd.tfeirn.m"
          {
#line 556 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__conv4_V_21_21 = mercury__sparse_bitset__init_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25);
          }
#line 556 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_21_21 = (MR_Word) mode_robdd__tfeirn__conv4_V_21_21;
#line 556 "mode_robdd.tfeirn.m"
          {
#line 556 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__conv5_V_22_22 = mercury__sparse_bitset__init_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25);
          }
#line 556 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_22_22 = (MR_Word) mode_robdd__tfeirn__conv5_V_22_22;
#line 556 "mode_robdd.tfeirn.m"
          {
#line 556 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 556 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__V_21_21));
#line 556 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__V_22_22));
#line 556 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
#line 556 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
#line 556 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
#line 556 "mode_robdd.tfeirn.m"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_20_20, 5) = ((MR_Box) (mode_robdd__tfeirn__N_11));
#line 556 "mode_robdd.tfeirn.m"
          }
#line 556 "mode_robdd.tfeirn.m"
          {
#line 556 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__labelling_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_23, mode_robdd__tfeirn__Vars_16, mode_robdd__tfeirn__V_20_20, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18, mode_robdd__tfeirn__labelling_4_p_0_1, mode_robdd__tfeirn__env_ptr);
          }
#line 557 "mode_robdd.tfeirn.m"
        }
#line 547 "mode_robdd.tfeirn.m"
    }
#line 158 "mode_robdd.tfeirn.m"
  }
#line 158 "mode_robdd.tfeirn.m"
}

#line 143 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_filter_2_f_0(
#line 143 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 143 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__P_4,
#line 143 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 143 "mode_robdd.tfeirn.m"
{
#line 543 "mode_robdd.tfeirn.m"
  {
#line 543 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 543 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15;
#line 544 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_11_11;
#line 544 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_12_12;

#line 9071 "mode_robdd.tfeirn.c"
    {
#line 9073 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9075 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 9077 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9079 "mode_robdd.tfeirn.c"
    }
#line 9081 "mode_robdd.tfeirn.c"
    {
#line 9083 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9085 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 9087 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9089 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 9091 "mode_robdd.tfeirn.c"
    }
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_11_11 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__P_4, (MR_Word) mode_robdd__tfeirn__T_5);
    }
#line 544 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_11_11 = (MR_Word) mode_robdd__tfeirn__conv0_V_11_11;
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_12_12 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__P_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
#line 544 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_12_12 = (MR_Word) mode_robdd__tfeirn__conv1_V_12_12;
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = mode_robdd__equiv_vars__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__E_7);
    }
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__I_8);
    }
#line 545 "mode_robdd.tfeirn.m"
    {
#line 545 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_15_15 = mercury__robdd__restrict_filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__R_9);
    }
#line 544 "mode_robdd.tfeirn.m"
    {
#line 544 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 544 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 544 "mode_robdd.tfeirn.m"
    }
#line 543 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 543 "mode_robdd.tfeirn.m"
  }
#line 143 "mode_robdd.tfeirn.m"
}

#line 139 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_threshold_2_f_0(
#line 139 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 139 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 139 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 139 "mode_robdd.tfeirn.m"
{
#line 340 "mode_robdd.tfeirn.m"
  {
#line 340 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 340 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15;
#line 341 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_11_11;
#line 341 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_12_12;

#line 9199 "mode_robdd.tfeirn.c"
    {
#line 9201 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9203 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 9205 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9207 "mode_robdd.tfeirn.c"
    }
#line 9209 "mode_robdd.tfeirn.c"
    {
#line 9211 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9213 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 9215 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9217 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 9219 "mode_robdd.tfeirn.c"
    }
#line 341 "mode_robdd.tfeirn.m"
    {
#line 341 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_11_11 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__T_5, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
#line 341 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_11_11 = (MR_Word) mode_robdd__tfeirn__conv0_V_11_11;
#line 341 "mode_robdd.tfeirn.m"
    {
#line 341 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_12_12 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__F_6, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
#line 341 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_12_12 = (MR_Word) mode_robdd__tfeirn__conv1_V_12_12;
#line 341 "mode_robdd.tfeirn.m"
    {
#line 341 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = mode_robdd__equiv_vars__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7);
    }
#line 342 "mode_robdd.tfeirn.m"
    {
#line 342 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__I_8);
    }
#line 342 "mode_robdd.tfeirn.m"
    {
#line 342 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_15_15 = mercury__robdd__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
    }
#line 341 "mode_robdd.tfeirn.m"
    {
#line 341 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_11_11));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 341 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 341 "mode_robdd.tfeirn.m"
    }
#line 340 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 340 "mode_robdd.tfeirn.m"
  }
#line 139 "mode_robdd.tfeirn.m"
}

#line 134 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_2_f_0(
#line 134 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20,
#line 134 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 134 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 134 "mode_robdd.tfeirn.m"
{
#line 324 "mode_robdd.tfeirn.m"
  {
#line 324 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 324 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;
#line 325 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 325 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 325 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

#line 9313 "mode_robdd.tfeirn.c"
    {
#line 9315 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9317 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 9319 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9321 "mode_robdd.tfeirn.c"
    }
#line 9323 "mode_robdd.tfeirn.c"
    {
#line 9325 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9327 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 9329 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9331 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 9333 "mode_robdd.tfeirn.c"
    }
#line 325 "mode_robdd.tfeirn.m"
    {
#line 325 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
#line 324 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 326 "mode_robdd.tfeirn.m"
      {
#line 326 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 326 "mode_robdd.tfeirn.m"
        {
#line 326 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
#line 326 "mode_robdd.tfeirn.m"
        {
#line 326 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__V_12_12));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 326 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 326 "mode_robdd.tfeirn.m"
        }
#line 326 "mode_robdd.tfeirn.m"
      }
#line 324 "mode_robdd.tfeirn.m"
    else
#line 329 "mode_robdd.tfeirn.m"
      {
#line 329 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;
#line 327 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 327 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
#line 327 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

#line 9385 "mode_robdd.tfeirn.c"
        {
#line 9387 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9389 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 9391 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9393 "mode_robdd.tfeirn.c"
        }
#line 9395 "mode_robdd.tfeirn.c"
        {
#line 9397 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9399 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 9401 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9403 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 9405 "mode_robdd.tfeirn.c"
        }
#line 327 "mode_robdd.tfeirn.m"
        {
#line 327 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
#line 329 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 328 "mode_robdd.tfeirn.m"
          {
#line 328 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 328 "mode_robdd.tfeirn.m"
            {
#line 328 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 328 "mode_robdd.tfeirn.m"
            {
#line 328 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 328 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 328 "mode_robdd.tfeirn.m"
            }
#line 328 "mode_robdd.tfeirn.m"
          }
#line 329 "mode_robdd.tfeirn.m"
        else
#line 336 "mode_robdd.tfeirn.m"
          {
#line 336 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__L_11;

#line 329 "mode_robdd.tfeirn.m"
            {
#line 329 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7, &mode_robdd__tfeirn__L_11);
            }
#line 336 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 332 "mode_robdd.tfeirn.m"
              {
#line 330 "mode_robdd.tfeirn.m"
                {
#line 330 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__term____Unify____var_1_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__L_11, mode_robdd__tfeirn__V_4);
                }
#line 330 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 332 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 331 "mode_robdd.tfeirn.m"
                  {
#line 331 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_14_14;

#line 331 "mode_robdd.tfeirn.m"
                    {
#line 331 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_14_14 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
#line 331 "mode_robdd.tfeirn.m"
                    {
#line 331 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 331 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 331 "mode_robdd.tfeirn.m"
                    }
#line 331 "mode_robdd.tfeirn.m"
                  }
#line 332 "mode_robdd.tfeirn.m"
                else
#line 333 "mode_robdd.tfeirn.m"
                  {
#line 333 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_15_15;
#line 333 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_16_16;
#line 333 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_17_17;

#line 333 "mode_robdd.tfeirn.m"
                    {
#line 333 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_15_15 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
#line 333 "mode_robdd.tfeirn.m"
                    {
#line 333 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_16_16 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                    }
#line 334 "mode_robdd.tfeirn.m"
                    {
#line 334 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_17_17 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                    }
#line 333 "mode_robdd.tfeirn.m"
                    {
#line 333 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 333 "mode_robdd.tfeirn.m"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 333 "mode_robdd.tfeirn.m"
                    }
#line 333 "mode_robdd.tfeirn.m"
                  }
#line 332 "mode_robdd.tfeirn.m"
              }
#line 336 "mode_robdd.tfeirn.m"
            else
#line 337 "mode_robdd.tfeirn.m"
              {
#line 337 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_18_18;
#line 337 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_19_19;

#line 337 "mode_robdd.tfeirn.m"
                {
#line 337 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_18_18 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                }
#line 337 "mode_robdd.tfeirn.m"
                {
#line 337 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_19_19 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                }
#line 337 "mode_robdd.tfeirn.m"
                {
#line 337 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__V_18_18));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 337 "mode_robdd.tfeirn.m"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 337 "mode_robdd.tfeirn.m"
                }
#line 337 "mode_robdd.tfeirn.m"
              }
#line 336 "mode_robdd.tfeirn.m"
          }
#line 329 "mode_robdd.tfeirn.m"
      }
#line 324 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 324 "mode_robdd.tfeirn.m"
  }
#line 134 "mode_robdd.tfeirn.m"
}

#line 130 "mode_robdd.tfeirn.m"
void MR_CALL 
mode_robdd__tfeirn__known_vars_3_p_0(
#line 130 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_18,
#line 130 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_4,
#line 130 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__TrueVars_5,
#line 130 "mode_robdd.tfeirn.m"
  MR_Word * mode_robdd__tfeirn__FalseVars_6)
#line 130 "mode_robdd.tfeirn.m"
{
#line 319 "mode_robdd.tfeirn.m"
  {
#line 319 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 316 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
#line 316 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_21_21;
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));

#line 316 "mode_robdd.tfeirn.m"
    {
#line 316 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_21_21 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_18);
    }
#line 316 "mode_robdd.tfeirn.m"
    {
#line 316 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_18, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_21_21);
    }
#line 319 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 317 "mode_robdd.tfeirn.m"
      {
#line 317 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 317 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
#line 317 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv0_TrueVars_5;
#line 318 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv1_FalseVars_6;

#line 9652 "mode_robdd.tfeirn.c"
        {
#line 9654 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9656 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 9658 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_18));
#line 9660 "mode_robdd.tfeirn.c"
        }
#line 317 "mode_robdd.tfeirn.m"
        {
#line 317 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv0_TrueVars_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
#line 317 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__TrueVars_5 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars_5;
#line 318 "mode_robdd.tfeirn.m"
        {
#line 318 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv1_FalseVars_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
#line 318 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__FalseVars_6 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars_6;
#line 317 "mode_robdd.tfeirn.m"
      }
#line 319 "mode_robdd.tfeirn.m"
    else
#line 320 "mode_robdd.tfeirn.m"
      {
#line 320 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9;
#line 320 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10;
#line 320 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11;
#line 320 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;

#line 320 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__TrueVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
#line 320 "mode_robdd.tfeirn.m"
        *mode_robdd__tfeirn__FalseVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
#line 320 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
#line 320 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
#line 320 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
#line 320 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));
#line 320 "mode_robdd.tfeirn.m"
      }
#line 319 "mode_robdd.tfeirn.m"
  }
#line 130 "mode_robdd.tfeirn.m"
}

#line 126 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__vars_disentailed_1_f_0(
#line 126 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11,
#line 126 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 126 "mode_robdd.tfeirn.m"
{
#line 308 "mode_robdd.tfeirn.m"
  {
#line 308 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 308 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 309 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 309 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 309 "mode_robdd.tfeirn.m"
    {
#line 309 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
#line 309 "mode_robdd.tfeirn.m"
    {
#line 309 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__V_4_4, mode_robdd__tfeirn__V_12_12);
    }
#line 308 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 310 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "mode_robdd.tfeirn.m"
    else
#line 312 "mode_robdd.tfeirn.m"
      {
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 312 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 312 "mode_robdd.tfeirn.m"
        {
#line 312 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 312 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 312 "mode_robdd.tfeirn.m"
        }
#line 312 "mode_robdd.tfeirn.m"
      }
#line 308 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 308 "mode_robdd.tfeirn.m"
  }
#line 126 "mode_robdd.tfeirn.m"
}

#line 121 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__vars_entailed_1_f_0(
#line 121 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11,
#line 121 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3)
#line 121 "mode_robdd.tfeirn.m"
{
#line 301 "mode_robdd.tfeirn.m"
  {
#line 301 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 301 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
#line 302 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 302 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 302 "mode_robdd.tfeirn.m"
    {
#line 302 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
#line 302 "mode_robdd.tfeirn.m"
    {
#line 302 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__V_4_4, mode_robdd__tfeirn__V_12_12);
    }
#line 301 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 303 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "mode_robdd.tfeirn.m"
    else
#line 305 "mode_robdd.tfeirn.m"
      {
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 305 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 305 "mode_robdd.tfeirn.m"
        {
#line 305 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "mode_robdd.tfeirn.m"
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 305 "mode_robdd.tfeirn.m"
        }
#line 305 "mode_robdd.tfeirn.m"
      }
#line 301 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__2_2;
#line 301 "mode_robdd.tfeirn.m"
  }
#line 121 "mode_robdd.tfeirn.m"
}

#line 117 "mode_robdd.tfeirn.m"
MR_bool MR_CALL 
mode_robdd__tfeirn__var_entailed_2_p_0(
#line 117 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_12,
#line 117 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_3,
#line 117 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4)
#line 117 "mode_robdd.tfeirn.m"
{
#line 299 "mode_robdd.tfeirn.m"
  {
#line 299 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;

#line 299 "mode_robdd.tfeirn.m"
    {
#line 299 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 299 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_17_17;
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 183 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 299 "mode_robdd.tfeirn.m"
      {
#line 299 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_17_17 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_12);
      }
#line 299 "mode_robdd.tfeirn.m"
      {
#line 299 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_17_17);
      }
#line 299 "mode_robdd.tfeirn.m"
    }
#line 299 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 299 "mode_robdd.tfeirn.m"
      {
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_14_14;
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_16;
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
#line 299 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

#line 9936 "mode_robdd.tfeirn.c"
        {
#line 9938 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9940 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_13_13));
#line 9942 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_12));
#line 9944 "mode_robdd.tfeirn.c"
        }
#line 9946 "mode_robdd.tfeirn.c"
        {
#line 9948 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9950 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15));
#line 9952 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_12));
#line 9954 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_14_14));
#line 9956 "mode_robdd.tfeirn.c"
        }
#line 299 "mode_robdd.tfeirn.m"
        {
#line 299 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__TypeClassInfo_for_enum_16, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_4);
        }
#line 299 "mode_robdd.tfeirn.m"
      }
#line 299 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__succeeded;
#line 299 "mode_robdd.tfeirn.m"
  }
#line 117 "mode_robdd.tfeirn.m"
}

#line 110 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__var_restrict_false_2_f_0(
#line 110 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30,
#line 110 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 110 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 110 "mode_robdd.tfeirn.m"
{
#line 533 "mode_robdd.tfeirn.m"
  {
#line 533 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_11;
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 533 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32;
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 534 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34;

#line 10010 "mode_robdd.tfeirn.c"
    {
#line 10012 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10014 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_31_31));
#line 10016 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10018 "mode_robdd.tfeirn.c"
    }
#line 10020 "mode_robdd.tfeirn.c"
    {
#line 10022 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10024 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33));
#line 10026 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10028 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_32_32));
#line 10030 "mode_robdd.tfeirn.c"
    }
#line 534 "mode_robdd.tfeirn.m"
    {
#line 534 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
#line 536 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 535 "mode_robdd.tfeirn.m"
      {
#line 535 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30);
      }
#line 536 "mode_robdd.tfeirn.m"
    else
#line 538 "mode_robdd.tfeirn.m"
      {
#line 538 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38;
#line 536 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 536 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36;
#line 536 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

#line 10057 "mode_robdd.tfeirn.c"
        {
#line 10059 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10061 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_35_35));
#line 10063 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10065 "mode_robdd.tfeirn.c"
        }
#line 10067 "mode_robdd.tfeirn.c"
        {
#line 10069 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10071 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37));
#line 10073 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10075 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_36_36));
#line 10077 "mode_robdd.tfeirn.c"
        }
#line 536 "mode_robdd.tfeirn.m"
        {
#line 536 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
#line 538 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 537 "mode_robdd.tfeirn.m"
          {
#line 537 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 537 "mode_robdd.tfeirn.m"
            {
#line 537 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 537 "mode_robdd.tfeirn.m"
            {
#line 537 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 537 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 537 "mode_robdd.tfeirn.m"
            }
#line 537 "mode_robdd.tfeirn.m"
          }
#line 538 "mode_robdd.tfeirn.m"
        else
#line 539 "mode_robdd.tfeirn.m"
          {
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X0_12;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 539 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_20_20;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_21_21;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_22_22;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_23_23;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_24_24;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_26_26;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_27_27;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_28_28;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_29_29;
#line 540 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_25_25;

#line 10163 "mode_robdd.tfeirn.c"
            {
#line 10165 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10167 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_43_43));
#line 10169 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10171 "mode_robdd.tfeirn.c"
            }
#line 10173 "mode_robdd.tfeirn.c"
            {
#line 10175 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10177 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45));
#line 10179 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10181 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_44_44));
#line 10183 "mode_robdd.tfeirn.c"
            }
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 539 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Integer) 0;
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 539 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 5) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 539 "mode_robdd.tfeirn.m"
            }
#line 539 "mode_robdd.tfeirn.m"
            {
#line 539 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__V_14_14);
            }
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 540 "mode_robdd.tfeirn.m"
            {
#line 540 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_4);
            }
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 540 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 540 "mode_robdd.tfeirn.m"
            {
#line 540 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_24_24));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__V_26_26));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__V_27_27));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__V_28_28));
#line 540 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__V_29_29));
#line 540 "mode_robdd.tfeirn.m"
            }
#line 539 "mode_robdd.tfeirn.m"
          }
#line 538 "mode_robdd.tfeirn.m"
      }
#line 533 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_11;
#line 533 "mode_robdd.tfeirn.m"
  }
#line 110 "mode_robdd.tfeirn.m"
}

#line 106 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__var_restrict_true_2_f_0(
#line 106 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30,
#line 106 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 106 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 106 "mode_robdd.tfeirn.m"
{
#line 523 "mode_robdd.tfeirn.m"
  {
#line 523 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_11;
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 523 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32;
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 524 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34;

#line 10311 "mode_robdd.tfeirn.c"
    {
#line 10313 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10315 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_31_31));
#line 10317 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10319 "mode_robdd.tfeirn.c"
    }
#line 10321 "mode_robdd.tfeirn.c"
    {
#line 10323 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10325 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33));
#line 10327 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10329 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_32_32));
#line 10331 "mode_robdd.tfeirn.c"
    }
#line 524 "mode_robdd.tfeirn.m"
    {
#line 524 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
#line 526 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 525 "mode_robdd.tfeirn.m"
      {
#line 525 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30);
      }
#line 526 "mode_robdd.tfeirn.m"
    else
#line 528 "mode_robdd.tfeirn.m"
      {
#line 528 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38;
#line 526 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 526 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36;
#line 526 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

#line 10358 "mode_robdd.tfeirn.c"
        {
#line 10360 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10362 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_35_35));
#line 10364 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10366 "mode_robdd.tfeirn.c"
        }
#line 10368 "mode_robdd.tfeirn.c"
        {
#line 10370 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10372 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37));
#line 10374 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10376 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_36_36));
#line 10378 "mode_robdd.tfeirn.c"
        }
#line 526 "mode_robdd.tfeirn.m"
        {
#line 526 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
#line 528 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 527 "mode_robdd.tfeirn.m"
          {
#line 527 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 527 "mode_robdd.tfeirn.m"
            {
#line 527 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_13_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
#line 527 "mode_robdd.tfeirn.m"
            {
#line 527 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 527 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
#line 527 "mode_robdd.tfeirn.m"
            }
#line 527 "mode_robdd.tfeirn.m"
          }
#line 528 "mode_robdd.tfeirn.m"
        else
#line 529 "mode_robdd.tfeirn.m"
          {
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__X0_12;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_17_17;
#line 529 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_20_20;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_21_21;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_22_22;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_23_23;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_25_25;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_26_26;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_27_27;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_28_28;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_29_29;
#line 530 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_24_24;

#line 10464 "mode_robdd.tfeirn.c"
            {
#line 10466 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10468 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_43_43));
#line 10470 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10472 "mode_robdd.tfeirn.c"
            }
#line 10474 "mode_robdd.tfeirn.c"
            {
#line 10476 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10478 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45));
#line 10480 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10482 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_44_44));
#line 10484 "mode_robdd.tfeirn.c"
            }
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
#line 529 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Integer) 0;
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__V_15_15));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
#line 529 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_14_14, 5) = ((MR_Box) (mode_robdd__tfeirn__V_16_16));
#line 529 "mode_robdd.tfeirn.m"
            }
#line 529 "mode_robdd.tfeirn.m"
            {
#line 529 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__V_14_14);
            }
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 530 "mode_robdd.tfeirn.m"
            {
#line 530 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_17_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__V_18_18, mode_robdd__tfeirn__V_4);
            }
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
#line 530 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
#line 530 "mode_robdd.tfeirn.m"
            {
#line 530 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__V_17_17));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__V_25_25));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__V_26_26));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__V_27_27));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__V_28_28));
#line 530 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__V_29_29));
#line 530 "mode_robdd.tfeirn.m"
            }
#line 529 "mode_robdd.tfeirn.m"
          }
#line 528 "mode_robdd.tfeirn.m"
      }
#line 523 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_11;
#line 523 "mode_robdd.tfeirn.m"
  }
#line 106 "mode_robdd.tfeirn.m"
}

#line 521 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0_1(
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 521 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 521 "mode_robdd.tfeirn.m"
{
#line 521 "mode_robdd.tfeirn.m"
  {
#line 521 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 521 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 521 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv3_LambdaHeadVar__3_20;

#line 521 "mode_robdd.tfeirn.m"
    {
#line 521 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv3_LambdaHeadVar__3_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 521 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv3_LambdaHeadVar__3_20));
#line 521 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 521 "mode_robdd.tfeirn.m"
  }
#line 521 "mode_robdd.tfeirn.m"
}

#line 102 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0(
#line 102 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_21,
#line 102 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_5,
#line 102 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Var_6,
#line 102 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 102 "mode_robdd.tfeirn.m"
{
#line 511 "mode_robdd.tfeirn.m"
  {
#line 511 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 512 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 512 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 512 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___R_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 512 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___N_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 511 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_23_23;
#line 486 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 486 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 486 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_25;

#line 10648 "mode_robdd.tfeirn.c"
    {
#line 10650 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10652 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_22_22));
#line 10654 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10656 "mode_robdd.tfeirn.c"
    }
#line 10658 "mode_robdd.tfeirn.c"
    {
#line 10660 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10662 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24));
#line 10664 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10666 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_23_23));
#line 10668 "mode_robdd.tfeirn.c"
    }
#line 486 "mode_robdd.tfeirn.m"
    {
#line 486 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeClassInfo_for_enum_25, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__Var_6);
    }
#line 511 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 489 "mode_robdd.tfeirn.m"
      {
#line 487 "mode_robdd.tfeirn.m"
        {
#line 487 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
        }
#line 489 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 488 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 489 "mode_robdd.tfeirn.m"
        else
#line 490 "mode_robdd.tfeirn.m"
          {
#line 490 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__conj_not_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
          }
#line 489 "mode_robdd.tfeirn.m"
      }
#line 511 "mode_robdd.tfeirn.m"
    else
#line 498 "mode_robdd.tfeirn.m"
      {
#line 498 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_29_29;
#line 492 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 492 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 492 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_31;

#line 10710 "mode_robdd.tfeirn.c"
        {
#line 10712 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10714 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_28));
#line 10716 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10718 "mode_robdd.tfeirn.c"
        }
#line 10720 "mode_robdd.tfeirn.c"
        {
#line 10722 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10724 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30));
#line 10726 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10728 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_29_29));
#line 10730 "mode_robdd.tfeirn.c"
        }
#line 492 "mode_robdd.tfeirn.m"
        {
#line 492 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeClassInfo_for_enum_31, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__Var_6);
        }
#line 498 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 495 "mode_robdd.tfeirn.m"
          {
#line 493 "mode_robdd.tfeirn.m"
            {
#line 493 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_29_29, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
            }
#line 495 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 494 "mode_robdd.tfeirn.m"
              {
#line 494 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21);
              }
#line 495 "mode_robdd.tfeirn.m"
            else
#line 496 "mode_robdd.tfeirn.m"
              {
#line 496 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__disj_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
              }
#line 495 "mode_robdd.tfeirn.m"
          }
#line 498 "mode_robdd.tfeirn.m"
        else
#line 500 "mode_robdd.tfeirn.m"
          {
#line 498 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 498 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_35_35;
#line 498 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_16_16;
#line 498 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv0_V_16_16;

#line 10775 "mode_robdd.tfeirn.c"
            {
#line 10777 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10779 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_35_35, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_34_34));
#line 10781 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10783 "mode_robdd.tfeirn.c"
            }
#line 498 "mode_robdd.tfeirn.m"
            {
#line 498 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv0_V_16_16 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_35_35, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__T_9);
            }
#line 498 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_16_16 = (MR_Word) mode_robdd__tfeirn__conv0_V_16_16;
#line 498 "mode_robdd.tfeirn.m"
            {
#line 498 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_35_35, (MR_Word) mode_robdd__tfeirn__V_16_16);
            }
#line 498 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 500 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 499 "mode_robdd.tfeirn.m"
              {
#line 499 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
              }
#line 500 "mode_robdd.tfeirn.m"
            else
#line 502 "mode_robdd.tfeirn.m"
              {
#line 500 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 500 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_37_37;

#line 10815 "mode_robdd.tfeirn.c"
                {
#line 10817 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10819 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_37_37, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_36_36));
#line 10821 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_37_37, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10823 "mode_robdd.tfeirn.c"
                }
#line 500 "mode_robdd.tfeirn.m"
                {
#line 500 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_37_37, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
                }
#line 502 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 501 "mode_robdd.tfeirn.m"
                  {
#line 501 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                  }
#line 502 "mode_robdd.tfeirn.m"
                else
#line 509 "mode_robdd.tfeirn.m"
                  {
#line 509 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeInfo_39_39;
#line 509 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_41;
#line 509 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__Var1_10;
#line 509 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__Vars1_11;
#line 502 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 502 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 502 "mode_robdd.tfeirn.m"
                    MR_Box mode_robdd__tfeirn__conv2_Var1_10;
#line 502 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__conv1_Vars1_11;

#line 10858 "mode_robdd.tfeirn.c"
                    {
#line 10860 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10862 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_39_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_38_38));
#line 10864 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_39_39, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10866 "mode_robdd.tfeirn.c"
                    }
#line 10868 "mode_robdd.tfeirn.c"
                    {
#line 10870 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10872 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40));
#line 10874 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10876 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_39_39));
#line 10878 "mode_robdd.tfeirn.c"
                    }
#line 502 "mode_robdd.tfeirn.m"
                    {
#line 502 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_41, &mode_robdd__tfeirn__conv2_Var1_10, (MR_Word) mode_robdd__tfeirn__Vars_5, &mode_robdd__tfeirn__conv1_Vars1_11);
                    }
#line 502 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 502 "mode_robdd.tfeirn.m"
                      {
#line 502 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__Var1_10 = ((MR_Word) mode_robdd__tfeirn__conv2_Var1_10);
#line 502 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__Vars1_11 = (MR_Word) mode_robdd__tfeirn__conv1_Vars1_11;
#line 502 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 502 "mode_robdd.tfeirn.m"
                      }
#line 509 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 505 "mode_robdd.tfeirn.m"
                      {
#line 503 "mode_robdd.tfeirn.m"
                        {
#line 503 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_39_39, (MR_Word) mode_robdd__tfeirn__Vars1_11);
                        }
#line 505 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 504 "mode_robdd.tfeirn.m"
                          {
#line 504 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__eq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var1_10, mode_robdd__tfeirn__X_7);
                          }
#line 505 "mode_robdd.tfeirn.m"
                        else
#line 506 "mode_robdd.tfeirn.m"
                          {
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_67;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__TypeInfo_29_68;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_17_17;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_18_18;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_19_19;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_20_20;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__T_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__F_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__E_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__I0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__R_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__I_53;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_56_56 = (MR_Integer) 0;
#line 506 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_57_57;
#line 519 "mode_robdd.tfeirn.m"
                            MR_Word mode_robdd__tfeirn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 521 "mode_robdd.tfeirn.m"
                            MR_Box mode_robdd__tfeirn__conv4_I_53;

#line 521 "mode_robdd.tfeirn.m"
                            {
#line 521 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[1]));
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 1) = ((MR_Box) (mode_robdd__tfeirn__disj_vars_eq_3_f_0_1));
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 521 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_57_57, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
#line 521 "mode_robdd.tfeirn.m"
                            }
#line 10966 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeCtorInfo_28_67 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 10968 "mode_robdd.tfeirn.c"
                            {
#line 10970 "mode_robdd.tfeirn.c"
                              mode_robdd__tfeirn__TypeInfo_29_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10972 "mode_robdd.tfeirn.c"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_68, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_67));
#line 10974 "mode_robdd.tfeirn.c"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_68, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10976 "mode_robdd.tfeirn.c"
                            }
#line 521 "mode_robdd.tfeirn.m"
                            {
#line 521 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__conv4_I_53 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeInfo_29_68, mode_robdd__tfeirn__TypeClassInfo_for_enum_41, (MR_Word) mode_robdd__tfeirn__V_57_57, mode_robdd__tfeirn__Vars_5, ((MR_Box) (mode_robdd__tfeirn__I0_50)));
                            }
#line 521 "mode_robdd.tfeirn.m"
                            mode_robdd__tfeirn__I_53 = ((MR_Word) mode_robdd__tfeirn__conv4_I_53);
#line 520 "mode_robdd.tfeirn.m"
                            {
#line 520 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__T_47));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__F_48));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 2) = ((MR_Box) (mode_robdd__tfeirn__E_49));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 3) = ((MR_Box) (mode_robdd__tfeirn__I_53));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 4) = ((MR_Box) (mode_robdd__tfeirn__R_51));
#line 520 "mode_robdd.tfeirn.m"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_17_17, 5) = ((MR_Box) (mode_robdd__tfeirn__V_56_56));
#line 520 "mode_robdd.tfeirn.m"
                            }
#line 507 "mode_robdd.tfeirn.m"
                            {
#line 507 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_19_19 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6);
                            }
#line 507 "mode_robdd.tfeirn.m"
                            {
#line 507 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_20_20 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5);
                            }
#line 507 "mode_robdd.tfeirn.m"
                            {
#line 507 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__V_18_18 = mercury__robdd__f_less_or_equal_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__V_19_19, mode_robdd__tfeirn__V_20_20);
                            }
#line 506 "mode_robdd.tfeirn.m"
                            {
#line 506 "mode_robdd.tfeirn.m"
                              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__V_17_17, mode_robdd__tfeirn__V_18_18);
                            }
#line 506 "mode_robdd.tfeirn.m"
                          }
#line 505 "mode_robdd.tfeirn.m"
                      }
#line 509 "mode_robdd.tfeirn.m"
                    else
#line 510 "mode_robdd.tfeirn.m"
                      {
#line 510 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                      }
#line 509 "mode_robdd.tfeirn.m"
                  }
#line 502 "mode_robdd.tfeirn.m"
              }
#line 500 "mode_robdd.tfeirn.m"
          }
#line 498 "mode_robdd.tfeirn.m"
      }
#line 511 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 511 "mode_robdd.tfeirn.m"
  }
#line 102 "mode_robdd.tfeirn.m"
}

#line 97 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__io_constraint_4_f_0(
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_in_6,
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_out_7,
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V__8,
#line 97 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_9)
#line 97 "mode_robdd.tfeirn.m"
{
#line 482 "mode_robdd.tfeirn.m"
  {
#line 482 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_5;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_19;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__Vars_10;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_12_12;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13;
#line 482 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;

#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_11_11 = mode_robdd__tfeirn__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__V_in_6, mode_robdd__tfeirn__V__8, mode_robdd__tfeirn__X_9);
    }
#line 11094 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 11096 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 11098 "mode_robdd.tfeirn.c"
    {
#line 11100 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11102 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 11104 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11106 "mode_robdd.tfeirn.c"
    }
#line 11108 "mode_robdd.tfeirn.c"
    {
#line 11110 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11112 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18));
#line 11114 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11116 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_17_17));
#line 11118 "mode_robdd.tfeirn.c"
    }
#line 483 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 483 "mode_robdd.tfeirn.m"
    {
#line 483 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_13_13, 0) = ((MR_Box) (mode_robdd__tfeirn__V__8));
#line 483 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_13_13, 1) = ((MR_Box) (mode_robdd__tfeirn__V_14_14));
#line 483 "mode_robdd.tfeirn.m"
    }
#line 483 "mode_robdd.tfeirn.m"
    {
#line 483 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_12_12, 0) = ((MR_Box) (mode_robdd__tfeirn__V_in_6));
#line 483 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__V_12_12, 1) = ((MR_Box) (mode_robdd__tfeirn__V_13_13));
#line 483 "mode_robdd.tfeirn.m"
    }
#line 483 "mode_robdd.tfeirn.m"
    {
#line 483 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__TypeClassInfo_for_enum_19, mode_robdd__tfeirn__V_12_12);
    }
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__5_5 = mode_robdd__tfeirn__disj_vars_eq_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__V_out_7, mode_robdd__tfeirn__V_11_11);
    }
#line 482 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_5;
#line 482 "mode_robdd.tfeirn.m"
  }
#line 97 "mode_robdd.tfeirn.m"
}

#line 93 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__not_both_3_f_0(
#line 93 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 93 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 93 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 93 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 93 "mode_robdd.tfeirn.m"
{
#line 478 "mode_robdd.tfeirn.m"
  {
#line 478 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 478 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 479 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 468 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

#line 11199 "mode_robdd.tfeirn.c"
    {
#line 11201 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11203 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 11205 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11207 "mode_robdd.tfeirn.c"
    }
#line 11209 "mode_robdd.tfeirn.c"
    {
#line 11211 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11213 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 11215 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11217 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 11219 "mode_robdd.tfeirn.c"
    }
#line 468 "mode_robdd.tfeirn.m"
    {
#line 468 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarA_5);
    }
#line 478 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 469 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 478 "mode_robdd.tfeirn.m"
    else
#line 472 "mode_robdd.tfeirn.m"
      {
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 470 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

#line 11243 "mode_robdd.tfeirn.c"
        {
#line 11245 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11247 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 11249 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11251 "mode_robdd.tfeirn.c"
        }
#line 11253 "mode_robdd.tfeirn.c"
        {
#line 11255 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11257 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 11259 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11261 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 11263 "mode_robdd.tfeirn.c"
        }
#line 470 "mode_robdd.tfeirn.m"
        {
#line 470 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarB_6);
        }
#line 472 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 471 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 472 "mode_robdd.tfeirn.m"
        else
#line 474 "mode_robdd.tfeirn.m"
          {
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 472 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

#line 11287 "mode_robdd.tfeirn.c"
            {
#line 11289 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11291 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11293 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11295 "mode_robdd.tfeirn.c"
            }
#line 11297 "mode_robdd.tfeirn.c"
            {
#line 11299 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11301 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 11303 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11305 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 11307 "mode_robdd.tfeirn.c"
            }
#line 472 "mode_robdd.tfeirn.m"
            {
#line 472 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarA_5);
            }
#line 474 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 473 "mode_robdd.tfeirn.m"
              {
#line 473 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__X_7);
              }
#line 474 "mode_robdd.tfeirn.m"
            else
#line 476 "mode_robdd.tfeirn.m"
              {
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 474 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

#line 11334 "mode_robdd.tfeirn.c"
                {
#line 11336 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11338 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 11340 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11342 "mode_robdd.tfeirn.c"
                }
#line 11344 "mode_robdd.tfeirn.c"
                {
#line 11346 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11348 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 11350 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11352 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 11354 "mode_robdd.tfeirn.c"
                }
#line 474 "mode_robdd.tfeirn.m"
                {
#line 474 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarB_6);
                }
#line 476 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 475 "mode_robdd.tfeirn.m"
                  {
#line 475 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__X_7);
                  }
#line 476 "mode_robdd.tfeirn.m"
                else
#line 477 "mode_robdd.tfeirn.m"
                  {
#line 477 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_14_14;
#line 477 "mode_robdd.tfeirn.m"
                    MR_Word mode_robdd__tfeirn__V_15_15;

#line 477 "mode_robdd.tfeirn.m"
                    {
#line 477 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                    }
#line 477 "mode_robdd.tfeirn.m"
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
#line 477 "mode_robdd.tfeirn.m"
                  }
#line 476 "mode_robdd.tfeirn.m"
              }
#line 474 "mode_robdd.tfeirn.m"
          }
#line 472 "mode_robdd.tfeirn.m"
      }
#line 478 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 478 "mode_robdd.tfeirn.m"
  }
#line 93 "mode_robdd.tfeirn.m"
}

#line 89 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__at_most_one_of_2_f_0(
#line 89 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20,
#line 89 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 89 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 89 "mode_robdd.tfeirn.m"
{
#line 464 "mode_robdd.tfeirn.m"
  {
#line 464 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 464 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 465 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;
#line 458 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__V_12_12;
#line 458 "mode_robdd.tfeirn.m"
    MR_Integer mode_robdd__tfeirn__V_13_13;
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_14_14;
#line 458 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_14_14;

#line 11463 "mode_robdd.tfeirn.c"
    {
#line 11465 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11467 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 11469 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11471 "mode_robdd.tfeirn.c"
    }
#line 11473 "mode_robdd.tfeirn.c"
    {
#line 11475 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11477 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 11479 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11481 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 11483 "mode_robdd.tfeirn.c"
    }
#line 458 "mode_robdd.tfeirn.m"
    {
#line 458 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_14_14 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_22_22, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
#line 458 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_14_14 = (MR_Word) mode_robdd__tfeirn__conv0_V_14_14;
#line 458 "mode_robdd.tfeirn.m"
    {
#line 458 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_24, (MR_Word) mode_robdd__tfeirn__V_14_14);
    }
#line 458 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_13_13 = (MR_Integer) 1;
#line 458 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_12_12 <= mode_robdd__tfeirn__V_13_13);
#line 464 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 459 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 464 "mode_robdd.tfeirn.m"
    else
#line 462 "mode_robdd.tfeirn.m"
      {
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;
#line 460 "mode_robdd.tfeirn.m"
        MR_Integer mode_robdd__tfeirn__V_15_15;
#line 460 "mode_robdd.tfeirn.m"
        MR_Integer mode_robdd__tfeirn__V_16_16;
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_17_17;
#line 460 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv1_V_17_17;

#line 11526 "mode_robdd.tfeirn.c"
        {
#line 11528 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11530 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11532 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11534 "mode_robdd.tfeirn.c"
        }
#line 11536 "mode_robdd.tfeirn.c"
        {
#line 11538 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11540 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 11542 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11544 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 11546 "mode_robdd.tfeirn.c"
        }
#line 460 "mode_robdd.tfeirn.m"
        {
#line 460 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv1_V_17_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_26_26, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
        }
#line 460 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_17_17 = (MR_Word) mode_robdd__tfeirn__conv1_V_17_17;
#line 460 "mode_robdd.tfeirn.m"
        {
#line 460 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_15_15 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_28, (MR_Word) mode_robdd__tfeirn__V_17_17);
        }
#line 460 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_16_16 = (MR_Integer) 1;
#line 460 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__V_15_15 > mode_robdd__tfeirn__V_16_16);
#line 462 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 461 "mode_robdd.tfeirn.m"
          {
#line 461 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20);
          }
#line 462 "mode_robdd.tfeirn.m"
        else
#line 463 "mode_robdd.tfeirn.m"
          {
#line 463 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_18_18;
#line 463 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_19_19;

#line 463 "mode_robdd.tfeirn.m"
            {
#line 463 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_18_18 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__I_9);
            }
#line 463 "mode_robdd.tfeirn.m"
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
#line 463 "mode_robdd.tfeirn.m"
          }
#line 462 "mode_robdd.tfeirn.m"
      }
#line 464 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 464 "mode_robdd.tfeirn.m"
  }
#line 89 "mode_robdd.tfeirn.m"
}

#line 85 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__disj_vars_2_f_0(
#line 85 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_22,
#line 85 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 85 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X0_5)
#line 85 "mode_robdd.tfeirn.m"
{
#line 432 "mode_robdd.tfeirn.m"
  {
#line 432 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_6;
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 0)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 1)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 2)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 3)));
#line 432 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 4)));
#line 433 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn___N_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 5)));
#line 434 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 434 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
#line 434 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_18_18;
#line 434 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_18_18;

#line 11654 "mode_robdd.tfeirn.c"
    {
#line 11656 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11658 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 11660 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11662 "mode_robdd.tfeirn.c"
    }
#line 434 "mode_robdd.tfeirn.m"
    {
#line 434 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_18_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_24_24, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
    }
#line 434 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_18_18 = (MR_Word) mode_robdd__tfeirn__conv0_V_18_18;
#line 434 "mode_robdd.tfeirn.m"
    {
#line 434 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_24_24, (MR_Word) mode_robdd__tfeirn__V_18_18);
    }
#line 434 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 436 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 435 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__X0_5;
#line 436 "mode_robdd.tfeirn.m"
    else
#line 438 "mode_robdd.tfeirn.m"
      {
#line 436 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 436 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26;

#line 11691 "mode_robdd.tfeirn.c"
        {
#line 11693 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11695 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11697 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11699 "mode_robdd.tfeirn.c"
        }
#line 436 "mode_robdd.tfeirn.m"
        {
#line 436 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_26_26, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_8);
        }
#line 438 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 437 "mode_robdd.tfeirn.m"
          {
#line 437 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22);
          }
#line 438 "mode_robdd.tfeirn.m"
        else
#line 439 "mode_robdd.tfeirn.m"
          {
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_28_28;
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__VarsNF_13;
#line 439 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_VarsNF_13;
#line 452 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_30;
#line 452 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__Var1_14;
#line 452 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__VarsNF1_15;
#line 440 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29;
#line 440 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv3_Var1_14;
#line 440 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv2_VarsNF1_15;

#line 11738 "mode_robdd.tfeirn.c"
            {
#line 11740 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11742 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_27_27));
#line 11744 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11746 "mode_robdd.tfeirn.c"
            }
#line 439 "mode_robdd.tfeirn.m"
            {
#line 439 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_VarsNF_13 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_8);
            }
#line 439 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__VarsNF_13 = (MR_Word) mode_robdd__tfeirn__conv1_VarsNF_13;
#line 11755 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 11757 "mode_robdd.tfeirn.c"
            {
#line 11759 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11761 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29));
#line 11763 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11765 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_28_28));
#line 11767 "mode_robdd.tfeirn.c"
            }
#line 440 "mode_robdd.tfeirn.m"
            {
#line 440 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv3_Var1_14, (MR_Word) mode_robdd__tfeirn__VarsNF_13, &mode_robdd__tfeirn__conv2_VarsNF1_15);
            }
#line 440 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 440 "mode_robdd.tfeirn.m"
              {
#line 440 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__Var1_14 = ((MR_Word) mode_robdd__tfeirn__conv3_Var1_14);
#line 440 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__VarsNF1_15 = (MR_Word) mode_robdd__tfeirn__conv2_VarsNF1_15;
#line 440 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 440 "mode_robdd.tfeirn.m"
              }
#line 452 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 449 "mode_robdd.tfeirn.m"
              {
#line 449 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__Var2_16;
#line 449 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__VarsNF2_17;
#line 441 "mode_robdd.tfeirn.m"
                MR_Box mode_robdd__tfeirn__conv5_Var2_16;
#line 441 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__conv4_VarsNF2_17;

#line 441 "mode_robdd.tfeirn.m"
                {
#line 441 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv5_Var2_16, (MR_Word) mode_robdd__tfeirn__VarsNF1_15, &mode_robdd__tfeirn__conv4_VarsNF2_17);
                }
#line 441 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 441 "mode_robdd.tfeirn.m"
                  {
#line 441 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__Var2_16 = ((MR_Word) mode_robdd__tfeirn__conv5_Var2_16);
#line 441 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__VarsNF2_17 = (MR_Word) mode_robdd__tfeirn__conv4_VarsNF2_17;
#line 441 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
#line 441 "mode_robdd.tfeirn.m"
                  }
#line 449 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 446 "mode_robdd.tfeirn.m"
                  {
#line 442 "mode_robdd.tfeirn.m"
                    {
#line 442 "mode_robdd.tfeirn.m"
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__VarsNF2_17);
                    }
#line 446 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 443 "mode_robdd.tfeirn.m"
                      {
#line 443 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_19_19;
#line 443 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_20_20;

#line 443 "mode_robdd.tfeirn.m"
                        {
#line 443 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__V_19_19 = mode_robdd__implications__either_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__Var2_16, mode_robdd__tfeirn__I_10);
                        }
#line 445 "mode_robdd.tfeirn.m"
                        mode_robdd__tfeirn__V_20_20 = (MR_Integer) 0;
#line 443 "mode_robdd.tfeirn.m"
                        {
#line 443 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__X_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 2) = ((MR_Box) (mode_robdd__tfeirn__E_9));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 3) = ((MR_Box) (mode_robdd__tfeirn__V_19_19));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 4) = ((MR_Box) (mode_robdd__tfeirn__R_11));
#line 443 "mode_robdd.tfeirn.m"
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 5) = ((MR_Box) (mode_robdd__tfeirn__V_20_20));
#line 443 "mode_robdd.tfeirn.m"
                        }
#line 443 "mode_robdd.tfeirn.m"
                      }
#line 446 "mode_robdd.tfeirn.m"
                    else
#line 447 "mode_robdd.tfeirn.m"
                      {
#line 447 "mode_robdd.tfeirn.m"
                        MR_Word mode_robdd__tfeirn__V_21_21;

#line 447 "mode_robdd.tfeirn.m"
                        {
#line 447 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__V_21_21 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__VarsNF_13);
                        }
#line 447 "mode_robdd.tfeirn.m"
                        {
#line 447 "mode_robdd.tfeirn.m"
                          mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__X0_5, mode_robdd__tfeirn__V_21_21);
                        }
#line 447 "mode_robdd.tfeirn.m"
                      }
#line 446 "mode_robdd.tfeirn.m"
                  }
#line 449 "mode_robdd.tfeirn.m"
                else
#line 450 "mode_robdd.tfeirn.m"
                  {
#line 450 "mode_robdd.tfeirn.m"
                    mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__X0_5);
                  }
#line 449 "mode_robdd.tfeirn.m"
              }
#line 452 "mode_robdd.tfeirn.m"
            else
#line 453 "mode_robdd.tfeirn.m"
              {
#line 453 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22);
              }
#line 439 "mode_robdd.tfeirn.m"
          }
#line 438 "mode_robdd.tfeirn.m"
      }
#line 432 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_6;
#line 432 "mode_robdd.tfeirn.m"
  }
#line 85 "mode_robdd.tfeirn.m"
}

#line 81 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__conj_not_vars_2_f_0(
#line 81 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
#line 81 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 81 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 81 "mode_robdd.tfeirn.m"
{
#line 429 "mode_robdd.tfeirn.m"
  {
#line 429 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 429 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 430 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 423 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 423 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;

#line 11943 "mode_robdd.tfeirn.c"
    {
#line 11945 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11947 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 11949 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11951 "mode_robdd.tfeirn.c"
    }
#line 423 "mode_robdd.tfeirn.m"
    {
#line 423 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
#line 429 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 424 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 429 "mode_robdd.tfeirn.m"
    else
#line 427 "mode_robdd.tfeirn.m"
      {
#line 425 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 425 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
#line 425 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;
#line 425 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv0_V_12_12;

#line 11975 "mode_robdd.tfeirn.c"
        {
#line 11977 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11979 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 11981 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11983 "mode_robdd.tfeirn.c"
        }
#line 425 "mode_robdd.tfeirn.m"
        {
#line 425 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv0_V_12_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
        }
#line 425 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_12_12 = (MR_Word) mode_robdd__tfeirn__conv0_V_12_12;
#line 425 "mode_robdd.tfeirn.m"
        {
#line 425 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__V_12_12);
        }
#line 425 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 427 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 426 "mode_robdd.tfeirn.m"
          {
#line 426 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
          }
#line 427 "mode_robdd.tfeirn.m"
        else
#line 428 "mode_robdd.tfeirn.m"
          {
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21;
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 428 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_V_13_13;

#line 12021 "mode_robdd.tfeirn.c"
            {
#line 12023 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12025 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_20_20));
#line 12027 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12029 "mode_robdd.tfeirn.c"
            }
#line 428 "mode_robdd.tfeirn.m"
            {
#line 428 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_V_13_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, (MR_Word) mode_robdd__tfeirn__F_6, (MR_Word) mode_robdd__tfeirn__Vars_4);
            }
#line 428 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_13_13 = (MR_Word) mode_robdd__tfeirn__conv1_V_13_13;
#line 428 "mode_robdd.tfeirn.m"
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
#line 428 "mode_robdd.tfeirn.m"
          }
#line 427 "mode_robdd.tfeirn.m"
      }
#line 429 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 429 "mode_robdd.tfeirn.m"
  }
#line 81 "mode_robdd.tfeirn.m"
}

#line 77 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__conj_vars_2_f_0(
#line 77 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
#line 77 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__Vars_4,
#line 77 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 77 "mode_robdd.tfeirn.m"
{
#line 419 "mode_robdd.tfeirn.m"
  {
#line 419 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 419 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 420 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 413 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 413 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;

#line 12103 "mode_robdd.tfeirn.c"
    {
#line 12105 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12107 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 12109 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12111 "mode_robdd.tfeirn.c"
    }
#line 413 "mode_robdd.tfeirn.m"
    {
#line 413 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_6);
    }
#line 419 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 414 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 419 "mode_robdd.tfeirn.m"
    else
#line 417 "mode_robdd.tfeirn.m"
      {
#line 415 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 415 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
#line 415 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_12_12;
#line 415 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__conv0_V_12_12;

#line 12135 "mode_robdd.tfeirn.c"
        {
#line 12137 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12139 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 12141 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12143 "mode_robdd.tfeirn.c"
        }
#line 415 "mode_robdd.tfeirn.m"
        {
#line 415 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__conv0_V_12_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_7);
        }
#line 415 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__V_12_12 = (MR_Word) mode_robdd__tfeirn__conv0_V_12_12;
#line 415 "mode_robdd.tfeirn.m"
        {
#line 415 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__V_12_12);
        }
#line 415 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
#line 417 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 416 "mode_robdd.tfeirn.m"
          {
#line 416 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
          }
#line 417 "mode_robdd.tfeirn.m"
        else
#line 418 "mode_robdd.tfeirn.m"
          {
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21;
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 418 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_V_13_13;

#line 12181 "mode_robdd.tfeirn.c"
            {
#line 12183 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12185 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_20_20));
#line 12187 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12189 "mode_robdd.tfeirn.c"
            }
#line 418 "mode_robdd.tfeirn.m"
            {
#line 418 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_V_13_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, (MR_Word) mode_robdd__tfeirn__T_6, (MR_Word) mode_robdd__tfeirn__Vars_4);
            }
#line 418 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__V_13_13 = (MR_Word) mode_robdd__tfeirn__conv1_V_13_13;
#line 418 "mode_robdd.tfeirn.m"
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
#line 418 "mode_robdd.tfeirn.m"
          }
#line 417 "mode_robdd.tfeirn.m"
      }
#line 419 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 419 "mode_robdd.tfeirn.m"
  }
#line 77 "mode_robdd.tfeirn.m"
}

#line 73 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__imp_vars_3_f_0(
#line 73 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 73 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 73 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 73 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 73 "mode_robdd.tfeirn.m"
{
#line 409 "mode_robdd.tfeirn.m"
  {
#line 409 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 409 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 410 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 401 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

#line 12269 "mode_robdd.tfeirn.c"
    {
#line 12271 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12273 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12275 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12277 "mode_robdd.tfeirn.c"
    }
#line 12279 "mode_robdd.tfeirn.c"
    {
#line 12281 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12283 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12285 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12287 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12289 "mode_robdd.tfeirn.c"
    }
#line 401 "mode_robdd.tfeirn.m"
    {
#line 401 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
    }
#line 401 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 401 "mode_robdd.tfeirn.m"
      {
#line 401 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
      }
#line 409 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 402 "mode_robdd.tfeirn.m"
      {
#line 402 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
      }
#line 409 "mode_robdd.tfeirn.m"
    else
#line 405 "mode_robdd.tfeirn.m"
      {
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 403 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

#line 12323 "mode_robdd.tfeirn.c"
        {
#line 12325 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12327 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12329 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12331 "mode_robdd.tfeirn.c"
        }
#line 12333 "mode_robdd.tfeirn.c"
        {
#line 12335 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12337 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12339 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12341 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12343 "mode_robdd.tfeirn.c"
        }
#line 403 "mode_robdd.tfeirn.m"
        {
#line 403 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
#line 405 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 404 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 405 "mode_robdd.tfeirn.m"
        else
#line 407 "mode_robdd.tfeirn.m"
          {
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 405 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

#line 12367 "mode_robdd.tfeirn.c"
            {
#line 12369 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12371 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12373 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12375 "mode_robdd.tfeirn.c"
            }
#line 12377 "mode_robdd.tfeirn.c"
            {
#line 12379 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12381 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12383 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12385 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12387 "mode_robdd.tfeirn.c"
            }
#line 405 "mode_robdd.tfeirn.m"
            {
#line 405 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 407 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 406 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 407 "mode_robdd.tfeirn.m"
            else
#line 408 "mode_robdd.tfeirn.m"
              {
#line 408 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_14_14;
#line 408 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__V_15_15;

#line 408 "mode_robdd.tfeirn.m"
                {
#line 408 "mode_robdd.tfeirn.m"
                  mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                }
#line 408 "mode_robdd.tfeirn.m"
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
#line 408 "mode_robdd.tfeirn.m"
              }
#line 407 "mode_robdd.tfeirn.m"
          }
#line 405 "mode_robdd.tfeirn.m"
      }
#line 409 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 409 "mode_robdd.tfeirn.m"
  }
#line 73 "mode_robdd.tfeirn.m"
}

#line 69 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__neq_vars_3_f_0(
#line 69 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 69 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 69 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 69 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 69 "mode_robdd.tfeirn.m"
{
#line 397 "mode_robdd.tfeirn.m"
  {
#line 397 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 397 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 398 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

#line 384 "mode_robdd.tfeirn.m"
    {
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 384 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

#line 12488 "mode_robdd.tfeirn.c"
      {
#line 12490 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12492 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12494 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12496 "mode_robdd.tfeirn.c"
      }
#line 12498 "mode_robdd.tfeirn.c"
      {
#line 12500 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12502 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12504 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12506 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12508 "mode_robdd.tfeirn.c"
      }
#line 384 "mode_robdd.tfeirn.m"
      {
#line 384 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
#line 384 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 384 "mode_robdd.tfeirn.m"
        {
#line 384 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
#line 384 "mode_robdd.tfeirn.m"
    }
#line 385 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 385 "mode_robdd.tfeirn.m"
      {
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 385 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

#line 12537 "mode_robdd.tfeirn.c"
        {
#line 12539 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12541 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12543 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12545 "mode_robdd.tfeirn.c"
        }
#line 12547 "mode_robdd.tfeirn.c"
        {
#line 12549 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12551 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12553 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12555 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12557 "mode_robdd.tfeirn.c"
        }
#line 385 "mode_robdd.tfeirn.m"
        {
#line 385 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
#line 385 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 385 "mode_robdd.tfeirn.m"
          {
#line 385 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
          }
#line 385 "mode_robdd.tfeirn.m"
      }
#line 397 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 388 "mode_robdd.tfeirn.m"
      {
#line 388 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
      }
#line 397 "mode_robdd.tfeirn.m"
    else
#line 395 "mode_robdd.tfeirn.m"
      {
#line 390 "mode_robdd.tfeirn.m"
        {
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 390 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

#line 12595 "mode_robdd.tfeirn.c"
          {
#line 12597 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12599 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12601 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12603 "mode_robdd.tfeirn.c"
          }
#line 12605 "mode_robdd.tfeirn.c"
          {
#line 12607 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12609 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12611 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12613 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12615 "mode_robdd.tfeirn.c"
          }
#line 390 "mode_robdd.tfeirn.m"
          {
#line 390 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
#line 390 "mode_robdd.tfeirn.m"
          if (mode_robdd__tfeirn__succeeded)
#line 390 "mode_robdd.tfeirn.m"
            {
#line 390 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
#line 390 "mode_robdd.tfeirn.m"
        }
#line 391 "mode_robdd.tfeirn.m"
        if (!(mode_robdd__tfeirn__succeeded))
#line 391 "mode_robdd.tfeirn.m"
          {
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 391 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

#line 12644 "mode_robdd.tfeirn.c"
            {
#line 12646 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12648 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 12650 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12652 "mode_robdd.tfeirn.c"
            }
#line 12654 "mode_robdd.tfeirn.c"
            {
#line 12656 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12658 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 12660 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12662 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 12664 "mode_robdd.tfeirn.c"
            }
#line 391 "mode_robdd.tfeirn.m"
            {
#line 391 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 391 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 391 "mode_robdd.tfeirn.m"
              {
#line 391 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
              }
#line 391 "mode_robdd.tfeirn.m"
          }
#line 395 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 394 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 395 "mode_robdd.tfeirn.m"
        else
#line 396 "mode_robdd.tfeirn.m"
          {
#line 396 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 396 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;

#line 396 "mode_robdd.tfeirn.m"
            {
#line 396 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = mode_robdd__implications__neq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
            }
#line 396 "mode_robdd.tfeirn.m"
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
#line 396 "mode_robdd.tfeirn.m"
          }
#line 395 "mode_robdd.tfeirn.m"
      }
#line 397 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 397 "mode_robdd.tfeirn.m"
  }
#line 69 "mode_robdd.tfeirn.m"
}

#line 65 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__eq_vars_3_f_0(
#line 65 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
#line 65 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarA_5,
#line 65 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__VarB_6,
#line 65 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_7)
#line 65 "mode_robdd.tfeirn.m"
{
#line 379 "mode_robdd.tfeirn.m"
  {
#line 379 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
#line 379 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
#line 380 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

#line 366 "mode_robdd.tfeirn.m"
    {
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 366 "mode_robdd.tfeirn.m"
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

#line 12772 "mode_robdd.tfeirn.c"
      {
#line 12774 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12776 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12778 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12780 "mode_robdd.tfeirn.c"
      }
#line 12782 "mode_robdd.tfeirn.c"
      {
#line 12784 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12786 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12788 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12790 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12792 "mode_robdd.tfeirn.c"
      }
#line 366 "mode_robdd.tfeirn.m"
      {
#line 366 "mode_robdd.tfeirn.m"
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
#line 366 "mode_robdd.tfeirn.m"
      if (mode_robdd__tfeirn__succeeded)
#line 366 "mode_robdd.tfeirn.m"
        {
#line 366 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
#line 366 "mode_robdd.tfeirn.m"
    }
#line 367 "mode_robdd.tfeirn.m"
    if (!(mode_robdd__tfeirn__succeeded))
#line 367 "mode_robdd.tfeirn.m"
      {
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 367 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

#line 12821 "mode_robdd.tfeirn.c"
        {
#line 12823 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12825 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12827 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12829 "mode_robdd.tfeirn.c"
        }
#line 12831 "mode_robdd.tfeirn.c"
        {
#line 12833 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12835 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12837 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12839 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12841 "mode_robdd.tfeirn.c"
        }
#line 367 "mode_robdd.tfeirn.m"
        {
#line 367 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
#line 367 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 367 "mode_robdd.tfeirn.m"
          {
#line 367 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
          }
#line 367 "mode_robdd.tfeirn.m"
      }
#line 379 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 370 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
#line 379 "mode_robdd.tfeirn.m"
    else
#line 377 "mode_robdd.tfeirn.m"
      {
#line 372 "mode_robdd.tfeirn.m"
        {
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 372 "mode_robdd.tfeirn.m"
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

#line 12876 "mode_robdd.tfeirn.c"
          {
#line 12878 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12880 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12882 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12884 "mode_robdd.tfeirn.c"
          }
#line 12886 "mode_robdd.tfeirn.c"
          {
#line 12888 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12890 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12892 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12894 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12896 "mode_robdd.tfeirn.c"
          }
#line 372 "mode_robdd.tfeirn.m"
          {
#line 372 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
#line 372 "mode_robdd.tfeirn.m"
          if (mode_robdd__tfeirn__succeeded)
#line 372 "mode_robdd.tfeirn.m"
            {
#line 372 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
#line 372 "mode_robdd.tfeirn.m"
        }
#line 373 "mode_robdd.tfeirn.m"
        if (!(mode_robdd__tfeirn__succeeded))
#line 373 "mode_robdd.tfeirn.m"
          {
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 373 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

#line 12925 "mode_robdd.tfeirn.c"
            {
#line 12927 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12929 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 12931 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12933 "mode_robdd.tfeirn.c"
            }
#line 12935 "mode_robdd.tfeirn.c"
            {
#line 12937 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12939 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 12941 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12943 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 12945 "mode_robdd.tfeirn.c"
            }
#line 373 "mode_robdd.tfeirn.m"
            {
#line 373 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
#line 373 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 373 "mode_robdd.tfeirn.m"
              {
#line 373 "mode_robdd.tfeirn.m"
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
              }
#line 373 "mode_robdd.tfeirn.m"
          }
#line 377 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 376 "mode_robdd.tfeirn.m"
          {
#line 376 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
          }
#line 377 "mode_robdd.tfeirn.m"
        else
#line 378 "mode_robdd.tfeirn.m"
          {
#line 378 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_14_14;
#line 378 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_15_15;

#line 378 "mode_robdd.tfeirn.m"
            {
#line 378 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_14_14 = mode_robdd__equiv_vars__add_equality_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__E_10);
            }
#line 378 "mode_robdd.tfeirn.m"
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
#line 378 "mode_robdd.tfeirn.m"
          }
#line 377 "mode_robdd.tfeirn.m"
      }
#line 379 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__4_4;
#line 379 "mode_robdd.tfeirn.m"
  }
#line 65 "mode_robdd.tfeirn.m"
}

#line 61 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__not_var_2_f_0(
#line 61 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
#line 61 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 61 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 61 "mode_robdd.tfeirn.m"
{
#line 361 "mode_robdd.tfeirn.m"
  {
#line 361 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 361 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 362 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 355 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18;

#line 13051 "mode_robdd.tfeirn.c"
    {
#line 13053 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13055 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 13057 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13059 "mode_robdd.tfeirn.c"
    }
#line 13061 "mode_robdd.tfeirn.c"
    {
#line 13063 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13065 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17));
#line 13067 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13069 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_16_16));
#line 13071 "mode_robdd.tfeirn.c"
    }
#line 355 "mode_robdd.tfeirn.m"
    {
#line 355 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
#line 361 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 356 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 361 "mode_robdd.tfeirn.m"
    else
#line 359 "mode_robdd.tfeirn.m"
      {
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 357 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22;

#line 13095 "mode_robdd.tfeirn.c"
        {
#line 13097 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13099 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 13101 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13103 "mode_robdd.tfeirn.c"
        }
#line 13105 "mode_robdd.tfeirn.c"
        {
#line 13107 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13109 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21));
#line 13111 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13113 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_20_20));
#line 13115 "mode_robdd.tfeirn.c"
        }
#line 357 "mode_robdd.tfeirn.m"
        {
#line 357 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__T_7, mode_robdd__tfeirn__V_4);
        }
#line 359 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 358 "mode_robdd.tfeirn.m"
          {
#line 358 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14);
          }
#line 359 "mode_robdd.tfeirn.m"
        else
#line 360 "mode_robdd.tfeirn.m"
          {
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_12_12;
#line 360 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 13146 "mode_robdd.tfeirn.c"
            {
#line 13148 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13150 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 13152 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13154 "mode_robdd.tfeirn.c"
            }
#line 13156 "mode_robdd.tfeirn.c"
            {
#line 13158 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13160 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25));
#line 13162 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13164 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_24_24));
#line 13166 "mode_robdd.tfeirn.c"
            }
#line 360 "mode_robdd.tfeirn.m"
            {
#line 360 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
#line 360 "mode_robdd.tfeirn.m"
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
#line 360 "mode_robdd.tfeirn.m"
          }
#line 359 "mode_robdd.tfeirn.m"
      }
#line 361 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 361 "mode_robdd.tfeirn.m"
  }
#line 61 "mode_robdd.tfeirn.m"
}

#line 57 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__var_2_f_0(
#line 57 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
#line 57 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__V_4,
#line 57 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__X_5)
#line 57 "mode_robdd.tfeirn.m"
{
#line 351 "mode_robdd.tfeirn.m"
  {
#line 351 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
#line 351 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
#line 352 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 345 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18;

#line 13242 "mode_robdd.tfeirn.c"
    {
#line 13244 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13246 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 13248 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13250 "mode_robdd.tfeirn.c"
    }
#line 13252 "mode_robdd.tfeirn.c"
    {
#line 13254 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13256 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17));
#line 13258 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13260 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_16_16));
#line 13262 "mode_robdd.tfeirn.c"
    }
#line 345 "mode_robdd.tfeirn.m"
    {
#line 345 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
    }
#line 351 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 346 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
#line 351 "mode_robdd.tfeirn.m"
    else
#line 349 "mode_robdd.tfeirn.m"
      {
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 347 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22;

#line 13286 "mode_robdd.tfeirn.c"
        {
#line 13288 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13290 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 13292 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13294 "mode_robdd.tfeirn.c"
        }
#line 13296 "mode_robdd.tfeirn.c"
        {
#line 13298 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13300 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21));
#line 13302 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13304 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_20_20));
#line 13306 "mode_robdd.tfeirn.c"
        }
#line 347 "mode_robdd.tfeirn.m"
        {
#line 347 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__F_7, mode_robdd__tfeirn__V_4);
        }
#line 349 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 348 "mode_robdd.tfeirn.m"
          {
#line 348 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14);
          }
#line 349 "mode_robdd.tfeirn.m"
        else
#line 350 "mode_robdd.tfeirn.m"
          {
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_12_12;
#line 350 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_13_13;

#line 13337 "mode_robdd.tfeirn.c"
            {
#line 13339 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13341 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 13343 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13345 "mode_robdd.tfeirn.c"
            }
#line 13347 "mode_robdd.tfeirn.c"
            {
#line 13349 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13351 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25));
#line 13353 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13355 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_24_24));
#line 13357 "mode_robdd.tfeirn.c"
            }
#line 350 "mode_robdd.tfeirn.m"
            {
#line 350 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_12_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
            }
#line 350 "mode_robdd.tfeirn.m"
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
#line 350 "mode_robdd.tfeirn.m"
          }
#line 349 "mode_robdd.tfeirn.m"
      }
#line 351 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 351 "mode_robdd.tfeirn.m"
  }
#line 57 "mode_robdd.tfeirn.m"
}

#line 289 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_4(
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 289 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 289 "mode_robdd.tfeirn.m"
{
#line 289 "mode_robdd.tfeirn.m"
  {
#line 289 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 289 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 289 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv12_LambdaHeadVar__3_72;

#line 289 "mode_robdd.tfeirn.m"
    {
#line 289 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv12_LambdaHeadVar__3_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 289 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv12_LambdaHeadVar__3_72));
#line 289 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 289 "mode_robdd.tfeirn.m"
  }
#line 289 "mode_robdd.tfeirn.m"
}

#line 287 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_3(
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 287 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 287 "mode_robdd.tfeirn.m"
{
#line 287 "mode_robdd.tfeirn.m"
  {
#line 287 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 287 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 287 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv10_LambdaHeadVar__3_66;

#line 287 "mode_robdd.tfeirn.m"
    {
#line 287 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv10_LambdaHeadVar__3_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 287 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv10_LambdaHeadVar__3_66));
#line 287 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 287 "mode_robdd.tfeirn.m"
  }
#line 287 "mode_robdd.tfeirn.m"
}

#line 279 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_2(
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 279 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 279 "mode_robdd.tfeirn.m"
{
#line 279 "mode_robdd.tfeirn.m"
  {
#line 279 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 279 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 279 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv8_LambdaHeadVar__3_58;

#line 279 "mode_robdd.tfeirn.m"
    {
#line 279 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv8_LambdaHeadVar__3_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 279 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv8_LambdaHeadVar__3_58));
#line 279 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 279 "mode_robdd.tfeirn.m"
  }
#line 279 "mode_robdd.tfeirn.m"
}

#line 277 "mode_robdd.tfeirn.m"
static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_1(
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__closure_arg,
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 277 "mode_robdd.tfeirn.m"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 277 "mode_robdd.tfeirn.m"
{
#line 277 "mode_robdd.tfeirn.m"
  {
#line 277 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
#line 277 "mode_robdd.tfeirn.m"
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
#line 277 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv6_LambdaHeadVar__3_52;

#line 277 "mode_robdd.tfeirn.m"
    {
#line 277 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv6_LambdaHeadVar__3_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 277 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv6_LambdaHeadVar__3_52));
#line 277 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__wrapper_arg_3;
#line 277 "mode_robdd.tfeirn.m"
  }
#line 277 "mode_robdd.tfeirn.m"
}

#line 52 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0(
#line 52 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 52 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 52 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 52 "mode_robdd.tfeirn.m"
{
#line 250 "mode_robdd.tfeirn.m"
  {
#line 250 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__X_16;
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 249 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__NA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 250 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__NB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 251 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_92_92;

#line 251 "mode_robdd.tfeirn.m"
    {
#line 251 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_92_92 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
    }
#line 251 "mode_robdd.tfeirn.m"
    {
#line 251 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA0_8, mode_robdd__tfeirn__V_92_92);
    }
#line 253 "mode_robdd.tfeirn.m"
    if (mode_robdd__tfeirn__succeeded)
#line 252 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__2_2;
#line 253 "mode_robdd.tfeirn.m"
    else
#line 255 "mode_robdd.tfeirn.m"
      {
#line 253 "mode_robdd.tfeirn.m"
        MR_Word mode_robdd__tfeirn__V_93_93;

#line 253 "mode_robdd.tfeirn.m"
        {
#line 253 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__V_93_93 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
        }
#line 253 "mode_robdd.tfeirn.m"
        {
#line 253 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RB0_14, mode_robdd__tfeirn__V_93_93);
        }
#line 255 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 254 "mode_robdd.tfeirn.m"
          mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__1_1;
#line 255 "mode_robdd.tfeirn.m"
        else
#line 256 "mode_robdd.tfeirn.m"
          {
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_87_87;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_89;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_90_90;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TypeInfo_91_91;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__T_17;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__F_18;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__E_19;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__I_20;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__R_21;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EA_22;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EB_23;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IA_24;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IB_25;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA_26;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB_27;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TAB_28;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FAB_29;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__TBA_30;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__FBA_31;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EAB_32;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EBA_33;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA1_34;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA2_37;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EA1_38;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RA3_39;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IA1_40;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB1_41;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB2_42;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__EB1_43;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__RB3_44;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__IB1_45;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_46_46 = (MR_Integer) 0;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_47_47;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_48_48;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_49_49;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_55_55;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_61_61;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_62_62;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_63_63;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_69_69;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_75_75;
#line 256 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__V_76_76;
#line 257 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv0_T_17;
#line 258 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv1_F_18;
#line 263 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv2_TAB_28;
#line 264 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv3_FAB_29;
#line 267 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv4_TBA_30;
#line 268 "mode_robdd.tfeirn.m"
            MR_Word mode_robdd__tfeirn__conv5_FBA_31;
#line 277 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv7_RA1_34;
#line 279 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv9_RA2_37;
#line 287 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv11_RB1_41;
#line 289 "mode_robdd.tfeirn.m"
            MR_Box mode_robdd__tfeirn__conv13_RB2_42;

#line 13723 "mode_robdd.tfeirn.c"
            {
#line 13725 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13727 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_87_87, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_86_86));
#line 13729 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_87_87, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13731 "mode_robdd.tfeirn.c"
            }
#line 257 "mode_robdd.tfeirn.m"
            {
#line 257 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv0_T_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TA0_4, (MR_Word) mode_robdd__tfeirn__TB0_10);
            }
#line 257 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__T_17 = (MR_Word) mode_robdd__tfeirn__conv0_T_17;
#line 258 "mode_robdd.tfeirn.m"
            {
#line 258 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_F_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FA0_5, (MR_Word) mode_robdd__tfeirn__FB0_11);
            }
#line 258 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__F_18 = (MR_Word) mode_robdd__tfeirn__conv1_F_18;
#line 263 "mode_robdd.tfeirn.m"
            {
#line 263 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv2_TAB_28 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TA0_4, (MR_Word) mode_robdd__tfeirn__TB0_10);
            }
#line 263 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__TAB_28 = (MR_Word) mode_robdd__tfeirn__conv2_TAB_28;
#line 264 "mode_robdd.tfeirn.m"
            {
#line 264 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv3_FAB_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FA0_5, (MR_Word) mode_robdd__tfeirn__FB0_11);
            }
#line 264 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__FAB_29 = (MR_Word) mode_robdd__tfeirn__conv3_FAB_29;
#line 265 "mode_robdd.tfeirn.m"
            {
#line 265 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_47_47 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TAB_28, mode_robdd__tfeirn__EA0_6);
            }
#line 265 "mode_robdd.tfeirn.m"
            {
#line 265 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EA_22 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FAB_29, mode_robdd__tfeirn__V_47_47);
            }
#line 267 "mode_robdd.tfeirn.m"
            {
#line 267 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv4_TBA_30 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TB0_10, (MR_Word) mode_robdd__tfeirn__TA0_4);
            }
#line 267 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__TBA_30 = (MR_Word) mode_robdd__tfeirn__conv4_TBA_30;
#line 268 "mode_robdd.tfeirn.m"
            {
#line 268 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv5_FBA_31 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FB0_11, (MR_Word) mode_robdd__tfeirn__FA0_5);
            }
#line 268 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__FBA_31 = (MR_Word) mode_robdd__tfeirn__conv5_FBA_31;
#line 269 "mode_robdd.tfeirn.m"
            {
#line 269 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_48_48 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TBA_30, mode_robdd__tfeirn__EB0_12);
            }
#line 269 "mode_robdd.tfeirn.m"
            {
#line 269 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EB_23 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FBA_31, mode_robdd__tfeirn__V_48_48);
            }
#line 259 "mode_robdd.tfeirn.m"
            {
#line 259 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__E_19 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 271 "mode_robdd.tfeirn.m"
            {
#line 271 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EAB_32 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 272 "mode_robdd.tfeirn.m"
            {
#line 272 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IA_24 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EAB_32, mode_robdd__tfeirn__IA0_7);
            }
#line 274 "mode_robdd.tfeirn.m"
            {
#line 274 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EBA_33 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
#line 275 "mode_robdd.tfeirn.m"
            {
#line 275 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IB_25 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EBA_33, mode_robdd__tfeirn__IB0_13);
            }
#line 260 "mode_robdd.tfeirn.m"
            {
#line 260 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__I_20 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
#line 13825 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 13827 "mode_robdd.tfeirn.c"
            {
#line 13829 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13831 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88));
#line 13833 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13835 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_87_87));
#line 13837 "mode_robdd.tfeirn.c"
            }
#line 13839 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_90_90 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 13841 "mode_robdd.tfeirn.c"
            {
#line 13843 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13845 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_91_91, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_90_90));
#line 13847 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_91_91, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13849 "mode_robdd.tfeirn.c"
            }
#line 277 "mode_robdd.tfeirn.m"
            {
#line 277 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_1));
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 277 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_49_49, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 277 "mode_robdd.tfeirn.m"
            }
#line 277 "mode_robdd.tfeirn.m"
            {
#line 277 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv7_RA1_34 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__V_49_49, mode_robdd__tfeirn__TAB_28, ((MR_Box) (mode_robdd__tfeirn__RA0_8)));
            }
#line 277 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RA1_34 = ((MR_Word) mode_robdd__tfeirn__conv7_RA1_34);
#line 279 "mode_robdd.tfeirn.m"
            {
#line 279 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_2));
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 279 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_55_55, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 279 "mode_robdd.tfeirn.m"
            }
#line 279 "mode_robdd.tfeirn.m"
            {
#line 279 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv9_RA2_37 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__V_55_55, mode_robdd__tfeirn__FAB_29, ((MR_Box) (mode_robdd__tfeirn__RA1_34)));
            }
#line 279 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RA2_37 = ((MR_Word) mode_robdd__tfeirn__conv9_RA2_37);
#line 282 "mode_robdd.tfeirn.m"
            {
#line 282 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_61_61 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
#line 282 "mode_robdd.tfeirn.m"
            {
#line 282 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EA1_38 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_61_61, mode_robdd__tfeirn__EA0_6);
            }
#line 283 "mode_robdd.tfeirn.m"
            {
#line 283 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RA3_39 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA1_38, mode_robdd__tfeirn__RA2_37);
            }
#line 284 "mode_robdd.tfeirn.m"
            {
#line 284 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_62_62 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
#line 284 "mode_robdd.tfeirn.m"
            {
#line 284 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IA1_40 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_62_62, mode_robdd__tfeirn__IA0_7);
            }
#line 285 "mode_robdd.tfeirn.m"
            {
#line 285 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RA_26 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA1_40, mode_robdd__tfeirn__RA3_39);
            }
#line 287 "mode_robdd.tfeirn.m"
            {
#line 287 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_3));
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 287 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_63_63, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 287 "mode_robdd.tfeirn.m"
            }
#line 287 "mode_robdd.tfeirn.m"
            {
#line 287 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv11_RB1_41 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__V_63_63, mode_robdd__tfeirn__TBA_30, ((MR_Box) (mode_robdd__tfeirn__RB0_14)));
            }
#line 287 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RB1_41 = ((MR_Word) mode_robdd__tfeirn__conv11_RB1_41);
#line 289 "mode_robdd.tfeirn.m"
            {
#line 289 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_4));
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 289 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_69_69, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 289 "mode_robdd.tfeirn.m"
            }
#line 289 "mode_robdd.tfeirn.m"
            {
#line 289 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv13_RB2_42 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__V_69_69, mode_robdd__tfeirn__FBA_31, ((MR_Box) (mode_robdd__tfeirn__RB1_41)));
            }
#line 289 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__RB2_42 = ((MR_Word) mode_robdd__tfeirn__conv13_RB2_42);
#line 292 "mode_robdd.tfeirn.m"
            {
#line 292 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_75_75 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
#line 292 "mode_robdd.tfeirn.m"
            {
#line 292 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__EB1_43 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_75_75, mode_robdd__tfeirn__EB0_12);
            }
#line 293 "mode_robdd.tfeirn.m"
            {
#line 293 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RB3_44 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB1_43, mode_robdd__tfeirn__RB2_42);
            }
#line 294 "mode_robdd.tfeirn.m"
            {
#line 294 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__V_76_76 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB_25, mode_robdd__tfeirn__IA_24);
            }
#line 294 "mode_robdd.tfeirn.m"
            {
#line 294 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__IB1_45 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_76_76, mode_robdd__tfeirn__IB0_13);
            }
#line 295 "mode_robdd.tfeirn.m"
            {
#line 295 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__RB_27 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB1_45, mode_robdd__tfeirn__RB3_44);
            }
#line 261 "mode_robdd.tfeirn.m"
            {
#line 261 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__R_21 = mercury__robdd__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA_26, mode_robdd__tfeirn__RB_27);
            }
#line 256 "mode_robdd.tfeirn.m"
            {
#line 256 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__X_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 0) = ((MR_Box) (mode_robdd__tfeirn__T_17));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 1) = ((MR_Box) (mode_robdd__tfeirn__F_18));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 2) = ((MR_Box) (mode_robdd__tfeirn__E_19));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 3) = ((MR_Box) (mode_robdd__tfeirn__I_20));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 4) = ((MR_Box) (mode_robdd__tfeirn__R_21));
#line 256 "mode_robdd.tfeirn.m"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 5) = ((MR_Box) (mode_robdd__tfeirn__V_46_46));
#line 256 "mode_robdd.tfeirn.m"
            }
#line 256 "mode_robdd.tfeirn.m"
          }
#line 255 "mode_robdd.tfeirn.m"
      }
#line 250 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__X_16;
#line 250 "mode_robdd.tfeirn.m"
  }
#line 52 "mode_robdd.tfeirn.m"
}

#line 48 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__f_times_2_f_0(
#line 48 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_44,
#line 48 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
#line 48 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
#line 48 "mode_robdd.tfeirn.m"
{
#line 239 "mode_robdd.tfeirn.m"
  {
#line 239 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_46_46;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TA1_16;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TB1_17;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FA1_18;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FB1_19;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EA1_20;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EB1_21;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IA1_22;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IB1_23;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RA1_24;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__RB1_25;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TU_26;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__FU_27;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__EU_28;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__IU_29;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_32_32;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_33_33;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_34_34;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_35_35;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_36_36;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_37_37;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_38_38;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_39_39;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_40_40;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_41_41;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_42_42;
#line 239 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_43_43;
#line 237 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
#line 237 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
#line 240 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_TU_26;
#line 241 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_FU_27;
#line 244 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_30_30;
#line 246 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_31_31;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv2_V_32_32;
#line 238 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv3_V_33_33;

#line 14147 "mode_robdd.tfeirn.c"
    {
#line 14149 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14151 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_46_46, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_45_45));
#line 14153 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_46_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_44));
#line 14155 "mode_robdd.tfeirn.c"
    }
#line 239 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_37_37 = (MR_Integer) 0;
#line 240 "mode_robdd.tfeirn.m"
    {
#line 240 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_TU_26 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__TA_4, (MR_Word) mode_robdd__tfeirn__TB_10);
    }
#line 240 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TU_26 = (MR_Word) mode_robdd__tfeirn__conv0_TU_26;
#line 241 "mode_robdd.tfeirn.m"
    {
#line 241 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_FU_27 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__FA_5, (MR_Word) mode_robdd__tfeirn__FB_11);
    }
#line 241 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FU_27 = (MR_Word) mode_robdd__tfeirn__conv1_FU_27;
#line 242 "mode_robdd.tfeirn.m"
    {
#line 242 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__EU_28 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__EB_12);
    }
#line 243 "mode_robdd.tfeirn.m"
    {
#line 243 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__IU_29 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__IB_13);
    }
#line 245 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_40_40 = (MR_Integer) 0;
#line 245 "mode_robdd.tfeirn.m"
    {
#line 245 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 4) = ((MR_Box) (mode_robdd__tfeirn__RA_8));
#line 245 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_39_39, 5) = ((MR_Box) (mode_robdd__tfeirn__V_40_40));
#line 245 "mode_robdd.tfeirn.m"
    }
#line 245 "mode_robdd.tfeirn.m"
    {
#line 245 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_38_38 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__V_39_39);
    }
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TA1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 0)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FA1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 1)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__EA1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 2)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__IA1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 3)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__RA1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 4)));
#line 244 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_38_38, (MR_Integer) 5)));
#line 247 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_43_43 = (MR_Integer) 0;
#line 247 "mode_robdd.tfeirn.m"
    {
#line 247 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_14));
#line 247 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_42_42, 5) = ((MR_Box) (mode_robdd__tfeirn__V_43_43));
#line 247 "mode_robdd.tfeirn.m"
    }
#line 247 "mode_robdd.tfeirn.m"
    {
#line 247 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_41_41 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__V_42_42);
    }
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__TB1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 0)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__FB1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 1)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__EB1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 2)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__IB1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 3)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__RB1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 4)));
#line 246 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__V_41_41, (MR_Integer) 5)));
#line 238 "mode_robdd.tfeirn.m"
    {
#line 238 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv2_V_32_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__TA1_16, (MR_Word) mode_robdd__tfeirn__TB1_17);
    }
#line 238 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_32_32 = (MR_Word) mode_robdd__tfeirn__conv2_V_32_32;
#line 238 "mode_robdd.tfeirn.m"
    {
#line 238 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv3_V_33_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__FA1_18, (MR_Word) mode_robdd__tfeirn__FB1_19);
    }
#line 238 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_33_33 = (MR_Word) mode_robdd__tfeirn__conv3_V_33_33;
#line 239 "mode_robdd.tfeirn.m"
    {
#line 239 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_34_34 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA1_20, mode_robdd__tfeirn__EB1_21);
    }
#line 239 "mode_robdd.tfeirn.m"
    {
#line 239 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_35_35 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA1_22, mode_robdd__tfeirn__IB1_23);
    }
#line 239 "mode_robdd.tfeirn.m"
    {
#line 239 "mode_robdd.tfeirn.m"
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
#line 239 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__3_3;
#line 239 "mode_robdd.tfeirn.m"
  }
#line 48 "mode_robdd.tfeirn.m"
}

#line 44 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__zero_0_f_0(
#line 44 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8)
#line 44 "mode_robdd.tfeirn.m"
{
#line 235 "mode_robdd.tfeirn.m"
  {
#line 235 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_2_2;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_2_2;
#line 235 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_3_3;

#line 14345 "mode_robdd.tfeirn.c"
    {
#line 14347 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14349 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_9_9));
#line 14351 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_8));
#line 14353 "mode_robdd.tfeirn.c"
    }
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_2_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 235 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_2_2 = (MR_Word) mode_robdd__tfeirn__conv0_V_2_2;
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 235 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_3_3 = (MR_Word) mode_robdd__tfeirn__conv1_V_3_3;
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_5_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_6_6 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 235 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_7_7 = (MR_Integer) 1;
#line 235 "mode_robdd.tfeirn.m"
    {
#line 235 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__V_2_2));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__V_3_3));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__V_4_4));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 235 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 235 "mode_robdd.tfeirn.m"
    }
#line 235 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__1_1;
#line 235 "mode_robdd.tfeirn.m"
  }
#line 44 "mode_robdd.tfeirn.m"
}

#line 41 "mode_robdd.tfeirn.m"
MR_Word MR_CALL 
mode_robdd__tfeirn__one_0_f_0(
#line 41 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8)
#line 41 "mode_robdd.tfeirn.m"
{
#line 233 "mode_robdd.tfeirn.m"
  {
#line 233 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_2_2;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_3_3;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_4_4;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_5_5;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_6_6;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_7_7;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv0_V_2_2;
#line 233 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__conv1_V_3_3;

#line 14445 "mode_robdd.tfeirn.c"
    {
#line 14447 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14449 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_9_9));
#line 14451 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_8));
#line 14453 "mode_robdd.tfeirn.c"
    }
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_V_2_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 233 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_2_2 = (MR_Word) mode_robdd__tfeirn__conv0_V_2_2;
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_V_3_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
#line 233 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_3_3 = (MR_Word) mode_robdd__tfeirn__conv1_V_3_3;
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_4_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_5_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_6_6 = mercury__robdd__one_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
#line 233 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__V_7_7 = (MR_Integer) 1;
#line 233 "mode_robdd.tfeirn.m"
    {
#line 233 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__V_2_2));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__V_3_3));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__V_4_4));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__V_5_5));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__V_6_6));
#line 233 "mode_robdd.tfeirn.m"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__V_7_7));
#line 233 "mode_robdd.tfeirn.m"
    }
#line 233 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__1_1;
#line 233 "mode_robdd.tfeirn.m"
  }
#line 41 "mode_robdd.tfeirn.m"
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
