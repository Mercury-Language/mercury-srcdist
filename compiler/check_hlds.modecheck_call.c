/*
** Automatically generated from `modecheck_call.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module check_hlds.modecheck_call. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_call__init
ENDINIT
*/

#include "check_hlds.modecheck_call.mih"


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
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_util.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
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



#line 665 "modecheck_call.m"
struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1;
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4;
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5;
#line 669 "modecheck_call.m"
  MR_bool check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 673 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20;
#line 673 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23;
#line 677 "modecheck_call.m"
  jmp_buf check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_34_65;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_35_66;
#line 677 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet0_61;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62;
#line 677 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_64_64;
#line 677 "modecheck_call.m"
  MR_Box check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34;
#line 665 "modecheck_call.m"
};


#line 207 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0;

#line 210 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1;

#line 213 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2;

#line 216 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3;

#line 219 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0[4];

#line 222 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0[4];

#line 225 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0[4];

#line 228 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 231 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 234 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 237 "check_hlds.modecheck_call.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0[3];

#line 240 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0;

#line 243 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[1];

#line 246 "check_hlds.modecheck_call.c"
static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[1];

#line 249 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0[1];

#line 252 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0[1];

#line 255 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0_10001(
#line 258 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 260 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2);

#line 263 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0_10001(
#line 266 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 268 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 270 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3);

#line 273 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0_10001(
#line 276 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 278 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2);

#line 281 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0_10001(
#line 284 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 286 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 288 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3);

#line 677 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
#line 677 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 677 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
#line 677 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 677 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
#line 677 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 677 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
#line 677 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 665 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_1,
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Procs_4,
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_5,
#line 665 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_6,
#line 665 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheInstVarSub_7,
#line 665 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheArgModes_8);

#line 363 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_p_0(
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5,
#line 363 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_6,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7,
#line 363 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_8,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9,
#line 363 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_10);

#line 293 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__293__1_2_p_0(
#line 293 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ExtraGoals_11,
#line 293 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_19);

#line 360 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0(
#line 360 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 360 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 360 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3);

#line 360 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0(
#line 360 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 360 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2);

#line 659 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0(
#line 659 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 659 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 659 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3);

#line 659 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0(
#line 659 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_1,
#line 659 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2);

#line 766 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__compare_liveness_list_3_p_0(
#line 766 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 766 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 766 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3);

#line 749 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__compare_inst_list_2_6_p_0(
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_1,
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__5_5,
#line 749 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__6_6);

#line 499 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
#line 499 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 499 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_2,
#line 499 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3,
#line 499 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__4_4);

#line 427 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcInfo_11,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Purity_12,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcArgModes_13,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_14,
#line 427 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ArgOffset_15,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__InstVarSub_16,
#line 427 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_17,
#line 427 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28,
#line 427 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29);

#line 328 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_7_p_0(
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredId_8,
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_9,
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__DeterminismKnown_10,
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__WaitingVars_11,
#line 328 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_12,
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20,
#line 328 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_21);

#line 293 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
#line 293 "modecheck_call.m"
  MR_Box check_hlds__modecheck_call__closure_arg);


static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_3[1][5];




static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__modecheck_call_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0)),
    ((MR_Box) (&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 550 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0 = {
  (MR_String) "better",
  (MR_Integer) 0
};

#line 556 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1 = {
  (MR_String) "worse",
  (MR_Integer) 1
};

#line 562 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2 = {
  (MR_String) "same",
  (MR_Integer) 2
};

#line 568 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3 = {
  (MR_String) "incomparable",
  (MR_Integer) 3
};

#line 574 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0[4] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3
};

#line 582 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0[4] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1
};

#line 590 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 598 "check_hlds.modecheck_call.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modecheck_call____Unify____match_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_call____Compare____match_0_0_10001)),
  (MR_String) "check_hlds.modecheck_call",
  (MR_String) "match",
  {
    check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0
  },
  {
    check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0
};

#line 619 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 627 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 636 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 644 "check_hlds.modecheck_call.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

#line 651 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0 = {
  (MR_String) "proc_mode",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0,
  NULL,
  NULL,
  NULL
};

#line 666 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[1] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

#line 671 "check_hlds.modecheck_call.c"
static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0
  }
};

#line 680 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0[1] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

#line 685 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0[1] = {
  (MR_Integer) 0
};

#line 690 "check_hlds.modecheck_call.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_call____Unify____proc_mode_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_call____Compare____proc_mode_0_0_10001)),
  (MR_String) "check_hlds.modecheck_call",
  (MR_String) "proc_mode",
  {
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0
  },
  {
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0
};

#line 711 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0_10001(
#line 714 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 716 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2)
#line 718 "check_hlds.modecheck_call.c"
{
#line 720 "check_hlds.modecheck_call.c"
  {
#line 722 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 725 "check_hlds.modecheck_call.c"
    {
#line 727 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call____Unify____match_0_0(((MR_Word) check_hlds__modecheck_call__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2));
    }
#line 730 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 732 "check_hlds.modecheck_call.c"
  }
#line 734 "check_hlds.modecheck_call.c"
}

#line 737 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0_10001(
#line 740 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 742 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 744 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3)
#line 746 "check_hlds.modecheck_call.c"
{
#line 748 "check_hlds.modecheck_call.c"
  {
#line 750 "check_hlds.modecheck_call.c"
    MR_Word check_hlds__modecheck_call__conv0_HeadVar__1_1;

#line 753 "check_hlds.modecheck_call.c"
    {
#line 755 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call____Compare____match_0_0(&check_hlds__modecheck_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_3));
    }
#line 758 "check_hlds.modecheck_call.c"
    *check_hlds__modecheck_call__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_call__conv0_HeadVar__1_1));
#line 760 "check_hlds.modecheck_call.c"
  }
#line 762 "check_hlds.modecheck_call.c"
}

#line 765 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0_10001(
#line 768 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 770 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2)
#line 772 "check_hlds.modecheck_call.c"
{
#line 774 "check_hlds.modecheck_call.c"
  {
#line 776 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 779 "check_hlds.modecheck_call.c"
    {
#line 781 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call____Unify____proc_mode_0_0(((MR_Word) check_hlds__modecheck_call__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2));
    }
#line 784 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 786 "check_hlds.modecheck_call.c"
  }
#line 788 "check_hlds.modecheck_call.c"
}

#line 791 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0_10001(
#line 794 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 796 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 798 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3)
#line 800 "check_hlds.modecheck_call.c"
{
#line 802 "check_hlds.modecheck_call.c"
  {
#line 804 "check_hlds.modecheck_call.c"
    MR_Word check_hlds__modecheck_call__conv0_HeadVar__1_1;

#line 807 "check_hlds.modecheck_call.c"
    {
#line 809 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call____Compare____proc_mode_0_0(&check_hlds__modecheck_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_3));
    }
#line 812 "check_hlds.modecheck_call.c"
    *check_hlds__modecheck_call__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_call__conv0_HeadVar__1_1));
#line 814 "check_hlds.modecheck_call.c"
  }
#line 816 "check_hlds.modecheck_call.c"
}

#line 677 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
#line 677 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 677 "modecheck_call.m"
{
#line 677 "modecheck_call.m"
  {
#line 677 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 677 "modecheck_call.m"
    MR_builtin_longjmp((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 677 "modecheck_call.m"
  }
#line 677 "modecheck_call.m"
}

#line 677 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
#line 677 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 677 "modecheck_call.m"
{
#line 677 "modecheck_call.m"
  {
#line 677 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 677 "modecheck_call.m"
    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34 = ((MR_Word) (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34);
#line 677 "modecheck_call.m"
    {
#line 677 "modecheck_call.m"
      check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(check_hlds__modecheck_call__env_ptr);
#line 677 "modecheck_call.m"
      return;
    }
#line 677 "modecheck_call.m"
  }
#line 677 "modecheck_call.m"
}

#line 677 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
#line 677 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 677 "modecheck_call.m"
{
#line 677 "modecheck_call.m"
  {
#line 677 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 677 "modecheck_call.m"
    {
#line 677 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__V_31_31;
#line 677 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__V_32_32;
#line 700 "modecheck_call.m"
      MR_Box check_hlds__modecheck_call__conv1_ProcInfo_44;
#line 701 "modecheck_call.m"
      MR_Box check_hlds__modecheck_call__conv2_OtherProcInfo_45;
#line 712 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call___ArgLives_54;
#line 745 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__Result0_73;

#line 677 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 0)));
#line 677 "modecheck_call.m"
      check_hlds__modecheck_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 1)));
#line 677 "modecheck_call.m"
      check_hlds__modecheck_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 2)));
#line 678 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 = (MR_Integer) 0;
#line 899 "check_hlds.modecheck_call.c"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_34_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 901 "check_hlds.modecheck_call.c"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_35_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 700 "modecheck_call.m"
      {
#line 700 "modecheck_call.m"
        mercury__map__lookup_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_34_65, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_35_66, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30)), &check_hlds__modecheck_call__conv1_ProcInfo_44);
      }
#line 700 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44 = ((MR_Word) check_hlds__modecheck_call__conv1_ProcInfo_44);
#line 701 "modecheck_call.m"
      {
#line 701 "modecheck_call.m"
        mercury__map__lookup_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_34_65, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_35_66, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20)), &check_hlds__modecheck_call__conv2_OtherProcInfo_45);
      }
#line 701 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45 = ((MR_Word) check_hlds__modecheck_call__conv2_OtherProcInfo_45);
#line 704 "modecheck_call.m"
      {
#line 704 "modecheck_call.m"
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46);
      }
#line 705 "modecheck_call.m"
      {
#line 705 "modecheck_call.m"
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47);
      }
#line 706 "modecheck_call.m"
      {
#line 706 "modecheck_call.m"
        check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48);
      }
#line 707 "modecheck_call.m"
      {
#line 707 "modecheck_call.m"
        check_hlds__mode_info__mode_info_get_var_types_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49);
      }
#line 708 "modecheck_call.m"
      {
#line 708 "modecheck_call.m"
        parse_tree__prog_data__lookup_var_types_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50);
      }
#line 709 "modecheck_call.m"
      {
#line 709 "modecheck_call.m"
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51);
      }
#line 710 "modecheck_call.m"
      {
#line 710 "modecheck_call.m"
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52);
      }
#line 712 "modecheck_call.m"
      {
#line 712 "modecheck_call.m"
        check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53, &check_hlds__modecheck_call___ArgLives_54);
      }
#line 714 "modecheck_call.m"
      {
#line 714 "modecheck_call.m"
        MR_Word base;
#line 714 "modecheck_call.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 714 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_64_64 = base;
#line 714 "modecheck_call.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53));
#line 714 "modecheck_call.m"
      }
#line 741 "modecheck_call.m"
      {
#line 741 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_64_64, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50, &check_hlds__modecheck_call__Result0_73);
      }
#line 745 "modecheck_call.m"
      if ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 744 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 = check_hlds__modecheck_call__Result0_73;
#line 745 "modecheck_call.m"
      else
#line 746 "modecheck_call.m"
        {
#line 746 "modecheck_call.m"
          {
#line 746 "modecheck_call.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
#line 746 "modecheck_call.m"
            return;
          }
#line 746 "modecheck_call.m"
        }
#line 717 "modecheck_call.m"
      {
#line 717 "modecheck_call.m"
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56);
      }
#line 718 "modecheck_call.m"
      {
#line 718 "modecheck_call.m"
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57);
      }
#line 719 "modecheck_call.m"
      {
#line 719 "modecheck_call.m"
        check_hlds__modecheck_call__compare_liveness_list_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58);
      }
#line 722 "modecheck_call.m"
      {
#line 722 "modecheck_call.m"
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59);
      }
#line 723 "modecheck_call.m"
      {
#line 723 "modecheck_call.m"
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60);
      }
#line 724 "modecheck_call.m"
      {
#line 724 "modecheck_call.m"
        check_hlds__det_report__compare_determinisms_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet0_61);
      }
#line 726 "modecheck_call.m"
      if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet0_61 == (MR_Integer) 2))
#line 726 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62 = (MR_Integer) 1;
#line 726 "modecheck_call.m"
      else
#line 726 "modecheck_call.m"
        if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet0_61 == (MR_Integer) 1))
#line 727 "modecheck_call.m"
          (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62 = (MR_Integer) 2;
#line 726 "modecheck_call.m"
        else
#line 725 "modecheck_call.m"
          (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62 = (MR_Integer) 0;
#line 1035 "check_hlds.modecheck_call.c"
      if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 == (MR_Integer) 0))
#line 1037 "check_hlds.modecheck_call.c"
        if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 0))
#line 1039 "check_hlds.modecheck_call.c"
          {
#line 678 "modecheck_call.m"
            (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 1043 "check_hlds.modecheck_call.c"
          }
#line 1045 "check_hlds.modecheck_call.c"
        else
#line 1047 "check_hlds.modecheck_call.c"
          if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 3))
#line 1049 "check_hlds.modecheck_call.c"
            {
#line 678 "modecheck_call.m"
              (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1053 "check_hlds.modecheck_call.c"
            }
#line 1055 "check_hlds.modecheck_call.c"
          else
#line 1057 "check_hlds.modecheck_call.c"
            if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 2))
#line 1059 "check_hlds.modecheck_call.c"
              {
#line 678 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 1063 "check_hlds.modecheck_call.c"
              }
#line 1065 "check_hlds.modecheck_call.c"
            else
#line 1067 "check_hlds.modecheck_call.c"
              {
#line 678 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1071 "check_hlds.modecheck_call.c"
              }
#line 1073 "check_hlds.modecheck_call.c"
      else
#line 1075 "check_hlds.modecheck_call.c"
        if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 == (MR_Integer) 3))
#line 1077 "check_hlds.modecheck_call.c"
          {
#line 678 "modecheck_call.m"
            (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1081 "check_hlds.modecheck_call.c"
          }
#line 1083 "check_hlds.modecheck_call.c"
        else
#line 1085 "check_hlds.modecheck_call.c"
          if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 == (MR_Integer) 2))
#line 794 "modecheck_call.m"
            if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 0))
#line 794 "modecheck_call.m"
              {
#line 678 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 794 "modecheck_call.m"
              }
#line 794 "modecheck_call.m"
            else
#line 794 "modecheck_call.m"
              if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 3))
#line 797 "modecheck_call.m"
                {
#line 678 "modecheck_call.m"
                  (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 797 "modecheck_call.m"
                }
#line 794 "modecheck_call.m"
              else
#line 794 "modecheck_call.m"
                if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 2))
#line 678 "modecheck_call.m"
                  (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62);
#line 794 "modecheck_call.m"
                else
#line 795 "modecheck_call.m"
                  {
#line 678 "modecheck_call.m"
                    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 795 "modecheck_call.m"
                  }
#line 1119 "check_hlds.modecheck_call.c"
          else
#line 1121 "check_hlds.modecheck_call.c"
            if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 0))
#line 1123 "check_hlds.modecheck_call.c"
              {
#line 678 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1127 "check_hlds.modecheck_call.c"
              }
#line 1129 "check_hlds.modecheck_call.c"
            else
#line 1131 "check_hlds.modecheck_call.c"
              if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 3))
#line 1133 "check_hlds.modecheck_call.c"
                {
#line 678 "modecheck_call.m"
                  (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1137 "check_hlds.modecheck_call.c"
                }
#line 1139 "check_hlds.modecheck_call.c"
              else
#line 1141 "check_hlds.modecheck_call.c"
                if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 2))
#line 1143 "check_hlds.modecheck_call.c"
                  {
#line 678 "modecheck_call.m"
                    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 1147 "check_hlds.modecheck_call.c"
                  }
#line 1149 "check_hlds.modecheck_call.c"
                else
#line 1151 "check_hlds.modecheck_call.c"
                  {
#line 678 "modecheck_call.m"
                    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 1155 "check_hlds.modecheck_call.c"
                  }
#line 1157 "check_hlds.modecheck_call.c"
      if ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1159 "check_hlds.modecheck_call.c"
        {
#line 1161 "check_hlds.modecheck_call.c"
          check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(check_hlds__modecheck_call__env_ptr);
#line 1163 "check_hlds.modecheck_call.c"
          return;
        }
#line 677 "modecheck_call.m"
    }
#line 677 "modecheck_call.m"
  }
#line 677 "modecheck_call.m"
}

#line 677 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
#line 677 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 677 "modecheck_call.m"
{
#line 677 "modecheck_call.m"
  {
#line 677 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 677 "modecheck_call.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 677 "modecheck_call.m"
      {
#line 677 "modecheck_call.m"
        {
#line 677 "modecheck_call.m"
          {
#line 677 "modecheck_call.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23, check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3, check_hlds__modecheck_call__env_ptr);
          }
#line 677 "modecheck_call.m"
        }
#line 677 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 677 "modecheck_call.m"
      }
#line 677 "modecheck_call.m"
    else
#line 677 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 677 "modecheck_call.m"
  }
#line 677 "modecheck_call.m"
}

#line 665 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_1,
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Procs_4,
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_5,
#line 665 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_6,
#line 665 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheInstVarSub_7,
#line 665 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheArgModes_8)
#line 665 "modecheck_call.m"
{
#line 665 "modecheck_call.m"
  {
#line 665 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s check_hlds__modecheck_call__env;

#line 665 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1 = check_hlds__modecheck_call__ModeInfo_1;
#line 665 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4 = check_hlds__modecheck_call__Procs_4;
#line 665 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5 = check_hlds__modecheck_call__ArgVars_5;
#line 669 "modecheck_call.m"
    while (MR_TRUE)
#line 669 "modecheck_call.m"
      {
#line 669 "modecheck_call.m"
        /* tailcall optimized into a loop */
#line 669 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 669 "modecheck_call.m"
          {
#line 670 "modecheck_call.m"
            {
#line 670 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.choose_best_match\'/8", (MR_String) "no best match");
#line 670 "modecheck_call.m"
              return;
            }
#line 669 "modecheck_call.m"
          }
#line 669 "modecheck_call.m"
        else
#line 673 "modecheck_call.m"
          {
#line 673 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_21;
#line 673 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ArgModes_22;
#line 673 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));

#line 672 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 672 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 0)));
#line 672 "modecheck_call.m"
            check_hlds__modecheck_call__InstVarSub_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 1)));
#line 672 "modecheck_call.m"
            check_hlds__modecheck_call__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 2)));
#line 677 "modecheck_call.m"
            {
#line 677 "modecheck_call.m"
              check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(&check_hlds__modecheck_call__env);
            }
#line 676 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 684 "modecheck_call.m"
            if ((check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 681 "modecheck_call.m"
              {
#line 681 "modecheck_call.m"
                *check_hlds__modecheck_call__TheProcId_6 = (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20;
#line 682 "modecheck_call.m"
                *check_hlds__modecheck_call__TheInstVarSub_7 = check_hlds__modecheck_call__InstVarSub_21;
#line 683 "modecheck_call.m"
                *check_hlds__modecheck_call__TheArgModes_8 = check_hlds__modecheck_call__ArgModes_22;
#line 681 "modecheck_call.m"
              }
#line 684 "modecheck_call.m"
            else
#line 685 "modecheck_call.m"
              {
#line 685 "modecheck_call.m"
                /* direct tailcall eliminated */
#line 685 "modecheck_call.m"
                {
#line 685 "modecheck_call.m"
                  MR_Word check_hlds__modecheck_call__HeadVar__2__tmp_copy_2 = (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23;

#line 685 "modecheck_call.m"
                  check_hlds__modecheck_call__HeadVar__2_2 = check_hlds__modecheck_call__HeadVar__2__tmp_copy_2;
#line 685 "modecheck_call.m"
                }
#line 685 "modecheck_call.m"
                continue;
#line 685 "modecheck_call.m"
              }
#line 673 "modecheck_call.m"
          }
#line 669 "modecheck_call.m"
        break;
#line 669 "modecheck_call.m"
      }
#line 665 "modecheck_call.m"
  }
#line 665 "modecheck_call.m"
}

#line 363 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_p_0(
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5,
#line 363 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_6,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7,
#line 363 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_8,
#line 363 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9,
#line 363 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_10)
#line 363 "modecheck_call.m"
{
#line 368 "modecheck_call.m"
  while (MR_TRUE)
#line 368 "modecheck_call.m"
    {
#line 368 "modecheck_call.m"
      /* tailcall optimized into a loop */
#line 368 "modecheck_call.m"
      {
#line 368 "modecheck_call.m"
        MR_bool check_hlds__modecheck_call__succeeded;

#line 368 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "modecheck_call.m"
          {
#line 369 "modecheck_call.m"
            *check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_10 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9;
#line 369 "modecheck_call.m"
            *check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_8 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7;
#line 369 "modecheck_call.m"
            *check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_6 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5;
#line 368 "modecheck_call.m"
          }
#line 368 "modecheck_call.m"
        else
#line 371 "modecheck_call.m"
          {
#line 371 "modecheck_call.m"
            MR_Integer check_hlds__modecheck_call__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcInfo_31;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes0_32;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcInstVarSet_33;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSet_34;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes_35;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ModuleInfo_36;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgLives0_37;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InitialInsts_38;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_39;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Errors_40;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_60_60;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_62_62;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_63_63;
#line 375 "modecheck_call.m"
            MR_Box check_hlds__modecheck_call__conv0_ProcInfo_31;

#line 375 "modecheck_call.m"
            {
#line 375 "modecheck_call.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__HeadVar__3_3, ((MR_Box) (check_hlds__modecheck_call__ProcId_23)), &check_hlds__modecheck_call__conv0_ProcInfo_31);
            }
#line 375 "modecheck_call.m"
            check_hlds__modecheck_call__ProcInfo_31 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_31);
#line 376 "modecheck_call.m"
            {
#line 376 "modecheck_call.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_31, &check_hlds__modecheck_call__ProcArgModes0_32);
            }
#line 377 "modecheck_call.m"
            {
#line 377 "modecheck_call.m"
              hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__modecheck_call__ProcInfo_31, &check_hlds__modecheck_call__ProcInstVarSet_33);
            }
#line 378 "modecheck_call.m"
            {
#line 378 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9, &check_hlds__modecheck_call__InstVarSet_34);
            }
#line 379 "modecheck_call.m"
            {
#line 379 "modecheck_call.m"
              parse_tree__prog_mode__rename_apart_inst_vars_4_p_0(check_hlds__modecheck_call__InstVarSet_34, check_hlds__modecheck_call__ProcInstVarSet_33, check_hlds__modecheck_call__ProcArgModes0_32, &check_hlds__modecheck_call__ProcArgModes_35);
            }
#line 381 "modecheck_call.m"
            {
#line 381 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9, &check_hlds__modecheck_call__ModuleInfo_36);
            }
#line 382 "modecheck_call.m"
            {
#line 382 "modecheck_call.m"
              hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modecheck_call__ProcInfo_31, check_hlds__modecheck_call__ModuleInfo_36, &check_hlds__modecheck_call__ProcArgLives0_37);
            }
#line 385 "modecheck_call.m"
            {
#line 385 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__ProcArgLives0_37, (MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55);
            }
#line 399 "modecheck_call.m"
            {
#line 399 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_36, check_hlds__modecheck_call__ProcArgModes_35, &check_hlds__modecheck_call__InitialInsts_38);
            }
#line 400 "modecheck_call.m"
            {
#line 400 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(check_hlds__modecheck_call__ProcInfo_31);
            }
#line 403 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 401 "modecheck_call.m"
              {
#line 401 "modecheck_call.m"
                {
#line 401 "modecheck_call.m"
                  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__InitialInsts_38, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_39, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57);
                }
#line 401 "modecheck_call.m"
              }
#line 403 "modecheck_call.m"
            else
#line 404 "modecheck_call.m"
              {
#line 404 "modecheck_call.m"
                {
#line 404 "modecheck_call.m"
                  check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__InitialInsts_38, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_39, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57);
                }
#line 404 "modecheck_call.m"
              }
#line 411 "modecheck_call.m"
            {
#line 411 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_call__Errors_40);
            }
#line 417 "modecheck_call.m"
            if ((check_hlds__modecheck_call__Errors_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "modecheck_call.m"
              {
#line 418 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__NewMatch_47;

#line 419 "modecheck_call.m"
                {
#line 419 "modecheck_call.m"
                  check_hlds__modecheck_call__NewMatch_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 419 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_47, 0) = ((MR_Box) (check_hlds__modecheck_call__ProcId_23));
#line 419 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_47, 1) = ((MR_Box) (check_hlds__modecheck_call__InstVarSub_39));
#line 419 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_47, 2) = ((MR_Box) (check_hlds__modecheck_call__ProcArgModes_35));
#line 419 "modecheck_call.m"
                }
#line 420 "modecheck_call.m"
                {
#line 420 "modecheck_call.m"
                  check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "modecheck_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_60_60, 0) = ((MR_Box) (check_hlds__modecheck_call__NewMatch_47));
#line 420 "modecheck_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_60_60, 1) = ((MR_Box) (check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5));
#line 420 "modecheck_call.m"
                }
#line 420 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_63_63 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7;
#line 420 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_62_62 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57;
#line 418 "modecheck_call.m"
              }
#line 417 "modecheck_call.m"
            else
#line 413 "modecheck_call.m"
              {
#line 413 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__FirstError_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__Errors_40, (MR_Integer) 0)));
#line 413 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ErrorWaitingVars_43;
#line 413 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__Errors_40, (MR_Integer) 1)));
#line 415 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_44_44;
#line 415 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_45_45;
#line 415 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_46_46;

#line 414 "modecheck_call.m"
                {
#line 414 "modecheck_call.m"
                  check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_62_62);
                }
#line 415 "modecheck_call.m"
                check_hlds__modecheck_call__ErrorWaitingVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_41, (MR_Integer) 0)));
#line 415 "modecheck_call.m"
                check_hlds__modecheck_call__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_41, (MR_Integer) 1)));
#line 415 "modecheck_call.m"
                check_hlds__modecheck_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_41, (MR_Integer) 2)));
#line 415 "modecheck_call.m"
                check_hlds__modecheck_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_41, (MR_Integer) 3)));
#line 416 "modecheck_call.m"
                {
#line 416 "modecheck_call.m"
                  parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_call__ErrorWaitingVars_43, check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7, &check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_63_63);
                }
#line 416 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_60_60 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5;
#line 413 "modecheck_call.m"
              }
#line 424 "modecheck_call.m"
            /* direct tailcall eliminated */
#line 424 "modecheck_call.m"
            {
#line 424 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_call__ProcIds_24;
#line 424 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0__tmp_copy_5 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_60_60;
#line 424 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0__tmp_copy_7 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_63_63;
#line 424 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0__tmp_copy_9 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_62_62;

#line 424 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0__tmp_copy_9;
#line 424 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0__tmp_copy_7;
#line 424 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0__tmp_copy_5;
#line 424 "modecheck_call.m"
              check_hlds__modecheck_call__HeadVar__1_1 = check_hlds__modecheck_call__HeadVar__1__tmp_copy_1;
#line 424 "modecheck_call.m"
            }
#line 424 "modecheck_call.m"
            continue;
#line 371 "modecheck_call.m"
          }
#line 368 "modecheck_call.m"
      }
#line 368 "modecheck_call.m"
      break;
#line 368 "modecheck_call.m"
    }
#line 363 "modecheck_call.m"
}

#line 41 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredId_11,
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__DeterminismKnown_12,
#line 41 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ProcId0_13,
#line 41 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_14,
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_15,
#line 41 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_16,
#line 41 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53,
#line 41 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_54)
#line 41 "modecheck_call.m"
{
#line 103 "modecheck_call.m"
  {
#line 103 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__MayChangeCalledProc_20;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Preds_21;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo_22;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredInfo_23;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Purity_24;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_25;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcIds_26;
#line 103 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__ArgOffset_27;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Markers_28;
#line 103 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InstMap_29;
#line 107 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_PredInfo_23;
#line 131 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_59_59;

#line 104 "modecheck_call.m"
    {
#line 104 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, &check_hlds__modecheck_call__MayChangeCalledProc_20);
    }
#line 105 "modecheck_call.m"
    {
#line 105 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_preds_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, &check_hlds__modecheck_call__Preds_21);
    }
#line 106 "modecheck_call.m"
    {
#line 106 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, &check_hlds__modecheck_call__ModuleInfo_22);
    }
#line 107 "modecheck_call.m"
    {
#line 107 "modecheck_call.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_call__Preds_21, ((MR_Box) (check_hlds__modecheck_call__PredId_11)), &check_hlds__modecheck_call__conv0_PredInfo_23);
    }
#line 107 "modecheck_call.m"
    check_hlds__modecheck_call__PredInfo_23 = ((MR_Word) check_hlds__modecheck_call__conv0_PredInfo_23);
#line 108 "modecheck_call.m"
    {
#line 108 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__Purity_24);
    }
#line 109 "modecheck_call.m"
    {
#line 109 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__Procs_25);
    }
#line 117 "modecheck_call.m"
    if ((check_hlds__modecheck_call__MayChangeCalledProc_20 == (MR_Integer) 0))
#line 120 "modecheck_call.m"
      {
#line 120 "modecheck_call.m"
        check_hlds__modecheck_call__ProcIds_26 = hlds__hlds_pred__pred_info_all_procids_1_f_0(check_hlds__modecheck_call__PredInfo_23);
      }
#line 117 "modecheck_call.m"
    else
#line 114 "modecheck_call.m"
      {
#line 112 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_103_103;

#line 112 "modecheck_call.m"
        {
#line 112 "modecheck_call.m"
          check_hlds__modecheck_call__V_103_103 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 112 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__ProcId0_13 == check_hlds__modecheck_call__V_103_103);
#line 114 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 113 "modecheck_call.m"
          {
#line 113 "modecheck_call.m"
            {
#line 113 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_call_pred\'/10", (MR_String) "invalid proc_id");
#line 113 "modecheck_call.m"
              return;
            }
#line 113 "modecheck_call.m"
          }
#line 114 "modecheck_call.m"
        else
#line 115 "modecheck_call.m"
          {
#line 115 "modecheck_call.m"
            {
#line 115 "modecheck_call.m"
              check_hlds__modecheck_call__ProcIds_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "modecheck_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, 0) = ((MR_Box) (check_hlds__modecheck_call__ProcId0_13));
#line 115 "modecheck_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 115 "modecheck_call.m"
            }
#line 115 "modecheck_call.m"
          }
#line 114 "modecheck_call.m"
      }
#line 123 "modecheck_call.m"
    {
#line 123 "modecheck_call.m"
      check_hlds__modecheck_util__compute_arg_offset_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__ArgOffset_27);
    }
#line 124 "modecheck_call.m"
    {
#line 124 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__Markers_28);
    }
#line 125 "modecheck_call.m"
    {
#line 125 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, &check_hlds__modecheck_call__InstMap_29);
    }
#line 130 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__ProcIds_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 130 "modecheck_call.m"
      {
#line 131 "modecheck_call.m"
        check_hlds__modecheck_call__V_59_59 = (MR_Integer) 3;
#line 131 "modecheck_call.m"
        {
#line 131 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modecheck_call__Markers_28, check_hlds__modecheck_call__V_59_59);
        }
#line 131 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 130 "modecheck_call.m"
      }
#line 138 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 133 "modecheck_call.m"
      {
#line 133 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__WaitingVars_30;

#line 133 "modecheck_call.m"
        {
#line 133 "modecheck_call.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_call__WaitingVars_30);
        }
#line 134 "modecheck_call.m"
        {
#line 134 "modecheck_call.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_54);
        }
#line 135 "modecheck_call.m"
        {
#line 135 "modecheck_call.m"
          *check_hlds__modecheck_call__TheProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 136 "modecheck_call.m"
        *check_hlds__modecheck_call__ArgVars_16 = check_hlds__modecheck_call__ArgVars0_15;
#line 137 "modecheck_call.m"
        *check_hlds__modecheck_call__ExtraGoals_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 133 "modecheck_call.m"
      }
#line 138 "modecheck_call.m"
    else
#line 169 "modecheck_call.m"
      {
#line 169 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__ProcId_31;
#line 139 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_62_62;

#line 139 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__ProcIds_26)) == (MR_mktag((MR_Integer) 1)));
#line 139 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 139 "modecheck_call.m"
          {
#line 139 "modecheck_call.m"
            check_hlds__modecheck_call__ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, (MR_Integer) 0)));
#line 139 "modecheck_call.m"
            check_hlds__modecheck_call__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, (MR_Integer) 1)));
#line 139 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 139 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 139 "modecheck_call.m"
              {
#line 140 "modecheck_call.m"
                {
#line 140 "modecheck_call.m"
                  check_hlds__modecheck_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modecheck_call__Markers_28, (MR_Integer) 3);
                }
#line 140 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 141 "modecheck_call.m"
                if (!(check_hlds__modecheck_call__succeeded))
#line 141 "modecheck_call.m"
                  check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__MayChangeCalledProc_20 == (MR_Integer) 1);
#line 139 "modecheck_call.m"
              }
#line 139 "modecheck_call.m"
          }
#line 169 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 144 "modecheck_call.m"
          {
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcInfo_32;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgLives0_33;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes0_34;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcInstVarSet_35;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSet_36;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes_37;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InitialInsts_38;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_39;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65;
#line 145 "modecheck_call.m"
            MR_Box check_hlds__modecheck_call__conv1_ProcInfo_32;

#line 144 "modecheck_call.m"
            *check_hlds__modecheck_call__TheProcId_14 = check_hlds__modecheck_call__ProcId_31;
#line 145 "modecheck_call.m"
            {
#line 145 "modecheck_call.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__Procs_25, ((MR_Box) (check_hlds__modecheck_call__ProcId_31)), &check_hlds__modecheck_call__conv1_ProcInfo_32);
            }
#line 145 "modecheck_call.m"
            check_hlds__modecheck_call__ProcInfo_32 = ((MR_Word) check_hlds__modecheck_call__conv1_ProcInfo_32);
#line 150 "modecheck_call.m"
            {
#line 150 "modecheck_call.m"
              hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modecheck_call__ProcInfo_32, check_hlds__modecheck_call__ModuleInfo_22, &check_hlds__modecheck_call__ProcArgLives0_33);
            }
#line 151 "modecheck_call.m"
            {
#line 151 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ProcArgLives0_33, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64);
            }
#line 158 "modecheck_call.m"
            {
#line 158 "modecheck_call.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_32, &check_hlds__modecheck_call__ProcArgModes0_34);
            }
#line 159 "modecheck_call.m"
            {
#line 159 "modecheck_call.m"
              hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__modecheck_call__ProcInfo_32, &check_hlds__modecheck_call__ProcInstVarSet_35);
            }
#line 160 "modecheck_call.m"
            {
#line 160 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_call__InstVarSet_36);
            }
#line 161 "modecheck_call.m"
            {
#line 161 "modecheck_call.m"
              parse_tree__prog_mode__rename_apart_inst_vars_4_p_0(check_hlds__modecheck_call__InstVarSet_36, check_hlds__modecheck_call__ProcInstVarSet_35, check_hlds__modecheck_call__ProcArgModes0_34, &check_hlds__modecheck_call__ProcArgModes_37);
            }
#line 163 "modecheck_call.m"
            {
#line 163 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_22, check_hlds__modecheck_call__ProcArgModes_37, &check_hlds__modecheck_call__InitialInsts_38);
            }
#line 164 "modecheck_call.m"
            {
#line 164 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__InitialInsts_38, check_hlds__modecheck_call__ArgOffset_27, &check_hlds__modecheck_call__InstVarSub_39, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65);
            }
#line 167 "modecheck_call.m"
            {
#line 167 "modecheck_call.m"
              check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(check_hlds__modecheck_call__ProcInfo_32, check_hlds__modecheck_call__Purity_24, check_hlds__modecheck_call__ProcArgModes_37, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__InstVarSub_39, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_54);
#line 167 "modecheck_call.m"
              return;
            }
#line 144 "modecheck_call.m"
          }
#line 169 "modecheck_call.m"
        else
#line 173 "modecheck_call.m"
          {
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__TypeCtorInfo_98_98;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__OldErrors_40;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__WaitingVars0_41;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__RevMatchingProcIds_42;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__WaitingVars1_43;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__NewErrors_51;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Errors_52;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_68_68;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_76_76;

#line 173 "modecheck_call.m"
            {
#line 173 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, &check_hlds__modecheck_call__OldErrors_40);
            }
#line 174 "modecheck_call.m"
            {
#line 174 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_68_68);
            }
#line 1960 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__TypeCtorInfo_98_98 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 176 "modecheck_call.m"
            {
#line 176 "modecheck_call.m"
              parse_tree__set_of_var__init_1_p_0(check_hlds__modecheck_call__TypeCtorInfo_98_98, &check_hlds__modecheck_call__WaitingVars0_41);
            }
#line 177 "modecheck_call.m"
            {
#line 177 "modecheck_call.m"
              check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_p_0(check_hlds__modecheck_call__ProcIds_26, check_hlds__modecheck_call__Procs_25, check_hlds__modecheck_call__ArgVars0_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_call__RevMatchingProcIds_42, check_hlds__modecheck_call__WaitingVars0_41, &check_hlds__modecheck_call__WaitingVars1_43, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70);
            }
#line 186 "modecheck_call.m"
            if ((check_hlds__modecheck_call__RevMatchingProcIds_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "modecheck_call.m"
              {
#line 182 "modecheck_call.m"
                {
#line 182 "modecheck_call.m"
                  check_hlds__modecheck_call__no_matching_modes_7_p_0(check_hlds__modecheck_call__PredId_11, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__DeterminismKnown_12, check_hlds__modecheck_call__WaitingVars1_43, check_hlds__modecheck_call__TheProcId_14, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_76_76);
                }
#line 184 "modecheck_call.m"
                *check_hlds__modecheck_call__ArgVars_16 = check_hlds__modecheck_call__ArgVars0_15;
#line 185 "modecheck_call.m"
                *check_hlds__modecheck_call__ExtraGoals_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 181 "modecheck_call.m"
              }
#line 186 "modecheck_call.m"
            else
#line 187 "modecheck_call.m"
              {
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__MatchingProcIds_46;
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__CalleeModeErrors_47;
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ProcInfo_81;
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ProcArgModes_82;
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__InstVarSub_83;
#line 191 "modecheck_call.m"
                MR_Box check_hlds__modecheck_call__conv2_ProcInfo_81;

#line 188 "modecheck_call.m"
                {
#line 188 "modecheck_call.m"
                  mercury__list__reverse_2_p_0((MR_Word) &check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0, check_hlds__modecheck_call__RevMatchingProcIds_42, &check_hlds__modecheck_call__MatchingProcIds_46);
                }
#line 189 "modecheck_call.m"
                {
#line 189 "modecheck_call.m"
                  check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70, check_hlds__modecheck_call__MatchingProcIds_46, check_hlds__modecheck_call__Procs_25, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__TheProcId_14, &check_hlds__modecheck_call__InstVarSub_83, &check_hlds__modecheck_call__ProcArgModes_82);
                }
#line 191 "modecheck_call.m"
                {
#line 191 "modecheck_call.m"
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__Procs_25, ((MR_Box) (*check_hlds__modecheck_call__TheProcId_14)), &check_hlds__modecheck_call__conv2_ProcInfo_81);
                }
#line 191 "modecheck_call.m"
                check_hlds__modecheck_call__ProcInfo_81 = ((MR_Word) check_hlds__modecheck_call__conv2_ProcInfo_81);
#line 192 "modecheck_call.m"
                {
#line 192 "modecheck_call.m"
                  check_hlds__modecheck_call__CalleeModeErrors_47 = hlds__hlds_pred__mode_errors_1_f_0(check_hlds__modecheck_call__ProcInfo_81);
                }
#line 205 "modecheck_call.m"
                if ((check_hlds__modecheck_call__CalleeModeErrors_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "modecheck_call.m"
                  {
#line 207 "modecheck_call.m"
                    check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(check_hlds__modecheck_call__ProcInfo_81, check_hlds__modecheck_call__Purity_24, check_hlds__modecheck_call__ProcArgModes_82, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__InstVarSub_83, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_76_76);
                  }
#line 205 "modecheck_call.m"
                else
#line 194 "modecheck_call.m"
                  {
#line 194 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInsts_50;
#line 194 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_73_73;
#line 194 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_74_74;
#line 194 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__WaitingVars_78;

#line 196 "modecheck_call.m"
                    *check_hlds__modecheck_call__ArgVars_16 = check_hlds__modecheck_call__ArgVars0_15;
#line 197 "modecheck_call.m"
                    {
#line 197 "modecheck_call.m"
                      check_hlds__modecheck_call__WaitingVars_78 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__modecheck_call__TypeCtorInfo_98_98, *check_hlds__modecheck_call__ArgVars_16);
                    }
#line 198 "modecheck_call.m"
                    *check_hlds__modecheck_call__ExtraGoals_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "modecheck_call.m"
                    {
#line 199 "modecheck_call.m"
                      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_call__InstMap_29, *check_hlds__modecheck_call__ArgVars_16, &check_hlds__modecheck_call__ArgInsts_50);
                    }
#line 200 "modecheck_call.m"
                    {
#line 200 "modecheck_call.m"
                      check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_73_73);
                    }
#line 202 "modecheck_call.m"
                    {
#line 202 "modecheck_call.m"
                      check_hlds__modecheck_call__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_74_74, 1) = ((MR_Box) (*check_hlds__modecheck_call__ArgVars_16));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_74_74, 2) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_50));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_74_74, 3) = ((MR_Box) (check_hlds__modecheck_call__PredId_11));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_74_74, 4) = ((MR_Box) (*check_hlds__modecheck_call__TheProcId_14));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_74_74, 5) = ((MR_Box) (check_hlds__modecheck_call__CalleeModeErrors_47));
#line 202 "modecheck_call.m"
                    }
#line 201 "modecheck_call.m"
                    {
#line 201 "modecheck_call.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_78, check_hlds__modecheck_call__V_74_74, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_73_73, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_76_76);
                    }
#line 194 "modecheck_call.m"
                  }
#line 187 "modecheck_call.m"
              }
#line 213 "modecheck_call.m"
            {
#line 213 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_76_76, &check_hlds__modecheck_call__NewErrors_51);
            }
#line 214 "modecheck_call.m"
            {
#line 214 "modecheck_call.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modecheck_call__OldErrors_40, check_hlds__modecheck_call__NewErrors_51, &check_hlds__modecheck_call__Errors_52);
            }
#line 215 "modecheck_call.m"
            {
#line 215 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_call__Errors_52, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_76_76, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_54);
#line 215 "modecheck_call.m"
              return;
            }
#line 173 "modecheck_call.m"
          }
#line 169 "modecheck_call.m"
      }
#line 103 "modecheck_call.m"
  }
#line 41 "modecheck_call.m"
}

#line 293 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__293__1_2_p_0(
#line 293 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ExtraGoals_11,
#line 293 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_19)
#line 293 "modecheck_call.m"
{
#line 293 "modecheck_call.m"
  {
#line 293 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 293 "modecheck_call.m"
    {
#line 293 "modecheck_call.m"
      return check_hlds__modecheck_call__succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(check_hlds__modecheck_call__ExtraGoals_11, check_hlds__modecheck_call__HeadVar__2_19);
    }
#line 293 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 293 "modecheck_call.m"
  }
#line 293 "modecheck_call.m"
}

#line 360 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0(
#line 360 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 360 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 360 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3)
#line 360 "modecheck_call.m"
{
#line 360 "modecheck_call.m"
  {
#line 360 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 360 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__CastX_12 = (MR_Integer) check_hlds__modecheck_call__HeadVar__2_2;
#line 360 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__CastY_13 = (MR_Integer) check_hlds__modecheck_call__HeadVar__3_3;

#line 360 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CastX_12 == check_hlds__modecheck_call__CastY_13);
#line 360 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 2168 "check_hlds.modecheck_call.c"
      *check_hlds__modecheck_call__HeadVar__1_1 = (MR_Integer) 0;
#line 360 "modecheck_call.m"
    else
#line 360 "modecheck_call.m"
      {
#line 360 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 2)));
#line 360 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 0)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 1)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 2)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_10_10;

#line 360 "modecheck_call.m"
        {
#line 360 "modecheck_call.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modecheck_call__V_10_10, check_hlds__modecheck_call__V_4_4, check_hlds__modecheck_call__V_7_7);
        }
#line 2194 "check_hlds.modecheck_call.c"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_10_10 == (MR_Integer) 0);
#line 360 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 360 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 360 "modecheck_call.m"
          *check_hlds__modecheck_call__HeadVar__1_1 = check_hlds__modecheck_call__V_10_10;
#line 360 "modecheck_call.m"
        else
#line 360 "modecheck_call.m"
          {
#line 360 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_11_11;

#line 360 "modecheck_call.m"
            {
#line 360 "modecheck_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_2[0], &check_hlds__modecheck_call__V_11_11, ((MR_Box) (check_hlds__modecheck_call__V_5_5)), ((MR_Box) (check_hlds__modecheck_call__V_8_8)));
            }
#line 2214 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_11_11 == (MR_Integer) 0);
#line 360 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 360 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 360 "modecheck_call.m"
              *check_hlds__modecheck_call__HeadVar__1_1 = check_hlds__modecheck_call__V_11_11;
#line 360 "modecheck_call.m"
            else
#line 360 "modecheck_call.m"
              {
#line 360 "modecheck_call.m"
                {
#line 360 "modecheck_call.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_1[2], check_hlds__modecheck_call__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_call__V_6_6)), ((MR_Box) (check_hlds__modecheck_call__V_9_9)));
#line 360 "modecheck_call.m"
                  return;
                }
#line 360 "modecheck_call.m"
              }
#line 360 "modecheck_call.m"
          }
#line 360 "modecheck_call.m"
      }
#line 360 "modecheck_call.m"
  }
#line 360 "modecheck_call.m"
}

#line 360 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0(
#line 360 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 360 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2)
#line 360 "modecheck_call.m"
{
#line 360 "modecheck_call.m"
  {
#line 360 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 360 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__CastX_9 = (MR_Integer) check_hlds__modecheck_call__HeadVar__1_1;
#line 360 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__CastY_10 = (MR_Integer) check_hlds__modecheck_call__HeadVar__2_2;

#line 360 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CastX_9 == check_hlds__modecheck_call__CastY_10);
#line 360 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 360 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 360 "modecheck_call.m"
    else
#line 360 "modecheck_call.m"
      {
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__TypeInfo_12_12;
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__TypeInfo_13_13;
#line 360 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 2)));
#line 360 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 360 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 2)));

#line 2289 "check_hlds.modecheck_call.c"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_3_3 == check_hlds__modecheck_call__V_6_6);
#line 360 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 360 "modecheck_call.m"
          {
#line 2295 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_call_scalar_common_2[0];
#line 2297 "check_hlds.modecheck_call.c"
            {
#line 2299 "check_hlds.modecheck_call.c"
              check_hlds__modecheck_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_call__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_call__V_4_4)), ((MR_Box) (check_hlds__modecheck_call__V_7_7)));
            }
#line 360 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 360 "modecheck_call.m"
              {
#line 2306 "check_hlds.modecheck_call.c"
                check_hlds__modecheck_call__TypeInfo_13_13 = (MR_Word) &check_hlds__modecheck_call_scalar_common_1[2];
#line 2308 "check_hlds.modecheck_call.c"
                {
#line 2310 "check_hlds.modecheck_call.c"
                  return check_hlds__modecheck_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_call__TypeInfo_13_13, ((MR_Box) (check_hlds__modecheck_call__V_5_5)), ((MR_Box) (check_hlds__modecheck_call__V_8_8)));
                }
#line 360 "modecheck_call.m"
              }
#line 360 "modecheck_call.m"
          }
#line 360 "modecheck_call.m"
      }
#line 360 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 360 "modecheck_call.m"
  }
#line 360 "modecheck_call.m"
}

#line 659 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0(
#line 659 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 659 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 659 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3)
#line 659 "modecheck_call.m"
{
#line 659 "modecheck_call.m"
  {
#line 659 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 659 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Cast_HeadVar1_4 = (MR_Integer) check_hlds__modecheck_call__HeadVar__2_2;
#line 659 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Cast_HeadVar2_5 = (MR_Integer) check_hlds__modecheck_call__HeadVar__3_3;

#line 659 "modecheck_call.m"
    {
#line 659 "modecheck_call.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__modecheck_call__HeadVar__1_1, check_hlds__modecheck_call__Cast_HeadVar1_4, check_hlds__modecheck_call__Cast_HeadVar2_5);
#line 659 "modecheck_call.m"
      return;
    }
#line 659 "modecheck_call.m"
  }
#line 659 "modecheck_call.m"
}

#line 659 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0(
#line 659 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_1,
#line 659 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2)
#line 659 "modecheck_call.m"
{
#line 2367 "check_hlds.modecheck_call.c"
  {
#line 2369 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__2_1 == check_hlds__modecheck_call__HeadVar__2_2);

#line 2372 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 2374 "check_hlds.modecheck_call.c"
  }
#line 659 "modecheck_call.m"
}

#line 766 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__compare_liveness_list_3_p_0(
#line 766 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 766 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 766 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3)
#line 766 "modecheck_call.m"
{
#line 769 "modecheck_call.m"
  {
#line 769 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 769 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "modecheck_call.m"
      if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 2;
#line 769 "modecheck_call.m"
      else
#line 772 "modecheck_call.m"
        {
#line 773 "modecheck_call.m"
          {
#line 773 "modecheck_call.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_liveness_list\'/3", (MR_String) "length mismatch");
#line 773 "modecheck_call.m"
            return;
          }
#line 772 "modecheck_call.m"
        }
#line 769 "modecheck_call.m"
    else
#line 769 "modecheck_call.m"
      {
#line 769 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 769 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));

#line 769 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "modecheck_call.m"
          {
#line 771 "modecheck_call.m"
            {
#line 771 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_liveness_list\'/3", (MR_String) "length mismatch");
#line 771 "modecheck_call.m"
              return;
            }
#line 770 "modecheck_call.m"
          }
#line 769 "modecheck_call.m"
        else
#line 774 "modecheck_call.m"
          {
#line 774 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__LiveB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 774 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__LiveBs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 774 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Result1_22;

#line 776 "modecheck_call.m"
            {
#line 776 "modecheck_call.m"
              check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__V_23_23, check_hlds__modecheck_call__LiveBs_19, &check_hlds__modecheck_call__Result1_22);
            }
#line 2452 "check_hlds.modecheck_call.c"
            if ((check_hlds__modecheck_call__V_24_24 == (MR_Integer) 1))
#line 2454 "check_hlds.modecheck_call.c"
              if ((check_hlds__modecheck_call__LiveB_18 == (MR_Integer) 1))
#line 811 "modecheck_call.m"
                *check_hlds__modecheck_call__HeadVar__3_3 = check_hlds__modecheck_call__Result1_22;
#line 2458 "check_hlds.modecheck_call.c"
              else
#line 803 "modecheck_call.m"
                if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 0))
#line 803 "modecheck_call.m"
                  *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 0;
#line 803 "modecheck_call.m"
                else
#line 803 "modecheck_call.m"
                  if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 3))
#line 806 "modecheck_call.m"
                    *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                  else
#line 803 "modecheck_call.m"
                    if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 2))
#line 804 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 0;
#line 803 "modecheck_call.m"
                    else
#line 805 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 3;
#line 2480 "check_hlds.modecheck_call.c"
            else
#line 2482 "check_hlds.modecheck_call.c"
              if ((check_hlds__modecheck_call__LiveB_18 == (MR_Integer) 1))
#line 803 "modecheck_call.m"
                if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 0))
#line 809 "modecheck_call.m"
                  *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                else
#line 803 "modecheck_call.m"
                  if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 3))
#line 810 "modecheck_call.m"
                    *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                  else
#line 803 "modecheck_call.m"
                    if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 2))
#line 808 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 1;
#line 803 "modecheck_call.m"
                    else
#line 807 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 1;
#line 2504 "check_hlds.modecheck_call.c"
              else
#line 811 "modecheck_call.m"
                *check_hlds__modecheck_call__HeadVar__3_3 = check_hlds__modecheck_call__Result1_22;
#line 774 "modecheck_call.m"
          }
#line 769 "modecheck_call.m"
      }
#line 769 "modecheck_call.m"
  }
#line 766 "modecheck_call.m"
}

#line 749 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__compare_inst_list_2_6_p_0(
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_1,
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 749 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__5_5,
#line 749 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__6_6)
#line 749 "modecheck_call.m"
{
#line 753 "modecheck_call.m"
  {
#line 753 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 753 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "modecheck_call.m"
      {
#line 753 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 753 "modecheck_call.m"
          {
#line 753 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 753 "modecheck_call.m"
              {
#line 753 "modecheck_call.m"
                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 2;
#line 753 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 753 "modecheck_call.m"
              }
#line 753 "modecheck_call.m"
          }
#line 753 "modecheck_call.m"
      }
#line 753 "modecheck_call.m"
    else
#line 753 "modecheck_call.m"
      {
#line 753 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 753 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 753 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_38_38;
#line 753 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_39_39;
#line 753 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_40_40;
#line 753 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_41_41;

#line 754 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 754 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 754 "modecheck_call.m"
          {
#line 754 "modecheck_call.m"
            check_hlds__modecheck_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 0)));
#line 754 "modecheck_call.m"
            check_hlds__modecheck_call__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 1)));
#line 755 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 755 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 755 "modecheck_call.m"
              {
#line 755 "modecheck_call.m"
                check_hlds__modecheck_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__5_5, (MR_Integer) 0)));
#line 755 "modecheck_call.m"
                check_hlds__modecheck_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__5_5, (MR_Integer) 1)));
#line 753 "modecheck_call.m"
                if ((check_hlds__modecheck_call__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 755 "modecheck_call.m"
                  {
#line 755 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_20_20;
#line 755 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__B_mi_A_49;

#line 843 "modecheck_call.m"
                    {
#line 843 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                    }
#line 845 "modecheck_call.m"
                    if (check_hlds__modecheck_call__succeeded)
#line 844 "modecheck_call.m"
                      check_hlds__modecheck_call__B_mi_A_49 = (MR_Integer) 1;
#line 845 "modecheck_call.m"
                    else
#line 846 "modecheck_call.m"
                      check_hlds__modecheck_call__B_mi_A_49 = (MR_Integer) 0;
#line 757 "modecheck_call.m"
                    check_hlds__modecheck_call__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "modecheck_call.m"
                    {
#line 838 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                    }
#line 2631 "check_hlds.modecheck_call.c"
                    if (check_hlds__modecheck_call__succeeded)
#line 2633 "check_hlds.modecheck_call.c"
                      {
#line 2635 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result0_17;
#line 2637 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result1_18;

#line 849 "modecheck_call.m"
                        if ((check_hlds__modecheck_call__B_mi_A_49 == (MR_Integer) 0))
#line 848 "modecheck_call.m"
                          check_hlds__modecheck_call__Result0_17 = (MR_Integer) 0;
#line 849 "modecheck_call.m"
                        else
#line 851 "modecheck_call.m"
                          {
#line 851 "modecheck_call.m"
                            MR_Word check_hlds__modecheck_call__B_mf_A_55;

#line 901 "modecheck_call.m"
                            {
#line 901 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                            }
#line 905 "modecheck_call.m"
                            if (check_hlds__modecheck_call__succeeded)
#line 904 "modecheck_call.m"
                              check_hlds__modecheck_call__B_mf_A_55 = (MR_Integer) 1;
#line 905 "modecheck_call.m"
                            else
#line 906 "modecheck_call.m"
                              check_hlds__modecheck_call__B_mf_A_55 = (MR_Integer) 0;
#line 893 "modecheck_call.m"
                            {
#line 893 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                            }
#line 2669 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 909 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__B_mf_A_55 == (MR_Integer) 0))
#line 908 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_17 = (MR_Integer) 0;
#line 909 "modecheck_call.m"
                              else
#line 911 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_17 = (MR_Integer) 2;
#line 2679 "check_hlds.modecheck_call.c"
                            else
#line 909 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__B_mf_A_55 == (MR_Integer) 0))
#line 910 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_17 = (MR_Integer) 3;
#line 909 "modecheck_call.m"
                              else
#line 909 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_17 = (MR_Integer) 1;
#line 851 "modecheck_call.m"
                          }
#line 757 "modecheck_call.m"
                        {
#line 757 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_20_20, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_18);
                        }
#line 2696 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2698 "check_hlds.modecheck_call.c"
                          {
#line 803 "modecheck_call.m"
                            if ((check_hlds__modecheck_call__Result0_17 == (MR_Integer) 0))
#line 803 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 0))
#line 803 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 0;
#line 803 "modecheck_call.m"
                              else
#line 803 "modecheck_call.m"
                                if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 3))
#line 806 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                else
#line 803 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 2))
#line 804 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 0;
#line 803 "modecheck_call.m"
                                  else
#line 805 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                            else
#line 803 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__Result0_17 == (MR_Integer) 3))
#line 812 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                              else
#line 803 "modecheck_call.m"
                                if ((check_hlds__modecheck_call__Result0_17 == (MR_Integer) 2))
#line 811 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = check_hlds__modecheck_call__Result1_18;
#line 803 "modecheck_call.m"
                                else
#line 803 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 0))
#line 809 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                  else
#line 803 "modecheck_call.m"
                                    if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 3))
#line 810 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                    else
#line 803 "modecheck_call.m"
                                      if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 2))
#line 808 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 803 "modecheck_call.m"
                                      else
#line 807 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 803 "modecheck_call.m"
                            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 2758 "check_hlds.modecheck_call.c"
                          }
#line 2760 "check_hlds.modecheck_call.c"
                      }
#line 2762 "check_hlds.modecheck_call.c"
                    else
#line 2764 "check_hlds.modecheck_call.c"
                      {
#line 2766 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result1_79;

#line 757 "modecheck_call.m"
                        {
#line 757 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_20_20, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_79);
                        }
#line 2774 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2776 "check_hlds.modecheck_call.c"
                          {
#line 2778 "check_hlds.modecheck_call.c"
                            if ((check_hlds__modecheck_call__B_mi_A_49 == (MR_Integer) 0))
#line 812 "modecheck_call.m"
                              *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 2782 "check_hlds.modecheck_call.c"
                            else
#line 803 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__Result1_79 == (MR_Integer) 0))
#line 809 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                              else
#line 803 "modecheck_call.m"
                                if ((check_hlds__modecheck_call__Result1_79 == (MR_Integer) 3))
#line 810 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                else
#line 803 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_79 == (MR_Integer) 2))
#line 808 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 803 "modecheck_call.m"
                                  else
#line 807 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 2804 "check_hlds.modecheck_call.c"
                            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 2806 "check_hlds.modecheck_call.c"
                          }
#line 2808 "check_hlds.modecheck_call.c"
                      }
#line 755 "modecheck_call.m"
                  }
#line 753 "modecheck_call.m"
                else
#line 760 "modecheck_call.m"
                  {
#line 760 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInst_26;
#line 760 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInsts_27;
#line 760 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__4_4, (MR_Integer) 0)));
#line 760 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_34_34;
#line 760 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_35_35;
#line 760 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__B_mi_A_65;

#line 760 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 760 "modecheck_call.m"
                    if (check_hlds__modecheck_call__succeeded)
#line 760 "modecheck_call.m"
                      {
#line 760 "modecheck_call.m"
                        check_hlds__modecheck_call__ArgInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_33_33, (MR_Integer) 0)));
#line 760 "modecheck_call.m"
                        check_hlds__modecheck_call__ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_33_33, (MR_Integer) 1)));
#line 761 "modecheck_call.m"
                        {
#line 761 "modecheck_call.m"
                          check_hlds__modecheck_call__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 761 "modecheck_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_34_34, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgInst_26));
#line 761 "modecheck_call.m"
                        }
#line 843 "modecheck_call.m"
                        {
#line 843 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                        }
#line 845 "modecheck_call.m"
                        if (check_hlds__modecheck_call__succeeded)
#line 844 "modecheck_call.m"
                          check_hlds__modecheck_call__B_mi_A_65 = (MR_Integer) 1;
#line 845 "modecheck_call.m"
                        else
#line 846 "modecheck_call.m"
                          check_hlds__modecheck_call__B_mi_A_65 = (MR_Integer) 0;
#line 762 "modecheck_call.m"
                        {
#line 762 "modecheck_call.m"
                          check_hlds__modecheck_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 762 "modecheck_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_27));
#line 762 "modecheck_call.m"
                        }
#line 838 "modecheck_call.m"
                        {
#line 838 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                        }
#line 2873 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2875 "check_hlds.modecheck_call.c"
                          {
#line 2877 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result0_31;
#line 2879 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result1_32;

#line 849 "modecheck_call.m"
                            if ((check_hlds__modecheck_call__B_mi_A_65 == (MR_Integer) 0))
#line 848 "modecheck_call.m"
                              check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 849 "modecheck_call.m"
                            else
#line 851 "modecheck_call.m"
                              {
#line 851 "modecheck_call.m"
                                MR_Word check_hlds__modecheck_call__ArgInst_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_34_34, (MR_Integer) 0)));
#line 851 "modecheck_call.m"
                                MR_Word check_hlds__modecheck_call__Arg_mf_B_69;

#line 873 "modecheck_call.m"
                                {
#line 873 "modecheck_call.m"
                                  check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__ArgInst_67, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                }
#line 877 "modecheck_call.m"
                                if (check_hlds__modecheck_call__succeeded)
#line 876 "modecheck_call.m"
                                  check_hlds__modecheck_call__Arg_mf_B_69 = (MR_Integer) 1;
#line 877 "modecheck_call.m"
                                else
#line 878 "modecheck_call.m"
                                  check_hlds__modecheck_call__Arg_mf_B_69 = (MR_Integer) 0;
#line 865 "modecheck_call.m"
                                {
#line 865 "modecheck_call.m"
                                  check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__ArgInst_67, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                }
#line 2913 "check_hlds.modecheck_call.c"
                                if (check_hlds__modecheck_call__succeeded)
#line 2915 "check_hlds.modecheck_call.c"
                                  if ((check_hlds__modecheck_call__Arg_mf_B_69 == (MR_Integer) 0))
#line 880 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 2919 "check_hlds.modecheck_call.c"
                                  else
#line 2921 "check_hlds.modecheck_call.c"
                                    {
#line 2923 "check_hlds.modecheck_call.c"
                                      MR_Word check_hlds__modecheck_call__B_mf_A_71;

#line 901 "modecheck_call.m"
                                      {
#line 901 "modecheck_call.m"
                                        check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                      }
#line 905 "modecheck_call.m"
                                      if (check_hlds__modecheck_call__succeeded)
#line 904 "modecheck_call.m"
                                        check_hlds__modecheck_call__B_mf_A_71 = (MR_Integer) 1;
#line 905 "modecheck_call.m"
                                      else
#line 906 "modecheck_call.m"
                                        check_hlds__modecheck_call__B_mf_A_71 = (MR_Integer) 0;
#line 893 "modecheck_call.m"
                                      {
#line 893 "modecheck_call.m"
                                        check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                      }
#line 2944 "check_hlds.modecheck_call.c"
                                      if (check_hlds__modecheck_call__succeeded)
#line 909 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__B_mf_A_71 == (MR_Integer) 0))
#line 908 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 909 "modecheck_call.m"
                                        else
#line 911 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 2;
#line 2954 "check_hlds.modecheck_call.c"
                                      else
#line 909 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__B_mf_A_71 == (MR_Integer) 0))
#line 910 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 3;
#line 909 "modecheck_call.m"
                                        else
#line 909 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 2964 "check_hlds.modecheck_call.c"
                                    }
#line 2966 "check_hlds.modecheck_call.c"
                                else
#line 2968 "check_hlds.modecheck_call.c"
                                  if ((check_hlds__modecheck_call__Arg_mf_B_69 == (MR_Integer) 0))
#line 2970 "check_hlds.modecheck_call.c"
                                    {
#line 2972 "check_hlds.modecheck_call.c"
                                      MR_Word check_hlds__modecheck_call__B_mf_A_89;

#line 901 "modecheck_call.m"
                                      {
#line 901 "modecheck_call.m"
                                        check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                      }
#line 905 "modecheck_call.m"
                                      if (check_hlds__modecheck_call__succeeded)
#line 904 "modecheck_call.m"
                                        check_hlds__modecheck_call__B_mf_A_89 = (MR_Integer) 1;
#line 905 "modecheck_call.m"
                                      else
#line 906 "modecheck_call.m"
                                        check_hlds__modecheck_call__B_mf_A_89 = (MR_Integer) 0;
#line 893 "modecheck_call.m"
                                      {
#line 893 "modecheck_call.m"
                                        check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                      }
#line 2993 "check_hlds.modecheck_call.c"
                                      if (check_hlds__modecheck_call__succeeded)
#line 909 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__B_mf_A_89 == (MR_Integer) 0))
#line 908 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 909 "modecheck_call.m"
                                        else
#line 911 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 2;
#line 3003 "check_hlds.modecheck_call.c"
                                      else
#line 909 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__B_mf_A_89 == (MR_Integer) 0))
#line 910 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 3;
#line 909 "modecheck_call.m"
                                        else
#line 909 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 3013 "check_hlds.modecheck_call.c"
                                    }
#line 3015 "check_hlds.modecheck_call.c"
                                  else
#line 881 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 851 "modecheck_call.m"
                              }
#line 762 "modecheck_call.m"
                            {
#line 762 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_35_35, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_32);
                            }
#line 3026 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 3028 "check_hlds.modecheck_call.c"
                              {
#line 803 "modecheck_call.m"
                                if ((check_hlds__modecheck_call__Result0_31 == (MR_Integer) 0))
#line 803 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 0))
#line 803 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 0;
#line 803 "modecheck_call.m"
                                  else
#line 803 "modecheck_call.m"
                                    if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 3))
#line 806 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                    else
#line 803 "modecheck_call.m"
                                      if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 2))
#line 804 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 0;
#line 803 "modecheck_call.m"
                                      else
#line 805 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                else
#line 803 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result0_31 == (MR_Integer) 3))
#line 812 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                  else
#line 803 "modecheck_call.m"
                                    if ((check_hlds__modecheck_call__Result0_31 == (MR_Integer) 2))
#line 811 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = check_hlds__modecheck_call__Result1_32;
#line 803 "modecheck_call.m"
                                    else
#line 803 "modecheck_call.m"
                                      if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 0))
#line 809 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                      else
#line 803 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 3))
#line 810 "modecheck_call.m"
                                          *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                        else
#line 803 "modecheck_call.m"
                                          if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 2))
#line 808 "modecheck_call.m"
                                            *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 803 "modecheck_call.m"
                                          else
#line 807 "modecheck_call.m"
                                            *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 803 "modecheck_call.m"
                                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 3088 "check_hlds.modecheck_call.c"
                              }
#line 3090 "check_hlds.modecheck_call.c"
                          }
#line 3092 "check_hlds.modecheck_call.c"
                        else
#line 3094 "check_hlds.modecheck_call.c"
                          {
#line 3096 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result1_94;

#line 762 "modecheck_call.m"
                            {
#line 762 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_35_35, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_94);
                            }
#line 3104 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 3106 "check_hlds.modecheck_call.c"
                              {
#line 3108 "check_hlds.modecheck_call.c"
                                if ((check_hlds__modecheck_call__B_mi_A_65 == (MR_Integer) 0))
#line 812 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 3112 "check_hlds.modecheck_call.c"
                                else
#line 803 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_94 == (MR_Integer) 0))
#line 809 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                  else
#line 803 "modecheck_call.m"
                                    if ((check_hlds__modecheck_call__Result1_94 == (MR_Integer) 3))
#line 810 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 803 "modecheck_call.m"
                                    else
#line 803 "modecheck_call.m"
                                      if ((check_hlds__modecheck_call__Result1_94 == (MR_Integer) 2))
#line 808 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 803 "modecheck_call.m"
                                      else
#line 807 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 3134 "check_hlds.modecheck_call.c"
                                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 3136 "check_hlds.modecheck_call.c"
                              }
#line 3138 "check_hlds.modecheck_call.c"
                          }
#line 760 "modecheck_call.m"
                      }
#line 760 "modecheck_call.m"
                  }
#line 755 "modecheck_call.m"
              }
#line 754 "modecheck_call.m"
          }
#line 753 "modecheck_call.m"
      }
#line 753 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 753 "modecheck_call.m"
  }
#line 749 "modecheck_call.m"
}

#line 499 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
#line 499 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 499 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_2,
#line 499 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3,
#line 499 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__4_4)
#line 499 "modecheck_call.m"
{
#line 502 "modecheck_call.m"
  {
#line 502 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 502 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "modecheck_call.m"
      {
#line 502 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "modecheck_call.m"
      }
#line 502 "modecheck_call.m"
    else
#line 504 "modecheck_call.m"
      {
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Inst_9;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Insts_10;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLive_11;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLives_12;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ModuleInfo_13;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InstMap_14;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__VarTypes_15;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Inst0_16;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Type_17;
#line 504 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLive0_18;

#line 505 "modecheck_call.m"
        {
#line 505 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__ModuleInfo_13);
        }
#line 506 "modecheck_call.m"
        {
#line 506 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__InstMap_14);
        }
#line 507 "modecheck_call.m"
        {
#line 507 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__VarTypes_15);
        }
#line 508 "modecheck_call.m"
        {
#line 508 "modecheck_call.m"
          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_call__InstMap_14, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__Inst0_16);
        }
#line 509 "modecheck_call.m"
        {
#line 509 "modecheck_call.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_call__VarTypes_15, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__Type_17);
        }
#line 510 "modecheck_call.m"
        {
#line 510 "modecheck_call.m"
          check_hlds__mode_util__normalise_inst_4_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Type_17, check_hlds__modecheck_call__Inst0_16, &check_hlds__modecheck_call__Inst_9);
        }
#line 512 "modecheck_call.m"
        {
#line 512 "modecheck_call.m"
          check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_call__ModeInfo_2, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__IsLive0_18);
        }
#line 516 "modecheck_call.m"
        if ((check_hlds__modecheck_call__IsLive0_18 == (MR_Integer) 1))
#line 528 "modecheck_call.m"
          {
#line 524 "modecheck_call.m"
            {
#line 524 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Inst_9);
            }
#line 524 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 525 "modecheck_call.m"
              {
#line 525 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_is_mostly_unique_2_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Inst_9);
              }
#line 528 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 527 "modecheck_call.m"
              check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 1;
#line 528 "modecheck_call.m"
            else
#line 529 "modecheck_call.m"
              check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 0;
#line 528 "modecheck_call.m"
          }
#line 516 "modecheck_call.m"
        else
#line 515 "modecheck_call.m"
          check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 0;
#line 533 "modecheck_call.m"
        {
#line 533 "modecheck_call.m"
          check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(check_hlds__modecheck_call__Vars_7, check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__Insts_10, &check_hlds__modecheck_call__IsLives_12);
        }
#line 504 "modecheck_call.m"
        {
#line 504 "modecheck_call.m"
          MR_Word base;
#line 504 "modecheck_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "modecheck_call.m"
          *check_hlds__modecheck_call__HeadVar__3_3 = base;
#line 504 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_call__Inst_9));
#line 504 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_call__Insts_10));
#line 504 "modecheck_call.m"
        }
#line 504 "modecheck_call.m"
        {
#line 504 "modecheck_call.m"
          MR_Word base;
#line 504 "modecheck_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "modecheck_call.m"
          *check_hlds__modecheck_call__HeadVar__4_4 = base;
#line 504 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_call__IsLive_11));
#line 504 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_call__IsLives_12));
#line 504 "modecheck_call.m"
        }
#line 504 "modecheck_call.m"
      }
#line 502 "modecheck_call.m"
  }
#line 499 "modecheck_call.m"
}

#line 427 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcInfo_11,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Purity_12,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcArgModes_13,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_14,
#line 427 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ArgOffset_15,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__InstVarSub_16,
#line 427 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_17,
#line 427 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 427 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28,
#line 427 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29)
#line 427 "modecheck_call.m"
{
#line 432 "modecheck_call.m"
  {
#line 432 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo_20;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__MayInitSolverVars_21;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts0_22;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_23;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts0_24;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_25;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__NeverSucceeds_26;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32;
#line 432 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33;

#line 433 "modecheck_call.m"
    {
#line 433 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__ModuleInfo_20);
    }
#line 434 "modecheck_call.m"
    {
#line 434 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__MayInitSolverVars_21);
    }
#line 439 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Purity_12 == (MR_Integer) 2);
#line 439 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 440 "modecheck_call.m"
      {
#line 440 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28);
      }
#line 443 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 442 "modecheck_call.m"
      {
#line 442 "modecheck_call.m"
        {
#line 442 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 442 "modecheck_call.m"
      }
#line 443 "modecheck_call.m"
    else
#line 442 "modecheck_call.m"
      check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28;
#line 447 "modecheck_call.m"
    {
#line 447 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_20, check_hlds__modecheck_call__ProcArgModes_13, &check_hlds__modecheck_call__InitialInsts0_22);
    }
#line 448 "modecheck_call.m"
    {
#line 448 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_16, check_hlds__modecheck_call__InitialInsts0_22, &check_hlds__modecheck_call__InitialInsts_23);
    }
#line 449 "modecheck_call.m"
    {
#line 449 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_20, check_hlds__modecheck_call__ProcArgModes_13, &check_hlds__modecheck_call__FinalInsts0_24);
    }
#line 450 "modecheck_call.m"
    {
#line 450 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_16, check_hlds__modecheck_call__FinalInsts0_24, &check_hlds__modecheck_call__FinalInsts_25);
    }
#line 451 "modecheck_call.m"
    {
#line 451 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__ArgVars0_14, check_hlds__modecheck_call__InitialInsts_23, check_hlds__modecheck_call__FinalInsts_25, check_hlds__modecheck_call__ArgOffset_15, check_hlds__modecheck_call__ArgVars_17, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 453 "modecheck_call.m"
    {
#line 453 "modecheck_call.m"
      hlds__hlds_pred__proc_info_never_succeeds_2_p_0(check_hlds__modecheck_call__ProcInfo_11, &check_hlds__modecheck_call__NeverSucceeds_26);
    }
#line 458 "modecheck_call.m"
    if ((check_hlds__modecheck_call__NeverSucceeds_26 == (MR_Integer) 0))
#line 459 "modecheck_call.m"
      check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32;
#line 458 "modecheck_call.m"
    else
#line 455 "modecheck_call.m"
      {
#line 455 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Instmap_27;

#line 456 "modecheck_call.m"
        {
#line 456 "modecheck_call.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_call__Instmap_27);
        }
#line 457 "modecheck_call.m"
        {
#line 457 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_call__Instmap_27, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33);
        }
#line 455 "modecheck_call.m"
      }
#line 461 "modecheck_call.m"
    {
#line 461 "modecheck_call.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(check_hlds__modecheck_call__MayInitSolverVars_21, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29);
#line 461 "modecheck_call.m"
      return;
    }
#line 432 "modecheck_call.m"
  }
#line 427 "modecheck_call.m"
}

#line 328 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_7_p_0(
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredId_8,
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_9,
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__DeterminismKnown_10,
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__WaitingVars_11,
#line 328 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_12,
#line 328 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20,
#line 328 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_21)
#line 328 "modecheck_call.m"
{
#line 333 "modecheck_call.m"
  {
#line 333 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 333 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Preds_14;
#line 333 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredInfo_15;
#line 333 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Markers_16;
#line 340 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_PredInfo_15;

#line 339 "modecheck_call.m"
    {
#line 339 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_preds_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__Preds_14);
    }
#line 340 "modecheck_call.m"
    {
#line 340 "modecheck_call.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_call__Preds_14, ((MR_Box) (check_hlds__modecheck_call__PredId_8)), &check_hlds__modecheck_call__conv0_PredInfo_15);
    }
#line 340 "modecheck_call.m"
    check_hlds__modecheck_call__PredInfo_15 = ((MR_Word) check_hlds__modecheck_call__conv0_PredInfo_15);
#line 341 "modecheck_call.m"
    {
#line 341 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modecheck_call__PredInfo_15, &check_hlds__modecheck_call__Markers_16);
    }
#line 342 "modecheck_call.m"
    {
#line 342 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modecheck_call__Markers_16, (MR_Integer) 3);
    }
#line 351 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 344 "modecheck_call.m"
      {
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Instmap_17;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_23;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InitialInsts_38;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ArgLives_39;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ModuleInfo0_40;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Preds0_41;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__PredInfo0_42;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Context_43;
#line 344 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__Arity_44;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__FinalInsts_45;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Modes_46;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InstVarSet_47;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ModuleInfo_48;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_50_50;
#line 344 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_27_51;
#line 479 "modecheck_call.m"
        MR_Box check_hlds__modecheck_call__conv1_PredInfo0_42;

#line 476 "modecheck_call.m"
        {
#line 476 "modecheck_call.m"
          check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(check_hlds__modecheck_call__ArgVars_9, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__InitialInsts_38, &check_hlds__modecheck_call__ArgLives_39);
        }
#line 477 "modecheck_call.m"
        {
#line 477 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__ModuleInfo0_40);
        }
#line 478 "modecheck_call.m"
        {
#line 478 "modecheck_call.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modecheck_call__ModuleInfo0_40, &check_hlds__modecheck_call__Preds0_41);
        }
#line 479 "modecheck_call.m"
        {
#line 479 "modecheck_call.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_call__Preds0_41, ((MR_Box) (check_hlds__modecheck_call__PredId_8)), &check_hlds__modecheck_call__conv1_PredInfo0_42);
        }
#line 479 "modecheck_call.m"
        check_hlds__modecheck_call__PredInfo0_42 = ((MR_Word) check_hlds__modecheck_call__conv1_PredInfo0_42);
#line 480 "modecheck_call.m"
        {
#line 480 "modecheck_call.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__modecheck_call__PredInfo0_42, &check_hlds__modecheck_call__Context_43);
        }
#line 481 "modecheck_call.m"
        {
#line 481 "modecheck_call.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_1[0], check_hlds__modecheck_call__ArgVars_9, &check_hlds__modecheck_call__Arity_44);
        }
#line 482 "modecheck_call.m"
        {
#line 482 "modecheck_call.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_call__Arity_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), &check_hlds__modecheck_call__FinalInsts_45);
        }
#line 483 "modecheck_call.m"
        {
#line 483 "modecheck_call.m"
          parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modecheck_call__InitialInsts_38, check_hlds__modecheck_call__FinalInsts_45, &check_hlds__modecheck_call__Modes_46);
        }
#line 484 "modecheck_call.m"
        {
#line 484 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__InstVarSet_47);
        }
#line 489 "modecheck_call.m"
        {
#line 489 "modecheck_call.m"
          check_hlds__modecheck_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 489 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_50_50, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgLives_39));
#line 489 "modecheck_call.m"
        }
#line 489 "modecheck_call.m"
        {
#line 489 "modecheck_call.m"
          check_hlds__unify_proc__request_proc_9_p_0(check_hlds__modecheck_call__PredId_8, check_hlds__modecheck_call__Modes_46, check_hlds__modecheck_call__InstVarSet_47, check_hlds__modecheck_call__V_50_50, check_hlds__modecheck_call__DeterminismKnown_10, check_hlds__modecheck_call__Context_43, check_hlds__modecheck_call__TheProcId_12, check_hlds__modecheck_call__ModuleInfo0_40, &check_hlds__modecheck_call__ModuleInfo_48);
        }
#line 492 "modecheck_call.m"
        {
#line 492 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_call__ModuleInfo_48, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_27_51);
        }
#line 497 "modecheck_call.m"
        {
#line 497 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0((MR_Integer) 1, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_27_51, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_23);
        }
#line 349 "modecheck_call.m"
        {
#line 349 "modecheck_call.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_call__Instmap_17);
        }
#line 350 "modecheck_call.m"
        {
#line 350 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_call__Instmap_17, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_23, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_21);
#line 350 "modecheck_call.m"
          return;
        }
#line 344 "modecheck_call.m"
      }
#line 351 "modecheck_call.m"
    else
#line 352 "modecheck_call.m"
      {
#line 352 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InstMap_18;
#line 352 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ArgInsts_19;
#line 352 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_26_26;
#line 352 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_27_27;

#line 352 "modecheck_call.m"
        {
#line 352 "modecheck_call.m"
          *check_hlds__modecheck_call__TheProcId_12 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 353 "modecheck_call.m"
        {
#line 353 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__InstMap_18);
        }
#line 354 "modecheck_call.m"
        {
#line 354 "modecheck_call.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_call__InstMap_18, check_hlds__modecheck_call__ArgVars_9, &check_hlds__modecheck_call__ArgInsts_19);
        }
#line 355 "modecheck_call.m"
        {
#line 355 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_26_26);
        }
#line 357 "modecheck_call.m"
        {
#line 357 "modecheck_call.m"
          check_hlds__modecheck_call__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 357 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 357 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_27_27, 1) = ((MR_Box) (check_hlds__modecheck_call__ArgVars_9));
#line 357 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_27_27, 2) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_19));
#line 357 "modecheck_call.m"
        }
#line 356 "modecheck_call.m"
        {
#line 356 "modecheck_call.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_11, check_hlds__modecheck_call__V_27_27, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_26_26, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_21);
#line 356 "modecheck_call.m"
          return;
        }
#line 352 "modecheck_call.m"
      }
#line 333 "modecheck_call.m"
  }
#line 328 "modecheck_call.m"
}

#line 73 "modecheck_call.m"
MR_bool MR_CALL 
check_hlds__modecheck_call__modes_are_identical_bar_cc_4_p_0(
#line 73 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ProcId_5,
#line 73 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__OtherProcId_6,
#line 73 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredInfo_7,
#line 73 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_8)
#line 73 "modecheck_call.m"
{
#line 586 "modecheck_call.m"
  {
#line 586 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_32_32;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_33_33;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_9;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcInfo_10;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcInfo_11;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgModes_12;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgModes_13;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_14;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherInitialInsts_15;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ArgTypes_16;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_18;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherFinalInsts_19;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgLives_21;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgLives_22;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CompareLives_23;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Detism_24;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherDetism_25;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CanFail_26;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Solns_27;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherCanFail_28;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherSolns_29;
#line 586 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_31_31;
#line 588 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_ProcInfo_10;
#line 589 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv1_OtherProcInfo_11;
#line 745 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_40;
#line 745 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_50;

#line 587 "modecheck_call.m"
    {
#line 587 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__Procs_9);
    }
#line 3777 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3779 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 588 "modecheck_call.m"
    {
#line 588 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_32_32, check_hlds__modecheck_call__TypeCtorInfo_33_33, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__ProcId_5)), &check_hlds__modecheck_call__conv0_ProcInfo_10);
    }
#line 588 "modecheck_call.m"
    check_hlds__modecheck_call__ProcInfo_10 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_10);
#line 589 "modecheck_call.m"
    {
#line 589 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_32_32, check_hlds__modecheck_call__TypeCtorInfo_33_33, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__OtherProcId_6)), &check_hlds__modecheck_call__conv1_OtherProcInfo_11);
    }
#line 589 "modecheck_call.m"
    check_hlds__modecheck_call__OtherProcInfo_11 = ((MR_Word) check_hlds__modecheck_call__conv1_OtherProcInfo_11);
#line 592 "modecheck_call.m"
    {
#line 592 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__ProcArgModes_12);
    }
#line 593 "modecheck_call.m"
    {
#line 593 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherProcArgModes_13);
    }
#line 594 "modecheck_call.m"
    {
#line 594 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__InitialInsts_14);
    }
#line 595 "modecheck_call.m"
    {
#line 595 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherInitialInsts_15);
    }
#line 597 "modecheck_call.m"
    {
#line 597 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__ArgTypes_16);
    }
#line 741 "modecheck_call.m"
    {
#line 741 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__InitialInsts_14, check_hlds__modecheck_call__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_40);
    }
#line 745 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 600 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_40 == (MR_Integer) 2);
#line 745 "modecheck_call.m"
    else
#line 746 "modecheck_call.m"
      {
#line 746 "modecheck_call.m"
        {
#line 746 "modecheck_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
#line 746 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 746 "modecheck_call.m"
      }
#line 586 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 586 "modecheck_call.m"
      {
#line 603 "modecheck_call.m"
        {
#line 603 "modecheck_call.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__FinalInsts_18);
        }
#line 604 "modecheck_call.m"
        {
#line 604 "modecheck_call.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherFinalInsts_19);
        }
#line 606 "modecheck_call.m"
        check_hlds__modecheck_call__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 741 "modecheck_call.m"
        {
#line 741 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__FinalInsts_18, check_hlds__modecheck_call__OtherFinalInsts_19, check_hlds__modecheck_call__V_31_31, check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_50);
        }
#line 745 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 608 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_50 == (MR_Integer) 2);
#line 745 "modecheck_call.m"
        else
#line 746 "modecheck_call.m"
          {
#line 746 "modecheck_call.m"
            {
#line 746 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
            }
#line 746 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 746 "modecheck_call.m"
          }
#line 586 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 586 "modecheck_call.m"
          {
#line 611 "modecheck_call.m"
            {
#line 611 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__ProcArgLives_21);
            }
#line 612 "modecheck_call.m"
            {
#line 612 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherProcArgLives_22);
            }
#line 613 "modecheck_call.m"
            {
#line 613 "modecheck_call.m"
              check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__ProcArgLives_21, check_hlds__modecheck_call__OtherProcArgLives_22, &check_hlds__modecheck_call__CompareLives_23);
            }
#line 614 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CompareLives_23 == (MR_Integer) 2);
#line 586 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 586 "modecheck_call.m"
              {
#line 617 "modecheck_call.m"
                {
#line 617 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__Detism_24);
                }
#line 618 "modecheck_call.m"
                {
#line 618 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherDetism_25);
                }
#line 619 "modecheck_call.m"
                {
#line 619 "modecheck_call.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__Detism_24, &check_hlds__modecheck_call__CanFail_26, &check_hlds__modecheck_call__Solns_27);
                }
#line 620 "modecheck_call.m"
                {
#line 620 "modecheck_call.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__OtherDetism_25, &check_hlds__modecheck_call__OtherCanFail_28, &check_hlds__modecheck_call__OtherSolns_29);
                }
#line 621 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CanFail_26 == check_hlds__modecheck_call__OtherCanFail_28);
#line 586 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 586 "modecheck_call.m"
                  {
#line 623 "modecheck_call.m"
                    if ((check_hlds__modecheck_call__Solns_27 == (MR_Integer) 3))
#line 624 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_29 == (MR_Integer) 2);
#line 623 "modecheck_call.m"
                    else
#line 623 "modecheck_call.m"
                      if ((check_hlds__modecheck_call__Solns_27 == (MR_Integer) 2))
#line 623 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_29 == (MR_Integer) 3);
#line 623 "modecheck_call.m"
                      else
#line 623 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = MR_FALSE;
#line 623 "modecheck_call.m"
                    if (!(check_hlds__modecheck_call__succeeded))
#line 622 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_27 == check_hlds__modecheck_call__OtherSolns_29);
#line 586 "modecheck_call.m"
                  }
#line 586 "modecheck_call.m"
              }
#line 586 "modecheck_call.m"
          }
#line 586 "modecheck_call.m"
      }
#line 586 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 586 "modecheck_call.m"
  }
#line 73 "modecheck_call.m"
}

#line 65 "modecheck_call.m"
MR_bool MR_CALL 
check_hlds__modecheck_call__modes_are_indistinguishable_4_p_0(
#line 65 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ProcId_5,
#line 65 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__OtherProcId_6,
#line 65 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredInfo_7,
#line 65 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_8)
#line 65 "modecheck_call.m"
{
#line 546 "modecheck_call.m"
  {
#line 546 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_28_28;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_29_29;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_9;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcInfo_10;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcInfo_11;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgModes_12;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgModes_13;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_14;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherInitialInsts_15;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ArgTypes_16;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgLives_18;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgLives_19;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CompareLives_20;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Detism_21;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherDetism_22;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Solns_24;
#line 546 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherSolns_26;
#line 548 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_ProcInfo_10;
#line 549 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv1_OtherProcInfo_11;
#line 745 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_36;
#line 572 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call___CanFail_23;
#line 573 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call___OtherCanFail_25;

#line 547 "modecheck_call.m"
    {
#line 547 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__Procs_9);
    }
#line 4031 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4033 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 548 "modecheck_call.m"
    {
#line 548 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_28_28, check_hlds__modecheck_call__TypeCtorInfo_29_29, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__ProcId_5)), &check_hlds__modecheck_call__conv0_ProcInfo_10);
    }
#line 548 "modecheck_call.m"
    check_hlds__modecheck_call__ProcInfo_10 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_10);
#line 549 "modecheck_call.m"
    {
#line 549 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_28_28, check_hlds__modecheck_call__TypeCtorInfo_29_29, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__OtherProcId_6)), &check_hlds__modecheck_call__conv1_OtherProcInfo_11);
    }
#line 549 "modecheck_call.m"
    check_hlds__modecheck_call__OtherProcInfo_11 = ((MR_Word) check_hlds__modecheck_call__conv1_OtherProcInfo_11);
#line 552 "modecheck_call.m"
    {
#line 552 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__ProcArgModes_12);
    }
#line 553 "modecheck_call.m"
    {
#line 553 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherProcArgModes_13);
    }
#line 554 "modecheck_call.m"
    {
#line 554 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__InitialInsts_14);
    }
#line 555 "modecheck_call.m"
    {
#line 555 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherInitialInsts_15);
    }
#line 557 "modecheck_call.m"
    {
#line 557 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__ArgTypes_16);
    }
#line 741 "modecheck_call.m"
    {
#line 741 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__InitialInsts_14, check_hlds__modecheck_call__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_36);
    }
#line 745 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 560 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_36 == (MR_Integer) 2);
#line 745 "modecheck_call.m"
    else
#line 746 "modecheck_call.m"
      {
#line 746 "modecheck_call.m"
        {
#line 746 "modecheck_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
#line 746 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 746 "modecheck_call.m"
      }
#line 546 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 546 "modecheck_call.m"
      {
#line 563 "modecheck_call.m"
        {
#line 563 "modecheck_call.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__ProcArgLives_18);
        }
#line 564 "modecheck_call.m"
        {
#line 564 "modecheck_call.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherProcArgLives_19);
        }
#line 565 "modecheck_call.m"
        {
#line 565 "modecheck_call.m"
          check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__ProcArgLives_18, check_hlds__modecheck_call__OtherProcArgLives_19, &check_hlds__modecheck_call__CompareLives_20);
        }
#line 566 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CompareLives_20 == (MR_Integer) 2);
#line 546 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 546 "modecheck_call.m"
          {
#line 570 "modecheck_call.m"
            {
#line 570 "modecheck_call.m"
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__Detism_21);
            }
#line 571 "modecheck_call.m"
            {
#line 571 "modecheck_call.m"
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherDetism_22);
            }
#line 572 "modecheck_call.m"
            {
#line 572 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__Detism_21, &check_hlds__modecheck_call___CanFail_23, &check_hlds__modecheck_call__Solns_24);
            }
#line 573 "modecheck_call.m"
            {
#line 573 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__OtherDetism_22, &check_hlds__modecheck_call___OtherCanFail_25, &check_hlds__modecheck_call__OtherSolns_26);
            }
#line 574 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_24 == (MR_Integer) 2);
#line 574 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 574 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_26 == (MR_Integer) 2);
#line 575 "modecheck_call.m"
            if (!(check_hlds__modecheck_call__succeeded))
#line 575 "modecheck_call.m"
              {
#line 575 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_24 == (MR_Integer) 2);
#line 575 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 575 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 575 "modecheck_call.m"
                  {
#line 575 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_26 == (MR_Integer) 2);
#line 575 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 575 "modecheck_call.m"
                  }
#line 575 "modecheck_call.m"
              }
#line 546 "modecheck_call.m"
          }
#line 546 "modecheck_call.m"
      }
#line 546 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 546 "modecheck_call.m"
  }
#line 65 "modecheck_call.m"
}

#line 55 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(
#line 55 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Modes_8,
#line 55 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Args0_9,
#line 55 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Args_10,
#line 55 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Det_11,
#line 55 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_12,
#line 55 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_15,
#line 55 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_16)
#line 55 "modecheck_call.m"
{
#line 296 "modecheck_call.m"
  {
#line 296 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 296 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo0_26;
#line 296 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ExpectedArgLives_27;
#line 296 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_28;
#line 296 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InstVarSub_29;
#line 296 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts0_30;
#line 296 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_31;
#line 296 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_32;
#line 296 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_33;

#line 297 "modecheck_call.m"
    *check_hlds__modecheck_call__Det_11 = (MR_Integer) 0;
#line 310 "modecheck_call.m"
    {
#line 310 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_call__ModuleInfo0_26);
    }
#line 311 "modecheck_call.m"
    {
#line 311 "modecheck_call.m"
      check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo0_26, check_hlds__modecheck_call__Modes_8, &check_hlds__modecheck_call__ExpectedArgLives_27);
    }
#line 312 "modecheck_call.m"
    {
#line 312 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__Args0_9, check_hlds__modecheck_call__ExpectedArgLives_27, (MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_32);
    }
#line 318 "modecheck_call.m"
    {
#line 318 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_26, check_hlds__modecheck_call__Modes_8, &check_hlds__modecheck_call__InitialInsts_28);
    }
#line 319 "modecheck_call.m"
    {
#line 319 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__Args0_9, check_hlds__modecheck_call__InitialInsts_28, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_29, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_32, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_33);
    }
#line 321 "modecheck_call.m"
    {
#line 321 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_26, check_hlds__modecheck_call__Modes_8, &check_hlds__modecheck_call__FinalInsts0_30);
    }
#line 322 "modecheck_call.m"
    {
#line 322 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_29, check_hlds__modecheck_call__FinalInsts0_30, &check_hlds__modecheck_call__FinalInsts_31);
    }
#line 323 "modecheck_call.m"
    {
#line 323 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__Args0_9, check_hlds__modecheck_call__InitialInsts_28, check_hlds__modecheck_call__FinalInsts_31, (MR_Integer) 0, check_hlds__modecheck_call__Args_10, check_hlds__modecheck_call__ExtraGoals_12, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_33, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_16);
#line 323 "modecheck_call.m"
      return;
    }
#line 296 "modecheck_call.m"
  }
#line 55 "modecheck_call.m"
}

#line 293 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
#line 293 "modecheck_call.m"
  MR_Box check_hlds__modecheck_call__closure_arg)
#line 293 "modecheck_call.m"
{
#line 293 "modecheck_call.m"
  {
#line 293 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 293 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__closure = check_hlds__modecheck_call__closure_arg;

#line 293 "modecheck_call.m"
    {
#line 293 "modecheck_call.m"
      return check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__293__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__closure, (MR_Integer) 4))));
    }
#line 293 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 293 "modecheck_call.m"
  }
#line 293 "modecheck_call.m"
}

#line 51 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0(
#line 51 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Modes_6,
#line 51 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Args0_7,
#line 51 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Args_8,
#line 51 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_12,
#line 51 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_13)
#line 51 "modecheck_call.m"
{
#line 290 "modecheck_call.m"
  {
#line 290 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ExtraGoals_11;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_15_15;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo0_29;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ExpectedArgLives_30;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_31;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InstVarSub_32;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts0_33;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_34;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_35;
#line 290 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_36;

#line 310 "modecheck_call.m"
    {
#line 310 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_call__ModuleInfo0_29);
    }
#line 311 "modecheck_call.m"
    {
#line 311 "modecheck_call.m"
      check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo0_29, check_hlds__modecheck_call__Modes_6, &check_hlds__modecheck_call__ExpectedArgLives_30);
    }
#line 312 "modecheck_call.m"
    {
#line 312 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__Args0_7, check_hlds__modecheck_call__ExpectedArgLives_30, (MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_35);
    }
#line 318 "modecheck_call.m"
    {
#line 318 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_29, check_hlds__modecheck_call__Modes_6, &check_hlds__modecheck_call__InitialInsts_31);
    }
#line 319 "modecheck_call.m"
    {
#line 319 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__Args0_7, check_hlds__modecheck_call__InitialInsts_31, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_32, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_35, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_36);
    }
#line 321 "modecheck_call.m"
    {
#line 321 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_29, check_hlds__modecheck_call__Modes_6, &check_hlds__modecheck_call__FinalInsts0_33);
    }
#line 322 "modecheck_call.m"
    {
#line 322 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_32, check_hlds__modecheck_call__FinalInsts0_33, &check_hlds__modecheck_call__FinalInsts_34);
    }
#line 323 "modecheck_call.m"
    {
#line 323 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__Args0_7, check_hlds__modecheck_call__InitialInsts_31, check_hlds__modecheck_call__FinalInsts_34, (MR_Integer) 0, check_hlds__modecheck_call__Args_8, &check_hlds__modecheck_call__ExtraGoals_11, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_36, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_13);
    }
#line 293 "modecheck_call.m"
    {
#line 293 "modecheck_call.m"
      check_hlds__modecheck_call__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 293 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[0]));
#line 293 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 1) = ((MR_Box) (check_hlds__modecheck_call__modecheck_event_call_5_p_0_1));
#line 293 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 293 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 3) = ((MR_Box) (check_hlds__modecheck_call__ExtraGoals_11));
#line 293 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "modecheck_call.m"
    }
#line 293 "modecheck_call.m"
    {
#line 293 "modecheck_call.m"
      mercury__require__expect_4_p_0(check_hlds__modecheck_call__V_15_15, (MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_event_call\'/5", (MR_String) "ExtraGoals");
#line 293 "modecheck_call.m"
      return;
    }
#line 290 "modecheck_call.m"
  }
#line 51 "modecheck_call.m"
}

#line 46 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0(
#line 46 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredOrFunc_10,
#line 46 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredVar_11,
#line 46 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Args0_12,
#line 46 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Args_13,
#line 46 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Modes_14,
#line 46 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Det_15,
#line 46 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_16,
#line 46 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42,
#line 46 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43)
#line 46 "modecheck_call.m"
{
#line 219 "modecheck_call.m"
  {
#line 219 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 219 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InstMap0_18;
#line 219 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredVarInst0_19;
#line 219 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo0_20;
#line 219 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredVarInst_21;
#line 219 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Arity_22;
#line 276 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModesPrime_31;
#line 276 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__DetPrime_33;
#line 232 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_59_59;
#line 232 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__HOInstInfo_24;
#line 232 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredInstInfo_25;
#line 232 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_63_63;
#line 232 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__V_64_64;
#line 245 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_32_32;

#line 222 "modecheck_call.m"
    {
#line 222 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__InstMap0_18);
    }
#line 223 "modecheck_call.m"
    {
#line 223 "modecheck_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_call__InstMap0_18, check_hlds__modecheck_call__PredVar_11, &check_hlds__modecheck_call__PredVarInst0_19);
    }
#line 224 "modecheck_call.m"
    {
#line 224 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__ModuleInfo0_20);
    }
#line 225 "modecheck_call.m"
    {
#line 225 "modecheck_call.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_call__ModuleInfo0_20, check_hlds__modecheck_call__PredVarInst0_19, &check_hlds__modecheck_call__PredVarInst_21);
    }
#line 226 "modecheck_call.m"
    {
#line 226 "modecheck_call.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_1[0], check_hlds__modecheck_call__Args0_12, &check_hlds__modecheck_call__Arity_22);
    }
#line 230 "modecheck_call.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_call__PredVarInst_21)) == (MR_mktag((MR_Integer) 2))))
#line 231 "modecheck_call.m"
      {
#line 231 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call___Uniq_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 0)));

#line 231 "modecheck_call.m"
        check_hlds__modecheck_call__HOInstInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 1)));
#line 231 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 231 "modecheck_call.m"
      }
#line 230 "modecheck_call.m"
    else
#line 230 "modecheck_call.m"
      if (((((MR_tag((MR_Word) check_hlds__modecheck_call__PredVarInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 229 "modecheck_call.m"
        {
#line 229 "modecheck_call.m"
          MR_Word check_hlds__modecheck_call___Uniq_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 1)));

#line 229 "modecheck_call.m"
          check_hlds__modecheck_call__HOInstInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 2)));
#line 229 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 229 "modecheck_call.m"
        }
#line 230 "modecheck_call.m"
      else
#line 230 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_FALSE;
#line 232 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 232 "modecheck_call.m"
      {
#line 235 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HOInstInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "modecheck_call.m"
          {
#line 238 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__TypeCtorInfo_58_58;
#line 238 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__VarTypes_26;
#line 238 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Type_27;
#line 238 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ArgTypes_30;
#line 238 "modecheck_call.m"
            MR_Integer check_hlds__modecheck_call__V_45_45;
#line 238 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_62_62;
#line 241 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_28_28;

#line 239 "modecheck_call.m"
            {
#line 239 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__VarTypes_26);
            }
#line 240 "modecheck_call.m"
            {
#line 240 "modecheck_call.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_call__VarTypes_26, check_hlds__modecheck_call__PredVar_11, &check_hlds__modecheck_call__Type_27);
            }
#line 241 "modecheck_call.m"
            {
#line 241 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_call__Type_27, &check_hlds__modecheck_call__V_28_28, &check_hlds__modecheck_call__V_62_62, &check_hlds__modecheck_call__ArgTypes_30);
            }
#line 238 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 238 "modecheck_call.m"
              {
#line 241 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = ((MR_Integer) 1 == check_hlds__modecheck_call__V_62_62);
#line 238 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 238 "modecheck_call.m"
                  {
#line 4560 "check_hlds.modecheck_call.c"
                    check_hlds__modecheck_call__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 243 "modecheck_call.m"
                    {
#line 243 "modecheck_call.m"
                      check_hlds__modecheck_call__V_45_45 = mercury__list__length_1_f_0(check_hlds__modecheck_call__TypeCtorInfo_58_58, check_hlds__modecheck_call__ArgTypes_30);
                    }
#line 242 "modecheck_call.m"
                    {
#line 242 "modecheck_call.m"
                      check_hlds__modecheck_call__PredInstInfo_25 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__modecheck_call__V_45_45);
                    }
#line 242 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 238 "modecheck_call.m"
                  }
#line 238 "modecheck_call.m"
              }
#line 238 "modecheck_call.m"
          }
#line 235 "modecheck_call.m"
        else
#line 234 "modecheck_call.m"
          {
#line 234 "modecheck_call.m"
            check_hlds__modecheck_call__PredInstInfo_25 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_call__HOInstInfo_24), (MR_Integer) 1);
#line 234 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 234 "modecheck_call.m"
          }
#line 232 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 232 "modecheck_call.m"
          {
#line 245 "modecheck_call.m"
            check_hlds__modecheck_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__PredInstInfo_25, (MR_Integer) 0)));
#line 245 "modecheck_call.m"
            check_hlds__modecheck_call__ModesPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__PredInstInfo_25, (MR_Integer) 1)));
#line 245 "modecheck_call.m"
            check_hlds__modecheck_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__PredInstInfo_25, (MR_Integer) 2)));
#line 245 "modecheck_call.m"
            check_hlds__modecheck_call__DetPrime_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__PredInstInfo_25, (MR_Integer) 3)));
#line 245 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__PredOrFunc_10 == check_hlds__modecheck_call__V_63_63);
#line 232 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 232 "modecheck_call.m"
              {
#line 4608 "check_hlds.modecheck_call.c"
                check_hlds__modecheck_call__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 246 "modecheck_call.m"
                {
#line 246 "modecheck_call.m"
                  mercury__list__length_2_p_0(check_hlds__modecheck_call__TypeCtorInfo_59_59, check_hlds__modecheck_call__ModesPrime_31, &check_hlds__modecheck_call__V_64_64);
                }
#line 246 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Arity_22 == check_hlds__modecheck_call__V_64_64);
#line 232 "modecheck_call.m"
              }
#line 232 "modecheck_call.m"
          }
#line 232 "modecheck_call.m"
      }
#line 276 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 262 "modecheck_call.m"
      {
#line 262 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__A_34;
#line 262 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__B_35;
#line 262 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Reason_36;

#line 251 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__PredVarInst_21)) == (MR_mktag((MR_Integer) 2)));
#line 251 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 251 "modecheck_call.m"
          {
#line 251 "modecheck_call.m"
            check_hlds__modecheck_call__A_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 0)));
#line 251 "modecheck_call.m"
            check_hlds__modecheck_call__B_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 1)));
#line 252 "modecheck_call.m"
            {
#line 252 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, check_hlds__modecheck_call__PredVar_11, &check_hlds__modecheck_call__Reason_36);
            }
#line 251 "modecheck_call.m"
          }
#line 262 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 254 "modecheck_call.m"
          {
#line 254 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__BetterPredVarInst_37;
#line 254 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__WaitingVars_38;
#line 254 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_46_46;

#line 254 "modecheck_call.m"
            {
#line 254 "modecheck_call.m"
              check_hlds__modecheck_call__BetterPredVarInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 254 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__BetterPredVarInst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 254 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__BetterPredVarInst_37, 1) = ((MR_Box) (check_hlds__modecheck_call__A_34));
#line 254 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__BetterPredVarInst_37, 2) = ((MR_Box) (check_hlds__modecheck_call__B_35));
#line 254 "modecheck_call.m"
            }
#line 255 "modecheck_call.m"
            {
#line 255 "modecheck_call.m"
              check_hlds__modecheck_call__WaitingVars_38 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_call__PredVar_11);
            }
#line 256 "modecheck_call.m"
            {
#line 256 "modecheck_call.m"
              check_hlds__modecheck_call__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 256 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 256 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_call__Reason_36));
#line 256 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 2) = ((MR_Box) (check_hlds__modecheck_call__PredVar_11));
#line 256 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 3) = ((MR_Box) (check_hlds__modecheck_call__PredVarInst_21));
#line 256 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 4) = ((MR_Box) (check_hlds__modecheck_call__BetterPredVarInst_37));
#line 256 "modecheck_call.m"
            }
#line 256 "modecheck_call.m"
            {
#line 256 "modecheck_call.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_38, check_hlds__modecheck_call__V_46_46, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43);
            }
#line 258 "modecheck_call.m"
            *check_hlds__modecheck_call__Modes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 259 "modecheck_call.m"
            *check_hlds__modecheck_call__Det_15 = (MR_Integer) 6;
#line 260 "modecheck_call.m"
            *check_hlds__modecheck_call__Args_13 = check_hlds__modecheck_call__Args0_12;
#line 261 "modecheck_call.m"
            *check_hlds__modecheck_call__ExtraGoals_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "modecheck_call.m"
          }
#line 262 "modecheck_call.m"
        else
#line 263 "modecheck_call.m"
          {
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_48_48;
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ModuleInfo0_74;
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ExpectedArgLives_75;
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InitialInsts_76;
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_77;
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__FinalInsts0_78;
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__FinalInsts_79;
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_80;
#line 263 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_81;
#line 269 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_65_65;
#line 269 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_40_40;

#line 263 "modecheck_call.m"
            *check_hlds__modecheck_call__Det_15 = check_hlds__modecheck_call__DetPrime_33;
#line 264 "modecheck_call.m"
            *check_hlds__modecheck_call__Modes_14 = check_hlds__modecheck_call__ModesPrime_31;
#line 310 "modecheck_call.m"
            {
#line 310 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__ModuleInfo0_74);
            }
#line 311 "modecheck_call.m"
            {
#line 311 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo0_74, *check_hlds__modecheck_call__Modes_14, &check_hlds__modecheck_call__ExpectedArgLives_75);
            }
#line 312 "modecheck_call.m"
            {
#line 312 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__Args0_12, check_hlds__modecheck_call__ExpectedArgLives_75, (MR_Integer) 1, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_80);
            }
#line 318 "modecheck_call.m"
            {
#line 318 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_74, *check_hlds__modecheck_call__Modes_14, &check_hlds__modecheck_call__InitialInsts_76);
            }
#line 319 "modecheck_call.m"
            {
#line 319 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__Args0_12, check_hlds__modecheck_call__InitialInsts_76, (MR_Integer) 1, &check_hlds__modecheck_call__InstVarSub_77, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_80, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_81);
            }
#line 321 "modecheck_call.m"
            {
#line 321 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_74, *check_hlds__modecheck_call__Modes_14, &check_hlds__modecheck_call__FinalInsts0_78);
            }
#line 322 "modecheck_call.m"
            {
#line 322 "modecheck_call.m"
              parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_77, check_hlds__modecheck_call__FinalInsts0_78, &check_hlds__modecheck_call__FinalInsts_79);
            }
#line 323 "modecheck_call.m"
            {
#line 323 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__Args0_12, check_hlds__modecheck_call__InitialInsts_76, check_hlds__modecheck_call__FinalInsts_79, (MR_Integer) 1, check_hlds__modecheck_call__Args_13, check_hlds__modecheck_call__ExtraGoals_16, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_81, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_48_48);
            }
#line 269 "modecheck_call.m"
            {
#line 269 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__modecheck_call__Det_15, &check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__V_65_65);
            }
#line 269 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = ((MR_Integer) 0 == check_hlds__modecheck_call__V_65_65);
#line 272 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 270 "modecheck_call.m"
              {
#line 270 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__Instmap_41;

#line 270 "modecheck_call.m"
                {
#line 270 "modecheck_call.m"
                  hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_call__Instmap_41);
                }
#line 271 "modecheck_call.m"
                {
#line 271 "modecheck_call.m"
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_call__Instmap_41, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_48_48, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43);
#line 271 "modecheck_call.m"
                  return;
                }
#line 270 "modecheck_call.m"
              }
#line 272 "modecheck_call.m"
            else
#line 271 "modecheck_call.m"
              *check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_48_48;
#line 263 "modecheck_call.m"
          }
#line 262 "modecheck_call.m"
      }
#line 276 "modecheck_call.m"
    else
#line 278 "modecheck_call.m"
      {
#line 278 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_52_52;
#line 278 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_53_53;
#line 278 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__WaitingVars_56;

#line 278 "modecheck_call.m"
        {
#line 278 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_52_52);
        }
#line 279 "modecheck_call.m"
        {
#line 279 "modecheck_call.m"
          check_hlds__modecheck_call__WaitingVars_56 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_call__PredVar_11);
        }
#line 281 "modecheck_call.m"
        {
#line 281 "modecheck_call.m"
          check_hlds__modecheck_call__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 281 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 281 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 1) = ((MR_Box) (check_hlds__modecheck_call__PredOrFunc_10));
#line 281 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 2) = ((MR_Box) (check_hlds__modecheck_call__PredVar_11));
#line 281 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 3) = ((MR_Box) (check_hlds__modecheck_call__PredVarInst_21));
#line 281 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 4) = ((MR_Box) (check_hlds__modecheck_call__Arity_22));
#line 281 "modecheck_call.m"
        }
#line 280 "modecheck_call.m"
        {
#line 280 "modecheck_call.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_56, check_hlds__modecheck_call__V_53_53, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43);
        }
#line 284 "modecheck_call.m"
        *check_hlds__modecheck_call__Modes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "modecheck_call.m"
        *check_hlds__modecheck_call__Det_15 = (MR_Integer) 6;
#line 286 "modecheck_call.m"
        *check_hlds__modecheck_call__Args_13 = check_hlds__modecheck_call__Args0_12;
#line 287 "modecheck_call.m"
        *check_hlds__modecheck_call__ExtraGoals_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 278 "modecheck_call.m"
      }
#line 219 "modecheck_call.m"
  }
#line 46 "modecheck_call.m"
}

#line 41 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__modecheck_call_pred_10_p_0(
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredId_11,
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__DeterminismKnown_12,
#line 41 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ProcId0_13,
#line 41 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_14,
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_15,
#line 41 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_16,
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call___GoalInfo_17,
#line 41 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 41 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53,
#line 41 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_54)
#line 41 "modecheck_call.m"
{
#line 103 "modecheck_call.m"
  {
#line 103 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 103 "modecheck_call.m"
    {
#line 103 "modecheck_call.m"
      check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(check_hlds__modecheck_call__PredId_11, check_hlds__modecheck_call__DeterminismKnown_12, check_hlds__modecheck_call__ProcId0_13, check_hlds__modecheck_call__TheProcId_14, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_53, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_54);
#line 103 "modecheck_call.m"
      return;
    }
#line 103 "modecheck_call.m"
  }
#line 41 "modecheck_call.m"
}

void mercury__check_hlds__modecheck_call__init(void)
{
}

void mercury__check_hlds__modecheck_call__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_match_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0);
}

void mercury__check_hlds__modecheck_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.modecheck_call. */
