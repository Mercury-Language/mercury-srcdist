/*
** Automatically generated from `modecheck_call.m'
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


/* :- module check_hlds.modecheck_call. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_call__init
ENDINIT
*/

#include "check_hlds.modecheck_call.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 657 "modecheck_call.m"
struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1;
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4;
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5;
#line 661 "modecheck_call.m"
  MR_bool check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 665 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20;
#line 665 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23;
#line 669 "modecheck_call.m"
  jmp_buf check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_40_72;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35;
#line 669 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_36;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_50;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_51;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_52;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_53;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_54;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_56;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_57;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_58;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_59;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_60;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_61;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_62;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_63;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_64;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_65;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_66;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_67;
#line 669 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_70_70;
#line 669 "modecheck_call.m"
  MR_Box check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34;
#line 657 "modecheck_call.m"
};


#line 221 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0;

#line 224 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1;

#line 227 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2;

#line 230 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3;

#line 233 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0[4];

#line 236 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0[4];

#line 239 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0[4];

#line 242 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 245 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 248 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 251 "check_hlds.modecheck_call.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0[3];

#line 254 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0;

#line 257 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[1];

#line 260 "check_hlds.modecheck_call.c"
static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[1];

#line 263 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0[1];

#line 266 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0[1];

#line 269 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0_10001(
#line 272 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 274 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2);

#line 277 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0_10001(
#line 280 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 282 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 284 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3);

#line 287 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0_10001(
#line 290 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 292 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2);

#line 295 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0_10001(
#line 298 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 300 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 302 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3);

#line 669 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
#line 669 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 669 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
#line 669 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 669 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
#line 669 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 669 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
#line 669 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 657 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_1,
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Procs_4,
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_5,
#line 657 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_6,
#line 657 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheInstVarSub_7,
#line 657 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheArgModes_8);

#line 364 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_p_0(
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5,
#line 364 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_6,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7,
#line 364 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_8,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9,
#line 364 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_10);

#line 294 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__294__1_2_p_0(
#line 294 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ExtraGoals_11,
#line 294 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_19);

#line 361 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0(
#line 361 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 361 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 361 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3);

#line 361 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0(
#line 361 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 361 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2);

#line 651 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0(
#line 651 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 651 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 651 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3);

#line 651 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0(
#line 651 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_1,
#line 651 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2);

#line 775 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__compare_liveness_list_3_p_0(
#line 775 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 775 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 775 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3);

#line 758 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__compare_inst_list_2_6_p_0(
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_1,
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__5_5,
#line 758 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__6_6);

#line 501 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
#line 501 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 501 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_2,
#line 501 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3,
#line 501 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__4_4);

#line 429 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcInfo_11,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Purity_12,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcArgModes_13,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_14,
#line 429 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ArgOffset_15,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__InstVarSub_16,
#line 429 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_17,
#line 429 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28,
#line 429 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29);

#line 329 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_7_p_0(
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredId_8,
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_9,
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__DeterminismKnown_10,
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__WaitingVars_11,
#line 329 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_12,
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20,
#line 329 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_21);

#line 294 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
#line 294 "modecheck_call.m"
  MR_Box check_hlds__modecheck_call__closure_arg);


static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_3[1][5];


#line 812 "modecheck_call.m"
/* sealed */ struct check_hlds__modecheck_call__vector_common_type_4_0_s {
#line 812 "modecheck_call.m"
  const MR_Word check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 600 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0 = {
  (MR_String) "better",
  (MR_Integer) 0
};

#line 606 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1 = {
  (MR_String) "worse",
  (MR_Integer) 1
};

#line 612 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2 = {
  (MR_String) "same",
  (MR_Integer) 2
};

#line 618 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3 = {
  (MR_String) "incomparable",
  (MR_Integer) 3
};

#line 624 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0[4] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3
};

#line 632 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0[4] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1
};

#line 640 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 648 "check_hlds.modecheck_call.c"
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

#line 665 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 673 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 682 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 690 "check_hlds.modecheck_call.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

#line 697 "check_hlds.modecheck_call.c"
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

#line 712 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[1] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

#line 717 "check_hlds.modecheck_call.c"
static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0
  }
};

#line 726 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0[1] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

#line 731 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0[1] = {
  (MR_Integer) 0
};

#line 736 "check_hlds.modecheck_call.c"
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

#line 753 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0_10001(
#line 756 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 758 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2)
#line 760 "check_hlds.modecheck_call.c"
{
#line 762 "check_hlds.modecheck_call.c"
  {
#line 764 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 767 "check_hlds.modecheck_call.c"
    {
#line 769 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call____Unify____match_0_0(((MR_Word) check_hlds__modecheck_call__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2));
    }
#line 772 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 774 "check_hlds.modecheck_call.c"
  }
#line 776 "check_hlds.modecheck_call.c"
}

#line 779 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0_10001(
#line 782 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 784 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 786 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3)
#line 788 "check_hlds.modecheck_call.c"
{
#line 790 "check_hlds.modecheck_call.c"
  {
#line 792 "check_hlds.modecheck_call.c"
    MR_Word check_hlds__modecheck_call__conv0_HeadVar__1_1;

#line 795 "check_hlds.modecheck_call.c"
    {
#line 797 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call____Compare____match_0_0(&check_hlds__modecheck_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_3));
    }
#line 800 "check_hlds.modecheck_call.c"
    *check_hlds__modecheck_call__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_call__conv0_HeadVar__1_1));
#line 802 "check_hlds.modecheck_call.c"
  }
#line 804 "check_hlds.modecheck_call.c"
}

#line 807 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0_10001(
#line 810 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 812 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2)
#line 814 "check_hlds.modecheck_call.c"
{
#line 816 "check_hlds.modecheck_call.c"
  {
#line 818 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 821 "check_hlds.modecheck_call.c"
    {
#line 823 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call____Unify____proc_mode_0_0(((MR_Word) check_hlds__modecheck_call__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2));
    }
#line 826 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 828 "check_hlds.modecheck_call.c"
  }
#line 830 "check_hlds.modecheck_call.c"
}

#line 833 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0_10001(
#line 836 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 838 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 840 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3)
#line 842 "check_hlds.modecheck_call.c"
{
#line 844 "check_hlds.modecheck_call.c"
  {
#line 846 "check_hlds.modecheck_call.c"
    MR_Word check_hlds__modecheck_call__conv0_HeadVar__1_1;

#line 849 "check_hlds.modecheck_call.c"
    {
#line 851 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call____Compare____proc_mode_0_0(&check_hlds__modecheck_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_3));
    }
#line 854 "check_hlds.modecheck_call.c"
    *check_hlds__modecheck_call__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_call__conv0_HeadVar__1_1));
#line 856 "check_hlds.modecheck_call.c"
  }
#line 858 "check_hlds.modecheck_call.c"
}

#line 669 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
#line 669 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 669 "modecheck_call.m"
{
#line 669 "modecheck_call.m"
  {
#line 669 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 669 "modecheck_call.m"
    MR_builtin_longjmp((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 669 "modecheck_call.m"
  }
#line 669 "modecheck_call.m"
}

#line 669 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
#line 669 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 669 "modecheck_call.m"
{
#line 669 "modecheck_call.m"
  {
#line 669 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 669 "modecheck_call.m"
    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34 = ((MR_Word) (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34);
#line 669 "modecheck_call.m"
    {
#line 669 "modecheck_call.m"
      check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(check_hlds__modecheck_call__env_ptr);
    }
#line 669 "modecheck_call.m"
  }
#line 669 "modecheck_call.m"
}

#line 669 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
#line 669 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 669 "modecheck_call.m"
{
#line 669 "modecheck_call.m"
  {
#line 669 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 669 "modecheck_call.m"
    {
#line 669 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__V_31_31;
#line 669 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__V_32_32;
#line 691 "modecheck_call.m"
      MR_Box check_hlds__modecheck_call__conv1_ProcInfo_45;
#line 692 "modecheck_call.m"
      MR_Box check_hlds__modecheck_call__conv2_OtherProcInfo_46;
#line 703 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call___ArgLives_55;
#line 754 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__Result0_79;

#line 669 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 0)));
#line 669 "modecheck_call.m"
      check_hlds__modecheck_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 1)));
#line 669 "modecheck_call.m"
      check_hlds__modecheck_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 2)));
#line 670 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 = (MR_Integer) 0;
#line 939 "check_hlds.modecheck_call.c"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_40_72 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 691 "modecheck_call.m"
      {
#line 691 "modecheck_call.m"
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_40_72, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_36, &check_hlds__modecheck_call__conv1_ProcInfo_45);
      }
#line 691 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45 = ((MR_Word) check_hlds__modecheck_call__conv1_ProcInfo_45);
#line 692 "modecheck_call.m"
      {
#line 692 "modecheck_call.m"
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_40_72, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20, &check_hlds__modecheck_call__conv2_OtherProcInfo_46);
      }
#line 692 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46 = ((MR_Word) check_hlds__modecheck_call__conv2_OtherProcInfo_46);
#line 695 "modecheck_call.m"
      {
#line 695 "modecheck_call.m"
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47);
      }
#line 696 "modecheck_call.m"
      {
#line 696 "modecheck_call.m"
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48);
      }
#line 697 "modecheck_call.m"
      {
#line 697 "modecheck_call.m"
        check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49);
      }
#line 698 "modecheck_call.m"
      {
#line 698 "modecheck_call.m"
        check_hlds__mode_info__mode_info_get_var_types_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_50);
      }
#line 699 "modecheck_call.m"
      {
#line 699 "modecheck_call.m"
        hlds__vartypes__lookup_var_types_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_50, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_51);
      }
#line 700 "modecheck_call.m"
      {
#line 700 "modecheck_call.m"
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_52);
      }
#line 701 "modecheck_call.m"
      {
#line 701 "modecheck_call.m"
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_53);
      }
#line 703 "modecheck_call.m"
      {
#line 703 "modecheck_call.m"
        check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_54, &check_hlds__modecheck_call___ArgLives_55);
      }
#line 705 "modecheck_call.m"
      {
#line 705 "modecheck_call.m"
        MR_Word base;
#line 705 "modecheck_call.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 705 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_70_70 = base;
#line 705 "modecheck_call.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_54));
#line 705 "modecheck_call.m"
      }
#line 750 "modecheck_call.m"
      {
#line 750 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_52, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_53, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_70_70, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_51, &check_hlds__modecheck_call__Result0_79);
      }
#line 754 "modecheck_call.m"
      if ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 753 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_56 = check_hlds__modecheck_call__Result0_79;
#line 754 "modecheck_call.m"
      else
#line 755 "modecheck_call.m"
        {
#line 755 "modecheck_call.m"
          {
#line 755 "modecheck_call.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
#line 755 "modecheck_call.m"
            return;
          }
#line 755 "modecheck_call.m"
        }
#line 708 "modecheck_call.m"
      {
#line 708 "modecheck_call.m"
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_57);
      }
#line 709 "modecheck_call.m"
      {
#line 709 "modecheck_call.m"
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_58);
      }
#line 710 "modecheck_call.m"
      {
#line 710 "modecheck_call.m"
        check_hlds__modecheck_call__compare_liveness_list_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_57, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_58, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_59);
      }
#line 713 "modecheck_call.m"
      {
#line 713 "modecheck_call.m"
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_60);
      }
#line 714 "modecheck_call.m"
      {
#line 714 "modecheck_call.m"
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_61);
      }
#line 715 "modecheck_call.m"
      {
#line 715 "modecheck_call.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_60, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_62, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_63);
      }
#line 716 "modecheck_call.m"
      {
#line 716 "modecheck_call.m"
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_61, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_64, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_65);
      }
#line 717 "modecheck_call.m"
      {
#line 717 "modecheck_call.m"
        parse_tree__prog_detism__compare_solncounts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_63, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_65, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_66);
      }
#line 721 "modecheck_call.m"
#line 721 "modecheck_call.m"
      switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_66) {
#line 721 "modecheck_call.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 721 "modecheck_call.m"
        case (MR_Integer) 2:
#line 736 "modecheck_call.m"
          (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_67 = (MR_Integer) 1;
#line 721 "modecheck_call.m"
          break;
#line 721 "modecheck_call.m"
        case (MR_Integer) 1:
#line 722 "modecheck_call.m"
          {
#line 722 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__CompareCanFails_68;

#line 723 "modecheck_call.m"
            {
#line 723 "modecheck_call.m"
              parse_tree__prog_detism__compare_canfails_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_62, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_64, &check_hlds__modecheck_call__CompareCanFails_68);
            }
#line 727 "modecheck_call.m"
#line 727 "modecheck_call.m"
            switch (check_hlds__modecheck_call__CompareCanFails_68) {
#line 727 "modecheck_call.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 727 "modecheck_call.m"
              case (MR_Integer) 2:
#line 732 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_67 = (MR_Integer) 1;
#line 727 "modecheck_call.m"
                break;
#line 727 "modecheck_call.m"
              case (MR_Integer) 1:
#line 729 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_67 = (MR_Integer) 2;
#line 727 "modecheck_call.m"
                break;
#line 727 "modecheck_call.m"
              case (MR_Integer) 0:
#line 726 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_67 = (MR_Integer) 0;
#line 727 "modecheck_call.m"
                break;
#line 727 "modecheck_call.m"
            }
#line 722 "modecheck_call.m"
          }
#line 721 "modecheck_call.m"
          break;
#line 721 "modecheck_call.m"
        case (MR_Integer) 0:
#line 720 "modecheck_call.m"
          (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_67 = (MR_Integer) 0;
#line 721 "modecheck_call.m"
          break;
#line 721 "modecheck_call.m"
      }
#line 1129 "check_hlds.modecheck_call.c"
#line 1130 "check_hlds.modecheck_call.c"
      switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_56) {
#line 1132 "check_hlds.modecheck_call.c"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "check_hlds.modecheck_call.c"
        case (MR_Integer) 0:
#line 1136 "check_hlds.modecheck_call.c"
#line 1137 "check_hlds.modecheck_call.c"
          switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_59) {
#line 1139 "check_hlds.modecheck_call.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1141 "check_hlds.modecheck_call.c"
            case (MR_Integer) 0:
#line 1143 "check_hlds.modecheck_call.c"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 1147 "check_hlds.modecheck_call.c"
              }
#line 1149 "check_hlds.modecheck_call.c"
              break;
#line 1151 "check_hlds.modecheck_call.c"
            case (MR_Integer) 3:
#line 1153 "check_hlds.modecheck_call.c"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1157 "check_hlds.modecheck_call.c"
              }
#line 1159 "check_hlds.modecheck_call.c"
              break;
#line 1161 "check_hlds.modecheck_call.c"
            case (MR_Integer) 2:
#line 1163 "check_hlds.modecheck_call.c"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 1167 "check_hlds.modecheck_call.c"
              }
#line 1169 "check_hlds.modecheck_call.c"
              break;
#line 1171 "check_hlds.modecheck_call.c"
            case (MR_Integer) 1:
#line 1173 "check_hlds.modecheck_call.c"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1177 "check_hlds.modecheck_call.c"
              }
#line 1179 "check_hlds.modecheck_call.c"
              break;
#line 1181 "check_hlds.modecheck_call.c"
          }
#line 1183 "check_hlds.modecheck_call.c"
          break;
#line 1185 "check_hlds.modecheck_call.c"
        case (MR_Integer) 3:
#line 1187 "check_hlds.modecheck_call.c"
          {
#line 670 "modecheck_call.m"
            (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1191 "check_hlds.modecheck_call.c"
          }
#line 1193 "check_hlds.modecheck_call.c"
          break;
#line 1195 "check_hlds.modecheck_call.c"
        case (MR_Integer) 2:
#line 803 "modecheck_call.m"
#line 803 "modecheck_call.m"
          switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_59) {
#line 803 "modecheck_call.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 803 "modecheck_call.m"
            case (MR_Integer) 0:
#line 803 "modecheck_call.m"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 803 "modecheck_call.m"
              }
#line 803 "modecheck_call.m"
              break;
#line 803 "modecheck_call.m"
            case (MR_Integer) 3:
#line 806 "modecheck_call.m"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 806 "modecheck_call.m"
              }
#line 803 "modecheck_call.m"
              break;
#line 803 "modecheck_call.m"
            case (MR_Integer) 2:
#line 670 "modecheck_call.m"
              (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_67);
#line 803 "modecheck_call.m"
              break;
#line 803 "modecheck_call.m"
            case (MR_Integer) 1:
#line 804 "modecheck_call.m"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 804 "modecheck_call.m"
              }
#line 803 "modecheck_call.m"
              break;
#line 803 "modecheck_call.m"
          }
#line 1240 "check_hlds.modecheck_call.c"
          break;
#line 1242 "check_hlds.modecheck_call.c"
        case (MR_Integer) 1:
#line 1244 "check_hlds.modecheck_call.c"
#line 1245 "check_hlds.modecheck_call.c"
          switch ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_59) {
#line 1247 "check_hlds.modecheck_call.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1249 "check_hlds.modecheck_call.c"
            case (MR_Integer) 0:
#line 1251 "check_hlds.modecheck_call.c"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1255 "check_hlds.modecheck_call.c"
              }
#line 1257 "check_hlds.modecheck_call.c"
              break;
#line 1259 "check_hlds.modecheck_call.c"
            case (MR_Integer) 3:
#line 1261 "check_hlds.modecheck_call.c"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1265 "check_hlds.modecheck_call.c"
              }
#line 1267 "check_hlds.modecheck_call.c"
              break;
#line 1269 "check_hlds.modecheck_call.c"
            case (MR_Integer) 2:
#line 1271 "check_hlds.modecheck_call.c"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 1275 "check_hlds.modecheck_call.c"
              }
#line 1277 "check_hlds.modecheck_call.c"
              break;
#line 1279 "check_hlds.modecheck_call.c"
            case (MR_Integer) 1:
#line 1281 "check_hlds.modecheck_call.c"
              {
#line 670 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 1285 "check_hlds.modecheck_call.c"
              }
#line 1287 "check_hlds.modecheck_call.c"
              break;
#line 1289 "check_hlds.modecheck_call.c"
          }
#line 1291 "check_hlds.modecheck_call.c"
          break;
#line 1293 "check_hlds.modecheck_call.c"
      }
#line 1295 "check_hlds.modecheck_call.c"
      if ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1297 "check_hlds.modecheck_call.c"
        {
#line 1299 "check_hlds.modecheck_call.c"
          check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(check_hlds__modecheck_call__env_ptr);
        }
#line 669 "modecheck_call.m"
    }
#line 669 "modecheck_call.m"
  }
#line 669 "modecheck_call.m"
}

#line 669 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
#line 669 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 669 "modecheck_call.m"
{
#line 669 "modecheck_call.m"
  {
#line 669 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 669 "modecheck_call.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 669 "modecheck_call.m"
      {
#line 669 "modecheck_call.m"
        {
#line 669 "modecheck_call.m"
          {
#line 669 "modecheck_call.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23, check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3, check_hlds__modecheck_call__env_ptr);
          }
#line 669 "modecheck_call.m"
        }
#line 669 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 669 "modecheck_call.m"
      }
#line 669 "modecheck_call.m"
    else
#line 669 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 669 "modecheck_call.m"
  }
#line 669 "modecheck_call.m"
}

#line 657 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_1,
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Procs_4,
#line 657 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_5,
#line 657 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_6,
#line 657 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheInstVarSub_7,
#line 657 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheArgModes_8)
#line 657 "modecheck_call.m"
{
#line 657 "modecheck_call.m"
  {
#line 657 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s check_hlds__modecheck_call__env;

#line 657 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1 = check_hlds__modecheck_call__ModeInfo_1;
#line 657 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4 = check_hlds__modecheck_call__Procs_4;
#line 657 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5 = check_hlds__modecheck_call__ArgVars_5;
#line 661 "modecheck_call.m"
    while (MR_TRUE)
#line 661 "modecheck_call.m"
      {
#line 661 "modecheck_call.m"
        /* tailcall optimized into a loop */
#line 661 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "modecheck_call.m"
          {
#line 662 "modecheck_call.m"
            {
#line 662 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.choose_best_match\'/8", (MR_String) "no best match");
#line 662 "modecheck_call.m"
              return;
            }
#line 661 "modecheck_call.m"
          }
#line 661 "modecheck_call.m"
        else
#line 665 "modecheck_call.m"
          {
#line 665 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_21;
#line 665 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ArgModes_22;
#line 665 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));

#line 664 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 664 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 0)));
#line 664 "modecheck_call.m"
            check_hlds__modecheck_call__InstVarSub_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 1)));
#line 664 "modecheck_call.m"
            check_hlds__modecheck_call__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 2)));
#line 669 "modecheck_call.m"
            {
#line 669 "modecheck_call.m"
              check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(&check_hlds__modecheck_call__env);
            }
#line 675 "modecheck_call.m"
            if ((check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 673 "modecheck_call.m"
              {
#line 673 "modecheck_call.m"
                /* direct tailcall eliminated */
#line 673 "modecheck_call.m"
                {
#line 673 "modecheck_call.m"
                  MR_Word check_hlds__modecheck_call__HeadVar__2__tmp_copy_2 = (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23;

#line 673 "modecheck_call.m"
                  check_hlds__modecheck_call__HeadVar__2_2 = check_hlds__modecheck_call__HeadVar__2__tmp_copy_2;
#line 673 "modecheck_call.m"
                }
#line 673 "modecheck_call.m"
                continue;
#line 673 "modecheck_call.m"
              }
#line 675 "modecheck_call.m"
            else
#line 676 "modecheck_call.m"
              {
#line 676 "modecheck_call.m"
                *check_hlds__modecheck_call__TheProcId_6 = (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20;
#line 677 "modecheck_call.m"
                *check_hlds__modecheck_call__TheInstVarSub_7 = check_hlds__modecheck_call__InstVarSub_21;
#line 678 "modecheck_call.m"
                *check_hlds__modecheck_call__TheArgModes_8 = check_hlds__modecheck_call__ArgModes_22;
#line 676 "modecheck_call.m"
              }
#line 665 "modecheck_call.m"
          }
#line 661 "modecheck_call.m"
        break;
#line 661 "modecheck_call.m"
      }
#line 657 "modecheck_call.m"
  }
#line 657 "modecheck_call.m"
}

#line 364 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_p_0(
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5,
#line 364 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_6,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7,
#line 364 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_8,
#line 364 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9,
#line 364 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_10)
#line 364 "modecheck_call.m"
{
#line 369 "modecheck_call.m"
  while (MR_TRUE)
#line 369 "modecheck_call.m"
    {
#line 369 "modecheck_call.m"
      /* tailcall optimized into a loop */
#line 369 "modecheck_call.m"
      {
#line 369 "modecheck_call.m"
        MR_bool check_hlds__modecheck_call__succeeded;

#line 369 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "modecheck_call.m"
          {
#line 370 "modecheck_call.m"
            *check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_10 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9;
#line 370 "modecheck_call.m"
            *check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_8 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7;
#line 370 "modecheck_call.m"
            *check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_6 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5;
#line 369 "modecheck_call.m"
          }
#line 369 "modecheck_call.m"
        else
#line 372 "modecheck_call.m"
          {
#line 372 "modecheck_call.m"
            MR_Integer check_hlds__modecheck_call__ProcId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcIds_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcInfo_31;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes0_32;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcInstVarSet_33;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSet0_34;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSet_35;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes_36;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ModuleInfo_37;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgLives0_38;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InitialInsts_39;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_40;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Errors_41;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64;
#line 372 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65;
#line 376 "modecheck_call.m"
            MR_Box check_hlds__modecheck_call__conv0_ProcInfo_31;

#line 376 "modecheck_call.m"
            {
#line 376 "modecheck_call.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__HeadVar__3_3, check_hlds__modecheck_call__ProcId_23, &check_hlds__modecheck_call__conv0_ProcInfo_31);
            }
#line 376 "modecheck_call.m"
            check_hlds__modecheck_call__ProcInfo_31 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_31);
#line 377 "modecheck_call.m"
            {
#line 377 "modecheck_call.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_31, &check_hlds__modecheck_call__ProcArgModes0_32);
            }
#line 378 "modecheck_call.m"
            {
#line 378 "modecheck_call.m"
              hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__modecheck_call__ProcInfo_31, &check_hlds__modecheck_call__ProcInstVarSet_33);
            }
#line 379 "modecheck_call.m"
            {
#line 379 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9, &check_hlds__modecheck_call__InstVarSet0_34);
            }
#line 380 "modecheck_call.m"
            {
#line 380 "modecheck_call.m"
              parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(check_hlds__modecheck_call__InstVarSet0_34, check_hlds__modecheck_call__ProcInstVarSet_33, &check_hlds__modecheck_call__InstVarSet_35, check_hlds__modecheck_call__ProcArgModes0_32, &check_hlds__modecheck_call__ProcArgModes_36);
            }
#line 382 "modecheck_call.m"
            {
#line 382 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_instvarset_3_p_0(check_hlds__modecheck_call__InstVarSet_35, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55);
            }
#line 383 "modecheck_call.m"
            {
#line 383 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_call__ModuleInfo_37);
            }
#line 384 "modecheck_call.m"
            {
#line 384 "modecheck_call.m"
              hlds__hlds_pred__proc_info_arglives_3_p_0(check_hlds__modecheck_call__ProcInfo_31, check_hlds__modecheck_call__ModuleInfo_37, &check_hlds__modecheck_call__ProcArgLives0_38);
            }
#line 387 "modecheck_call.m"
            {
#line 387 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__ProcArgLives0_38, (MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55_55, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57);
            }
#line 401 "modecheck_call.m"
            {
#line 401 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_37, check_hlds__modecheck_call__ProcArgModes_36, &check_hlds__modecheck_call__InitialInsts_39);
            }
#line 402 "modecheck_call.m"
            {
#line 402 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(check_hlds__modecheck_call__ProcInfo_31);
            }
#line 405 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 403 "modecheck_call.m"
              {
#line 403 "modecheck_call.m"
                {
#line 403 "modecheck_call.m"
                  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__InitialInsts_39, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_40, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59);
                }
#line 403 "modecheck_call.m"
              }
#line 405 "modecheck_call.m"
            else
#line 406 "modecheck_call.m"
              {
#line 406 "modecheck_call.m"
                {
#line 406 "modecheck_call.m"
                  check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(check_hlds__modecheck_call__HeadVar__4_4, check_hlds__modecheck_call__InitialInsts_39, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_40, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_57_57, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59);
                }
#line 406 "modecheck_call.m"
              }
#line 413 "modecheck_call.m"
            {
#line 413 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59, &check_hlds__modecheck_call__Errors_41);
            }
#line 419 "modecheck_call.m"
            if ((check_hlds__modecheck_call__Errors_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "modecheck_call.m"
              {
#line 420 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__NewMatch_48;

#line 421 "modecheck_call.m"
                {
#line 421 "modecheck_call.m"
                  check_hlds__modecheck_call__NewMatch_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 421 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_48, 0) = ((MR_Box) (check_hlds__modecheck_call__ProcId_23));
#line 421 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_48, 1) = ((MR_Box) (check_hlds__modecheck_call__InstVarSub_40));
#line 421 "modecheck_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__NewMatch_48, 2) = ((MR_Box) (check_hlds__modecheck_call__ProcArgModes_36));
#line 421 "modecheck_call.m"
                }
#line 422 "modecheck_call.m"
                {
#line 422 "modecheck_call.m"
                  check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "modecheck_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62, 0) = ((MR_Box) (check_hlds__modecheck_call__NewMatch_48));
#line 422 "modecheck_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62, 1) = ((MR_Box) (check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5));
#line 422 "modecheck_call.m"
                }
#line 420 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7;
#line 420 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59;
#line 420 "modecheck_call.m"
              }
#line 419 "modecheck_call.m"
            else
#line 415 "modecheck_call.m"
              {
#line 415 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__FirstError_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__Errors_41, (MR_Integer) 0)));
#line 415 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ErrorWaitingVars_44;
#line 415 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__Errors_41, (MR_Integer) 1)));
#line 417 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_45_45;
#line 417 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_46_46;
#line 417 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__V_47_47;

#line 416 "modecheck_call.m"
                {
#line 416 "modecheck_call.m"
                  check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_59_59, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64);
                }
#line 417 "modecheck_call.m"
                check_hlds__modecheck_call__ErrorWaitingVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_42, (MR_Integer) 0)));
#line 417 "modecheck_call.m"
                check_hlds__modecheck_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_42, (MR_Integer) 1)));
#line 417 "modecheck_call.m"
                check_hlds__modecheck_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_42, (MR_Integer) 2)));
#line 417 "modecheck_call.m"
                check_hlds__modecheck_call__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__FirstError_42, (MR_Integer) 3)));
#line 418 "modecheck_call.m"
                {
#line 418 "modecheck_call.m"
                  parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_call__ErrorWaitingVars_44, check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7, &check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65);
                }
#line 415 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5;
#line 415 "modecheck_call.m"
              }
#line 426 "modecheck_call.m"
            /* direct tailcall eliminated */
#line 426 "modecheck_call.m"
            {
#line 426 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_call__ProcIds_24;
#line 426 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0__tmp_copy_5 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_62_62;
#line 426 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0__tmp_copy_7 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65;
#line 426 "modecheck_call.m"
              MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0__tmp_copy_9 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_64_64;

#line 426 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_9 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0__tmp_copy_9;
#line 426 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0__tmp_copy_7;
#line 426 "modecheck_call.m"
              check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0_5 = check_hlds__modecheck_call__STATE_VARIABLE_MatchingProcIds_0__tmp_copy_5;
#line 426 "modecheck_call.m"
              check_hlds__modecheck_call__HeadVar__1_1 = check_hlds__modecheck_call__HeadVar__1__tmp_copy_1;
#line 426 "modecheck_call.m"
            }
#line 426 "modecheck_call.m"
            continue;
#line 372 "modecheck_call.m"
          }
#line 369 "modecheck_call.m"
      }
#line 369 "modecheck_call.m"
      break;
#line 369 "modecheck_call.m"
    }
#line 364 "modecheck_call.m"
}

#line 42 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredId_11,
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__DeterminismKnown_12,
#line 42 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ProcId0_13,
#line 42 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_14,
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_15,
#line 42 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_16,
#line 42 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54,
#line 42 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55)
#line 42 "modecheck_call.m"
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
    MR_Word check_hlds__modecheck_call__V_60_60;

#line 104 "modecheck_call.m"
    {
#line 104 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__MayChangeCalledProc_20);
    }
#line 105 "modecheck_call.m"
    {
#line 105 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_preds_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__Preds_21);
    }
#line 106 "modecheck_call.m"
    {
#line 106 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__ModuleInfo_22);
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
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_call__PredInfo_23, &check_hlds__modecheck_call__Procs_25);
    }
#line 117 "modecheck_call.m"
#line 117 "modecheck_call.m"
    switch (check_hlds__modecheck_call__MayChangeCalledProc_20) {
#line 117 "modecheck_call.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 117 "modecheck_call.m"
      case (MR_Integer) 0:
#line 120 "modecheck_call.m"
        {
#line 120 "modecheck_call.m"
          check_hlds__modecheck_call__ProcIds_26 = hlds__hlds_pred__pred_info_all_procids_1_f_0(check_hlds__modecheck_call__PredInfo_23);
        }
#line 117 "modecheck_call.m"
        break;
#line 117 "modecheck_call.m"
      case (MR_Integer) 1:
#line 114 "modecheck_call.m"
        {
#line 112 "modecheck_call.m"
          MR_Integer check_hlds__modecheck_call__V_105_105;

#line 112 "modecheck_call.m"
          {
#line 112 "modecheck_call.m"
            check_hlds__modecheck_call__V_105_105 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          }
#line 112 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__ProcId0_13 == check_hlds__modecheck_call__V_105_105);
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
#line 117 "modecheck_call.m"
        break;
#line 117 "modecheck_call.m"
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
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__InstMap_29);
    }
#line 130 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__ProcIds_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 130 "modecheck_call.m"
      {
#line 131 "modecheck_call.m"
        check_hlds__modecheck_call__V_60_60 = (MR_Integer) 3;
#line 131 "modecheck_call.m"
        {
#line 131 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modecheck_call__Markers_28, check_hlds__modecheck_call__V_60_60);
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
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
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
#line 170 "modecheck_call.m"
      {
#line 170 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__ProcId_31;
#line 139 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_63_63;

#line 139 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__ProcIds_26)) == (MR_mktag((MR_Integer) 1)));
#line 139 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 139 "modecheck_call.m"
          {
#line 139 "modecheck_call.m"
            check_hlds__modecheck_call__ProcId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, (MR_Integer) 0)));
#line 139 "modecheck_call.m"
            check_hlds__modecheck_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__ProcIds_26, (MR_Integer) 1)));
#line 139 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
#line 170 "modecheck_call.m"
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
            MR_Word check_hlds__modecheck_call__InstVarSet0_36;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSet_37;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ProcArgModes_38;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InitialInsts_39;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_40;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_66_66;
#line 144 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_67_67;
#line 145 "modecheck_call.m"
            MR_Box check_hlds__modecheck_call__conv1_ProcInfo_32;

#line 144 "modecheck_call.m"
            *check_hlds__modecheck_call__TheProcId_14 = check_hlds__modecheck_call__ProcId_31;
#line 145 "modecheck_call.m"
            {
#line 145 "modecheck_call.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__Procs_25, check_hlds__modecheck_call__ProcId_31, &check_hlds__modecheck_call__conv1_ProcInfo_32);
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
              check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ProcArgLives0_33, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65);
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
              check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65, &check_hlds__modecheck_call__InstVarSet0_36);
            }
#line 161 "modecheck_call.m"
            {
#line 161 "modecheck_call.m"
              parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(check_hlds__modecheck_call__InstVarSet0_36, check_hlds__modecheck_call__ProcInstVarSet_35, &check_hlds__modecheck_call__InstVarSet_37, check_hlds__modecheck_call__ProcArgModes0_34, &check_hlds__modecheck_call__ProcArgModes_38);
            }
#line 163 "modecheck_call.m"
            {
#line 163 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_instvarset_3_p_0(check_hlds__modecheck_call__InstVarSet_37, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_65_65, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_66_66);
            }
#line 164 "modecheck_call.m"
            {
#line 164 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_22, check_hlds__modecheck_call__ProcArgModes_38, &check_hlds__modecheck_call__InitialInsts_39);
            }
#line 165 "modecheck_call.m"
            {
#line 165 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__InitialInsts_39, check_hlds__modecheck_call__ArgOffset_27, &check_hlds__modecheck_call__InstVarSub_40, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_66_66, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_67_67);
            }
#line 168 "modecheck_call.m"
            {
#line 168 "modecheck_call.m"
              check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(check_hlds__modecheck_call__ProcInfo_32, check_hlds__modecheck_call__Purity_24, check_hlds__modecheck_call__ProcArgModes_38, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__InstVarSub_40, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_67_67, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
            }
#line 144 "modecheck_call.m"
          }
#line 170 "modecheck_call.m"
        else
#line 174 "modecheck_call.m"
          {
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__TypeCtorInfo_100_100;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__OldErrors_41;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__WaitingVars0_42;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__RevMatchingProcIds_43;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__WaitingVars1_44;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__NewErrors_52;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Errors_53;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72;
#line 174 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78;

#line 174 "modecheck_call.m"
            {
#line 174 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__OldErrors_41);
            }
#line 175 "modecheck_call.m"
            {
#line 175 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70);
            }
#line 2121 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 177 "modecheck_call.m"
            {
#line 177 "modecheck_call.m"
              parse_tree__set_of_var__init_1_p_0(check_hlds__modecheck_call__TypeCtorInfo_100_100, &check_hlds__modecheck_call__WaitingVars0_42);
            }
#line 178 "modecheck_call.m"
            {
#line 178 "modecheck_call.m"
              check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_102_105_110_100_95_109_97_116_99_104_105_110_103_95_109_111_100_101_115_95_95_91_50_93_95_48_10_p_0(check_hlds__modecheck_call__ProcIds_26, check_hlds__modecheck_call__Procs_25, check_hlds__modecheck_call__ArgVars0_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_call__RevMatchingProcIds_43, check_hlds__modecheck_call__WaitingVars0_42, &check_hlds__modecheck_call__WaitingVars1_44, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72);
            }
#line 187 "modecheck_call.m"
            if ((check_hlds__modecheck_call__RevMatchingProcIds_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 182 "modecheck_call.m"
              {
#line 183 "modecheck_call.m"
                {
#line 183 "modecheck_call.m"
                  check_hlds__modecheck_call__no_matching_modes_7_p_0(check_hlds__modecheck_call__PredId_11, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__DeterminismKnown_12, check_hlds__modecheck_call__WaitingVars1_44, check_hlds__modecheck_call__TheProcId_14, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78);
                }
#line 185 "modecheck_call.m"
                *check_hlds__modecheck_call__ArgVars_16 = check_hlds__modecheck_call__ArgVars0_15;
#line 186 "modecheck_call.m"
                *check_hlds__modecheck_call__ExtraGoals_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 182 "modecheck_call.m"
              }
#line 187 "modecheck_call.m"
            else
#line 188 "modecheck_call.m"
              {
#line 188 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__MatchingProcIds_47;
#line 188 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__CalleeModeErrors_48;
#line 188 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ProcInfo_83;
#line 188 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__ProcArgModes_84;
#line 188 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__InstVarSub_85;
#line 192 "modecheck_call.m"
                MR_Box check_hlds__modecheck_call__conv2_ProcInfo_83;

#line 189 "modecheck_call.m"
                {
#line 189 "modecheck_call.m"
                  mercury__list__reverse_2_p_0((MR_Word) &check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0, check_hlds__modecheck_call__RevMatchingProcIds_43, &check_hlds__modecheck_call__MatchingProcIds_47);
                }
#line 190 "modecheck_call.m"
                {
#line 190 "modecheck_call.m"
                  check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72, check_hlds__modecheck_call__MatchingProcIds_47, check_hlds__modecheck_call__Procs_25, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__TheProcId_14, &check_hlds__modecheck_call__InstVarSub_85, &check_hlds__modecheck_call__ProcArgModes_84);
                }
#line 192 "modecheck_call.m"
                {
#line 192 "modecheck_call.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__Procs_25, *check_hlds__modecheck_call__TheProcId_14, &check_hlds__modecheck_call__conv2_ProcInfo_83);
                }
#line 192 "modecheck_call.m"
                check_hlds__modecheck_call__ProcInfo_83 = ((MR_Word) check_hlds__modecheck_call__conv2_ProcInfo_83);
#line 193 "modecheck_call.m"
                {
#line 193 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_get_mode_errors_2_p_0(check_hlds__modecheck_call__ProcInfo_83, &check_hlds__modecheck_call__CalleeModeErrors_48);
                }
#line 206 "modecheck_call.m"
                if ((check_hlds__modecheck_call__CalleeModeErrors_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "modecheck_call.m"
                  {
#line 208 "modecheck_call.m"
                    check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(check_hlds__modecheck_call__ProcInfo_83, check_hlds__modecheck_call__Purity_24, check_hlds__modecheck_call__ProcArgModes_84, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgOffset_27, check_hlds__modecheck_call__InstVarSub_85, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78);
                  }
#line 206 "modecheck_call.m"
                else
#line 195 "modecheck_call.m"
                  {
#line 195 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInsts_51;
#line 195 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_75_75;
#line 195 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_76_76;
#line 195 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__WaitingVars_80;

#line 197 "modecheck_call.m"
                    *check_hlds__modecheck_call__ArgVars_16 = check_hlds__modecheck_call__ArgVars0_15;
#line 198 "modecheck_call.m"
                    {
#line 198 "modecheck_call.m"
                      check_hlds__modecheck_call__WaitingVars_80 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__modecheck_call__TypeCtorInfo_100_100, *check_hlds__modecheck_call__ArgVars_16);
                    }
#line 199 "modecheck_call.m"
                    *check_hlds__modecheck_call__ExtraGoals_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 200 "modecheck_call.m"
                    {
#line 200 "modecheck_call.m"
                      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_call__InstMap_29, *check_hlds__modecheck_call__ArgVars_16, &check_hlds__modecheck_call__ArgInsts_51);
                    }
#line 201 "modecheck_call.m"
                    {
#line 201 "modecheck_call.m"
                      check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_75_75);
                    }
#line 203 "modecheck_call.m"
                    {
#line 203 "modecheck_call.m"
                      check_hlds__modecheck_call__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 203 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 203 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 1) = ((MR_Box) (*check_hlds__modecheck_call__ArgVars_16));
#line 203 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 2) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_51));
#line 203 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 3) = ((MR_Box) (check_hlds__modecheck_call__PredId_11));
#line 203 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 4) = ((MR_Box) (*check_hlds__modecheck_call__TheProcId_14));
#line 203 "modecheck_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_76_76, 5) = ((MR_Box) (check_hlds__modecheck_call__CalleeModeErrors_48));
#line 203 "modecheck_call.m"
                    }
#line 202 "modecheck_call.m"
                    {
#line 202 "modecheck_call.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_80, check_hlds__modecheck_call__V_76_76, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_75_75, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78);
                    }
#line 195 "modecheck_call.m"
                  }
#line 188 "modecheck_call.m"
              }
#line 214 "modecheck_call.m"
            {
#line 214 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78, &check_hlds__modecheck_call__NewErrors_52);
            }
#line 215 "modecheck_call.m"
            {
#line 215 "modecheck_call.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__modecheck_call__OldErrors_41, check_hlds__modecheck_call__NewErrors_52, &check_hlds__modecheck_call__Errors_53);
            }
#line 216 "modecheck_call.m"
            {
#line 216 "modecheck_call.m"
              check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_call__Errors_53, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_78_78, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
            }
#line 174 "modecheck_call.m"
          }
#line 170 "modecheck_call.m"
      }
#line 103 "modecheck_call.m"
  }
#line 42 "modecheck_call.m"
}

#line 294 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__294__1_2_p_0(
#line 294 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ExtraGoals_11,
#line 294 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_19)
#line 294 "modecheck_call.m"
{
#line 294 "modecheck_call.m"
  {
#line 294 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 294 "modecheck_call.m"
    {
#line 294 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(check_hlds__modecheck_call__ExtraGoals_11, check_hlds__modecheck_call__HeadVar__2_19);
    }
#line 294 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 294 "modecheck_call.m"
  }
#line 294 "modecheck_call.m"
}

#line 361 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0(
#line 361 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 361 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 361 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3)
#line 361 "modecheck_call.m"
{
#line 361 "modecheck_call.m"
  {
#line 361 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 361 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__CastX_12 = (MR_Integer) check_hlds__modecheck_call__HeadVar__2_2;
#line 361 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__CastY_13 = (MR_Integer) check_hlds__modecheck_call__HeadVar__3_3;

#line 361 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CastX_12 == check_hlds__modecheck_call__CastY_13);
#line 361 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 2327 "check_hlds.modecheck_call.c"
      *check_hlds__modecheck_call__HeadVar__1_1 = (MR_Integer) 0;
#line 361 "modecheck_call.m"
    else
#line 361 "modecheck_call.m"
      {
#line 361 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 2)));
#line 361 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 0)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 1)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 2)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_10_10;

#line 361 "modecheck_call.m"
        {
#line 361 "modecheck_call.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__modecheck_call__V_10_10, check_hlds__modecheck_call__V_4_4, check_hlds__modecheck_call__V_7_7);
        }
#line 2353 "check_hlds.modecheck_call.c"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_10_10 == (MR_Integer) 0);
#line 361 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 361 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 361 "modecheck_call.m"
          *check_hlds__modecheck_call__HeadVar__1_1 = check_hlds__modecheck_call__V_10_10;
#line 361 "modecheck_call.m"
        else
#line 361 "modecheck_call.m"
          {
#line 361 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_11_11;

#line 361 "modecheck_call.m"
            {
#line 361 "modecheck_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_2[0], &check_hlds__modecheck_call__V_11_11, ((MR_Box) (check_hlds__modecheck_call__V_5_5)), ((MR_Box) (check_hlds__modecheck_call__V_8_8)));
            }
#line 2373 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_11_11 == (MR_Integer) 0);
#line 361 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 361 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 361 "modecheck_call.m"
              *check_hlds__modecheck_call__HeadVar__1_1 = check_hlds__modecheck_call__V_11_11;
#line 361 "modecheck_call.m"
            else
#line 361 "modecheck_call.m"
              {
#line 361 "modecheck_call.m"
                {
#line 361 "modecheck_call.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_1[2], check_hlds__modecheck_call__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_call__V_6_6)), ((MR_Box) (check_hlds__modecheck_call__V_9_9)));
                }
#line 361 "modecheck_call.m"
              }
#line 361 "modecheck_call.m"
          }
#line 361 "modecheck_call.m"
      }
#line 361 "modecheck_call.m"
  }
#line 361 "modecheck_call.m"
}

#line 361 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0(
#line 361 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 361 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2)
#line 361 "modecheck_call.m"
{
#line 361 "modecheck_call.m"
  {
#line 361 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 361 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__CastX_9 = (MR_Integer) check_hlds__modecheck_call__HeadVar__1_1;
#line 361 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__CastY_10 = (MR_Integer) check_hlds__modecheck_call__HeadVar__2_2;

#line 361 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CastX_9 == check_hlds__modecheck_call__CastY_10);
#line 361 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 361 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 361 "modecheck_call.m"
    else
#line 361 "modecheck_call.m"
      {
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__TypeInfo_11_11;
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__TypeInfo_12_12;
#line 361 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 2)));
#line 361 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 2)));

#line 2446 "check_hlds.modecheck_call.c"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_3_3 == check_hlds__modecheck_call__V_6_6);
#line 361 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 361 "modecheck_call.m"
          {
#line 2452 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__TypeInfo_11_11 = (MR_Word) &check_hlds__modecheck_call_scalar_common_2[0];
#line 2454 "check_hlds.modecheck_call.c"
            {
#line 2456 "check_hlds.modecheck_call.c"
              check_hlds__modecheck_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_call__TypeInfo_11_11, ((MR_Box) (check_hlds__modecheck_call__V_4_4)), ((MR_Box) (check_hlds__modecheck_call__V_7_7)));
            }
#line 361 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 361 "modecheck_call.m"
              {
#line 2463 "check_hlds.modecheck_call.c"
                check_hlds__modecheck_call__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_call_scalar_common_1[2];
#line 2465 "check_hlds.modecheck_call.c"
                {
#line 2467 "check_hlds.modecheck_call.c"
                  check_hlds__modecheck_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_call__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_call__V_5_5)), ((MR_Box) (check_hlds__modecheck_call__V_8_8)));
                }
#line 361 "modecheck_call.m"
              }
#line 361 "modecheck_call.m"
          }
#line 361 "modecheck_call.m"
      }
#line 361 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 361 "modecheck_call.m"
  }
#line 361 "modecheck_call.m"
}

#line 651 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0(
#line 651 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 651 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 651 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3)
#line 651 "modecheck_call.m"
{
#line 651 "modecheck_call.m"
  {
#line 651 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 651 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Cast_HeadVar1_4 = (MR_Integer) check_hlds__modecheck_call__HeadVar__2_2;
#line 651 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Cast_HeadVar2_5 = (MR_Integer) check_hlds__modecheck_call__HeadVar__3_3;

#line 651 "modecheck_call.m"
    {
#line 651 "modecheck_call.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__modecheck_call__HeadVar__1_1, check_hlds__modecheck_call__Cast_HeadVar1_4, check_hlds__modecheck_call__Cast_HeadVar2_5);
    }
#line 651 "modecheck_call.m"
  }
#line 651 "modecheck_call.m"
}

#line 651 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0(
#line 651 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_1,
#line 651 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2)
#line 651 "modecheck_call.m"
{
#line 2522 "check_hlds.modecheck_call.c"
  {
#line 2524 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__2_1 == check_hlds__modecheck_call__HeadVar__2_2);

#line 2527 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 2529 "check_hlds.modecheck_call.c"
  }
#line 651 "modecheck_call.m"
}

#line 775 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__compare_liveness_list_3_p_0(
#line 775 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 775 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 775 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3)
#line 775 "modecheck_call.m"
{
#line 778 "modecheck_call.m"
  {
#line 778 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 778 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "modecheck_call.m"
      if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 2;
#line 778 "modecheck_call.m"
      else
#line 781 "modecheck_call.m"
        {
#line 782 "modecheck_call.m"
          {
#line 782 "modecheck_call.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_liveness_list\'/3", (MR_String) "length mismatch");
#line 782 "modecheck_call.m"
            return;
          }
#line 781 "modecheck_call.m"
        }
#line 778 "modecheck_call.m"
    else
#line 778 "modecheck_call.m"
      {
#line 778 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 778 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));

#line 778 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "modecheck_call.m"
          {
#line 780 "modecheck_call.m"
            {
#line 780 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_liveness_list\'/3", (MR_String) "length mismatch");
#line 780 "modecheck_call.m"
              return;
            }
#line 779 "modecheck_call.m"
          }
#line 778 "modecheck_call.m"
        else
#line 783 "modecheck_call.m"
          {
#line 783 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__LiveB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 783 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__LiveBs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 783 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Result1_22;

#line 785 "modecheck_call.m"
            {
#line 785 "modecheck_call.m"
              check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__V_23_23, check_hlds__modecheck_call__LiveBs_19, &check_hlds__modecheck_call__Result1_22);
            }
#line 2607 "check_hlds.modecheck_call.c"
#line 2608 "check_hlds.modecheck_call.c"
            switch (check_hlds__modecheck_call__V_24_24) {
#line 2610 "check_hlds.modecheck_call.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2612 "check_hlds.modecheck_call.c"
              case (MR_Integer) 1:
#line 2614 "check_hlds.modecheck_call.c"
#line 2615 "check_hlds.modecheck_call.c"
                switch (check_hlds__modecheck_call__LiveB_18) {
#line 2617 "check_hlds.modecheck_call.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 2619 "check_hlds.modecheck_call.c"
                  case (MR_Integer) 1:
#line 820 "modecheck_call.m"
                    *check_hlds__modecheck_call__HeadVar__3_3 = check_hlds__modecheck_call__Result1_22;
#line 2623 "check_hlds.modecheck_call.c"
                    break;
#line 2625 "check_hlds.modecheck_call.c"
                  case (MR_Integer) 0:
#line 812 "modecheck_call.m"
                    {
#line 812 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = ((&check_hlds__modecheck_call_vector_common_4[24 + check_hlds__modecheck_call__Result1_22]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
                    }
#line 2633 "check_hlds.modecheck_call.c"
                    break;
#line 2635 "check_hlds.modecheck_call.c"
                }
#line 2637 "check_hlds.modecheck_call.c"
                break;
#line 2639 "check_hlds.modecheck_call.c"
              case (MR_Integer) 0:
#line 2641 "check_hlds.modecheck_call.c"
#line 2642 "check_hlds.modecheck_call.c"
                switch (check_hlds__modecheck_call__LiveB_18) {
#line 2644 "check_hlds.modecheck_call.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 2646 "check_hlds.modecheck_call.c"
                  case (MR_Integer) 1:
#line 812 "modecheck_call.m"
                    {
#line 812 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = ((&check_hlds__modecheck_call_vector_common_4[28 + check_hlds__modecheck_call__Result1_22]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
                    }
#line 2654 "check_hlds.modecheck_call.c"
                    break;
#line 2656 "check_hlds.modecheck_call.c"
                  case (MR_Integer) 0:
#line 820 "modecheck_call.m"
                    *check_hlds__modecheck_call__HeadVar__3_3 = check_hlds__modecheck_call__Result1_22;
#line 2660 "check_hlds.modecheck_call.c"
                    break;
#line 2662 "check_hlds.modecheck_call.c"
                }
#line 2664 "check_hlds.modecheck_call.c"
                break;
#line 2666 "check_hlds.modecheck_call.c"
            }
#line 783 "modecheck_call.m"
          }
#line 778 "modecheck_call.m"
      }
#line 778 "modecheck_call.m"
  }
#line 775 "modecheck_call.m"
}

#line 758 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__compare_inst_list_2_6_p_0(
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_1,
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 758 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__5_5,
#line 758 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__6_6)
#line 758 "modecheck_call.m"
{
#line 762 "modecheck_call.m"
  {
#line 762 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 762 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 762 "modecheck_call.m"
      {
#line 762 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 762 "modecheck_call.m"
          {
#line 762 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 762 "modecheck_call.m"
              {
#line 762 "modecheck_call.m"
                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 2;
#line 762 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 762 "modecheck_call.m"
              }
#line 762 "modecheck_call.m"
          }
#line 762 "modecheck_call.m"
      }
#line 762 "modecheck_call.m"
    else
#line 762 "modecheck_call.m"
      {
#line 762 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 762 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 762 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_38_38;
#line 762 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_39_39;
#line 762 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_40_40;
#line 762 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_41_41;

#line 763 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 763 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 763 "modecheck_call.m"
          {
#line 763 "modecheck_call.m"
            check_hlds__modecheck_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 0)));
#line 763 "modecheck_call.m"
            check_hlds__modecheck_call__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 1)));
#line 764 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 764 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 764 "modecheck_call.m"
              {
#line 764 "modecheck_call.m"
                check_hlds__modecheck_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__5_5, (MR_Integer) 0)));
#line 764 "modecheck_call.m"
                check_hlds__modecheck_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__5_5, (MR_Integer) 1)));
#line 762 "modecheck_call.m"
                if ((check_hlds__modecheck_call__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "modecheck_call.m"
                  {
#line 764 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_20_20;
#line 764 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__B_mi_A_49;

#line 852 "modecheck_call.m"
                    {
#line 852 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                    }
#line 854 "modecheck_call.m"
                    if (check_hlds__modecheck_call__succeeded)
#line 853 "modecheck_call.m"
                      check_hlds__modecheck_call__B_mi_A_49 = (MR_Integer) 1;
#line 854 "modecheck_call.m"
                    else
#line 855 "modecheck_call.m"
                      check_hlds__modecheck_call__B_mi_A_49 = (MR_Integer) 0;
#line 766 "modecheck_call.m"
                    check_hlds__modecheck_call__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "modecheck_call.m"
                    {
#line 847 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                    }
#line 2791 "check_hlds.modecheck_call.c"
                    if (check_hlds__modecheck_call__succeeded)
#line 2793 "check_hlds.modecheck_call.c"
                      {
#line 2795 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result0_17;
#line 2797 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result1_18;

#line 858 "modecheck_call.m"
#line 858 "modecheck_call.m"
                        switch (check_hlds__modecheck_call__B_mi_A_49) {
#line 858 "modecheck_call.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 858 "modecheck_call.m"
                          case (MR_Integer) 0:
#line 857 "modecheck_call.m"
                            check_hlds__modecheck_call__Result0_17 = (MR_Integer) 0;
#line 858 "modecheck_call.m"
                            break;
#line 858 "modecheck_call.m"
                          case (MR_Integer) 1:
#line 860 "modecheck_call.m"
                            {
#line 860 "modecheck_call.m"
                              MR_Word check_hlds__modecheck_call__B_mf_A_55;

#line 907 "modecheck_call.m"
                              {
#line 907 "modecheck_call.m"
                                check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                              }
#line 911 "modecheck_call.m"
                              if (check_hlds__modecheck_call__succeeded)
#line 910 "modecheck_call.m"
                                check_hlds__modecheck_call__B_mf_A_55 = (MR_Integer) 1;
#line 911 "modecheck_call.m"
                              else
#line 912 "modecheck_call.m"
                                check_hlds__modecheck_call__B_mf_A_55 = (MR_Integer) 0;
#line 899 "modecheck_call.m"
                              {
#line 899 "modecheck_call.m"
                                check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                              }
#line 2836 "check_hlds.modecheck_call.c"
                              if (check_hlds__modecheck_call__succeeded)
#line 915 "modecheck_call.m"
#line 915 "modecheck_call.m"
                                switch (check_hlds__modecheck_call__B_mf_A_55) {
#line 915 "modecheck_call.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 915 "modecheck_call.m"
                                  case (MR_Integer) 0:
#line 914 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_17 = (MR_Integer) 0;
#line 915 "modecheck_call.m"
                                    break;
#line 915 "modecheck_call.m"
                                  case (MR_Integer) 1:
#line 917 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_17 = (MR_Integer) 2;
#line 915 "modecheck_call.m"
                                    break;
#line 915 "modecheck_call.m"
                                }
#line 2857 "check_hlds.modecheck_call.c"
                              else
#line 915 "modecheck_call.m"
#line 915 "modecheck_call.m"
                                switch (check_hlds__modecheck_call__B_mf_A_55) {
#line 915 "modecheck_call.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 915 "modecheck_call.m"
                                  case (MR_Integer) 0:
#line 916 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_17 = (MR_Integer) 3;
#line 915 "modecheck_call.m"
                                    break;
#line 915 "modecheck_call.m"
                                  case (MR_Integer) 1:
#line 915 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_17 = (MR_Integer) 1;
#line 915 "modecheck_call.m"
                                    break;
#line 915 "modecheck_call.m"
                                }
#line 860 "modecheck_call.m"
                            }
#line 858 "modecheck_call.m"
                            break;
#line 858 "modecheck_call.m"
                        }
#line 766 "modecheck_call.m"
                        {
#line 766 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_20_20, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_18);
                        }
#line 2889 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2891 "check_hlds.modecheck_call.c"
                          {
#line 812 "modecheck_call.m"
#line 812 "modecheck_call.m"
                            switch (check_hlds__modecheck_call__Result0_17) {
#line 812 "modecheck_call.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 812 "modecheck_call.m"
                              case (MR_Integer) 0:
#line 812 "modecheck_call.m"
                                {
#line 812 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[0 + check_hlds__modecheck_call__Result1_18]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
                                }
#line 812 "modecheck_call.m"
                                break;
#line 812 "modecheck_call.m"
                              case (MR_Integer) 3:
#line 821 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 812 "modecheck_call.m"
                                break;
#line 812 "modecheck_call.m"
                              case (MR_Integer) 2:
#line 820 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = check_hlds__modecheck_call__Result1_18;
#line 812 "modecheck_call.m"
                                break;
#line 812 "modecheck_call.m"
                              case (MR_Integer) 1:
#line 812 "modecheck_call.m"
                                {
#line 812 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[4 + check_hlds__modecheck_call__Result1_18]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
                                }
#line 812 "modecheck_call.m"
                                break;
#line 812 "modecheck_call.m"
                            }
#line 812 "modecheck_call.m"
                            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 2934 "check_hlds.modecheck_call.c"
                          }
#line 2936 "check_hlds.modecheck_call.c"
                      }
#line 2938 "check_hlds.modecheck_call.c"
                    else
#line 2940 "check_hlds.modecheck_call.c"
                      {
#line 2942 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result1_79;

#line 766 "modecheck_call.m"
                        {
#line 766 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_20_20, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_79);
                        }
#line 2950 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2952 "check_hlds.modecheck_call.c"
                          {
#line 2954 "check_hlds.modecheck_call.c"
#line 2955 "check_hlds.modecheck_call.c"
                            switch (check_hlds__modecheck_call__B_mi_A_49) {
#line 2957 "check_hlds.modecheck_call.c"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 2959 "check_hlds.modecheck_call.c"
                              case (MR_Integer) 0:
#line 821 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 2963 "check_hlds.modecheck_call.c"
                                break;
#line 2965 "check_hlds.modecheck_call.c"
                              case (MR_Integer) 1:
#line 812 "modecheck_call.m"
                                {
#line 812 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[8 + check_hlds__modecheck_call__Result1_79]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
                                }
#line 2973 "check_hlds.modecheck_call.c"
                                break;
#line 2975 "check_hlds.modecheck_call.c"
                            }
#line 2977 "check_hlds.modecheck_call.c"
                            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 2979 "check_hlds.modecheck_call.c"
                          }
#line 2981 "check_hlds.modecheck_call.c"
                      }
#line 764 "modecheck_call.m"
                  }
#line 762 "modecheck_call.m"
                else
#line 769 "modecheck_call.m"
                  {
#line 769 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInst_26;
#line 769 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInsts_27;
#line 769 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__4_4, (MR_Integer) 0)));
#line 769 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_34_34;
#line 769 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_35_35;
#line 769 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__B_mi_A_65;

#line 769 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 769 "modecheck_call.m"
                    if (check_hlds__modecheck_call__succeeded)
#line 769 "modecheck_call.m"
                      {
#line 769 "modecheck_call.m"
                        check_hlds__modecheck_call__ArgInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_33_33, (MR_Integer) 0)));
#line 769 "modecheck_call.m"
                        check_hlds__modecheck_call__ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_33_33, (MR_Integer) 1)));
#line 770 "modecheck_call.m"
                        {
#line 770 "modecheck_call.m"
                          check_hlds__modecheck_call__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 770 "modecheck_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_34_34, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgInst_26));
#line 770 "modecheck_call.m"
                        }
#line 852 "modecheck_call.m"
                        {
#line 852 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                        }
#line 854 "modecheck_call.m"
                        if (check_hlds__modecheck_call__succeeded)
#line 853 "modecheck_call.m"
                          check_hlds__modecheck_call__B_mi_A_65 = (MR_Integer) 1;
#line 854 "modecheck_call.m"
                        else
#line 855 "modecheck_call.m"
                          check_hlds__modecheck_call__B_mi_A_65 = (MR_Integer) 0;
#line 771 "modecheck_call.m"
                        {
#line 771 "modecheck_call.m"
                          check_hlds__modecheck_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 771 "modecheck_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_27));
#line 771 "modecheck_call.m"
                        }
#line 847 "modecheck_call.m"
                        {
#line 847 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                        }
#line 3046 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 3048 "check_hlds.modecheck_call.c"
                          {
#line 3050 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result0_31;
#line 3052 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result1_32;

#line 858 "modecheck_call.m"
#line 858 "modecheck_call.m"
                            switch (check_hlds__modecheck_call__B_mi_A_65) {
#line 858 "modecheck_call.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 858 "modecheck_call.m"
                              case (MR_Integer) 0:
#line 857 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 858 "modecheck_call.m"
                                break;
#line 858 "modecheck_call.m"
                              case (MR_Integer) 1:
#line 860 "modecheck_call.m"
                                {
#line 860 "modecheck_call.m"
                                  MR_Word check_hlds__modecheck_call__ArgInst_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_34_34, (MR_Integer) 0)));
#line 860 "modecheck_call.m"
                                  MR_Word check_hlds__modecheck_call__Arg_mf_B_69;

#line 881 "modecheck_call.m"
                                  {
#line 881 "modecheck_call.m"
                                    check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__ArgInst_67, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                  }
#line 885 "modecheck_call.m"
                                  if (check_hlds__modecheck_call__succeeded)
#line 884 "modecheck_call.m"
                                    check_hlds__modecheck_call__Arg_mf_B_69 = (MR_Integer) 1;
#line 885 "modecheck_call.m"
                                  else
#line 886 "modecheck_call.m"
                                    check_hlds__modecheck_call__Arg_mf_B_69 = (MR_Integer) 0;
#line 873 "modecheck_call.m"
                                  {
#line 873 "modecheck_call.m"
                                    check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__ArgInst_67, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                  }
#line 3093 "check_hlds.modecheck_call.c"
                                  if (check_hlds__modecheck_call__succeeded)
#line 3095 "check_hlds.modecheck_call.c"
#line 3096 "check_hlds.modecheck_call.c"
                                    switch (check_hlds__modecheck_call__Arg_mf_B_69) {
#line 3098 "check_hlds.modecheck_call.c"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 3100 "check_hlds.modecheck_call.c"
                                      case (MR_Integer) 0:
#line 888 "modecheck_call.m"
                                        check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 3104 "check_hlds.modecheck_call.c"
                                        break;
#line 3106 "check_hlds.modecheck_call.c"
                                      case (MR_Integer) 1:
#line 3108 "check_hlds.modecheck_call.c"
                                        {
#line 3110 "check_hlds.modecheck_call.c"
                                          MR_Word check_hlds__modecheck_call__B_mf_A_71;

#line 907 "modecheck_call.m"
                                          {
#line 907 "modecheck_call.m"
                                            check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                          }
#line 911 "modecheck_call.m"
                                          if (check_hlds__modecheck_call__succeeded)
#line 910 "modecheck_call.m"
                                            check_hlds__modecheck_call__B_mf_A_71 = (MR_Integer) 1;
#line 911 "modecheck_call.m"
                                          else
#line 912 "modecheck_call.m"
                                            check_hlds__modecheck_call__B_mf_A_71 = (MR_Integer) 0;
#line 899 "modecheck_call.m"
                                          {
#line 899 "modecheck_call.m"
                                            check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                          }
#line 3131 "check_hlds.modecheck_call.c"
                                          if (check_hlds__modecheck_call__succeeded)
#line 915 "modecheck_call.m"
#line 915 "modecheck_call.m"
                                            switch (check_hlds__modecheck_call__B_mf_A_71) {
#line 915 "modecheck_call.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 915 "modecheck_call.m"
                                              case (MR_Integer) 0:
#line 914 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 915 "modecheck_call.m"
                                                break;
#line 915 "modecheck_call.m"
                                              case (MR_Integer) 1:
#line 917 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 2;
#line 915 "modecheck_call.m"
                                                break;
#line 915 "modecheck_call.m"
                                            }
#line 3152 "check_hlds.modecheck_call.c"
                                          else
#line 915 "modecheck_call.m"
#line 915 "modecheck_call.m"
                                            switch (check_hlds__modecheck_call__B_mf_A_71) {
#line 915 "modecheck_call.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 915 "modecheck_call.m"
                                              case (MR_Integer) 0:
#line 916 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 3;
#line 915 "modecheck_call.m"
                                                break;
#line 915 "modecheck_call.m"
                                              case (MR_Integer) 1:
#line 915 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 915 "modecheck_call.m"
                                                break;
#line 915 "modecheck_call.m"
                                            }
#line 3173 "check_hlds.modecheck_call.c"
                                        }
#line 3175 "check_hlds.modecheck_call.c"
                                        break;
#line 3177 "check_hlds.modecheck_call.c"
                                    }
#line 3179 "check_hlds.modecheck_call.c"
                                  else
#line 3181 "check_hlds.modecheck_call.c"
#line 3182 "check_hlds.modecheck_call.c"
                                    switch (check_hlds__modecheck_call__Arg_mf_B_69) {
#line 3184 "check_hlds.modecheck_call.c"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 3186 "check_hlds.modecheck_call.c"
                                      case (MR_Integer) 0:
#line 3188 "check_hlds.modecheck_call.c"
                                        {
#line 3190 "check_hlds.modecheck_call.c"
                                          MR_Word check_hlds__modecheck_call__B_mf_A_89;

#line 907 "modecheck_call.m"
                                          {
#line 907 "modecheck_call.m"
                                            check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                          }
#line 911 "modecheck_call.m"
                                          if (check_hlds__modecheck_call__succeeded)
#line 910 "modecheck_call.m"
                                            check_hlds__modecheck_call__B_mf_A_89 = (MR_Integer) 1;
#line 911 "modecheck_call.m"
                                          else
#line 912 "modecheck_call.m"
                                            check_hlds__modecheck_call__B_mf_A_89 = (MR_Integer) 0;
#line 899 "modecheck_call.m"
                                          {
#line 899 "modecheck_call.m"
                                            check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                          }
#line 3211 "check_hlds.modecheck_call.c"
                                          if (check_hlds__modecheck_call__succeeded)
#line 915 "modecheck_call.m"
#line 915 "modecheck_call.m"
                                            switch (check_hlds__modecheck_call__B_mf_A_89) {
#line 915 "modecheck_call.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 915 "modecheck_call.m"
                                              case (MR_Integer) 0:
#line 914 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 915 "modecheck_call.m"
                                                break;
#line 915 "modecheck_call.m"
                                              case (MR_Integer) 1:
#line 917 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 2;
#line 915 "modecheck_call.m"
                                                break;
#line 915 "modecheck_call.m"
                                            }
#line 3232 "check_hlds.modecheck_call.c"
                                          else
#line 915 "modecheck_call.m"
#line 915 "modecheck_call.m"
                                            switch (check_hlds__modecheck_call__B_mf_A_89) {
#line 915 "modecheck_call.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 915 "modecheck_call.m"
                                              case (MR_Integer) 0:
#line 916 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 3;
#line 915 "modecheck_call.m"
                                                break;
#line 915 "modecheck_call.m"
                                              case (MR_Integer) 1:
#line 915 "modecheck_call.m"
                                                check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 915 "modecheck_call.m"
                                                break;
#line 915 "modecheck_call.m"
                                            }
#line 3253 "check_hlds.modecheck_call.c"
                                        }
#line 3255 "check_hlds.modecheck_call.c"
                                        break;
#line 3257 "check_hlds.modecheck_call.c"
                                      case (MR_Integer) 1:
#line 889 "modecheck_call.m"
                                        check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 3261 "check_hlds.modecheck_call.c"
                                        break;
#line 3263 "check_hlds.modecheck_call.c"
                                    }
#line 860 "modecheck_call.m"
                                }
#line 858 "modecheck_call.m"
                                break;
#line 858 "modecheck_call.m"
                            }
#line 771 "modecheck_call.m"
                            {
#line 771 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_35_35, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_32);
                            }
#line 3276 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 3278 "check_hlds.modecheck_call.c"
                              {
#line 812 "modecheck_call.m"
#line 812 "modecheck_call.m"
                                switch (check_hlds__modecheck_call__Result0_31) {
#line 812 "modecheck_call.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 812 "modecheck_call.m"
                                  case (MR_Integer) 0:
#line 812 "modecheck_call.m"
                                    {
#line 812 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[12 + check_hlds__modecheck_call__Result1_32]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
                                    }
#line 812 "modecheck_call.m"
                                    break;
#line 812 "modecheck_call.m"
                                  case (MR_Integer) 3:
#line 821 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 812 "modecheck_call.m"
                                    break;
#line 812 "modecheck_call.m"
                                  case (MR_Integer) 2:
#line 820 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = check_hlds__modecheck_call__Result1_32;
#line 812 "modecheck_call.m"
                                    break;
#line 812 "modecheck_call.m"
                                  case (MR_Integer) 1:
#line 812 "modecheck_call.m"
                                    {
#line 812 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[16 + check_hlds__modecheck_call__Result1_32]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
                                    }
#line 812 "modecheck_call.m"
                                    break;
#line 812 "modecheck_call.m"
                                }
#line 812 "modecheck_call.m"
                                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 3321 "check_hlds.modecheck_call.c"
                              }
#line 3323 "check_hlds.modecheck_call.c"
                          }
#line 3325 "check_hlds.modecheck_call.c"
                        else
#line 3327 "check_hlds.modecheck_call.c"
                          {
#line 3329 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result1_94;

#line 771 "modecheck_call.m"
                            {
#line 771 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_35_35, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_94);
                            }
#line 3337 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 3339 "check_hlds.modecheck_call.c"
                              {
#line 3341 "check_hlds.modecheck_call.c"
#line 3342 "check_hlds.modecheck_call.c"
                                switch (check_hlds__modecheck_call__B_mi_A_65) {
#line 3344 "check_hlds.modecheck_call.c"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 3346 "check_hlds.modecheck_call.c"
                                  case (MR_Integer) 0:
#line 821 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 3350 "check_hlds.modecheck_call.c"
                                    break;
#line 3352 "check_hlds.modecheck_call.c"
                                  case (MR_Integer) 1:
#line 812 "modecheck_call.m"
                                    {
#line 812 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = ((&check_hlds__modecheck_call_vector_common_4[20 + check_hlds__modecheck_call__Result1_94]))->check_hlds__modecheck_call__vector_common_type_4_0__vct_4_f_0;
#line 812 "modecheck_call.m"
                                    }
#line 3360 "check_hlds.modecheck_call.c"
                                    break;
#line 3362 "check_hlds.modecheck_call.c"
                                }
#line 3364 "check_hlds.modecheck_call.c"
                                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 3366 "check_hlds.modecheck_call.c"
                              }
#line 3368 "check_hlds.modecheck_call.c"
                          }
#line 769 "modecheck_call.m"
                      }
#line 769 "modecheck_call.m"
                  }
#line 764 "modecheck_call.m"
              }
#line 763 "modecheck_call.m"
          }
#line 762 "modecheck_call.m"
      }
#line 762 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 762 "modecheck_call.m"
  }
#line 758 "modecheck_call.m"
}

#line 501 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
#line 501 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 501 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_2,
#line 501 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3,
#line 501 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__4_4)
#line 501 "modecheck_call.m"
{
#line 504 "modecheck_call.m"
  {
#line 504 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 504 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "modecheck_call.m"
      {
#line 504 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 504 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 504 "modecheck_call.m"
      }
#line 504 "modecheck_call.m"
    else
#line 506 "modecheck_call.m"
      {
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Inst_9;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Insts_10;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLive_11;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLives_12;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ModuleInfo_13;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InstMap_14;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__VarTypes_15;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Inst0_16;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Type_17;
#line 506 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__IsLive0_18;

#line 507 "modecheck_call.m"
        {
#line 507 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__ModuleInfo_13);
        }
#line 508 "modecheck_call.m"
        {
#line 508 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__InstMap_14);
        }
#line 509 "modecheck_call.m"
        {
#line 509 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__VarTypes_15);
        }
#line 510 "modecheck_call.m"
        {
#line 510 "modecheck_call.m"
          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_call__InstMap_14, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__Inst0_16);
        }
#line 511 "modecheck_call.m"
        {
#line 511 "modecheck_call.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_call__VarTypes_15, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__Type_17);
        }
#line 512 "modecheck_call.m"
        {
#line 512 "modecheck_call.m"
          check_hlds__mode_util__normalise_inst_4_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Type_17, check_hlds__modecheck_call__Inst0_16, &check_hlds__modecheck_call__Inst_9);
        }
#line 514 "modecheck_call.m"
        {
#line 514 "modecheck_call.m"
          check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_call__ModeInfo_2, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__IsLive0_18);
        }
#line 518 "modecheck_call.m"
#line 518 "modecheck_call.m"
        switch (check_hlds__modecheck_call__IsLive0_18) {
#line 518 "modecheck_call.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 518 "modecheck_call.m"
          case (MR_Integer) 1:
#line 530 "modecheck_call.m"
            {
#line 526 "modecheck_call.m"
              {
#line 526 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Inst_9);
              }
#line 526 "modecheck_call.m"
              if (check_hlds__modecheck_call__succeeded)
#line 527 "modecheck_call.m"
                {
#line 527 "modecheck_call.m"
                  check_hlds__modecheck_call__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Inst_9);
                }
#line 530 "modecheck_call.m"
              if (check_hlds__modecheck_call__succeeded)
#line 529 "modecheck_call.m"
                check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 1;
#line 530 "modecheck_call.m"
              else
#line 531 "modecheck_call.m"
                check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 0;
#line 530 "modecheck_call.m"
            }
#line 518 "modecheck_call.m"
            break;
#line 518 "modecheck_call.m"
          case (MR_Integer) 0:
#line 517 "modecheck_call.m"
            check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 0;
#line 518 "modecheck_call.m"
            break;
#line 518 "modecheck_call.m"
        }
#line 535 "modecheck_call.m"
        {
#line 535 "modecheck_call.m"
          check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(check_hlds__modecheck_call__Vars_7, check_hlds__modecheck_call__ModeInfo_2, &check_hlds__modecheck_call__Insts_10, &check_hlds__modecheck_call__IsLives_12);
        }
#line 506 "modecheck_call.m"
        {
#line 506 "modecheck_call.m"
          MR_Word base;
#line 506 "modecheck_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "modecheck_call.m"
          *check_hlds__modecheck_call__HeadVar__3_3 = base;
#line 506 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_call__Inst_9));
#line 506 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_call__Insts_10));
#line 506 "modecheck_call.m"
        }
#line 506 "modecheck_call.m"
        {
#line 506 "modecheck_call.m"
          MR_Word base;
#line 506 "modecheck_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "modecheck_call.m"
          *check_hlds__modecheck_call__HeadVar__4_4 = base;
#line 506 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_call__IsLive_11));
#line 506 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_call__IsLives_12));
#line 506 "modecheck_call.m"
        }
#line 506 "modecheck_call.m"
      }
#line 504 "modecheck_call.m"
  }
#line 501 "modecheck_call.m"
}

#line 429 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_10_p_0(
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcInfo_11,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Purity_12,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ProcArgModes_13,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_14,
#line 429 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ArgOffset_15,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__InstVarSub_16,
#line 429 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_17,
#line 429 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 429 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28,
#line 429 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29)
#line 429 "modecheck_call.m"
{
#line 434 "modecheck_call.m"
  {
#line 434 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo_20;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__MayInitSolverVars_21;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts0_22;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_23;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts0_24;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_25;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__NeverSucceeds_26;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32;
#line 434 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33;

#line 435 "modecheck_call.m"
    {
#line 435 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__ModuleInfo_20);
    }
#line 436 "modecheck_call.m"
    {
#line 436 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__MayInitSolverVars_21);
    }
#line 441 "modecheck_call.m"
    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Purity_12 == (MR_Integer) 2);
#line 441 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 442 "modecheck_call.m"
      {
#line 442 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28);
      }
#line 445 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 444 "modecheck_call.m"
      {
#line 444 "modecheck_call.m"
        {
#line 444 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0((MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31);
        }
#line 444 "modecheck_call.m"
      }
#line 445 "modecheck_call.m"
    else
#line 445 "modecheck_call.m"
      check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_28;
#line 449 "modecheck_call.m"
    {
#line 449 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_20, check_hlds__modecheck_call__ProcArgModes_13, &check_hlds__modecheck_call__InitialInsts0_22);
    }
#line 450 "modecheck_call.m"
    {
#line 450 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_16, check_hlds__modecheck_call__InitialInsts0_22, &check_hlds__modecheck_call__InitialInsts_23);
    }
#line 451 "modecheck_call.m"
    {
#line 451 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_20, check_hlds__modecheck_call__ProcArgModes_13, &check_hlds__modecheck_call__FinalInsts0_24);
    }
#line 452 "modecheck_call.m"
    {
#line 452 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_16, check_hlds__modecheck_call__FinalInsts0_24, &check_hlds__modecheck_call__FinalInsts_25);
    }
#line 453 "modecheck_call.m"
    {
#line 453 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__ArgVars0_14, check_hlds__modecheck_call__InitialInsts_23, check_hlds__modecheck_call__FinalInsts_25, check_hlds__modecheck_call__ArgOffset_15, check_hlds__modecheck_call__ArgVars_17, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_31_31, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32);
    }
#line 455 "modecheck_call.m"
    {
#line 455 "modecheck_call.m"
      hlds__hlds_pred__proc_info_never_succeeds_2_p_0(check_hlds__modecheck_call__ProcInfo_11, &check_hlds__modecheck_call__NeverSucceeds_26);
    }
#line 460 "modecheck_call.m"
#line 460 "modecheck_call.m"
    switch (check_hlds__modecheck_call__NeverSucceeds_26) {
#line 460 "modecheck_call.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 460 "modecheck_call.m"
      case (MR_Integer) 0:
#line 461 "modecheck_call.m"
        check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32;
#line 460 "modecheck_call.m"
        break;
#line 460 "modecheck_call.m"
      case (MR_Integer) 1:
#line 457 "modecheck_call.m"
        {
#line 457 "modecheck_call.m"
          MR_Word check_hlds__modecheck_call__Instmap_27;

#line 458 "modecheck_call.m"
          {
#line 458 "modecheck_call.m"
            hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_call__Instmap_27);
          }
#line 459 "modecheck_call.m"
          {
#line 459 "modecheck_call.m"
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_call__Instmap_27, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33);
          }
#line 457 "modecheck_call.m"
        }
#line 460 "modecheck_call.m"
        break;
#line 460 "modecheck_call.m"
    }
#line 463 "modecheck_call.m"
    {
#line 463 "modecheck_call.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(check_hlds__modecheck_call__MayInitSolverVars_21, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29);
    }
#line 434 "modecheck_call.m"
  }
#line 429 "modecheck_call.m"
}

#line 329 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_7_p_0(
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredId_8,
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_9,
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__DeterminismKnown_10,
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__WaitingVars_11,
#line 329 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_12,
#line 329 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20,
#line 329 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_21)
#line 329 "modecheck_call.m"
{
#line 334 "modecheck_call.m"
  {
#line 334 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 334 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Preds_14;
#line 334 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredInfo_15;
#line 334 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Markers_16;
#line 341 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_PredInfo_15;

#line 340 "modecheck_call.m"
    {
#line 340 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_preds_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__Preds_14);
    }
#line 341 "modecheck_call.m"
    {
#line 341 "modecheck_call.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_call__Preds_14, ((MR_Box) (check_hlds__modecheck_call__PredId_8)), &check_hlds__modecheck_call__conv0_PredInfo_15);
    }
#line 341 "modecheck_call.m"
    check_hlds__modecheck_call__PredInfo_15 = ((MR_Word) check_hlds__modecheck_call__conv0_PredInfo_15);
#line 342 "modecheck_call.m"
    {
#line 342 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__modecheck_call__PredInfo_15, &check_hlds__modecheck_call__Markers_16);
    }
#line 343 "modecheck_call.m"
    {
#line 343 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__modecheck_call__Markers_16, (MR_Integer) 3);
    }
#line 352 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 345 "modecheck_call.m"
      {
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Instmap_17;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_23;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InitialInsts_38;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ArgLives_39;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ModuleInfo0_40;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Preds0_41;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__PredInfo0_42;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Context_43;
#line 345 "modecheck_call.m"
        MR_Integer check_hlds__modecheck_call__Arity_44;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__FinalInsts_45;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Modes_46;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InstVarSet_47;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ModuleInfo_48;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_50_50;
#line 345 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_27_51;
#line 481 "modecheck_call.m"
        MR_Box check_hlds__modecheck_call__conv1_PredInfo0_42;

#line 478 "modecheck_call.m"
        {
#line 478 "modecheck_call.m"
          check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(check_hlds__modecheck_call__ArgVars_9, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__InitialInsts_38, &check_hlds__modecheck_call__ArgLives_39);
        }
#line 479 "modecheck_call.m"
        {
#line 479 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__ModuleInfo0_40);
        }
#line 480 "modecheck_call.m"
        {
#line 480 "modecheck_call.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__modecheck_call__ModuleInfo0_40, &check_hlds__modecheck_call__Preds0_41);
        }
#line 481 "modecheck_call.m"
        {
#line 481 "modecheck_call.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__modecheck_call__Preds0_41, ((MR_Box) (check_hlds__modecheck_call__PredId_8)), &check_hlds__modecheck_call__conv1_PredInfo0_42);
        }
#line 481 "modecheck_call.m"
        check_hlds__modecheck_call__PredInfo0_42 = ((MR_Word) check_hlds__modecheck_call__conv1_PredInfo0_42);
#line 482 "modecheck_call.m"
        {
#line 482 "modecheck_call.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__modecheck_call__PredInfo0_42, &check_hlds__modecheck_call__Context_43);
        }
#line 483 "modecheck_call.m"
        {
#line 483 "modecheck_call.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_1[0], check_hlds__modecheck_call__ArgVars_9, &check_hlds__modecheck_call__Arity_44);
        }
#line 484 "modecheck_call.m"
        {
#line 484 "modecheck_call.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_call__Arity_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))), &check_hlds__modecheck_call__FinalInsts_45);
        }
#line 485 "modecheck_call.m"
        {
#line 485 "modecheck_call.m"
          parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(check_hlds__modecheck_call__InitialInsts_38, check_hlds__modecheck_call__FinalInsts_45, &check_hlds__modecheck_call__Modes_46);
        }
#line 486 "modecheck_call.m"
        {
#line 486 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__InstVarSet_47);
        }
#line 491 "modecheck_call.m"
        {
#line 491 "modecheck_call.m"
          check_hlds__modecheck_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 491 "modecheck_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_50_50, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgLives_39));
#line 491 "modecheck_call.m"
        }
#line 491 "modecheck_call.m"
        {
#line 491 "modecheck_call.m"
          check_hlds__unify_proc__request_proc_9_p_0(check_hlds__modecheck_call__PredId_8, check_hlds__modecheck_call__Modes_46, check_hlds__modecheck_call__InstVarSet_47, check_hlds__modecheck_call__V_50_50, check_hlds__modecheck_call__DeterminismKnown_10, check_hlds__modecheck_call__Context_43, check_hlds__modecheck_call__TheProcId_12, check_hlds__modecheck_call__ModuleInfo0_40, &check_hlds__modecheck_call__ModuleInfo_48);
        }
#line 494 "modecheck_call.m"
        {
#line 494 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_call__ModuleInfo_48, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_27_51);
        }
#line 499 "modecheck_call.m"
        {
#line 499 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_changed_flag_3_p_0((MR_Integer) 1, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_27_51, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_23);
        }
#line 350 "modecheck_call.m"
        {
#line 350 "modecheck_call.m"
          hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_call__Instmap_17);
        }
#line 351 "modecheck_call.m"
        {
#line 351 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_call__Instmap_17, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_23, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_21);
        }
#line 345 "modecheck_call.m"
      }
#line 352 "modecheck_call.m"
    else
#line 353 "modecheck_call.m"
      {
#line 353 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__InstMap_18;
#line 353 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__ArgInsts_19;
#line 353 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_26_26;
#line 353 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_27_27;

#line 353 "modecheck_call.m"
        {
#line 353 "modecheck_call.m"
          *check_hlds__modecheck_call__TheProcId_12 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 354 "modecheck_call.m"
        {
#line 354 "modecheck_call.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__InstMap_18);
        }
#line 355 "modecheck_call.m"
        {
#line 355 "modecheck_call.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_call__InstMap_18, check_hlds__modecheck_call__ArgVars_9, &check_hlds__modecheck_call__ArgInsts_19);
        }
#line 356 "modecheck_call.m"
        {
#line 356 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_20, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_26_26);
        }
#line 358 "modecheck_call.m"
        {
#line 358 "modecheck_call.m"
          check_hlds__modecheck_call__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 358 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 358 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_27_27, 1) = ((MR_Box) (check_hlds__modecheck_call__ArgVars_9));
#line 358 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_27_27, 2) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_19));
#line 358 "modecheck_call.m"
        }
#line 357 "modecheck_call.m"
        {
#line 357 "modecheck_call.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_11, check_hlds__modecheck_call__V_27_27, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_26_26, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_21);
        }
#line 353 "modecheck_call.m"
      }
#line 334 "modecheck_call.m"
  }
#line 329 "modecheck_call.m"
}

#line 74 "modecheck_call.m"
MR_bool MR_CALL 
check_hlds__modecheck_call__modes_are_identical_bar_cc_4_p_0(
#line 74 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ProcId_5,
#line 74 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__OtherProcId_6,
#line 74 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredInfo_7,
#line 74 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_8)
#line 74 "modecheck_call.m"
{
#line 576 "modecheck_call.m"
  {
#line 576 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_33_33;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_9;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcInfo_10;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcInfo_11;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgModes_12;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgModes_13;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_14;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherInitialInsts_15;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ArgTypes_16;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_18;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherFinalInsts_19;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgLives_21;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgLives_22;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CompareLives_23;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Detism_24;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherDetism_25;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CanFail_26;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Solns_27;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherCanFail_28;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherSolns_29;
#line 576 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_31_31;
#line 581 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_ProcInfo_10;
#line 582 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv1_OtherProcInfo_11;
#line 754 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_40;
#line 754 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_50;

#line 580 "modecheck_call.m"
    {
#line 580 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__Procs_9);
    }
#line 4021 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 581 "modecheck_call.m"
    {
#line 581 "modecheck_call.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_33_33, check_hlds__modecheck_call__Procs_9, check_hlds__modecheck_call__ProcId_5, &check_hlds__modecheck_call__conv0_ProcInfo_10);
    }
#line 581 "modecheck_call.m"
    check_hlds__modecheck_call__ProcInfo_10 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_10);
#line 582 "modecheck_call.m"
    {
#line 582 "modecheck_call.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_33_33, check_hlds__modecheck_call__Procs_9, check_hlds__modecheck_call__OtherProcId_6, &check_hlds__modecheck_call__conv1_OtherProcInfo_11);
    }
#line 582 "modecheck_call.m"
    check_hlds__modecheck_call__OtherProcInfo_11 = ((MR_Word) check_hlds__modecheck_call__conv1_OtherProcInfo_11);
#line 585 "modecheck_call.m"
    {
#line 585 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__ProcArgModes_12);
    }
#line 586 "modecheck_call.m"
    {
#line 586 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherProcArgModes_13);
    }
#line 587 "modecheck_call.m"
    {
#line 587 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__InitialInsts_14);
    }
#line 588 "modecheck_call.m"
    {
#line 588 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherInitialInsts_15);
    }
#line 590 "modecheck_call.m"
    {
#line 590 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__ArgTypes_16);
    }
#line 750 "modecheck_call.m"
    {
#line 750 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__InitialInsts_14, check_hlds__modecheck_call__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_40);
    }
#line 754 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 593 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_40 == (MR_Integer) 2);
#line 754 "modecheck_call.m"
    else
#line 755 "modecheck_call.m"
      {
#line 755 "modecheck_call.m"
        {
#line 755 "modecheck_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
#line 755 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 755 "modecheck_call.m"
      }
#line 576 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 576 "modecheck_call.m"
      {
#line 596 "modecheck_call.m"
        {
#line 596 "modecheck_call.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__FinalInsts_18);
        }
#line 597 "modecheck_call.m"
        {
#line 597 "modecheck_call.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherFinalInsts_19);
        }
#line 599 "modecheck_call.m"
        check_hlds__modecheck_call__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 750 "modecheck_call.m"
        {
#line 750 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__FinalInsts_18, check_hlds__modecheck_call__OtherFinalInsts_19, check_hlds__modecheck_call__V_31_31, check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_50);
        }
#line 754 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 601 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_50 == (MR_Integer) 2);
#line 754 "modecheck_call.m"
        else
#line 755 "modecheck_call.m"
          {
#line 755 "modecheck_call.m"
            {
#line 755 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
            }
#line 755 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 755 "modecheck_call.m"
          }
#line 576 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 576 "modecheck_call.m"
          {
#line 604 "modecheck_call.m"
            {
#line 604 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__ProcArgLives_21);
            }
#line 605 "modecheck_call.m"
            {
#line 605 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherProcArgLives_22);
            }
#line 606 "modecheck_call.m"
            {
#line 606 "modecheck_call.m"
              check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__ProcArgLives_21, check_hlds__modecheck_call__OtherProcArgLives_22, &check_hlds__modecheck_call__CompareLives_23);
            }
#line 607 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CompareLives_23 == (MR_Integer) 2);
#line 576 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 576 "modecheck_call.m"
              {
#line 610 "modecheck_call.m"
                {
#line 610 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__Detism_24);
                }
#line 611 "modecheck_call.m"
                {
#line 611 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherDetism_25);
                }
#line 612 "modecheck_call.m"
                {
#line 612 "modecheck_call.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__Detism_24, &check_hlds__modecheck_call__CanFail_26, &check_hlds__modecheck_call__Solns_27);
                }
#line 613 "modecheck_call.m"
                {
#line 613 "modecheck_call.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__OtherDetism_25, &check_hlds__modecheck_call__OtherCanFail_28, &check_hlds__modecheck_call__OtherSolns_29);
                }
#line 614 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CanFail_26 == check_hlds__modecheck_call__OtherCanFail_28);
#line 576 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 576 "modecheck_call.m"
                  {
#line 616 "modecheck_call.m"
#line 616 "modecheck_call.m"
                    switch (check_hlds__modecheck_call__Solns_27) {
#line 616 "modecheck_call.m"
                      default:
#line 616 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = MR_FALSE;
#line 616 "modecheck_call.m"
                        break;
#line 616 "modecheck_call.m"
                      case (MR_Integer) 3:
#line 617 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_29 == (MR_Integer) 2);
#line 616 "modecheck_call.m"
                        break;
#line 616 "modecheck_call.m"
                      case (MR_Integer) 2:
#line 616 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_29 == (MR_Integer) 3);
#line 616 "modecheck_call.m"
                        break;
#line 616 "modecheck_call.m"
                    }
#line 616 "modecheck_call.m"
                    if (!(check_hlds__modecheck_call__succeeded))
#line 615 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_27 == check_hlds__modecheck_call__OtherSolns_29);
#line 576 "modecheck_call.m"
                  }
#line 576 "modecheck_call.m"
              }
#line 576 "modecheck_call.m"
          }
#line 576 "modecheck_call.m"
      }
#line 576 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 576 "modecheck_call.m"
  }
#line 74 "modecheck_call.m"
}

#line 66 "modecheck_call.m"
MR_bool MR_CALL 
check_hlds__modecheck_call__modes_are_indistinguishable_4_p_0(
#line 66 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ProcId_5,
#line 66 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__OtherProcId_6,
#line 66 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredInfo_7,
#line 66 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_8)
#line 66 "modecheck_call.m"
{
#line 539 "modecheck_call.m"
  {
#line 539 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_29_29;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_9;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcInfo_10;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcInfo_11;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgModes_12;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgModes_13;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_14;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherInitialInsts_15;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ArgTypes_16;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgLives_18;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgLives_19;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CompareLives_20;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Detism_21;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherDetism_22;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Solns_24;
#line 539 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherSolns_26;
#line 544 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_ProcInfo_10;
#line 545 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv1_OtherProcInfo_11;
#line 754 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_36;
#line 568 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call___CanFail_23;
#line 569 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call___OtherCanFail_25;

#line 543 "modecheck_call.m"
    {
#line 543 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__Procs_9);
    }
#line 4280 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 544 "modecheck_call.m"
    {
#line 544 "modecheck_call.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_29_29, check_hlds__modecheck_call__Procs_9, check_hlds__modecheck_call__ProcId_5, &check_hlds__modecheck_call__conv0_ProcInfo_10);
    }
#line 544 "modecheck_call.m"
    check_hlds__modecheck_call__ProcInfo_10 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_10);
#line 545 "modecheck_call.m"
    {
#line 545 "modecheck_call.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_29_29, check_hlds__modecheck_call__Procs_9, check_hlds__modecheck_call__OtherProcId_6, &check_hlds__modecheck_call__conv1_OtherProcInfo_11);
    }
#line 545 "modecheck_call.m"
    check_hlds__modecheck_call__OtherProcInfo_11 = ((MR_Word) check_hlds__modecheck_call__conv1_OtherProcInfo_11);
#line 548 "modecheck_call.m"
    {
#line 548 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__ProcArgModes_12);
    }
#line 549 "modecheck_call.m"
    {
#line 549 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherProcArgModes_13);
    }
#line 550 "modecheck_call.m"
    {
#line 550 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__InitialInsts_14);
    }
#line 551 "modecheck_call.m"
    {
#line 551 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherInitialInsts_15);
    }
#line 553 "modecheck_call.m"
    {
#line 553 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__ArgTypes_16);
    }
#line 750 "modecheck_call.m"
    {
#line 750 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__InitialInsts_14, check_hlds__modecheck_call__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_36);
    }
#line 754 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 556 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_36 == (MR_Integer) 2);
#line 754 "modecheck_call.m"
    else
#line 755 "modecheck_call.m"
      {
#line 755 "modecheck_call.m"
        {
#line 755 "modecheck_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
#line 755 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 755 "modecheck_call.m"
      }
#line 539 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 539 "modecheck_call.m"
      {
#line 559 "modecheck_call.m"
        {
#line 559 "modecheck_call.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__ProcArgLives_18);
        }
#line 560 "modecheck_call.m"
        {
#line 560 "modecheck_call.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherProcArgLives_19);
        }
#line 561 "modecheck_call.m"
        {
#line 561 "modecheck_call.m"
          check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__ProcArgLives_18, check_hlds__modecheck_call__OtherProcArgLives_19, &check_hlds__modecheck_call__CompareLives_20);
        }
#line 562 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CompareLives_20 == (MR_Integer) 2);
#line 539 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 539 "modecheck_call.m"
          {
#line 566 "modecheck_call.m"
            {
#line 566 "modecheck_call.m"
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__Detism_21);
            }
#line 567 "modecheck_call.m"
            {
#line 567 "modecheck_call.m"
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherDetism_22);
            }
#line 568 "modecheck_call.m"
            {
#line 568 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__Detism_21, &check_hlds__modecheck_call___CanFail_23, &check_hlds__modecheck_call__Solns_24);
            }
#line 569 "modecheck_call.m"
            {
#line 569 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__OtherDetism_22, &check_hlds__modecheck_call___OtherCanFail_25, &check_hlds__modecheck_call__OtherSolns_26);
            }
#line 570 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_24 == (MR_Integer) 2);
#line 570 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 570 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_26 == (MR_Integer) 2);
#line 571 "modecheck_call.m"
            if (!(check_hlds__modecheck_call__succeeded))
#line 571 "modecheck_call.m"
              {
#line 571 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_24 == (MR_Integer) 2);
#line 571 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 571 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 571 "modecheck_call.m"
                  {
#line 571 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_26 == (MR_Integer) 2);
#line 571 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 571 "modecheck_call.m"
                  }
#line 571 "modecheck_call.m"
              }
#line 539 "modecheck_call.m"
          }
#line 539 "modecheck_call.m"
      }
#line 539 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 539 "modecheck_call.m"
  }
#line 66 "modecheck_call.m"
}

#line 56 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(
#line 56 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Modes_8,
#line 56 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Args0_9,
#line 56 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Args_10,
#line 56 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Det_11,
#line 56 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_12,
#line 56 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_15,
#line 56 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_16)
#line 56 "modecheck_call.m"
{
#line 297 "modecheck_call.m"
  {
#line 297 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 297 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo0_26;
#line 297 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ExpectedArgLives_27;
#line 297 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_28;
#line 297 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InstVarSub_29;
#line 297 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts0_30;
#line 297 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_31;
#line 297 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_32;
#line 297 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_33;

#line 298 "modecheck_call.m"
    *check_hlds__modecheck_call__Det_11 = (MR_Integer) 0;
#line 311 "modecheck_call.m"
    {
#line 311 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_call__ModuleInfo0_26);
    }
#line 312 "modecheck_call.m"
    {
#line 312 "modecheck_call.m"
      check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo0_26, check_hlds__modecheck_call__Modes_8, &check_hlds__modecheck_call__ExpectedArgLives_27);
    }
#line 313 "modecheck_call.m"
    {
#line 313 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__Args0_9, check_hlds__modecheck_call__ExpectedArgLives_27, (MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_32);
    }
#line 319 "modecheck_call.m"
    {
#line 319 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_26, check_hlds__modecheck_call__Modes_8, &check_hlds__modecheck_call__InitialInsts_28);
    }
#line 320 "modecheck_call.m"
    {
#line 320 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__Args0_9, check_hlds__modecheck_call__InitialInsts_28, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_29, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_32, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_33);
    }
#line 322 "modecheck_call.m"
    {
#line 322 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_26, check_hlds__modecheck_call__Modes_8, &check_hlds__modecheck_call__FinalInsts0_30);
    }
#line 323 "modecheck_call.m"
    {
#line 323 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_29, check_hlds__modecheck_call__FinalInsts0_30, &check_hlds__modecheck_call__FinalInsts_31);
    }
#line 324 "modecheck_call.m"
    {
#line 324 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__Args0_9, check_hlds__modecheck_call__InitialInsts_28, check_hlds__modecheck_call__FinalInsts_31, (MR_Integer) 0, check_hlds__modecheck_call__Args_10, check_hlds__modecheck_call__ExtraGoals_12, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_33, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_16);
    }
#line 297 "modecheck_call.m"
  }
#line 56 "modecheck_call.m"
}

#line 294 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
#line 294 "modecheck_call.m"
  MR_Box check_hlds__modecheck_call__closure_arg)
#line 294 "modecheck_call.m"
{
#line 294 "modecheck_call.m"
  {
#line 294 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 294 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__closure = check_hlds__modecheck_call__closure_arg;

#line 294 "modecheck_call.m"
    {
#line 294 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__294__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__closure, (MR_Integer) 4))));
    }
#line 294 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 294 "modecheck_call.m"
  }
#line 294 "modecheck_call.m"
}

#line 52 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0(
#line 52 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Modes_6,
#line 52 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Args0_7,
#line 52 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Args_8,
#line 52 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_12,
#line 52 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_13)
#line 52 "modecheck_call.m"
{
#line 291 "modecheck_call.m"
  {
#line 291 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ExtraGoals_11;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_15_15;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo0_29;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ExpectedArgLives_30;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_31;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InstVarSub_32;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts0_33;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_34;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_35;
#line 291 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_36;

#line 311 "modecheck_call.m"
    {
#line 311 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_call__ModuleInfo0_29);
    }
#line 312 "modecheck_call.m"
    {
#line 312 "modecheck_call.m"
      check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo0_29, check_hlds__modecheck_call__Modes_6, &check_hlds__modecheck_call__ExpectedArgLives_30);
    }
#line 313 "modecheck_call.m"
    {
#line 313 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__Args0_7, check_hlds__modecheck_call__ExpectedArgLives_30, (MR_Integer) 0, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_35);
    }
#line 319 "modecheck_call.m"
    {
#line 319 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_29, check_hlds__modecheck_call__Modes_6, &check_hlds__modecheck_call__InitialInsts_31);
    }
#line 320 "modecheck_call.m"
    {
#line 320 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__Args0_7, check_hlds__modecheck_call__InitialInsts_31, (MR_Integer) 0, &check_hlds__modecheck_call__InstVarSub_32, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_35, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_36);
    }
#line 322 "modecheck_call.m"
    {
#line 322 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_29, check_hlds__modecheck_call__Modes_6, &check_hlds__modecheck_call__FinalInsts0_33);
    }
#line 323 "modecheck_call.m"
    {
#line 323 "modecheck_call.m"
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_32, check_hlds__modecheck_call__FinalInsts0_33, &check_hlds__modecheck_call__FinalInsts_34);
    }
#line 324 "modecheck_call.m"
    {
#line 324 "modecheck_call.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__Args0_7, check_hlds__modecheck_call__InitialInsts_31, check_hlds__modecheck_call__FinalInsts_34, (MR_Integer) 0, check_hlds__modecheck_call__Args_8, &check_hlds__modecheck_call__ExtraGoals_11, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_36, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_13);
    }
#line 294 "modecheck_call.m"
    {
#line 294 "modecheck_call.m"
      check_hlds__modecheck_call__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 294 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[0]));
#line 294 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 1) = ((MR_Box) (check_hlds__modecheck_call__modecheck_event_call_5_p_0_1));
#line 294 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 294 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 3) = ((MR_Box) (check_hlds__modecheck_call__ExtraGoals_11));
#line 294 "modecheck_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_15_15, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "modecheck_call.m"
    }
#line 294 "modecheck_call.m"
    {
#line 294 "modecheck_call.m"
      mercury__require__expect_4_p_0(check_hlds__modecheck_call__V_15_15, (MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_event_call\'/5", (MR_String) "ExtraGoals");
    }
#line 291 "modecheck_call.m"
  }
#line 52 "modecheck_call.m"
}

#line 47 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0(
#line 47 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredOrFunc_10,
#line 47 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredVar_11,
#line 47 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Args0_12,
#line 47 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Args_13,
#line 47 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Modes_14,
#line 47 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__Det_15,
#line 47 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_16,
#line 47 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42,
#line 47 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43)
#line 47 "modecheck_call.m"
{
#line 220 "modecheck_call.m"
  {
#line 220 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 220 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InstMap0_18;
#line 220 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredVarInst0_19;
#line 220 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModuleInfo0_20;
#line 220 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredVarInst_21;
#line 220 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Arity_22;
#line 277 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ModesPrime_31;
#line 277 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__DetPrime_33;
#line 233 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_59_59;
#line 233 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__HOInstInfo_24;
#line 233 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__PredInstInfo_25;
#line 233 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_63_63;
#line 233 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__V_64_64;
#line 246 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_32_32;

#line 223 "modecheck_call.m"
    {
#line 223 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__InstMap0_18);
    }
#line 224 "modecheck_call.m"
    {
#line 224 "modecheck_call.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_call__InstMap0_18, check_hlds__modecheck_call__PredVar_11, &check_hlds__modecheck_call__PredVarInst0_19);
    }
#line 225 "modecheck_call.m"
    {
#line 225 "modecheck_call.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__ModuleInfo0_20);
    }
#line 226 "modecheck_call.m"
    {
#line 226 "modecheck_call.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_call__ModuleInfo0_20, check_hlds__modecheck_call__PredVarInst0_19, &check_hlds__modecheck_call__PredVarInst_21);
    }
#line 227 "modecheck_call.m"
    {
#line 227 "modecheck_call.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_call_scalar_common_1[0], check_hlds__modecheck_call__Args0_12, &check_hlds__modecheck_call__Arity_22);
    }
#line 231 "modecheck_call.m"
    if (((MR_tag((MR_Word) check_hlds__modecheck_call__PredVarInst_21)) == (MR_mktag((MR_Integer) 2))))
#line 232 "modecheck_call.m"
      {
#line 232 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call___Uniq_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 0)));

#line 232 "modecheck_call.m"
        check_hlds__modecheck_call__HOInstInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 1)));
#line 232 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 232 "modecheck_call.m"
      }
#line 231 "modecheck_call.m"
    else
#line 231 "modecheck_call.m"
    if (((((MR_tag((MR_Word) check_hlds__modecheck_call__PredVarInst_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 230 "modecheck_call.m"
      {
#line 230 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call___Uniq_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 1)));

#line 230 "modecheck_call.m"
        check_hlds__modecheck_call__HOInstInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 2)));
#line 230 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 230 "modecheck_call.m"
      }
#line 231 "modecheck_call.m"
    else
#line 231 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = MR_FALSE;
#line 233 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 233 "modecheck_call.m"
      {
#line 236 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HOInstInfo_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "modecheck_call.m"
          {
#line 239 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__TypeCtorInfo_58_58;
#line 239 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__VarTypes_26;
#line 239 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Type_27;
#line 239 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ArgTypes_30;
#line 239 "modecheck_call.m"
            MR_Integer check_hlds__modecheck_call__V_45_45;
#line 239 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_62_62;
#line 242 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_28_28;

#line 240 "modecheck_call.m"
            {
#line 240 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__VarTypes_26);
            }
#line 241 "modecheck_call.m"
            {
#line 241 "modecheck_call.m"
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_call__VarTypes_26, check_hlds__modecheck_call__PredVar_11, &check_hlds__modecheck_call__Type_27);
            }
#line 242 "modecheck_call.m"
            {
#line 242 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_call__Type_27, &check_hlds__modecheck_call__V_28_28, &check_hlds__modecheck_call__V_62_62, &check_hlds__modecheck_call__ArgTypes_30);
            }
#line 239 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 239 "modecheck_call.m"
              {
#line 242 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = ((MR_Integer) 1 == check_hlds__modecheck_call__V_62_62);
#line 239 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 239 "modecheck_call.m"
                  {
#line 4803 "check_hlds.modecheck_call.c"
                    check_hlds__modecheck_call__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 244 "modecheck_call.m"
                    {
#line 244 "modecheck_call.m"
                      check_hlds__modecheck_call__V_45_45 = mercury__list__length_1_f_0(check_hlds__modecheck_call__TypeCtorInfo_58_58, check_hlds__modecheck_call__ArgTypes_30);
                    }
#line 243 "modecheck_call.m"
                    {
#line 243 "modecheck_call.m"
                      check_hlds__modecheck_call__PredInstInfo_25 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__modecheck_call__V_45_45);
                    }
#line 243 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 239 "modecheck_call.m"
                  }
#line 239 "modecheck_call.m"
              }
#line 239 "modecheck_call.m"
          }
#line 236 "modecheck_call.m"
        else
#line 235 "modecheck_call.m"
          {
#line 235 "modecheck_call.m"
            check_hlds__modecheck_call__PredInstInfo_25 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_call__HOInstInfo_24), (MR_Integer) 1);
#line 235 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 235 "modecheck_call.m"
          }
#line 233 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 233 "modecheck_call.m"
          {
#line 246 "modecheck_call.m"
            check_hlds__modecheck_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__PredInstInfo_25, (MR_Integer) 0)));
#line 246 "modecheck_call.m"
            check_hlds__modecheck_call__ModesPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__PredInstInfo_25, (MR_Integer) 1)));
#line 246 "modecheck_call.m"
            check_hlds__modecheck_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__PredInstInfo_25, (MR_Integer) 2)));
#line 246 "modecheck_call.m"
            check_hlds__modecheck_call__DetPrime_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__PredInstInfo_25, (MR_Integer) 3)));
#line 246 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__PredOrFunc_10 == check_hlds__modecheck_call__V_63_63);
#line 233 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 233 "modecheck_call.m"
              {
#line 4851 "check_hlds.modecheck_call.c"
                check_hlds__modecheck_call__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 247 "modecheck_call.m"
                {
#line 247 "modecheck_call.m"
                  mercury__list__length_2_p_0(check_hlds__modecheck_call__TypeCtorInfo_59_59, check_hlds__modecheck_call__ModesPrime_31, &check_hlds__modecheck_call__V_64_64);
                }
#line 247 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Arity_22 == check_hlds__modecheck_call__V_64_64);
#line 233 "modecheck_call.m"
              }
#line 233 "modecheck_call.m"
          }
#line 233 "modecheck_call.m"
      }
#line 277 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 263 "modecheck_call.m"
      {
#line 263 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__A_34;
#line 263 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__B_35;
#line 263 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__Reason_36;

#line 252 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__PredVarInst_21)) == (MR_mktag((MR_Integer) 2)));
#line 252 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 252 "modecheck_call.m"
          {
#line 252 "modecheck_call.m"
            check_hlds__modecheck_call__A_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 0)));
#line 252 "modecheck_call.m"
            check_hlds__modecheck_call__B_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_call__PredVarInst_21, (MR_Integer) 1)));
#line 253 "modecheck_call.m"
            {
#line 253 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, check_hlds__modecheck_call__PredVar_11, &check_hlds__modecheck_call__Reason_36);
            }
#line 252 "modecheck_call.m"
          }
#line 263 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 255 "modecheck_call.m"
          {
#line 255 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__BetterPredVarInst_37;
#line 255 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__WaitingVars_38;
#line 255 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_46_46;

#line 255 "modecheck_call.m"
            {
#line 255 "modecheck_call.m"
              check_hlds__modecheck_call__BetterPredVarInst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 255 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__BetterPredVarInst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 255 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__BetterPredVarInst_37, 1) = ((MR_Box) (check_hlds__modecheck_call__A_34));
#line 255 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__BetterPredVarInst_37, 2) = ((MR_Box) (check_hlds__modecheck_call__B_35));
#line 255 "modecheck_call.m"
            }
#line 256 "modecheck_call.m"
            {
#line 256 "modecheck_call.m"
              check_hlds__modecheck_call__WaitingVars_38 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_call__PredVar_11);
            }
#line 257 "modecheck_call.m"
            {
#line 257 "modecheck_call.m"
              check_hlds__modecheck_call__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 257 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 257 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_call__Reason_36));
#line 257 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 2) = ((MR_Box) (check_hlds__modecheck_call__PredVar_11));
#line 257 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 3) = ((MR_Box) (check_hlds__modecheck_call__PredVarInst_21));
#line 257 "modecheck_call.m"
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_46_46, 4) = ((MR_Box) (check_hlds__modecheck_call__BetterPredVarInst_37));
#line 257 "modecheck_call.m"
            }
#line 257 "modecheck_call.m"
            {
#line 257 "modecheck_call.m"
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_38, check_hlds__modecheck_call__V_46_46, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43);
            }
#line 259 "modecheck_call.m"
            *check_hlds__modecheck_call__Modes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 260 "modecheck_call.m"
            *check_hlds__modecheck_call__Det_15 = (MR_Integer) 6;
#line 261 "modecheck_call.m"
            *check_hlds__modecheck_call__Args_13 = check_hlds__modecheck_call__Args0_12;
#line 262 "modecheck_call.m"
            *check_hlds__modecheck_call__ExtraGoals_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 255 "modecheck_call.m"
          }
#line 263 "modecheck_call.m"
        else
#line 264 "modecheck_call.m"
          {
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_48_48;
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ModuleInfo0_74;
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ExpectedArgLives_75;
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InitialInsts_76;
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_77;
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__FinalInsts0_78;
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__FinalInsts_79;
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_80;
#line 264 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_81;
#line 270 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_65_65;
#line 270 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_40_40;

#line 264 "modecheck_call.m"
            *check_hlds__modecheck_call__Det_15 = check_hlds__modecheck_call__DetPrime_33;
#line 265 "modecheck_call.m"
            *check_hlds__modecheck_call__Modes_14 = check_hlds__modecheck_call__ModesPrime_31;
#line 311 "modecheck_call.m"
            {
#line 311 "modecheck_call.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__ModuleInfo0_74);
            }
#line 312 "modecheck_call.m"
            {
#line 312 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo0_74, *check_hlds__modecheck_call__Modes_14, &check_hlds__modecheck_call__ExpectedArgLives_75);
            }
#line 313 "modecheck_call.m"
            {
#line 313 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(check_hlds__modecheck_call__Args0_12, check_hlds__modecheck_call__ExpectedArgLives_75, (MR_Integer) 1, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_80);
            }
#line 319 "modecheck_call.m"
            {
#line 319 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_74, *check_hlds__modecheck_call__Modes_14, &check_hlds__modecheck_call__InitialInsts_76);
            }
#line 320 "modecheck_call.m"
            {
#line 320 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_call__Args0_12, check_hlds__modecheck_call__InitialInsts_76, (MR_Integer) 1, &check_hlds__modecheck_call__InstVarSub_77, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_22_80, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_81);
            }
#line 322 "modecheck_call.m"
            {
#line 322 "modecheck_call.m"
              check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo0_74, *check_hlds__modecheck_call__Modes_14, &check_hlds__modecheck_call__FinalInsts0_78);
            }
#line 323 "modecheck_call.m"
            {
#line 323 "modecheck_call.m"
              parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__modecheck_call__InstVarSub_77, check_hlds__modecheck_call__FinalInsts0_78, &check_hlds__modecheck_call__FinalInsts_79);
            }
#line 324 "modecheck_call.m"
            {
#line 324 "modecheck_call.m"
              check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__modecheck_call__Args0_12, check_hlds__modecheck_call__InitialInsts_76, check_hlds__modecheck_call__FinalInsts_79, (MR_Integer) 1, check_hlds__modecheck_call__Args_13, check_hlds__modecheck_call__ExtraGoals_16, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_23_81, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_48_48);
            }
#line 270 "modecheck_call.m"
            {
#line 270 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(*check_hlds__modecheck_call__Det_15, &check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__V_65_65);
            }
#line 270 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = ((MR_Integer) 0 == check_hlds__modecheck_call__V_65_65);
#line 273 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 271 "modecheck_call.m"
              {
#line 271 "modecheck_call.m"
                MR_Word check_hlds__modecheck_call__Instmap_41;

#line 271 "modecheck_call.m"
                {
#line 271 "modecheck_call.m"
                  hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_call__Instmap_41);
                }
#line 272 "modecheck_call.m"
                {
#line 272 "modecheck_call.m"
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_call__Instmap_41, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_48_48, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43);
                }
#line 271 "modecheck_call.m"
              }
#line 273 "modecheck_call.m"
            else
#line 273 "modecheck_call.m"
              *check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_48_48;
#line 264 "modecheck_call.m"
          }
#line 263 "modecheck_call.m"
      }
#line 277 "modecheck_call.m"
    else
#line 279 "modecheck_call.m"
      {
#line 279 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_52_52;
#line 279 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_53_53;
#line 279 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__WaitingVars_56;

#line 279 "modecheck_call.m"
        {
#line 279 "modecheck_call.m"
          check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_52_52);
        }
#line 280 "modecheck_call.m"
        {
#line 280 "modecheck_call.m"
          check_hlds__modecheck_call__WaitingVars_56 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_call__PredVar_11);
        }
#line 282 "modecheck_call.m"
        {
#line 282 "modecheck_call.m"
          check_hlds__modecheck_call__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 282 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 282 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 1) = ((MR_Box) (check_hlds__modecheck_call__PredOrFunc_10));
#line 282 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 2) = ((MR_Box) (check_hlds__modecheck_call__PredVar_11));
#line 282 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 3) = ((MR_Box) (check_hlds__modecheck_call__PredVarInst_21));
#line 282 "modecheck_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_call__V_53_53, 4) = ((MR_Box) (check_hlds__modecheck_call__Arity_22));
#line 282 "modecheck_call.m"
        }
#line 281 "modecheck_call.m"
        {
#line 281 "modecheck_call.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_call__WaitingVars_56, check_hlds__modecheck_call__V_53_53, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_43);
        }
#line 285 "modecheck_call.m"
        *check_hlds__modecheck_call__Modes_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "modecheck_call.m"
        *check_hlds__modecheck_call__Det_15 = (MR_Integer) 6;
#line 287 "modecheck_call.m"
        *check_hlds__modecheck_call__Args_13 = check_hlds__modecheck_call__Args0_12;
#line 288 "modecheck_call.m"
        *check_hlds__modecheck_call__ExtraGoals_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 279 "modecheck_call.m"
      }
#line 220 "modecheck_call.m"
  }
#line 47 "modecheck_call.m"
}

#line 42 "modecheck_call.m"
void MR_CALL 
check_hlds__modecheck_call__modecheck_call_pred_10_p_0(
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__PredId_11,
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__DeterminismKnown_12,
#line 42 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__ProcId0_13,
#line 42 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_14,
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars0_15,
#line 42 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ArgVars_16,
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call___GoalInfo_17,
#line 42 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__ExtraGoals_18,
#line 42 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54,
#line 42 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55)
#line 42 "modecheck_call.m"
{
#line 103 "modecheck_call.m"
  {
#line 103 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 103 "modecheck_call.m"
    {
#line 103 "modecheck_call.m"
      check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(check_hlds__modecheck_call__PredId_11, check_hlds__modecheck_call__DeterminismKnown_12, check_hlds__modecheck_call__ProcId0_13, check_hlds__modecheck_call__TheProcId_14, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
    }
#line 103 "modecheck_call.m"
  }
#line 42 "modecheck_call.m"
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
