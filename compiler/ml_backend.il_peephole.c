/*
** Automatically generated from `il_peephole.m'
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


/* :- module ml_backend.il_peephole. */
/* :- implementation. */

/*
INIT mercury__ml_backend__il_peephole__init
ENDINIT
*/

#include "ml_backend.il_peephole.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ilasm.mih"
#include "ml_backend.ilds.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 91 "ml_backend.il_peephole.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__il_peephole__list__pti_list_1__plain_ml_backend__ilds__type_ctor_info_instr_0;

#line 94 "ml_backend.il_peephole.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__il_peephole__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__ilds__type_ctor_info_il_type_0;

#line 97 "ml_backend.il_peephole.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__il_peephole__list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0;

#line 100 "ml_backend.il_peephole.c"
static MR_bool MR_CALL 
ml_backend__il_peephole____Unify____instrs_0_0_10001(
#line 103 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 105 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_2);

#line 108 "ml_backend.il_peephole.c"
static void MR_CALL 
ml_backend__il_peephole____Compare____instrs_0_0_10001(
#line 111 "ml_backend.il_peephole.c"
  MR_Box * ml_backend__il_peephole__wrapper_arg_1,
#line 113 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_2,
#line 115 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_3);

#line 362 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_53_57_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0_1(
#line 362 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 362 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 359 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_53_57_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 359 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_145_145,
#line 359 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_146_146,
#line 359 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_55,
#line 359 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__3_56);

#line 494 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_p_0(
#line 494 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_20_20,
#line 494 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_21_21,
#line 494 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Input_9,
#line 494 "il_peephole.m"
  MR_Word ml_backend__il_peephole__IntermediateResult0_10,
#line 494 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__FinalResult_11,
#line 494 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Leftovers_12);

#line 477 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__477__1_1_p_0(
#line 477 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_9);

#line 410 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__410__1_2_p_0(
#line 410 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_28,
#line 410 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__2_29);

#line 401 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__397__1_2_p_0_1(
#line 401 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 401 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 397 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__397__1_2_p_0(
#line 397 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 397 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_23);

#line 401 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__401__1_2_p_0(
#line 401 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Var_10,
#line 401 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_26);

#line 362 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__362__1_1_p_0(
#line 362 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_58);

#line 342 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__340__1_4_p_0_1(
#line 342 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 342 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 340 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__340__1_4_p_0(
#line 340 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_44,
#line 340 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__2_45,
#line 340 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_46,
#line 340 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_47);

#line 342 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__342__1_1_p_0(
#line 342 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_49);

#line 329 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__322__1_3_p_0_1(
#line 329 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 329 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 322 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__322__1_3_p_0(
#line 322 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Locals_4,
#line 322 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 322 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_40);

#line 329 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__329__1_2_p_0(
#line 329 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_40,
#line 329 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_43);

#line 228 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__228__1_1_p_0(
#line 228 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_18);

#line 224 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__224__1_1_p_0(
#line 224 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_16);

#line 283 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__283__1_2_p_0(
#line 283 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Var_70,
#line 283 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_83);

#line 241 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__241__1_2_p_0(
#line 241 "il_peephole.m"
  MR_String ml_backend__il_peephole__Label_29,
#line 241 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_42);

#line 135 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__135__1_2_f_0(
#line 135 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__NewMaxStack_16,
#line 135 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_52);

#line 128 "il_peephole.m"
static MR_Integer MR_CALL 
ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__128__1_1_f_0(
#line 128 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_44);

#line 68 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole____Compare____instrs_0_0(
#line 68 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__1_1,
#line 68 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2,
#line 68 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_3);

#line 68 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole____Unify____instrs_0_0(
#line 68 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 68 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2);

#line 714 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__can_branch_1_f_0(
#line 714 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1);

#line 612 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__equivalent_to_nop_1_f_0(
#line 612 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1);

#line 513 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__can_call_1_f_0(
#line 513 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1);

#line 477 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__skip_nops_3_p_0_1(
#line 477 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 477 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 474 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__skip_nops_3_p_0(
#line 474 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_4,
#line 474 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_5,
#line 474 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Nops_6);

#line 454 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__skip_over_block_2_f_0(
#line 454 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 454 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__Id_2);

#line 436 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__no_handwritten_code_2_p_0(
#line 436 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 436 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__Id_2);

#line 410 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0_2(
#line 410 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 410 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 410 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2);

#line 397 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0_1(
#line 397 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 397 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 391 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0(
#line 391 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 391 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 391 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_7);

#line 318 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_1_3_p_0(
#line 318 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 318 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 318 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_7);

#line 228 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_4(
#line 228 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 228 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 223 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_3(
#line 223 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 223 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 283 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_2(
#line 283 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 283 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 240 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_1(
#line 240 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 240 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 211 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0(
#line 211 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 211 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_2,
#line 211 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_3,
#line 211 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_4);

#line 187 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__opt_instr_5_p_0(
#line 187 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 187 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instr0_7,
#line 187 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_8,
#line 187 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_9,
#line 187 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Mod_10);

#line 176 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_2_4_p_0(
#line 176 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_1,
#line 176 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2,
#line 176 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__3_3,
#line 176 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_4);

#line 158 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_method_decl_5_p_0(
#line 158 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 158 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decl0_7,
#line 158 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decl_8,
#line 158 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_13,
#line 158 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_14);

#line 135 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_4(
#line 135 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 135 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 133 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_3(
#line 133 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 133 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 133 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_2);

#line 128 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_2(
#line 128 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 128 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1);

#line 123 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_1(
#line 123 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 123 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 123 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 123 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 123 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);

#line 117 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0(
#line 117 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 117 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Member0_7,
#line 117 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Member_8,
#line 117 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_38,
#line 117 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_39);

#line 95 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_3(
#line 95 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 95 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 95 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 95 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 95 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);

#line 100 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_2(
#line 100 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 100 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 100 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 100 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 100 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);

#line 89 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_1(
#line 89 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 89 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 89 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 89 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 89 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);

#line 82 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0(
#line 82 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 82 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decl0_7,
#line 82 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decl_8,
#line 82 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34,
#line 82 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_35);

#line 76 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__il_peephole_optimize_3_p_0_1(
#line 76 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 76 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 76 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 76 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 76 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4);


static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_1[9][2];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_2[9][3];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_3[3][8];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_4[5][5];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_5[2][6];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_6[1][4];

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_7[1][1];




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
    ((MR_Box) (ml_backend__il_peephole__match_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_6[0])),
    ((MR_Box) (ml_backend__il_peephole__match_4_p_0_4)),
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
    ((MR_Box) (ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__340__1_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__il_peephole_scalar_common_6[0])),
    ((MR_Box) (ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_53_57_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0_1)),
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

static /* final */ const MR_Box ml_backend__il_peephole_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 857 "ml_backend.il_peephole.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__il_peephole__list__pti_list_1__plain_ml_backend__ilds__type_ctor_info_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0
  }
};

#line 865 "ml_backend.il_peephole.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__il_peephole__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__ilds__type_ctor_info_il_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_il_type_0
  }
};

#line 874 "ml_backend.il_peephole.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__il_peephole__list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0
  }
};

#line 882 "ml_backend.il_peephole.c"
const MR_TypeCtorInfo_Struct ml_backend__il_peephole__ml_backend__il_peephole__type_ctor_info_instrs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__il_peephole____Unify____instrs_0_0_10001)),
  ((MR_Box) (ml_backend__il_peephole____Compare____instrs_0_0_10001)),
  (MR_String) "ml_backend.il_peephole",
  (MR_String) "instrs",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__il_peephole__list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 899 "ml_backend.il_peephole.c"
static MR_bool MR_CALL 
ml_backend__il_peephole____Unify____instrs_0_0_10001(
#line 902 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 904 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_2)
#line 906 "ml_backend.il_peephole.c"
{
#line 908 "ml_backend.il_peephole.c"
  {
#line 910 "ml_backend.il_peephole.c"
    MR_bool ml_backend__il_peephole__succeeded;

#line 913 "ml_backend.il_peephole.c"
    {
#line 915 "ml_backend.il_peephole.c"
      ml_backend__il_peephole__succeeded = ml_backend__il_peephole____Unify____instrs_0_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1), ((MR_Word) ml_backend__il_peephole__wrapper_arg_2));
    }
#line 918 "ml_backend.il_peephole.c"
    return ml_backend__il_peephole__succeeded;
#line 920 "ml_backend.il_peephole.c"
  }
#line 922 "ml_backend.il_peephole.c"
}

#line 925 "ml_backend.il_peephole.c"
static void MR_CALL 
ml_backend__il_peephole____Compare____instrs_0_0_10001(
#line 928 "ml_backend.il_peephole.c"
  MR_Box * ml_backend__il_peephole__wrapper_arg_1,
#line 930 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_2,
#line 932 "ml_backend.il_peephole.c"
  MR_Box ml_backend__il_peephole__wrapper_arg_3)
#line 934 "ml_backend.il_peephole.c"
{
#line 936 "ml_backend.il_peephole.c"
  {
#line 938 "ml_backend.il_peephole.c"
    MR_Word ml_backend__il_peephole__conv0_HeadVar__1_1;

#line 941 "ml_backend.il_peephole.c"
    {
#line 943 "ml_backend.il_peephole.c"
      ml_backend__il_peephole____Compare____instrs_0_0(&ml_backend__il_peephole__conv0_HeadVar__1_1, ((MR_Word) ml_backend__il_peephole__wrapper_arg_2), ((MR_Word) ml_backend__il_peephole__wrapper_arg_3));
    }
#line 946 "ml_backend.il_peephole.c"
    *ml_backend__il_peephole__wrapper_arg_1 = ((MR_Box) (ml_backend__il_peephole__conv0_HeadVar__1_1));
#line 948 "ml_backend.il_peephole.c"
  }
#line 950 "ml_backend.il_peephole.c"
}

#line 362 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_53_57_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0_1(
#line 362 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 362 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 362 "il_peephole.m"
{
#line 362 "il_peephole.m"
  {
#line 362 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 362 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 362 "il_peephole.m"
    {
#line 362 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__362__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 362 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 362 "il_peephole.m"
  }
#line 362 "il_peephole.m"
}

#line 359 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_53_57_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 359 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_145_145,
#line 359 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_146_146,
#line 359 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_55,
#line 359 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__3_56)
#line 359 "il_peephole.m"
{
#line 359 "il_peephole.m"
  {
#line 359 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__InstrIn0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__2_55, (MR_Integer) 1)));
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__MaybePost_28;
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Post_29;
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_60_60;
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_61_61;
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_62_62;
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_96;
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Pre0_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__2_55, (MR_Integer) 0)));
#line 359 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Pre_100;

#line 362 "il_peephole.m"
    {
#line 362 "il_peephole.m"
      mercury__list__takewhile_4_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0, (MR_Word) &ml_backend__il_peephole_scalar_common_2[8], ml_backend__il_peephole__InstrIn0_27, &ml_backend__il_peephole__Pre_100, &ml_backend__il_peephole__MaybePost_28);
    }
#line 364 "il_peephole.m"
    ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__MaybePost_28)) == (MR_mktag((MR_Integer) 1)));
#line 364 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 364 "il_peephole.m"
      {
#line 364 "il_peephole.m"
        ml_backend__il_peephole__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__MaybePost_28, (MR_Integer) 0)));
#line 364 "il_peephole.m"
        ml_backend__il_peephole__Post_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__MaybePost_28, (MR_Integer) 1)));
#line 364 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__V_60_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_60_60, (MR_Integer) 0)))) == (MR_Integer) 54)));
#line 364 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 364 "il_peephole.m"
          {
#line 364 "il_peephole.m"
            ml_backend__il_peephole__V_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_60_60, (MR_Integer) 1)));
#line 365 "il_peephole.m"
            {
#line 365 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__322__1_3_p_0(ml_backend__il_peephole__V_145_145, ml_backend__il_peephole__V_146_146, ml_backend__il_peephole__V_96);
            }
#line 359 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 359 "il_peephole.m"
              {
#line 366 "il_peephole.m"
                {
#line 366 "il_peephole.m"
                  ml_backend__il_peephole__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_62_62, 0) = ((MR_Box) (ml_backend__il_peephole__V_96));
#line 366 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_62_62, 1) = ((MR_Box) (ml_backend__il_peephole__Pre0_99));
#line 366 "il_peephole.m"
                }
#line 366 "il_peephole.m"
                {
#line 366 "il_peephole.m"
                  ml_backend__il_peephole__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_61_61, 0) = ((MR_Box) (ml_backend__il_peephole__V_62_62));
#line 366 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_61_61, 1) = ((MR_Box) (ml_backend__il_peephole__Pre_100));
#line 366 "il_peephole.m"
                }
#line 366 "il_peephole.m"
                {
#line 366 "il_peephole.m"
                  MR_Word base;
#line 366 "il_peephole.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "il_peephole.m"
                  *ml_backend__il_peephole__HeadVar__3_56 = base;
#line 366 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__il_peephole__V_61_61));
#line 366 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__il_peephole__Post_29));
#line 366 "il_peephole.m"
                }
#line 366 "il_peephole.m"
                ml_backend__il_peephole__succeeded = MR_TRUE;
#line 359 "il_peephole.m"
              }
#line 364 "il_peephole.m"
          }
#line 364 "il_peephole.m"
      }
#line 359 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 359 "il_peephole.m"
  }
#line 359 "il_peephole.m"
}

#line 494 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_p_0(
#line 494 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_20_20,
#line 494 "il_peephole.m"
  MR_Word ml_backend__il_peephole__V_21_21,
#line 494 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Input_9,
#line 494 "il_peephole.m"
  MR_Word ml_backend__il_peephole__IntermediateResult0_10,
#line 494 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__FinalResult_11,
#line 494 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Leftovers_12)
#line 494 "il_peephole.m"
{
#line 499 "il_peephole.m"
  while (MR_TRUE)
#line 499 "il_peephole.m"
    {
#line 499 "il_peephole.m"
      /* tailcall optimized into a loop */
#line 499 "il_peephole.m"
      {
#line 499 "il_peephole.m"
        MR_bool ml_backend__il_peephole__succeeded;
#line 499 "il_peephole.m"
        MR_Word ml_backend__il_peephole__NextInput_13;
#line 499 "il_peephole.m"
        MR_Word ml_backend__il_peephole__IntermediateResult_14;
#line 504 "il_peephole.m"
        MR_Word ml_backend__il_peephole__FinalResult0_15;

#line 500 "il_peephole.m"
        {
#line 500 "il_peephole.m"
          ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__340__1_4_p_0(ml_backend__il_peephole__Input_9, &ml_backend__il_peephole__NextInput_13, ml_backend__il_peephole__IntermediateResult0_10, &ml_backend__il_peephole__IntermediateResult_14);
        }
#line 499 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 499 "il_peephole.m"
          {
#line 501 "il_peephole.m"
            {
#line 501 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_109_97_116_99_104_95_115_116_97_114_116_95_115_99_111_112_101_95_49_95_95_51_53_57_95_95_49_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(ml_backend__il_peephole__V_20_20, ml_backend__il_peephole__V_21_21, ml_backend__il_peephole__IntermediateResult_14, &ml_backend__il_peephole__FinalResult0_15);
            }
#line 504 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 502 "il_peephole.m"
              {
#line 502 "il_peephole.m"
                *ml_backend__il_peephole__Leftovers_12 = ml_backend__il_peephole__NextInput_13;
#line 503 "il_peephole.m"
                *ml_backend__il_peephole__FinalResult_11 = ml_backend__il_peephole__FinalResult0_15;
#line 502 "il_peephole.m"
                ml_backend__il_peephole__succeeded = MR_TRUE;
#line 502 "il_peephole.m"
              }
#line 504 "il_peephole.m"
            else
#line 505 "il_peephole.m"
              {
#line 505 "il_peephole.m"
                /* direct tailcall eliminated */
#line 505 "il_peephole.m"
                {
#line 505 "il_peephole.m"
                  MR_Word ml_backend__il_peephole__Input__tmp_copy_9 = ml_backend__il_peephole__NextInput_13;
#line 505 "il_peephole.m"
                  MR_Word ml_backend__il_peephole__IntermediateResult0__tmp_copy_10 = ml_backend__il_peephole__IntermediateResult_14;

#line 505 "il_peephole.m"
                  ml_backend__il_peephole__IntermediateResult0_10 = ml_backend__il_peephole__IntermediateResult0__tmp_copy_10;
#line 505 "il_peephole.m"
                  ml_backend__il_peephole__Input_9 = ml_backend__il_peephole__Input__tmp_copy_9;
#line 505 "il_peephole.m"
                }
#line 505 "il_peephole.m"
                continue;
#line 505 "il_peephole.m"
              }
#line 499 "il_peephole.m"
          }
#line 499 "il_peephole.m"
        return ml_backend__il_peephole__succeeded;
#line 499 "il_peephole.m"
      }
#line 499 "il_peephole.m"
      break;
#line 499 "il_peephole.m"
    }
#line 494 "il_peephole.m"
}

#line 477 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__477__1_1_p_0(
#line 477 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_9)
#line 477 "il_peephole.m"
{
#line 477 "il_peephole.m"
  {
#line 477 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 477 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_10_10;

#line 477 "il_peephole.m"
    {
#line 477 "il_peephole.m"
      ml_backend__il_peephole__V_10_10 = ml_backend__il_peephole__equivalent_to_nop_1_f_0(ml_backend__il_peephole__HeadVar__1_9);
    }
#line 477 "il_peephole.m"
    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_10_10 == (MR_Integer) 1);
#line 477 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 477 "il_peephole.m"
  }
#line 477 "il_peephole.m"
}

#line 410 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__410__1_2_p_0(
#line 410 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_28,
#line 410 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__2_29)
#line 410 "il_peephole.m"
{
#line 410 "il_peephole.m"
  {
#line 410 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 410 "il_peephole.m"
    MR_String ml_backend__il_peephole__CommentStr_18;
#line 410 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_31_31;
#line 410 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_32_32;
#line 410 "il_peephole.m"
    MR_String ml_backend__il_peephole__VarName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__1_28, (MR_Integer) 0)));
#line 410 "il_peephole.m"
    MR_Word ml_backend__il_peephole___Type_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__1_28, (MR_Integer) 1)));

#line 412 "il_peephole.m"
    {
#line 412 "il_peephole.m"
      ml_backend__il_peephole__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 412 "il_peephole.m"
      MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_32_32, 0) = ((MR_Box) (ml_backend__il_peephole__VarName_46));
#line 412 "il_peephole.m"
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
#line 411 "il_peephole.m"
    {
#line 411 "il_peephole.m"
      mercury__string__format_3_p_0((MR_String) "peephole: unused local var %s eliminated", ml_backend__il_peephole__V_31_31, &ml_backend__il_peephole__CommentStr_18);
    }
#line 413 "il_peephole.m"
    {
#line 413 "il_peephole.m"
      MR_Word base;
#line 413 "il_peephole.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "il_peephole.m"
      *ml_backend__il_peephole__HeadVar__2_29 = base;
#line 413 "il_peephole.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 413 "il_peephole.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__il_peephole__CommentStr_18));
#line 413 "il_peephole.m"
    }
#line 410 "il_peephole.m"
  }
#line 410 "il_peephole.m"
}

#line 401 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__397__1_2_p_0_1(
#line 401 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 401 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 401 "il_peephole.m"
{
#line 401 "il_peephole.m"
  {
#line 401 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 401 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 401 "il_peephole.m"
    {
#line 401 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__401__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 401 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 401 "il_peephole.m"
  }
#line 401 "il_peephole.m"
}

#line 397 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__397__1_2_p_0(
#line 397 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 397 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_23)
#line 397 "il_peephole.m"
{
#line 397 "il_peephole.m"
  {
#line 397 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 397 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Var_10;
#line 397 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_24_24;
#line 397 "il_peephole.m"
    MR_String ml_backend__il_peephole__VarName_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__2_23, (MR_Integer) 0)));
#line 397 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_55_55;
#line 397 "il_peephole.m"
    MR_Word ml_backend__il_peephole___Type_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__2_23, (MR_Integer) 1)));
#line 401 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_12_12;

#line 398 "il_peephole.m"
    {
#line 398 "il_peephole.m"
      ml_backend__il_peephole__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__Var_10, 0) = ((MR_Box) (ml_backend__il_peephole__VarName_43));
#line 398 "il_peephole.m"
    }
#line 401 "il_peephole.m"
    {
#line 401 "il_peephole.m"
      ml_backend__il_peephole__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 401 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_24_24, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[2]));
#line 401 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_24_24, 1) = ((MR_Box) (ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__397__1_2_p_0_1));
#line 401 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 401 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_24_24, 3) = ((MR_Box) (ml_backend__il_peephole__Var_10));
#line 401 "il_peephole.m"
    }
#line 401 "il_peephole.m"
    {
#line 401 "il_peephole.m"
      mercury__list__takewhile_4_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0, ml_backend__il_peephole__V_24_24, ml_backend__il_peephole__Instrs0_6, &ml_backend__il_peephole__V_12_12, &ml_backend__il_peephole__V_55_55);
    }
#line 401 "il_peephole.m"
    {
#line 401 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__il_peephole_scalar_common_1[0], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (ml_backend__il_peephole__V_55_55)));
    }
#line 397 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 397 "il_peephole.m"
  }
#line 397 "il_peephole.m"
}

#line 401 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__401__1_2_p_0(
#line 401 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Var_10,
#line 401 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_26)
#line 401 "il_peephole.m"
{
#line 401 "il_peephole.m"
  {
#line 401 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 0)))) == (MR_Integer) 46)));
#line 402 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_52_52;
#line 403 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_53_53;
#line 404 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_54_54;

#line 402 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 402 "il_peephole.m"
      {
#line 402 "il_peephole.m"
        ml_backend__il_peephole__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 1)));
#line 402 "il_peephole.m"
        {
#line 402 "il_peephole.m"
          ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_10, ml_backend__il_peephole__V_52_52);
        }
#line 402 "il_peephole.m"
      }
#line 402 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 401 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 401 "il_peephole.m"
      {
#line 403 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 0)))) == (MR_Integer) 47)));
#line 403 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 403 "il_peephole.m"
          {
#line 403 "il_peephole.m"
            ml_backend__il_peephole__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 1)));
#line 403 "il_peephole.m"
            {
#line 403 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_10, ml_backend__il_peephole__V_53_53);
            }
#line 403 "il_peephole.m"
          }
#line 403 "il_peephole.m"
        ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 401 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 401 "il_peephole.m"
          {
#line 404 "il_peephole.m"
            ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 0)))) == (MR_Integer) 54)));
#line 404 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 404 "il_peephole.m"
              {
#line 404 "il_peephole.m"
                ml_backend__il_peephole__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_26, (MR_Integer) 1)));
#line 404 "il_peephole.m"
                {
#line 404 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_10, ml_backend__il_peephole__V_54_54);
                }
#line 404 "il_peephole.m"
              }
#line 404 "il_peephole.m"
            ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 401 "il_peephole.m"
          }
#line 401 "il_peephole.m"
      }
#line 401 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 401 "il_peephole.m"
  }
#line 401 "il_peephole.m"
}

#line 362 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__362__1_1_p_0(
#line 362 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_58)
#line 362 "il_peephole.m"
{
#line 362 "il_peephole.m"
  {
#line 362 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 362 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_59_59;

#line 362 "il_peephole.m"
    {
#line 362 "il_peephole.m"
      ml_backend__il_peephole__V_59_59 = ml_backend__il_peephole__equivalent_to_nop_1_f_0(ml_backend__il_peephole__HeadVar__1_58);
    }
#line 362 "il_peephole.m"
    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_59_59 == (MR_Integer) 1);
#line 362 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 362 "il_peephole.m"
  }
#line 362 "il_peephole.m"
}

#line 342 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__340__1_4_p_0_1(
#line 342 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 342 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 342 "il_peephole.m"
{
#line 342 "il_peephole.m"
  {
#line 342 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 342 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 342 "il_peephole.m"
    {
#line 342 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__342__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 342 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 342 "il_peephole.m"
  }
#line 342 "il_peephole.m"
}

#line 340 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__340__1_4_p_0(
#line 340 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_44,
#line 340 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__2_45,
#line 340 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_46,
#line 340 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_47)
#line 340 "il_peephole.m"
{
#line 340 "il_peephole.m"
  {
#line 340 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 340 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Pre0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__3_46, (MR_Integer) 0)));
#line 340 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Pre_21;
#line 340 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Post0_22;
#line 340 "il_peephole.m"
    MR_Word ml_backend__il_peephole__InsertDup_23;
#line 340 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_50_50;
#line 340 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_53_53;
#line 340 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_54_54;
#line 341 "il_peephole.m"
    MR_Word ml_backend__il_peephole___NextInput0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__3_46, (MR_Integer) 1)));

#line 342 "il_peephole.m"
    {
#line 342 "il_peephole.m"
      mercury__list__takewhile_4_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0, (MR_Word) &ml_backend__il_peephole_scalar_common_2[7], ml_backend__il_peephole__HeadVar__1_44, &ml_backend__il_peephole__Pre_21, &ml_backend__il_peephole__Post0_22);
    }
#line 344 "il_peephole.m"
    ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__Post0_22)) == (MR_mktag((MR_Integer) 1)));
#line 344 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 344 "il_peephole.m"
      {
#line 344 "il_peephole.m"
        ml_backend__il_peephole__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Post0_22, (MR_Integer) 0)));
#line 344 "il_peephole.m"
        *ml_backend__il_peephole__HeadVar__2_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Post0_22, (MR_Integer) 1)));
#line 344 "il_peephole.m"
        ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 340 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 340 "il_peephole.m"
          {
#line 348 "il_peephole.m"
            if ((ml_backend__il_peephole__Pre0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 347 "il_peephole.m"
              ml_backend__il_peephole__InsertDup_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "il_peephole.m"
            else
#line 349 "il_peephole.m"
              {
#line 350 "il_peephole.m"
                ml_backend__il_peephole__InsertDup_23 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__il_peephole_scalar_common_1[8]);
#line 349 "il_peephole.m"
              }
#line 352 "il_peephole.m"
            {
#line 352 "il_peephole.m"
              ml_backend__il_peephole__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "il_peephole.m"
              MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_54_54, 0) = ((MR_Box) (ml_backend__il_peephole__InsertDup_23));
#line 352 "il_peephole.m"
              MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_54_54, 1) = ((MR_Box) (ml_backend__il_peephole__Pre0_19));
#line 352 "il_peephole.m"
            }
#line 352 "il_peephole.m"
            {
#line 352 "il_peephole.m"
              ml_backend__il_peephole__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "il_peephole.m"
              MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_53_53, 0) = ((MR_Box) (ml_backend__il_peephole__Pre_21));
#line 352 "il_peephole.m"
              MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_53_53, 1) = ((MR_Box) (ml_backend__il_peephole__V_54_54));
#line 352 "il_peephole.m"
            }
#line 352 "il_peephole.m"
            {
#line 352 "il_peephole.m"
              MR_Word base;
#line 352 "il_peephole.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "il_peephole.m"
              *ml_backend__il_peephole__HeadVar__4_47 = base;
#line 352 "il_peephole.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__il_peephole__V_53_53));
#line 352 "il_peephole.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (*ml_backend__il_peephole__HeadVar__2_45));
#line 352 "il_peephole.m"
            }
#line 352 "il_peephole.m"
            ml_backend__il_peephole__succeeded = MR_TRUE;
#line 340 "il_peephole.m"
          }
#line 344 "il_peephole.m"
      }
#line 340 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 340 "il_peephole.m"
  }
#line 340 "il_peephole.m"
}

#line 342 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__342__1_1_p_0(
#line 342 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_49)
#line 342 "il_peephole.m"
{
#line 342 "il_peephole.m"
  {
#line 342 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__HeadVar__1_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));

#line 342 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 342 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 342 "il_peephole.m"
  }
#line 342 "il_peephole.m"
}

#line 329 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__322__1_3_p_0_1(
#line 329 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 329 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 329 "il_peephole.m"
{
#line 329 "il_peephole.m"
  {
#line 329 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 329 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 329 "il_peephole.m"
    {
#line 329 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__329__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 329 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 329 "il_peephole.m"
  }
#line 329 "il_peephole.m"
}

#line 322 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__322__1_3_p_0(
#line 322 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Locals_4,
#line 322 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 322 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_40)
#line 322 "il_peephole.m"
{
#line 322 "il_peephole.m"
  {
#line 322 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__3_40)) == (MR_mktag((MR_Integer) 0)));
#line 322 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_110_110;
#line 322 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_111_111;
#line 322 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_112_112;
#line 322 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeInfo_144_144;
#line 322 "il_peephole.m"
    MR_String ml_backend__il_peephole__VN_10;
#line 322 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_41_41;
#line 322 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_42_42;
#line 322 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_121_121;
#line 325 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_11_11;
#line 325 "il_peephole.m"
    MR_Box ml_backend__il_peephole__conv0_V_11_11;
#line 329 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_13_13;

#line 324 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 324 "il_peephole.m"
      {
#line 324 "il_peephole.m"
        ml_backend__il_peephole__VN_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__HeadVar__3_40, (MR_Integer) 0)));
#line 1732 "ml_backend.il_peephole.c"
        ml_backend__il_peephole__TypeCtorInfo_110_110 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1734 "ml_backend.il_peephole.c"
        ml_backend__il_peephole__TypeCtorInfo_111_111 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_il_type_0;
#line 325 "il_peephole.m"
        {
#line 325 "il_peephole.m"
          ml_backend__il_peephole__succeeded = mercury__assoc_list__search_3_p_0(ml_backend__il_peephole__TypeCtorInfo_110_110, ml_backend__il_peephole__TypeCtorInfo_111_111, ml_backend__il_peephole__Locals_4, ((MR_Box) (ml_backend__il_peephole__VN_10)), &ml_backend__il_peephole__conv0_V_11_11);
        }
#line 325 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 325 "il_peephole.m"
          {
#line 325 "il_peephole.m"
            ml_backend__il_peephole__V_11_11 = ((MR_Word) ml_backend__il_peephole__conv0_V_11_11);
#line 325 "il_peephole.m"
            ml_backend__il_peephole__succeeded = MR_TRUE;
#line 325 "il_peephole.m"
          }
#line 322 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 322 "il_peephole.m"
          {
#line 332 "il_peephole.m"
            ml_backend__il_peephole__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1757 "ml_backend.il_peephole.c"
            ml_backend__il_peephole__TypeCtorInfo_112_112 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 329 "il_peephole.m"
            {
#line 329 "il_peephole.m"
              ml_backend__il_peephole__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 329 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[2]));
#line 329 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 1) = ((MR_Box) (ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__322__1_3_p_0_1));
#line 329 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 329 "il_peephole.m"
              MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 3) = ((MR_Box) (ml_backend__il_peephole__HeadVar__3_40));
#line 329 "il_peephole.m"
            }
#line 329 "il_peephole.m"
            {
#line 329 "il_peephole.m"
              mercury__list__takewhile_4_p_0(ml_backend__il_peephole__TypeCtorInfo_112_112, ml_backend__il_peephole__V_41_41, ml_backend__il_peephole__Instrs0_6, &ml_backend__il_peephole__V_13_13, &ml_backend__il_peephole__V_121_121);
            }
#line 1778 "ml_backend.il_peephole.c"
            ml_backend__il_peephole__TypeInfo_144_144 = (MR_Word) &ml_backend__il_peephole_scalar_common_1[0];
#line 329 "il_peephole.m"
            {
#line 329 "il_peephole.m"
              return ml_backend__il_peephole__succeeded = mercury__builtin__unify_2_p_0(ml_backend__il_peephole__TypeInfo_144_144, ((MR_Box) (ml_backend__il_peephole__V_42_42)), ((MR_Box) (ml_backend__il_peephole__V_121_121)));
            }
#line 322 "il_peephole.m"
          }
#line 324 "il_peephole.m"
      }
#line 322 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 322 "il_peephole.m"
  }
#line 322 "il_peephole.m"
}

#line 329 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_1__329__1_2_p_0(
#line 329 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_40,
#line 329 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_43)
#line 329 "il_peephole.m"
{
#line 329 "il_peephole.m"
  {
#line 329 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_43, (MR_Integer) 0)))) == (MR_Integer) 46)));
#line 330 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_119_119;
#line 331 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_120_120;

#line 330 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 330 "il_peephole.m"
      {
#line 330 "il_peephole.m"
        ml_backend__il_peephole__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_43, (MR_Integer) 1)));
#line 330 "il_peephole.m"
        {
#line 330 "il_peephole.m"
          ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__HeadVar__1_40, ml_backend__il_peephole__V_119_119);
        }
#line 330 "il_peephole.m"
      }
#line 330 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 329 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 329 "il_peephole.m"
      {
#line 331 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_43, (MR_Integer) 0)))) == (MR_Integer) 47)));
#line 331 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 331 "il_peephole.m"
          {
#line 331 "il_peephole.m"
            ml_backend__il_peephole__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_43, (MR_Integer) 1)));
#line 331 "il_peephole.m"
            {
#line 331 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__HeadVar__1_40, ml_backend__il_peephole__V_120_120);
            }
#line 331 "il_peephole.m"
          }
#line 331 "il_peephole.m"
        ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 329 "il_peephole.m"
      }
#line 329 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 329 "il_peephole.m"
  }
#line 329 "il_peephole.m"
}

#line 228 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__228__1_1_p_0(
#line 228 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_18)
#line 228 "il_peephole.m"
{
#line 228 "il_peephole.m"
  {
#line 228 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 228 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_19_19;

#line 228 "il_peephole.m"
    {
#line 228 "il_peephole.m"
      ml_backend__il_peephole__V_19_19 = ml_backend__il_peephole__equivalent_to_nop_1_f_0(ml_backend__il_peephole__HeadVar__1_18);
    }
#line 228 "il_peephole.m"
    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_19_19 == (MR_Integer) 1);
#line 228 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 228 "il_peephole.m"
  }
#line 228 "il_peephole.m"
}

#line 224 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__224__1_1_p_0(
#line 224 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_16)
#line 224 "il_peephole.m"
{
#line 224 "il_peephole.m"
  {
#line 224 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_16, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 224 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_9_9;

#line 224 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 224 "il_peephole.m"
      ml_backend__il_peephole__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_16, (MR_Integer) 1)));
#line 224 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 224 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 224 "il_peephole.m"
  }
#line 224 "il_peephole.m"
}

#line 283 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__283__1_2_p_0(
#line 283 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Var_70,
#line 283 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_83)
#line 283 "il_peephole.m"
{
#line 283 "il_peephole.m"
  {
#line 283 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 0)))) == (MR_Integer) 46)));
#line 283 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_84_84;
#line 283 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_85_85;
#line 284 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_117_117;
#line 285 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_74_74;
#line 286 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_118_118;
#line 287 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_75_75;

#line 284 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 284 "il_peephole.m"
      {
#line 284 "il_peephole.m"
        ml_backend__il_peephole__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 1)));
#line 284 "il_peephole.m"
        {
#line 284 "il_peephole.m"
          ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_70, ml_backend__il_peephole__V_117_117);
        }
#line 284 "il_peephole.m"
      }
#line 284 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 283 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 283 "il_peephole.m"
      {
#line 285 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 285 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 285 "il_peephole.m"
          ml_backend__il_peephole__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 1)));
#line 285 "il_peephole.m"
        ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 283 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 283 "il_peephole.m"
          {
#line 286 "il_peephole.m"
            ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 0)))) == (MR_Integer) 54)));
#line 286 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 286 "il_peephole.m"
              {
#line 286 "il_peephole.m"
                ml_backend__il_peephole__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 1)));
#line 286 "il_peephole.m"
                {
#line 286 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_70, ml_backend__il_peephole__V_118_118);
                }
#line 286 "il_peephole.m"
              }
#line 286 "il_peephole.m"
            ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 283 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 283 "il_peephole.m"
              {
#line 287 "il_peephole.m"
                ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_83)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 0)))) == (MR_Integer) 53)));
#line 287 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 287 "il_peephole.m"
                  ml_backend__il_peephole__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_83, (MR_Integer) 1)));
#line 287 "il_peephole.m"
                ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 283 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 283 "il_peephole.m"
                  {
#line 288 "il_peephole.m"
                    {
#line 288 "il_peephole.m"
                      ml_backend__il_peephole__V_84_84 = ml_backend__il_peephole__can_call_1_f_0(ml_backend__il_peephole__HeadVar__2_83);
                    }
#line 288 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_84_84 == (MR_Integer) 0);
#line 283 "il_peephole.m"
                    if (ml_backend__il_peephole__succeeded)
#line 283 "il_peephole.m"
                      {
#line 289 "il_peephole.m"
                        {
#line 289 "il_peephole.m"
                          ml_backend__il_peephole__V_85_85 = ml_backend__il_peephole__can_branch_1_f_0(ml_backend__il_peephole__HeadVar__2_83);
                        }
#line 289 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_85_85 == (MR_Integer) 0);
#line 283 "il_peephole.m"
                      }
#line 283 "il_peephole.m"
                  }
#line 283 "il_peephole.m"
              }
#line 283 "il_peephole.m"
          }
#line 283 "il_peephole.m"
      }
#line 283 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 283 "il_peephole.m"
  }
#line 283 "il_peephole.m"
}

#line 241 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__IntroducedFrom__pred__match__241__1_2_p_0(
#line 241 "il_peephole.m"
  MR_String ml_backend__il_peephole__Label_29,
#line 241 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_42)
#line 241 "il_peephole.m"
{
#line 241 "il_peephole.m"
  {
#line 241 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_42, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 241 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_114_114;

#line 241 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 241 "il_peephole.m"
      {
#line 241 "il_peephole.m"
        ml_backend__il_peephole__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_42, (MR_Integer) 1)));
#line 241 "il_peephole.m"
        ml_backend__il_peephole__succeeded = (strcmp(ml_backend__il_peephole__Label_29, ml_backend__il_peephole__V_114_114) == 0);
#line 241 "il_peephole.m"
      }
#line 241 "il_peephole.m"
    ml_backend__il_peephole__succeeded = !(ml_backend__il_peephole__succeeded);
#line 241 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 241 "il_peephole.m"
  }
#line 241 "il_peephole.m"
}

#line 135 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__135__1_2_f_0(
#line 135 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__NewMaxStack_16,
#line 135 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_52)
#line 135 "il_peephole.m"
{
#line 135 "il_peephole.m"
  {
#line 135 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__2_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 135 "il_peephole.m"
    MR_Word ml_backend__il_peephole__HeadVar__3_53;
#line 136 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_19_19;

#line 136 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 136 "il_peephole.m"
      {
#line 136 "il_peephole.m"
        ml_backend__il_peephole__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__2_52, (MR_Integer) 1)));
#line 137 "il_peephole.m"
        {
#line 137 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_54_54 = (MR_Word) ml_backend__il_peephole__NewMaxStack_16;

#line 137 "il_peephole.m"
          {
#line 137 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__3_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "il_peephole.m"
            MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__3_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 137 "il_peephole.m"
            MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__3_53, 1) = ((MR_Box) (ml_backend__il_peephole__V_54_54));
#line 137 "il_peephole.m"
          }
#line 137 "il_peephole.m"
        }
#line 136 "il_peephole.m"
      }
#line 136 "il_peephole.m"
    else
#line 138 "il_peephole.m"
      ml_backend__il_peephole__HeadVar__3_53 = ml_backend__il_peephole__HeadVar__2_52;
#line 135 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__3_53;
#line 135 "il_peephole.m"
  }
#line 135 "il_peephole.m"
}

#line 128 "il_peephole.m"
static MR_Integer MR_CALL 
ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__128__1_1_f_0(
#line 128 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_44)
#line 128 "il_peephole.m"
{
#line 128 "il_peephole.m"
  {
#line 128 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_44, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 128 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__HeadVar__2_45;
#line 128 "il_peephole.m"
    MR_Word ml_backend__il_peephole__I_15;

#line 129 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 129 "il_peephole.m"
      {
#line 129 "il_peephole.m"
        ml_backend__il_peephole__I_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_44, (MR_Integer) 1)));
#line 130 "il_peephole.m"
        {
#line 130 "il_peephole.m"
          return ml_backend__il_peephole__HeadVar__2_45 = ml_backend__ilds__calculate_max_stack_1_f_0(ml_backend__il_peephole__I_15);
        }
#line 129 "il_peephole.m"
      }
#line 129 "il_peephole.m"
    else
#line 131 "il_peephole.m"
      ml_backend__il_peephole__HeadVar__2_45 = (MR_Integer) 0;
#line 128 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__2_45;
#line 128 "il_peephole.m"
  }
#line 128 "il_peephole.m"
}

#line 68 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole____Compare____instrs_0_0(
#line 68 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__1_1,
#line 68 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2,
#line 68 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_3)
#line 68 "il_peephole.m"
{
#line 68 "il_peephole.m"
  {
#line 68 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 68 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Cast_HeadVar1_4 = ml_backend__il_peephole__HeadVar__2_2;
#line 68 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Cast_HeadVar2_5 = ml_backend__il_peephole__HeadVar__3_3;

#line 68 "il_peephole.m"
    {
#line 68 "il_peephole.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__il_peephole_scalar_common_1[0], ml_backend__il_peephole__HeadVar__1_1, ((MR_Box) (ml_backend__il_peephole__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__il_peephole__Cast_HeadVar2_5)));
#line 68 "il_peephole.m"
      return;
    }
#line 68 "il_peephole.m"
  }
#line 68 "il_peephole.m"
}

#line 68 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole____Unify____instrs_0_0(
#line 68 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 68 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2)
#line 68 "il_peephole.m"
{
#line 68 "il_peephole.m"
  {
#line 68 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 68 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Cast_HeadVar1_3 = ml_backend__il_peephole__HeadVar__1_1;
#line 68 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Cast_HeadVar2_4 = ml_backend__il_peephole__HeadVar__2_2;

#line 68 "il_peephole.m"
    {
#line 68 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__il_peephole_scalar_common_1[0], ((MR_Box) (ml_backend__il_peephole__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__il_peephole__Cast_HeadVar2_4)));
    }
#line 68 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 68 "il_peephole.m"
  }
#line 68 "il_peephole.m"
}

#line 714 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__can_branch_1_f_0(
#line 714 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1)
#line 714 "il_peephole.m"
{
#line 719 "il_peephole.m"
  {
#line 719 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 719 "il_peephole.m"
    MR_Word ml_backend__il_peephole__HeadVar__2_2;

#line 719 "il_peephole.m"
#line 719 "il_peephole.m"
    switch (MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) {
#line 719 "il_peephole.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 719 "il_peephole.m"
      case (MR_Integer) 0:
#line 719 "il_peephole.m"
#line 719 "il_peephole.m"
        switch (MR_unmkbody(ml_backend__il_peephole__HeadVar__1_1)) {
#line 719 "il_peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 719 "il_peephole.m"
          case (MR_Integer) 0:
#line 741 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 1:
#line 742 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 2:
#line 743 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 3:
#line 744 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 4:
#line 745 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 5:
#line 746 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 6:
#line 747 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 7:
#line 748 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 8:
#line 749 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 9:
#line 750 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 10:
#line 751 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 11:
#line 752 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 12:
#line 753 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 13:
#line 735 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 14:
#line 754 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 15:
#line 755 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 16:
#line 756 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 17:
#line 740 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 18:
#line 757 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 19:
#line 758 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 20:
#line 759 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 21:
#line 760 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 22:
#line 761 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 23:
#line 804 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 24:
#line 803 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 25:
#line 762 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
        }
#line 719 "il_peephole.m"
        break;
#line 719 "il_peephole.m"
      case (MR_Integer) 1:
#line 738 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
        break;
#line 719 "il_peephole.m"
      case (MR_Integer) 2:
#line 786 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
        break;
#line 719 "il_peephole.m"
      case (MR_Integer) 3:
#line 719 "il_peephole.m"
#line 719 "il_peephole.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) {
#line 719 "il_peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 719 "il_peephole.m"
          case (MR_Integer) 0:
#line 787 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 1:
#line 788 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 2:
#line 789 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 3:
#line 790 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 4:
#line 792 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 5:
#line 793 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 6:
#line 794 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 7:
#line 795 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 8:
#line 796 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 9:
#line 797 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 10:
#line 798 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 11:
#line 800 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 12:
#line 801 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 13:
#line 805 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 14:
#line 809 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 15:
#line 807 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 16:
#line 808 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 17:
#line 810 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 18:
#line 811 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 19:
#line 732 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 20:
#line 736 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 21:
#line 733 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 22:
#line 731 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 23:
#line 734 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 24:
#line 719 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 25:
#line 766 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 26:
#line 723 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 27:
#line 724 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 28:
#line 725 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 29:
#line 726 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 30:
#line 727 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 31:
#line 728 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 32:
#line 720 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 33:
#line 722 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 34:
#line 721 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 35:
#line 737 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 36:
#line 767 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 37:
#line 768 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 38:
#line 769 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 39:
#line 770 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 40:
#line 771 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 41:
#line 763 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 42:
#line 772 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 43:
#line 764 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 44:
#line 773 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 45:
#line 774 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 46:
#line 775 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 47:
#line 776 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 48:
#line 777 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 49:
#line 778 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 50:
#line 779 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 51:
#line 780 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 52:
#line 781 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 53:
#line 782 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 54:
#line 783 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 55:
#line 784 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 56:
#line 729 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 57:
#line 785 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 58:
#line 739 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 59:
#line 791 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 60:
#line 765 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 61:
#line 799 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 62:
#line 802 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
          case (MR_Integer) 63:
#line 806 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 719 "il_peephole.m"
            break;
#line 719 "il_peephole.m"
        }
#line 719 "il_peephole.m"
        break;
#line 719 "il_peephole.m"
    }
#line 719 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__2_2;
#line 719 "il_peephole.m"
  }
#line 714 "il_peephole.m"
}

#line 612 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__equivalent_to_nop_1_f_0(
#line 612 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1)
#line 612 "il_peephole.m"
{
#line 614 "il_peephole.m"
  {
#line 614 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 614 "il_peephole.m"
    MR_Word ml_backend__il_peephole__HeadVar__2_2;

#line 614 "il_peephole.m"
#line 614 "il_peephole.m"
    switch (MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) {
#line 614 "il_peephole.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 614 "il_peephole.m"
      case (MR_Integer) 0:
#line 614 "il_peephole.m"
#line 614 "il_peephole.m"
        switch (MR_unmkbody(ml_backend__il_peephole__HeadVar__1_1)) {
#line 614 "il_peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 614 "il_peephole.m"
          case (MR_Integer) 0:
#line 630 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 1:
#line 631 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 2:
#line 632 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 3:
#line 633 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 4:
#line 634 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 5:
#line 635 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 6:
#line 636 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 7:
#line 637 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 8:
#line 638 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 9:
#line 639 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 10:
#line 640 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 11:
#line 641 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 12:
#line 642 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 13:
#line 617 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 14:
#line 643 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 15:
#line 644 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 16:
#line 645 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 17:
#line 629 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 18:
#line 646 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 19:
#line 647 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 20:
#line 648 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 21:
#line 649 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 22:
#line 650 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 23:
#line 702 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 24:
#line 704 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 25:
#line 651 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
        }
#line 614 "il_peephole.m"
        break;
#line 614 "il_peephole.m"
      case (MR_Integer) 1:
#line 627 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
        break;
#line 614 "il_peephole.m"
      case (MR_Integer) 2:
#line 685 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
        break;
#line 614 "il_peephole.m"
      case (MR_Integer) 3:
#line 614 "il_peephole.m"
#line 614 "il_peephole.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) {
#line 614 "il_peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 614 "il_peephole.m"
          case (MR_Integer) 0:
#line 686 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 1:
#line 687 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 2:
#line 688 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 3:
#line 689 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 4:
#line 691 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 5:
#line 692 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 6:
#line 693 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 7:
#line 694 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 8:
#line 695 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 9:
#line 696 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 10:
#line 697 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 11:
#line 699 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 12:
#line 700 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 13:
#line 703 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 14:
#line 707 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 15:
#line 706 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 16:
#line 708 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 17:
#line 709 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 18:
#line 710 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 19:
#line 614 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 20:
#line 625 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 21:
#line 614 "il_peephole.m"
            {
#line 614 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 615 "il_peephole.m"
              MR_Integer ml_backend__il_peephole__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));

#line 614 "il_peephole.m"
#line 614 "il_peephole.m"
              switch (MR_tag((MR_Word) ml_backend__il_peephole__V_97_97)) {
#line 614 "il_peephole.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 614 "il_peephole.m"
                case (MR_Integer) 0:
#line 621 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
                  break;
#line 614 "il_peephole.m"
                case (MR_Integer) 1:
#line 623 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
                  break;
#line 614 "il_peephole.m"
                case (MR_Integer) 2:
#line 615 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 614 "il_peephole.m"
                  break;
#line 614 "il_peephole.m"
              }
#line 614 "il_peephole.m"
            }
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 22:
#line 614 "il_peephole.m"
            {
#line 614 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 616 "il_peephole.m"
              MR_Integer ml_backend__il_peephole__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));

#line 614 "il_peephole.m"
#line 614 "il_peephole.m"
              switch (MR_tag((MR_Word) ml_backend__il_peephole__V_95_95)) {
#line 614 "il_peephole.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 614 "il_peephole.m"
                case (MR_Integer) 0:
#line 622 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
                  break;
#line 614 "il_peephole.m"
                case (MR_Integer) 1:
#line 624 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
                  break;
#line 614 "il_peephole.m"
                case (MR_Integer) 2:
#line 616 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 614 "il_peephole.m"
                  break;
#line 614 "il_peephole.m"
              }
#line 614 "il_peephole.m"
            }
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 23:
#line 618 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 24:
#line 620 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 25:
#line 655 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 26:
#line 656 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 27:
#line 657 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 28:
#line 658 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 29:
#line 659 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 30:
#line 660 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 31:
#line 661 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 32:
#line 662 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 33:
#line 663 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 34:
#line 664 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 35:
#line 626 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 36:
#line 665 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 37:
#line 666 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 38:
#line 667 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 39:
#line 668 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 40:
#line 669 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 41:
#line 652 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 42:
#line 670 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 43:
#line 653 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 44:
#line 671 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 45:
#line 672 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 46:
#line 673 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 47:
#line 674 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 48:
#line 675 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 49:
#line 676 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 50:
#line 677 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 51:
#line 678 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 52:
#line 679 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 53:
#line 680 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 54:
#line 681 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 55:
#line 682 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 56:
#line 683 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 57:
#line 684 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 58:
#line 628 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 59:
#line 690 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 60:
#line 654 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 61:
#line 698 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 62:
#line 701 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
          case (MR_Integer) 63:
#line 705 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 614 "il_peephole.m"
            break;
#line 614 "il_peephole.m"
        }
#line 614 "il_peephole.m"
        break;
#line 614 "il_peephole.m"
    }
#line 614 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__2_2;
#line 614 "il_peephole.m"
  }
#line 612 "il_peephole.m"
}

#line 513 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__can_call_1_f_0(
#line 513 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1)
#line 513 "il_peephole.m"
{
#line 515 "il_peephole.m"
  {
#line 515 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 515 "il_peephole.m"
    MR_Word ml_backend__il_peephole__HeadVar__2_2;

#line 515 "il_peephole.m"
#line 515 "il_peephole.m"
    switch (MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) {
#line 515 "il_peephole.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 515 "il_peephole.m"
      case (MR_Integer) 0:
#line 515 "il_peephole.m"
#line 515 "il_peephole.m"
        switch (MR_unmkbody(ml_backend__il_peephole__HeadVar__1_1)) {
#line 515 "il_peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 515 "il_peephole.m"
          case (MR_Integer) 0:
#line 528 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 1:
#line 529 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 2:
#line 530 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 3:
#line 531 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 4:
#line 532 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 5:
#line 533 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 6:
#line 534 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 7:
#line 535 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 8:
#line 536 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 9:
#line 537 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 10:
#line 538 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 11:
#line 539 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 12:
#line 540 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 13:
#line 541 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 14:
#line 542 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 15:
#line 543 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 16:
#line 544 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 17:
#line 527 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 18:
#line 545 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 19:
#line 546 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 20:
#line 547 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 21:
#line 548 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 22:
#line 549 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 23:
#line 599 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 24:
#line 601 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 25:
#line 550 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
        }
#line 515 "il_peephole.m"
        break;
#line 515 "il_peephole.m"
      case (MR_Integer) 1:
#line 516 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 515 "il_peephole.m"
        break;
#line 515 "il_peephole.m"
      case (MR_Integer) 2:
#line 583 "il_peephole.m"
        ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
        break;
#line 515 "il_peephole.m"
      case (MR_Integer) 3:
#line 515 "il_peephole.m"
#line 515 "il_peephole.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) {
#line 515 "il_peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 515 "il_peephole.m"
          case (MR_Integer) 0:
#line 584 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 1:
#line 585 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 2:
#line 586 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 3:
#line 587 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 4:
#line 589 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 5:
#line 590 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 6:
#line 591 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 7:
#line 592 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 8:
#line 593 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 9:
#line 594 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 10:
#line 595 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 11:
#line 597 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 12:
#line 598 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 13:
#line 600 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 14:
#line 602 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 15:
#line 605 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 16:
#line 603 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 17:
#line 606 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 18:
#line 607 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 19:
#line 522 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 20:
#line 523 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 21:
#line 524 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 22:
#line 525 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 23:
#line 526 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 24:
#line 520 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 25:
#line 554 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 26:
#line 555 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 27:
#line 556 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 28:
#line 557 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 29:
#line 558 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 30:
#line 559 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 31:
#line 560 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 32:
#line 561 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 33:
#line 562 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 34:
#line 563 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 35:
#line 515 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 36:
#line 564 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 37:
#line 565 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 38:
#line 566 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 39:
#line 567 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 40:
#line 518 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 41:
#line 551 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 42:
#line 568 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 43:
#line 552 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 44:
#line 569 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 45:
#line 570 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 46:
#line 571 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 47:
#line 572 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 48:
#line 573 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 49:
#line 574 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 50:
#line 575 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 51:
#line 576 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 52:
#line 577 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 53:
#line 578 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 54:
#line 579 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 55:
#line 580 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 56:
#line 581 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 57:
#line 582 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 58:
#line 517 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 59:
#line 588 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 60:
#line 553 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 61:
#line 596 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 62:
#line 519 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 1;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
          case (MR_Integer) 63:
#line 604 "il_peephole.m"
            ml_backend__il_peephole__HeadVar__2_2 = (MR_Integer) 0;
#line 515 "il_peephole.m"
            break;
#line 515 "il_peephole.m"
        }
#line 515 "il_peephole.m"
        break;
#line 515 "il_peephole.m"
    }
#line 515 "il_peephole.m"
    return ml_backend__il_peephole__HeadVar__2_2;
#line 515 "il_peephole.m"
  }
#line 513 "il_peephole.m"
}

#line 477 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__skip_nops_3_p_0_1(
#line 477 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 477 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 477 "il_peephole.m"
{
#line 477 "il_peephole.m"
  {
#line 477 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 477 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 477 "il_peephole.m"
    {
#line 477 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__skip_nops__477__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 477 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 477 "il_peephole.m"
  }
#line 477 "il_peephole.m"
}

#line 474 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__skip_nops_3_p_0(
#line 474 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_4,
#line 474 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_5,
#line 474 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Nops_6)
#line 474 "il_peephole.m"
{
#line 476 "il_peephole.m"
  {
#line 476 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 477 "il_peephole.m"
    {
#line 477 "il_peephole.m"
      mercury__list__takewhile_4_p_0((MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0, (MR_Word) &ml_backend__il_peephole_scalar_common_2[6], ml_backend__il_peephole__Instrs0_4, ml_backend__il_peephole__Nops_6, ml_backend__il_peephole__Instrs_5);
#line 477 "il_peephole.m"
      return;
    }
#line 476 "il_peephole.m"
  }
#line 474 "il_peephole.m"
}

#line 454 "il_peephole.m"
static MR_Word MR_CALL 
ml_backend__il_peephole__skip_over_block_2_f_0(
#line 454 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 454 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__Id_2)
#line 454 "il_peephole.m"
{
#line 456 "il_peephole.m"
  while (MR_TRUE)
#line 456 "il_peephole.m"
    {
#line 456 "il_peephole.m"
      /* tailcall optimized into a loop */
#line 456 "il_peephole.m"
      {
#line 456 "il_peephole.m"
        MR_bool ml_backend__il_peephole__succeeded;
#line 456 "il_peephole.m"
        MR_Word ml_backend__il_peephole__HeadVar__3_3;

#line 456 "il_peephole.m"
        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "il_peephole.m"
          ml_backend__il_peephole__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 456 "il_peephole.m"
        else
#line 457 "il_peephole.m"
          {
#line 457 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instr_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)));
#line 457 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instrs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 458 "il_peephole.m"
            MR_Integer ml_backend__il_peephole__V_9_9;
#line 458 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_8_8;

#line 458 "il_peephole.m"
            ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Instr_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_5, (MR_Integer) 0)))) == (MR_Integer) 22)));
#line 458 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 458 "il_peephole.m"
              {
#line 458 "il_peephole.m"
                ml_backend__il_peephole__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_5, (MR_Integer) 1)));
#line 458 "il_peephole.m"
                ml_backend__il_peephole__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_5, (MR_Integer) 2)));
#line 458 "il_peephole.m"
                ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__Id_2 == ml_backend__il_peephole__V_9_9);
#line 458 "il_peephole.m"
              }
#line 457 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 459 "il_peephole.m"
              ml_backend__il_peephole__HeadVar__3_3 = ml_backend__il_peephole__Instrs_6;
#line 457 "il_peephole.m"
            else
#line 461 "il_peephole.m"
              {
#line 461 "il_peephole.m"
                /* direct tailcall eliminated */
#line 461 "il_peephole.m"
                {
#line 461 "il_peephole.m"
                  MR_Word ml_backend__il_peephole__HeadVar__1__tmp_copy_1 = ml_backend__il_peephole__Instrs_6;

#line 461 "il_peephole.m"
                  ml_backend__il_peephole__HeadVar__1_1 = ml_backend__il_peephole__HeadVar__1__tmp_copy_1;
#line 461 "il_peephole.m"
                }
#line 461 "il_peephole.m"
                continue;
#line 461 "il_peephole.m"
              }
#line 457 "il_peephole.m"
          }
#line 456 "il_peephole.m"
        return ml_backend__il_peephole__HeadVar__3_3;
#line 456 "il_peephole.m"
      }
#line 456 "il_peephole.m"
      break;
#line 456 "il_peephole.m"
    }
#line 454 "il_peephole.m"
}

#line 436 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__no_handwritten_code_2_p_0(
#line 436 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 436 "il_peephole.m"
  MR_Integer ml_backend__il_peephole__Id_2)
#line 436 "il_peephole.m"
{
#line 438 "il_peephole.m"
  while (MR_TRUE)
#line 438 "il_peephole.m"
    {
#line 438 "il_peephole.m"
      /* tailcall optimized into a loop */
#line 438 "il_peephole.m"
      {
#line 438 "il_peephole.m"
        MR_bool ml_backend__il_peephole__succeeded;

#line 438 "il_peephole.m"
        if ((ml_backend__il_peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "il_peephole.m"
          ml_backend__il_peephole__succeeded = MR_TRUE;
#line 438 "il_peephole.m"
        else
#line 439 "il_peephole.m"
          {
#line 439 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instr_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)));
#line 439 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 440 "il_peephole.m"
            MR_String ml_backend__il_peephole__V_7_7;
#line 440 "il_peephole.m"
            MR_Integer ml_backend__il_peephole__V_8_8;

#line 440 "il_peephole.m"
            ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 24)));
#line 440 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 440 "il_peephole.m"
              {
#line 440 "il_peephole.m"
                ml_backend__il_peephole__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 1)));
#line 440 "il_peephole.m"
                ml_backend__il_peephole__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 2)));
#line 441 "il_peephole.m"
                ml_backend__il_peephole__succeeded = MR_FALSE;
#line 440 "il_peephole.m"
              }
#line 440 "il_peephole.m"
            else
#line 444 "il_peephole.m"
              {
#line 442 "il_peephole.m"
                MR_Integer ml_backend__il_peephole__V_13_13;
#line 442 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_9_9;

#line 442 "il_peephole.m"
                ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 22)));
#line 442 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 442 "il_peephole.m"
                  {
#line 442 "il_peephole.m"
                    ml_backend__il_peephole__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 1)));
#line 442 "il_peephole.m"
                    ml_backend__il_peephole__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 2)));
#line 442 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__Id_2 == ml_backend__il_peephole__V_13_13);
#line 442 "il_peephole.m"
                  }
#line 444 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 443 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = MR_TRUE;
#line 444 "il_peephole.m"
                else
#line 447 "il_peephole.m"
                  {
#line 447 "il_peephole.m"
                    MR_Integer ml_backend__il_peephole__SkipId_11;
#line 444 "il_peephole.m"
                    MR_Word ml_backend__il_peephole__V_10_10;

#line 444 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 444 "il_peephole.m"
                    if (ml_backend__il_peephole__succeeded)
#line 444 "il_peephole.m"
                      {
#line 444 "il_peephole.m"
                        ml_backend__il_peephole__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 1)));
#line 444 "il_peephole.m"
                        ml_backend__il_peephole__SkipId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Instr_4, (MR_Integer) 2)));
#line 445 "il_peephole.m"
                        {
#line 445 "il_peephole.m"
                          MR_Word ml_backend__il_peephole__InstrsAfterBlock_12;

#line 445 "il_peephole.m"
                          {
#line 445 "il_peephole.m"
                            ml_backend__il_peephole__InstrsAfterBlock_12 = ml_backend__il_peephole__skip_over_block_2_f_0(ml_backend__il_peephole__Instrs_5, ml_backend__il_peephole__SkipId_11);
                          }
#line 446 "il_peephole.m"
                          /* direct tailcall eliminated */
#line 446 "il_peephole.m"
                          {
#line 446 "il_peephole.m"
                            MR_Word ml_backend__il_peephole__HeadVar__1__tmp_copy_1 = ml_backend__il_peephole__InstrsAfterBlock_12;

#line 446 "il_peephole.m"
                            ml_backend__il_peephole__HeadVar__1_1 = ml_backend__il_peephole__HeadVar__1__tmp_copy_1;
#line 446 "il_peephole.m"
                          }
#line 446 "il_peephole.m"
                          continue;
#line 445 "il_peephole.m"
                        }
#line 444 "il_peephole.m"
                      }
#line 444 "il_peephole.m"
                    else
#line 448 "il_peephole.m"
                      {
#line 448 "il_peephole.m"
                        /* direct tailcall eliminated */
#line 448 "il_peephole.m"
                        {
#line 448 "il_peephole.m"
                          MR_Word ml_backend__il_peephole__HeadVar__1__tmp_copy_1 = ml_backend__il_peephole__Instrs_5;

#line 448 "il_peephole.m"
                          ml_backend__il_peephole__HeadVar__1_1 = ml_backend__il_peephole__HeadVar__1__tmp_copy_1;
#line 448 "il_peephole.m"
                        }
#line 448 "il_peephole.m"
                        continue;
#line 448 "il_peephole.m"
                      }
#line 447 "il_peephole.m"
                  }
#line 444 "il_peephole.m"
              }
#line 439 "il_peephole.m"
          }
#line 438 "il_peephole.m"
        return ml_backend__il_peephole__succeeded;
#line 438 "il_peephole.m"
      }
#line 438 "il_peephole.m"
      break;
#line 438 "il_peephole.m"
    }
#line 436 "il_peephole.m"
}

#line 410 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0_2(
#line 410 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 410 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 410 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2)
#line 410 "il_peephole.m"
{
#line 410 "il_peephole.m"
  {
#line 410 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 410 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv0_HeadVar__2_29;

#line 410 "il_peephole.m"
    {
#line 410 "il_peephole.m"
      ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__410__1_2_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv0_HeadVar__2_29);
    }
#line 410 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv0_HeadVar__2_29));
#line 410 "il_peephole.m"
  }
#line 410 "il_peephole.m"
}

#line 397 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0_1(
#line 397 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 397 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 397 "il_peephole.m"
{
#line 397 "il_peephole.m"
  {
#line 397 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 397 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 397 "il_peephole.m"
    {
#line 397 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match_start_scope_2__397__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 397 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 397 "il_peephole.m"
  }
#line 397 "il_peephole.m"
}

#line 391 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_2_3_p_0(
#line 391 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 391 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 391 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_7)
#line 391 "il_peephole.m"
{
#line 393 "il_peephole.m"
  {
#line 393 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeInfo_50_50;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_51_51;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Locals_4;
#line 393 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__Id_5;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__UnusedLocals_13;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__UsedLocals_14;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Comments_19;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Replacement_20;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_21_21;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_22_22;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_27_27;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_34_34;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_35_35;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_36_36;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_37_37;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_38_38;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_39_39;
#line 393 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_40_40;
#line 407 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_15_15;
#line 407 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_16_16;

#line 393 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 393 "il_peephole.m"
      {
#line 393 "il_peephole.m"
        ml_backend__il_peephole__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 393 "il_peephole.m"
        ml_backend__il_peephole__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));
#line 393 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_21_21)) == (MR_mktag((MR_Integer) 2)));
#line 393 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 393 "il_peephole.m"
          {
#line 393 "il_peephole.m"
            ml_backend__il_peephole__Locals_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_21_21, (MR_Integer) 0)));
#line 394 "il_peephole.m"
            {
#line 394 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__il_peephole__no_handwritten_code_2_p_0(ml_backend__il_peephole__Instrs0_6, ml_backend__il_peephole__Id_5);
            }
#line 393 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 393 "il_peephole.m"
              {
#line 4544 "ml_backend.il_peephole.c"
                ml_backend__il_peephole__TypeInfo_50_50 = (MR_Word) &ml_backend__il_peephole_scalar_common_2[0];
#line 397 "il_peephole.m"
                {
#line 397 "il_peephole.m"
                  ml_backend__il_peephole__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 397 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_22_22, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[3]));
#line 397 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_22_22, 1) = ((MR_Box) (ml_backend__il_peephole__match_start_scope_2_3_p_0_1));
#line 397 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 397 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_22_22, 3) = ((MR_Box) (ml_backend__il_peephole__Instrs0_6));
#line 397 "il_peephole.m"
                }
#line 397 "il_peephole.m"
                {
#line 397 "il_peephole.m"
                  mercury__list__filter_4_p_0(ml_backend__il_peephole__TypeInfo_50_50, ml_backend__il_peephole__V_22_22, ml_backend__il_peephole__Locals_4, &ml_backend__il_peephole__UnusedLocals_13, &ml_backend__il_peephole__UsedLocals_14);
                }
#line 407 "il_peephole.m"
                ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__UnusedLocals_13)) == (MR_mktag((MR_Integer) 1)));
#line 407 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 407 "il_peephole.m"
                  {
#line 407 "il_peephole.m"
                    ml_backend__il_peephole__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__UnusedLocals_13, (MR_Integer) 0)));
#line 407 "il_peephole.m"
                    ml_backend__il_peephole__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__UnusedLocals_13, (MR_Integer) 1)));
#line 410 "il_peephole.m"
                    ml_backend__il_peephole__V_27_27 = (MR_Word) &ml_backend__il_peephole_scalar_common_2[5];
#line 4577 "ml_backend.il_peephole.c"
                    ml_backend__il_peephole__TypeCtorInfo_51_51 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 410 "il_peephole.m"
                    {
#line 410 "il_peephole.m"
                      mercury__list__map_3_p_0(ml_backend__il_peephole__TypeInfo_50_50, ml_backend__il_peephole__TypeCtorInfo_51_51, ml_backend__il_peephole__V_27_27, ml_backend__il_peephole__UnusedLocals_13, &ml_backend__il_peephole__Comments_19);
                    }
#line 415 "il_peephole.m"
                    ml_backend__il_peephole__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "il_peephole.m"
                    ml_backend__il_peephole__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "il_peephole.m"
                    {
#line 415 "il_peephole.m"
                      ml_backend__il_peephole__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "il_peephole.m"
                      MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_35_35, 0) = ((MR_Box) (ml_backend__il_peephole__UsedLocals_14));
#line 415 "il_peephole.m"
                    }
#line 415 "il_peephole.m"
                    {
#line 415 "il_peephole.m"
                      ml_backend__il_peephole__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 415 "il_peephole.m"
                      MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 415 "il_peephole.m"
                      MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_34_34, 1) = ((MR_Box) (ml_backend__il_peephole__V_35_35));
#line 415 "il_peephole.m"
                      MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_34_34, 2) = ((MR_Box) (ml_backend__il_peephole__Id_5));
#line 415 "il_peephole.m"
                    }
#line 415 "il_peephole.m"
                    {
#line 415 "il_peephole.m"
                      ml_backend__il_peephole__Replacement_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Replacement_20, 0) = ((MR_Box) (ml_backend__il_peephole__V_34_34));
#line 415 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Replacement_20, 1) = ((MR_Box) (ml_backend__il_peephole__V_36_36));
#line 415 "il_peephole.m"
                    }
#line 417 "il_peephole.m"
                    {
#line 417 "il_peephole.m"
                      ml_backend__il_peephole__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_39_39, 0) = ((MR_Box) (ml_backend__il_peephole__Instrs0_6));
#line 417 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_39_39, 1) = ((MR_Box) (ml_backend__il_peephole__V_40_40));
#line 417 "il_peephole.m"
                    }
#line 417 "il_peephole.m"
                    {
#line 417 "il_peephole.m"
                      ml_backend__il_peephole__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_38_38, 0) = ((MR_Box) (ml_backend__il_peephole__Replacement_20));
#line 417 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_38_38, 1) = ((MR_Box) (ml_backend__il_peephole__V_39_39));
#line 417 "il_peephole.m"
                    }
#line 417 "il_peephole.m"
                    {
#line 417 "il_peephole.m"
                      ml_backend__il_peephole__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_37_37, 0) = ((MR_Box) (ml_backend__il_peephole__Comments_19));
#line 417 "il_peephole.m"
                      MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_37_37, 1) = ((MR_Box) (ml_backend__il_peephole__V_38_38));
#line 417 "il_peephole.m"
                    }
#line 417 "il_peephole.m"
                    {
#line 417 "il_peephole.m"
                      *ml_backend__il_peephole__Instrs_7 = mercury__list__condense_1_f_0(ml_backend__il_peephole__TypeCtorInfo_51_51, ml_backend__il_peephole__V_37_37);
                    }
#line 417 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = MR_TRUE;
#line 407 "il_peephole.m"
                  }
#line 393 "il_peephole.m"
              }
#line 393 "il_peephole.m"
          }
#line 393 "il_peephole.m"
      }
#line 393 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 393 "il_peephole.m"
  }
#line 391 "il_peephole.m"
}

#line 318 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_start_scope_1_3_p_0(
#line 318 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 318 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_6,
#line 318 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_7)
#line 318 "il_peephole.m"
{
#line 320 "il_peephole.m"
  {
#line 320 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeInfo_115_115;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_118_118;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Locals_4;
#line 320 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__Id_5;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Result_30;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Var_32;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__PreStlocInstrsList_33;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Nops_34;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__PostStlocInstrs_35;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__VarName_36;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__PreStlocInstrs_37;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__Comment_38;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_39_39;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_63_63;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_64_64;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_65_65;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_66_66;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_67_67;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_68_68;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_75_75;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_76_76;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_79_79;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_80_80;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_81_81;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_82_82;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_83_83;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_84_84;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_85_85;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_86_86;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_87_87;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_122_122;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_123_123;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_124_124;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_125_125;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_126_126;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_127_127;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_128_128;
#line 320 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_129_129;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_130_130;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_131_131;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_132_132;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_133_133;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_140_140;
#line 320 "il_peephole.m"
    MR_String ml_backend__il_peephole__V_141_141;
#line 372 "il_peephole.m"
    MR_Word ml_backend__il_peephole___Left_31;

#line 320 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 320 "il_peephole.m"
      {
#line 320 "il_peephole.m"
        ml_backend__il_peephole__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 320 "il_peephole.m"
        ml_backend__il_peephole__Id_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));
#line 320 "il_peephole.m"
        ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_39_39)) == (MR_mktag((MR_Integer) 2)));
#line 320 "il_peephole.m"
        if (ml_backend__il_peephole__succeeded)
#line 320 "il_peephole.m"
          {
#line 320 "il_peephole.m"
            ml_backend__il_peephole__Locals_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_39_39, (MR_Integer) 0)));
#line 369 "il_peephole.m"
            {
#line 369 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ml_backend__il_peephole__no_handwritten_code_2_p_0(ml_backend__il_peephole__Instrs0_6, ml_backend__il_peephole__Id_5);
            }
#line 320 "il_peephole.m"
            if (ml_backend__il_peephole__succeeded)
#line 320 "il_peephole.m"
              {
#line 372 "il_peephole.m"
                ml_backend__il_peephole__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "il_peephole.m"
                ml_backend__il_peephole__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4805 "ml_backend.il_peephole.c"
                ml_backend__il_peephole__TypeInfo_115_115 = (MR_Word) &ml_backend__il_peephole_scalar_common_1[0];
#line 372 "il_peephole.m"
                ml_backend__il_peephole__V_63_63 = (MR_Word) &ml_backend__il_peephole_scalar_common_1[7];
#line 372 "il_peephole.m"
                {
#line 372 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ml_backend__il_peephole__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_108_111_111_107_105_110_103_95_95_104_111_49_95_95_91_49_44_32_52_93_95_48_6_p_0(ml_backend__il_peephole__Locals_4, ml_backend__il_peephole__Instrs0_6, ml_backend__il_peephole__Instrs0_6, ml_backend__il_peephole__V_63_63, &ml_backend__il_peephole__Result_30, &ml_backend__il_peephole___Left_31);
                }
#line 320 "il_peephole.m"
                if (ml_backend__il_peephole__succeeded)
#line 320 "il_peephole.m"
                  {
#line 373 "il_peephole.m"
                    ml_backend__il_peephole__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__Result_30, (MR_Integer) 0)));
#line 373 "il_peephole.m"
                    ml_backend__il_peephole__PostStlocInstrs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__Result_30, (MR_Integer) 1)));
#line 373 "il_peephole.m"
                    ml_backend__il_peephole__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_66_66, (MR_Integer) 0)));
#line 373 "il_peephole.m"
                    ml_backend__il_peephole__Nops_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_66_66, (MR_Integer) 1)));
#line 373 "il_peephole.m"
                    ml_backend__il_peephole__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_67_67, (MR_Integer) 0)));
#line 373 "il_peephole.m"
                    ml_backend__il_peephole__PreStlocInstrsList_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_67_67, (MR_Integer) 1)));
#line 374 "il_peephole.m"
                    ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__Var_32)) == (MR_mktag((MR_Integer) 0)));
#line 374 "il_peephole.m"
                    if (ml_backend__il_peephole__succeeded)
#line 374 "il_peephole.m"
                      {
#line 374 "il_peephole.m"
                        ml_backend__il_peephole__VarName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__Var_32, (MR_Integer) 0)));
#line 4838 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__TypeCtorInfo_118_118 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 376 "il_peephole.m"
                        {
#line 376 "il_peephole.m"
                          ml_backend__il_peephole__V_68_68 = mercury__list__reverse_1_f_0(ml_backend__il_peephole__TypeInfo_115_115, ml_backend__il_peephole__PreStlocInstrsList_33);
                        }
#line 376 "il_peephole.m"
                        {
#line 376 "il_peephole.m"
                          ml_backend__il_peephole__PreStlocInstrs_37 = mercury__list__condense_1_f_0(ml_backend__il_peephole__TypeCtorInfo_118_118, ml_backend__il_peephole__V_68_68);
                        }
#line 4850 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_122_122 = (MR_String) " unused in scope)";
#line 4852 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_124_124 = (MR_Integer) 0;
#line 4854 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_125_125 = (MR_Integer) 0;
#line 4856 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_126_126 = (MR_Integer) 0;
#line 4858 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_127_127 = (MR_Integer) 0;
#line 4860 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_128_128 = (MR_Integer) 0;
#line 4862 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_129_129 = (MR_Word) &ml_backend__il_peephole_scalar_common_7[0];
#line 380 "il_peephole.m"
                        {
#line 380 "il_peephole.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__il_peephole__V_129_129, ml_backend__il_peephole__VarName_36, &ml_backend__il_peephole__V_123_123);
                        }
#line 378 "il_peephole.m"
                        {
#line 378 "il_peephole.m"
                          ml_backend__il_peephole__V_130_130 = mercury__string__f_43_43_2_f_0(ml_backend__il_peephole__V_123_123, ml_backend__il_peephole__V_122_122);
                        }
#line 4874 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_131_131 = (MR_String) ") --> nothing (";
#line 378 "il_peephole.m"
                        {
#line 378 "il_peephole.m"
                          ml_backend__il_peephole__V_132_132 = mercury__string__f_43_43_2_f_0(ml_backend__il_peephole__V_131_131, ml_backend__il_peephole__V_130_130);
                        }
#line 380 "il_peephole.m"
                        {
#line 380 "il_peephole.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__il_peephole__V_129_129, ml_backend__il_peephole__VarName_36, &ml_backend__il_peephole__V_133_133);
                        }
#line 378 "il_peephole.m"
                        {
#line 378 "il_peephole.m"
                          ml_backend__il_peephole__V_140_140 = mercury__string__f_43_43_2_f_0(ml_backend__il_peephole__V_133_133, ml_backend__il_peephole__V_132_132);
                        }
#line 4891 "ml_backend.il_peephole.c"
                        ml_backend__il_peephole__V_141_141 = (MR_String) "peephole: dup, stloc(";
#line 378 "il_peephole.m"
                        {
#line 378 "il_peephole.m"
                          ml_backend__il_peephole__Comment_38 = mercury__string__f_43_43_2_f_0(ml_backend__il_peephole__V_141_141, ml_backend__il_peephole__V_140_140);
                        }
#line 381 "il_peephole.m"
                        ml_backend__il_peephole__V_79_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "il_peephole.m"
                        ml_backend__il_peephole__V_85_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 385 "il_peephole.m"
                        ml_backend__il_peephole__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 381 "il_peephole.m"
                        {
#line 381 "il_peephole.m"
                          ml_backend__il_peephole__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_76_76, 0) = ((MR_Box) (ml_backend__il_peephole__HeadVar__1_1));
#line 381 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_76_76, 1) = ((MR_Box) (ml_backend__il_peephole__V_79_79));
#line 381 "il_peephole.m"
                        }
#line 384 "il_peephole.m"
                        {
#line 384 "il_peephole.m"
                          ml_backend__il_peephole__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "il_peephole.m"
                          MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 384 "il_peephole.m"
                          MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_84_84, 1) = ((MR_Box) (ml_backend__il_peephole__Comment_38));
#line 384 "il_peephole.m"
                        }
#line 384 "il_peephole.m"
                        {
#line 384 "il_peephole.m"
                          ml_backend__il_peephole__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_83_83, 0) = ((MR_Box) (ml_backend__il_peephole__V_84_84));
#line 384 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_83_83, 1) = ((MR_Box) (ml_backend__il_peephole__V_85_85));
#line 384 "il_peephole.m"
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
#line 381 "il_peephole.m"
                        {
#line 381 "il_peephole.m"
                          ml_backend__il_peephole__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_75_75, 0) = ((MR_Box) (ml_backend__il_peephole__V_76_76));
#line 381 "il_peephole.m"
                          MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_75_75, 1) = ((MR_Box) (ml_backend__il_peephole__V_80_80));
#line 381 "il_peephole.m"
                        }
#line 381 "il_peephole.m"
                        {
#line 381 "il_peephole.m"
                          *ml_backend__il_peephole__Instrs_7 = mercury__list__condense_1_f_0(ml_backend__il_peephole__TypeCtorInfo_118_118, ml_backend__il_peephole__V_75_75);
                        }
#line 381 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = MR_TRUE;
#line 374 "il_peephole.m"
                      }
#line 320 "il_peephole.m"
                  }
#line 320 "il_peephole.m"
              }
#line 320 "il_peephole.m"
          }
#line 320 "il_peephole.m"
      }
#line 320 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 320 "il_peephole.m"
  }
#line 318 "il_peephole.m"
}

#line 228 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_4(
#line 228 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 228 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 228 "il_peephole.m"
{
#line 228 "il_peephole.m"
  {
#line 228 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 228 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 228 "il_peephole.m"
    {
#line 228 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match__228__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 228 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 228 "il_peephole.m"
  }
#line 228 "il_peephole.m"
}

#line 223 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_3(
#line 223 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 223 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 223 "il_peephole.m"
{
#line 223 "il_peephole.m"
  {
#line 223 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 223 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 223 "il_peephole.m"
    {
#line 223 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match__224__1_1_p_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 223 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 223 "il_peephole.m"
  }
#line 223 "il_peephole.m"
}

#line 283 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_2(
#line 283 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 283 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 283 "il_peephole.m"
{
#line 283 "il_peephole.m"
  {
#line 283 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 283 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 283 "il_peephole.m"
    {
#line 283 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match__283__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 283 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 283 "il_peephole.m"
  }
#line 283 "il_peephole.m"
}

#line 240 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0_1(
#line 240 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 240 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 240 "il_peephole.m"
{
#line 240 "il_peephole.m"
  {
#line 240 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 240 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;

#line 240 "il_peephole.m"
    {
#line 240 "il_peephole.m"
      return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__IntroducedFrom__pred__match__241__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 240 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 240 "il_peephole.m"
  }
#line 240 "il_peephole.m"
}

#line 211 "il_peephole.m"
static MR_bool MR_CALL 
ml_backend__il_peephole__match_4_p_0(
#line 211 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__1_1,
#line 211 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_2,
#line 211 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__3_3,
#line 211 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_4)
#line 211 "il_peephole.m"
{
#line 222 "il_peephole.m"
  {
#line 222 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 222 "il_peephole.m"
#line 222 "il_peephole.m"
    switch (MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__1_1)) {
#line 222 "il_peephole.m"
      default:
#line 222 "il_peephole.m"
        ml_backend__il_peephole__succeeded = MR_FALSE;
#line 222 "il_peephole.m"
        break;
#line 222 "il_peephole.m"
      case (MR_Integer) 0:
#line 222 "il_peephole.m"
#line 222 "il_peephole.m"
        switch (MR_unmkbody(ml_backend__il_peephole__HeadVar__1_1)) {
#line 222 "il_peephole.m"
          default:
#line 222 "il_peephole.m"
            ml_backend__il_peephole__succeeded = MR_FALSE;
#line 222 "il_peephole.m"
            break;
#line 222 "il_peephole.m"
          case (MR_Integer) 17:
#line 222 "il_peephole.m"
            {
#line 222 "il_peephole.m"
              MR_Word ml_backend__il_peephole__TypeCtorInfo_110_110 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 222 "il_peephole.m"
              MR_Word ml_backend__il_peephole__PreLabel_10;
#line 222 "il_peephole.m"
              MR_Word ml_backend__il_peephole__NextInstrs0_11;
#line 222 "il_peephole.m"
              MR_Word ml_backend__il_peephole__KeepInstrs_14;
#line 222 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_17_17;
#line 222 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_20_20;
#line 222 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_21_21;
#line 226 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_12_12;
#line 226 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_13_13;

#line 223 "il_peephole.m"
              {
#line 223 "il_peephole.m"
                mercury__list__takewhile_4_p_0(ml_backend__il_peephole__TypeCtorInfo_110_110, (MR_Word) &ml_backend__il_peephole_scalar_common_2[3], ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__PreLabel_10, &ml_backend__il_peephole__NextInstrs0_11);
              }
#line 226 "il_peephole.m"
              ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__PreLabel_10)) == (MR_mktag((MR_Integer) 1)));
#line 226 "il_peephole.m"
              if (ml_backend__il_peephole__succeeded)
#line 226 "il_peephole.m"
                {
#line 226 "il_peephole.m"
                  ml_backend__il_peephole__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__PreLabel_10, (MR_Integer) 0)));
#line 226 "il_peephole.m"
                  ml_backend__il_peephole__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__PreLabel_10, (MR_Integer) 1)));
#line 228 "il_peephole.m"
                  ml_backend__il_peephole__V_17_17 = (MR_Word) &ml_backend__il_peephole_scalar_common_2[4];
#line 228 "il_peephole.m"
                  {
#line 228 "il_peephole.m"
                    mercury__list__filter_3_p_0(ml_backend__il_peephole__TypeCtorInfo_110_110, ml_backend__il_peephole__V_17_17, ml_backend__il_peephole__PreLabel_10, &ml_backend__il_peephole__KeepInstrs_14);
                  }
#line 230 "il_peephole.m"
                  ml_backend__il_peephole__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__il_peephole_scalar_common_1[3]);
#line 231 "il_peephole.m"
                  {
#line 231 "il_peephole.m"
                    ml_backend__il_peephole__V_20_20 = mercury__list__f_43_43_2_f_0(ml_backend__il_peephole__TypeCtorInfo_110_110, ml_backend__il_peephole__V_21_21, ml_backend__il_peephole__NextInstrs0_11);
                  }
#line 230 "il_peephole.m"
                  {
#line 230 "il_peephole.m"
                    *ml_backend__il_peephole__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ml_backend__il_peephole__TypeCtorInfo_110_110, ml_backend__il_peephole__KeepInstrs_14, ml_backend__il_peephole__V_20_20);
                  }
#line 230 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = MR_TRUE;
#line 226 "il_peephole.m"
                }
#line 222 "il_peephole.m"
            }
#line 222 "il_peephole.m"
            break;
#line 222 "il_peephole.m"
        }
#line 222 "il_peephole.m"
        break;
#line 222 "il_peephole.m"
      case (MR_Integer) 3:
#line 222 "il_peephole.m"
#line 222 "il_peephole.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 0)))) {
#line 222 "il_peephole.m"
          default:
#line 222 "il_peephole.m"
            ml_backend__il_peephole__succeeded = MR_FALSE;
#line 222 "il_peephole.m"
            break;
#line 222 "il_peephole.m"
          case (MR_Integer) 21:
#line 300 "il_peephole.m"
            {
#line 300 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_103_103;
#line 300 "il_peephole.m"
              MR_Integer ml_backend__il_peephole__Id_98;
#line 300 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Locals_97;
#line 304 "il_peephole.m"
              MR_Word ml_backend__il_peephole__STATE_VARIABLE_Instrs_105_105;

#line 301 "il_peephole.m"
              ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__VerifyOnly_2 == (MR_Integer) 0);
#line 300 "il_peephole.m"
              if (ml_backend__il_peephole__succeeded)
#line 300 "il_peephole.m"
                {
#line 300 "il_peephole.m"
                  ml_backend__il_peephole__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 300 "il_peephole.m"
                  ml_backend__il_peephole__Id_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 2)));
#line 300 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_103_103)) == (MR_mktag((MR_Integer) 2)));
#line 300 "il_peephole.m"
                  if (ml_backend__il_peephole__succeeded)
#line 300 "il_peephole.m"
                    {
#line 300 "il_peephole.m"
                      ml_backend__il_peephole__Locals_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__V_103_103, (MR_Integer) 0)));
#line 302 "il_peephole.m"
                      {
#line 302 "il_peephole.m"
                        ml_backend__il_peephole__succeeded = ml_backend__il_peephole__match_start_scope_1_3_p_0(ml_backend__il_peephole__HeadVar__1_1, ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__STATE_VARIABLE_Instrs_105_105);
                      }
#line 304 "il_peephole.m"
                      if (ml_backend__il_peephole__succeeded)
#line 304 "il_peephole.m"
                        {
#line 304 "il_peephole.m"
                          *ml_backend__il_peephole__HeadVar__4_4 = ml_backend__il_peephole__STATE_VARIABLE_Instrs_105_105;
#line 304 "il_peephole.m"
                          ml_backend__il_peephole__succeeded = MR_TRUE;
#line 304 "il_peephole.m"
                        }
#line 304 "il_peephole.m"
                      else
#line 305 "il_peephole.m"
                        {
#line 305 "il_peephole.m"
                          return ml_backend__il_peephole__succeeded = ml_backend__il_peephole__match_start_scope_2_3_p_0(ml_backend__il_peephole__HeadVar__1_1, ml_backend__il_peephole__HeadVar__3_3, ml_backend__il_peephole__HeadVar__4_4);
                        }
#line 300 "il_peephole.m"
                    }
#line 300 "il_peephole.m"
                }
#line 300 "il_peephole.m"
            }
#line 222 "il_peephole.m"
            break;
#line 222 "il_peephole.m"
          case (MR_Integer) 32:
#line 238 "il_peephole.m"
            {
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__TypeCtorInfo_111_111;
#line 238 "il_peephole.m"
              MR_String ml_backend__il_peephole__Label_29;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__NextInstrs0_35;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__NextInstrs_36;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_39_39;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_40_40;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_41_41;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_43_43;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_44_44;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_45_45;
#line 238 "il_peephole.m"
              MR_String ml_backend__il_peephole__V_46_46;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_47_47;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_48_48;
#line 238 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_115_115;
#line 240 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_34_34;
#line 243 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_37_37;
#line 244 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_38_38;

#line 239 "il_peephole.m"
              ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__VerifyOnly_2 == (MR_Integer) 0);
#line 238 "il_peephole.m"
              if (ml_backend__il_peephole__succeeded)
#line 238 "il_peephole.m"
                {
#line 238 "il_peephole.m"
                  ml_backend__il_peephole__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 238 "il_peephole.m"
                  if (ml_backend__il_peephole__succeeded)
#line 238 "il_peephole.m"
                    {
#line 238 "il_peephole.m"
                      ml_backend__il_peephole__Label_29 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_39_39, (MR_Integer) 0)));
#line 5354 "ml_backend.il_peephole.c"
                      ml_backend__il_peephole__TypeCtorInfo_111_111 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 240 "il_peephole.m"
                      {
#line 240 "il_peephole.m"
                        ml_backend__il_peephole__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 240 "il_peephole.m"
                        MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[1]));
#line 240 "il_peephole.m"
                        MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 1) = ((MR_Box) (ml_backend__il_peephole__match_4_p_0_1));
#line 240 "il_peephole.m"
                        MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 240 "il_peephole.m"
                        MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 3) = ((MR_Box) (ml_backend__il_peephole__Label_29));
#line 240 "il_peephole.m"
                      }
#line 242 "il_peephole.m"
                      {
#line 242 "il_peephole.m"
                        ml_backend__il_peephole__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "il_peephole.m"
                        MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 242 "il_peephole.m"
                        MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_43_43, 1) = ((MR_Box) (ml_backend__il_peephole__Label_29));
#line 242 "il_peephole.m"
                      }
#line 240 "il_peephole.m"
                      {
#line 240 "il_peephole.m"
                        mercury__list__takewhile_4_p_0(ml_backend__il_peephole__TypeCtorInfo_111_111, ml_backend__il_peephole__V_40_40, ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__V_34_34, &ml_backend__il_peephole__V_41_41);
                      }
#line 242 "il_peephole.m"
                      ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 242 "il_peephole.m"
                      if (ml_backend__il_peephole__succeeded)
#line 242 "il_peephole.m"
                        {
#line 242 "il_peephole.m"
                          ml_backend__il_peephole__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_41_41, (MR_Integer) 0)));
#line 242 "il_peephole.m"
                          ml_backend__il_peephole__NextInstrs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_41_41, (MR_Integer) 1)));
#line 242 "il_peephole.m"
                          {
#line 242 "il_peephole.m"
                            ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____instr_0_0(ml_backend__il_peephole__V_43_43, ml_backend__il_peephole__V_115_115);
                          }
#line 238 "il_peephole.m"
                          if (ml_backend__il_peephole__succeeded)
#line 238 "il_peephole.m"
                            {
#line 243 "il_peephole.m"
                              {
#line 243 "il_peephole.m"
                                ml_backend__il_peephole__skip_nops_3_p_0(ml_backend__il_peephole__NextInstrs0_35, &ml_backend__il_peephole__NextInstrs_36, &ml_backend__il_peephole__V_37_37);
                              }
#line 244 "il_peephole.m"
                              ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__NextInstrs_36)) == (MR_mktag((MR_Integer) 1)));
#line 244 "il_peephole.m"
                              if (ml_backend__il_peephole__succeeded)
#line 244 "il_peephole.m"
                                {
#line 244 "il_peephole.m"
                                  ml_backend__il_peephole__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__NextInstrs_36, (MR_Integer) 0)));
#line 244 "il_peephole.m"
                                  ml_backend__il_peephole__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__NextInstrs_36, (MR_Integer) 1)));
#line 244 "il_peephole.m"
                                  ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 238 "il_peephole.m"
                                  if (ml_backend__il_peephole__succeeded)
#line 238 "il_peephole.m"
                                    {
#line 245 "il_peephole.m"
                                      ml_backend__il_peephole__V_46_46 = (MR_String) "peephole -- eliminated branch to ret";
#line 245 "il_peephole.m"
                                      ml_backend__il_peephole__V_48_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17));
#line 245 "il_peephole.m"
                                      ml_backend__il_peephole__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__il_peephole_scalar_common_1[4]);
#line 245 "il_peephole.m"
                                      {
#line 245 "il_peephole.m"
                                        ml_backend__il_peephole__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "il_peephole.m"
                                        MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_47_47, 0) = ((MR_Box) (ml_backend__il_peephole__V_48_48));
#line 245 "il_peephole.m"
                                        MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_47_47, 1) = ((MR_Box) (ml_backend__il_peephole__HeadVar__3_3));
#line 245 "il_peephole.m"
                                      }
#line 245 "il_peephole.m"
                                      {
#line 245 "il_peephole.m"
                                        MR_Word base;
#line 245 "il_peephole.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "il_peephole.m"
                                        *ml_backend__il_peephole__HeadVar__4_4 = base;
#line 245 "il_peephole.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__V_45_45));
#line 245 "il_peephole.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__V_47_47));
#line 245 "il_peephole.m"
                                      }
#line 245 "il_peephole.m"
                                      ml_backend__il_peephole__succeeded = MR_TRUE;
#line 238 "il_peephole.m"
                                    }
#line 244 "il_peephole.m"
                                }
#line 238 "il_peephole.m"
                            }
#line 242 "il_peephole.m"
                        }
#line 238 "il_peephole.m"
                    }
#line 238 "il_peephole.m"
                }
#line 238 "il_peephole.m"
            }
#line 222 "il_peephole.m"
            break;
#line 222 "il_peephole.m"
          case (MR_Integer) 43:
#line 280 "il_peephole.m"
            {
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__TypeCtorInfo_113_113;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Var_70;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Instrs0_71;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__PreLdInstrs_76;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Rest_77;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Comment_78;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Replacement_79;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_80_80;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_81_81;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_82_82;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_86_86;
#line 280 "il_peephole.m"
              MR_String ml_backend__il_peephole__V_87_87;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_88_88;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_89_89;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_91_91;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_92_92;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_93_93;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_95_95;
#line 280 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_119_119;

#line 281 "il_peephole.m"
              ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__VerifyOnly_2 == (MR_Integer) 0);
#line 280 "il_peephole.m"
              if (ml_backend__il_peephole__succeeded)
#line 280 "il_peephole.m"
                {
#line 280 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 280 "il_peephole.m"
                  if (ml_backend__il_peephole__succeeded)
#line 280 "il_peephole.m"
                    {
#line 280 "il_peephole.m"
                      ml_backend__il_peephole__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__3_3, (MR_Integer) 0)));
#line 280 "il_peephole.m"
                      ml_backend__il_peephole__Instrs0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__3_3, (MR_Integer) 1)));
#line 280 "il_peephole.m"
                      ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__V_80_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_80_80, (MR_Integer) 0)))) == (MR_Integer) 54)));
#line 280 "il_peephole.m"
                      if (ml_backend__il_peephole__succeeded)
#line 280 "il_peephole.m"
                        {
#line 280 "il_peephole.m"
                          ml_backend__il_peephole__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_80_80, (MR_Integer) 1)));
#line 5540 "ml_backend.il_peephole.c"
                          ml_backend__il_peephole__TypeCtorInfo_113_113 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 283 "il_peephole.m"
                          {
#line 283 "il_peephole.m"
                            ml_backend__il_peephole__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 283 "il_peephole.m"
                            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_81_81, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_4[2]));
#line 283 "il_peephole.m"
                            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_81_81, 1) = ((MR_Box) (ml_backend__il_peephole__match_4_p_0_2));
#line 283 "il_peephole.m"
                            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 283 "il_peephole.m"
                            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_81_81, 3) = ((MR_Box) (ml_backend__il_peephole__Var_70));
#line 283 "il_peephole.m"
                          }
#line 290 "il_peephole.m"
                          {
#line 290 "il_peephole.m"
                            ml_backend__il_peephole__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "il_peephole.m"
                            MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 46));
#line 290 "il_peephole.m"
                            MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_86_86, 1) = ((MR_Box) (ml_backend__il_peephole__Var_70));
#line 290 "il_peephole.m"
                          }
#line 283 "il_peephole.m"
                          {
#line 283 "il_peephole.m"
                            mercury__list__takewhile_4_p_0(ml_backend__il_peephole__TypeCtorInfo_113_113, ml_backend__il_peephole__V_81_81, ml_backend__il_peephole__Instrs0_71, &ml_backend__il_peephole__PreLdInstrs_76, &ml_backend__il_peephole__V_82_82);
                          }
#line 290 "il_peephole.m"
                          ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 290 "il_peephole.m"
                          if (ml_backend__il_peephole__succeeded)
#line 290 "il_peephole.m"
                            {
#line 290 "il_peephole.m"
                              ml_backend__il_peephole__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_82_82, (MR_Integer) 0)));
#line 290 "il_peephole.m"
                              ml_backend__il_peephole__Rest_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_82_82, (MR_Integer) 1)));
#line 290 "il_peephole.m"
                              {
#line 290 "il_peephole.m"
                                ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____instr_0_0(ml_backend__il_peephole__V_86_86, ml_backend__il_peephole__V_119_119);
                              }
#line 280 "il_peephole.m"
                              if (ml_backend__il_peephole__succeeded)
#line 280 "il_peephole.m"
                                {
#line 294 "il_peephole.m"
                                  ml_backend__il_peephole__V_87_87 = (MR_String) "peephole: ldc(X), stloc(X), ldloc(X) --> ldc(X), dup, stloc(X)";
#line 295 "il_peephole.m"
                                  ml_backend__il_peephole__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 295 "il_peephole.m"
                                  ml_backend__il_peephole__V_95_95 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 293 "il_peephole.m"
                                  ml_backend__il_peephole__Comment_78 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__il_peephole_scalar_common_1[5]);
#line 295 "il_peephole.m"
                                  {
#line 295 "il_peephole.m"
                                    ml_backend__il_peephole__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_93_93, 0) = ((MR_Box) (ml_backend__il_peephole__V_80_80));
#line 295 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_93_93, 1) = ((MR_Box) (ml_backend__il_peephole__V_95_95));
#line 295 "il_peephole.m"
                                  }
#line 295 "il_peephole.m"
                                  {
#line 295 "il_peephole.m"
                                    ml_backend__il_peephole__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_91_91, 0) = ((MR_Box) (ml_backend__il_peephole__V_92_92));
#line 295 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_91_91, 1) = ((MR_Box) (ml_backend__il_peephole__V_93_93));
#line 295 "il_peephole.m"
                                  }
#line 295 "il_peephole.m"
                                  {
#line 295 "il_peephole.m"
                                    ml_backend__il_peephole__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_89_89, 0) = ((MR_Box) (ml_backend__il_peephole__HeadVar__1_1));
#line 295 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_89_89, 1) = ((MR_Box) (ml_backend__il_peephole__V_91_91));
#line 295 "il_peephole.m"
                                  }
#line 295 "il_peephole.m"
                                  {
#line 295 "il_peephole.m"
                                    ml_backend__il_peephole__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_88_88, 0) = ((MR_Box) (ml_backend__il_peephole__Comment_78));
#line 295 "il_peephole.m"
                                    MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_88_88, 1) = ((MR_Box) (ml_backend__il_peephole__V_89_89));
#line 295 "il_peephole.m"
                                  }
#line 295 "il_peephole.m"
                                  {
#line 295 "il_peephole.m"
                                    ml_backend__il_peephole__Replacement_79 = mercury__list__f_43_43_2_f_0(ml_backend__il_peephole__TypeCtorInfo_113_113, ml_backend__il_peephole__PreLdInstrs_76, ml_backend__il_peephole__V_88_88);
                                  }
#line 296 "il_peephole.m"
                                  {
#line 296 "il_peephole.m"
                                    *ml_backend__il_peephole__HeadVar__4_4 = mercury__list__append_2_f_0(ml_backend__il_peephole__TypeCtorInfo_113_113, ml_backend__il_peephole__Replacement_79, ml_backend__il_peephole__Rest_77);
                                  }
#line 296 "il_peephole.m"
                                  ml_backend__il_peephole__succeeded = MR_TRUE;
#line 280 "il_peephole.m"
                                }
#line 290 "il_peephole.m"
                            }
#line 280 "il_peephole.m"
                        }
#line 280 "il_peephole.m"
                    }
#line 280 "il_peephole.m"
                }
#line 280 "il_peephole.m"
            }
#line 222 "il_peephole.m"
            break;
#line 222 "il_peephole.m"
          case (MR_Integer) 54:
#line 258 "il_peephole.m"
            {
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__TypeCtorInfo_112_112;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Var_50;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Instrs1_54;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Nops_55;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Rest_56;
#line 258 "il_peephole.m"
              MR_String ml_backend__il_peephole__Comment_57;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__Replacement_58;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_59_59;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_60_60;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_61_61;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_62_62;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_64_64;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_65_65;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_66_66;
#line 258 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_116_116;

#line 259 "il_peephole.m"
              ml_backend__il_peephole__succeeded = (ml_backend__il_peephole__VerifyOnly_2 == (MR_Integer) 0);
#line 258 "il_peephole.m"
              if (ml_backend__il_peephole__succeeded)
#line 258 "il_peephole.m"
                {
#line 258 "il_peephole.m"
                  ml_backend__il_peephole__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "il_peephole.m"
                  {
#line 261 "il_peephole.m"
                    ml_backend__il_peephole__skip_nops_3_p_0(ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__Instrs1_54, &ml_backend__il_peephole__Nops_55);
                  }
#line 262 "il_peephole.m"
                  ml_backend__il_peephole__succeeded = ((MR_tag((MR_Word) ml_backend__il_peephole__Instrs1_54)) == (MR_mktag((MR_Integer) 1)));
#line 262 "il_peephole.m"
                  if (ml_backend__il_peephole__succeeded)
#line 262 "il_peephole.m"
                    {
#line 262 "il_peephole.m"
                      ml_backend__il_peephole__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Instrs1_54, (MR_Integer) 0)));
#line 262 "il_peephole.m"
                      ml_backend__il_peephole__Rest_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Instrs1_54, (MR_Integer) 1)));
#line 262 "il_peephole.m"
                      ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__V_59_59)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_59_59, (MR_Integer) 0)))) == (MR_Integer) 46)));
#line 262 "il_peephole.m"
                      if (ml_backend__il_peephole__succeeded)
#line 262 "il_peephole.m"
                        {
#line 262 "il_peephole.m"
                          ml_backend__il_peephole__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__V_59_59, (MR_Integer) 1)));
#line 262 "il_peephole.m"
                          {
#line 262 "il_peephole.m"
                            ml_backend__il_peephole__succeeded = ml_backend__ilds____Unify____variable_0_0(ml_backend__il_peephole__Var_50, ml_backend__il_peephole__V_116_116);
                          }
#line 258 "il_peephole.m"
                          if (ml_backend__il_peephole__succeeded)
#line 258 "il_peephole.m"
                            {
#line 264 "il_peephole.m"
                              ml_backend__il_peephole__Comment_57 = (MR_String) "peephole: stloc(X), ldloc(X) --> dup, stloc(X)";
#line 5741 "ml_backend.il_peephole.c"
                              ml_backend__il_peephole__TypeCtorInfo_112_112 = (MR_Word) &ml_backend__ilds__ml_backend__ilds__type_ctor_info_instr_0;
#line 265 "il_peephole.m"
                              ml_backend__il_peephole__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 265 "il_peephole.m"
                              ml_backend__il_peephole__V_64_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "il_peephole.m"
                              {
#line 265 "il_peephole.m"
                                ml_backend__il_peephole__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "il_peephole.m"
                                MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_60_60, 0) = ((MR_Box) (ml_backend__il_peephole__V_61_61));
#line 265 "il_peephole.m"
                                MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_60_60, 1) = ((MR_Box) (ml_backend__il_peephole__Nops_55));
#line 265 "il_peephole.m"
                              }
#line 265 "il_peephole.m"
                              {
#line 265 "il_peephole.m"
                                ml_backend__il_peephole__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "il_peephole.m"
                                MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_62_62, 0) = ((MR_Box) (ml_backend__il_peephole__HeadVar__1_1));
#line 265 "il_peephole.m"
                                MR_hl_field(MR_mktag(1), ml_backend__il_peephole__V_62_62, 1) = ((MR_Box) (ml_backend__il_peephole__V_64_64));
#line 265 "il_peephole.m"
                              }
#line 265 "il_peephole.m"
                              {
#line 265 "il_peephole.m"
                                ml_backend__il_peephole__Replacement_58 = mercury__list__append_2_f_0(ml_backend__il_peephole__TypeCtorInfo_112_112, ml_backend__il_peephole__V_60_60, ml_backend__il_peephole__V_62_62);
                              }
#line 266 "il_peephole.m"
                              ml_backend__il_peephole__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__il_peephole_scalar_common_1[6]);
#line 266 "il_peephole.m"
                              {
#line 266 "il_peephole.m"
                                ml_backend__il_peephole__V_66_66 = mercury__list__append_2_f_0(ml_backend__il_peephole__TypeCtorInfo_112_112, ml_backend__il_peephole__Replacement_58, ml_backend__il_peephole__Rest_56);
                              }
#line 266 "il_peephole.m"
                              {
#line 266 "il_peephole.m"
                                MR_Word base;
#line 266 "il_peephole.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "il_peephole.m"
                                *ml_backend__il_peephole__HeadVar__4_4 = base;
#line 266 "il_peephole.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__V_65_65));
#line 266 "il_peephole.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__V_66_66));
#line 266 "il_peephole.m"
                              }
#line 266 "il_peephole.m"
                              ml_backend__il_peephole__succeeded = MR_TRUE;
#line 258 "il_peephole.m"
                            }
#line 262 "il_peephole.m"
                        }
#line 262 "il_peephole.m"
                    }
#line 258 "il_peephole.m"
                }
#line 258 "il_peephole.m"
            }
#line 222 "il_peephole.m"
            break;
#line 222 "il_peephole.m"
        }
#line 222 "il_peephole.m"
        break;
#line 222 "il_peephole.m"
    }
#line 222 "il_peephole.m"
    return ml_backend__il_peephole__succeeded;
#line 222 "il_peephole.m"
  }
#line 211 "il_peephole.m"
}

#line 187 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__opt_instr_5_p_0(
#line 187 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 187 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instr0_7,
#line 187 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Instrs0_8,
#line 187 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Instrs_9,
#line 187 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Mod_10)
#line 187 "il_peephole.m"
{
#line 200 "il_peephole.m"
  {
#line 200 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 200 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Instrs2_11;

#line 191 "il_peephole.m"
    {
#line 191 "il_peephole.m"
      ml_backend__il_peephole__succeeded = ml_backend__il_peephole__match_4_p_0(ml_backend__il_peephole__Instr0_7, ml_backend__il_peephole__VerifyOnly_6, ml_backend__il_peephole__Instrs0_8, &ml_backend__il_peephole__Instrs2_11);
    }
#line 200 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 198 "il_peephole.m"
      {
#line 195 "il_peephole.m"
        if ((ml_backend__il_peephole__Instrs2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "il_peephole.m"
          *ml_backend__il_peephole__Instrs_9 = ml_backend__il_peephole__Instrs2_11;
#line 195 "il_peephole.m"
        else
#line 193 "il_peephole.m"
          {
#line 193 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instr2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Instrs2_11, (MR_Integer) 0)));
#line 193 "il_peephole.m"
            MR_Word ml_backend__il_peephole__Instrs3_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Instrs2_11, (MR_Integer) 1)));
#line 194 "il_peephole.m"
            MR_Word ml_backend__il_peephole__V_14_14;

#line 194 "il_peephole.m"
            {
#line 194 "il_peephole.m"
              ml_backend__il_peephole__opt_instr_5_p_0(ml_backend__il_peephole__VerifyOnly_6, ml_backend__il_peephole__Instr2_12, ml_backend__il_peephole__Instrs3_13, ml_backend__il_peephole__Instrs_9, &ml_backend__il_peephole__V_14_14);
            }
#line 193 "il_peephole.m"
          }
#line 199 "il_peephole.m"
        *ml_backend__il_peephole__Mod_10 = (MR_Integer) 1;
#line 198 "il_peephole.m"
      }
#line 200 "il_peephole.m"
    else
#line 201 "il_peephole.m"
      {
#line 201 "il_peephole.m"
        {
#line 201 "il_peephole.m"
          MR_Word base;
#line 201 "il_peephole.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "il_peephole.m"
          *ml_backend__il_peephole__Instrs_9 = base;
#line 201 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__Instr0_7));
#line 201 "il_peephole.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__Instrs0_8));
#line 201 "il_peephole.m"
        }
#line 202 "il_peephole.m"
        *ml_backend__il_peephole__Mod_10 = (MR_Integer) 0;
#line 201 "il_peephole.m"
      }
#line 200 "il_peephole.m"
  }
#line 187 "il_peephole.m"
}

#line 176 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_2_4_p_0(
#line 176 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_1,
#line 176 "il_peephole.m"
  MR_Word ml_backend__il_peephole__HeadVar__2_2,
#line 176 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__3_3,
#line 176 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__HeadVar__4_4)
#line 176 "il_peephole.m"
{
#line 178 "il_peephole.m"
  {
#line 178 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 178 "il_peephole.m"
    if ((ml_backend__il_peephole__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "il_peephole.m"
      {
#line 178 "il_peephole.m"
        *ml_backend__il_peephole__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "il_peephole.m"
        *ml_backend__il_peephole__HeadVar__4_4 = (MR_Integer) 0;
#line 178 "il_peephole.m"
      }
#line 178 "il_peephole.m"
    else
#line 179 "il_peephole.m"
      {
#line 179 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__2_2, (MR_Integer) 0)));
#line 179 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__HeadVar__2_2, (MR_Integer) 1)));
#line 179 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Instrs1_11;
#line 179 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Mod0_12;
#line 179 "il_peephole.m"
        MR_Word ml_backend__il_peephole__Mod1_13;

#line 180 "il_peephole.m"
        {
#line 180 "il_peephole.m"
          ml_backend__il_peephole__optimize_2_4_p_0(ml_backend__il_peephole__VerifyOnly_1, ml_backend__il_peephole__Instrs0_8, &ml_backend__il_peephole__Instrs1_11, &ml_backend__il_peephole__Mod0_12);
        }
#line 181 "il_peephole.m"
        {
#line 181 "il_peephole.m"
          ml_backend__il_peephole__opt_instr_5_p_0(ml_backend__il_peephole__VerifyOnly_1, ml_backend__il_peephole__Instr0_7, ml_backend__il_peephole__Instrs1_11, ml_backend__il_peephole__HeadVar__3_3, &ml_backend__il_peephole__Mod1_13);
        }
#line 182 "il_peephole.m"
        {
#line 182 "il_peephole.m"
          mercury__bool__or_3_p_0(ml_backend__il_peephole__Mod0_12, ml_backend__il_peephole__Mod1_13, ml_backend__il_peephole__HeadVar__4_4);
#line 182 "il_peephole.m"
          return;
        }
#line 179 "il_peephole.m"
      }
#line 178 "il_peephole.m"
  }
#line 176 "il_peephole.m"
}

#line 158 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_method_decl_5_p_0(
#line 158 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 158 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decl0_7,
#line 158 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decl_8,
#line 158 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_13,
#line 158 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_14)
#line 158 "il_peephole.m"
{
#line 167 "il_peephole.m"
  {
#line 167 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded = ((((MR_tag((MR_Word) ml_backend__il_peephole__Decl0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 167 "il_peephole.m"
    MR_Word ml_backend__il_peephole__Instrs0_10;

#line 163 "il_peephole.m"
    if (ml_backend__il_peephole__succeeded)
#line 163 "il_peephole.m"
      {
#line 163 "il_peephole.m"
        ml_backend__il_peephole__Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 1)));
#line 164 "il_peephole.m"
        {
#line 164 "il_peephole.m"
          MR_Word ml_backend__il_peephole__Instrs_11;
#line 164 "il_peephole.m"
          MR_Word ml_backend__il_peephole__InstrsMod_12;

#line 174 "il_peephole.m"
          {
#line 174 "il_peephole.m"
            ml_backend__il_peephole__optimize_2_4_p_0(ml_backend__il_peephole__VerifyOnly_6, ml_backend__il_peephole__Instrs0_10, &ml_backend__il_peephole__Instrs_11, &ml_backend__il_peephole__InstrsMod_12);
          }
#line 165 "il_peephole.m"
          {
#line 165 "il_peephole.m"
            mercury__bool__or_3_p_0(ml_backend__il_peephole__InstrsMod_12, ml_backend__il_peephole__STATE_VARIABLE_Mod_0_13, ml_backend__il_peephole__STATE_VARIABLE_Mod_14);
          }
#line 166 "il_peephole.m"
          {
#line 166 "il_peephole.m"
            MR_Word base;
#line 166 "il_peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "il_peephole.m"
            *ml_backend__il_peephole__Decl_8 = base;
#line 166 "il_peephole.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 166 "il_peephole.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__il_peephole__Instrs_11));
#line 166 "il_peephole.m"
          }
#line 164 "il_peephole.m"
        }
#line 163 "il_peephole.m"
      }
#line 163 "il_peephole.m"
    else
#line 168 "il_peephole.m"
      {
#line 168 "il_peephole.m"
        *ml_backend__il_peephole__Decl_8 = ml_backend__il_peephole__Decl0_7;
#line 168 "il_peephole.m"
        *ml_backend__il_peephole__STATE_VARIABLE_Mod_14 = ml_backend__il_peephole__STATE_VARIABLE_Mod_0_13;
#line 168 "il_peephole.m"
      }
#line 167 "il_peephole.m"
  }
#line 158 "il_peephole.m"
}

#line 135 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_4(
#line 135 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 135 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 135 "il_peephole.m"
{
#line 135 "il_peephole.m"
  {
#line 135 "il_peephole.m"
    MR_Box ml_backend__il_peephole__wrapper_arg_2;
#line 135 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 135 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv6_HeadVar__3_53;

#line 135 "il_peephole.m"
    {
#line 135 "il_peephole.m"
      ml_backend__il_peephole__conv6_HeadVar__3_53 = ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__135__1_2_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 135 "il_peephole.m"
    ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv6_HeadVar__3_53));
#line 135 "il_peephole.m"
    return ml_backend__il_peephole__wrapper_arg_2;
#line 135 "il_peephole.m"
  }
#line 135 "il_peephole.m"
}

#line 133 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_3(
#line 133 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 133 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 133 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_2)
#line 133 "il_peephole.m"
{
#line 133 "il_peephole.m"
  {
#line 133 "il_peephole.m"
    MR_Box ml_backend__il_peephole__wrapper_arg_3;
#line 133 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 133 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__conv4_HeadVar__3_3;

#line 133 "il_peephole.m"
    {
#line 133 "il_peephole.m"
      ml_backend__il_peephole__conv4_HeadVar__3_3 = mercury__int__f_plus_2_f_0(((MR_Integer) ml_backend__il_peephole__wrapper_arg_1), ((MR_Integer) ml_backend__il_peephole__wrapper_arg_2));
    }
#line 133 "il_peephole.m"
    ml_backend__il_peephole__wrapper_arg_3 = ((MR_Box) (ml_backend__il_peephole__conv4_HeadVar__3_3));
#line 133 "il_peephole.m"
    return ml_backend__il_peephole__wrapper_arg_3;
#line 133 "il_peephole.m"
  }
#line 133 "il_peephole.m"
}

#line 128 "il_peephole.m"
static MR_Box MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_2(
#line 128 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 128 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1)
#line 128 "il_peephole.m"
{
#line 128 "il_peephole.m"
  {
#line 128 "il_peephole.m"
    MR_Box ml_backend__il_peephole__wrapper_arg_2;
#line 128 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 128 "il_peephole.m"
    MR_Integer ml_backend__il_peephole__conv3_HeadVar__2_45;

#line 128 "il_peephole.m"
    {
#line 128 "il_peephole.m"
      ml_backend__il_peephole__conv3_HeadVar__2_45 = ml_backend__il_peephole__IntroducedFrom__func__optimize_class_member__128__1_1_f_0(((MR_Word) ml_backend__il_peephole__wrapper_arg_1));
    }
#line 128 "il_peephole.m"
    ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv3_HeadVar__2_45));
#line 128 "il_peephole.m"
    return ml_backend__il_peephole__wrapper_arg_2;
#line 128 "il_peephole.m"
  }
#line 128 "il_peephole.m"
}

#line 123 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0_1(
#line 123 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 123 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 123 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 123 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 123 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 123 "il_peephole.m"
{
#line 123 "il_peephole.m"
  {
#line 123 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 123 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv1_Decl_8;
#line 123 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_14;

#line 123 "il_peephole.m"
    {
#line 123 "il_peephole.m"
      ml_backend__il_peephole__optimize_method_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv1_Decl_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_14);
    }
#line 123 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv1_Decl_8));
#line 123 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_14));
#line 123 "il_peephole.m"
  }
#line 123 "il_peephole.m"
}

#line 117 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_class_member_5_p_0(
#line 117 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 117 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Member0_7,
#line 117 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Member_8,
#line 117 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_38,
#line 117 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_39)
#line 117 "il_peephole.m"
{
#line 122 "il_peephole.m"
  {
#line 122 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 122 "il_peephole.m"
#line 122 "il_peephole.m"
    switch (MR_tag((MR_Word) ml_backend__il_peephole__Member0_7)) {
#line 122 "il_peephole.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 122 "il_peephole.m"
      case (MR_Integer) 0:
#line 153 "il_peephole.m"
        {
#line 154 "il_peephole.m"
          *ml_backend__il_peephole__STATE_VARIABLE_Mod_39 = (MR_Integer) 0;
#line 155 "il_peephole.m"
          *ml_backend__il_peephole__Member_8 = ml_backend__il_peephole__Member0_7;
#line 153 "il_peephole.m"
        }
#line 122 "il_peephole.m"
        break;
#line 122 "il_peephole.m"
      case (MR_Integer) 1:
#line 122 "il_peephole.m"
        {
#line 122 "il_peephole.m"
          MR_Word ml_backend__il_peephole__TypeCtorInfo_63_63;
#line 122 "il_peephole.m"
          MR_Word ml_backend__il_peephole__MethodHead_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Member0_7, (MR_Integer) 0)));
#line 122 "il_peephole.m"
          MR_Word ml_backend__il_peephole__MethodDecls0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Member0_7, (MR_Integer) 1)));
#line 122 "il_peephole.m"
          MR_Word ml_backend__il_peephole__MethodDecls1_12;
#line 122 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_41_41;
#line 123 "il_peephole.m"
          MR_Box ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_39;

#line 123 "il_peephole.m"
          {
#line 123 "il_peephole.m"
            ml_backend__il_peephole__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 123 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[2]));
#line 123 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_class_member_5_p_0_1));
#line 123 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 123 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_41_41, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_6));
#line 123 "il_peephole.m"
          }
#line 6253 "ml_backend.il_peephole.c"
          ml_backend__il_peephole__TypeCtorInfo_63_63 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0;
#line 123 "il_peephole.m"
          {
#line 123 "il_peephole.m"
            mercury__list__map_foldl_5_p_0(ml_backend__il_peephole__TypeCtorInfo_63_63, ml_backend__il_peephole__TypeCtorInfo_63_63, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_41_41, ml_backend__il_peephole__MethodDecls0_11, &ml_backend__il_peephole__MethodDecls1_12, ((MR_Box) (ml_backend__il_peephole__STATE_VARIABLE_Mod_0_38)), &ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_39);
          }
#line 123 "il_peephole.m"
          *ml_backend__il_peephole__STATE_VARIABLE_Mod_39 = ((MR_Word) ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_39);
#line 141 "il_peephole.m"
#line 141 "il_peephole.m"
          switch (*ml_backend__il_peephole__STATE_VARIABLE_Mod_39) {
#line 141 "il_peephole.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 141 "il_peephole.m"
            case (MR_Integer) 0:
#line 143 "il_peephole.m"
              {
#line 143 "il_peephole.m"
                MR_Word base;
#line 143 "il_peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "il_peephole.m"
                *ml_backend__il_peephole__Member_8 = base;
#line 143 "il_peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__MethodHead_10));
#line 143 "il_peephole.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__MethodDecls1_12));
#line 143 "il_peephole.m"
              }
#line 141 "il_peephole.m"
              break;
#line 141 "il_peephole.m"
            case (MR_Integer) 1:
#line 126 "il_peephole.m"
              {
#line 126 "il_peephole.m"
                MR_Word ml_backend__il_peephole__TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 126 "il_peephole.m"
                MR_Word ml_backend__il_peephole__MaxStacks_13;
#line 126 "il_peephole.m"
                MR_Integer ml_backend__il_peephole__NewMaxStack_16;
#line 126 "il_peephole.m"
                MR_Word ml_backend__il_peephole__MethodDecls_18;
#line 126 "il_peephole.m"
                MR_Word ml_backend__il_peephole__V_51_51;
#line 133 "il_peephole.m"
                MR_Box ml_backend__il_peephole__conv5_NewMaxStack_16;

#line 128 "il_peephole.m"
                {
#line 128 "il_peephole.m"
                  ml_backend__il_peephole__MaxStacks_13 = mercury__list__map_2_f_0(ml_backend__il_peephole__TypeCtorInfo_63_63, ml_backend__il_peephole__TypeCtorInfo_65_65, (MR_Word) &ml_backend__il_peephole_scalar_common_2[1], ml_backend__il_peephole__MethodDecls1_12);
                }
#line 133 "il_peephole.m"
                {
#line 133 "il_peephole.m"
                  ml_backend__il_peephole__conv5_NewMaxStack_16 = mercury__list__foldl_3_f_0(ml_backend__il_peephole__TypeCtorInfo_65_65, ml_backend__il_peephole__TypeCtorInfo_65_65, (MR_Word) &ml_backend__il_peephole_scalar_common_2[2], ml_backend__il_peephole__MaxStacks_13, ((MR_Box) ((MR_Integer) 0)));
                }
#line 133 "il_peephole.m"
                ml_backend__il_peephole__NewMaxStack_16 = ((MR_Integer) ml_backend__il_peephole__conv5_NewMaxStack_16);
#line 135 "il_peephole.m"
                {
#line 135 "il_peephole.m"
                  ml_backend__il_peephole__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 135 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_51_51, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_5[1]));
#line 135 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_51_51, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_class_member_5_p_0_4));
#line 135 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 135 "il_peephole.m"
                  MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_51_51, 3) = ((MR_Box) (ml_backend__il_peephole__NewMaxStack_16));
#line 135 "il_peephole.m"
                }
#line 135 "il_peephole.m"
                {
#line 135 "il_peephole.m"
                  ml_backend__il_peephole__MethodDecls_18 = mercury__list__map_2_f_0(ml_backend__il_peephole__TypeCtorInfo_63_63, ml_backend__il_peephole__TypeCtorInfo_63_63, ml_backend__il_peephole__V_51_51, ml_backend__il_peephole__MethodDecls1_12);
                }
#line 140 "il_peephole.m"
                {
#line 140 "il_peephole.m"
                  MR_Word base;
#line 140 "il_peephole.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "il_peephole.m"
                  *ml_backend__il_peephole__Member_8 = base;
#line 140 "il_peephole.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__MethodHead_10));
#line 140 "il_peephole.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__MethodDecls_18));
#line 140 "il_peephole.m"
                }
#line 126 "il_peephole.m"
              }
#line 141 "il_peephole.m"
              break;
#line 141 "il_peephole.m"
          }
#line 122 "il_peephole.m"
        }
#line 122 "il_peephole.m"
        break;
#line 122 "il_peephole.m"
      case (MR_Integer) 2:
#line 153 "il_peephole.m"
        {
#line 154 "il_peephole.m"
          *ml_backend__il_peephole__STATE_VARIABLE_Mod_39 = (MR_Integer) 0;
#line 155 "il_peephole.m"
          *ml_backend__il_peephole__Member_8 = ml_backend__il_peephole__Member0_7;
#line 153 "il_peephole.m"
        }
#line 122 "il_peephole.m"
        break;
#line 122 "il_peephole.m"
      case (MR_Integer) 3:
#line 153 "il_peephole.m"
        {
#line 154 "il_peephole.m"
          *ml_backend__il_peephole__STATE_VARIABLE_Mod_39 = (MR_Integer) 0;
#line 155 "il_peephole.m"
          *ml_backend__il_peephole__Member_8 = ml_backend__il_peephole__Member0_7;
#line 153 "il_peephole.m"
        }
#line 122 "il_peephole.m"
        break;
#line 122 "il_peephole.m"
    }
#line 122 "il_peephole.m"
  }
#line 117 "il_peephole.m"
}

#line 95 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_3(
#line 95 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 95 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 95 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 95 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 95 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 95 "il_peephole.m"
{
#line 95 "il_peephole.m"
  {
#line 95 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 95 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv7_Decl_8;
#line 95 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv6_STATE_VARIABLE_Mod_35;

#line 95 "il_peephole.m"
    {
#line 95 "il_peephole.m"
      ml_backend__il_peephole__optimize_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv7_Decl_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv6_STATE_VARIABLE_Mod_35);
    }
#line 95 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv7_Decl_8));
#line 95 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv6_STATE_VARIABLE_Mod_35));
#line 95 "il_peephole.m"
  }
#line 95 "il_peephole.m"
}

#line 100 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_2(
#line 100 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 100 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 100 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 100 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 100 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 100 "il_peephole.m"
{
#line 100 "il_peephole.m"
  {
#line 100 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 100 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv4_Decl_8;
#line 100 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv3_STATE_VARIABLE_Mod_14;

#line 100 "il_peephole.m"
    {
#line 100 "il_peephole.m"
      ml_backend__il_peephole__optimize_method_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv4_Decl_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv3_STATE_VARIABLE_Mod_14);
    }
#line 100 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv4_Decl_8));
#line 100 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv3_STATE_VARIABLE_Mod_14));
#line 100 "il_peephole.m"
  }
#line 100 "il_peephole.m"
}

#line 89 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0_1(
#line 89 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 89 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 89 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 89 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 89 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 89 "il_peephole.m"
{
#line 89 "il_peephole.m"
  {
#line 89 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 89 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv1_Member_8;
#line 89 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_39;

#line 89 "il_peephole.m"
    {
#line 89 "il_peephole.m"
      ml_backend__il_peephole__optimize_class_member_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv1_Member_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_39);
    }
#line 89 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv1_Member_8));
#line 89 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_39));
#line 89 "il_peephole.m"
  }
#line 89 "il_peephole.m"
}

#line 82 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__optimize_decl_5_p_0(
#line 82 "il_peephole.m"
  MR_Word ml_backend__il_peephole__VerifyOnly_6,
#line 82 "il_peephole.m"
  MR_Word ml_backend__il_peephole__Decl0_7,
#line 82 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__Decl_8,
#line 82 "il_peephole.m"
  MR_Word ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34,
#line 82 "il_peephole.m"
  MR_Word * ml_backend__il_peephole__STATE_VARIABLE_Mod_35)
#line 82 "il_peephole.m"
{
#line 88 "il_peephole.m"
  {
#line 88 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;

#line 88 "il_peephole.m"
#line 88 "il_peephole.m"
    switch (MR_tag((MR_Word) ml_backend__il_peephole__Decl0_7)) {
#line 88 "il_peephole.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 88 "il_peephole.m"
      case (MR_Integer) 0:
#line 113 "il_peephole.m"
        {
#line 114 "il_peephole.m"
          *ml_backend__il_peephole__Decl_8 = ml_backend__il_peephole__Decl0_7;
#line 113 "il_peephole.m"
          *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34;
#line 113 "il_peephole.m"
        }
#line 88 "il_peephole.m"
        break;
#line 88 "il_peephole.m"
      case (MR_Integer) 1:
#line 88 "il_peephole.m"
        {
#line 88 "il_peephole.m"
          MR_Word ml_backend__il_peephole__TypeCtorInfo_46_46;
#line 88 "il_peephole.m"
          MR_Word ml_backend__il_peephole__ClassAttrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 0)));
#line 88 "il_peephole.m"
          MR_String ml_backend__il_peephole__ClassId_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 1)));
#line 88 "il_peephole.m"
          MR_Word ml_backend__il_peephole__ParentClass_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 2)));
#line 88 "il_peephole.m"
          MR_Word ml_backend__il_peephole__Implements_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 3)));
#line 88 "il_peephole.m"
          MR_Word ml_backend__il_peephole__ClassMembers0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__il_peephole__Decl0_7, (MR_Integer) 4)));
#line 88 "il_peephole.m"
          MR_Word ml_backend__il_peephole__ClassMembers_15;
#line 88 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_40_40;
#line 89 "il_peephole.m"
          MR_Box ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_35;

#line 89 "il_peephole.m"
          {
#line 89 "il_peephole.m"
            ml_backend__il_peephole__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 89 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[1]));
#line 89 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_decl_5_p_0_1));
#line 89 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 89 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_40_40, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_6));
#line 89 "il_peephole.m"
          }
#line 6576 "ml_backend.il_peephole.c"
          ml_backend__il_peephole__TypeCtorInfo_46_46 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_class_member_0;
#line 89 "il_peephole.m"
          {
#line 89 "il_peephole.m"
            mercury__list__map_foldl_5_p_0(ml_backend__il_peephole__TypeCtorInfo_46_46, ml_backend__il_peephole__TypeCtorInfo_46_46, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_40_40, ml_backend__il_peephole__ClassMembers0_14, &ml_backend__il_peephole__ClassMembers_15, ((MR_Box) (ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34)), &ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_35);
          }
#line 89 "il_peephole.m"
          *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ((MR_Word) ml_backend__il_peephole__conv2_STATE_VARIABLE_Mod_35);
#line 91 "il_peephole.m"
          {
#line 91 "il_peephole.m"
            MR_Word base;
#line 91 "il_peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 91 "il_peephole.m"
            *ml_backend__il_peephole__Decl_8 = base;
#line 91 "il_peephole.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__il_peephole__ClassAttrs_10));
#line 91 "il_peephole.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__il_peephole__ClassId_11));
#line 91 "il_peephole.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__il_peephole__ParentClass_12));
#line 91 "il_peephole.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__il_peephole__Implements_13));
#line 91 "il_peephole.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (ml_backend__il_peephole__ClassMembers_15));
#line 91 "il_peephole.m"
          }
#line 88 "il_peephole.m"
        }
#line 88 "il_peephole.m"
        break;
#line 88 "il_peephole.m"
      case (MR_Integer) 2:
#line 94 "il_peephole.m"
        {
#line 94 "il_peephole.m"
          MR_Word ml_backend__il_peephole__TypeCtorInfo_52_52;
#line 94 "il_peephole.m"
          MR_Word ml_backend__il_peephole__NameSpaceName_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__Decl0_7, (MR_Integer) 0)));
#line 94 "il_peephole.m"
          MR_Word ml_backend__il_peephole__NamespaceDecls0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__il_peephole__Decl0_7, (MR_Integer) 1)));
#line 94 "il_peephole.m"
          MR_Word ml_backend__il_peephole__NamespaceDecls_18;
#line 94 "il_peephole.m"
          MR_Word ml_backend__il_peephole__V_38_38;
#line 95 "il_peephole.m"
          MR_Box ml_backend__il_peephole__conv8_STATE_VARIABLE_Mod_35;

#line 95 "il_peephole.m"
          {
#line 95 "il_peephole.m"
            ml_backend__il_peephole__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 95 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_38_38, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[0]));
#line 95 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_38_38, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_decl_5_p_0_3));
#line 95 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 95 "il_peephole.m"
            MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_38_38, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_6));
#line 95 "il_peephole.m"
          }
#line 6640 "ml_backend.il_peephole.c"
          ml_backend__il_peephole__TypeCtorInfo_52_52 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_il_decl_0;
#line 95 "il_peephole.m"
          {
#line 95 "il_peephole.m"
            mercury__list__map_foldl_5_p_0(ml_backend__il_peephole__TypeCtorInfo_52_52, ml_backend__il_peephole__TypeCtorInfo_52_52, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_38_38, ml_backend__il_peephole__NamespaceDecls0_17, &ml_backend__il_peephole__NamespaceDecls_18, ((MR_Box) (ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34)), &ml_backend__il_peephole__conv8_STATE_VARIABLE_Mod_35);
          }
#line 95 "il_peephole.m"
          *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ((MR_Word) ml_backend__il_peephole__conv8_STATE_VARIABLE_Mod_35);
#line 97 "il_peephole.m"
          {
#line 97 "il_peephole.m"
            MR_Word base;
#line 97 "il_peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 97 "il_peephole.m"
            *ml_backend__il_peephole__Decl_8 = base;
#line 97 "il_peephole.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__il_peephole__NameSpaceName_16));
#line 97 "il_peephole.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__il_peephole__NamespaceDecls_18));
#line 97 "il_peephole.m"
          }
#line 94 "il_peephole.m"
        }
#line 88 "il_peephole.m"
        break;
#line 88 "il_peephole.m"
      case (MR_Integer) 3:
#line 88 "il_peephole.m"
#line 88 "il_peephole.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 0)))) {
#line 88 "il_peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 88 "il_peephole.m"
          case (MR_Integer) 0:
#line 99 "il_peephole.m"
            {
#line 99 "il_peephole.m"
              MR_Word ml_backend__il_peephole__TypeCtorInfo_58_58;
#line 99 "il_peephole.m"
              MR_Word ml_backend__il_peephole__MethodHead_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 1)));
#line 99 "il_peephole.m"
              MR_Word ml_backend__il_peephole__MethodDecls0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__il_peephole__Decl0_7, (MR_Integer) 2)));
#line 99 "il_peephole.m"
              MR_Word ml_backend__il_peephole__MethodDecls_21;
#line 99 "il_peephole.m"
              MR_Word ml_backend__il_peephole__V_36_36;
#line 100 "il_peephole.m"
              MR_Box ml_backend__il_peephole__conv5_STATE_VARIABLE_Mod_35;

#line 100 "il_peephole.m"
              {
#line 100 "il_peephole.m"
                ml_backend__il_peephole__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 100 "il_peephole.m"
                MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_36_36, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[2]));
#line 100 "il_peephole.m"
                MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_36_36, 1) = ((MR_Box) (ml_backend__il_peephole__optimize_decl_5_p_0_2));
#line 100 "il_peephole.m"
                MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 100 "il_peephole.m"
                MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_36_36, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_6));
#line 100 "il_peephole.m"
              }
#line 6705 "ml_backend.il_peephole.c"
              ml_backend__il_peephole__TypeCtorInfo_58_58 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_method_body_decl_0;
#line 100 "il_peephole.m"
              {
#line 100 "il_peephole.m"
                mercury__list__map_foldl_5_p_0(ml_backend__il_peephole__TypeCtorInfo_58_58, ml_backend__il_peephole__TypeCtorInfo_58_58, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_36_36, ml_backend__il_peephole__MethodDecls0_20, &ml_backend__il_peephole__MethodDecls_21, ((MR_Box) (ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34)), &ml_backend__il_peephole__conv5_STATE_VARIABLE_Mod_35);
              }
#line 100 "il_peephole.m"
              *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ((MR_Word) ml_backend__il_peephole__conv5_STATE_VARIABLE_Mod_35);
#line 102 "il_peephole.m"
              {
#line 102 "il_peephole.m"
                MR_Word base;
#line 102 "il_peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 102 "il_peephole.m"
                *ml_backend__il_peephole__Decl_8 = base;
#line 102 "il_peephole.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 102 "il_peephole.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__il_peephole__MethodHead_19));
#line 102 "il_peephole.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__il_peephole__MethodDecls_21));
#line 102 "il_peephole.m"
              }
#line 99 "il_peephole.m"
            }
#line 88 "il_peephole.m"
            break;
#line 88 "il_peephole.m"
          case (MR_Integer) 1:
#line 88 "il_peephole.m"
          case (MR_Integer) 2:
#line 88 "il_peephole.m"
          case (MR_Integer) 3:
#line 88 "il_peephole.m"
          case (MR_Integer) 4:
#line 88 "il_peephole.m"
          case (MR_Integer) 5:
#line 88 "il_peephole.m"
          case (MR_Integer) 6:
#line 88 "il_peephole.m"
          case (MR_Integer) 7:
#line 88 "il_peephole.m"
          case (MR_Integer) 8:
#line 113 "il_peephole.m"
            {
#line 114 "il_peephole.m"
              *ml_backend__il_peephole__Decl_8 = ml_backend__il_peephole__Decl0_7;
#line 113 "il_peephole.m"
              *ml_backend__il_peephole__STATE_VARIABLE_Mod_35 = ml_backend__il_peephole__STATE_VARIABLE_Mod_0_34;
#line 113 "il_peephole.m"
            }
#line 88 "il_peephole.m"
            break;
#line 88 "il_peephole.m"
        }
#line 88 "il_peephole.m"
        break;
#line 88 "il_peephole.m"
    }
#line 88 "il_peephole.m"
  }
#line 82 "il_peephole.m"
}

#line 76 "il_peephole.m"
static void MR_CALL 
ml_backend__il_peephole__il_peephole_optimize_3_p_0_1(
#line 76 "il_peephole.m"
  MR_Box ml_backend__il_peephole__closure_arg,
#line 76 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_1,
#line 76 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_2,
#line 76 "il_peephole.m"
  MR_Box ml_backend__il_peephole__wrapper_arg_3,
#line 76 "il_peephole.m"
  MR_Box * ml_backend__il_peephole__wrapper_arg_4)
#line 76 "il_peephole.m"
{
#line 76 "il_peephole.m"
  {
#line 76 "il_peephole.m"
    MR_Box ml_backend__il_peephole__closure = ml_backend__il_peephole__closure_arg;
#line 76 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv1_Decl_8;
#line 76 "il_peephole.m"
    MR_Word ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_35;

#line 76 "il_peephole.m"
    {
#line 76 "il_peephole.m"
      ml_backend__il_peephole__optimize_decl_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__il_peephole__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__il_peephole__wrapper_arg_1), &ml_backend__il_peephole__conv1_Decl_8, ((MR_Word) ml_backend__il_peephole__wrapper_arg_3), &ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_35);
    }
#line 76 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_2 = ((MR_Box) (ml_backend__il_peephole__conv1_Decl_8));
#line 76 "il_peephole.m"
    *ml_backend__il_peephole__wrapper_arg_4 = ((MR_Box) (ml_backend__il_peephole__conv0_STATE_VARIABLE_Mod_35));
#line 76 "il_peephole.m"
  }
#line 76 "il_peephole.m"
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
#line 70 "il_peephole.m"
  {
#line 70 "il_peephole.m"
    MR_bool ml_backend__il_peephole__succeeded;
#line 70 "il_peephole.m"
    MR_Word ml_backend__il_peephole__TypeCtorInfo_14_14;
#line 70 "il_peephole.m"
    MR_Word ml_backend__il_peephole__V_8_8;
#line 76 "il_peephole.m"
    MR_Word ml_backend__il_peephole___Mod_7;
#line 76 "il_peephole.m"
    MR_Box ml_backend__il_peephole__conv2__Mod_7;

#line 76 "il_peephole.m"
    {
#line 76 "il_peephole.m"
      ml_backend__il_peephole__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 76 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_8_8, 0) = ((MR_Box) (&ml_backend__il_peephole_scalar_common_3[0]));
#line 76 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_8_8, 1) = ((MR_Box) (ml_backend__il_peephole__il_peephole_optimize_3_p_0_1));
#line 76 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 76 "il_peephole.m"
      MR_hl_field(MR_mktag(0), ml_backend__il_peephole__V_8_8, 3) = ((MR_Box) (ml_backend__il_peephole__VerifyOnly_4));
#line 76 "il_peephole.m"
    }
#line 6847 "ml_backend.il_peephole.c"
    ml_backend__il_peephole__TypeCtorInfo_14_14 = (MR_Word) &ml_backend__ilasm__ml_backend__ilasm__type_ctor_info_il_decl_0;
#line 76 "il_peephole.m"
    {
#line 76 "il_peephole.m"
      mercury__list__map_foldl_5_p_0(ml_backend__il_peephole__TypeCtorInfo_14_14, ml_backend__il_peephole__TypeCtorInfo_14_14, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, ml_backend__il_peephole__V_8_8, ml_backend__il_peephole__Decls0_5, ml_backend__il_peephole__Decls_6, ((MR_Box) ((MR_Integer) 0)), &ml_backend__il_peephole__conv2__Mod_7);
    }
#line 76 "il_peephole.m"
    ml_backend__il_peephole___Mod_7 = ((MR_Word) ml_backend__il_peephole__conv2__Mod_7);
#line 70 "il_peephole.m"
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
