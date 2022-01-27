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
#include "int.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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


#line 184 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1;

#line 187 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1;

#line 190 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1;

#line 193 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1;

#line 196 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

#line 199 "mode_robdd.tfeirn.c"
static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6];

#line 202 "mode_robdd.tfeirn.c"
static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6];

#line 205 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDesc mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0;

#line 208 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1];

#line 211 "mode_robdd.tfeirn.c"
static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1];

#line 214 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1];

#line 217 "mode_robdd.tfeirn.c"
static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1];

#line 220 "mode_robdd.tfeirn.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0;

#line 223 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
#line 226 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 228 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 230 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

#line 233 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
#line 236 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 238 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_2,
#line 240 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3,
#line 242 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_4);

#line 245 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
#line 248 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 250 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

#line 253 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
#line 256 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_1,
#line 258 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 260 "mode_robdd.tfeirn.c"
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
  MR_Word mode_robdd__tfeirn__HeadVar__3_18,
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_19);

#line 772 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__772__1_4_f_0(
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__2_12,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_13,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_14);

#line 289 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_70,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_71);

#line 287 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_64,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_65);

#line 279 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_56,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_57);

#line 277 "mode_robdd.tfeirn.m"
static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__E_19,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_50,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_51);

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



#line 640 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 648 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 656 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_robdd_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 664 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 672 "mode_robdd.tfeirn.c"
static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__tfeirn__term__pti_var_1__pseudo_1
  }
};

#line 680 "mode_robdd.tfeirn.c"
static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6] = {
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 690 "mode_robdd.tfeirn.c"
static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6] = {
  (MR_String) "true_vars",
  (MR_String) "false_vars",
  (MR_String) "equiv_vars",
  (MR_String) "imp_vars",
  (MR_String) "robdd",
  (MR_String) "normalised"
};

#line 700 "mode_robdd.tfeirn.c"
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

#line 715 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1] = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0
};

#line 720 "mode_robdd.tfeirn.c"
static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0
  }
};

#line 729 "mode_robdd.tfeirn.c"
static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1] = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0
};

#line 734 "mode_robdd.tfeirn.c"
static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1] = {
  (MR_Integer) 0
};

#line 739 "mode_robdd.tfeirn.c"
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

#line 756 "mode_robdd.tfeirn.c"
static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 764 "mode_robdd.tfeirn.c"
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

#line 781 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
#line 784 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 786 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 788 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
#line 790 "mode_robdd.tfeirn.c"
{
#line 792 "mode_robdd.tfeirn.c"
  {
#line 794 "mode_robdd.tfeirn.c"
    MR_bool mode_robdd__tfeirn__succeeded;

#line 797 "mode_robdd.tfeirn.c"
    {
#line 799 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 802 "mode_robdd.tfeirn.c"
    return mode_robdd__tfeirn__succeeded;
#line 804 "mode_robdd.tfeirn.c"
  }
#line 806 "mode_robdd.tfeirn.c"
}

#line 809 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
#line 812 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 814 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_2,
#line 816 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3,
#line 818 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_4)
#line 820 "mode_robdd.tfeirn.c"
{
#line 822 "mode_robdd.tfeirn.c"
  {
#line 824 "mode_robdd.tfeirn.c"
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__1_1;

#line 827 "mode_robdd.tfeirn.c"
    {
#line 829 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn____Compare____tfeirn_1_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), &mode_robdd__tfeirn__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_4));
    }
#line 832 "mode_robdd.tfeirn.c"
    *mode_robdd__tfeirn__wrapper_arg_2 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__1_1));
#line 834 "mode_robdd.tfeirn.c"
  }
#line 836 "mode_robdd.tfeirn.c"
}

#line 839 "mode_robdd.tfeirn.c"
static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
#line 842 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
#line 844 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
#line 846 "mode_robdd.tfeirn.c"
{
#line 848 "mode_robdd.tfeirn.c"
  {
#line 850 "mode_robdd.tfeirn.c"
    MR_bool mode_robdd__tfeirn__succeeded;

#line 853 "mode_robdd.tfeirn.c"
    {
#line 855 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_0_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 858 "mode_robdd.tfeirn.c"
    return mode_robdd__tfeirn__succeeded;
#line 860 "mode_robdd.tfeirn.c"
  }
#line 862 "mode_robdd.tfeirn.c"
}

#line 865 "mode_robdd.tfeirn.c"
static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
#line 868 "mode_robdd.tfeirn.c"
  MR_Box * mode_robdd__tfeirn__wrapper_arg_1,
#line 870 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
#line 872 "mode_robdd.tfeirn.c"
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
#line 874 "mode_robdd.tfeirn.c"
{
#line 876 "mode_robdd.tfeirn.c"
  {
#line 878 "mode_robdd.tfeirn.c"
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__1_1;

#line 881 "mode_robdd.tfeirn.c"
    {
#line 883 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn____Compare____tfeirn_0_0(&mode_robdd__tfeirn__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 886 "mode_robdd.tfeirn.c"
    *mode_robdd__tfeirn__wrapper_arg_1 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__1_1));
#line 888 "mode_robdd.tfeirn.c"
  }
#line 890 "mode_robdd.tfeirn.c"
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
    MR_Word mode_robdd__tfeirn__conv6_HeadVar__5_72;

#line 289 "mode_robdd.tfeirn.m"
    {
#line 289 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv6_HeadVar__5_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 289 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv6_HeadVar__5_72));
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
    MR_Word mode_robdd__tfeirn__conv4_HeadVar__5_66;

#line 287 "mode_robdd.tfeirn.m"
    {
#line 287 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv4_HeadVar__5_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 287 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv4_HeadVar__5_66));
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
    MR_Word mode_robdd__tfeirn__conv2_HeadVar__5_58;

#line 279 "mode_robdd.tfeirn.m"
    {
#line 279 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv2_HeadVar__5_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 279 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv2_HeadVar__5_58));
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
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__5_52;

#line 277 "mode_robdd.tfeirn.m"
    {
#line 277 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_HeadVar__5_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 277 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__5_52));
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
#line 1707 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 1709 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_89 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
#line 1711 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_90_90 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 1713 "mode_robdd.tfeirn.c"
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
#line 1731 "mode_robdd.tfeirn.c"
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
#line 1756 "mode_robdd.tfeirn.c"
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
#line 1811 "mode_robdd.tfeirn.c"
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
#line 1836 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
#line 2227 "mode_robdd.tfeirn.c"
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
#line 2264 "mode_robdd.tfeirn.c"
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
#line 2307 "mode_robdd.tfeirn.c"
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
#line 2344 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
#line 2463 "mode_robdd.tfeirn.c"
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
#line 2500 "mode_robdd.tfeirn.c"
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
        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
#line 2546 "mode_robdd.tfeirn.c"
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
#line 2583 "mode_robdd.tfeirn.c"
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
#line 2696 "mode_robdd.tfeirn.c"
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
        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
            return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
#line 3150 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3152 "mode_robdd.tfeirn.c"
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
                          return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__X0_5, mode_robdd__tfeirn__V_21_21);
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
                    return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__X0_5);
                  }
#line 449 "mode_robdd.tfeirn.m"
              }
#line 452 "mode_robdd.tfeirn.m"
            else
#line 453 "mode_robdd.tfeirn.m"
              {
#line 453 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__X_7);
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
                    return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__X_7);
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
#line 3660 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 3662 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 3664 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
#line 3666 "mode_robdd.tfeirn.c"
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
#line 3690 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
#line 483 "mode_robdd.tfeirn.m"
    {
#line 483 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__TypeCtorInfo_20_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_19, mode_robdd__tfeirn__V_12_12);
    }
#line 482 "mode_robdd.tfeirn.m"
    {
#line 482 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_5 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__V_out_7, mode_robdd__tfeirn__V_11_11);
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
    MR_Word mode_robdd__tfeirn__conv1_HeadVar__5_20;

#line 521 "mode_robdd.tfeirn.m"
    {
#line 521 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv1_HeadVar__5_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 521 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv1_HeadVar__5_20));
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
            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
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
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
              }
#line 495 "mode_robdd.tfeirn.m"
            else
#line 496 "mode_robdd.tfeirn.m"
              {
#line 496 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
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
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
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
                    return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
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
                            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var1_10, mode_robdd__tfeirn__X_7);
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
#line 4015 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeCtorInfo_28_70 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 4017 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeInfo_29_71 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[2];
#line 4019 "mode_robdd.tfeirn.c"
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
                              return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__V_17_17, mode_robdd__tfeirn__V_18_18);
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
                        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
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
        return mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
#line 4291 "mode_robdd.tfeirn.c"
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
        return mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
#line 4538 "mode_robdd.tfeirn.c"
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
          return mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_20_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_16, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_4);
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
      return mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__X_3);
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
                  return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
#line 5668 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeCtorInfo_62_62 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5670 "mode_robdd.tfeirn.c"
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
                          return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                        }
#line 666 "mode_robdd.tfeirn.m"
                    }
#line 702 "mode_robdd.tfeirn.m"
                  else
#line 703 "mode_robdd.tfeirn.m"
                    {
#line 703 "mode_robdd.tfeirn.m"
                      return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
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
  MR_Word mode_robdd__tfeirn__HeadVar__3_18,
#line 521 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_19)
#line 521 "mode_robdd.tfeirn.m"
{
#line 521 "mode_robdd.tfeirn.m"
  {
#line 521 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 521 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_20;

#line 521 "mode_robdd.tfeirn.m"
    {
#line 521 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_20 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_23, mode_robdd__tfeirn__HeadVar__3_18, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__HeadVar__4_19);
    }
#line 521 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_20;
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
  MR_Word mode_robdd__tfeirn__HeadVar__2_12,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__3_13,
#line 772 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_14)
#line 772 "mode_robdd.tfeirn.m"
{
#line 772 "mode_robdd.tfeirn.m"
  {
#line 772 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_15;
#line 772 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_16_16;

#line 774 "mode_robdd.tfeirn.m"
    {
#line 774 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_16_16 = mercury__robdd__eq_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__HeadVar__2_12, mode_robdd__tfeirn__HeadVar__3_13);
    }
#line 774 "mode_robdd.tfeirn.m"
    {
#line 774 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_15 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__HeadVar__4_14, mode_robdd__tfeirn__V_16_16);
    }
#line 772 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_15;
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
  MR_Word mode_robdd__tfeirn__HeadVar__3_70,
#line 289 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_71)
#line 289 "mode_robdd.tfeirn.m"
{
#line 289 "mode_robdd.tfeirn.m"
  {
#line 289 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 289 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_72;
#line 289 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_73_73;
#line 289 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_74_74;

#line 291 "mode_robdd.tfeirn.m"
    {
#line 291 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_74_74 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__3_70, mode_robdd__tfeirn__E_19);
    }
#line 291 "mode_robdd.tfeirn.m"
    {
#line 291 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_73_73 = mercury__robdd__not_var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_74_74);
    }
#line 290 "mode_robdd.tfeirn.m"
    {
#line 290 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_72 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__4_71, mode_robdd__tfeirn__V_73_73);
    }
#line 289 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_72;
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
  MR_Word mode_robdd__tfeirn__HeadVar__3_64,
#line 287 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_65)
#line 287 "mode_robdd.tfeirn.m"
{
#line 287 "mode_robdd.tfeirn.m"
  {
#line 287 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 287 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_66;
#line 287 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_67_67;
#line 287 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_68_68;

#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_68_68 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__3_64, mode_robdd__tfeirn__E_19);
    }
#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_67_67 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_68_68);
    }
#line 288 "mode_robdd.tfeirn.m"
    {
#line 288 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_66 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__4_65, mode_robdd__tfeirn__V_67_67);
    }
#line 287 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_66;
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
  MR_Word mode_robdd__tfeirn__HeadVar__3_56,
#line 279 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_57)
#line 279 "mode_robdd.tfeirn.m"
{
#line 279 "mode_robdd.tfeirn.m"
  {
#line 279 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 279 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_58;
#line 279 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_59_59;
#line 279 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_60_60;

#line 281 "mode_robdd.tfeirn.m"
    {
#line 281 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_60_60 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__3_56, mode_robdd__tfeirn__E_19);
    }
#line 281 "mode_robdd.tfeirn.m"
    {
#line 281 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_59_59 = mercury__robdd__not_var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_60_60);
    }
#line 280 "mode_robdd.tfeirn.m"
    {
#line 280 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_58 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__4_57, mode_robdd__tfeirn__V_59_59);
    }
#line 279 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_58;
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
  MR_Word mode_robdd__tfeirn__HeadVar__3_50,
#line 277 "mode_robdd.tfeirn.m"
  MR_Word mode_robdd__tfeirn__HeadVar__4_51)
#line 277 "mode_robdd.tfeirn.m"
{
#line 277 "mode_robdd.tfeirn.m"
  {
#line 277 "mode_robdd.tfeirn.m"
    MR_bool mode_robdd__tfeirn__succeeded;
#line 277 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__HeadVar__5_52;
#line 277 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_53_53;
#line 277 "mode_robdd.tfeirn.m"
    MR_Word mode_robdd__tfeirn__V_54_54;

#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_54_54 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__3_50, mode_robdd__tfeirn__E_19);
    }
#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__V_53_53 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__V_54_54);
    }
#line 278 "mode_robdd.tfeirn.m"
    {
#line 278 "mode_robdd.tfeirn.m"
      return mode_robdd__tfeirn__HeadVar__5_52 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__HeadVar__4_51, mode_robdd__tfeirn__V_53_53);
    }
#line 277 "mode_robdd.tfeirn.m"
    return mode_robdd__tfeirn__HeadVar__5_52;
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
#line 6463 "mode_robdd.tfeirn.c"
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

#line 6500 "mode_robdd.tfeirn.c"
        {
#line 6502 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6504 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_24_24));
#line 6506 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 6508 "mode_robdd.tfeirn.c"
        }
#line 219 "mode_robdd.tfeirn.m"
        {
#line 219 "mode_robdd.tfeirn.m"
          mercury__sparse_bitset____Compare____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_25_25, &mode_robdd__tfeirn__V_16_16, (MR_Word) mode_robdd__tfeirn__V_4_4, (MR_Word) mode_robdd__tfeirn__V_10_10);
        }
#line 6515 "mode_robdd.tfeirn.c"
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

#line 6534 "mode_robdd.tfeirn.c"
            {
#line 6536 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6538 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_28));
#line 6540 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 6542 "mode_robdd.tfeirn.c"
            }
#line 219 "mode_robdd.tfeirn.m"
            {
#line 219 "mode_robdd.tfeirn.m"
              mercury__sparse_bitset____Compare____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_29_29, &mode_robdd__tfeirn__V_17_17, (MR_Word) mode_robdd__tfeirn__V_5_5, (MR_Word) mode_robdd__tfeirn__V_11_11);
            }
#line 6549 "mode_robdd.tfeirn.c"
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
#line 6569 "mode_robdd.tfeirn.c"
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
#line 6589 "mode_robdd.tfeirn.c"
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
#line 6609 "mode_robdd.tfeirn.c"
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
#line 219 "mode_robdd.tfeirn.m"
                              return;
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

#line 6709 "mode_robdd.tfeirn.c"
        {
#line 6711 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6713 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 6715 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 6717 "mode_robdd.tfeirn.c"
        }
#line 6719 "mode_robdd.tfeirn.c"
        {
#line 6721 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__V_3_3, (MR_Word) mode_robdd__tfeirn__V_9_9);
        }
#line 219 "mode_robdd.tfeirn.m"
        if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
          {
#line 6728 "mode_robdd.tfeirn.c"
            {
#line 6730 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__V_4_4, (MR_Word) mode_robdd__tfeirn__V_10_10);
            }
#line 219 "mode_robdd.tfeirn.m"
            if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
              {
#line 6737 "mode_robdd.tfeirn.c"
                {
#line 6739 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_11_11);
                }
#line 219 "mode_robdd.tfeirn.m"
                if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
                  {
#line 6746 "mode_robdd.tfeirn.c"
                    {
#line 6748 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____imp_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_6_6, mode_robdd__tfeirn__V_12_12);
                    }
#line 219 "mode_robdd.tfeirn.m"
                    if (mode_robdd__tfeirn__succeeded)
#line 219 "mode_robdd.tfeirn.m"
                      {
#line 6755 "mode_robdd.tfeirn.c"
                        {
#line 6757 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_7_7, mode_robdd__tfeirn__V_13_13);
                        }
#line 219 "mode_robdd.tfeirn.m"
                        if (mode_robdd__tfeirn__succeeded)
#line 6762 "mode_robdd.tfeirn.c"
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
#line 28 "mode_robdd.tfeirn.m"
      return;
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
      return mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(mode_robdd__tfeirn__TypeCtorInfo_5_5, mode_robdd__tfeirn__Cast_HeadVar1_3, mode_robdd__tfeirn__Cast_HeadVar2_4);
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

#line 6915 "mode_robdd.tfeirn.c"
    {
#line 6917 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6919 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_27_27));
#line 6921 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_26));
#line 6923 "mode_robdd.tfeirn.c"
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

#line 7070 "mode_robdd.tfeirn.c"
              {
#line 7072 "mode_robdd.tfeirn.c"
                mode_robdd__tfeirn__TypeInfo_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7074 "mode_robdd.tfeirn.c"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_59_59, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_58_58));
#line 7076 "mode_robdd.tfeirn.c"
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_59_59, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
#line 7078 "mode_robdd.tfeirn.c"
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
                  return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
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

#line 7234 "mode_robdd.tfeirn.c"
                      {
#line 7236 "mode_robdd.tfeirn.c"
                        mode_robdd__tfeirn__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7238 "mode_robdd.tfeirn.c"
                        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_60_60));
#line 7240 "mode_robdd.tfeirn.c"
                        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
#line 7242 "mode_robdd.tfeirn.c"
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
#line 7283 "mode_robdd.tfeirn.c"
                          mode_robdd__tfeirn__TypeCtorInfo_62_62 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7285 "mode_robdd.tfeirn.c"
                          {
#line 7287 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7289 "mode_robdd.tfeirn.c"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_63_63, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_62_62));
#line 7291 "mode_robdd.tfeirn.c"
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_63_63, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
#line 7293 "mode_robdd.tfeirn.c"
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
                          return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                        }
#line 666 "mode_robdd.tfeirn.m"
                    }
#line 702 "mode_robdd.tfeirn.m"
                  else
#line 703 "mode_robdd.tfeirn.m"
                    {
#line 703 "mode_robdd.tfeirn.m"
                      return mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
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

#line 7664 "mode_robdd.tfeirn.c"
    {
#line 7666 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7668 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 7670 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7672 "mode_robdd.tfeirn.c"
    }
#line 7674 "mode_robdd.tfeirn.c"
    {
#line 7676 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7678 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20));
#line 7680 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7682 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_19_19));
#line 7684 "mode_robdd.tfeirn.c"
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

#line 7873 "mode_robdd.tfeirn.c"
        {
#line 7875 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7877 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_30_30));
#line 7879 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
#line 7881 "mode_robdd.tfeirn.c"
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
#line 571 "mode_robdd.tfeirn.m"
      return;
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
#line 576 "mode_robdd.tfeirn.m"
      return;
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

#line 8019 "mode_robdd.tfeirn.c"
      {
#line 8021 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8023 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 8025 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 8027 "mode_robdd.tfeirn.c"
      }
#line 8029 "mode_robdd.tfeirn.c"
      {
#line 8031 "mode_robdd.tfeirn.c"
        MR_Word base;
#line 8033 "mode_robdd.tfeirn.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8035 "mode_robdd.tfeirn.c"
        (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21 = base;
#line 8037 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20));
#line 8039 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 8041 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_19_19));
#line 8043 "mode_robdd.tfeirn.c"
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

#line 8195 "mode_robdd.tfeirn.c"
          {
#line 8197 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8199 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_30_30));
#line 8201 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
#line 8203 "mode_robdd.tfeirn.c"
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
#line 579 "mode_robdd.tfeirn.m"
            return;
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

#line 8271 "mode_robdd.tfeirn.c"
    {
#line 8273 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8275 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_11_11));
#line 8277 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_10));
#line 8279 "mode_robdd.tfeirn.c"
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
      return mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10, mode_robdd__tfeirn__V_4_4);
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
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__5_15;

#line 772 "mode_robdd.tfeirn.m"
    {
#line 772 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv0_HeadVar__5_15 = mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__772__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
#line 772 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_4 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__5_15));
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
#line 8521 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8523 "mode_robdd.tfeirn.c"
    {
#line 8525 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8527 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_49_49, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_48_48));
#line 8529 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
#line 8531 "mode_robdd.tfeirn.c"
    }
#line 8533 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 8535 "mode_robdd.tfeirn.c"
    {
#line 8537 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8539 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_51_51, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_50_50));
#line 8541 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_51_51, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
#line 8543 "mode_robdd.tfeirn.c"
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
      return mode_robdd__tfeirn__HeadVar__2_2 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__V_11_11, mode_robdd__tfeirn__V_10_10);
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
      return mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_4, mode_robdd__tfeirn__X_3);
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

#line 8671 "mode_robdd.tfeirn.c"
        {
#line 8673 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8675 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 8677 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 8679 "mode_robdd.tfeirn.c"
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
#line 585 "mode_robdd.tfeirn.m"
              return;
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
#line 559 "mode_robdd.tfeirn.m"
        return;
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

#line 8909 "mode_robdd.tfeirn.c"
      {
#line 8911 "mode_robdd.tfeirn.c"
        MR_Word base;
#line 8913 "mode_robdd.tfeirn.c"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8915 "mode_robdd.tfeirn.c"
        (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25 = base;
#line 8917 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_24_24));
#line 8919 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
#line 8921 "mode_robdd.tfeirn.c"
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
#line 553 "mode_robdd.tfeirn.m"
            return;
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

#line 9086 "mode_robdd.tfeirn.c"
    {
#line 9088 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9090 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 9092 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9094 "mode_robdd.tfeirn.c"
    }
#line 9096 "mode_robdd.tfeirn.c"
    {
#line 9098 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9100 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 9102 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9104 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 9106 "mode_robdd.tfeirn.c"
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

#line 9214 "mode_robdd.tfeirn.c"
    {
#line 9216 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9218 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 9220 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9222 "mode_robdd.tfeirn.c"
    }
#line 9224 "mode_robdd.tfeirn.c"
    {
#line 9226 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9228 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 9230 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 9232 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 9234 "mode_robdd.tfeirn.c"
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

#line 9328 "mode_robdd.tfeirn.c"
    {
#line 9330 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9332 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 9334 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9336 "mode_robdd.tfeirn.c"
    }
#line 9338 "mode_robdd.tfeirn.c"
    {
#line 9340 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9342 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 9344 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9346 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 9348 "mode_robdd.tfeirn.c"
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

#line 9400 "mode_robdd.tfeirn.c"
        {
#line 9402 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9404 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 9406 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9408 "mode_robdd.tfeirn.c"
        }
#line 9410 "mode_robdd.tfeirn.c"
        {
#line 9412 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9414 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 9416 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 9418 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 9420 "mode_robdd.tfeirn.c"
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

#line 9667 "mode_robdd.tfeirn.c"
        {
#line 9669 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9671 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 9673 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_18));
#line 9675 "mode_robdd.tfeirn.c"
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

#line 9951 "mode_robdd.tfeirn.c"
        {
#line 9953 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9955 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_13_13));
#line 9957 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_12));
#line 9959 "mode_robdd.tfeirn.c"
        }
#line 9961 "mode_robdd.tfeirn.c"
        {
#line 9963 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 9965 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15));
#line 9967 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_12));
#line 9969 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_14_14));
#line 9971 "mode_robdd.tfeirn.c"
        }
#line 299 "mode_robdd.tfeirn.m"
        {
#line 299 "mode_robdd.tfeirn.m"
          return mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__TypeClassInfo_for_enum_16, mode_robdd__tfeirn__V_5_5, mode_robdd__tfeirn__V_4);
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

#line 10025 "mode_robdd.tfeirn.c"
    {
#line 10027 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10029 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_31_31));
#line 10031 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10033 "mode_robdd.tfeirn.c"
    }
#line 10035 "mode_robdd.tfeirn.c"
    {
#line 10037 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10039 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33));
#line 10041 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10043 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_32_32));
#line 10045 "mode_robdd.tfeirn.c"
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
        return mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30);
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

#line 10072 "mode_robdd.tfeirn.c"
        {
#line 10074 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10076 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_35_35));
#line 10078 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10080 "mode_robdd.tfeirn.c"
        }
#line 10082 "mode_robdd.tfeirn.c"
        {
#line 10084 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10086 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37));
#line 10088 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10090 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_36_36));
#line 10092 "mode_robdd.tfeirn.c"
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

#line 10178 "mode_robdd.tfeirn.c"
            {
#line 10180 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10182 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_43_43));
#line 10184 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10186 "mode_robdd.tfeirn.c"
            }
#line 10188 "mode_robdd.tfeirn.c"
            {
#line 10190 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10192 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45));
#line 10194 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10196 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_44_44));
#line 10198 "mode_robdd.tfeirn.c"
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

#line 10326 "mode_robdd.tfeirn.c"
    {
#line 10328 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10330 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_31_31));
#line 10332 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10334 "mode_robdd.tfeirn.c"
    }
#line 10336 "mode_robdd.tfeirn.c"
    {
#line 10338 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10340 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33));
#line 10342 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10344 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_32_32));
#line 10346 "mode_robdd.tfeirn.c"
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
        return mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30);
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

#line 10373 "mode_robdd.tfeirn.c"
        {
#line 10375 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10377 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_35_35));
#line 10379 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10381 "mode_robdd.tfeirn.c"
        }
#line 10383 "mode_robdd.tfeirn.c"
        {
#line 10385 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10387 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37));
#line 10389 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10391 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_36_36));
#line 10393 "mode_robdd.tfeirn.c"
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

#line 10479 "mode_robdd.tfeirn.c"
            {
#line 10481 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10483 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_43_43));
#line 10485 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10487 "mode_robdd.tfeirn.c"
            }
#line 10489 "mode_robdd.tfeirn.c"
            {
#line 10491 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10493 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45));
#line 10495 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
#line 10497 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_44_44));
#line 10499 "mode_robdd.tfeirn.c"
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
    MR_Word mode_robdd__tfeirn__conv3_HeadVar__5_20;

#line 521 "mode_robdd.tfeirn.m"
    {
#line 521 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv3_HeadVar__5_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 521 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv3_HeadVar__5_20));
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

#line 10663 "mode_robdd.tfeirn.c"
    {
#line 10665 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10667 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_22_22));
#line 10669 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10671 "mode_robdd.tfeirn.c"
    }
#line 10673 "mode_robdd.tfeirn.c"
    {
#line 10675 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10677 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24));
#line 10679 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10681 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_23_23));
#line 10683 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__conj_not_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
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

#line 10725 "mode_robdd.tfeirn.c"
        {
#line 10727 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10729 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_28));
#line 10731 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10733 "mode_robdd.tfeirn.c"
        }
#line 10735 "mode_robdd.tfeirn.c"
        {
#line 10737 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10739 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30));
#line 10741 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10743 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_29_29));
#line 10745 "mode_robdd.tfeirn.c"
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
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21);
              }
#line 495 "mode_robdd.tfeirn.m"
            else
#line 496 "mode_robdd.tfeirn.m"
              {
#line 496 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__disj_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
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

#line 10790 "mode_robdd.tfeirn.c"
            {
#line 10792 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10794 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_35_35, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_34_34));
#line 10796 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10798 "mode_robdd.tfeirn.c"
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
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
              }
#line 500 "mode_robdd.tfeirn.m"
            else
#line 502 "mode_robdd.tfeirn.m"
              {
#line 500 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 500 "mode_robdd.tfeirn.m"
                MR_Word mode_robdd__tfeirn__TypeInfo_37_37;

#line 10830 "mode_robdd.tfeirn.c"
                {
#line 10832 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10834 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_37_37, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_36_36));
#line 10836 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_37_37, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10838 "mode_robdd.tfeirn.c"
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
                    return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
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

#line 10873 "mode_robdd.tfeirn.c"
                    {
#line 10875 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10877 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_39_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_38_38));
#line 10879 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_39_39, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10881 "mode_robdd.tfeirn.c"
                    }
#line 10883 "mode_robdd.tfeirn.c"
                    {
#line 10885 "mode_robdd.tfeirn.c"
                      mode_robdd__tfeirn__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10887 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40));
#line 10889 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10891 "mode_robdd.tfeirn.c"
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_39_39));
#line 10893 "mode_robdd.tfeirn.c"
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
                            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__eq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var1_10, mode_robdd__tfeirn__X_7);
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
#line 10981 "mode_robdd.tfeirn.c"
                            mode_robdd__tfeirn__TypeCtorInfo_28_67 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
#line 10983 "mode_robdd.tfeirn.c"
                            {
#line 10985 "mode_robdd.tfeirn.c"
                              mode_robdd__tfeirn__TypeInfo_29_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10987 "mode_robdd.tfeirn.c"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_68, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_67));
#line 10989 "mode_robdd.tfeirn.c"
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_68, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
#line 10991 "mode_robdd.tfeirn.c"
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
                              return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__V_17_17, mode_robdd__tfeirn__V_18_18);
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
                        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
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
#line 11109 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 11111 "mode_robdd.tfeirn.c"
    mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 11113 "mode_robdd.tfeirn.c"
    {
#line 11115 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11117 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 11119 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11121 "mode_robdd.tfeirn.c"
    }
#line 11123 "mode_robdd.tfeirn.c"
    {
#line 11125 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11127 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18));
#line 11129 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11131 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_17_17));
#line 11133 "mode_robdd.tfeirn.c"
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
      return mode_robdd__tfeirn__HeadVar__5_5 = mode_robdd__tfeirn__disj_vars_eq_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__V_out_7, mode_robdd__tfeirn__V_11_11);
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

#line 11214 "mode_robdd.tfeirn.c"
    {
#line 11216 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11218 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 11220 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11222 "mode_robdd.tfeirn.c"
    }
#line 11224 "mode_robdd.tfeirn.c"
    {
#line 11226 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11228 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 11230 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11232 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 11234 "mode_robdd.tfeirn.c"
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

#line 11258 "mode_robdd.tfeirn.c"
        {
#line 11260 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11262 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 11264 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11266 "mode_robdd.tfeirn.c"
        }
#line 11268 "mode_robdd.tfeirn.c"
        {
#line 11270 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11272 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 11274 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11276 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 11278 "mode_robdd.tfeirn.c"
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

#line 11302 "mode_robdd.tfeirn.c"
            {
#line 11304 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11306 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11308 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11310 "mode_robdd.tfeirn.c"
            }
#line 11312 "mode_robdd.tfeirn.c"
            {
#line 11314 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11316 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 11318 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11320 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 11322 "mode_robdd.tfeirn.c"
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
                return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__X_7);
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

#line 11349 "mode_robdd.tfeirn.c"
                {
#line 11351 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11353 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 11355 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11357 "mode_robdd.tfeirn.c"
                }
#line 11359 "mode_robdd.tfeirn.c"
                {
#line 11361 "mode_robdd.tfeirn.c"
                  mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11363 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 11365 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 11367 "mode_robdd.tfeirn.c"
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 11369 "mode_robdd.tfeirn.c"
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
                    return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__X_7);
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

#line 11478 "mode_robdd.tfeirn.c"
    {
#line 11480 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11482 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 11484 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11486 "mode_robdd.tfeirn.c"
    }
#line 11488 "mode_robdd.tfeirn.c"
    {
#line 11490 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11492 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 11494 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11496 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 11498 "mode_robdd.tfeirn.c"
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

#line 11541 "mode_robdd.tfeirn.c"
        {
#line 11543 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11545 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11547 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11549 "mode_robdd.tfeirn.c"
        }
#line 11551 "mode_robdd.tfeirn.c"
        {
#line 11553 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11555 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 11557 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
#line 11559 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 11561 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20);
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

#line 11669 "mode_robdd.tfeirn.c"
    {
#line 11671 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11673 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 11675 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11677 "mode_robdd.tfeirn.c"
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

#line 11706 "mode_robdd.tfeirn.c"
        {
#line 11708 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11710 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 11712 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11714 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22);
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

#line 11753 "mode_robdd.tfeirn.c"
            {
#line 11755 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11757 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_27_27));
#line 11759 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11761 "mode_robdd.tfeirn.c"
            }
#line 439 "mode_robdd.tfeirn.m"
            {
#line 439 "mode_robdd.tfeirn.m"
              mode_robdd__tfeirn__conv1_VarsNF_13 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_8);
            }
#line 439 "mode_robdd.tfeirn.m"
            mode_robdd__tfeirn__VarsNF_13 = (MR_Word) mode_robdd__tfeirn__conv1_VarsNF_13;
#line 11770 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 11772 "mode_robdd.tfeirn.c"
            {
#line 11774 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11776 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29));
#line 11778 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
#line 11780 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_28_28));
#line 11782 "mode_robdd.tfeirn.c"
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
                          return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__X0_5, mode_robdd__tfeirn__V_21_21);
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
                    return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__X0_5);
                  }
#line 449 "mode_robdd.tfeirn.m"
              }
#line 452 "mode_robdd.tfeirn.m"
            else
#line 453 "mode_robdd.tfeirn.m"
              {
#line 453 "mode_robdd.tfeirn.m"
                return mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22);
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

#line 11958 "mode_robdd.tfeirn.c"
    {
#line 11960 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11962 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 11964 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11966 "mode_robdd.tfeirn.c"
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

#line 11990 "mode_robdd.tfeirn.c"
        {
#line 11992 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11994 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 11996 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 11998 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
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

#line 12036 "mode_robdd.tfeirn.c"
            {
#line 12038 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12040 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_20_20));
#line 12042 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12044 "mode_robdd.tfeirn.c"
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

#line 12118 "mode_robdd.tfeirn.c"
    {
#line 12120 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12122 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
#line 12124 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12126 "mode_robdd.tfeirn.c"
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

#line 12150 "mode_robdd.tfeirn.c"
        {
#line 12152 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12154 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
#line 12156 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12158 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
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

#line 12196 "mode_robdd.tfeirn.c"
            {
#line 12198 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12200 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_20_20));
#line 12202 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
#line 12204 "mode_robdd.tfeirn.c"
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

#line 12284 "mode_robdd.tfeirn.c"
    {
#line 12286 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12288 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12290 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12292 "mode_robdd.tfeirn.c"
    }
#line 12294 "mode_robdd.tfeirn.c"
    {
#line 12296 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12298 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12300 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12302 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12304 "mode_robdd.tfeirn.c"
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
        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
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

#line 12338 "mode_robdd.tfeirn.c"
        {
#line 12340 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12342 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12344 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12346 "mode_robdd.tfeirn.c"
        }
#line 12348 "mode_robdd.tfeirn.c"
        {
#line 12350 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12352 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12354 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12356 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12358 "mode_robdd.tfeirn.c"
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

#line 12382 "mode_robdd.tfeirn.c"
            {
#line 12384 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12386 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12388 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12390 "mode_robdd.tfeirn.c"
            }
#line 12392 "mode_robdd.tfeirn.c"
            {
#line 12394 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12396 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12398 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12400 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12402 "mode_robdd.tfeirn.c"
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

#line 12503 "mode_robdd.tfeirn.c"
      {
#line 12505 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12507 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12509 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12511 "mode_robdd.tfeirn.c"
      }
#line 12513 "mode_robdd.tfeirn.c"
      {
#line 12515 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12517 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12519 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12521 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12523 "mode_robdd.tfeirn.c"
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

#line 12552 "mode_robdd.tfeirn.c"
        {
#line 12554 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12556 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12558 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12560 "mode_robdd.tfeirn.c"
        }
#line 12562 "mode_robdd.tfeirn.c"
        {
#line 12564 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12566 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12568 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12570 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12572 "mode_robdd.tfeirn.c"
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
        return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
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

#line 12610 "mode_robdd.tfeirn.c"
          {
#line 12612 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12614 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12616 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12618 "mode_robdd.tfeirn.c"
          }
#line 12620 "mode_robdd.tfeirn.c"
          {
#line 12622 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12624 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12626 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12628 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12630 "mode_robdd.tfeirn.c"
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

#line 12659 "mode_robdd.tfeirn.c"
            {
#line 12661 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12663 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 12665 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12667 "mode_robdd.tfeirn.c"
            }
#line 12669 "mode_robdd.tfeirn.c"
            {
#line 12671 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12673 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 12675 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12677 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 12679 "mode_robdd.tfeirn.c"
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

#line 12787 "mode_robdd.tfeirn.c"
      {
#line 12789 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12791 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
#line 12793 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12795 "mode_robdd.tfeirn.c"
      }
#line 12797 "mode_robdd.tfeirn.c"
      {
#line 12799 "mode_robdd.tfeirn.c"
        mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12801 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
#line 12803 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12805 "mode_robdd.tfeirn.c"
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
#line 12807 "mode_robdd.tfeirn.c"
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

#line 12836 "mode_robdd.tfeirn.c"
        {
#line 12838 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12840 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
#line 12842 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12844 "mode_robdd.tfeirn.c"
        }
#line 12846 "mode_robdd.tfeirn.c"
        {
#line 12848 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12850 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
#line 12852 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12854 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
#line 12856 "mode_robdd.tfeirn.c"
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

#line 12891 "mode_robdd.tfeirn.c"
          {
#line 12893 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12895 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
#line 12897 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12899 "mode_robdd.tfeirn.c"
          }
#line 12901 "mode_robdd.tfeirn.c"
          {
#line 12903 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12905 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
#line 12907 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12909 "mode_robdd.tfeirn.c"
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
#line 12911 "mode_robdd.tfeirn.c"
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

#line 12940 "mode_robdd.tfeirn.c"
            {
#line 12942 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12944 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
#line 12946 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12948 "mode_robdd.tfeirn.c"
            }
#line 12950 "mode_robdd.tfeirn.c"
            {
#line 12952 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12954 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
#line 12956 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
#line 12958 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
#line 12960 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
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

#line 13066 "mode_robdd.tfeirn.c"
    {
#line 13068 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13070 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 13072 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13074 "mode_robdd.tfeirn.c"
    }
#line 13076 "mode_robdd.tfeirn.c"
    {
#line 13078 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13080 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17));
#line 13082 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13084 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_16_16));
#line 13086 "mode_robdd.tfeirn.c"
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

#line 13110 "mode_robdd.tfeirn.c"
        {
#line 13112 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13114 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 13116 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13118 "mode_robdd.tfeirn.c"
        }
#line 13120 "mode_robdd.tfeirn.c"
        {
#line 13122 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13124 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21));
#line 13126 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13128 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_20_20));
#line 13130 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14);
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

#line 13161 "mode_robdd.tfeirn.c"
            {
#line 13163 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13165 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 13167 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13169 "mode_robdd.tfeirn.c"
            }
#line 13171 "mode_robdd.tfeirn.c"
            {
#line 13173 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13175 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25));
#line 13177 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13179 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_24_24));
#line 13181 "mode_robdd.tfeirn.c"
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

#line 13257 "mode_robdd.tfeirn.c"
    {
#line 13259 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13261 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
#line 13263 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13265 "mode_robdd.tfeirn.c"
    }
#line 13267 "mode_robdd.tfeirn.c"
    {
#line 13269 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13271 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17));
#line 13273 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13275 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_16_16));
#line 13277 "mode_robdd.tfeirn.c"
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

#line 13301 "mode_robdd.tfeirn.c"
        {
#line 13303 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13305 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
#line 13307 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13309 "mode_robdd.tfeirn.c"
        }
#line 13311 "mode_robdd.tfeirn.c"
        {
#line 13313 "mode_robdd.tfeirn.c"
          mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13315 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21));
#line 13317 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13319 "mode_robdd.tfeirn.c"
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_20_20));
#line 13321 "mode_robdd.tfeirn.c"
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
            return mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14);
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

#line 13352 "mode_robdd.tfeirn.c"
            {
#line 13354 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13356 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
#line 13358 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13360 "mode_robdd.tfeirn.c"
            }
#line 13362 "mode_robdd.tfeirn.c"
            {
#line 13364 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13366 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25));
#line 13368 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
#line 13370 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_24_24));
#line 13372 "mode_robdd.tfeirn.c"
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
    MR_Word mode_robdd__tfeirn__conv12_HeadVar__5_72;

#line 289 "mode_robdd.tfeirn.m"
    {
#line 289 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv12_HeadVar__5_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 289 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv12_HeadVar__5_72));
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
    MR_Word mode_robdd__tfeirn__conv10_HeadVar__5_66;

#line 287 "mode_robdd.tfeirn.m"
    {
#line 287 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv10_HeadVar__5_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 287 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv10_HeadVar__5_66));
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
    MR_Word mode_robdd__tfeirn__conv8_HeadVar__5_58;

#line 279 "mode_robdd.tfeirn.m"
    {
#line 279 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv8_HeadVar__5_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 279 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv8_HeadVar__5_58));
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
    MR_Word mode_robdd__tfeirn__conv6_HeadVar__5_52;

#line 277 "mode_robdd.tfeirn.m"
    {
#line 277 "mode_robdd.tfeirn.m"
      mode_robdd__tfeirn__conv6_HeadVar__5_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
#line 277 "mode_robdd.tfeirn.m"
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv6_HeadVar__5_52));
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

#line 13738 "mode_robdd.tfeirn.c"
            {
#line 13740 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13742 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_87_87, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_86_86));
#line 13744 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_87_87, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13746 "mode_robdd.tfeirn.c"
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
#line 13840 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
#line 13842 "mode_robdd.tfeirn.c"
            {
#line 13844 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeClassInfo_for_enum_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13846 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88));
#line 13848 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13850 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_87_87));
#line 13852 "mode_robdd.tfeirn.c"
            }
#line 13854 "mode_robdd.tfeirn.c"
            mode_robdd__tfeirn__TypeCtorInfo_90_90 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
#line 13856 "mode_robdd.tfeirn.c"
            {
#line 13858 "mode_robdd.tfeirn.c"
              mode_robdd__tfeirn__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13860 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_91_91, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_90_90));
#line 13862 "mode_robdd.tfeirn.c"
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_91_91, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
#line 13864 "mode_robdd.tfeirn.c"
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

#line 14162 "mode_robdd.tfeirn.c"
    {
#line 14164 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14166 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_46_46, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_45_45));
#line 14168 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_46_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_44));
#line 14170 "mode_robdd.tfeirn.c"
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

#line 14360 "mode_robdd.tfeirn.c"
    {
#line 14362 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14364 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_9_9));
#line 14366 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_8));
#line 14368 "mode_robdd.tfeirn.c"
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

#line 14460 "mode_robdd.tfeirn.c"
    {
#line 14462 "mode_robdd.tfeirn.c"
      mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14464 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_9_9));
#line 14466 "mode_robdd.tfeirn.c"
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_8));
#line 14468 "mode_robdd.tfeirn.c"
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
