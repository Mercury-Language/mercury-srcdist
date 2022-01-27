/*
** Automatically generated from `il_peephole.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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


/* :- module ml_backend.il_peephole. */
/* :- implementation. */

/*
INIT mercury__ml_backend__il_peephole__init
ENDINIT
*/

#include "ml_backend.il_peephole.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "ml_backend.ilasm.mih"
#include "ml_backend.ilds.mih"
#include "mode_robdd.tfeirn.mih"
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




#line 134 "ml_backend.il_peephole.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__il_peephole__list__pti_list_1__plain_ml_backend__ilds__type_ctor_info_instr_0;

#line 137 "ml_backend.il_peephole.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__il_peephole__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__ilds__type_ctor_info_il_type_0;

#line 140 "ml_backend.il_peephole.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__il_peephole__list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0;

#line 143 "ml_backend.il_peephole.c"
static MR_bool MR_CALL 
ml_backend__il_peephole____Unify____instrs_0_0_10001(
#line 146 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 148 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_2);

#line 151 "ml_backend.il_peephole.c"
static void MR_CALL 
ml_backend__il_peephole____Compare____instrs_0_0_10001(
#line 154 "ml_backend.il_peephole.c"
  MR_Box * ml_backend__il_peephole__wrapper_arg_1,
#line 156 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_2,
#line 158 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_3);

#line 363 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0_1(
#line 363 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 363 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 360 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 360 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_131_131,
#line 360 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_132_132,
#line 360 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_55,
#line 360 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__3_56);

#line 495 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_p_0(
#line 495 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_20_20,
#line 495 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_21_21,
#line 495 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Input_9,
#line 495 "il_peephole.m"
  MR_Word ml_backend__il_peephole__IntermediateResult0_10,
#line 495 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__FinalResult_11,
#line 495 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Leftovers_12);

#line 478 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_p_0(
#line 478 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_9);

#line 411 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_p_0(
#line 411 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_28,
#line 411 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__2_29);

#line 402 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_p_0_1(
#line 402 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 402 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 398 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_p_0(
#line 398 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 398 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_23);

#line 402 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_p_0(
#line 402 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Var_10,
#line 402 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_26);

#line 363 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_p_0(
#line 363 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_58);

#line 343 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_p_0_1(
#line 343 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 343 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 341 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_p_0(
#line 341 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_44,
#line 341 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__2_45,
#line 341 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_46,
#line 341 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_47);

#line 343 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__343__1_1_p_0(
#line 343 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_49);

#line 330 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_p_0_1(
#line 330 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 330 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 323 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_p_0(
#line 323 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Locals_4,
#line 323 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 323 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_40);

#line 330 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_p_0(
#line 330 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_40,
#line 330 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_43);

#line 229 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_p_0(
#line 229 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_18);

#line 225 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__225__1_1_p_0(
#line 225 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_16);

#line 284 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_p_0(
#line 284 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Var_70,
#line 284 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_83);

#line 242 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_p_0(
#line 242 "il_peephole.m"
  MR_String ml_backend__il_peephole__Label_29,
#line 242 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_42);

#line 136 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_f_0(
#line 136 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__NewMaxStack_16,
#line 136 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_52);

#line 129 "il_peephole.m"
static MR_Integer MR_CALL 
ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_f_0(
#line 129 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_44);

#line 69 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole____Compare____instrs_0_0(
#line 69 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__1_1,
#line 69 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2,
#line 69 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_3);

#line 69 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole____Unify____instrs_0_0(
#line 69 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 69 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2);

#line 715 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__can_branch_1_f_0(
#line 715 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1);

#line 613 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__equivalent_to_nop_1_f_0(
#line 613 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1);

#line 514 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__can_call_1_f_0(
#line 514 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1);

#line 478 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__skip_nops_3_p_0_1(
#line 478 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 478 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 475 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__skip_nops_3_p_0(
#line 475 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_4,
#line 475 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_5,
#line 475 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Nops_6);

#line 455 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__skip_over_block_2_f_0(
#line 455 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 455 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__Id_2);

#line 437 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__no_handwritten_code_2_p_0(
#line 437 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 437 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__Id_2);

#line 411 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0_2(
#line 411 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 411 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 411 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2);

#line 398 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0_1(
#line 398 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 398 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 392 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0(
#line 392 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 392 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 392 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_7);

#line 319 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_1_3_p_0(
#line 319 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 319 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 319 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_7);

#line 284 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_4(
#line 284 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 284 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 241 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_3(
#line 241 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 241 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 229 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_2(
#line 229 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 229 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 224 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_1(
#line 224 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 224 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 212 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0(
#line 212 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 212 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_2,
#line 212 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_3,
#line 212 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_4);

#line 188 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__opt_instr_5_p_0(
#line 188 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 188 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instr0_7,
#line 188 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_8,
#line 188 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_9,
#line 188 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Mod_10);

#line 177 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_2_4_p_0(
#line 177 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_1,
#line 177 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2,
#line 177 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__3_3,
#line 177 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_4);

#line 159 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_method_decl_5_p_0(
#line 159 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 159 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decl0_7,
#line 159 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decl_8,
#line 159 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_13,
#line 159 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_14);

#line 136 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_4(
#line 136 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 136 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 134 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_3(
#line 134 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 134 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 134 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_2);

#line 129 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_2(
#line 129 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 129 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 124 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_1(
#line 124 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 124 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 124 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 124 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 124 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);

#line 118 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0(
#line 118 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 118 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Member0_7,
#line 118 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Member_8,
#line 118 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_38,
#line 118 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_39);

#line 101 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_3(
#line 101 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 101 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 101 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 101 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 101 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);

#line 96 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_2(
#line 96 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 96 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 96 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 96 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 96 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);

#line 90 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_1(
#line 90 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 90 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 90 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 90 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 90 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);

#line 83 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0(
#line 83 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 83 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decl0_7,
#line 83 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decl_8,
#line 83 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34,
#line 83 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_35);

#line 77 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__il_peephole_optimize_3_p_0_1(
#line 77 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 77 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 77 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 77 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 77 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);


static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_1[9][2];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_2[9][3];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_3[3][8];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_4[5][5];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_5[2][6];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_6[1][4];




static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 19)),
    ((MR_Box) ((MR_String) "peephole -- eliminated instrs after ret"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__il_peephole_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__il_peephole_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 19)),
    ((MR_Box) ((MR_String) "peephole -- eliminated branch to ret"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 19)),
    ((MR_Box) ((MR_String) "peephole: ldc(X), stloc(X), ldloc(X) --> ldc(X), dup, stloc(X)"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 19)),
    ((MR_Box) ((MR_String) "peephole: stloc(X), ldloc(X) --> dup, stloc(X)"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ilds__ml_backend__ilds__type_ctor_info_il_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[0])),
    ((MR_Box) (ml_backend__il_peephole__optimize_class_member_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_5[0])),
    ((MR_Box) (ml_backend__il_peephole__optimize_class_member_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_6[0])),
    ((MR_Box) (ml_backend__il_peephole__match_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_6[0])),
    ((MR_Box) (ml_backend__il_peephole__match_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[4])),
    ((MR_Box) (ml_backend__il_peephole__match_start_scope_2_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_6[0])),
    ((MR_Box) (ml_backend__il_peephole__skip_nops_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_6[0])),
    ((MR_Box) (ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_6[0])),
    ((MR_Box) (ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_3[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_il_decl_0)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_il_decl_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_class_member_0)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_class_member_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ilds__ml_backend__ilds__type_ctor_info_variable_0)),
    ((MR_Box) (&ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__il_peephole__list__pti_list_1__plain_ml_backend__ilds__type_ctor_info_instr_0)),
    ((MR_Box) (&ml_backend__il_peephole__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__ilds__type_ctor_info_il_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__il_peephole__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__ilds__type_ctor_info_il_type_0)),
    ((MR_Box) (&ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0))
  },
};

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0)),
    ((MR_Box) (&ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0))
  },
};

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_6[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0))
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



#line 899 "ml_backend.il_peephole.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__il_peephole__list__pti_list_1__plain_ml_backend__ilds__type_ctor_info_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0
  }
};

#line 907 "ml_backend.il_peephole.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__il_peephole__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__ilds__type_ctor_info_il_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_il_type_0
  }
};

#line 916 "ml_backend.il_peephole.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__il_peephole__list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0
  }
};

#line 924 "ml_backend.il_peephole.c"
const MR_TypeCtorInfo_Struct ml_backend__il_peephole__ml_backend__il_peephole__type_ctor_info_instrs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__il_peephole____Unify____instrs_0_0_10001)),
  ((MR_Box) (ml_backend__il_peephole____Compare____instrs_0_0_10001)),
  (MR_String) "ml_backend.il_peephole",
  (MR_String) "instrs",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__il_peephole__list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 945 "ml_backend.il_peephole.c"
static MR_bool MR_CALL 
ml_backend__il_peephole____Unify____instrs_0_0_10001(
#line 948 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 950 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_2)
#line 952 "ml_backend.il_peephole.c"
{
#line 954 "ml_backend.il_peephole.c"
  {
#line 956 "ml_backend.il_peephole.c"
    MR_bool ml_backend__il_peephole__succeeded;

#line 959 "ml_backend.il_peephole.c"
    {
#line 961 "ml_backend.il_peephole.c"
      ml_backend__il_peephole__succeeded = ml_backend__il_peephole____Unify____instrs_0_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1), ((MR_Word) ml_backend__il_peephole__wrapper_arg_2));
    }
#line 964 "ml_backend.il_peephole.c"
    return ml_backend__il_peephole__succeeded;
#line 966 "ml_backend.il_peephole.c"
  }
#line 968 "ml_backend.il_peephole.c"
}

#line 971 "ml_backend.il_peephole.c"
static void MR_CALL 
ml_backend__il_peephole____Compare____instrs_0_0_10001(
#line 974 "ml_backend.il_peephole.c"
  MR_Box * ml_backend__il_peephole__wrapper_arg_1,
#line 976 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_2,
#line 978 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_3)
#line 980 "ml_backend.il_peephole.c"
{
#line 982 "ml_backend.il_peephole.c"
  {
#line 984 "ml_backend.il_peephole.c"
    MR_Word ml_backend__il_peephole__conv0_HeadVar__1_1;

#line 987 "ml_backend.il_peephole.c"
    {
#line 989 "ml_backend.il_peephole.c"
      ml_backend__il_peephole____Compare____instrs_0_0(&ml_backend__il_peephole__conv0_HeadVar__1_1, ((MR_Word) ml_backend__il_peephole__wrapper_arg_2), ((MR_Word) ml_backend__il_peephole__wrapper_arg_3));
    }
#line 992 "ml_backend.il_peephole.c"
    *ml_backend__il_peephole__wrapper_arg_1 = ((MR_Box) (ml_backend__il_peephole__conv0_HeadVar__1_1));
#line 994 "ml_backend.il_peephole.c"
  }
#line 996 "ml_backend.il_peephole.c"
}

#line 363 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0_1(
#line 363 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 363 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 363 "il_peephole.m"
{
#line 363 "il_peephole.m"
  {
#line 363 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 363 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 363 "il_peephole.m"
    {
#line 363 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 363 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 363 "il_peephole.m"
  }
#line 363 "il_peephole.m"
}

#line 360 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 360 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_131_131,
#line 360 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_132_132,
#line 360 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_55,
#line 360 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__3_56)
#line 360 "il_peephole.m"
{
#line 360 "il_peephole.m"
  {
#line 360 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__InstrIn0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__2_55, (MR_Integer) 1)));
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__MaybePost_28;
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Post_29;
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_60_60;
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_61_61;
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_62_62;
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_96;
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Pre0_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__2_55, (MR_Integer) 0)));
#line 360 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Pre_100;

#line 363 "il_peephole.m"
    {
#line 363 "il_peephole.m"
      mercury__list__takewhile_4_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0, (MR_Word) &ml_backend__il_peephole_scalar_common_2[8], ml_backend__il_peephole__InstrIn0_27, &ml_backend__il_peephole__Pre_100, &ml_backend__il_peephole__MaybePost_28);
    }
#line 365 "il_peephole.m"
    ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__MaybePost_28)) == (MR_mktag((MR_Integer) 1)));
#line 365 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 365 "il_peephole.m"
      {
#line 365 "il_peephole.m"
        ml_backend__il_peephole__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__MaybePost_28, (MR_Integer) 0)));
#line 365 "il_peephole.m"
        ml_backend__il_peephole__Post_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__MaybePost_28, (MR_Integer) 1)));
#line 365 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__V_60_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_60_60, (MR_Integer) 0)))) == (MR_Integer) 54)));
#line 365 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 365 "il_peephole.m"
          {
#line 365 "il_peephole.m"
            ml_backend__il_peephole__V_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_60_60, (MR_Integer) 1)));
#line 366 "il_peephole.m"
            {
#line 366 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_p_0(ml_backend__il_peephole__V_131_131, ml_backend__il_peephole__V_132_132, ml_backend__il_peephole__V_96);
            }
#line 360 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 360 "il_peephole.m"
              {
#line 367 "il_peephole.m"
                {
#line 367 "il_peephole.m"
                  ml_backend__il_peephole__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_62_62, 0) = ((MR_Box) (ml_backend__il_peephole__V_96));
#line 367 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_62_62, 1) = ((MR_Box) (ml_backend__il_peephole__Pre0_99));
#line 367 "il_peephole.m"
                }
#line 367 "il_peephole.m"
                {
#line 367 "il_peephole.m"
                  ml_backend__il_peephole__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_61_61, 0) = ((MR_Box) (ml_backend__il_peephole__V_62_62));
#line 367 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_61_61, 1) = ((MR_Box) (ml_backend__il_peephole__Pre_100));
#line 367 "il_peephole.m"
                }
#line 367 "il_peephole.m"
                {
#line 367 "il_peephole.m"
                  MR_Word base;
#line 367 "il_peephole.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "il_peephole.m"
                  *ml_backend__il_peephole__HeadVar__3_56 = base;
#line 367 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__il_peephole__V_61_61));
#line 367 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__il_peephole__Post_29));
#line 367 "il_peephole.m"
                }
#line 367 "il_peephole.m"
                ml_backend__il_peephole__succeeded = MR_TRUE;
#line 360 "il_peephole.m"
              }
#line 365 "il_peephole.m"
          }
#line 365 "il_peephole.m"
      }
#line 360 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 360 "il_peephole.m"
  }
#line 360 "il_peephole.m"
}

#line 495 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_p_0(
#line 495 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_20_20,
#line 495 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_21_21,
#line 495 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Input_9,
#line 495 "il_peephole.m"
  MR_Word ml_backend__il_peephole__IntermediateResult0_10,
#line 495 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__FinalResult_11,
#line 495 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Leftovers_12)
#line 495 "il_peephole.m"
{
#line 500 "il_peephole.m"
  while (MR_TRUE)
#line 500 "il_peephole.m"
    {
#line 500 "il_peephole.m"
      /* tailcall optimized into a loop */
#line 500 "il_peephole.m"
      {
#line 500 "il_peephole.m"
        MR_bool ml_backend__il_peephole__succeeded;
#line 500 "il_peephole.m"
        MR_Word ml_backend__il_peephole__NextInput_13;
#line 500 "il_peephole.m"
        MR_Word ml_backend__il_peephole__IntermediateResult_14;
#line 505 "il_peephole.m"
        MR_Word ml_backend__il_peephole__FinalResult0_15;

#line 501 "il_peephole.m"
        {
#line 501 "il_peephole.m"
          ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_p_0(ml_backend__il_peephole__Input_9, &ml_backend__il_peephole__NextInput_13, ml_backend__il_peephole__IntermediateResult0_10, &ml_backend__il_peephole__IntermediateResult_14);
        }
#line 500 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 500 "il_peephole.m"
          {
#line 502 "il_peephole.m"
            {
#line 502 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_54_48_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(ml_backend__il_peephole__V_20_20, ml_backend__il_peephole__V_21_21, ml_backend__il_peephole__IntermediateResult_14, &ml_backend__il_peephole__FinalResult0_15);
            }
#line 505 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 503 "il_peephole.m"
              {
#line 503 "il_peephole.m"
                *ml_backend__il_peephole__Leftovers_12 = ml_backend__il_peephole__NextInput_13;
#line 504 "il_peephole.m"
                *ml_backend__il_peephole__FinalResult_11 = ml_backend__il_peephole__FinalResult0_15;
#line 503 "il_peephole.m"
                ml_backend__il_peephole__succeeded = MR_TRUE;
#line 503 "il_peephole.m"
              }
#line 505 "il_peephole.m"
            else
#line 506 "il_peephole.m"
              {
#line 506 "il_peephole.m"
                /* direct tailcall eliminated */
#line 506 "il_peephole.m"
                {
#line 506 "il_peephole.m"
                  MR_Word ml_backend__il_peephole__Input__tmp_copy_9 = ml_backend__il_peephole__NextInput_13;
#line 506 "il_peephole.m"
                  MR_Word ml_backend__il_peephole__IntermediateResult0__tmp_copy_10 = ml_backend__il_peephole__IntermediateResult_14;

#line 506 "il_peephole.m"
                  ml_backend__il_peephole__IntermediateResult0_10 = ml_backend__il_peephole__IntermediateResult0__tmp_copy_10;
#line 506 "il_peephole.m"
                  ml_backend__il_peephole__Input_9 = ml_backend__il_peephole__Input__tmp_copy_9;
#line 506 "il_peephole.m"
                }
#line 506 "il_peephole.m"
                continue;
#line 506 "il_peephole.m"
              }
#line 500 "il_peephole.m"
          }
#line 500 "il_peephole.m"
        return ml_backend__il_peephole__succeeded;
#line 500 "il_peephole.m"
      }
#line 500 "il_peephole.m"
      break;
#line 500 "il_peephole.m"
    }
#line 495 "il_peephole.m"
}

#line 478 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_p_0(
#line 478 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_9)
#line 478 "il_peephole.m"
{
#line 478 "il_peephole.m"
  {
#line 478 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 478 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_10_10;

#line 478 "il_peephole.m"
    {
#line 478 "il_peephole.m"
      ml_backend__il_peephole__V_10_10 = ml_backend__il_peephole__equivalent_to_nop_1_f_0(ml_backend__il_peephole__HeadVar__1_9);
    }
#line 478 "il_peephole.m"
    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_10_10 == (MR_Integer) 1);
#line 478 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 478 "il_peephole.m"
  }
#line 478 "il_peephole.m"
}

#line 411 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_p_0(
#line 411 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_28,
#line 411 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__2_29)
#line 411 "il_peephole.m"
{
#line 411 "il_peephole.m"
  {
#line 411 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 411 "il_peephole.m"
    MR_String ml_backend__il_peephole__CommentStr_18;
#line 411 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_31_31;
#line 411 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_32_32;
#line 411 "il_peephole.m"
    MR_String ml_backend__il_peephole__VarName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__1_28, (MR_Integer) 0)));
#line 411 "il_peephole.m"
    MR_Word ml_backend__il_peephole___Type_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__1_28, (MR_Integer) 1)));

#line 413 "il_peephole.m"
    {
#line 413 "il_peephole.m"
      ml_backend__il_peephole__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 413 "il_peephole.m"
      MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_32_32, 0) = ((MR_Box) (ml_backend__il_peephole__VarName_46));
#line 413 "il_peephole.m"
    }
#line 412 "il_peephole.m"
    {
#line 412 "il_peephole.m"
      ml_backend__il_peephole__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "il_peephole.m"
      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_31_31, 0) = ((MR_Box) (ml_backend__il_peephole__V_32_32));
#line 412 "il_peephole.m"
      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "il_peephole.m"
    }
#line 412 "il_peephole.m"
    {
#line 412 "il_peephole.m"
      mercury__string__format_3_p_0((MR_String) "peephole: unused local var %s eliminated", ml_backend__il_peephole__V_31_31, &ml_backend__il_peephole__CommentStr_18);
    }
#line 414 "il_peephole.m"
    {
#line 414 "il_peephole.m"
      MR_Word base;
#line 414 "il_peephole.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "il_peephole.m"
      *ml_backend__il_peephole__HeadVar__2_29 = base;
#line 414 "il_peephole.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 414 "il_peephole.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__il_peephole__CommentStr_18));
#line 414 "il_peephole.m"
    }
#line 411 "il_peephole.m"
  }
#line 411 "il_peephole.m"
}

#line 402 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_p_0_1(
#line 402 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 402 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 402 "il_peephole.m"
{
#line 402 "il_peephole.m"
  {
#line 402 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 402 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 402 "il_peephole.m"
    {
#line 402 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 402 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 402 "il_peephole.m"
  }
#line 402 "il_peephole.m"
}

#line 398 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_p_0(
#line 398 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 398 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_23)
#line 398 "il_peephole.m"
{
#line 398 "il_peephole.m"
  {
#line 398 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 398 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Var_10;
#line 398 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_24_24;
#line 398 "il_peephole.m"
    MR_String ml_backend__il_peephole__VarName_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__2_23, (MR_Integer) 0)));
#line 398 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_55_55;
#line 398 "il_peephole.m"
    MR_Word ml_backend__il_peephole___Type_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__2_23, (MR_Integer) 1)));
#line 402 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_12_12;

#line 399 "il_peephole.m"
    {
#line 399 "il_peephole.m"
      ml_backend__il_peephole__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__Var_10, 0) = ((MR_Box) (ml_backend__il_peephole__VarName_43));
#line 399 "il_peephole.m"
    }
#line 402 "il_peephole.m"
    {
#line 402 "il_peephole.m"
      ml_backend__il_peephole__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 402 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_24_24, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[2]));
#line 402 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_24_24, 1) = ((MR_Box) (ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_p_0_1));
#line 402 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_24_24, 3) = ((MR_Box) (ml_backend__il_peephole__Var_10));
#line 402 "il_peephole.m"
    }
#line 402 "il_peephole.m"
    {
#line 402 "il_peephole.m"
      mercury__list__takewhile_4_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0, ml_backend__il_peephole__V_24_24, ml_backend__il_peephole__Instrs0_6, &ml_backend__il_peephole__V_12_12, &ml_backend__il_peephole__V_55_55);
    }
#line 402 "il_peephole.m"
    {
#line 402 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__il_peephole_scalar_common_1[0], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (ml_backend__il_peephole__V_55_55)));
    }
#line 398 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 398 "il_peephole.m"
  }
#line 398 "il_peephole.m"
}

#line 402 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__402__1_2_p_0(
#line 402 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Var_10,
#line 402 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_26)
#line 402 "il_peephole.m"
{
#line 402 "il_peephole.m"
  {
#line 402 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 0)))) == (MR_Integer) 46)));
#line 403 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_52_52;
#line 404 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_53_53;
#line 405 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_54_54;

#line 403 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 403 "il_peephole.m"
      {
#line 403 "il_peephole.m"
        ml_backend__il_peephole__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 1)));
#line 403 "il_peephole.m"
        {
#line 403 "il_peephole.m"
          ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_10, ml_backend__il_peephole__V_52_52);
        }
#line 403 "il_peephole.m"
      }
#line 403 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 402 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 402 "il_peephole.m"
      {
#line 404 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 0)))) == (MR_Integer) 47)));
#line 404 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 404 "il_peephole.m"
          {
#line 404 "il_peephole.m"
            ml_backend__il_peephole__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 1)));
#line 404 "il_peephole.m"
            {
#line 404 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_10, ml_backend__il_peephole__V_53_53);
            }
#line 404 "il_peephole.m"
          }
#line 404 "il_peephole.m"
        ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 402 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 402 "il_peephole.m"
          {
#line 405 "il_peephole.m"
            ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 0)))) == (MR_Integer) 54)));
#line 405 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 405 "il_peephole.m"
              {
#line 405 "il_peephole.m"
                ml_backend__il_peephole__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 1)));
#line 405 "il_peephole.m"
                {
#line 405 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_10, ml_backend__il_peephole__V_54_54);
                }
#line 405 "il_peephole.m"
              }
#line 405 "il_peephole.m"
            ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 402 "il_peephole.m"
          }
#line 402 "il_peephole.m"
      }
#line 402 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 402 "il_peephole.m"
  }
#line 402 "il_peephole.m"
}

#line 363 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__363__1_1_p_0(
#line 363 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_58)
#line 363 "il_peephole.m"
{
#line 363 "il_peephole.m"
  {
#line 363 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 363 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_59_59;

#line 363 "il_peephole.m"
    {
#line 363 "il_peephole.m"
      ml_backend__il_peephole__V_59_59 = ml_backend__il_peephole__equivalent_to_nop_1_f_0(ml_backend__il_peephole__HeadVar__1_58);
    }
#line 363 "il_peephole.m"
    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_59_59 == (MR_Integer) 1);
#line 363 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 363 "il_peephole.m"
  }
#line 363 "il_peephole.m"
}

#line 343 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_p_0_1(
#line 343 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 343 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 343 "il_peephole.m"
{
#line 343 "il_peephole.m"
  {
#line 343 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 343 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 343 "il_peephole.m"
    {
#line 343 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__343__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 343 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 343 "il_peephole.m"
  }
#line 343 "il_peephole.m"
}

#line 341 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__341__1_4_p_0(
#line 341 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_44,
#line 341 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__2_45,
#line 341 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_46,
#line 341 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_47)
#line 341 "il_peephole.m"
{
#line 341 "il_peephole.m"
  {
#line 341 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 341 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Pre0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__3_46, (MR_Integer) 0)));
#line 341 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Pre_21;
#line 341 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Post0_22;
#line 341 "il_peephole.m"
    MR_Word ml_backend__il_peephole__InsertDup_23;
#line 341 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_50_50;
#line 341 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_53_53;
#line 341 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_54_54;
#line 342 "il_peephole.m"
    MR_Word ml_backend__il_peephole___NextInput0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__3_46, (MR_Integer) 1)));

#line 343 "il_peephole.m"
    {
#line 343 "il_peephole.m"
      mercury__list__takewhile_4_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0, (MR_Word) &ml_backend__il_peephole_scalar_common_2[7], ml_backend__il_peephole__HeadVar__1_44, &ml_backend__il_peephole__Pre_21, &ml_backend__il_peephole__Post0_22);
    }
#line 345 "il_peephole.m"
    ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__Post0_22)) == (MR_mktag((MR_Integer) 1)));
#line 345 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 345 "il_peephole.m"
      {
#line 345 "il_peephole.m"
        ml_backend__il_peephole__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Post0_22, (MR_Integer) 0)));
#line 345 "il_peephole.m"
        *ml_backend__il_peephole__HeadVar__2_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Post0_22, (MR_Integer) 1)));
#line 345 "il_peephole.m"
        ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 341 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 341 "il_peephole.m"
          {
#line 349 "il_peephole.m"
            if ((ml_backend__il_peephole__Pre0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "il_peephole.m"
              ml_backend__il_peephole__InsertDup_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "il_peephole.m"
            else
#line 350 "il_peephole.m"
              {
#line 351 "il_peephole.m"
                ml_backend__il_peephole__InsertDup_23 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__il_peephole_scalar_common_1[8]);
#line 350 "il_peephole.m"
              }
#line 353 "il_peephole.m"
            {
#line 353 "il_peephole.m"
              ml_backend__il_peephole__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "il_peephole.m"
              MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_54_54, 0) = ((MR_Box) (ml_backend__il_peephole__InsertDup_23));
#line 353 "il_peephole.m"
              MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_54_54, 1) = ((MR_Box) (ml_backend__il_peephole__Pre0_19));
#line 353 "il_peephole.m"
            }
#line 353 "il_peephole.m"
            {
#line 353 "il_peephole.m"
              ml_backend__il_peephole__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "il_peephole.m"
              MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_53_53, 0) = ((MR_Box) (ml_backend__il_peephole__Pre_21));
#line 353 "il_peephole.m"
              MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_53_53, 1) = ((MR_Box) (ml_backend__il_peephole__V_54_54));
#line 353 "il_peephole.m"
            }
#line 353 "il_peephole.m"
            {
#line 353 "il_peephole.m"
              MR_Word base;
#line 353 "il_peephole.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 353 "il_peephole.m"
              *ml_backend__il_peephole__HeadVar__4_47 = base;
#line 353 "il_peephole.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__il_peephole__V_53_53));
#line 353 "il_peephole.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (*ml_backend__il_peephole__HeadVar__2_45));
#line 353 "il_peephole.m"
            }
#line 353 "il_peephole.m"
            ml_backend__il_peephole__succeeded = MR_TRUE;
#line 341 "il_peephole.m"
          }
#line 345 "il_peephole.m"
      }
#line 341 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 341 "il_peephole.m"
  }
#line 341 "il_peephole.m"
}

#line 343 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__343__1_1_p_0(
#line 343 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_49)
#line 343 "il_peephole.m"
{
#line 343 "il_peephole.m"
  {
#line 343 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__HeadVar__1_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));

#line 343 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 343 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 343 "il_peephole.m"
  }
#line 343 "il_peephole.m"
}

#line 330 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_p_0_1(
#line 330 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 330 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 330 "il_peephole.m"
{
#line 330 "il_peephole.m"
  {
#line 330 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 330 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 330 "il_peephole.m"
    {
#line 330 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 330 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 330 "il_peephole.m"
  }
#line 330 "il_peephole.m"
}

#line 323 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_p_0(
#line 323 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Locals_4,
#line 323 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 323 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_40)
#line 323 "il_peephole.m"
{
#line 323 "il_peephole.m"
  {
#line 323 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__3_40)) == (MR_mktag((MR_Integer) 0)));
#line 323 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_110_110;
#line 323 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_111_111;
#line 323 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_112_112;
#line 323 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeInfo_130_130;
#line 323 "il_peephole.m"
    MR_String ml_backend__il_peephole__VN_10;
#line 323 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_41_41;
#line 323 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_42_42;
#line 323 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_121_121;
#line 326 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_11_11;
#line 326 "il_peephole.m"
    MR_Box ml_backend__il_peephole__conv0_V_11_11;
#line 330 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_13_13;

#line 325 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 325 "il_peephole.m"
      {
#line 325 "il_peephole.m"
        ml_backend__il_peephole__VN_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__3_40, (MR_Integer) 0)));
#line 1778 "ml_backend.il_peephole.c"
        ml_backend__il_peephole__TypeCtorInfo_110_110 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1780 "ml_backend.il_peephole.c"
        ml_backend__il_peephole__TypeCtorInfo_111_111 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_il_type_0;
#line 326 "il_peephole.m"
        {
#line 326 "il_peephole.m"
          ml_backend__il_peephole__succeeded = mercury__assoc_list__search_3_p_0(ml_backend__il_peephole__TypeCtorInfo_110_110, ml_backend__il_peephole__TypeCtorInfo_111_111, ml_backend__il_peephole__Locals_4, ((MR_Box) (ml_backend__il_peephole__VN_10)), &ml_backend__il_peephole__conv0_V_11_11);
        }
#line 326 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 326 "il_peephole.m"
          {
#line 326 "il_peephole.m"
            ml_backend__il_peephole__V_11_11 = ((MR_Word) ml_backend__il_peephole__conv0_V_11_11);
#line 326 "il_peephole.m"
            ml_backend__il_peephole__succeeded = MR_TRUE;
#line 326 "il_peephole.m"
          }
#line 323 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 323 "il_peephole.m"
          {
#line 330 "il_peephole.m"
            ml_backend__il_peephole__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1803 "ml_backend.il_peephole.c"
            ml_backend__il_peephole__TypeCtorInfo_112_112 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 330 "il_peephole.m"
            {
#line 330 "il_peephole.m"
              ml_backend__il_peephole__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 330 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[2]));
#line 330 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 1) = ((MR_Box) (ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__323__1_3_p_0_1));
#line 330 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 330 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 3) = ((MR_Box) (ml_backend__il_peephole__HeadVar__3_40));
#line 330 "il_peephole.m"
            }
#line 330 "il_peephole.m"
            {
#line 330 "il_peephole.m"
              mercury__list__takewhile_4_p_0(ml_backend__il_peephole__TypeCtorInfo_112_112, ml_backend__il_peephole__V_41_41, ml_backend__il_peephole__Instrs0_6, &ml_backend__il_peephole__V_13_13, &ml_backend__il_peephole__V_121_121);
            }
#line 1824 "ml_backend.il_peephole.c"
            ml_backend__il_peephole__TypeInfo_130_130 = (MR_Word) &ml_backend__il_peephole_scalar_common_1[0];
#line 330 "il_peephole.m"
            {
#line 330 "il_peephole.m"
              return ml_backend__il_peephole__succeeded = mercury__builtin__unify_2_p_0(ml_backend__il_peephole__TypeInfo_130_130, ((MR_Box) (ml_backend__il_peephole__V_42_42)), ((MR_Box) (ml_backend__il_peephole__V_121_121)));
            }
#line 323 "il_peephole.m"
          }
#line 325 "il_peephole.m"
      }
#line 323 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 323 "il_peephole.m"
  }
#line 323 "il_peephole.m"
}

#line 330 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__330__1_2_p_0(
#line 330 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_40,
#line 330 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_43)
#line 330 "il_peephole.m"
{
#line 330 "il_peephole.m"
  {
#line 330 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_43, (MR_Integer) 0)))) == (MR_Integer) 46)));
#line 331 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_119_119;
#line 332 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_120_120;

#line 331 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 331 "il_peephole.m"
      {
#line 331 "il_peephole.m"
        ml_backend__il_peephole__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_43, (MR_Integer) 1)));
#line 331 "il_peephole.m"
        {
#line 331 "il_peephole.m"
          ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__HeadVar__1_40, ml_backend__il_peephole__V_119_119);
        }
#line 331 "il_peephole.m"
      }
#line 331 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 330 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 330 "il_peephole.m"
      {
#line 332 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_43, (MR_Integer) 0)))) == (MR_Integer) 47)));
#line 332 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 332 "il_peephole.m"
          {
#line 332 "il_peephole.m"
            ml_backend__il_peephole__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_43, (MR_Integer) 1)));
#line 332 "il_peephole.m"
            {
#line 332 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__HeadVar__1_40, ml_backend__il_peephole__V_120_120);
            }
#line 332 "il_peephole.m"
          }
#line 332 "il_peephole.m"
        ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 330 "il_peephole.m"
      }
#line 330 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 330 "il_peephole.m"
  }
#line 330 "il_peephole.m"
}

#line 229 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_p_0(
#line 229 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_18)
#line 229 "il_peephole.m"
{
#line 229 "il_peephole.m"
  {
#line 229 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 229 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_19_19;

#line 229 "il_peephole.m"
    {
#line 229 "il_peephole.m"
      ml_backend__il_peephole__V_19_19 = ml_backend__il_peephole__equivalent_to_nop_1_f_0(ml_backend__il_peephole__HeadVar__1_18);
    }
#line 229 "il_peephole.m"
    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_19_19 == (MR_Integer) 1);
#line 229 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 229 "il_peephole.m"
  }
#line 229 "il_peephole.m"
}

#line 225 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__225__1_1_p_0(
#line 225 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_16)
#line 225 "il_peephole.m"
{
#line 225 "il_peephole.m"
  {
#line 225 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_16, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 225 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_9_9;

#line 225 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 225 "il_peephole.m"
      ml_backend__il_peephole__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_16, (MR_Integer) 1)));
#line 225 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 225 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 225 "il_peephole.m"
  }
#line 225 "il_peephole.m"
}

#line 284 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_p_0(
#line 284 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Var_70,
#line 284 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_83)
#line 284 "il_peephole.m"
{
#line 284 "il_peephole.m"
  {
#line 284 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 0)))) == (MR_Integer) 46)));
#line 284 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_84_84;
#line 284 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_85_85;
#line 285 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_117_117;
#line 286 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_74_74;
#line 287 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_118_118;
#line 288 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_75_75;

#line 285 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 285 "il_peephole.m"
      {
#line 285 "il_peephole.m"
        ml_backend__il_peephole__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 1)));
#line 285 "il_peephole.m"
        {
#line 285 "il_peephole.m"
          ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_70, ml_backend__il_peephole__V_117_117);
        }
#line 285 "il_peephole.m"
      }
#line 285 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 284 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 284 "il_peephole.m"
      {
#line 286 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 286 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 286 "il_peephole.m"
          ml_backend__il_peephole__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 1)));
#line 286 "il_peephole.m"
        ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 284 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 284 "il_peephole.m"
          {
#line 287 "il_peephole.m"
            ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 0)))) == (MR_Integer) 54)));
#line 287 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 287 "il_peephole.m"
              {
#line 287 "il_peephole.m"
                ml_backend__il_peephole__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 1)));
#line 287 "il_peephole.m"
                {
#line 287 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_70, ml_backend__il_peephole__V_118_118);
                }
#line 287 "il_peephole.m"
              }
#line 287 "il_peephole.m"
            ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 284 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 284 "il_peephole.m"
              {
#line 288 "il_peephole.m"
                ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 0)))) == (MR_Integer) 53)));
#line 288 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 288 "il_peephole.m"
                  ml_backend__il_peephole__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 1)));
#line 288 "il_peephole.m"
                ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 284 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 284 "il_peephole.m"
                  {
#line 289 "il_peephole.m"
                    {
#line 289 "il_peephole.m"
                      ml_backend__il_peephole__V_84_84 = ml_backend__il_peephole__can_call_1_f_0(ml_backend__il_peephole__HeadVar__2_83);
                    }
#line 289 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_84_84 == (MR_Integer) 0);
#line 284 "il_peephole.m"
                    if (ml_backend__il_peephole__succeeded)
#line 284 "il_peephole.m"
                      {
#line 290 "il_peephole.m"
                        {
#line 290 "il_peephole.m"
                          ml_backend__il_peephole__V_85_85 = ml_backend__il_peephole__can_branch_1_f_0(ml_backend__il_peephole__HeadVar__2_83);
                        }
#line 290 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_85_85 == (MR_Integer) 0);
#line 284 "il_peephole.m"
                      }
#line 284 "il_peephole.m"
                  }
#line 284 "il_peephole.m"
              }
#line 284 "il_peephole.m"
          }
#line 284 "il_peephole.m"
      }
#line 284 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 284 "il_peephole.m"
  }
#line 284 "il_peephole.m"
}

#line 242 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_p_0(
#line 242 "il_peephole.m"
  MR_String ml_backend__il_peephole__Label_29,
#line 242 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_42)
#line 242 "il_peephole.m"
{
#line 242 "il_peephole.m"
  {
#line 242 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_42, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 242 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_114_114;

#line 242 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 242 "il_peephole.m"
      {
#line 242 "il_peephole.m"
        ml_backend__il_peephole__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_42, (MR_Integer) 1)));
#line 242 "il_peephole.m"
        ml_backend__il_peephole__succeeded = (strcmp(ml_backend__il_peephole__Label_29, ml_backend__il_peephole__V_114_114) == 0);
#line 242 "il_peephole.m"
      }
#line 242 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 242 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 242 "il_peephole.m"
  }
#line 242 "il_peephole.m"
}

#line 136 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_f_0(
#line 136 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__NewMaxStack_16,
#line 136 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_52)
#line 136 "il_peephole.m"
{
#line 136 "il_peephole.m"
  {
#line 136 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 136 "il_peephole.m"
    MR_Word ml_backend__il_peephole__HeadVar__3_53;
#line 137 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_19_19;

#line 137 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 137 "il_peephole.m"
      {
#line 137 "il_peephole.m"
        ml_backend__il_peephole__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_52, (MR_Integer) 1)));
#line 138 "il_peephole.m"
        {
#line 138 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_54_54 = (MR_Word) ml_backend__il_peephole__NewMaxStack_16;

#line 136 "il_peephole.m"
          {
#line 136 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__3_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "il_peephole.m"
            MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__3_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 136 "il_peephole.m"
            MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__3_53, 1) = ((MR_Box) (ml_backend__il_peephole__V_54_54));
#line 136 "il_peephole.m"
          }
#line 138 "il_peephole.m"
        }
#line 137 "il_peephole.m"
      }
#line 137 "il_peephole.m"
    else
#line 136 "il_peephole.m"
      ml_backend__il_peephole__HeadVar__3_53 = ml_backend__il_peephole__HeadVar__2_52;
#line 136 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__3_53;
#line 136 "il_peephole.m"
  }
#line 136 "il_peephole.m"
}

#line 129 "il_peephole.m"
static MR_Integer MR_CALL 
ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_f_0(
#line 129 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_44)
#line 129 "il_peephole.m"
{
#line 129 "il_peephole.m"
  {
#line 129 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_44, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 129 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__HeadVar__2_45;
#line 129 "il_peephole.m"
    MR_Word ml_backend__il_peephole__I_15;

#line 130 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 130 "il_peephole.m"
      {
#line 130 "il_peephole.m"
        ml_backend__il_peephole__I_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_44, (MR_Integer) 1)));
#line 129 "il_peephole.m"
        {
#line 129 "il_peephole.m"
          return ml_backend__il_peephole__HeadVar__2_45 = ml_backend__ilds__calculate_max_stack_1_f_0(ml_backend__il_peephole__I_15);
        }
#line 130 "il_peephole.m"
      }
#line 130 "il_peephole.m"
    else
#line 129 "il_peephole.m"
      ml_backend__il_peephole__HeadVar__2_45 = (MR_Integer) 0;
#line 129 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__2_45;
#line 129 "il_peephole.m"
  }
#line 129 "il_peephole.m"
}

#line 69 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole____Compare____instrs_0_0(
#line 69 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__1_1,
#line 69 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2,
#line 69 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_3)
#line 69 "il_peephole.m"
{
#line 69 "il_peephole.m"
  {
#line 69 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 69 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Cast_HeadVar1_4 = ml_backend__il_peephole__HeadVar__2_2;
#line 69 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Cast_HeadVar2_5 = ml_backend__il_peephole__HeadVar__3_3;

#line 69 "il_peephole.m"
    {
#line 69 "il_peephole.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__il_peephole_scalar_common_1[0], ml_backend__il_peephole__HeadVar__1_1, ((MR_Box) (ml_backend__il_peephole__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__il_peephole__Cast_HeadVar2_5)));
#line 69 "il_peephole.m"
      return;
    }
#line 69 "il_peephole.m"
  }
#line 69 "il_peephole.m"
}

#line 69 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole____Unify____instrs_0_0(
#line 69 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 69 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2)
#line 69 "il_peephole.m"
{
#line 69 "il_peephole.m"
  {
#line 69 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 69 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Cast_HeadVar1_3 = ml_backend__il_peephole__HeadVar__1_1;
#line 69 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Cast_HeadVar2_4 = ml_backend__il_peephole__HeadVar__2_2;

#line 69 "il_peephole.m"
    {
#line 69 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__il_peephole_scalar_common_1[0], ((MR_Box) (ml_backend__il_peephole__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__il_peephole__Cast_HeadVar2_4)));
    }
#line 69 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 69 "il_peephole.m"
  }
#line 69 "il_peephole.m"
}

#line 715 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__can_branch_1_f_0(
#line 715 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1)
#line 715 "il_peephole.m"
{
#line 720 "il_peephole.m"
  {
#line 720 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 720 "il_peephole.m"
    MR_Word ml_backend__il_peephole__HeadVar__2_2;

#line 720 "il_peephole.m"
    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 743 "il_peephole.m"
      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
    else
#line 720 "il_peephole.m"
      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
      else
#line 720 "il_peephole.m"
        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 755 "il_peephole.m"
          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
        else
#line 720 "il_peephole.m"
          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 756 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
          else
#line 720 "il_peephole.m"
            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 761 "il_peephole.m"
              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
            else
#line 720 "il_peephole.m"
              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 744 "il_peephole.m"
                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
              else
#line 720 "il_peephole.m"
                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 745 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                else
#line 720 "il_peephole.m"
                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 746 "il_peephole.m"
                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                  else
#line 720 "il_peephole.m"
                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 747 "il_peephole.m"
                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                    else
#line 720 "il_peephole.m"
                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 748 "il_peephole.m"
                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                      else
#line 720 "il_peephole.m"
                        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 749 "il_peephole.m"
                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                        else
#line 720 "il_peephole.m"
                          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 750 "il_peephole.m"
                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                          else
#line 720 "il_peephole.m"
                            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 751 "il_peephole.m"
                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                            else
#line 720 "il_peephole.m"
                              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 762 "il_peephole.m"
                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                              else
#line 720 "il_peephole.m"
                                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 752 "il_peephole.m"
                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                else
#line 720 "il_peephole.m"
                                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 753 "il_peephole.m"
                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                  else
#line 720 "il_peephole.m"
                                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 754 "il_peephole.m"
                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                    else
#line 720 "il_peephole.m"
                                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 736 "il_peephole.m"
                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                      else
#line 720 "il_peephole.m"
                                        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 757 "il_peephole.m"
                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                        else
#line 720 "il_peephole.m"
                                          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 805 "il_peephole.m"
                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                          else
#line 720 "il_peephole.m"
                                            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 741 "il_peephole.m"
                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                            else
#line 720 "il_peephole.m"
                                              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 804 "il_peephole.m"
                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                              else
#line 720 "il_peephole.m"
                                                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 758 "il_peephole.m"
                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                else
#line 720 "il_peephole.m"
                                                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 759 "il_peephole.m"
                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                  else
#line 720 "il_peephole.m"
                                                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 763 "il_peephole.m"
                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                    else
#line 720 "il_peephole.m"
                                                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 760 "il_peephole.m"
                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                      else
#line 720 "il_peephole.m"
                                                        if (((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 787 "il_peephole.m"
                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                        else
#line 720 "il_peephole.m"
                                                          if (((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 739 "il_peephole.m"
                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                          else
#line 720 "il_peephole.m"
                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 767 "il_peephole.m"
                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                            else
#line 720 "il_peephole.m"
                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 724 "il_peephole.m"
                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                              else
#line 720 "il_peephole.m"
                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 725 "il_peephole.m"
                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                else
#line 720 "il_peephole.m"
                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 726 "il_peephole.m"
                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                  else
#line 720 "il_peephole.m"
                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 727 "il_peephole.m"
                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                    else
#line 720 "il_peephole.m"
                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 728 "il_peephole.m"
                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                      else
#line 720 "il_peephole.m"
                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 729 "il_peephole.m"
                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                        else
#line 720 "il_peephole.m"
                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 721 "il_peephole.m"
                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                          else
#line 720 "il_peephole.m"
                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 723 "il_peephole.m"
                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                            else
#line 720 "il_peephole.m"
                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 722 "il_peephole.m"
                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                              else
#line 720 "il_peephole.m"
                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 35))))
#line 738 "il_peephole.m"
                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                else
#line 720 "il_peephole.m"
                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 58))))
#line 740 "il_peephole.m"
                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                  else
#line 720 "il_peephole.m"
                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 788 "il_peephole.m"
                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                    else
#line 720 "il_peephole.m"
                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 36))))
#line 768 "il_peephole.m"
                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                      else
#line 720 "il_peephole.m"
                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 37))))
#line 769 "il_peephole.m"
                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                        else
#line 720 "il_peephole.m"
                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 733 "il_peephole.m"
                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                          else
#line 720 "il_peephole.m"
                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 735 "il_peephole.m"
                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                            else
#line 720 "il_peephole.m"
                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 38))))
#line 770 "il_peephole.m"
                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                              else
#line 720 "il_peephole.m"
                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 789 "il_peephole.m"
                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                else
#line 720 "il_peephole.m"
                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 39))))
#line 771 "il_peephole.m"
                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                  else
#line 720 "il_peephole.m"
                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 732 "il_peephole.m"
                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                    else
#line 720 "il_peephole.m"
                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 720 "il_peephole.m"
                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                                                      else
#line 720 "il_peephole.m"
                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 790 "il_peephole.m"
                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                        else
#line 720 "il_peephole.m"
                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 791 "il_peephole.m"
                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                          else
#line 720 "il_peephole.m"
                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 40))))
#line 772 "il_peephole.m"
                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                            else
#line 720 "il_peephole.m"
                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 737 "il_peephole.m"
                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                              else
#line 720 "il_peephole.m"
                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 41))))
#line 764 "il_peephole.m"
                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                else
#line 720 "il_peephole.m"
                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 42))))
#line 773 "il_peephole.m"
                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                  else
#line 720 "il_peephole.m"
                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 43))))
#line 765 "il_peephole.m"
                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                    else
#line 720 "il_peephole.m"
                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 59))))
#line 792 "il_peephole.m"
                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                      else
#line 720 "il_peephole.m"
                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 793 "il_peephole.m"
                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                        else
#line 720 "il_peephole.m"
                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 794 "il_peephole.m"
                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                          else
#line 720 "il_peephole.m"
                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 795 "il_peephole.m"
                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                            else
#line 720 "il_peephole.m"
                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 44))))
#line 774 "il_peephole.m"
                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                              else
#line 720 "il_peephole.m"
                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 45))))
#line 775 "il_peephole.m"
                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                else
#line 720 "il_peephole.m"
                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 46))))
#line 776 "il_peephole.m"
                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                  else
#line 720 "il_peephole.m"
                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 47))))
#line 777 "il_peephole.m"
                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                    else
#line 720 "il_peephole.m"
                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 796 "il_peephole.m"
                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                      else
#line 720 "il_peephole.m"
                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 797 "il_peephole.m"
                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                        else
#line 720 "il_peephole.m"
                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 798 "il_peephole.m"
                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                          else
#line 720 "il_peephole.m"
                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 60))))
#line 766 "il_peephole.m"
                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                            else
#line 720 "il_peephole.m"
                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 799 "il_peephole.m"
                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                              else
#line 720 "il_peephole.m"
                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 61))))
#line 800 "il_peephole.m"
                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                else
#line 720 "il_peephole.m"
                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 48))))
#line 778 "il_peephole.m"
                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                  else
#line 720 "il_peephole.m"
                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 801 "il_peephole.m"
                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                    else
#line 720 "il_peephole.m"
                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 49))))
#line 779 "il_peephole.m"
                                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                      else
#line 720 "il_peephole.m"
                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 802 "il_peephole.m"
                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                        else
#line 720 "il_peephole.m"
                                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 62))))
#line 803 "il_peephole.m"
                                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                          else
#line 720 "il_peephole.m"
                                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 806 "il_peephole.m"
                                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                            else
#line 720 "il_peephole.m"
                                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 50))))
#line 780 "il_peephole.m"
                                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                              else
#line 720 "il_peephole.m"
                                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 51))))
#line 781 "il_peephole.m"
                                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                else
#line 720 "il_peephole.m"
                                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 810 "il_peephole.m"
                                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                  else
#line 720 "il_peephole.m"
                                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 52))))
#line 782 "il_peephole.m"
                                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                    else
#line 720 "il_peephole.m"
                                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 734 "il_peephole.m"
                                                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                      else
#line 720 "il_peephole.m"
                                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 63))))
#line 807 "il_peephole.m"
                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                        else
#line 720 "il_peephole.m"
                                                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 808 "il_peephole.m"
                                                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                          else
#line 720 "il_peephole.m"
                                                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 53))))
#line 783 "il_peephole.m"
                                                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                            else
#line 720 "il_peephole.m"
                                                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 54))))
#line 784 "il_peephole.m"
                                                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                              else
#line 720 "il_peephole.m"
                                                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 809 "il_peephole.m"
                                                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                                else
#line 720 "il_peephole.m"
                                                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 811 "il_peephole.m"
                                                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                                  else
#line 720 "il_peephole.m"
                                                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 55))))
#line 785 "il_peephole.m"
                                                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                                    else
#line 720 "il_peephole.m"
                                                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 56))))
#line 730 "il_peephole.m"
                                                                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 720 "il_peephole.m"
                                                                                                                                                                                      else
#line 720 "il_peephole.m"
                                                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 57))))
#line 786 "il_peephole.m"
                                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
                                                                                                                                                                                        else
#line 812 "il_peephole.m"
                                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 720 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__2_2;
#line 720 "il_peephole.m"
  }
#line 715 "il_peephole.m"
}

#line 613 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__equivalent_to_nop_1_f_0(
#line 613 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1)
#line 613 "il_peephole.m"
{
#line 615 "il_peephole.m"
  {
#line 615 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 615 "il_peephole.m"
    MR_Word ml_backend__il_peephole__HeadVar__2_2;

#line 615 "il_peephole.m"
    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 632 "il_peephole.m"
      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
    else
#line 615 "il_peephole.m"
      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
      else
#line 615 "il_peephole.m"
        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 644 "il_peephole.m"
          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
        else
#line 615 "il_peephole.m"
          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 645 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
          else
#line 615 "il_peephole.m"
            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 650 "il_peephole.m"
              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
            else
#line 615 "il_peephole.m"
              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 633 "il_peephole.m"
                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
              else
#line 615 "il_peephole.m"
                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 634 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                else
#line 615 "il_peephole.m"
                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 635 "il_peephole.m"
                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                  else
#line 615 "il_peephole.m"
                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 636 "il_peephole.m"
                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                    else
#line 615 "il_peephole.m"
                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 637 "il_peephole.m"
                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                      else
#line 615 "il_peephole.m"
                        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 638 "il_peephole.m"
                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                        else
#line 615 "il_peephole.m"
                          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 639 "il_peephole.m"
                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                          else
#line 615 "il_peephole.m"
                            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 640 "il_peephole.m"
                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                            else
#line 615 "il_peephole.m"
                              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 651 "il_peephole.m"
                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                              else
#line 615 "il_peephole.m"
                                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 641 "il_peephole.m"
                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                else
#line 615 "il_peephole.m"
                                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 642 "il_peephole.m"
                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                  else
#line 615 "il_peephole.m"
                                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 643 "il_peephole.m"
                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                    else
#line 615 "il_peephole.m"
                                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 618 "il_peephole.m"
                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 615 "il_peephole.m"
                                      else
#line 615 "il_peephole.m"
                                        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 646 "il_peephole.m"
                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                        else
#line 615 "il_peephole.m"
                                          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 703 "il_peephole.m"
                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                          else
#line 615 "il_peephole.m"
                                            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 630 "il_peephole.m"
                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                            else
#line 615 "il_peephole.m"
                                              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 705 "il_peephole.m"
                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                              else
#line 615 "il_peephole.m"
                                                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 647 "il_peephole.m"
                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                else
#line 615 "il_peephole.m"
                                                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 648 "il_peephole.m"
                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                  else
#line 615 "il_peephole.m"
                                                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 652 "il_peephole.m"
                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                    else
#line 615 "il_peephole.m"
                                                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 649 "il_peephole.m"
                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                      else
#line 615 "il_peephole.m"
                                                        if (((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 686 "il_peephole.m"
                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                        else
#line 615 "il_peephole.m"
                                                          if (((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 628 "il_peephole.m"
                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                          else
#line 615 "il_peephole.m"
                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 656 "il_peephole.m"
                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                            else
#line 615 "il_peephole.m"
                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 657 "il_peephole.m"
                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                              else
#line 615 "il_peephole.m"
                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 658 "il_peephole.m"
                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                else
#line 615 "il_peephole.m"
                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 659 "il_peephole.m"
                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                  else
#line 615 "il_peephole.m"
                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 660 "il_peephole.m"
                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                    else
#line 615 "il_peephole.m"
                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 661 "il_peephole.m"
                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                      else
#line 615 "il_peephole.m"
                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 662 "il_peephole.m"
                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                        else
#line 615 "il_peephole.m"
                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 663 "il_peephole.m"
                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                          else
#line 615 "il_peephole.m"
                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 664 "il_peephole.m"
                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                            else
#line 615 "il_peephole.m"
                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 665 "il_peephole.m"
                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                              else
#line 615 "il_peephole.m"
                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 35))))
#line 627 "il_peephole.m"
                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                else
#line 615 "il_peephole.m"
                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 58))))
#line 629 "il_peephole.m"
                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                  else
#line 615 "il_peephole.m"
                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 687 "il_peephole.m"
                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                    else
#line 615 "il_peephole.m"
                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 36))))
#line 666 "il_peephole.m"
                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                      else
#line 615 "il_peephole.m"
                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 37))))
#line 667 "il_peephole.m"
                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                        else
#line 615 "il_peephole.m"
                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 615 "il_peephole.m"
                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 615 "il_peephole.m"
                                                                                          else
#line 615 "il_peephole.m"
                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 619 "il_peephole.m"
                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 615 "il_peephole.m"
                                                                                            else
#line 615 "il_peephole.m"
                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 38))))
#line 668 "il_peephole.m"
                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                              else
#line 615 "il_peephole.m"
                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 688 "il_peephole.m"
                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                else
#line 615 "il_peephole.m"
                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 39))))
#line 669 "il_peephole.m"
                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                  else
#line 615 "il_peephole.m"
                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 615 "il_peephole.m"
                                                                                                      {
#line 615 "il_peephole.m"
                                                                                                        MR_Word ml_backend__il_peephole__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 617 "il_peephole.m"
                                                                                                        MR_Integer ml_backend__il_peephole__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));

#line 615 "il_peephole.m"
                                                                                                        if ((ml_backend__il_peephole__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "il_peephole.m"
                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                        else
#line 615 "il_peephole.m"
                                                                                                          if (((MR_tag((MR_Word) ml_backend__il_peephole__V_95_95)) == (MR_mktag((MR_Integer) 1))))
#line 625 "il_peephole.m"
                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                          else
#line 617 "il_peephole.m"
                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 615 "il_peephole.m"
                                                                                                      }
#line 615 "il_peephole.m"
                                                                                                    else
#line 615 "il_peephole.m"
                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 621 "il_peephole.m"
                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                      else
#line 615 "il_peephole.m"
                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 689 "il_peephole.m"
                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                        else
#line 615 "il_peephole.m"
                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 690 "il_peephole.m"
                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                          else
#line 615 "il_peephole.m"
                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 40))))
#line 670 "il_peephole.m"
                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                            else
#line 615 "il_peephole.m"
                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 626 "il_peephole.m"
                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                              else
#line 615 "il_peephole.m"
                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 41))))
#line 653 "il_peephole.m"
                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                else
#line 615 "il_peephole.m"
                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 42))))
#line 671 "il_peephole.m"
                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                  else
#line 615 "il_peephole.m"
                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 43))))
#line 654 "il_peephole.m"
                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                    else
#line 615 "il_peephole.m"
                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 59))))
#line 691 "il_peephole.m"
                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                      else
#line 615 "il_peephole.m"
                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 692 "il_peephole.m"
                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                        else
#line 615 "il_peephole.m"
                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 693 "il_peephole.m"
                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                          else
#line 615 "il_peephole.m"
                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 694 "il_peephole.m"
                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                            else
#line 615 "il_peephole.m"
                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 44))))
#line 672 "il_peephole.m"
                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                              else
#line 615 "il_peephole.m"
                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 45))))
#line 673 "il_peephole.m"
                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                else
#line 615 "il_peephole.m"
                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 46))))
#line 674 "il_peephole.m"
                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                  else
#line 615 "il_peephole.m"
                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 47))))
#line 675 "il_peephole.m"
                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                    else
#line 615 "il_peephole.m"
                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 695 "il_peephole.m"
                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                      else
#line 615 "il_peephole.m"
                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 696 "il_peephole.m"
                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                        else
#line 615 "il_peephole.m"
                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 697 "il_peephole.m"
                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                          else
#line 615 "il_peephole.m"
                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 60))))
#line 655 "il_peephole.m"
                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                            else
#line 615 "il_peephole.m"
                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 698 "il_peephole.m"
                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                              else
#line 615 "il_peephole.m"
                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 61))))
#line 699 "il_peephole.m"
                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                else
#line 615 "il_peephole.m"
                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 48))))
#line 676 "il_peephole.m"
                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                  else
#line 615 "il_peephole.m"
                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 700 "il_peephole.m"
                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                    else
#line 615 "il_peephole.m"
                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 49))))
#line 677 "il_peephole.m"
                                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                      else
#line 615 "il_peephole.m"
                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 701 "il_peephole.m"
                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                        else
#line 615 "il_peephole.m"
                                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 62))))
#line 702 "il_peephole.m"
                                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                          else
#line 615 "il_peephole.m"
                                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 704 "il_peephole.m"
                                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                            else
#line 615 "il_peephole.m"
                                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 50))))
#line 678 "il_peephole.m"
                                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                              else
#line 615 "il_peephole.m"
                                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 51))))
#line 679 "il_peephole.m"
                                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                else
#line 615 "il_peephole.m"
                                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 708 "il_peephole.m"
                                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                  else
#line 615 "il_peephole.m"
                                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 52))))
#line 680 "il_peephole.m"
                                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                    else
#line 615 "il_peephole.m"
                                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 615 "il_peephole.m"
                                                                                                                                                                        {
#line 615 "il_peephole.m"
                                                                                                                                                                          MR_Word ml_backend__il_peephole__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 616 "il_peephole.m"
                                                                                                                                                                          MR_Integer ml_backend__il_peephole__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));

#line 615 "il_peephole.m"
                                                                                                                                                                          if ((ml_backend__il_peephole__V_97_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "il_peephole.m"
                                                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                          else
#line 615 "il_peephole.m"
                                                                                                                                                                            if (((MR_tag((MR_Word) ml_backend__il_peephole__V_97_97)) == (MR_mktag((MR_Integer) 1))))
#line 624 "il_peephole.m"
                                                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                            else
#line 616 "il_peephole.m"
                                                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 615 "il_peephole.m"
                                                                                                                                                                        }
#line 615 "il_peephole.m"
                                                                                                                                                                      else
#line 615 "il_peephole.m"
                                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 63))))
#line 706 "il_peephole.m"
                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                        else
#line 615 "il_peephole.m"
                                                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 707 "il_peephole.m"
                                                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                          else
#line 615 "il_peephole.m"
                                                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 53))))
#line 681 "il_peephole.m"
                                                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                            else
#line 615 "il_peephole.m"
                                                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 54))))
#line 682 "il_peephole.m"
                                                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                              else
#line 615 "il_peephole.m"
                                                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 709 "il_peephole.m"
                                                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                                else
#line 615 "il_peephole.m"
                                                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 710 "il_peephole.m"
                                                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                                  else
#line 615 "il_peephole.m"
                                                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 55))))
#line 683 "il_peephole.m"
                                                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                                    else
#line 615 "il_peephole.m"
                                                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 56))))
#line 684 "il_peephole.m"
                                                                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                                      else
#line 615 "il_peephole.m"
                                                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 57))))
#line 685 "il_peephole.m"
                                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
                                                                                                                                                                                        else
#line 711 "il_peephole.m"
                                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 615 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__2_2;
#line 615 "il_peephole.m"
  }
#line 613 "il_peephole.m"
}

#line 514 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__can_call_1_f_0(
#line 514 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1)
#line 514 "il_peephole.m"
{
#line 516 "il_peephole.m"
  {
#line 516 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 516 "il_peephole.m"
    MR_Word ml_backend__il_peephole__HeadVar__2_2;

#line 516 "il_peephole.m"
    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 530 "il_peephole.m"
      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
    else
#line 516 "il_peephole.m"
      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
      else
#line 516 "il_peephole.m"
        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 543 "il_peephole.m"
          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
        else
#line 516 "il_peephole.m"
          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 544 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
          else
#line 516 "il_peephole.m"
            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 549 "il_peephole.m"
              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
            else
#line 516 "il_peephole.m"
              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 531 "il_peephole.m"
                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
              else
#line 516 "il_peephole.m"
                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 532 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                else
#line 516 "il_peephole.m"
                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 533 "il_peephole.m"
                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                  else
#line 516 "il_peephole.m"
                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 534 "il_peephole.m"
                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                    else
#line 516 "il_peephole.m"
                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 535 "il_peephole.m"
                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                      else
#line 516 "il_peephole.m"
                        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 536 "il_peephole.m"
                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                        else
#line 516 "il_peephole.m"
                          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 537 "il_peephole.m"
                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                          else
#line 516 "il_peephole.m"
                            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 538 "il_peephole.m"
                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                            else
#line 516 "il_peephole.m"
                              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 550 "il_peephole.m"
                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                              else
#line 516 "il_peephole.m"
                                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 539 "il_peephole.m"
                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                else
#line 516 "il_peephole.m"
                                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 540 "il_peephole.m"
                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                  else
#line 516 "il_peephole.m"
                                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 541 "il_peephole.m"
                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                    else
#line 516 "il_peephole.m"
                                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 542 "il_peephole.m"
                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                      else
#line 516 "il_peephole.m"
                                        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 545 "il_peephole.m"
                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                        else
#line 516 "il_peephole.m"
                                          if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 600 "il_peephole.m"
                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                          else
#line 516 "il_peephole.m"
                                            if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 528 "il_peephole.m"
                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                            else
#line 516 "il_peephole.m"
                                              if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 602 "il_peephole.m"
                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                              else
#line 516 "il_peephole.m"
                                                if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 546 "il_peephole.m"
                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                else
#line 516 "il_peephole.m"
                                                  if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 547 "il_peephole.m"
                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                  else
#line 516 "il_peephole.m"
                                                    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 551 "il_peephole.m"
                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                    else
#line 516 "il_peephole.m"
                                                      if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 548 "il_peephole.m"
                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                      else
#line 516 "il_peephole.m"
                                                        if (((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 584 "il_peephole.m"
                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                        else
#line 516 "il_peephole.m"
                                                          if (((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 517 "il_peephole.m"
                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 516 "il_peephole.m"
                                                          else
#line 516 "il_peephole.m"
                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 555 "il_peephole.m"
                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                            else
#line 516 "il_peephole.m"
                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 556 "il_peephole.m"
                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                              else
#line 516 "il_peephole.m"
                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 557 "il_peephole.m"
                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                else
#line 516 "il_peephole.m"
                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 558 "il_peephole.m"
                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                  else
#line 516 "il_peephole.m"
                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 559 "il_peephole.m"
                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                    else
#line 516 "il_peephole.m"
                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 560 "il_peephole.m"
                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                      else
#line 516 "il_peephole.m"
                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 561 "il_peephole.m"
                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                        else
#line 516 "il_peephole.m"
                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 562 "il_peephole.m"
                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                          else
#line 516 "il_peephole.m"
                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 563 "il_peephole.m"
                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                            else
#line 516 "il_peephole.m"
                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 564 "il_peephole.m"
                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                              else
#line 516 "il_peephole.m"
                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 35))))
#line 516 "il_peephole.m"
                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 516 "il_peephole.m"
                                                                                else
#line 516 "il_peephole.m"
                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 58))))
#line 518 "il_peephole.m"
                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 516 "il_peephole.m"
                                                                                  else
#line 516 "il_peephole.m"
                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 585 "il_peephole.m"
                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                    else
#line 516 "il_peephole.m"
                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 36))))
#line 565 "il_peephole.m"
                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                      else
#line 516 "il_peephole.m"
                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 37))))
#line 566 "il_peephole.m"
                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                        else
#line 516 "il_peephole.m"
                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 523 "il_peephole.m"
                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                          else
#line 516 "il_peephole.m"
                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 527 "il_peephole.m"
                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                            else
#line 516 "il_peephole.m"
                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 38))))
#line 567 "il_peephole.m"
                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                              else
#line 516 "il_peephole.m"
                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 586 "il_peephole.m"
                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                else
#line 516 "il_peephole.m"
                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 39))))
#line 568 "il_peephole.m"
                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                  else
#line 516 "il_peephole.m"
                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 526 "il_peephole.m"
                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                    else
#line 516 "il_peephole.m"
                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 521 "il_peephole.m"
                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 516 "il_peephole.m"
                                                                                                      else
#line 516 "il_peephole.m"
                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 587 "il_peephole.m"
                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                        else
#line 516 "il_peephole.m"
                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 588 "il_peephole.m"
                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                          else
#line 516 "il_peephole.m"
                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 40))))
#line 519 "il_peephole.m"
                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 516 "il_peephole.m"
                                                                                                            else
#line 516 "il_peephole.m"
                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 524 "il_peephole.m"
                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                              else
#line 516 "il_peephole.m"
                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 41))))
#line 552 "il_peephole.m"
                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                else
#line 516 "il_peephole.m"
                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 42))))
#line 569 "il_peephole.m"
                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                  else
#line 516 "il_peephole.m"
                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 43))))
#line 553 "il_peephole.m"
                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                    else
#line 516 "il_peephole.m"
                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 59))))
#line 589 "il_peephole.m"
                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                      else
#line 516 "il_peephole.m"
                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 590 "il_peephole.m"
                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                        else
#line 516 "il_peephole.m"
                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 591 "il_peephole.m"
                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                          else
#line 516 "il_peephole.m"
                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 592 "il_peephole.m"
                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                            else
#line 516 "il_peephole.m"
                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 44))))
#line 570 "il_peephole.m"
                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                              else
#line 516 "il_peephole.m"
                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 45))))
#line 571 "il_peephole.m"
                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                else
#line 516 "il_peephole.m"
                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 46))))
#line 572 "il_peephole.m"
                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                  else
#line 516 "il_peephole.m"
                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 47))))
#line 573 "il_peephole.m"
                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                    else
#line 516 "il_peephole.m"
                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 593 "il_peephole.m"
                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                      else
#line 516 "il_peephole.m"
                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 594 "il_peephole.m"
                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                        else
#line 516 "il_peephole.m"
                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 595 "il_peephole.m"
                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                          else
#line 516 "il_peephole.m"
                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 60))))
#line 554 "il_peephole.m"
                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                            else
#line 516 "il_peephole.m"
                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 596 "il_peephole.m"
                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                              else
#line 516 "il_peephole.m"
                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 61))))
#line 597 "il_peephole.m"
                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                else
#line 516 "il_peephole.m"
                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 48))))
#line 574 "il_peephole.m"
                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                  else
#line 516 "il_peephole.m"
                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 598 "il_peephole.m"
                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                    else
#line 516 "il_peephole.m"
                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 49))))
#line 575 "il_peephole.m"
                                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                      else
#line 516 "il_peephole.m"
                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 599 "il_peephole.m"
                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                        else
#line 516 "il_peephole.m"
                                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 62))))
#line 520 "il_peephole.m"
                                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 516 "il_peephole.m"
                                                                                                                                                          else
#line 516 "il_peephole.m"
                                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 601 "il_peephole.m"
                                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                            else
#line 516 "il_peephole.m"
                                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 50))))
#line 576 "il_peephole.m"
                                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                              else
#line 516 "il_peephole.m"
                                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 51))))
#line 577 "il_peephole.m"
                                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                else
#line 516 "il_peephole.m"
                                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 603 "il_peephole.m"
                                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                  else
#line 516 "il_peephole.m"
                                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 52))))
#line 578 "il_peephole.m"
                                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                    else
#line 516 "il_peephole.m"
                                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 525 "il_peephole.m"
                                                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                      else
#line 516 "il_peephole.m"
                                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 63))))
#line 605 "il_peephole.m"
                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                        else
#line 516 "il_peephole.m"
                                                                                                                                                                          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 606 "il_peephole.m"
                                                                                                                                                                            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                          else
#line 516 "il_peephole.m"
                                                                                                                                                                            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 53))))
#line 579 "il_peephole.m"
                                                                                                                                                                              ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                            else
#line 516 "il_peephole.m"
                                                                                                                                                                              if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 54))))
#line 580 "il_peephole.m"
                                                                                                                                                                                ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                              else
#line 516 "il_peephole.m"
                                                                                                                                                                                if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 604 "il_peephole.m"
                                                                                                                                                                                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                                else
#line 516 "il_peephole.m"
                                                                                                                                                                                  if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 607 "il_peephole.m"
                                                                                                                                                                                    ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                                  else
#line 516 "il_peephole.m"
                                                                                                                                                                                    if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 55))))
#line 581 "il_peephole.m"
                                                                                                                                                                                      ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                                    else
#line 516 "il_peephole.m"
                                                                                                                                                                                      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 56))))
#line 582 "il_peephole.m"
                                                                                                                                                                                        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                                      else
#line 516 "il_peephole.m"
                                                                                                                                                                                        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 57))))
#line 583 "il_peephole.m"
                                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
                                                                                                                                                                                        else
#line 608 "il_peephole.m"
                                                                                                                                                                                          ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 516 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__2_2;
#line 516 "il_peephole.m"
  }
#line 514 "il_peephole.m"
}

#line 478 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__skip_nops_3_p_0_1(
#line 478 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 478 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 478 "il_peephole.m"
{
#line 478 "il_peephole.m"
  {
#line 478 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 478 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 478 "il_peephole.m"
    {
#line 478 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__478__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 478 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 478 "il_peephole.m"
  }
#line 478 "il_peephole.m"
}

#line 475 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__skip_nops_3_p_0(
#line 475 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_4,
#line 475 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_5,
#line 475 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Nops_6)
#line 475 "il_peephole.m"
{
#line 477 "il_peephole.m"
  {
#line 477 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 478 "il_peephole.m"
    {
#line 478 "il_peephole.m"
      mercury__list__takewhile_4_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0, (MR_Word) &ml_backend__il_peephole_scalar_common_2[6], ml_backend__il_peephole__Instrs0_4, ml_backend__il_peephole__Nops_6, ml_backend__il_peephole__Instrs_5);
#line 478 "il_peephole.m"
      return;
    }
#line 477 "il_peephole.m"
  }
#line 475 "il_peephole.m"
}

#line 455 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__skip_over_block_2_f_0(
#line 455 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 455 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__Id_2)
#line 455 "il_peephole.m"
{
#line 457 "il_peephole.m"
  while (MR_TRUE)
#line 457 "il_peephole.m"
    {
#line 457 "il_peephole.m"
      /* tailcall optimized into a loop */
#line 457 "il_peephole.m"
      {
#line 457 "il_peephole.m"
        MR_bool ml_backend__il_peephole__succeeded;
#line 457 "il_peephole.m"
        MR_Word ml_backend__il_peephole__HeadVar__3_3;

#line 457 "il_peephole.m"
        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "il_peephole.m"
          ml_backend__il_peephole__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 457 "il_peephole.m"
        else
#line 458 "il_peephole.m"
          {
#line 458 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)));
#line 458 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instrs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 459 "il_peephole.m"
            MR_Integer ml_backend__il_peephole__V_9_9;
#line 459 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_8_8;

#line 459 "il_peephole.m"
            ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Instr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_5, (MR_Integer) 0)))) == (MR_Integer) 22)));
#line 459 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 459 "il_peephole.m"
              {
#line 459 "il_peephole.m"
                ml_backend__il_peephole__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_5, (MR_Integer) 1)));
#line 459 "il_peephole.m"
                ml_backend__il_peephole__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_5, (MR_Integer) 2)));
#line 459 "il_peephole.m"
                ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__Id_2 == ml_backend__il_peephole__V_9_9);
#line 459 "il_peephole.m"
              }
#line 458 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 458 "il_peephole.m"
              ml_backend__il_peephole__HeadVar__3_3 = ml_backend__il_peephole__Instrs_6;
#line 458 "il_peephole.m"
            else
#line 458 "il_peephole.m"
              {
#line 458 "il_peephole.m"
                /* direct tailcall eliminated */
#line 458 "il_peephole.m"
                {
#line 458 "il_peephole.m"
                  MR_Word ml_backend__il_peephole__HeadVar__1__tmp_copy_1 = ml_backend__il_peephole__Instrs_6;

#line 458 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__1_1 = ml_backend__il_peephole__HeadVar__1__tmp_copy_1;
#line 458 "il_peephole.m"
                }
#line 458 "il_peephole.m"
                continue;
#line 458 "il_peephole.m"
              }
#line 458 "il_peephole.m"
          }
#line 457 "il_peephole.m"
        return ml_backend__il_peephole__HeadVar__3_3;
#line 457 "il_peephole.m"
      }
#line 457 "il_peephole.m"
      break;
#line 457 "il_peephole.m"
    }
#line 455 "il_peephole.m"
}

#line 437 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__no_handwritten_code_2_p_0(
#line 437 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 437 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__Id_2)
#line 437 "il_peephole.m"
{
#line 439 "il_peephole.m"
  while (MR_TRUE)
#line 439 "il_peephole.m"
    {
#line 439 "il_peephole.m"
      /* tailcall optimized into a loop */
#line 439 "il_peephole.m"
      {
#line 439 "il_peephole.m"
        MR_bool ml_backend__il_peephole__succeeded;

#line 439 "il_peephole.m"
        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "il_peephole.m"
          ml_backend__il_peephole__succeeded = MR_TRUE;
#line 439 "il_peephole.m"
        else
#line 440 "il_peephole.m"
          {
#line 440 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)));
#line 440 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "il_peephole.m"
            MR_String ml_backend__il_peephole__V_7_7;
#line 441 "il_peephole.m"
            MR_Integer ml_backend__il_peephole__V_8_8;

#line 441 "il_peephole.m"
            ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 24)));
#line 441 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 441 "il_peephole.m"
              {
#line 441 "il_peephole.m"
                ml_backend__il_peephole__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 1)));
#line 441 "il_peephole.m"
                ml_backend__il_peephole__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 2)));
#line 442 "il_peephole.m"
                ml_backend__il_peephole__succeeded = MR_FALSE;
#line 441 "il_peephole.m"
              }
#line 441 "il_peephole.m"
            else
#line 445 "il_peephole.m"
              {
#line 443 "il_peephole.m"
                MR_Integer ml_backend__il_peephole__V_13_13;
#line 443 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_9_9;

#line 443 "il_peephole.m"
                ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 22)));
#line 443 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 443 "il_peephole.m"
                  {
#line 443 "il_peephole.m"
                    ml_backend__il_peephole__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 1)));
#line 443 "il_peephole.m"
                    ml_backend__il_peephole__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 2)));
#line 443 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__Id_2 == ml_backend__il_peephole__V_13_13);
#line 443 "il_peephole.m"
                  }
#line 445 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 444 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = MR_TRUE;
#line 445 "il_peephole.m"
                else
#line 448 "il_peephole.m"
                  {
#line 448 "il_peephole.m"
                    MR_Integer ml_backend__il_peephole__SkipId_11;
#line 445 "il_peephole.m"
                    MR_Word ml_backend__il_peephole__V_10_10;

#line 445 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 445 "il_peephole.m"
                    if (ml_backend__il_peephole__succeeded)
#line 445 "il_peephole.m"
                      {
#line 445 "il_peephole.m"
                        ml_backend__il_peephole__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 1)));
#line 445 "il_peephole.m"
                        ml_backend__il_peephole__SkipId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 2)));
#line 446 "il_peephole.m"
                        {
#line 446 "il_peephole.m"
                          MR_Word ml_backend__il_peephole__InstrsAfterBlock_12;

#line 446 "il_peephole.m"
                          {
#line 446 "il_peephole.m"
                            ml_backend__il_peephole__InstrsAfterBlock_12 = ml_backend__il_peephole__skip_over_block_2_f_0(ml_backend__il_peephole__Instrs_5, ml_backend__il_peephole__SkipId_11);
                          }
#line 447 "il_peephole.m"
                          /* direct tailcall eliminated */
#line 447 "il_peephole.m"
                          {
#line 447 "il_peephole.m"
                            MR_Word ml_backend__il_peephole__HeadVar__1__tmp_copy_1 = ml_backend__il_peephole__InstrsAfterBlock_12;

#line 447 "il_peephole.m"
                            ml_backend__il_peephole__HeadVar__1_1 = ml_backend__il_peephole__HeadVar__1__tmp_copy_1;
#line 447 "il_peephole.m"
                          }
#line 447 "il_peephole.m"
                          continue;
#line 446 "il_peephole.m"
                        }
#line 445 "il_peephole.m"
                      }
#line 445 "il_peephole.m"
                    else
#line 449 "il_peephole.m"
                      {
#line 449 "il_peephole.m"
                        /* direct tailcall eliminated */
#line 449 "il_peephole.m"
                        {
#line 449 "il_peephole.m"
                          MR_Word ml_backend__il_peephole__HeadVar__1__tmp_copy_1 = ml_backend__il_peephole__Instrs_5;

#line 449 "il_peephole.m"
                          ml_backend__il_peephole__HeadVar__1_1 = ml_backend__il_peephole__HeadVar__1__tmp_copy_1;
#line 449 "il_peephole.m"
                        }
#line 449 "il_peephole.m"
                        continue;
#line 449 "il_peephole.m"
                      }
#line 448 "il_peephole.m"
                  }
#line 445 "il_peephole.m"
              }
#line 440 "il_peephole.m"
          }
#line 439 "il_peephole.m"
        return ml_backend__il_peephole__succeeded;
#line 439 "il_peephole.m"
      }
#line 439 "il_peephole.m"
      break;
#line 439 "il_peephole.m"
    }
#line 437 "il_peephole.m"
}

#line 411 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0_2(
#line 411 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 411 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 411 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2)
#line 411 "il_peephole.m"
{
#line 411 "il_peephole.m"
  {
#line 411 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 411 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv0_HeadVar__2_29;

#line 411 "il_peephole.m"
    {
#line 411 "il_peephole.m"
      ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__411__1_2_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv0_HeadVar__2_29);
    }
#line 411 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv0_HeadVar__2_29));
#line 411 "il_peephole.m"
  }
#line 411 "il_peephole.m"
}

#line 398 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0_1(
#line 398 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 398 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 398 "il_peephole.m"
{
#line 398 "il_peephole.m"
  {
#line 398 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 398 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 398 "il_peephole.m"
    {
#line 398 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__398__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 398 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 398 "il_peephole.m"
  }
#line 398 "il_peephole.m"
}

#line 392 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0(
#line 392 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 392 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 392 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_7)
#line 392 "il_peephole.m"
{
#line 394 "il_peephole.m"
  {
#line 394 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeInfo_50_50;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_51_51;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Locals_4;
#line 394 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__Id_5;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__UnusedLocals_13;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__UsedLocals_14;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Comments_19;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Replacement_20;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_21_21;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_22_22;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_27_27;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_34_34;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_35_35;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_36_36;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_37_37;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_38_38;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_39_39;
#line 394 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_40_40;
#line 408 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_15_15;
#line 408 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_16_16;

#line 394 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 394 "il_peephole.m"
      {
#line 394 "il_peephole.m"
        ml_backend__il_peephole__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 394 "il_peephole.m"
        ml_backend__il_peephole__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));
#line 394 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_21_21)) == (MR_mktag((MR_Integer) 2)));
#line 394 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 394 "il_peephole.m"
          {
#line 394 "il_peephole.m"
            ml_backend__il_peephole__Locals_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_21_21, (MR_Integer) 0)));
#line 395 "il_peephole.m"
            {
#line 395 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__il_peephole__no_handwritten_code_2_p_0(ml_backend__il_peephole__Instrs0_6, ml_backend__il_peephole__Id_5);
            }
#line 394 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 394 "il_peephole.m"
              {
#line 4469 "ml_backend.il_peephole.c"
                ml_backend__il_peephole__TypeInfo_50_50 = (MR_Word) &ml_backend__il_peephole_scalar_common_2[0];
#line 398 "il_peephole.m"
                {
#line 398 "il_peephole.m"
                  ml_backend__il_peephole__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 398 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_22_22, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[3]));
#line 398 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_22_22, 1) = ((MR_Box) (ml_backend__il_peephole__match_start_scope_2_3_p_0_1));
#line 398 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 398 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_22_22, 3) = ((MR_Box) (ml_backend__il_peephole__Instrs0_6));
#line 398 "il_peephole.m"
                }
#line 398 "il_peephole.m"
                {
#line 398 "il_peephole.m"
                  mercury__list__filter_4_p_0(ml_backend__il_peephole__TypeInfo_50_50, ml_backend__il_peephole__V_22_22, ml_backend__il_peephole__Locals_4, &ml_backend__il_peephole__UnusedLocals_13, &ml_backend__il_peephole__UsedLocals_14);
                }
#line 408 "il_peephole.m"
                ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__UnusedLocals_13)) == (MR_mktag((MR_Integer) 1)));
#line 408 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 408 "il_peephole.m"
                  {
#line 408 "il_peephole.m"
                    ml_backend__il_peephole__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__UnusedLocals_13, (MR_Integer) 0)));
#line 408 "il_peephole.m"
                    ml_backend__il_peephole__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__UnusedLocals_13, (MR_Integer) 1)));
#line 411 "il_peephole.m"
                    ml_backend__il_peephole__V_27_27 = (MR_Word) &ml_backend__il_peephole_scalar_common_2[5];
#line 4502 "ml_backend.il_peephole.c"
                    ml_backend__il_peephole__TypeCtorInfo_51_51 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 411 "il_peephole.m"
                    {
#line 411 "il_peephole.m"
                      mercury__list__map_3_p_0(ml_backend__il_peephole__TypeInfo_50_50, ml_backend__il_peephole__TypeCtorInfo_51_51, ml_backend__il_peephole__V_27_27, ml_backend__il_peephole__UnusedLocals_13, &ml_backend__il_peephole__Comments_19);
                    }
#line 416 "il_peephole.m"
                    ml_backend__il_peephole__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 418 "il_peephole.m"
                    ml_backend__il_peephole__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 416 "il_peephole.m"
                    {
#line 416 "il_peephole.m"
                      ml_backend__il_peephole__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "il_peephole.m"
                      MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_35_35, 0) = ((MR_Box) (ml_backend__il_peephole__UsedLocals_14));
#line 416 "il_peephole.m"
                    }
#line 416 "il_peephole.m"
                    {
#line 416 "il_peephole.m"
                      ml_backend__il_peephole__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 416 "il_peephole.m"
                      MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 416 "il_peephole.m"
                      MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_34_34, 1) = ((MR_Box) (ml_backend__il_peephole__V_35_35));
#line 416 "il_peephole.m"
                      MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_34_34, 2) = ((MR_Box) (ml_backend__il_peephole__Id_5));
#line 416 "il_peephole.m"
                    }
#line 416 "il_peephole.m"
                    {
#line 416 "il_peephole.m"
                      ml_backend__il_peephole__Replacement_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Replacement_20, 0) = ((MR_Box) (ml_backend__il_peephole__V_34_34));
#line 416 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Replacement_20, 1) = ((MR_Box) (ml_backend__il_peephole__V_36_36));
#line 416 "il_peephole.m"
                    }
#line 418 "il_peephole.m"
                    {
#line 418 "il_peephole.m"
                      ml_backend__il_peephole__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_39_39, 0) = ((MR_Box) (ml_backend__il_peephole__Instrs0_6));
#line 418 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_39_39, 1) = ((MR_Box) (ml_backend__il_peephole__V_40_40));
#line 418 "il_peephole.m"
                    }
#line 418 "il_peephole.m"
                    {
#line 418 "il_peephole.m"
                      ml_backend__il_peephole__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_38_38, 0) = ((MR_Box) (ml_backend__il_peephole__Replacement_20));
#line 418 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_38_38, 1) = ((MR_Box) (ml_backend__il_peephole__V_39_39));
#line 418 "il_peephole.m"
                    }
#line 418 "il_peephole.m"
                    {
#line 418 "il_peephole.m"
                      ml_backend__il_peephole__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_37_37, 0) = ((MR_Box) (ml_backend__il_peephole__Comments_19));
#line 418 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_37_37, 1) = ((MR_Box) (ml_backend__il_peephole__V_38_38));
#line 418 "il_peephole.m"
                    }
#line 418 "il_peephole.m"
                    {
#line 418 "il_peephole.m"
                      *ml_backend__il_peephole__Instrs_7 = mercury__list__condense_1_f_0(ml_backend__il_peephole__TypeCtorInfo_51_51, ml_backend__il_peephole__V_37_37);
                    }
#line 418 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = MR_TRUE;
#line 408 "il_peephole.m"
                  }
#line 394 "il_peephole.m"
              }
#line 394 "il_peephole.m"
          }
#line 394 "il_peephole.m"
      }
#line 394 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 394 "il_peephole.m"
  }
#line 392 "il_peephole.m"
}

#line 319 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_1_3_p_0(
#line 319 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 319 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 319 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_7)
#line 319 "il_peephole.m"
{
#line 321 "il_peephole.m"
  {
#line 321 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeInfo_115_115;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_118_118;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Locals_4;
#line 321 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__Id_5;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Result_30;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Var_32;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__PreStlocInstrsList_33;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Nops_34;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__PostStlocInstrs_35;
#line 321 "il_peephole.m"
    MR_String ml_backend__il_peephole__VarName_36;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__PreStlocInstrs_37;
#line 321 "il_peephole.m"
    MR_String ml_backend__il_peephole__Comment_38;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_39_39;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_63_63;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_64_64;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_65_65;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_66_66;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_67_67;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_68_68;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_75_75;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_76_76;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_79_79;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_80_80;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_81_81;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_82_82;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_83_83;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_84_84;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_85_85;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_86_86;
#line 321 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_87_87;
#line 321 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_122_122;
#line 321 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_123_123;
#line 321 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_124_124;
#line 321 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_125_125;
#line 321 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_126_126;
#line 321 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_127_127;
#line 373 "il_peephole.m"
    MR_Word ml_backend__il_peephole___Left_31;

#line 321 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 321 "il_peephole.m"
      {
#line 321 "il_peephole.m"
        ml_backend__il_peephole__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 321 "il_peephole.m"
        ml_backend__il_peephole__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));
#line 321 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_39_39)) == (MR_mktag((MR_Integer) 2)));
#line 321 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 321 "il_peephole.m"
          {
#line 321 "il_peephole.m"
            ml_backend__il_peephole__Locals_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_39_39, (MR_Integer) 0)));
#line 370 "il_peephole.m"
            {
#line 370 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__il_peephole__no_handwritten_code_2_p_0(ml_backend__il_peephole__Instrs0_6, ml_backend__il_peephole__Id_5);
            }
#line 321 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 321 "il_peephole.m"
              {
#line 373 "il_peephole.m"
                ml_backend__il_peephole__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "il_peephole.m"
                ml_backend__il_peephole__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4714 "ml_backend.il_peephole.c"
                ml_backend__il_peephole__TypeInfo_115_115 = (MR_Word) &ml_backend__il_peephole_scalar_common_1[0];
#line 373 "il_peephole.m"
                ml_backend__il_peephole__V_63_63 = (MR_Word) &ml_backend__il_peephole_scalar_common_1[7];
#line 373 "il_peephole.m"
                {
#line 373 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_p_0(ml_backend__il_peephole__Locals_4, ml_backend__il_peephole__Instrs0_6, ml_backend__il_peephole__Instrs0_6, ml_backend__il_peephole__V_63_63, &ml_backend__il_peephole__Result_30, &ml_backend__il_peephole___Left_31);
                }
#line 321 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 321 "il_peephole.m"
                  {
#line 374 "il_peephole.m"
                    ml_backend__il_peephole__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__Result_30, (MR_Integer) 0)));
#line 374 "il_peephole.m"
                    ml_backend__il_peephole__PostStlocInstrs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__Result_30, (MR_Integer) 1)));
#line 374 "il_peephole.m"
                    ml_backend__il_peephole__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_66_66, (MR_Integer) 0)));
#line 374 "il_peephole.m"
                    ml_backend__il_peephole__Nops_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_66_66, (MR_Integer) 1)));
#line 374 "il_peephole.m"
                    ml_backend__il_peephole__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_67_67, (MR_Integer) 0)));
#line 374 "il_peephole.m"
                    ml_backend__il_peephole__PreStlocInstrsList_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_67_67, (MR_Integer) 1)));
#line 375 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__Var_32)) == (MR_mktag((MR_Integer) 0)));
#line 375 "il_peephole.m"
                    if (ml_backend__il_peephole__succeeded)
#line 375 "il_peephole.m"
                      {
#line 375 "il_peephole.m"
                        ml_backend__il_peephole__VarName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__Var_32, (MR_Integer) 0)));
#line 4747 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__TypeCtorInfo_118_118 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 377 "il_peephole.m"
                        {
#line 377 "il_peephole.m"
                          ml_backend__il_peephole__V_68_68 = mercury__list__reverse_1_f_0(ml_backend__il_peephole__TypeInfo_115_115, ml_backend__il_peephole__PreStlocInstrsList_33);
                        }
#line 377 "il_peephole.m"
                        {
#line 377 "il_peephole.m"
                          ml_backend__il_peephole__PreStlocInstrs_37 = mercury__list__condense_1_f_0(ml_backend__il_peephole__TypeCtorInfo_118_118, ml_backend__il_peephole__V_68_68);
                        }
#line 4759 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_122_122 = (MR_String) " unused in scope)";
#line 4761 "ml_backend.il_peephole.c"
                        {
#line 4763 "ml_backend.il_peephole.c"
                          ml_backend__il_peephole__V_123_123 = mercury__string__f_43_43_2_f_0(ml_backend__il_peephole__VarName_36, ml_backend__il_peephole__V_122_122);
                        }
#line 4766 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_124_124 = (MR_String) ") --> nothing (";
#line 4768 "ml_backend.il_peephole.c"
                        {
#line 4770 "ml_backend.il_peephole.c"
                          ml_backend__il_peephole__V_125_125 = mercury__string__f_43_43_2_f_0(ml_backend__il_peephole__V_124_124, ml_backend__il_peephole__V_123_123);
                        }
#line 4773 "ml_backend.il_peephole.c"
                        {
#line 4775 "ml_backend.il_peephole.c"
                          ml_backend__il_peephole__V_126_126 = mercury__string__f_43_43_2_f_0(ml_backend__il_peephole__VarName_36, ml_backend__il_peephole__V_125_125);
                        }
#line 4778 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_127_127 = (MR_String) "peephole: dup, stloc(";
#line 4780 "ml_backend.il_peephole.c"
                        {
#line 4782 "ml_backend.il_peephole.c"
                          ml_backend__il_peephole__Comment_38 = mercury__string__f_43_43_2_f_0(ml_backend__il_peephole__V_127_127, ml_backend__il_peephole__V_126_126);
                        }
#line 382 "il_peephole.m"
                        ml_backend__il_peephole__V_79_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 385 "il_peephole.m"
                        ml_backend__il_peephole__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "il_peephole.m"
                        ml_backend__il_peephole__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "il_peephole.m"
                        {
#line 382 "il_peephole.m"
                          ml_backend__il_peephole__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_76_76, 0) = ((MR_Box) (ml_backend__il_peephole__HeadVar__1_1));
#line 382 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_76_76, 1) = ((MR_Box) (ml_backend__il_peephole__V_79_79));
#line 382 "il_peephole.m"
                        }
#line 385 "il_peephole.m"
                        {
#line 385 "il_peephole.m"
                          ml_backend__il_peephole__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "il_peephole.m"
                          MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 385 "il_peephole.m"
                          MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_84_84, 1) = ((MR_Box) (ml_backend__il_peephole__Comment_38));
#line 385 "il_peephole.m"
                        }
#line 385 "il_peephole.m"
                        {
#line 385 "il_peephole.m"
                          ml_backend__il_peephole__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_83_83, 0) = ((MR_Box) (ml_backend__il_peephole__V_84_84));
#line 385 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_83_83, 1) = ((MR_Box) (ml_backend__il_peephole__V_85_85));
#line 385 "il_peephole.m"
                        }
#line 385 "il_peephole.m"
                        {
#line 385 "il_peephole.m"
                          ml_backend__il_peephole__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_86_86, 0) = ((MR_Box) (ml_backend__il_peephole__PostStlocInstrs_35));
#line 385 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_86_86, 1) = ((MR_Box) (ml_backend__il_peephole__V_87_87));
#line 385 "il_peephole.m"
                        }
#line 384 "il_peephole.m"
                        {
#line 384 "il_peephole.m"
                          ml_backend__il_peephole__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_82_82, 0) = ((MR_Box) (ml_backend__il_peephole__V_83_83));
#line 384 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_82_82, 1) = ((MR_Box) (ml_backend__il_peephole__V_86_86));
#line 384 "il_peephole.m"
                        }
#line 383 "il_peephole.m"
                        {
#line 383 "il_peephole.m"
                          ml_backend__il_peephole__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_81_81, 0) = ((MR_Box) (ml_backend__il_peephole__Nops_34));
#line 383 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_81_81, 1) = ((MR_Box) (ml_backend__il_peephole__V_82_82));
#line 383 "il_peephole.m"
                        }
#line 382 "il_peephole.m"
                        {
#line 382 "il_peephole.m"
                          ml_backend__il_peephole__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_80_80, 0) = ((MR_Box) (ml_backend__il_peephole__PreStlocInstrs_37));
#line 382 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_80_80, 1) = ((MR_Box) (ml_backend__il_peephole__V_81_81));
#line 382 "il_peephole.m"
                        }
#line 382 "il_peephole.m"
                        {
#line 382 "il_peephole.m"
                          ml_backend__il_peephole__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_75_75, 0) = ((MR_Box) (ml_backend__il_peephole__V_76_76));
#line 382 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_75_75, 1) = ((MR_Box) (ml_backend__il_peephole__V_80_80));
#line 382 "il_peephole.m"
                        }
#line 382 "il_peephole.m"
                        {
#line 382 "il_peephole.m"
                          *ml_backend__il_peephole__Instrs_7 = mercury__list__condense_1_f_0(ml_backend__il_peephole__TypeCtorInfo_118_118, ml_backend__il_peephole__V_75_75);
                        }
#line 382 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = MR_TRUE;
#line 375 "il_peephole.m"
                      }
#line 321 "il_peephole.m"
                  }
#line 321 "il_peephole.m"
              }
#line 321 "il_peephole.m"
          }
#line 321 "il_peephole.m"
      }
#line 321 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 321 "il_peephole.m"
  }
#line 319 "il_peephole.m"
}

#line 284 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_4(
#line 284 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 284 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 284 "il_peephole.m"
{
#line 284 "il_peephole.m"
  {
#line 284 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 284 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 284 "il_peephole.m"
    {
#line 284 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match__284__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 284 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 284 "il_peephole.m"
  }
#line 284 "il_peephole.m"
}

#line 241 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_3(
#line 241 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 241 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 241 "il_peephole.m"
{
#line 241 "il_peephole.m"
  {
#line 241 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 241 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 241 "il_peephole.m"
    {
#line 241 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match__242__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 241 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 241 "il_peephole.m"
  }
#line 241 "il_peephole.m"
}

#line 229 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_2(
#line 229 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 229 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 229 "il_peephole.m"
{
#line 229 "il_peephole.m"
  {
#line 229 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 229 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 229 "il_peephole.m"
    {
#line 229 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match__229__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 229 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 229 "il_peephole.m"
  }
#line 229 "il_peephole.m"
}

#line 224 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_1(
#line 224 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 224 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 224 "il_peephole.m"
{
#line 224 "il_peephole.m"
  {
#line 224 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 224 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 224 "il_peephole.m"
    {
#line 224 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match__225__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 224 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 224 "il_peephole.m"
  }
#line 224 "il_peephole.m"
}

#line 212 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0(
#line 212 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 212 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_2,
#line 212 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_3,
#line 212 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_4)
#line 212 "il_peephole.m"
{
#line 223 "il_peephole.m"
  {
#line 223 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 223 "il_peephole.m"
    if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 223 "il_peephole.m"
      {
#line 223 "il_peephole.m"
        MR_Word ml_backend__il_peephole__TypeCtorInfo_110_110 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 223 "il_peephole.m"
        MR_Word ml_backend__il_peephole__PreLabel_10;
#line 223 "il_peephole.m"
        MR_Word ml_backend__il_peephole__NextInstrs0_11;
#line 223 "il_peephole.m"
        MR_Word ml_backend__il_peephole__KeepInstrs_14;
#line 223 "il_peephole.m"
        MR_Word ml_backend__il_peephole__V_17_17;
#line 223 "il_peephole.m"
        MR_Word ml_backend__il_peephole__V_20_20;
#line 223 "il_peephole.m"
        MR_Word ml_backend__il_peephole__V_21_21;
#line 227 "il_peephole.m"
        MR_Word ml_backend__il_peephole__V_12_12;
#line 227 "il_peephole.m"
        MR_Word ml_backend__il_peephole__V_13_13;

#line 224 "il_peephole.m"
        {
#line 224 "il_peephole.m"
          mercury__list__takewhile_4_p_0(ml_backend__il_peephole__TypeCtorInfo_110_110, (MR_Word) &ml_backend__il_peephole_scalar_common_2[3], ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__PreLabel_10, &ml_backend__il_peephole__NextInstrs0_11);
        }
#line 227 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__PreLabel_10)) == (MR_mktag((MR_Integer) 1)));
#line 227 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 227 "il_peephole.m"
          {
#line 227 "il_peephole.m"
            ml_backend__il_peephole__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__PreLabel_10, (MR_Integer) 0)));
#line 227 "il_peephole.m"
            ml_backend__il_peephole__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__PreLabel_10, (MR_Integer) 1)));
#line 229 "il_peephole.m"
            ml_backend__il_peephole__V_17_17 = (MR_Word) &ml_backend__il_peephole_scalar_common_2[4];
#line 229 "il_peephole.m"
            {
#line 229 "il_peephole.m"
              mercury__list__filter_3_p_0(ml_backend__il_peephole__TypeCtorInfo_110_110, ml_backend__il_peephole__V_17_17, ml_backend__il_peephole__PreLabel_10, &ml_backend__il_peephole__KeepInstrs_14);
            }
#line 231 "il_peephole.m"
            ml_backend__il_peephole__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__il_peephole_scalar_common_1[3]);
#line 231 "il_peephole.m"
            {
#line 231 "il_peephole.m"
              ml_backend__il_peephole__V_20_20 = mercury__list__f_43_43_2_f_0(ml_backend__il_peephole__TypeCtorInfo_110_110, ml_backend__il_peephole__V_21_21, ml_backend__il_peephole__NextInstrs0_11);
            }
#line 231 "il_peephole.m"
            {
#line 231 "il_peephole.m"
              *ml_backend__il_peephole__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ml_backend__il_peephole__TypeCtorInfo_110_110, ml_backend__il_peephole__KeepInstrs_14, ml_backend__il_peephole__V_20_20);
            }
#line 231 "il_peephole.m"
            ml_backend__il_peephole__succeeded = MR_TRUE;
#line 227 "il_peephole.m"
          }
#line 223 "il_peephole.m"
      }
#line 223 "il_peephole.m"
    else
#line 223 "il_peephole.m"
      if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 239 "il_peephole.m"
        {
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__TypeCtorInfo_111_111;
#line 239 "il_peephole.m"
          MR_String ml_backend__il_peephole__Label_29;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__NextInstrs0_35;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__NextInstrs_36;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_39_39;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_40_40;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_41_41;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_43_43;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_44_44;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_45_45;
#line 239 "il_peephole.m"
          MR_String ml_backend__il_peephole__V_46_46;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_47_47;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_48_48;
#line 239 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_115_115;
#line 241 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_34_34;
#line 244 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_37_37;
#line 245 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_38_38;

#line 240 "il_peephole.m"
          ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__VerifyOnly_2 == (MR_Integer) 0);
#line 239 "il_peephole.m"
          if (ml_backend__il_peephole__succeeded)
#line 239 "il_peephole.m"
            {
#line 239 "il_peephole.m"
              ml_backend__il_peephole__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 239 "il_peephole.m"
              if (ml_backend__il_peephole__succeeded)
#line 239 "il_peephole.m"
                {
#line 239 "il_peephole.m"
                  ml_backend__il_peephole__Label_29 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_39_39, (MR_Integer) 0)));
#line 5145 "ml_backend.il_peephole.c"
                  ml_backend__il_peephole__TypeCtorInfo_111_111 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 241 "il_peephole.m"
                  {
#line 241 "il_peephole.m"
                    ml_backend__il_peephole__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 241 "il_peephole.m"
                    MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[1]));
#line 241 "il_peephole.m"
                    MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 1) = ((MR_Box) (ml_backend__il_peephole__match_4_p_0_3));
#line 241 "il_peephole.m"
                    MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "il_peephole.m"
                    MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 3) = ((MR_Box) (ml_backend__il_peephole__Label_29));
#line 241 "il_peephole.m"
                  }
#line 243 "il_peephole.m"
                  {
#line 243 "il_peephole.m"
                    ml_backend__il_peephole__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "il_peephole.m"
                    MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 243 "il_peephole.m"
                    MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_43_43, 1) = ((MR_Box) (ml_backend__il_peephole__Label_29));
#line 243 "il_peephole.m"
                  }
#line 241 "il_peephole.m"
                  {
#line 241 "il_peephole.m"
                    mercury__list__takewhile_4_p_0(ml_backend__il_peephole__TypeCtorInfo_111_111, ml_backend__il_peephole__V_40_40, ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__V_34_34, &ml_backend__il_peephole__V_41_41);
                  }
#line 241 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 241 "il_peephole.m"
                  if (ml_backend__il_peephole__succeeded)
#line 241 "il_peephole.m"
                    {
#line 241 "il_peephole.m"
                      ml_backend__il_peephole__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_41_41, (MR_Integer) 0)));
#line 241 "il_peephole.m"
                      ml_backend__il_peephole__NextInstrs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_41_41, (MR_Integer) 1)));
#line 241 "il_peephole.m"
                      {
#line 241 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____instr_0_0(ml_backend__il_peephole__V_43_43, ml_backend__il_peephole__V_115_115);
                      }
#line 239 "il_peephole.m"
                      if (ml_backend__il_peephole__succeeded)
#line 239 "il_peephole.m"
                        {
#line 244 "il_peephole.m"
                          {
#line 244 "il_peephole.m"
                            ml_backend__il_peephole__skip_nops_3_p_0(ml_backend__il_peephole__NextInstrs0_35, &ml_backend__il_peephole__NextInstrs_36, &ml_backend__il_peephole__V_37_37);
                          }
#line 245 "il_peephole.m"
                          ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__NextInstrs_36)) == (MR_mktag((MR_Integer) 1)));
#line 245 "il_peephole.m"
                          if (ml_backend__il_peephole__succeeded)
#line 245 "il_peephole.m"
                            {
#line 245 "il_peephole.m"
                              ml_backend__il_peephole__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__NextInstrs_36, (MR_Integer) 0)));
#line 245 "il_peephole.m"
                              ml_backend__il_peephole__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__NextInstrs_36, (MR_Integer) 1)));
#line 245 "il_peephole.m"
                              ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 239 "il_peephole.m"
                              if (ml_backend__il_peephole__succeeded)
#line 239 "il_peephole.m"
                                {
#line 246 "il_peephole.m"
                                  ml_backend__il_peephole__V_46_46 = (MR_String) "peephole -- eliminated branch to ret";
#line 246 "il_peephole.m"
                                  ml_backend__il_peephole__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17));
#line 246 "il_peephole.m"
                                  ml_backend__il_peephole__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__il_peephole_scalar_common_1[4]);
#line 246 "il_peephole.m"
                                  {
#line 246 "il_peephole.m"
                                    ml_backend__il_peephole__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_47_47, 0) = ((MR_Box) (ml_backend__il_peephole__V_48_48));
#line 246 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_47_47, 1) = ((MR_Box) (ml_backend__il_peephole__HeadVar__3_3));
#line 246 "il_peephole.m"
                                  }
#line 246 "il_peephole.m"
                                  {
#line 246 "il_peephole.m"
                                    MR_Word base;
#line 246 "il_peephole.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "il_peephole.m"
                                    *ml_backend__il_peephole__HeadVar__4_4 = base;
#line 246 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__V_45_45));
#line 246 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__V_47_47));
#line 246 "il_peephole.m"
                                  }
#line 246 "il_peephole.m"
                                  ml_backend__il_peephole__succeeded = MR_TRUE;
#line 239 "il_peephole.m"
                                }
#line 245 "il_peephole.m"
                            }
#line 239 "il_peephole.m"
                        }
#line 241 "il_peephole.m"
                    }
#line 239 "il_peephole.m"
                }
#line 239 "il_peephole.m"
            }
#line 239 "il_peephole.m"
        }
#line 223 "il_peephole.m"
      else
#line 223 "il_peephole.m"
        if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 43))))
#line 281 "il_peephole.m"
          {
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__TypeCtorInfo_113_113;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Var_70;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instrs0_71;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__PreLdInstrs_76;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Rest_77;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Comment_78;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Replacement_79;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_80_80;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_81_81;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_82_82;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_86_86;
#line 281 "il_peephole.m"
            MR_String ml_backend__il_peephole__V_87_87;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_88_88;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_89_89;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_91_91;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_92_92;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_93_93;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_95_95;
#line 281 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_119_119;

#line 282 "il_peephole.m"
            ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__VerifyOnly_2 == (MR_Integer) 0);
#line 281 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 281 "il_peephole.m"
              {
#line 281 "il_peephole.m"
                ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 281 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 281 "il_peephole.m"
                  {
#line 281 "il_peephole.m"
                    ml_backend__il_peephole__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__3_3, (MR_Integer) 0)));
#line 281 "il_peephole.m"
                    ml_backend__il_peephole__Instrs0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__3_3, (MR_Integer) 1)));
#line 281 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__V_80_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_80_80, (MR_Integer) 0)))) == (MR_Integer) 54)));
#line 281 "il_peephole.m"
                    if (ml_backend__il_peephole__succeeded)
#line 281 "il_peephole.m"
                      {
#line 281 "il_peephole.m"
                        ml_backend__il_peephole__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_80_80, (MR_Integer) 1)));
#line 5331 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__TypeCtorInfo_113_113 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 284 "il_peephole.m"
                        {
#line 284 "il_peephole.m"
                          ml_backend__il_peephole__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 284 "il_peephole.m"
                          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_81_81, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[2]));
#line 284 "il_peephole.m"
                          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_81_81, 1) = ((MR_Box) (ml_backend__il_peephole__match_4_p_0_4));
#line 284 "il_peephole.m"
                          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 284 "il_peephole.m"
                          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_81_81, 3) = ((MR_Box) (ml_backend__il_peephole__Var_70));
#line 284 "il_peephole.m"
                        }
#line 291 "il_peephole.m"
                        {
#line 291 "il_peephole.m"
                          ml_backend__il_peephole__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "il_peephole.m"
                          MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 46));
#line 291 "il_peephole.m"
                          MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_86_86, 1) = ((MR_Box) (ml_backend__il_peephole__Var_70));
#line 291 "il_peephole.m"
                        }
#line 284 "il_peephole.m"
                        {
#line 284 "il_peephole.m"
                          mercury__list__takewhile_4_p_0(ml_backend__il_peephole__TypeCtorInfo_113_113, ml_backend__il_peephole__V_81_81, ml_backend__il_peephole__Instrs0_71, &ml_backend__il_peephole__PreLdInstrs_76, &ml_backend__il_peephole__V_82_82);
                        }
#line 284 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 284 "il_peephole.m"
                        if (ml_backend__il_peephole__succeeded)
#line 284 "il_peephole.m"
                          {
#line 284 "il_peephole.m"
                            ml_backend__il_peephole__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_82_82, (MR_Integer) 0)));
#line 284 "il_peephole.m"
                            ml_backend__il_peephole__Rest_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_82_82, (MR_Integer) 1)));
#line 284 "il_peephole.m"
                            {
#line 284 "il_peephole.m"
                              ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____instr_0_0(ml_backend__il_peephole__V_86_86, ml_backend__il_peephole__V_119_119);
                            }
#line 281 "il_peephole.m"
                            if (ml_backend__il_peephole__succeeded)
#line 281 "il_peephole.m"
                              {
#line 294 "il_peephole.m"
                                ml_backend__il_peephole__V_87_87 = (MR_String) "peephole: ldc(X), stloc(X), ldloc(X) --> ldc(X), dup, stloc(X)";
#line 296 "il_peephole.m"
                                ml_backend__il_peephole__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 296 "il_peephole.m"
                                ml_backend__il_peephole__V_95_95 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 294 "il_peephole.m"
                                ml_backend__il_peephole__Comment_78 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__il_peephole_scalar_common_1[5]);
#line 296 "il_peephole.m"
                                {
#line 296 "il_peephole.m"
                                  ml_backend__il_peephole__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_93_93, 0) = ((MR_Box) (ml_backend__il_peephole__V_80_80));
#line 296 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_93_93, 1) = ((MR_Box) (ml_backend__il_peephole__V_95_95));
#line 296 "il_peephole.m"
                                }
#line 296 "il_peephole.m"
                                {
#line 296 "il_peephole.m"
                                  ml_backend__il_peephole__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_91_91, 0) = ((MR_Box) (ml_backend__il_peephole__V_92_92));
#line 296 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_91_91, 1) = ((MR_Box) (ml_backend__il_peephole__V_93_93));
#line 296 "il_peephole.m"
                                }
#line 296 "il_peephole.m"
                                {
#line 296 "il_peephole.m"
                                  ml_backend__il_peephole__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_89_89, 0) = ((MR_Box) (ml_backend__il_peephole__HeadVar__1_1));
#line 296 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_89_89, 1) = ((MR_Box) (ml_backend__il_peephole__V_91_91));
#line 296 "il_peephole.m"
                                }
#line 296 "il_peephole.m"
                                {
#line 296 "il_peephole.m"
                                  ml_backend__il_peephole__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_88_88, 0) = ((MR_Box) (ml_backend__il_peephole__Comment_78));
#line 296 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_88_88, 1) = ((MR_Box) (ml_backend__il_peephole__V_89_89));
#line 296 "il_peephole.m"
                                }
#line 296 "il_peephole.m"
                                {
#line 296 "il_peephole.m"
                                  ml_backend__il_peephole__Replacement_79 = mercury__list__f_43_43_2_f_0(ml_backend__il_peephole__TypeCtorInfo_113_113, ml_backend__il_peephole__PreLdInstrs_76, ml_backend__il_peephole__V_88_88);
                                }
#line 297 "il_peephole.m"
                                {
#line 297 "il_peephole.m"
                                  *ml_backend__il_peephole__HeadVar__4_4 = mercury__list__append_2_f_0(ml_backend__il_peephole__TypeCtorInfo_113_113, ml_backend__il_peephole__Replacement_79, ml_backend__il_peephole__Rest_77);
                                }
#line 297 "il_peephole.m"
                                ml_backend__il_peephole__succeeded = MR_TRUE;
#line 281 "il_peephole.m"
                              }
#line 284 "il_peephole.m"
                          }
#line 281 "il_peephole.m"
                      }
#line 281 "il_peephole.m"
                  }
#line 281 "il_peephole.m"
              }
#line 281 "il_peephole.m"
          }
#line 223 "il_peephole.m"
        else
#line 223 "il_peephole.m"
          if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 301 "il_peephole.m"
            {
#line 301 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_103_103;
#line 301 "il_peephole.m"
              MR_Integer ml_backend__il_peephole__Id_98;
#line 301 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Locals_97;
#line 305 "il_peephole.m"
              MR_Word ml_backend__il_peephole__STATE_VARIABLE_Instrs_105_105;

#line 302 "il_peephole.m"
              ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__VerifyOnly_2 == (MR_Integer) 0);
#line 301 "il_peephole.m"
              if (ml_backend__il_peephole__succeeded)
#line 301 "il_peephole.m"
                {
#line 301 "il_peephole.m"
                  ml_backend__il_peephole__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 301 "il_peephole.m"
                  ml_backend__il_peephole__Id_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));
#line 301 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_103_103)) == (MR_mktag((MR_Integer) 2)));
#line 301 "il_peephole.m"
                  if (ml_backend__il_peephole__succeeded)
#line 301 "il_peephole.m"
                    {
#line 301 "il_peephole.m"
                      ml_backend__il_peephole__Locals_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_103_103, (MR_Integer) 0)));
#line 303 "il_peephole.m"
                      {
#line 303 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = ml_backend__il_peephole__match_start_scope_1_3_p_0(ml_backend__il_peephole__HeadVar__1_1, ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__STATE_VARIABLE_Instrs_105_105);
                      }
#line 305 "il_peephole.m"
                      if (ml_backend__il_peephole__succeeded)
#line 303 "il_peephole.m"
                        {
#line 303 "il_peephole.m"
                          *ml_backend__il_peephole__HeadVar__4_4 = ml_backend__il_peephole__STATE_VARIABLE_Instrs_105_105;
#line 303 "il_peephole.m"
                          ml_backend__il_peephole__succeeded = MR_TRUE;
#line 303 "il_peephole.m"
                        }
#line 305 "il_peephole.m"
                      else
#line 306 "il_peephole.m"
                        {
#line 306 "il_peephole.m"
                          return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__match_start_scope_2_3_p_0(ml_backend__il_peephole__HeadVar__1_1, ml_backend__il_peephole__HeadVar__3_3, ml_backend__il_peephole__HeadVar__4_4);
                        }
#line 301 "il_peephole.m"
                    }
#line 301 "il_peephole.m"
                }
#line 301 "il_peephole.m"
            }
#line 223 "il_peephole.m"
          else
#line 223 "il_peephole.m"
            if (((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 54))))
#line 259 "il_peephole.m"
              {
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__TypeCtorInfo_112_112;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__Var_50;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__Instrs1_54;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__Nops_55;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__Rest_56;
#line 259 "il_peephole.m"
                MR_String ml_backend__il_peephole__Comment_57;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__Replacement_58;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_59_59;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_60_60;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_61_61;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_62_62;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_64_64;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_65_65;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_66_66;
#line 259 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_116_116;

#line 260 "il_peephole.m"
                ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__VerifyOnly_2 == (MR_Integer) 0);
#line 259 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 259 "il_peephole.m"
                  {
#line 259 "il_peephole.m"
                    ml_backend__il_peephole__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "il_peephole.m"
                    {
#line 262 "il_peephole.m"
                      ml_backend__il_peephole__skip_nops_3_p_0(ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__Instrs1_54, &ml_backend__il_peephole__Nops_55);
                    }
#line 263 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__Instrs1_54)) == (MR_mktag((MR_Integer) 1)));
#line 263 "il_peephole.m"
                    if (ml_backend__il_peephole__succeeded)
#line 263 "il_peephole.m"
                      {
#line 263 "il_peephole.m"
                        ml_backend__il_peephole__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Instrs1_54, (MR_Integer) 0)));
#line 263 "il_peephole.m"
                        ml_backend__il_peephole__Rest_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Instrs1_54, (MR_Integer) 1)));
#line 263 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 46)));
#line 263 "il_peephole.m"
                        if (ml_backend__il_peephole__succeeded)
#line 263 "il_peephole.m"
                          {
#line 263 "il_peephole.m"
                            ml_backend__il_peephole__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_59_59, (MR_Integer) 1)));
#line 263 "il_peephole.m"
                            {
#line 263 "il_peephole.m"
                              ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_50, ml_backend__il_peephole__V_116_116);
                            }
#line 259 "il_peephole.m"
                            if (ml_backend__il_peephole__succeeded)
#line 259 "il_peephole.m"
                              {
#line 265 "il_peephole.m"
                                ml_backend__il_peephole__Comment_57 = (MR_String) "peephole: stloc(X), ldloc(X) --> dup, stloc(X)";
#line 5593 "ml_backend.il_peephole.c"
                                ml_backend__il_peephole__TypeCtorInfo_112_112 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 266 "il_peephole.m"
                                ml_backend__il_peephole__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 266 "il_peephole.m"
                                ml_backend__il_peephole__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "il_peephole.m"
                                {
#line 266 "il_peephole.m"
                                  ml_backend__il_peephole__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_60_60, 0) = ((MR_Box) (ml_backend__il_peephole__V_61_61));
#line 266 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_60_60, 1) = ((MR_Box) (ml_backend__il_peephole__Nops_55));
#line 266 "il_peephole.m"
                                }
#line 266 "il_peephole.m"
                                {
#line 266 "il_peephole.m"
                                  ml_backend__il_peephole__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_62_62, 0) = ((MR_Box) (ml_backend__il_peephole__HeadVar__1_1));
#line 266 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_62_62, 1) = ((MR_Box) (ml_backend__il_peephole__V_64_64));
#line 266 "il_peephole.m"
                                }
#line 266 "il_peephole.m"
                                {
#line 266 "il_peephole.m"
                                  ml_backend__il_peephole__Replacement_58 = mercury__list__append_2_f_0(ml_backend__il_peephole__TypeCtorInfo_112_112, ml_backend__il_peephole__V_60_60, ml_backend__il_peephole__V_62_62);
                                }
#line 267 "il_peephole.m"
                                ml_backend__il_peephole__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__il_peephole_scalar_common_1[6]);
#line 267 "il_peephole.m"
                                {
#line 267 "il_peephole.m"
                                  ml_backend__il_peephole__V_66_66 = mercury__list__append_2_f_0(ml_backend__il_peephole__TypeCtorInfo_112_112, ml_backend__il_peephole__Replacement_58, ml_backend__il_peephole__Rest_56);
                                }
#line 267 "il_peephole.m"
                                {
#line 267 "il_peephole.m"
                                  MR_Word base;
#line 267 "il_peephole.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "il_peephole.m"
                                  *ml_backend__il_peephole__HeadVar__4_4 = base;
#line 267 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__V_65_65));
#line 267 "il_peephole.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__V_66_66));
#line 267 "il_peephole.m"
                                }
#line 267 "il_peephole.m"
                                ml_backend__il_peephole__succeeded = MR_TRUE;
#line 259 "il_peephole.m"
                              }
#line 263 "il_peephole.m"
                          }
#line 263 "il_peephole.m"
                      }
#line 259 "il_peephole.m"
                  }
#line 259 "il_peephole.m"
              }
#line 223 "il_peephole.m"
            else
#line 223 "il_peephole.m"
              ml_backend__il_peephole__succeeded = MR_FALSE;
#line 223 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 223 "il_peephole.m"
  }
#line 212 "il_peephole.m"
}

#line 188 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__opt_instr_5_p_0(
#line 188 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 188 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instr0_7,
#line 188 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_8,
#line 188 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_9,
#line 188 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Mod_10)
#line 188 "il_peephole.m"
{
#line 201 "il_peephole.m"
  {
#line 201 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 201 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Instrs2_11;

#line 192 "il_peephole.m"
    {
#line 192 "il_peephole.m"
      ml_backend__il_peephole__succeeded = ml_backend__il_peephole__match_4_p_0(ml_backend__il_peephole__Instr0_7, ml_backend__il_peephole__VerifyOnly_6, ml_backend__il_peephole__Instrs0_8, &ml_backend__il_peephole__Instrs2_11);
    }
#line 201 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 199 "il_peephole.m"
      {
#line 196 "il_peephole.m"
        if ((ml_backend__il_peephole__Instrs2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "il_peephole.m"
          *ml_backend__il_peephole__Instrs_9 = ml_backend__il_peephole__Instrs2_11;
#line 196 "il_peephole.m"
        else
#line 194 "il_peephole.m"
          {
#line 194 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instr2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Instrs2_11, (MR_Integer) 0)));
#line 194 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instrs3_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Instrs2_11, (MR_Integer) 1)));
#line 195 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_14_14;

#line 195 "il_peephole.m"
            {
#line 195 "il_peephole.m"
              ml_backend__il_peephole__opt_instr_5_p_0(ml_backend__il_peephole__VerifyOnly_6, ml_backend__il_peephole__Instr2_12, ml_backend__il_peephole__Instrs3_13, ml_backend__il_peephole__Instrs_9, &ml_backend__il_peephole__V_14_14);
            }
#line 194 "il_peephole.m"
          }
#line 200 "il_peephole.m"
        *ml_backend__il_peephole__Mod_10 = (MR_Integer) 1;
#line 199 "il_peephole.m"
      }
#line 201 "il_peephole.m"
    else
#line 202 "il_peephole.m"
      {
#line 202 "il_peephole.m"
        {
#line 202 "il_peephole.m"
          MR_Word base;
#line 202 "il_peephole.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "il_peephole.m"
          *ml_backend__il_peephole__Instrs_9 = base;
#line 202 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__Instr0_7));
#line 202 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__Instrs0_8));
#line 202 "il_peephole.m"
        }
#line 203 "il_peephole.m"
        *ml_backend__il_peephole__Mod_10 = (MR_Integer) 0;
#line 202 "il_peephole.m"
      }
#line 201 "il_peephole.m"
  }
#line 188 "il_peephole.m"
}

#line 177 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_2_4_p_0(
#line 177 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_1,
#line 177 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2,
#line 177 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__3_3,
#line 177 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_4)
#line 177 "il_peephole.m"
{
#line 179 "il_peephole.m"
  {
#line 179 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 179 "il_peephole.m"
    if ((ml_backend__il_peephole__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 179 "il_peephole.m"
      {
#line 179 "il_peephole.m"
        *ml_backend__il_peephole__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 179 "il_peephole.m"
        *ml_backend__il_peephole__HeadVar__4_4 = (MR_Integer) 0;
#line 179 "il_peephole.m"
      }
#line 179 "il_peephole.m"
    else
#line 180 "il_peephole.m"
      {
#line 180 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__2_2, (MR_Integer) 0)));
#line 180 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__2_2, (MR_Integer) 1)));
#line 180 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Instrs1_11;
#line 180 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Mod0_12;
#line 180 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Mod1_13;

#line 181 "il_peephole.m"
        {
#line 181 "il_peephole.m"
          ml_backend__il_peephole__optimize_2_4_p_0(ml_backend__il_peephole__VerifyOnly_1, ml_backend__il_peephole__Instrs0_8, &ml_backend__il_peephole__Instrs1_11, &ml_backend__il_peephole__Mod0_12);
        }
#line 182 "il_peephole.m"
        {
#line 182 "il_peephole.m"
          ml_backend__il_peephole__opt_instr_5_p_0(ml_backend__il_peephole__VerifyOnly_1, ml_backend__il_peephole__Instr0_7, ml_backend__il_peephole__Instrs1_11, ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__Mod1_13);
        }
#line 183 "il_peephole.m"
        {
#line 183 "il_peephole.m"
          mercury__bool__or_3_p_0(ml_backend__il_peephole__Mod0_12, ml_backend__il_peephole__Mod1_13, ml_backend__il_peephole__HeadVar__4_4);
#line 183 "il_peephole.m"
          return;
        }
#line 180 "il_peephole.m"
      }
#line 179 "il_peephole.m"
  }
#line 177 "il_peephole.m"
}

#line 159 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_method_decl_5_p_0(
#line 159 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 159 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decl0_7,
#line 159 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decl_8,
#line 159 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_13,
#line 159 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_14)
#line 159 "il_peephole.m"
{
#line 168 "il_peephole.m"
  {
#line 168 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Decl0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 168 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Instrs0_10;

#line 164 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 164 "il_peephole.m"
      {
#line 164 "il_peephole.m"
        ml_backend__il_peephole__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 1)));
#line 165 "il_peephole.m"
        {
#line 165 "il_peephole.m"
          MR_Word ml_backend__il_peephole__Instrs_11;
#line 165 "il_peephole.m"
          MR_Word ml_backend__il_peephole__InstrsMod_12;

#line 175 "il_peephole.m"
          {
#line 175 "il_peephole.m"
            ml_backend__il_peephole__optimize_2_4_p_0(ml_backend__il_peephole__VerifyOnly_6, ml_backend__il_peephole__Instrs0_10, &ml_backend__il_peephole__Instrs_11, &ml_backend__il_peephole__InstrsMod_12);
          }
#line 166 "il_peephole.m"
          {
#line 166 "il_peephole.m"
            mercury__bool__or_3_p_0(ml_backend__il_peephole__InstrsMod_12, ml_backend__il_peephole__STATE_VARIABLE_Mod_0_13, ml_backend__il_peephole__STATE_VARIABLE_Mod_14);
          }
#line 167 "il_peephole.m"
          {
#line 167 "il_peephole.m"
            MR_Word base;
#line 167 "il_peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "il_peephole.m"
            *ml_backend__il_peephole__Decl_8 = base;
#line 167 "il_peephole.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "il_peephole.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__il_peephole__Instrs_11));
#line 167 "il_peephole.m"
          }
#line 165 "il_peephole.m"
        }
#line 164 "il_peephole.m"
      }
#line 164 "il_peephole.m"
    else
#line 169 "il_peephole.m"
      {
#line 169 "il_peephole.m"
        *ml_backend__il_peephole__Decl_8 = ml_backend__il_peephole__Decl0_7;
#line 169 "il_peephole.m"
        *ml_backend__il_peephole__STATE_VARIABLE_Mod_14 = ml_backend__il_peephole__STATE_VARIABLE_Mod_0_13;
#line 169 "il_peephole.m"
      }
#line 168 "il_peephole.m"
  }
#line 159 "il_peephole.m"
}

#line 136 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_4(
#line 136 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 136 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 136 "il_peephole.m"
{
#line 136 "il_peephole.m"
  {
#line 136 "il_peephole.m"
    MR_Box ml_backend__il_peephole__wrapper_arg_2;
#line 136 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 136 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv6_HeadVar__3_53;

#line 136 "il_peephole.m"
    {
#line 136 "il_peephole.m"
      ml_backend__il_peephole__conv6_HeadVar__3_53 = ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__136__1_2_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 136 "il_peephole.m"
    ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv6_HeadVar__3_53));
#line 136 "il_peephole.m"
    return ml_backend__il_peephole__wrapper_arg_2;
#line 136 "il_peephole.m"
  }
#line 136 "il_peephole.m"
}

#line 134 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_3(
#line 134 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 134 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 134 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_2)
#line 134 "il_peephole.m"
{
#line 134 "il_peephole.m"
  {
#line 134 "il_peephole.m"
    MR_Box ml_backend__il_peephole__wrapper_arg_3;
#line 134 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 134 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__conv4_HeadVar__3_3;

#line 134 "il_peephole.m"
    {
#line 134 "il_peephole.m"
      ml_backend__il_peephole__conv4_HeadVar__3_3 = mercury__int__f_plus_2_f_0(((MR_Integer) ml_backend__il_peephole__wrapper_arg_1), ((MR_Integer) ml_backend__il_peephole__wrapper_arg_2));
    }
#line 134 "il_peephole.m"
    ml_backend__il_peephole__wrapper_arg_3 = ((MR_Box) (ml_backend__il_peephole__conv4_HeadVar__3_3));
#line 134 "il_peephole.m"
    return ml_backend__il_peephole__wrapper_arg_3;
#line 134 "il_peephole.m"
  }
#line 134 "il_peephole.m"
}

#line 129 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_2(
#line 129 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 129 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 129 "il_peephole.m"
{
#line 129 "il_peephole.m"
  {
#line 129 "il_peephole.m"
    MR_Box ml_backend__il_peephole__wrapper_arg_2;
#line 129 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 129 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__conv3_HeadVar__2_45;

#line 129 "il_peephole.m"
    {
#line 129 "il_peephole.m"
      ml_backend__il_peephole__conv3_HeadVar__2_45 = ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__129__1_1_f_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 129 "il_peephole.m"
    ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv3_HeadVar__2_45));
#line 129 "il_peephole.m"
    return ml_backend__il_peephole__wrapper_arg_2;
#line 129 "il_peephole.m"
  }
#line 129 "il_peephole.m"
}

#line 124 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_1(
#line 124 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 124 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 124 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 124 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 124 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 124 "il_peephole.m"
{
#line 124 "il_peephole.m"
  {
#line 124 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 124 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv1_Decl_8;
#line 124 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_14;

#line 124 "il_peephole.m"
    {
#line 124 "il_peephole.m"
      ml_backend__il_peephole__optimize_method_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv1_Decl_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_14);
    }
#line 124 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv1_Decl_8));
#line 124 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_14));
#line 124 "il_peephole.m"
  }
#line 124 "il_peephole.m"
}

#line 118 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0(
#line 118 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 118 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Member0_7,
#line 118 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Member_8,
#line 118 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_38,
#line 118 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_39)
#line 118 "il_peephole.m"
{
#line 123 "il_peephole.m"
  {
#line 123 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 123 "il_peephole.m"
    if (((MR_tag((MR_Word) ml_backend__il_peephole__Member0_7)) == (MR_mktag((MR_Integer) 1))))
#line 123 "il_peephole.m"
      {
#line 123 "il_peephole.m"
        MR_Word ml_backend__il_peephole__TypeCtorInfo_63_63;
#line 123 "il_peephole.m"
        MR_Word ml_backend__il_peephole__MethodHead_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Member0_7, (MR_Integer) 0)));
#line 123 "il_peephole.m"
        MR_Word ml_backend__il_peephole__MethodDecls0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Member0_7, (MR_Integer) 1)));
#line 123 "il_peephole.m"
        MR_Word ml_backend__il_peephole__MethodDecls1_12;
#line 123 "il_peephole.m"
        MR_Word ml_backend__il_peephole__V_41_41;
#line 124 "il_peephole.m"
        MR_Box ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_39;

#line 124 "il_peephole.m"
        {
#line 124 "il_peephole.m"
          ml_backend__il_peephole__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 124 "il_peephole.m"
          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[2]));
#line 124 "il_peephole.m"
          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_class_member_5_p_0_1));
#line 124 "il_peephole.m"
          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 124 "il_peephole.m"
          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_6));
#line 124 "il_peephole.m"
        }
#line 6084 "ml_backend.il_peephole.c"
        ml_backend__il_peephole__TypeCtorInfo_63_63 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0;
#line 124 "il_peephole.m"
        {
#line 124 "il_peephole.m"
          mercury__list__map_foldl_5_p_1(ml_backend__il_peephole__TypeCtorInfo_63_63, ml_backend__il_peephole__TypeCtorInfo_63_63, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_41_41, ml_backend__il_peephole__MethodDecls0_11, &ml_backend__il_peephole__MethodDecls1_12, ((MR_Box) (ml_backend__il_peephole__STATE_VARIABLE_Mod_0_38)), &ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_39);
        }
#line 124 "il_peephole.m"
        *ml_backend__il_peephole__STATE_VARIABLE_Mod_39 = ((MR_Word) ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_39);
#line 142 "il_peephole.m"
        if ((*ml_backend__il_peephole__STATE_VARIABLE_Mod_39 == (MR_Integer) 0))
#line 144 "il_peephole.m"
          {
#line 144 "il_peephole.m"
            MR_Word base;
#line 144 "il_peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "il_peephole.m"
            *ml_backend__il_peephole__Member_8 = base;
#line 144 "il_peephole.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__MethodHead_10));
#line 144 "il_peephole.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__MethodDecls1_12));
#line 144 "il_peephole.m"
          }
#line 142 "il_peephole.m"
        else
#line 127 "il_peephole.m"
          {
#line 127 "il_peephole.m"
            MR_Word ml_backend__il_peephole__TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 127 "il_peephole.m"
            MR_Word ml_backend__il_peephole__MaxStacks_13;
#line 127 "il_peephole.m"
            MR_Integer ml_backend__il_peephole__NewMaxStack_16;
#line 127 "il_peephole.m"
            MR_Word ml_backend__il_peephole__MethodDecls_18;
#line 127 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_51_51;
#line 134 "il_peephole.m"
            MR_Box ml_backend__il_peephole__conv5_NewMaxStack_16;

#line 129 "il_peephole.m"
            {
#line 129 "il_peephole.m"
              ml_backend__il_peephole__MaxStacks_13 = mercury__list__map_2_f_0(ml_backend__il_peephole__TypeCtorInfo_63_63, ml_backend__il_peephole__TypeCtorInfo_65_65, (MR_Word) &ml_backend__il_peephole_scalar_common_2[1], ml_backend__il_peephole__MethodDecls1_12);
            }
#line 134 "il_peephole.m"
            {
#line 134 "il_peephole.m"
              ml_backend__il_peephole__conv5_NewMaxStack_16 = mercury__list__foldl_3_f_0(ml_backend__il_peephole__TypeCtorInfo_65_65, ml_backend__il_peephole__TypeCtorInfo_65_65, (MR_Word) &ml_backend__il_peephole_scalar_common_2[2], ml_backend__il_peephole__MaxStacks_13, ((MR_Box) ((MR_Integer) 0)));
            }
#line 134 "il_peephole.m"
            ml_backend__il_peephole__NewMaxStack_16 = ((MR_Integer) ml_backend__il_peephole__conv5_NewMaxStack_16);
#line 136 "il_peephole.m"
            {
#line 136 "il_peephole.m"
              ml_backend__il_peephole__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 136 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_51_51, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_5[1]));
#line 136 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_51_51, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_class_member_5_p_0_4));
#line 136 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 136 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_51_51, 3) = ((MR_Box) (ml_backend__il_peephole__NewMaxStack_16));
#line 136 "il_peephole.m"
            }
#line 136 "il_peephole.m"
            {
#line 136 "il_peephole.m"
              ml_backend__il_peephole__MethodDecls_18 = mercury__list__map_2_f_0(ml_backend__il_peephole__TypeCtorInfo_63_63, ml_backend__il_peephole__TypeCtorInfo_63_63, ml_backend__il_peephole__V_51_51, ml_backend__il_peephole__MethodDecls1_12);
            }
#line 141 "il_peephole.m"
            {
#line 141 "il_peephole.m"
              MR_Word base;
#line 141 "il_peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "il_peephole.m"
              *ml_backend__il_peephole__Member_8 = base;
#line 141 "il_peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__MethodHead_10));
#line 141 "il_peephole.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__MethodDecls_18));
#line 141 "il_peephole.m"
            }
#line 127 "il_peephole.m"
          }
#line 123 "il_peephole.m"
      }
#line 123 "il_peephole.m"
    else
#line 154 "il_peephole.m"
      {
#line 155 "il_peephole.m"
        *ml_backend__il_peephole__STATE_VARIABLE_Mod_39 = (MR_Integer) 0;
#line 156 "il_peephole.m"
        *ml_backend__il_peephole__Member_8 = ml_backend__il_peephole__Member0_7;
#line 154 "il_peephole.m"
      }
#line 123 "il_peephole.m"
  }
#line 118 "il_peephole.m"
}

#line 101 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_3(
#line 101 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 101 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 101 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 101 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 101 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 101 "il_peephole.m"
{
#line 101 "il_peephole.m"
  {
#line 101 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 101 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv7_Decl_8;
#line 101 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv6_STATE_VARIABLE_Mod_14;

#line 101 "il_peephole.m"
    {
#line 101 "il_peephole.m"
      ml_backend__il_peephole__optimize_method_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv7_Decl_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv6_STATE_VARIABLE_Mod_14);
    }
#line 101 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv7_Decl_8));
#line 101 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv6_STATE_VARIABLE_Mod_14));
#line 101 "il_peephole.m"
  }
#line 101 "il_peephole.m"
}

#line 96 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_2(
#line 96 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 96 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 96 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 96 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 96 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 96 "il_peephole.m"
{
#line 96 "il_peephole.m"
  {
#line 96 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 96 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv4_Decl_8;
#line 96 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv3_STATE_VARIABLE_Mod_35;

#line 96 "il_peephole.m"
    {
#line 96 "il_peephole.m"
      ml_backend__il_peephole__optimize_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv4_Decl_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv3_STATE_VARIABLE_Mod_35);
    }
#line 96 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv4_Decl_8));
#line 96 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv3_STATE_VARIABLE_Mod_35));
#line 96 "il_peephole.m"
  }
#line 96 "il_peephole.m"
}

#line 90 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_1(
#line 90 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 90 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 90 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 90 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 90 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 90 "il_peephole.m"
{
#line 90 "il_peephole.m"
  {
#line 90 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 90 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv1_Member_8;
#line 90 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_39;

#line 90 "il_peephole.m"
    {
#line 90 "il_peephole.m"
      ml_backend__il_peephole__optimize_class_member_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv1_Member_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_39);
    }
#line 90 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv1_Member_8));
#line 90 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_39));
#line 90 "il_peephole.m"
  }
#line 90 "il_peephole.m"
}

#line 83 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0(
#line 83 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 83 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decl0_7,
#line 83 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decl_8,
#line 83 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34,
#line 83 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_35)
#line 83 "il_peephole.m"
{
#line 89 "il_peephole.m"
  {
#line 89 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 89 "il_peephole.m"
    if (((MR_tag((MR_Word) ml_backend__il_peephole__Decl0_7)) == (MR_mktag((MR_Integer) 1))))
#line 89 "il_peephole.m"
      {
#line 89 "il_peephole.m"
        MR_Word ml_backend__il_peephole__TypeCtorInfo_46_46;
#line 89 "il_peephole.m"
        MR_Word ml_backend__il_peephole__ClassAttrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 0)));
#line 89 "il_peephole.m"
        MR_String ml_backend__il_peephole__ClassId_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 1)));
#line 89 "il_peephole.m"
        MR_Word ml_backend__il_peephole__ParentClass_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 2)));
#line 89 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Implements_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 3)));
#line 89 "il_peephole.m"
        MR_Word ml_backend__il_peephole__ClassMembers0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 4)));
#line 89 "il_peephole.m"
        MR_Word ml_backend__il_peephole__ClassMembers_15;
#line 89 "il_peephole.m"
        MR_Word ml_backend__il_peephole__V_40_40;
#line 90 "il_peephole.m"
        MR_Box ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_35;

#line 90 "il_peephole.m"
        {
#line 90 "il_peephole.m"
          ml_backend__il_peephole__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 90 "il_peephole.m"
          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[1]));
#line 90 "il_peephole.m"
          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_decl_5_p_0_1));
#line 90 "il_peephole.m"
          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 90 "il_peephole.m"
          MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_6));
#line 90 "il_peephole.m"
        }
#line 6361 "ml_backend.il_peephole.c"
        ml_backend__il_peephole__TypeCtorInfo_46_46 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_class_member_0;
#line 90 "il_peephole.m"
        {
#line 90 "il_peephole.m"
          mercury__list__map_foldl_5_p_1(ml_backend__il_peephole__TypeCtorInfo_46_46, ml_backend__il_peephole__TypeCtorInfo_46_46, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_40_40, ml_backend__il_peephole__ClassMembers0_14, &ml_backend__il_peephole__ClassMembers_15, ((MR_Box) (ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34)), &ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_35);
        }
#line 90 "il_peephole.m"
        *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ((MR_Word) ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_35);
#line 92 "il_peephole.m"
        {
#line 92 "il_peephole.m"
          MR_Word base;
#line 92 "il_peephole.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 92 "il_peephole.m"
          *ml_backend__il_peephole__Decl_8 = base;
#line 92 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__ClassAttrs_10));
#line 92 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__ClassId_11));
#line 92 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__il_peephole__ParentClass_12));
#line 92 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__il_peephole__Implements_13));
#line 92 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (ml_backend__il_peephole__ClassMembers_15));
#line 92 "il_peephole.m"
        }
#line 89 "il_peephole.m"
      }
#line 89 "il_peephole.m"
    else
#line 89 "il_peephole.m"
      if (((MR_tag((MR_Word) ml_backend__il_peephole__Decl0_7)) == (MR_mktag((MR_Integer) 2))))
#line 95 "il_peephole.m"
        {
#line 95 "il_peephole.m"
          MR_Word ml_backend__il_peephole__TypeCtorInfo_52_52;
#line 95 "il_peephole.m"
          MR_Word ml_backend__il_peephole__NameSpaceName_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__Decl0_7, (MR_Integer) 0)));
#line 95 "il_peephole.m"
          MR_Word ml_backend__il_peephole__NamespaceDecls0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__Decl0_7, (MR_Integer) 1)));
#line 95 "il_peephole.m"
          MR_Word ml_backend__il_peephole__NamespaceDecls_18;
#line 95 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_38_38;
#line 96 "il_peephole.m"
          MR_Box ml_backend__il_peephole__conv5_STATE_VARIABLE_Mod_35;

#line 96 "il_peephole.m"
          {
#line 96 "il_peephole.m"
            ml_backend__il_peephole__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 96 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_38_38, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[0]));
#line 96 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_38_38, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_decl_5_p_0_2));
#line 96 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 96 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_38_38, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_6));
#line 96 "il_peephole.m"
          }
#line 6425 "ml_backend.il_peephole.c"
          ml_backend__il_peephole__TypeCtorInfo_52_52 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_il_decl_0;
#line 96 "il_peephole.m"
          {
#line 96 "il_peephole.m"
            mercury__list__map_foldl_5_p_1(ml_backend__il_peephole__TypeCtorInfo_52_52, ml_backend__il_peephole__TypeCtorInfo_52_52, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_38_38, ml_backend__il_peephole__NamespaceDecls0_17, &ml_backend__il_peephole__NamespaceDecls_18, ((MR_Box) (ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34)), &ml_backend__il_peephole__conv5_STATE_VARIABLE_Mod_35);
          }
#line 96 "il_peephole.m"
          *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ((MR_Word) ml_backend__il_peephole__conv5_STATE_VARIABLE_Mod_35);
#line 98 "il_peephole.m"
          {
#line 98 "il_peephole.m"
            MR_Word base;
#line 98 "il_peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 98 "il_peephole.m"
            *ml_backend__il_peephole__Decl_8 = base;
#line 98 "il_peephole.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__il_peephole__NameSpaceName_16));
#line 98 "il_peephole.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__il_peephole__NamespaceDecls_18));
#line 98 "il_peephole.m"
          }
#line 95 "il_peephole.m"
        }
#line 89 "il_peephole.m"
      else
#line 89 "il_peephole.m"
        if (((((MR_tag((MR_Word) ml_backend__il_peephole__Decl0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 100 "il_peephole.m"
          {
#line 100 "il_peephole.m"
            MR_Word ml_backend__il_peephole__TypeCtorInfo_58_58;
#line 100 "il_peephole.m"
            MR_Word ml_backend__il_peephole__MethodHead_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 1)));
#line 100 "il_peephole.m"
            MR_Word ml_backend__il_peephole__MethodDecls0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 2)));
#line 100 "il_peephole.m"
            MR_Word ml_backend__il_peephole__MethodDecls_21;
#line 100 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_36_36;
#line 101 "il_peephole.m"
            MR_Box ml_backend__il_peephole__conv8_STATE_VARIABLE_Mod_35;

#line 101 "il_peephole.m"
            {
#line 101 "il_peephole.m"
              ml_backend__il_peephole__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 101 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_36_36, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[2]));
#line 101 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_36_36, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_decl_5_p_0_3));
#line 101 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 101 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_36_36, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_6));
#line 101 "il_peephole.m"
            }
#line 6483 "ml_backend.il_peephole.c"
            ml_backend__il_peephole__TypeCtorInfo_58_58 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0;
#line 101 "il_peephole.m"
            {
#line 101 "il_peephole.m"
              mercury__list__map_foldl_5_p_1(ml_backend__il_peephole__TypeCtorInfo_58_58, ml_backend__il_peephole__TypeCtorInfo_58_58, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_36_36, ml_backend__il_peephole__MethodDecls0_20, &ml_backend__il_peephole__MethodDecls_21, ((MR_Box) (ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34)), &ml_backend__il_peephole__conv8_STATE_VARIABLE_Mod_35);
            }
#line 101 "il_peephole.m"
            *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ((MR_Word) ml_backend__il_peephole__conv8_STATE_VARIABLE_Mod_35);
#line 103 "il_peephole.m"
            {
#line 103 "il_peephole.m"
              MR_Word base;
#line 103 "il_peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 103 "il_peephole.m"
              *ml_backend__il_peephole__Decl_8 = base;
#line 103 "il_peephole.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 103 "il_peephole.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__il_peephole__MethodHead_19));
#line 103 "il_peephole.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__il_peephole__MethodDecls_21));
#line 103 "il_peephole.m"
            }
#line 100 "il_peephole.m"
          }
#line 89 "il_peephole.m"
        else
#line 114 "il_peephole.m"
          {
#line 115 "il_peephole.m"
            *ml_backend__il_peephole__Decl_8 = ml_backend__il_peephole__Decl0_7;
#line 115 "il_peephole.m"
            *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34;
#line 114 "il_peephole.m"
          }
#line 89 "il_peephole.m"
  }
#line 83 "il_peephole.m"
}

#line 77 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__il_peephole_optimize_3_p_0_1(
#line 77 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 77 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 77 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 77 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 77 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 77 "il_peephole.m"
{
#line 77 "il_peephole.m"
  {
#line 77 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 77 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv1_Decl_8;
#line 77 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_35;

#line 77 "il_peephole.m"
    {
#line 77 "il_peephole.m"
      ml_backend__il_peephole__optimize_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv1_Decl_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_35);
    }
#line 77 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv1_Decl_8));
#line 77 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_35));
#line 77 "il_peephole.m"
  }
#line 77 "il_peephole.m"
}

#line 51 "il_peephole.m"
void MR_CALL 
ml_backend__il_peephole__il_peephole_optimize_3_p_0(
#line 51 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_4,
#line 51 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decls0_5,
#line 51 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decls_6)
#line 51 "il_peephole.m"
{
#line 71 "il_peephole.m"
  {
#line 71 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 71 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_14_14;
#line 71 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_8_8;
#line 77 "il_peephole.m"
    MR_Word ml_backend__il_peephole___Mod_7;
#line 77 "il_peephole.m"
    MR_Box ml_backend__il_peephole__conv2__Mod_7;

#line 77 "il_peephole.m"
    {
#line 77 "il_peephole.m"
      ml_backend__il_peephole__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 77 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_8_8, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[0]));
#line 77 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_8_8, 1) = ((MR_Box) (ml_backend__il_peephole__il_peephole_optimize_3_p_0_1));
#line 77 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 77 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_8_8, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_4));
#line 77 "il_peephole.m"
    }
#line 6601 "ml_backend.il_peephole.c"
    ml_backend__il_peephole__TypeCtorInfo_14_14 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_il_decl_0;
#line 77 "il_peephole.m"
    {
#line 77 "il_peephole.m"
      mercury__list__map_foldl_5_p_1(ml_backend__il_peephole__TypeCtorInfo_14_14, ml_backend__il_peephole__TypeCtorInfo_14_14, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_8_8, ml_backend__il_peephole__Decls0_5, ml_backend__il_peephole__Decls_6, ((MR_Box) ((MR_Integer) 0)), &ml_backend__il_peephole__conv2__Mod_7);
    }
#line 77 "il_peephole.m"
    ml_backend__il_peephole___Mod_7 = ((MR_Word) ml_backend__il_peephole__conv2__Mod_7);
#line 71 "il_peephole.m"
  }
#line 51 "il_peephole.m"
}

void mercury__ml_backend__il_peephole__init(void)
{
}

void mercury__ml_backend__il_peephole__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__il_peephole__ml_backend__il_peephole__type_ctor_info_instrs_0);
}

void mercury__ml_backend__il_peephole__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.il_peephole. */
