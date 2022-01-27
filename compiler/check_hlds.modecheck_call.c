/*
** Automatically generated from `modecheck_call.m'
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
#include "mdbcomp.sym_name.mih"
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



#line 666 "modecheck_call.m"
struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1;
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4;
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5;
#line 670 "modecheck_call.m"
  MR_bool check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 674 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20;
#line 674 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23;
#line 678 "modecheck_call.m"
  jmp_buf check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_70;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_40_71;
#line 678 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_61;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_62;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_63;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_64;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_65;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66;
#line 678 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_69_69;
#line 678 "modecheck_call.m"
  MR_Box check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34;
#line 666 "modecheck_call.m"
};


#line 216 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0;

#line 219 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1;

#line 222 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2;

#line 225 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3;

#line 228 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0[4];

#line 231 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0[4];

#line 234 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0[4];

#line 237 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 240 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 243 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 246 "check_hlds.modecheck_call.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0[3];

#line 249 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0;

#line 252 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[1];

#line 255 "check_hlds.modecheck_call.c"
static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[1];

#line 258 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0[1];

#line 261 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0[1];

#line 264 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0_10001(
#line 267 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 269 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2);

#line 272 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0_10001(
#line 275 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 277 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 279 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3);

#line 282 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0_10001(
#line 285 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 287 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2);

#line 290 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0_10001(
#line 293 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 295 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 297 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3);

#line 678 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
#line 678 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 678 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
#line 678 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 678 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
#line 678 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 678 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
#line 678 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 666 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_1,
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Procs_4,
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_5,
#line 666 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_6,
#line 666 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheInstVarSub_7,
#line 666 "modecheck_call.m"
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

#line 660 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0(
#line 660 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 660 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 660 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3);

#line 660 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0(
#line 660 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_1,
#line 660 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2);

#line 785 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__compare_liveness_list_3_p_0(
#line 785 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 785 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 785 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3);

#line 768 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__compare_inst_list_2_6_p_0(
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_1,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__5_5,
#line 768 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__6_6);

#line 500 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
#line 500 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 500 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_2,
#line 500 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3,
#line 500 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__4_4);

#line 428 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcInfo_11,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Purity_12,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcArgModes_13,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_14,
#line 428 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ArgOffset_15,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__InstVarSub_16,
#line 428 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_17,
#line 428 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28,
#line 428 "modecheck_call.m"
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


#line 822 "modecheck_call.m"
/* sealed */ struct check_hlds__modecheck_call__vector_common_type_4_0_s {
#line 822 "modecheck_call.m"
  const MR_Word check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
};

static /* final */ const struct check_hlds__modecheck_call__vector_common_type_4_0_s check_hlds__modecheck_call_vector_common_4[32];



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


static /* final */ const struct check_hlds__modecheck_call__vector_common_type_4_0_s check_hlds__modecheck_call_vector_common_4[32] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 3 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 3 },
  /* row 8 */   {     (MR_Integer) 3 },
  /* row 9 */   {     (MR_Integer) 1 },
  /* row 10 */   {     (MR_Integer) 1 },
  /* row 11 */   {     (MR_Integer) 3 },
  /* row 12 */   {     (MR_Integer) 0 },
  /* row 13 */   {     (MR_Integer) 3 },
  /* row 14 */   {     (MR_Integer) 0 },
  /* row 15 */   {     (MR_Integer) 3 },
  /* row 16 */   {     (MR_Integer) 3 },
  /* row 17 */   {     (MR_Integer) 1 },
  /* row 18 */   {     (MR_Integer) 1 },
  /* row 19 */   {     (MR_Integer) 3 },
  /* row 20 */   {     (MR_Integer) 3 },
  /* row 21 */   {     (MR_Integer) 1 },
  /* row 22 */   {     (MR_Integer) 1 },
  /* row 23 */   {     (MR_Integer) 3 },
  /* row 24 */   {     (MR_Integer) 0 },
  /* row 25 */   {     (MR_Integer) 3 },
  /* row 26 */   {     (MR_Integer) 0 },
  /* row 27 */   {     (MR_Integer) 3 },
  /* row 28 */   {     (MR_Integer) 3 },
  /* row 29 */   {     (MR_Integer) 1 },
  /* row 30 */   {     (MR_Integer) 1 },
  /* row 31 */   {     (MR_Integer) 3 },
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



#line 603 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0 = {
  (MR_String) "better",
  (MR_Integer) 0
};

#line 609 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1 = {
  (MR_String) "worse",
  (MR_Integer) 1
};

#line 615 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2 = {
  (MR_String) "same",
  (MR_Integer) 2
};

#line 621 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3 = {
  (MR_String) "incomparable",
  (MR_Integer) 3
};

#line 627 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0[4] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3
};

#line 635 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0[4] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1
};

#line 643 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 651 "check_hlds.modecheck_call.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modecheck_call____Unify____match_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_call____Compare____match_0_0_10001)),
  (MR_String) "check_hlds.modecheck_call",
  (MR_String) "match",
  {     check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0 },
  {     check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0
};

#line 668 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 676 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 685 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 693 "check_hlds.modecheck_call.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

#line 700 "check_hlds.modecheck_call.c"
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

#line 715 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[1] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

#line 720 "check_hlds.modecheck_call.c"
static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0
  }
};

#line 729 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0[1] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

#line 734 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0[1] = {
  (MR_Integer) 0
};

#line 739 "check_hlds.modecheck_call.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_call____Unify____proc_mode_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_call____Compare____proc_mode_0_0_10001)),
  (MR_String) "check_hlds.modecheck_call",
  (MR_String) "proc_mode",
  {     check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0 },
  {     check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0
};

#line 756 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0_10001(
#line 759 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 761 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2)
#line 763 "check_hlds.modecheck_call.c"
{
#line 765 "check_hlds.modecheck_call.c"
  {
#line 767 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 770 "check_hlds.modecheck_call.c"
    {
#line 772 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call____Unify____match_0_0(((MR_Word) check_hlds__modecheck_call__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2));
    }
#line 775 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 777 "check_hlds.modecheck_call.c"
  }
#line 779 "check_hlds.modecheck_call.c"
}

#line 782 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0_10001(
#line 785 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 787 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 789 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3)
#line 791 "check_hlds.modecheck_call.c"
{
#line 793 "check_hlds.modecheck_call.c"
  {
#line 795 "check_hlds.modecheck_call.c"
    MR_Word check_hlds__modecheck_call__conv0_HeadVar__1_1;

#line 798 "check_hlds.modecheck_call.c"
    {
#line 800 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call____Compare____match_0_0(&check_hlds__modecheck_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_3));
    }
#line 803 "check_hlds.modecheck_call.c"
    *check_hlds__modecheck_call__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_call__conv0_HeadVar__1_1));
#line 805 "check_hlds.modecheck_call.c"
  }
#line 807 "check_hlds.modecheck_call.c"
}

#line 810 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0_10001(
#line 813 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 815 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2)
#line 817 "check_hlds.modecheck_call.c"
{
#line 819 "check_hlds.modecheck_call.c"
  {
#line 821 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 824 "check_hlds.modecheck_call.c"
    {
#line 826 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call____Unify____proc_mode_0_0(((MR_Word) check_hlds__modecheck_call__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2));
    }
#line 829 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 831 "check_hlds.modecheck_call.c"
  }
#line 833 "check_hlds.modecheck_call.c"
}

#line 836 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0_10001(
#line 839 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 841 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 843 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3)
#line 845 "check_hlds.modecheck_call.c"
{
#line 847 "check_hlds.modecheck_call.c"
  {
#line 849 "check_hlds.modecheck_call.c"
    MR_Word check_hlds__modecheck_call__conv0_HeadVar__1_1;

#line 852 "check_hlds.modecheck_call.c"
    {
#line 854 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call____Compare____proc_mode_0_0(&check_hlds__modecheck_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_3));
    }
#line 857 "check_hlds.modecheck_call.c"
    *check_hlds__modecheck_call__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_call__conv0_HeadVar__1_1));
#line 859 "check_hlds.modecheck_call.c"
  }
#line 861 "check_hlds.modecheck_call.c"
}

#line 678 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
#line 678 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 678 "modecheck_call.m"
{
#line 678 "modecheck_call.m"
  {
#line 678 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 678 "modecheck_call.m"
    MR_builtin_longjmp((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 678 "modecheck_call.m"
  }
#line 678 "modecheck_call.m"
}

#line 678 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
#line 678 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 678 "modecheck_call.m"
{
#line 678 "modecheck_call.m"
  {
#line 678 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 678 "modecheck_call.m"
    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34 = ((MR_Word) (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34);
#line 678 "modecheck_call.m"
    {
#line 678 "modecheck_call.m"
      check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(check_hlds__modecheck_call__env_ptr);
#line 678 "modecheck_call.m"
      return;
    }
#line 678 "modecheck_call.m"
  }
#line 678 "modecheck_call.m"
}

#line 678 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
#line 678 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 678 "modecheck_call.m"
{
#line 678 "modecheck_call.m"
  {
#line 678 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 678 "modecheck_call.m"
    {
#line 678 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__V_31_31;
#line 678 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__V_32_32;
#line 701 "modecheck_call.m"
      MR_Box check_hlds__modecheck_call__conv1_ProcInfo_44;
#line 702 "modecheck_call.m"
      MR_Box check_hlds__modecheck_call__conv2_OtherProcInfo_45;
#line 713 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call___ArgLives_54;
#line 764 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__Result0_78;

#line 678 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 0)));
#line 678 "modecheck_call.m"
      check_hlds__modecheck_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 1)));
#line 678 "modecheck_call.m"
      check_hlds__modecheck_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 2)));
#line 679 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 = (MR_Integer) 0;
#line 944 "check_hlds.modecheck_call.c"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_70 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 946 "check_hlds.modecheck_call.c"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_40_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 701 "modecheck_call.m"
      {
#line 701 "modecheck_call.m"
        mercury__map__lookup_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_70, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_40_71, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30)), &check_hlds__modecheck_call__conv1_ProcInfo_44);
      }
#line 701 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44 = ((MR_Word) check_hlds__modecheck_call__conv1_ProcInfo_44);
#line 702 "modecheck_call.m"
      {
#line 702 "modecheck_call.m"
        mercury__map__lookup_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_70, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_40_71, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20)), &check_hlds__modecheck_call__conv2_OtherProcInfo_45);
      }
#line 702 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45 = ((MR_Word) check_hlds__modecheck_call__conv2_OtherProcInfo_45);
#line 705 "modecheck_call.m"
      {
#line 705 "modecheck_call.m"
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46);
      }
#line 706 "modecheck_call.m"
      {
#line 706 "modecheck_call.m"
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47);
      }
#line 707 "modecheck_call.m"
      {
#line 707 "modecheck_call.m"
        check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48);
      }
#line 708 "modecheck_call.m"
      {
#line 708 "modecheck_call.m"
        check_hlds__mode_info__mode_info_get_var_types_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49);
      }
#line 709 "modecheck_call.m"
      {
#line 709 "modecheck_call.m"
        parse_tree__prog_data__lookup_var_types_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50);
      }
#line 710 "modecheck_call.m"
      {
#line 710 "modecheck_call.m"
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51);
      }
#line 711 "modecheck_call.m"
      {
#line 711 "modecheck_call.m"
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52);
      }
#line 713 "modecheck_call.m"
      {
#line 713 "modecheck_call.m"
        check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53, &check_hlds__modecheck_call___ArgLives_54);
      }
#line 715 "modecheck_call.m"
      {
#line 715 "modecheck_call.m"
        MR_Word base;
#line 715 "modecheck_call.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 715 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_69_69 = base;
#line 715 "modecheck_call.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53));
#line 715 "modecheck_call.m"
      }
#line 760 "modecheck_call.m"
      {
#line 760 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_69_69, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50, &check_hlds__modecheck_call__Result0_78);
      }
#line 764 "modecheck_call.m"
      if ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 763 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 = check_hlds__modecheck_call__Result0_78;
#line 764 "modecheck_call.m"
      else
#line 765 "modecheck_call.m"
        {
#line 765 "modecheck_call.m"
          {
#line 765 "modecheck_call.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
#line 765 "modecheck_call.m"
            return;
          }
#line 765 "modecheck_call.m"
        }
#line 718 "modecheck_call.m"
      {
#line 718 "modecheck_call.m"
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56);
      }
#line 719 "modecheck_call.m"
      {
#line 719 "modecheck_call.m"
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57);
      }
#line 720 "modecheck_call.m"
      {
#line 720 "modecheck_call.m"
        check_hlds__modecheck_call__compare_liveness_list_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58);
      }
#line 723 "modecheck_call.m"
      {
#line 723 "modecheck_call.m"
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59);
      }
#line 724 "modecheck_call.m"
      {
#line 724 "modecheck_call.m"
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60);
      }
#line 725 "modecheck_call.m"
      {
#line 725 "modecheck_call.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_61, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_62);
      }
#line 726 "modecheck_call.m"
      {
#line 726 "modecheck_call.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_63, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_64);
      }
#line 727 "modecheck_call.m"
      {
#line 727 "modecheck_call.m"
        parse_tree__prog_data__compare_solncounts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_62, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_64, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_65);
      }
#line 731 "modecheck_call.m"
#line 731 "modecheck_call.m"
      switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_65) {
#line 731 "modecheck_call.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 731 "modecheck_call.m"
        case (MR_Integer) 2:
#line 746 "modecheck_call.m"
          (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 1;
#line 731 "modecheck_call.m"
          break;
#line 731 "modecheck_call.m"
        case (MR_Integer) 1:
#line 732 "modecheck_call.m"
          {
#line 732 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__CompareCanFails_67;

#line 733 "modecheck_call.m"
            {
#line 733 "modecheck_call.m"
              parse_tree__prog_data__compare_canfails_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_61, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_63, &check_hlds__modecheck_call__CompareCanFails_67);
            }
#line 737 "modecheck_call.m"
#line 737 "modecheck_call.m"
            switch (check_hlds__modecheck_call__CompareCanFails_67) {
#line 737 "modecheck_call.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 737 "modecheck_call.m"
              case (MR_Integer) 2:
#line 742 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 1;
#line 737 "modecheck_call.m"
                break;
#line 737 "modecheck_call.m"
              case (MR_Integer) 1:
#line 739 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 2;
#line 737 "modecheck_call.m"
                break;
#line 737 "modecheck_call.m"
              case (MR_Integer) 0:
#line 736 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 0;
#line 737 "modecheck_call.m"
                break;
#line 737 "modecheck_call.m"
            }
#line 732 "modecheck_call.m"
          }
#line 731 "modecheck_call.m"
          break;
#line 731 "modecheck_call.m"
        case (MR_Integer) 0:
#line 730 "modecheck_call.m"
          (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 0;
#line 731 "modecheck_call.m"
          break;
#line 731 "modecheck_call.m"
      }
#line 1136 "check_hlds.modecheck_call.c"
#line 1137 "check_hlds.modecheck_call.c"
      switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55) {
#line 1139 "check_hlds.modecheck_call.c"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1141 "check_hlds.modecheck_call.c"
        case (MR_Integer) 0:
#line 1143 "check_hlds.modecheck_call.c"
#line 1144 "check_hlds.modecheck_call.c"
          switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
#line 1146 "check_hlds.modecheck_call.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1148 "check_hlds.modecheck_call.c"
            case (MR_Integer) 0:
#line 1150 "check_hlds.modecheck_call.c"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 1154 "check_hlds.modecheck_call.c"
              }
#line 1156 "check_hlds.modecheck_call.c"
              break;
#line 1158 "check_hlds.modecheck_call.c"
            case (MR_Integer) 3:
#line 1160 "check_hlds.modecheck_call.c"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1164 "check_hlds.modecheck_call.c"
              }
#line 1166 "check_hlds.modecheck_call.c"
              break;
#line 1168 "check_hlds.modecheck_call.c"
            case (MR_Integer) 2:
#line 1170 "check_hlds.modecheck_call.c"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 1174 "check_hlds.modecheck_call.c"
              }
#line 1176 "check_hlds.modecheck_call.c"
              break;
#line 1178 "check_hlds.modecheck_call.c"
            case (MR_Integer) 1:
#line 1180 "check_hlds.modecheck_call.c"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1184 "check_hlds.modecheck_call.c"
              }
#line 1186 "check_hlds.modecheck_call.c"
              break;
#line 1188 "check_hlds.modecheck_call.c"
          }
#line 1190 "check_hlds.modecheck_call.c"
          break;
#line 1192 "check_hlds.modecheck_call.c"
        case (MR_Integer) 3:
#line 1194 "check_hlds.modecheck_call.c"
          {
#line 679 "modecheck_call.m"
            (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1198 "check_hlds.modecheck_call.c"
          }
#line 1200 "check_hlds.modecheck_call.c"
          break;
#line 1202 "check_hlds.modecheck_call.c"
        case (MR_Integer) 2:
#line 813 "modecheck_call.m"
#line 813 "modecheck_call.m"
          switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
#line 813 "modecheck_call.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 813 "modecheck_call.m"
            case (MR_Integer) 0:
#line 813 "modecheck_call.m"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 813 "modecheck_call.m"
              }
#line 813 "modecheck_call.m"
              break;
#line 813 "modecheck_call.m"
            case (MR_Integer) 3:
#line 816 "modecheck_call.m"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 816 "modecheck_call.m"
              }
#line 813 "modecheck_call.m"
              break;
#line 813 "modecheck_call.m"
            case (MR_Integer) 2:
#line 679 "modecheck_call.m"
              (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66);
#line 813 "modecheck_call.m"
              break;
#line 813 "modecheck_call.m"
            case (MR_Integer) 1:
#line 814 "modecheck_call.m"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 814 "modecheck_call.m"
              }
#line 813 "modecheck_call.m"
              break;
#line 813 "modecheck_call.m"
          }
#line 1247 "check_hlds.modecheck_call.c"
          break;
#line 1249 "check_hlds.modecheck_call.c"
        case (MR_Integer) 1:
#line 1251 "check_hlds.modecheck_call.c"
#line 1252 "check_hlds.modecheck_call.c"
          switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
#line 1254 "check_hlds.modecheck_call.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1256 "check_hlds.modecheck_call.c"
            case (MR_Integer) 0:
#line 1258 "check_hlds.modecheck_call.c"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1262 "check_hlds.modecheck_call.c"
              }
#line 1264 "check_hlds.modecheck_call.c"
              break;
#line 1266 "check_hlds.modecheck_call.c"
            case (MR_Integer) 3:
#line 1268 "check_hlds.modecheck_call.c"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1272 "check_hlds.modecheck_call.c"
              }
#line 1274 "check_hlds.modecheck_call.c"
              break;
#line 1276 "check_hlds.modecheck_call.c"
            case (MR_Integer) 2:
#line 1278 "check_hlds.modecheck_call.c"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 1282 "check_hlds.modecheck_call.c"
              }
#line 1284 "check_hlds.modecheck_call.c"
              break;
#line 1286 "check_hlds.modecheck_call.c"
            case (MR_Integer) 1:
#line 1288 "check_hlds.modecheck_call.c"
              {
#line 679 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 1292 "check_hlds.modecheck_call.c"
              }
#line 1294 "check_hlds.modecheck_call.c"
              break;
#line 1296 "check_hlds.modecheck_call.c"
          }
#line 1298 "check_hlds.modecheck_call.c"
          break;
#line 1300 "check_hlds.modecheck_call.c"
      }
#line 1302 "check_hlds.modecheck_call.c"
      if ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1304 "check_hlds.modecheck_call.c"
        {
#line 1306 "check_hlds.modecheck_call.c"
          check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(check_hlds__modecheck_call__env_ptr);
#line 1308 "check_hlds.modecheck_call.c"
          return;
        }
#line 678 "modecheck_call.m"
    }
#line 678 "modecheck_call.m"
  }
#line 678 "modecheck_call.m"
}

#line 678 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
#line 678 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 678 "modecheck_call.m"
{
#line 678 "modecheck_call.m"
  {
#line 678 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 678 "modecheck_call.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 678 "modecheck_call.m"
      {
#line 678 "modecheck_call.m"
        {
#line 678 "modecheck_call.m"
          {
#line 678 "modecheck_call.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23, check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3, check_hlds__modecheck_call__env_ptr);
          }
#line 678 "modecheck_call.m"
        }
#line 678 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 678 "modecheck_call.m"
      }
#line 678 "modecheck_call.m"
    else
#line 678 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 678 "modecheck_call.m"
  }
#line 678 "modecheck_call.m"
}

#line 666 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_1,
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Procs_4,
#line 666 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_5,
#line 666 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_6,
#line 666 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheInstVarSub_7,
#line 666 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheArgModes_8)
#line 666 "modecheck_call.m"
{
#line 666 "modecheck_call.m"
  {
#line 666 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s check_hlds__modecheck_call__env;

#line 666 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1 = check_hlds__modecheck_call__ModeInfo_1;
#line 666 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4 = check_hlds__modecheck_call__Procs_4;
#line 666 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5 = check_hlds__modecheck_call__ArgVars_5;
#line 670 "modecheck_call.m"
    while (MR_TRUE)
#line 670 "modecheck_call.m"
      {
#line 670 "modecheck_call.m"
        /* tailcall optimized into a loop */
#line 670 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "modecheck_call.m"
          {
#line 671 "modecheck_call.m"
            {
#line 671 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.choose_best_match\'/8", (MR_String) "no best match");
#line 671 "modecheck_call.m"
              return;
            }
#line 670 "modecheck_call.m"
          }
#line 670 "modecheck_call.m"
        else
#line 674 "modecheck_call.m"
          {
#line 674 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_21;
#line 674 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ArgModes_22;
#line 674 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));

#line 673 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 673 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 0)));
#line 673 "modecheck_call.m"
            check_hlds__modecheck_call__InstVarSub_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 1)));
#line 673 "modecheck_call.m"
            check_hlds__modecheck_call__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 2)));
#line 678 "modecheck_call.m"
            {
#line 678 "modecheck_call.m"
              check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(&check_hlds__modecheck_call__env);
            }
#line 677 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 685 "modecheck_call.m"
            if ((check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 682 "modecheck_call.m"
              {
#line 682 "modecheck_call.m"
                *check_hlds__modecheck_call__TheProcId_6 = (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20;
#line 683 "modecheck_call.m"
                *check_hlds__modecheck_call__TheInstVarSub_7 = check_hlds__modecheck_call__InstVarSub_21;
#line 684 "modecheck_call.m"
                *check_hlds__modecheck_call__TheArgModes_8 = check_hlds__modecheck_call__ArgModes_22;
#line 682 "modecheck_call.m"
              }
#line 685 "modecheck_call.m"
            else
#line 686 "modecheck_call.m"
              {
#line 686 "modecheck_call.m"
                /* direct tailcall eliminated */
#line 686 "modecheck_call.m"
                {
#line 686 "modecheck_call.m"
                  MR_Word check_hlds__modecheck_call__HeadVar__2__tmp_copy_2 = (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23;

#line 686 "modecheck_call.m"
                  check_hlds__modecheck_call__HeadVar__2_2 = check_hlds__modecheck_call__HeadVar__2__tmp_copy_2;
#line 686 "modecheck_call.m"
                }
#line 686 "modecheck_call.m"
                continue;
#line 686 "modecheck_call.m"
              }
#line 674 "modecheck_call.m"
          }
#line 670 "modecheck_call.m"
        break;
#line 670 "modecheck_call.m"
      }
#line 666 "modecheck_call.m"
  }
#line 666 "modecheck_call.m"
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
            MR_Word check_hlds__modecheck_call__InstVarSet0_34;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSet_35;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes_36;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ModuleInfo_37;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgLives0_38;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InitialInsts_39;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_40;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Errors_41;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64;
#line 371 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65;
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
              check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9, &check_hlds__modecheck_call__InstVarSet0_34);
            }
#line 379 "modecheck_call.m"
            {
#line 379 "modecheck_call.m"
              parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(check_hlds__modecheck_call__InstVarSet0_34, check_hlds__modecheck_call__ProcInstVarSet_33, &check_hlds__modecheck_call__InstVarSet_35, check_hlds__modecheck_call__ProcArgModes0_32, &check_hlds__modecheck_call__ProcArgModes_36);
            }
#line 381 "modecheck_call.m"
            {
#line 381 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_instvarset_3_p_0(check_hlds__modecheck_call__InstVarSet_35, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55);
            }
#line 382 "modecheck_call.m"
            {
#line 382 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_call__ModuleInfo_37);
            }
#line 383 "modecheck_call.m"
            {
#line 383 "modecheck_call.m"
              hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modecheck_call__ProcInfo_31, check_hlds__modecheck_call__ModuleInfo_37, &check_hlds__modecheck_call__ProcArgLives0_38);
            }
#line 386 "modecheck_call.m"
            {
#line 386 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__ProcArgLives0_38, (MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57);
            }
#line 400 "modecheck_call.m"
            {
#line 400 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_37, check_hlds__modecheck_call__ProcArgModes_36, &check_hlds__modecheck_call__InitialInsts_39);
            }
#line 401 "modecheck_call.m"
            {
#line 401 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(check_hlds__modecheck_call__ProcInfo_31);
            }
#line 404 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 402 "modecheck_call.m"
              {
#line 402 "modecheck_call.m"
                {
#line 402 "modecheck_call.m"
                  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__InitialInsts_39, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_40, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59);
                }
#line 402 "modecheck_call.m"
              }
#line 404 "modecheck_call.m"
            else
#line 405 "modecheck_call.m"
              {
#line 405 "modecheck_call.m"
                {
#line 405 "modecheck_call.m"
                  check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__InitialInsts_39, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_40, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59);
                }
#line 405 "modecheck_call.m"
              }
#line 412 "modecheck_call.m"
            {
#line 412 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59, &check_hlds__modecheck_call__Errors_41);
            }
#line 418 "modecheck_call.m"
            if ((check_hlds__modecheck_call__Errors_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "modecheck_call.m"
              {
#line 419 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__NewMatch_48;

#line 420 "modecheck_call.m"
                {
#line 420 "modecheck_call.m"
                  check_hlds__modecheck_call__NewMatch_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 420 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_48, 0) = ((MR_Box) (check_hlds__modecheck_call__ProcId_23));
#line 420 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_48, 1) = ((MR_Box) (check_hlds__modecheck_call__InstVarSub_40));
#line 420 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_48, 2) = ((MR_Box) (check_hlds__modecheck_call__ProcArgModes_36));
#line 420 "modecheck_call.m"
                }
#line 421 "modecheck_call.m"
                {
#line 421 "modecheck_call.m"
                  check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "modecheck_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62, 0) = ((MR_Box) (check_hlds__modecheck_call__NewMatch_48));
#line 421 "modecheck_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62, 1) = ((MR_Box) (check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5));
#line 421 "modecheck_call.m"
                }
#line 419 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7;
#line 419 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59;
#line 419 "modecheck_call.m"
              }
#line 418 "modecheck_call.m"
            else
#line 414 "modecheck_call.m"
              {
#line 414 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__FirstError_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__Errors_41, (MR_Integer) 0)));
#line 414 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ErrorWaitingVars_44;
#line 414 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__Errors_41, (MR_Integer) 1)));
#line 416 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_45_45;
#line 416 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_46_46;
#line 416 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_47_47;

#line 415 "modecheck_call.m"
                {
#line 415 "modecheck_call.m"
                  check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64);
                }
#line 416 "modecheck_call.m"
                check_hlds__modecheck_call__ErrorWaitingVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_42, (MR_Integer) 0)));
#line 416 "modecheck_call.m"
                check_hlds__modecheck_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_42, (MR_Integer) 1)));
#line 416 "modecheck_call.m"
                check_hlds__modecheck_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_42, (MR_Integer) 2)));
#line 416 "modecheck_call.m"
                check_hlds__modecheck_call__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_42, (MR_Integer) 3)));
#line 417 "modecheck_call.m"
                {
#line 417 "modecheck_call.m"
                  parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_call__ErrorWaitingVars_44, check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7, &check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65);
                }
#line 414 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5;
#line 414 "modecheck_call.m"
              }
#line 425 "modecheck_call.m"
            /* direct tailcall eliminated */
#line 425 "modecheck_call.m"
            {
#line 425 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_call__ProcIds_24;
#line 425 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0__tmp_copy_5 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62;
#line 425 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0__tmp_copy_7 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65;
#line 425 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0__tmp_copy_9 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64;

#line 425 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0__tmp_copy_9;
#line 425 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0__tmp_copy_7;
#line 425 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0__tmp_copy_5;
#line 425 "modecheck_call.m"
              check_hlds__modecheck_call__HeadVar__1_1 = check_hlds__modecheck_call__HeadVar__1__tmp_copy_1;
#line 425 "modecheck_call.m"
            }
#line 425 "modecheck_call.m"
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
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54,
#line 41 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55)
#line 41 "modecheck_call.m"
{
#line 102 "modecheck_call.m"
  {
#line 102 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__MayChangeCalledProc_20;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Preds_21;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo_22;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredInfo_23;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Purity_24;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_25;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcIds_26;
#line 102 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__ArgOffset_27;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Markers_28;
#line 102 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InstMap_29;
#line 106 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_PredInfo_23;
#line 130 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_60_60;

#line 103 "modecheck_call.m"
    {
#line 103 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__MayChangeCalledProc_20);
    }
#line 104 "modecheck_call.m"
    {
#line 104 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_preds_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__Preds_21);
    }
#line 105 "modecheck_call.m"
    {
#line 105 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__ModuleInfo_22);
    }
#line 106 "modecheck_call.m"
    {
#line 106 "modecheck_call.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_call__Preds_21, ((MR_Box) (check_hlds__modecheck_call__PredId_11)), &check_hlds__modecheck_call__conv0_PredInfo_23);
    }
#line 106 "modecheck_call.m"
    check_hlds__modecheck_call__PredInfo_23 = ((MR_Word) check_hlds__modecheck_call__conv0_PredInfo_23);
#line 107 "modecheck_call.m"
    {
#line 107 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__Purity_24);
    }
#line 108 "modecheck_call.m"
    {
#line 108 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__Procs_25);
    }
#line 116 "modecheck_call.m"
#line 116 "modecheck_call.m"
    switch (check_hlds__modecheck_call__MayChangeCalledProc_20) {
#line 116 "modecheck_call.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 116 "modecheck_call.m"
      case (MR_Integer) 0:
#line 119 "modecheck_call.m"
        {
#line 119 "modecheck_call.m"
          check_hlds__modecheck_call__ProcIds_26 = hlds__hlds_pred__pred_info_all_procids_1_f_0(check_hlds__modecheck_call__PredInfo_23);
        }
#line 116 "modecheck_call.m"
        break;
#line 116 "modecheck_call.m"
      case (MR_Integer) 1:
#line 113 "modecheck_call.m"
        {
#line 111 "modecheck_call.m"
          MR_Integer check_hlds__modecheck_call__V_105_105;

#line 111 "modecheck_call.m"
          {
#line 111 "modecheck_call.m"
            check_hlds__modecheck_call__V_105_105 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          }
#line 111 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__ProcId0_13 == check_hlds__modecheck_call__V_105_105);
#line 113 "modecheck_call.m"
          if (check_hlds__modecheck_call__succeeded)
#line 112 "modecheck_call.m"
            {
#line 112 "modecheck_call.m"
              {
#line 112 "modecheck_call.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_call_pred\'/10", (MR_String) "invalid proc_id");
#line 112 "modecheck_call.m"
                return;
              }
#line 112 "modecheck_call.m"
            }
#line 113 "modecheck_call.m"
          else
#line 114 "modecheck_call.m"
            {
#line 114 "modecheck_call.m"
              {
#line 114 "modecheck_call.m"
                check_hlds__modecheck_call__ProcIds_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "modecheck_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, 0) = ((MR_Box) (check_hlds__modecheck_call__ProcId0_13));
#line 114 "modecheck_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "modecheck_call.m"
              }
#line 114 "modecheck_call.m"
            }
#line 113 "modecheck_call.m"
        }
#line 116 "modecheck_call.m"
        break;
#line 116 "modecheck_call.m"
    }
#line 122 "modecheck_call.m"
    {
#line 122 "modecheck_call.m"
      check_hlds__modecheck_util__compute_arg_offset_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__ArgOffset_27);
    }
#line 123 "modecheck_call.m"
    {
#line 123 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__Markers_28);
    }
#line 124 "modecheck_call.m"
    {
#line 124 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__InstMap_29);
    }
#line 129 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__ProcIds_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 129 "modecheck_call.m"
      {
#line 130 "modecheck_call.m"
        check_hlds__modecheck_call__V_60_60 = (MR_Integer) 3;
#line 130 "modecheck_call.m"
        {
#line 130 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modecheck_call__Markers_28, check_hlds__modecheck_call__V_60_60);
        }
#line 130 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 129 "modecheck_call.m"
      }
#line 137 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 132 "modecheck_call.m"
      {
#line 132 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__WaitingVars_30;

#line 132 "modecheck_call.m"
        {
#line 132 "modecheck_call.m"
          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_call__WaitingVars_30);
        }
#line 133 "modecheck_call.m"
        {
#line 133 "modecheck_call.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
        }
#line 134 "modecheck_call.m"
        {
#line 134 "modecheck_call.m"
          *check_hlds__modecheck_call__TheProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 135 "modecheck_call.m"
        *check_hlds__modecheck_call__ArgVars_16 = check_hlds__modecheck_call__ArgVars0_15;
#line 136 "modecheck_call.m"
        *check_hlds__modecheck_call__ExtraGoals_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 132 "modecheck_call.m"
      }
#line 137 "modecheck_call.m"
    else
#line 169 "modecheck_call.m"
      {
#line 169 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__ProcId_31;
#line 138 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_63_63;

#line 138 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__ProcIds_26)) == (MR_mktag((MR_Integer) 1)));
#line 138 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 138 "modecheck_call.m"
          {
#line 138 "modecheck_call.m"
            check_hlds__modecheck_call__ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, (MR_Integer) 0)));
#line 138 "modecheck_call.m"
            check_hlds__modecheck_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, (MR_Integer) 1)));
#line 138 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 138 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 138 "modecheck_call.m"
              {
#line 139 "modecheck_call.m"
                {
#line 139 "modecheck_call.m"
                  check_hlds__modecheck_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modecheck_call__Markers_28, (MR_Integer) 3);
                }
#line 139 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 140 "modecheck_call.m"
                if (!(check_hlds__modecheck_call__succeeded))
#line 140 "modecheck_call.m"
                  check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__MayChangeCalledProc_20 == (MR_Integer) 1);
#line 138 "modecheck_call.m"
              }
#line 138 "modecheck_call.m"
          }
#line 169 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 143 "modecheck_call.m"
          {
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcInfo_32;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgLives0_33;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes0_34;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcInstVarSet_35;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSet0_36;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSet_37;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes_38;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InitialInsts_39;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_40;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_66_66;
#line 143 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_67_67;
#line 144 "modecheck_call.m"
            MR_Box check_hlds__modecheck_call__conv1_ProcInfo_32;

#line 143 "modecheck_call.m"
            *check_hlds__modecheck_call__TheProcId_14 = check_hlds__modecheck_call__ProcId_31;
#line 144 "modecheck_call.m"
            {
#line 144 "modecheck_call.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__Procs_25, ((MR_Box) (check_hlds__modecheck_call__ProcId_31)), &check_hlds__modecheck_call__conv1_ProcInfo_32);
            }
#line 144 "modecheck_call.m"
            check_hlds__modecheck_call__ProcInfo_32 = ((MR_Word) check_hlds__modecheck_call__conv1_ProcInfo_32);
#line 149 "modecheck_call.m"
            {
#line 149 "modecheck_call.m"
              hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modecheck_call__ProcInfo_32, check_hlds__modecheck_call__ModuleInfo_22, &check_hlds__modecheck_call__ProcArgLives0_33);
            }
#line 150 "modecheck_call.m"
            {
#line 150 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ProcArgLives0_33, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65);
            }
#line 157 "modecheck_call.m"
            {
#line 157 "modecheck_call.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_32, &check_hlds__modecheck_call__ProcArgModes0_34);
            }
#line 158 "modecheck_call.m"
            {
#line 158 "modecheck_call.m"
              hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__modecheck_call__ProcInfo_32, &check_hlds__modecheck_call__ProcInstVarSet_35);
            }
#line 159 "modecheck_call.m"
            {
#line 159 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65, &check_hlds__modecheck_call__InstVarSet0_36);
            }
#line 160 "modecheck_call.m"
            {
#line 160 "modecheck_call.m"
              parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(check_hlds__modecheck_call__InstVarSet0_36, check_hlds__modecheck_call__ProcInstVarSet_35, &check_hlds__modecheck_call__InstVarSet_37, check_hlds__modecheck_call__ProcArgModes0_34, &check_hlds__modecheck_call__ProcArgModes_38);
            }
#line 162 "modecheck_call.m"
            {
#line 162 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_instvarset_3_p_0(check_hlds__modecheck_call__InstVarSet_37, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_66_66);
            }
#line 163 "modecheck_call.m"
            {
#line 163 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_22, check_hlds__modecheck_call__ProcArgModes_38, &check_hlds__modecheck_call__InitialInsts_39);
            }
#line 164 "modecheck_call.m"
            {
#line 164 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__InitialInsts_39, check_hlds__modecheck_call__ArgOffset_27, &check_hlds__modecheck_call__InstVarSub_40, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_67_67);
            }
#line 167 "modecheck_call.m"
            {
#line 167 "modecheck_call.m"
              check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(check_hlds__modecheck_call__ProcInfo_32, check_hlds__modecheck_call__Purity_24, check_hlds__modecheck_call__ProcArgModes_38, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__InstVarSub_40, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_67_67, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
#line 167 "modecheck_call.m"
              return;
            }
#line 143 "modecheck_call.m"
          }
#line 169 "modecheck_call.m"
        else
#line 173 "modecheck_call.m"
          {
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__TypeCtorInfo_100_100;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__OldErrors_41;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__WaitingVars0_42;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__RevMatchingProcIds_43;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__WaitingVars1_44;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__NewErrors_52;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Errors_53;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72;
#line 173 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78;

#line 173 "modecheck_call.m"
            {
#line 173 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__OldErrors_41);
            }
#line 174 "modecheck_call.m"
            {
#line 174 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70);
            }
#line 2134 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 176 "modecheck_call.m"
            {
#line 176 "modecheck_call.m"
              parse_tree__set_of_var__init_1_p_0(check_hlds__modecheck_call__TypeCtorInfo_100_100, &check_hlds__modecheck_call__WaitingVars0_42);
            }
#line 177 "modecheck_call.m"
            {
#line 177 "modecheck_call.m"
              check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_p_0(check_hlds__modecheck_call__ProcIds_26, check_hlds__modecheck_call__Procs_25, check_hlds__modecheck_call__ArgVars0_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_call__RevMatchingProcIds_43, check_hlds__modecheck_call__WaitingVars0_42, &check_hlds__modecheck_call__WaitingVars1_44, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72);
            }
#line 186 "modecheck_call.m"
            if ((check_hlds__modecheck_call__RevMatchingProcIds_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "modecheck_call.m"
              {
#line 182 "modecheck_call.m"
                {
#line 182 "modecheck_call.m"
                  check_hlds__modecheck_call__no_matching_modes_7_p_0(check_hlds__modecheck_call__PredId_11, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__DeterminismKnown_12, check_hlds__modecheck_call__WaitingVars1_44, check_hlds__modecheck_call__TheProcId_14, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78);
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
                MR_Word check_hlds__modecheck_call__MatchingProcIds_47;
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__CalleeModeErrors_48;
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ProcInfo_83;
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ProcArgModes_84;
#line 187 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__InstVarSub_85;
#line 191 "modecheck_call.m"
                MR_Box check_hlds__modecheck_call__conv2_ProcInfo_83;

#line 188 "modecheck_call.m"
                {
#line 188 "modecheck_call.m"
                  mercury__list__reverse_2_p_0((MR_Word) &check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0, check_hlds__modecheck_call__RevMatchingProcIds_43, &check_hlds__modecheck_call__MatchingProcIds_47);
                }
#line 189 "modecheck_call.m"
                {
#line 189 "modecheck_call.m"
                  check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72, check_hlds__modecheck_call__MatchingProcIds_47, check_hlds__modecheck_call__Procs_25, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__TheProcId_14, &check_hlds__modecheck_call__InstVarSub_85, &check_hlds__modecheck_call__ProcArgModes_84);
                }
#line 191 "modecheck_call.m"
                {
#line 191 "modecheck_call.m"
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__Procs_25, ((MR_Box) (*check_hlds__modecheck_call__TheProcId_14)), &check_hlds__modecheck_call__conv2_ProcInfo_83);
                }
#line 191 "modecheck_call.m"
                check_hlds__modecheck_call__ProcInfo_83 = ((MR_Word) check_hlds__modecheck_call__conv2_ProcInfo_83);
#line 192 "modecheck_call.m"
                {
#line 192 "modecheck_call.m"
                  check_hlds__modecheck_call__CalleeModeErrors_48 = hlds__hlds_pred__mode_errors_1_f_0(check_hlds__modecheck_call__ProcInfo_83);
                }
#line 205 "modecheck_call.m"
                if ((check_hlds__modecheck_call__CalleeModeErrors_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "modecheck_call.m"
                  {
#line 207 "modecheck_call.m"
                    check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(check_hlds__modecheck_call__ProcInfo_83, check_hlds__modecheck_call__Purity_24, check_hlds__modecheck_call__ProcArgModes_84, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__InstVarSub_85, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78);
                  }
#line 205 "modecheck_call.m"
                else
#line 194 "modecheck_call.m"
                  {
#line 194 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInsts_51;
#line 194 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_75_75;
#line 194 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_76_76;
#line 194 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__WaitingVars_80;

#line 196 "modecheck_call.m"
                    *check_hlds__modecheck_call__ArgVars_16 = check_hlds__modecheck_call__ArgVars0_15;
#line 197 "modecheck_call.m"
                    {
#line 197 "modecheck_call.m"
                      check_hlds__modecheck_call__WaitingVars_80 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__modecheck_call__TypeCtorInfo_100_100, *check_hlds__modecheck_call__ArgVars_16);
                    }
#line 198 "modecheck_call.m"
                    *check_hlds__modecheck_call__ExtraGoals_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "modecheck_call.m"
                    {
#line 199 "modecheck_call.m"
                      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_call__InstMap_29, *check_hlds__modecheck_call__ArgVars_16, &check_hlds__modecheck_call__ArgInsts_51);
                    }
#line 200 "modecheck_call.m"
                    {
#line 200 "modecheck_call.m"
                      check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_75_75);
                    }
#line 202 "modecheck_call.m"
                    {
#line 202 "modecheck_call.m"
                      check_hlds__modecheck_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 1) = ((MR_Box) (*check_hlds__modecheck_call__ArgVars_16));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 2) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_51));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 3) = ((MR_Box) (check_hlds__modecheck_call__PredId_11));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 4) = ((MR_Box) (*check_hlds__modecheck_call__TheProcId_14));
#line 202 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 5) = ((MR_Box) (check_hlds__modecheck_call__CalleeModeErrors_48));
#line 202 "modecheck_call.m"
                    }
#line 201 "modecheck_call.m"
                    {
#line 201 "modecheck_call.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_80, check_hlds__modecheck_call__V_76_76, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78);
                    }
#line 194 "modecheck_call.m"
                  }
#line 187 "modecheck_call.m"
              }
#line 213 "modecheck_call.m"
            {
#line 213 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78, &check_hlds__modecheck_call__NewErrors_52);
            }
#line 214 "modecheck_call.m"
            {
#line 214 "modecheck_call.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modecheck_call__OldErrors_41, check_hlds__modecheck_call__NewErrors_52, &check_hlds__modecheck_call__Errors_53);
            }
#line 215 "modecheck_call.m"
            {
#line 215 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_call__Errors_53, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
#line 215 "modecheck_call.m"
              return;
            }
#line 173 "modecheck_call.m"
          }
#line 169 "modecheck_call.m"
      }
#line 102 "modecheck_call.m"
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
#line 2342 "check_hlds.modecheck_call.c"
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
#line 2368 "check_hlds.modecheck_call.c"
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
#line 2388 "check_hlds.modecheck_call.c"
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

#line 2463 "check_hlds.modecheck_call.c"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_3_3 == check_hlds__modecheck_call__V_6_6);
#line 360 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 360 "modecheck_call.m"
          {
#line 2469 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_call_scalar_common_2[0];
#line 2471 "check_hlds.modecheck_call.c"
            {
#line 2473 "check_hlds.modecheck_call.c"
              check_hlds__modecheck_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_call__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_call__V_4_4)), ((MR_Box) (check_hlds__modecheck_call__V_7_7)));
            }
#line 360 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 360 "modecheck_call.m"
              {
#line 2480 "check_hlds.modecheck_call.c"
                check_hlds__modecheck_call__TypeInfo_13_13 = (MR_Word) &check_hlds__modecheck_call_scalar_common_1[2];
#line 2482 "check_hlds.modecheck_call.c"
                {
#line 2484 "check_hlds.modecheck_call.c"
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

#line 660 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0(
#line 660 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 660 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 660 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3)
#line 660 "modecheck_call.m"
{
#line 660 "modecheck_call.m"
  {
#line 660 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 660 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Cast_HeadVar1_4 = (MR_Integer) check_hlds__modecheck_call__HeadVar__2_2;
#line 660 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Cast_HeadVar2_5 = (MR_Integer) check_hlds__modecheck_call__HeadVar__3_3;

#line 660 "modecheck_call.m"
    {
#line 660 "modecheck_call.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__modecheck_call__HeadVar__1_1, check_hlds__modecheck_call__Cast_HeadVar1_4, check_hlds__modecheck_call__Cast_HeadVar2_5);
#line 660 "modecheck_call.m"
      return;
    }
#line 660 "modecheck_call.m"
  }
#line 660 "modecheck_call.m"
}

#line 660 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0(
#line 660 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_1,
#line 660 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2)
#line 660 "modecheck_call.m"
{
#line 2541 "check_hlds.modecheck_call.c"
  {
#line 2543 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__2_1 == check_hlds__modecheck_call__HeadVar__2_2);

#line 2546 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 2548 "check_hlds.modecheck_call.c"
  }
#line 660 "modecheck_call.m"
}

#line 785 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__compare_liveness_list_3_p_0(
#line 785 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 785 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 785 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3)
#line 785 "modecheck_call.m"
{
#line 788 "modecheck_call.m"
  {
#line 788 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 788 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "modecheck_call.m"
      if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 2;
#line 788 "modecheck_call.m"
      else
#line 791 "modecheck_call.m"
        {
#line 792 "modecheck_call.m"
          {
#line 792 "modecheck_call.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_liveness_list\'/3", (MR_String) "length mismatch");
#line 792 "modecheck_call.m"
            return;
          }
#line 791 "modecheck_call.m"
        }
#line 788 "modecheck_call.m"
    else
#line 788 "modecheck_call.m"
      {
#line 788 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 788 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));

#line 788 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "modecheck_call.m"
          {
#line 790 "modecheck_call.m"
            {
#line 790 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_liveness_list\'/3", (MR_String) "length mismatch");
#line 790 "modecheck_call.m"
              return;
            }
#line 789 "modecheck_call.m"
          }
#line 788 "modecheck_call.m"
        else
#line 793 "modecheck_call.m"
          {
#line 793 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__LiveB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 793 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__LiveBs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 793 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Result1_22;

#line 795 "modecheck_call.m"
            {
#line 795 "modecheck_call.m"
              check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__V_23_23, check_hlds__modecheck_call__LiveBs_19, &check_hlds__modecheck_call__Result1_22);
            }
#line 2626 "check_hlds.modecheck_call.c"
#line 2627 "check_hlds.modecheck_call.c"
            switch (check_hlds__modecheck_call__V_24_24) {
#line 2629 "check_hlds.modecheck_call.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2631 "check_hlds.modecheck_call.c"
              case (MR_Integer) 1:
#line 2633 "check_hlds.modecheck_call.c"
#line 2634 "check_hlds.modecheck_call.c"
                switch (check_hlds__modecheck_call__LiveB_18) {
#line 2636 "check_hlds.modecheck_call.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 2638 "check_hlds.modecheck_call.c"
                  case (MR_Integer) 1:
#line 830 "modecheck_call.m"
                    *check_hlds__modecheck_call__HeadVar__3_3 = check_hlds__modecheck_call__Result1_22;
#line 2642 "check_hlds.modecheck_call.c"
                    break;
#line 2644 "check_hlds.modecheck_call.c"
                  case (MR_Integer) 0:
#line 822 "modecheck_call.m"
                    {
#line 822 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = ((&check_hlds__modecheck_call_vector_common_4[24 + check_hlds__modecheck_call__Result1_22]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
                    }
#line 2652 "check_hlds.modecheck_call.c"
                    break;
#line 2654 "check_hlds.modecheck_call.c"
                }
#line 2656 "check_hlds.modecheck_call.c"
                break;
#line 2658 "check_hlds.modecheck_call.c"
              case (MR_Integer) 0:
#line 2660 "check_hlds.modecheck_call.c"
#line 2661 "check_hlds.modecheck_call.c"
                switch (check_hlds__modecheck_call__LiveB_18) {
#line 2663 "check_hlds.modecheck_call.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 2665 "check_hlds.modecheck_call.c"
                  case (MR_Integer) 1:
#line 822 "modecheck_call.m"
                    {
#line 822 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = ((&check_hlds__modecheck_call_vector_common_4[28 + check_hlds__modecheck_call__Result1_22]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
                    }
#line 2673 "check_hlds.modecheck_call.c"
                    break;
#line 2675 "check_hlds.modecheck_call.c"
                  case (MR_Integer) 0:
#line 830 "modecheck_call.m"
                    *check_hlds__modecheck_call__HeadVar__3_3 = check_hlds__modecheck_call__Result1_22;
#line 2679 "check_hlds.modecheck_call.c"
                    break;
#line 2681 "check_hlds.modecheck_call.c"
                }
#line 2683 "check_hlds.modecheck_call.c"
                break;
#line 2685 "check_hlds.modecheck_call.c"
            }
#line 793 "modecheck_call.m"
          }
#line 788 "modecheck_call.m"
      }
#line 788 "modecheck_call.m"
  }
#line 785 "modecheck_call.m"
}

#line 768 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__compare_inst_list_2_6_p_0(
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_1,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__5_5,
#line 768 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__6_6)
#line 768 "modecheck_call.m"
{
#line 772 "modecheck_call.m"
  {
#line 772 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 772 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "modecheck_call.m"
      {
#line 772 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 772 "modecheck_call.m"
          {
#line 772 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 772 "modecheck_call.m"
              {
#line 772 "modecheck_call.m"
                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 2;
#line 772 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 772 "modecheck_call.m"
              }
#line 772 "modecheck_call.m"
          }
#line 772 "modecheck_call.m"
      }
#line 772 "modecheck_call.m"
    else
#line 772 "modecheck_call.m"
      {
#line 772 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 772 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 772 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_38_38;
#line 772 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_39_39;
#line 772 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_40_40;
#line 772 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_41_41;

#line 773 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 773 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 773 "modecheck_call.m"
          {
#line 773 "modecheck_call.m"
            check_hlds__modecheck_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 0)));
#line 773 "modecheck_call.m"
            check_hlds__modecheck_call__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 1)));
#line 774 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 774 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 774 "modecheck_call.m"
              {
#line 774 "modecheck_call.m"
                check_hlds__modecheck_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__5_5, (MR_Integer) 0)));
#line 774 "modecheck_call.m"
                check_hlds__modecheck_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__5_5, (MR_Integer) 1)));
#line 772 "modecheck_call.m"
                if ((check_hlds__modecheck_call__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "modecheck_call.m"
                  {
#line 774 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_20_20;
#line 774 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__B_mi_A_49;

#line 862 "modecheck_call.m"
                    {
#line 862 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                    }
#line 864 "modecheck_call.m"
                    if (check_hlds__modecheck_call__succeeded)
#line 863 "modecheck_call.m"
                      check_hlds__modecheck_call__B_mi_A_49 = (MR_Integer) 1;
#line 864 "modecheck_call.m"
                    else
#line 865 "modecheck_call.m"
                      check_hlds__modecheck_call__B_mi_A_49 = (MR_Integer) 0;
#line 776 "modecheck_call.m"
                    check_hlds__modecheck_call__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 857 "modecheck_call.m"
                    {
#line 857 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                    }
#line 2810 "check_hlds.modecheck_call.c"
                    if (check_hlds__modecheck_call__succeeded)
#line 2812 "check_hlds.modecheck_call.c"
                      {
#line 2814 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result0_17;
#line 2816 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result1_18;

#line 868 "modecheck_call.m"
#line 868 "modecheck_call.m"
                        switch (check_hlds__modecheck_call__B_mi_A_49) {
#line 868 "modecheck_call.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 868 "modecheck_call.m"
                          case (MR_Integer) 0:
#line 867 "modecheck_call.m"
                            check_hlds__modecheck_call__Result0_17 = (MR_Integer) 0;
#line 868 "modecheck_call.m"
                            break;
#line 868 "modecheck_call.m"
                          case (MR_Integer) 1:
#line 870 "modecheck_call.m"
                            {
#line 870 "modecheck_call.m"
                              MR_Word check_hlds__modecheck_call__B_mf_A_55;

#line 920 "modecheck_call.m"
                              {
#line 920 "modecheck_call.m"
                                check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                              }
#line 924 "modecheck_call.m"
                              if (check_hlds__modecheck_call__succeeded)
#line 923 "modecheck_call.m"
                                check_hlds__modecheck_call__B_mf_A_55 = (MR_Integer) 1;
#line 924 "modecheck_call.m"
                              else
#line 925 "modecheck_call.m"
                                check_hlds__modecheck_call__B_mf_A_55 = (MR_Integer) 0;
#line 912 "modecheck_call.m"
                              {
#line 912 "modecheck_call.m"
                                check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                              }
#line 2855 "check_hlds.modecheck_call.c"
                              if (check_hlds__modecheck_call__succeeded)
#line 928 "modecheck_call.m"
#line 928 "modecheck_call.m"
                                switch (check_hlds__modecheck_call__B_mf_A_55) {
#line 928 "modecheck_call.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 928 "modecheck_call.m"
                                  case (MR_Integer) 0:
#line 927 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_17 = (MR_Integer) 0;
#line 928 "modecheck_call.m"
                                    break;
#line 928 "modecheck_call.m"
                                  case (MR_Integer) 1:
#line 930 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_17 = (MR_Integer) 2;
#line 928 "modecheck_call.m"
                                    break;
#line 928 "modecheck_call.m"
                                }
#line 2876 "check_hlds.modecheck_call.c"
                              else
#line 928 "modecheck_call.m"
#line 928 "modecheck_call.m"
                                switch (check_hlds__modecheck_call__B_mf_A_55) {
#line 928 "modecheck_call.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 928 "modecheck_call.m"
                                  case (MR_Integer) 0:
#line 929 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_17 = (MR_Integer) 3;
#line 928 "modecheck_call.m"
                                    break;
#line 928 "modecheck_call.m"
                                  case (MR_Integer) 1:
#line 928 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_17 = (MR_Integer) 1;
#line 928 "modecheck_call.m"
                                    break;
#line 928 "modecheck_call.m"
                                }
#line 870 "modecheck_call.m"
                            }
#line 868 "modecheck_call.m"
                            break;
#line 868 "modecheck_call.m"
                        }
#line 776 "modecheck_call.m"
                        {
#line 776 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_20_20, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_18);
                        }
#line 2908 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2910 "check_hlds.modecheck_call.c"
                          {
#line 822 "modecheck_call.m"
#line 822 "modecheck_call.m"
                            switch (check_hlds__modecheck_call__Result0_17) {
#line 822 "modecheck_call.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 822 "modecheck_call.m"
                              case (MR_Integer) 0:
#line 822 "modecheck_call.m"
                                {
#line 822 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[0 + check_hlds__modecheck_call__Result1_18]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
                                }
#line 822 "modecheck_call.m"
                                break;
#line 822 "modecheck_call.m"
                              case (MR_Integer) 3:
#line 831 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 822 "modecheck_call.m"
                                break;
#line 822 "modecheck_call.m"
                              case (MR_Integer) 2:
#line 830 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = check_hlds__modecheck_call__Result1_18;
#line 822 "modecheck_call.m"
                                break;
#line 822 "modecheck_call.m"
                              case (MR_Integer) 1:
#line 822 "modecheck_call.m"
                                {
#line 822 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[4 + check_hlds__modecheck_call__Result1_18]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
                                }
#line 822 "modecheck_call.m"
                                break;
#line 822 "modecheck_call.m"
                            }
#line 822 "modecheck_call.m"
                            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 2953 "check_hlds.modecheck_call.c"
                          }
#line 2955 "check_hlds.modecheck_call.c"
                      }
#line 2957 "check_hlds.modecheck_call.c"
                    else
#line 2959 "check_hlds.modecheck_call.c"
                      {
#line 2961 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result1_79;

#line 776 "modecheck_call.m"
                        {
#line 776 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_20_20, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_79);
                        }
#line 2969 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2971 "check_hlds.modecheck_call.c"
                          {
#line 2973 "check_hlds.modecheck_call.c"
#line 2974 "check_hlds.modecheck_call.c"
                            switch (check_hlds__modecheck_call__B_mi_A_49) {
#line 2976 "check_hlds.modecheck_call.c"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 2978 "check_hlds.modecheck_call.c"
                              case (MR_Integer) 0:
#line 831 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 2982 "check_hlds.modecheck_call.c"
                                break;
#line 2984 "check_hlds.modecheck_call.c"
                              case (MR_Integer) 1:
#line 822 "modecheck_call.m"
                                {
#line 822 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[8 + check_hlds__modecheck_call__Result1_79]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
                                }
#line 2992 "check_hlds.modecheck_call.c"
                                break;
#line 2994 "check_hlds.modecheck_call.c"
                            }
#line 2996 "check_hlds.modecheck_call.c"
                            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 2998 "check_hlds.modecheck_call.c"
                          }
#line 3000 "check_hlds.modecheck_call.c"
                      }
#line 774 "modecheck_call.m"
                  }
#line 772 "modecheck_call.m"
                else
#line 779 "modecheck_call.m"
                  {
#line 779 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInst_26;
#line 779 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInsts_27;
#line 779 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__4_4, (MR_Integer) 0)));
#line 779 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_34_34;
#line 779 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_35_35;
#line 779 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__B_mi_A_65;

#line 779 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 779 "modecheck_call.m"
                    if (check_hlds__modecheck_call__succeeded)
#line 779 "modecheck_call.m"
                      {
#line 779 "modecheck_call.m"
                        check_hlds__modecheck_call__ArgInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_33_33, (MR_Integer) 0)));
#line 779 "modecheck_call.m"
                        check_hlds__modecheck_call__ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_33_33, (MR_Integer) 1)));
#line 780 "modecheck_call.m"
                        {
#line 780 "modecheck_call.m"
                          check_hlds__modecheck_call__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 780 "modecheck_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_34_34, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgInst_26));
#line 780 "modecheck_call.m"
                        }
#line 862 "modecheck_call.m"
                        {
#line 862 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                        }
#line 864 "modecheck_call.m"
                        if (check_hlds__modecheck_call__succeeded)
#line 863 "modecheck_call.m"
                          check_hlds__modecheck_call__B_mi_A_65 = (MR_Integer) 1;
#line 864 "modecheck_call.m"
                        else
#line 865 "modecheck_call.m"
                          check_hlds__modecheck_call__B_mi_A_65 = (MR_Integer) 0;
#line 781 "modecheck_call.m"
                        {
#line 781 "modecheck_call.m"
                          check_hlds__modecheck_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 781 "modecheck_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_27));
#line 781 "modecheck_call.m"
                        }
#line 857 "modecheck_call.m"
                        {
#line 857 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                        }
#line 3065 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 3067 "check_hlds.modecheck_call.c"
                          {
#line 3069 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result0_31;
#line 3071 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result1_32;

#line 868 "modecheck_call.m"
#line 868 "modecheck_call.m"
                            switch (check_hlds__modecheck_call__B_mi_A_65) {
#line 868 "modecheck_call.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 868 "modecheck_call.m"
                              case (MR_Integer) 0:
#line 867 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 868 "modecheck_call.m"
                                break;
#line 868 "modecheck_call.m"
                              case (MR_Integer) 1:
#line 870 "modecheck_call.m"
                                {
#line 870 "modecheck_call.m"
                                  MR_Word check_hlds__modecheck_call__ArgInst_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_34_34, (MR_Integer) 0)));
#line 870 "modecheck_call.m"
                                  MR_Word check_hlds__modecheck_call__Arg_mf_B_69;

#line 892 "modecheck_call.m"
                                  {
#line 892 "modecheck_call.m"
                                    check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__ArgInst_67, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                  }
#line 896 "modecheck_call.m"
                                  if (check_hlds__modecheck_call__succeeded)
#line 895 "modecheck_call.m"
                                    check_hlds__modecheck_call__Arg_mf_B_69 = (MR_Integer) 1;
#line 896 "modecheck_call.m"
                                  else
#line 897 "modecheck_call.m"
                                    check_hlds__modecheck_call__Arg_mf_B_69 = (MR_Integer) 0;
#line 884 "modecheck_call.m"
                                  {
#line 884 "modecheck_call.m"
                                    check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__ArgInst_67, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                  }
#line 3112 "check_hlds.modecheck_call.c"
                                  if (check_hlds__modecheck_call__succeeded)
#line 3114 "check_hlds.modecheck_call.c"
#line 3115 "check_hlds.modecheck_call.c"
                                    switch (check_hlds__modecheck_call__Arg_mf_B_69) {
#line 3117 "check_hlds.modecheck_call.c"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 3119 "check_hlds.modecheck_call.c"
                                      case (MR_Integer) 0:
#line 899 "modecheck_call.m"
                                        check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 3123 "check_hlds.modecheck_call.c"
                                        break;
#line 3125 "check_hlds.modecheck_call.c"
                                      case (MR_Integer) 1:
#line 3127 "check_hlds.modecheck_call.c"
                                        {
#line 3129 "check_hlds.modecheck_call.c"
                                          MR_Word check_hlds__modecheck_call__B_mf_A_71;

#line 920 "modecheck_call.m"
                                          {
#line 920 "modecheck_call.m"
                                            check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                          }
#line 924 "modecheck_call.m"
                                          if (check_hlds__modecheck_call__succeeded)
#line 923 "modecheck_call.m"
                                            check_hlds__modecheck_call__B_mf_A_71 = (MR_Integer) 1;
#line 924 "modecheck_call.m"
                                          else
#line 925 "modecheck_call.m"
                                            check_hlds__modecheck_call__B_mf_A_71 = (MR_Integer) 0;
#line 912 "modecheck_call.m"
                                          {
#line 912 "modecheck_call.m"
                                            check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                          }
#line 3150 "check_hlds.modecheck_call.c"
                                          if (check_hlds__modecheck_call__succeeded)
#line 928 "modecheck_call.m"
#line 928 "modecheck_call.m"
                                            switch (check_hlds__modecheck_call__B_mf_A_71) {
#line 928 "modecheck_call.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 928 "modecheck_call.m"
                                              case (MR_Integer) 0:
#line 927 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 928 "modecheck_call.m"
                                                break;
#line 928 "modecheck_call.m"
                                              case (MR_Integer) 1:
#line 930 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 2;
#line 928 "modecheck_call.m"
                                                break;
#line 928 "modecheck_call.m"
                                            }
#line 3171 "check_hlds.modecheck_call.c"
                                          else
#line 928 "modecheck_call.m"
#line 928 "modecheck_call.m"
                                            switch (check_hlds__modecheck_call__B_mf_A_71) {
#line 928 "modecheck_call.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 928 "modecheck_call.m"
                                              case (MR_Integer) 0:
#line 929 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 3;
#line 928 "modecheck_call.m"
                                                break;
#line 928 "modecheck_call.m"
                                              case (MR_Integer) 1:
#line 928 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 928 "modecheck_call.m"
                                                break;
#line 928 "modecheck_call.m"
                                            }
#line 3192 "check_hlds.modecheck_call.c"
                                        }
#line 3194 "check_hlds.modecheck_call.c"
                                        break;
#line 3196 "check_hlds.modecheck_call.c"
                                    }
#line 3198 "check_hlds.modecheck_call.c"
                                  else
#line 3200 "check_hlds.modecheck_call.c"
#line 3201 "check_hlds.modecheck_call.c"
                                    switch (check_hlds__modecheck_call__Arg_mf_B_69) {
#line 3203 "check_hlds.modecheck_call.c"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 3205 "check_hlds.modecheck_call.c"
                                      case (MR_Integer) 0:
#line 3207 "check_hlds.modecheck_call.c"
                                        {
#line 3209 "check_hlds.modecheck_call.c"
                                          MR_Word check_hlds__modecheck_call__B_mf_A_89;

#line 920 "modecheck_call.m"
                                          {
#line 920 "modecheck_call.m"
                                            check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                          }
#line 924 "modecheck_call.m"
                                          if (check_hlds__modecheck_call__succeeded)
#line 923 "modecheck_call.m"
                                            check_hlds__modecheck_call__B_mf_A_89 = (MR_Integer) 1;
#line 924 "modecheck_call.m"
                                          else
#line 925 "modecheck_call.m"
                                            check_hlds__modecheck_call__B_mf_A_89 = (MR_Integer) 0;
#line 912 "modecheck_call.m"
                                          {
#line 912 "modecheck_call.m"
                                            check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                          }
#line 3230 "check_hlds.modecheck_call.c"
                                          if (check_hlds__modecheck_call__succeeded)
#line 928 "modecheck_call.m"
#line 928 "modecheck_call.m"
                                            switch (check_hlds__modecheck_call__B_mf_A_89) {
#line 928 "modecheck_call.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 928 "modecheck_call.m"
                                              case (MR_Integer) 0:
#line 927 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 928 "modecheck_call.m"
                                                break;
#line 928 "modecheck_call.m"
                                              case (MR_Integer) 1:
#line 930 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 2;
#line 928 "modecheck_call.m"
                                                break;
#line 928 "modecheck_call.m"
                                            }
#line 3251 "check_hlds.modecheck_call.c"
                                          else
#line 928 "modecheck_call.m"
#line 928 "modecheck_call.m"
                                            switch (check_hlds__modecheck_call__B_mf_A_89) {
#line 928 "modecheck_call.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 928 "modecheck_call.m"
                                              case (MR_Integer) 0:
#line 929 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 3;
#line 928 "modecheck_call.m"
                                                break;
#line 928 "modecheck_call.m"
                                              case (MR_Integer) 1:
#line 928 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 928 "modecheck_call.m"
                                                break;
#line 928 "modecheck_call.m"
                                            }
#line 3272 "check_hlds.modecheck_call.c"
                                        }
#line 3274 "check_hlds.modecheck_call.c"
                                        break;
#line 3276 "check_hlds.modecheck_call.c"
                                      case (MR_Integer) 1:
#line 900 "modecheck_call.m"
                                        check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 3280 "check_hlds.modecheck_call.c"
                                        break;
#line 3282 "check_hlds.modecheck_call.c"
                                    }
#line 870 "modecheck_call.m"
                                }
#line 868 "modecheck_call.m"
                                break;
#line 868 "modecheck_call.m"
                            }
#line 781 "modecheck_call.m"
                            {
#line 781 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_35_35, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_32);
                            }
#line 3295 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 3297 "check_hlds.modecheck_call.c"
                              {
#line 822 "modecheck_call.m"
#line 822 "modecheck_call.m"
                                switch (check_hlds__modecheck_call__Result0_31) {
#line 822 "modecheck_call.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 822 "modecheck_call.m"
                                  case (MR_Integer) 0:
#line 822 "modecheck_call.m"
                                    {
#line 822 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[12 + check_hlds__modecheck_call__Result1_32]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
                                    }
#line 822 "modecheck_call.m"
                                    break;
#line 822 "modecheck_call.m"
                                  case (MR_Integer) 3:
#line 831 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 822 "modecheck_call.m"
                                    break;
#line 822 "modecheck_call.m"
                                  case (MR_Integer) 2:
#line 830 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = check_hlds__modecheck_call__Result1_32;
#line 822 "modecheck_call.m"
                                    break;
#line 822 "modecheck_call.m"
                                  case (MR_Integer) 1:
#line 822 "modecheck_call.m"
                                    {
#line 822 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[16 + check_hlds__modecheck_call__Result1_32]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
                                    }
#line 822 "modecheck_call.m"
                                    break;
#line 822 "modecheck_call.m"
                                }
#line 822 "modecheck_call.m"
                                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 3340 "check_hlds.modecheck_call.c"
                              }
#line 3342 "check_hlds.modecheck_call.c"
                          }
#line 3344 "check_hlds.modecheck_call.c"
                        else
#line 3346 "check_hlds.modecheck_call.c"
                          {
#line 3348 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result1_94;

#line 781 "modecheck_call.m"
                            {
#line 781 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_35_35, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_94);
                            }
#line 3356 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 3358 "check_hlds.modecheck_call.c"
                              {
#line 3360 "check_hlds.modecheck_call.c"
#line 3361 "check_hlds.modecheck_call.c"
                                switch (check_hlds__modecheck_call__B_mi_A_65) {
#line 3363 "check_hlds.modecheck_call.c"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 3365 "check_hlds.modecheck_call.c"
                                  case (MR_Integer) 0:
#line 831 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 3369 "check_hlds.modecheck_call.c"
                                    break;
#line 3371 "check_hlds.modecheck_call.c"
                                  case (MR_Integer) 1:
#line 822 "modecheck_call.m"
                                    {
#line 822 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[20 + check_hlds__modecheck_call__Result1_94]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 822 "modecheck_call.m"
                                    }
#line 3379 "check_hlds.modecheck_call.c"
                                    break;
#line 3381 "check_hlds.modecheck_call.c"
                                }
#line 3383 "check_hlds.modecheck_call.c"
                                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 3385 "check_hlds.modecheck_call.c"
                              }
#line 3387 "check_hlds.modecheck_call.c"
                          }
#line 779 "modecheck_call.m"
                      }
#line 779 "modecheck_call.m"
                  }
#line 774 "modecheck_call.m"
              }
#line 773 "modecheck_call.m"
          }
#line 772 "modecheck_call.m"
      }
#line 772 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 772 "modecheck_call.m"
  }
#line 768 "modecheck_call.m"
}

#line 500 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
#line 500 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 500 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_2,
#line 500 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3,
#line 500 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__4_4)
#line 500 "modecheck_call.m"
{
#line 503 "modecheck_call.m"
  {
#line 503 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 503 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "modecheck_call.m"
      {
#line 503 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "modecheck_call.m"
      }
#line 503 "modecheck_call.m"
    else
#line 505 "modecheck_call.m"
      {
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Inst_9;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Insts_10;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLive_11;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLives_12;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ModuleInfo_13;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InstMap_14;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__VarTypes_15;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Inst0_16;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Type_17;
#line 505 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLive0_18;

#line 506 "modecheck_call.m"
        {
#line 506 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__ModuleInfo_13);
        }
#line 507 "modecheck_call.m"
        {
#line 507 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__InstMap_14);
        }
#line 508 "modecheck_call.m"
        {
#line 508 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__VarTypes_15);
        }
#line 509 "modecheck_call.m"
        {
#line 509 "modecheck_call.m"
          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_call__InstMap_14, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__Inst0_16);
        }
#line 510 "modecheck_call.m"
        {
#line 510 "modecheck_call.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_call__VarTypes_15, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__Type_17);
        }
#line 511 "modecheck_call.m"
        {
#line 511 "modecheck_call.m"
          check_hlds__mode_util__normalise_inst_4_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Type_17, check_hlds__modecheck_call__Inst0_16, &check_hlds__modecheck_call__Inst_9);
        }
#line 513 "modecheck_call.m"
        {
#line 513 "modecheck_call.m"
          check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_call__ModeInfo_2, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__IsLive0_18);
        }
#line 517 "modecheck_call.m"
#line 517 "modecheck_call.m"
        switch (check_hlds__modecheck_call__IsLive0_18) {
#line 517 "modecheck_call.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 517 "modecheck_call.m"
          case (MR_Integer) 1:
#line 529 "modecheck_call.m"
            {
#line 525 "modecheck_call.m"
              {
#line 525 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Inst_9);
              }
#line 525 "modecheck_call.m"
              if (check_hlds__modecheck_call__succeeded)
#line 526 "modecheck_call.m"
                {
#line 526 "modecheck_call.m"
                  check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_is_mostly_unique_2_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Inst_9);
                }
#line 529 "modecheck_call.m"
              if (check_hlds__modecheck_call__succeeded)
#line 528 "modecheck_call.m"
                check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 1;
#line 529 "modecheck_call.m"
              else
#line 530 "modecheck_call.m"
                check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 0;
#line 529 "modecheck_call.m"
            }
#line 517 "modecheck_call.m"
            break;
#line 517 "modecheck_call.m"
          case (MR_Integer) 0:
#line 516 "modecheck_call.m"
            check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 0;
#line 517 "modecheck_call.m"
            break;
#line 517 "modecheck_call.m"
        }
#line 534 "modecheck_call.m"
        {
#line 534 "modecheck_call.m"
          check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(check_hlds__modecheck_call__Vars_7, check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__Insts_10, &check_hlds__modecheck_call__IsLives_12);
        }
#line 505 "modecheck_call.m"
        {
#line 505 "modecheck_call.m"
          MR_Word base;
#line 505 "modecheck_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "modecheck_call.m"
          *check_hlds__modecheck_call__HeadVar__3_3 = base;
#line 505 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_call__Inst_9));
#line 505 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_call__Insts_10));
#line 505 "modecheck_call.m"
        }
#line 505 "modecheck_call.m"
        {
#line 505 "modecheck_call.m"
          MR_Word base;
#line 505 "modecheck_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "modecheck_call.m"
          *check_hlds__modecheck_call__HeadVar__4_4 = base;
#line 505 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_call__IsLive_11));
#line 505 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_call__IsLives_12));
#line 505 "modecheck_call.m"
        }
#line 505 "modecheck_call.m"
      }
#line 503 "modecheck_call.m"
  }
#line 500 "modecheck_call.m"
}

#line 428 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcInfo_11,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Purity_12,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcArgModes_13,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_14,
#line 428 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ArgOffset_15,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__InstVarSub_16,
#line 428 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_17,
#line 428 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 428 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28,
#line 428 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29)
#line 428 "modecheck_call.m"
{
#line 433 "modecheck_call.m"
  {
#line 433 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo_20;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__MayInitSolverVars_21;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts0_22;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_23;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts0_24;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_25;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__NeverSucceeds_26;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32;
#line 433 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33;

#line 434 "modecheck_call.m"
    {
#line 434 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__ModuleInfo_20);
    }
#line 435 "modecheck_call.m"
    {
#line 435 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__MayInitSolverVars_21);
    }
#line 440 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Purity_12 == (MR_Integer) 2);
#line 440 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 441 "modecheck_call.m"
      {
#line 441 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28);
      }
#line 444 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 443 "modecheck_call.m"
      {
#line 443 "modecheck_call.m"
        {
#line 443 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 443 "modecheck_call.m"
      }
#line 444 "modecheck_call.m"
    else
#line 444 "modecheck_call.m"
      check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28;
#line 448 "modecheck_call.m"
    {
#line 448 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_20, check_hlds__modecheck_call__ProcArgModes_13, &check_hlds__modecheck_call__InitialInsts0_22);
    }
#line 449 "modecheck_call.m"
    {
#line 449 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_16, check_hlds__modecheck_call__InitialInsts0_22, &check_hlds__modecheck_call__InitialInsts_23);
    }
#line 450 "modecheck_call.m"
    {
#line 450 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_20, check_hlds__modecheck_call__ProcArgModes_13, &check_hlds__modecheck_call__FinalInsts0_24);
    }
#line 451 "modecheck_call.m"
    {
#line 451 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_16, check_hlds__modecheck_call__FinalInsts0_24, &check_hlds__modecheck_call__FinalInsts_25);
    }
#line 452 "modecheck_call.m"
    {
#line 452 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__ArgVars0_14, check_hlds__modecheck_call__InitialInsts_23, check_hlds__modecheck_call__FinalInsts_25, check_hlds__modecheck_call__ArgOffset_15, check_hlds__modecheck_call__ArgVars_17, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 454 "modecheck_call.m"
    {
#line 454 "modecheck_call.m"
      hlds__hlds_pred__proc_info_never_succeeds_2_p_0(check_hlds__modecheck_call__ProcInfo_11, &check_hlds__modecheck_call__NeverSucceeds_26);
    }
#line 459 "modecheck_call.m"
#line 459 "modecheck_call.m"
    switch (check_hlds__modecheck_call__NeverSucceeds_26) {
#line 459 "modecheck_call.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 459 "modecheck_call.m"
      case (MR_Integer) 0:
#line 460 "modecheck_call.m"
        check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32;
#line 459 "modecheck_call.m"
        break;
#line 459 "modecheck_call.m"
      case (MR_Integer) 1:
#line 456 "modecheck_call.m"
        {
#line 456 "modecheck_call.m"
          MR_Word check_hlds__modecheck_call__Instmap_27;

#line 457 "modecheck_call.m"
          {
#line 457 "modecheck_call.m"
            hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_call__Instmap_27);
          }
#line 458 "modecheck_call.m"
          {
#line 458 "modecheck_call.m"
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_call__Instmap_27, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33);
          }
#line 456 "modecheck_call.m"
        }
#line 459 "modecheck_call.m"
        break;
#line 459 "modecheck_call.m"
    }
#line 462 "modecheck_call.m"
    {
#line 462 "modecheck_call.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(check_hlds__modecheck_call__MayInitSolverVars_21, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29);
#line 462 "modecheck_call.m"
      return;
    }
#line 433 "modecheck_call.m"
  }
#line 428 "modecheck_call.m"
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
#line 480 "modecheck_call.m"
        MR_Box check_hlds__modecheck_call__conv1_PredInfo0_42;

#line 477 "modecheck_call.m"
        {
#line 477 "modecheck_call.m"
          check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(check_hlds__modecheck_call__ArgVars_9, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__InitialInsts_38, &check_hlds__modecheck_call__ArgLives_39);
        }
#line 478 "modecheck_call.m"
        {
#line 478 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__ModuleInfo0_40);
        }
#line 479 "modecheck_call.m"
        {
#line 479 "modecheck_call.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modecheck_call__ModuleInfo0_40, &check_hlds__modecheck_call__Preds0_41);
        }
#line 480 "modecheck_call.m"
        {
#line 480 "modecheck_call.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_call__Preds0_41, ((MR_Box) (check_hlds__modecheck_call__PredId_8)), &check_hlds__modecheck_call__conv1_PredInfo0_42);
        }
#line 480 "modecheck_call.m"
        check_hlds__modecheck_call__PredInfo0_42 = ((MR_Word) check_hlds__modecheck_call__conv1_PredInfo0_42);
#line 481 "modecheck_call.m"
        {
#line 481 "modecheck_call.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__modecheck_call__PredInfo0_42, &check_hlds__modecheck_call__Context_43);
        }
#line 482 "modecheck_call.m"
        {
#line 482 "modecheck_call.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_1[0], check_hlds__modecheck_call__ArgVars_9, &check_hlds__modecheck_call__Arity_44);
        }
#line 483 "modecheck_call.m"
        {
#line 483 "modecheck_call.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_call__Arity_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), &check_hlds__modecheck_call__FinalInsts_45);
        }
#line 484 "modecheck_call.m"
        {
#line 484 "modecheck_call.m"
          parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modecheck_call__InitialInsts_38, check_hlds__modecheck_call__FinalInsts_45, &check_hlds__modecheck_call__Modes_46);
        }
#line 485 "modecheck_call.m"
        {
#line 485 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__InstVarSet_47);
        }
#line 490 "modecheck_call.m"
        {
#line 490 "modecheck_call.m"
          check_hlds__modecheck_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 490 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_50_50, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgLives_39));
#line 490 "modecheck_call.m"
        }
#line 490 "modecheck_call.m"
        {
#line 490 "modecheck_call.m"
          check_hlds__unify_proc__request_proc_9_p_0(check_hlds__modecheck_call__PredId_8, check_hlds__modecheck_call__Modes_46, check_hlds__modecheck_call__InstVarSet_47, check_hlds__modecheck_call__V_50_50, check_hlds__modecheck_call__DeterminismKnown_10, check_hlds__modecheck_call__Context_43, check_hlds__modecheck_call__TheProcId_12, check_hlds__modecheck_call__ModuleInfo0_40, &check_hlds__modecheck_call__ModuleInfo_48);
        }
#line 493 "modecheck_call.m"
        {
#line 493 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_call__ModuleInfo_48, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_27_51);
        }
#line 498 "modecheck_call.m"
        {
#line 498 "modecheck_call.m"
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
#line 587 "modecheck_call.m"
  {
#line 587 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_32_32;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_33_33;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_9;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcInfo_10;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcInfo_11;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgModes_12;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgModes_13;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_14;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherInitialInsts_15;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ArgTypes_16;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_18;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherFinalInsts_19;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgLives_21;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgLives_22;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CompareLives_23;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Detism_24;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherDetism_25;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CanFail_26;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Solns_27;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherCanFail_28;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherSolns_29;
#line 587 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_31_31;
#line 589 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_ProcInfo_10;
#line 590 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv1_OtherProcInfo_11;
#line 764 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_40;
#line 764 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_50;

#line 588 "modecheck_call.m"
    {
#line 588 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__Procs_9);
    }
#line 4048 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4050 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 589 "modecheck_call.m"
    {
#line 589 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_32_32, check_hlds__modecheck_call__TypeCtorInfo_33_33, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__ProcId_5)), &check_hlds__modecheck_call__conv0_ProcInfo_10);
    }
#line 589 "modecheck_call.m"
    check_hlds__modecheck_call__ProcInfo_10 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_10);
#line 590 "modecheck_call.m"
    {
#line 590 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_32_32, check_hlds__modecheck_call__TypeCtorInfo_33_33, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__OtherProcId_6)), &check_hlds__modecheck_call__conv1_OtherProcInfo_11);
    }
#line 590 "modecheck_call.m"
    check_hlds__modecheck_call__OtherProcInfo_11 = ((MR_Word) check_hlds__modecheck_call__conv1_OtherProcInfo_11);
#line 593 "modecheck_call.m"
    {
#line 593 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__ProcArgModes_12);
    }
#line 594 "modecheck_call.m"
    {
#line 594 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherProcArgModes_13);
    }
#line 595 "modecheck_call.m"
    {
#line 595 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__InitialInsts_14);
    }
#line 596 "modecheck_call.m"
    {
#line 596 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherInitialInsts_15);
    }
#line 598 "modecheck_call.m"
    {
#line 598 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__ArgTypes_16);
    }
#line 760 "modecheck_call.m"
    {
#line 760 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__InitialInsts_14, check_hlds__modecheck_call__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_40);
    }
#line 764 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 601 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_40 == (MR_Integer) 2);
#line 764 "modecheck_call.m"
    else
#line 765 "modecheck_call.m"
      {
#line 765 "modecheck_call.m"
        {
#line 765 "modecheck_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
#line 765 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 765 "modecheck_call.m"
      }
#line 587 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 587 "modecheck_call.m"
      {
#line 604 "modecheck_call.m"
        {
#line 604 "modecheck_call.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__FinalInsts_18);
        }
#line 605 "modecheck_call.m"
        {
#line 605 "modecheck_call.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherFinalInsts_19);
        }
#line 607 "modecheck_call.m"
        check_hlds__modecheck_call__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "modecheck_call.m"
        {
#line 760 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__FinalInsts_18, check_hlds__modecheck_call__OtherFinalInsts_19, check_hlds__modecheck_call__V_31_31, check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_50);
        }
#line 764 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 609 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_50 == (MR_Integer) 2);
#line 764 "modecheck_call.m"
        else
#line 765 "modecheck_call.m"
          {
#line 765 "modecheck_call.m"
            {
#line 765 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
            }
#line 765 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 765 "modecheck_call.m"
          }
#line 587 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 587 "modecheck_call.m"
          {
#line 612 "modecheck_call.m"
            {
#line 612 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__ProcArgLives_21);
            }
#line 613 "modecheck_call.m"
            {
#line 613 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherProcArgLives_22);
            }
#line 614 "modecheck_call.m"
            {
#line 614 "modecheck_call.m"
              check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__ProcArgLives_21, check_hlds__modecheck_call__OtherProcArgLives_22, &check_hlds__modecheck_call__CompareLives_23);
            }
#line 615 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CompareLives_23 == (MR_Integer) 2);
#line 587 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 587 "modecheck_call.m"
              {
#line 618 "modecheck_call.m"
                {
#line 618 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__Detism_24);
                }
#line 619 "modecheck_call.m"
                {
#line 619 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherDetism_25);
                }
#line 620 "modecheck_call.m"
                {
#line 620 "modecheck_call.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__Detism_24, &check_hlds__modecheck_call__CanFail_26, &check_hlds__modecheck_call__Solns_27);
                }
#line 621 "modecheck_call.m"
                {
#line 621 "modecheck_call.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__OtherDetism_25, &check_hlds__modecheck_call__OtherCanFail_28, &check_hlds__modecheck_call__OtherSolns_29);
                }
#line 622 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CanFail_26 == check_hlds__modecheck_call__OtherCanFail_28);
#line 587 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 587 "modecheck_call.m"
                  {
#line 624 "modecheck_call.m"
#line 624 "modecheck_call.m"
                    switch (check_hlds__modecheck_call__Solns_27) {
#line 624 "modecheck_call.m"
                      default:
#line 624 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = MR_FALSE;
#line 624 "modecheck_call.m"
                        break;
#line 624 "modecheck_call.m"
                      case (MR_Integer) 3:
#line 625 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_29 == (MR_Integer) 2);
#line 624 "modecheck_call.m"
                        break;
#line 624 "modecheck_call.m"
                      case (MR_Integer) 2:
#line 624 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_29 == (MR_Integer) 3);
#line 624 "modecheck_call.m"
                        break;
#line 624 "modecheck_call.m"
                    }
#line 624 "modecheck_call.m"
                    if (!(check_hlds__modecheck_call__succeeded))
#line 623 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_27 == check_hlds__modecheck_call__OtherSolns_29);
#line 587 "modecheck_call.m"
                  }
#line 587 "modecheck_call.m"
              }
#line 587 "modecheck_call.m"
          }
#line 587 "modecheck_call.m"
      }
#line 587 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 587 "modecheck_call.m"
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
#line 547 "modecheck_call.m"
  {
#line 547 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_28_28;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_29_29;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_9;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcInfo_10;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcInfo_11;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgModes_12;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgModes_13;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_14;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherInitialInsts_15;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ArgTypes_16;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgLives_18;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgLives_19;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CompareLives_20;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Detism_21;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherDetism_22;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Solns_24;
#line 547 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherSolns_26;
#line 549 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_ProcInfo_10;
#line 550 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv1_OtherProcInfo_11;
#line 764 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_36;
#line 573 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call___CanFail_23;
#line 574 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call___OtherCanFail_25;

#line 548 "modecheck_call.m"
    {
#line 548 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__Procs_9);
    }
#line 4311 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4313 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 549 "modecheck_call.m"
    {
#line 549 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_28_28, check_hlds__modecheck_call__TypeCtorInfo_29_29, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__ProcId_5)), &check_hlds__modecheck_call__conv0_ProcInfo_10);
    }
#line 549 "modecheck_call.m"
    check_hlds__modecheck_call__ProcInfo_10 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_10);
#line 550 "modecheck_call.m"
    {
#line 550 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_28_28, check_hlds__modecheck_call__TypeCtorInfo_29_29, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__OtherProcId_6)), &check_hlds__modecheck_call__conv1_OtherProcInfo_11);
    }
#line 550 "modecheck_call.m"
    check_hlds__modecheck_call__OtherProcInfo_11 = ((MR_Word) check_hlds__modecheck_call__conv1_OtherProcInfo_11);
#line 553 "modecheck_call.m"
    {
#line 553 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__ProcArgModes_12);
    }
#line 554 "modecheck_call.m"
    {
#line 554 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherProcArgModes_13);
    }
#line 555 "modecheck_call.m"
    {
#line 555 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__InitialInsts_14);
    }
#line 556 "modecheck_call.m"
    {
#line 556 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherInitialInsts_15);
    }
#line 558 "modecheck_call.m"
    {
#line 558 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__ArgTypes_16);
    }
#line 760 "modecheck_call.m"
    {
#line 760 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__InitialInsts_14, check_hlds__modecheck_call__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_36);
    }
#line 764 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 561 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_36 == (MR_Integer) 2);
#line 764 "modecheck_call.m"
    else
#line 765 "modecheck_call.m"
      {
#line 765 "modecheck_call.m"
        {
#line 765 "modecheck_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
#line 765 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 765 "modecheck_call.m"
      }
#line 547 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 547 "modecheck_call.m"
      {
#line 564 "modecheck_call.m"
        {
#line 564 "modecheck_call.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__ProcArgLives_18);
        }
#line 565 "modecheck_call.m"
        {
#line 565 "modecheck_call.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherProcArgLives_19);
        }
#line 566 "modecheck_call.m"
        {
#line 566 "modecheck_call.m"
          check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__ProcArgLives_18, check_hlds__modecheck_call__OtherProcArgLives_19, &check_hlds__modecheck_call__CompareLives_20);
        }
#line 567 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CompareLives_20 == (MR_Integer) 2);
#line 547 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 547 "modecheck_call.m"
          {
#line 571 "modecheck_call.m"
            {
#line 571 "modecheck_call.m"
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__Detism_21);
            }
#line 572 "modecheck_call.m"
            {
#line 572 "modecheck_call.m"
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherDetism_22);
            }
#line 573 "modecheck_call.m"
            {
#line 573 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__Detism_21, &check_hlds__modecheck_call___CanFail_23, &check_hlds__modecheck_call__Solns_24);
            }
#line 574 "modecheck_call.m"
            {
#line 574 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__OtherDetism_22, &check_hlds__modecheck_call___OtherCanFail_25, &check_hlds__modecheck_call__OtherSolns_26);
            }
#line 575 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_24 == (MR_Integer) 2);
#line 575 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 575 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_26 == (MR_Integer) 2);
#line 576 "modecheck_call.m"
            if (!(check_hlds__modecheck_call__succeeded))
#line 576 "modecheck_call.m"
              {
#line 576 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_24 == (MR_Integer) 2);
#line 576 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 576 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 576 "modecheck_call.m"
                  {
#line 576 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_26 == (MR_Integer) 2);
#line 576 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 576 "modecheck_call.m"
                  }
#line 576 "modecheck_call.m"
              }
#line 547 "modecheck_call.m"
          }
#line 547 "modecheck_call.m"
      }
#line 547 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 547 "modecheck_call.m"
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
#line 4840 "check_hlds.modecheck_call.c"
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
#line 4888 "check_hlds.modecheck_call.c"
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
#line 272 "modecheck_call.m"
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
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54,
#line 41 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55)
#line 41 "modecheck_call.m"
{
#line 102 "modecheck_call.m"
  {
#line 102 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 102 "modecheck_call.m"
    {
#line 102 "modecheck_call.m"
      check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(check_hlds__modecheck_call__PredId_11, check_hlds__modecheck_call__DeterminismKnown_12, check_hlds__modecheck_call__ProcId0_13, check_hlds__modecheck_call__TheProcId_14, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
#line 102 "modecheck_call.m"
      return;
    }
#line 102 "modecheck_call.m"
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
