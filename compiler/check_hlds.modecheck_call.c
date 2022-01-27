/*
** Automatically generated from `modecheck_call.m'
** by the Mercury compiler,
** version rotd-2014-09-30
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



#line 667 "modecheck_call.m"
struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1;
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4;
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5;
#line 671 "modecheck_call.m"
  MR_bool check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 675 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20;
#line 675 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23;
#line 679 "modecheck_call.m"
  jmp_buf check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_34_65;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_35_66;
#line 679 "modecheck_call.m"
  MR_Integer check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet0_61;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62;
#line 679 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_64_64;
#line 679 "modecheck_call.m"
  MR_Box check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34;
#line 667 "modecheck_call.m"
};


#line 208 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0;

#line 211 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1;

#line 214 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2;

#line 217 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3;

#line 220 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0[4];

#line 223 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0[4];

#line 226 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0[4];

#line 229 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 232 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 235 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 238 "check_hlds.modecheck_call.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0[3];

#line 241 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0;

#line 244 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[1];

#line 247 "check_hlds.modecheck_call.c"
static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[1];

#line 250 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0[1];

#line 253 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0[1];

#line 256 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0_10001(
#line 259 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 261 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2);

#line 264 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0_10001(
#line 267 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 269 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 271 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3);

#line 274 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0_10001(
#line 277 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 279 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2);

#line 282 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0_10001(
#line 285 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 287 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 289 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3);

#line 679 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
#line 679 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 679 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
#line 679 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 679 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
#line 679 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 679 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
#line 679 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg);

#line 667 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_1,
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Procs_4,
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_5,
#line 667 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_6,
#line 667 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheInstVarSub_7,
#line 667 "modecheck_call.m"
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

#line 661 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0(
#line 661 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 661 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 661 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3);

#line 661 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0(
#line 661 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_1,
#line 661 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2);

#line 768 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__compare_liveness_list_3_p_0(
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 768 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3);

#line 751 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__compare_inst_list_2_6_p_0(
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_1,
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__5_5,
#line 751 "modecheck_call.m"
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



#line 551 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0 = {
  (MR_String) "better",
  (MR_Integer) 0
};

#line 557 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1 = {
  (MR_String) "worse",
  (MR_Integer) 1
};

#line 563 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2 = {
  (MR_String) "same",
  (MR_Integer) 2
};

#line 569 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3 = {
  (MR_String) "incomparable",
  (MR_Integer) 3
};

#line 575 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_value_ordered_match_0[4] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3
};

#line 583 "check_hlds.modecheck_call.c"
static const MR_EnumFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__enum_name_ordered_match_0[4] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_3,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_2,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__enum_functor_desc_match_0_1
};

#line 591 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_match_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 599 "check_hlds.modecheck_call.c"
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

#line 620 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 628 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__modecheck_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 637 "check_hlds.modecheck_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 645 "check_hlds.modecheck_call.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_proc_mode_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_call__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

#line 652 "check_hlds.modecheck_call.c"
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

#line 667 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0[1] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

#line 672 "check_hlds.modecheck_call.c"
static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_proc_mode_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_proc_mode_0_0
  }
};

#line 681 "check_hlds.modecheck_call.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_proc_mode_0[1] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_proc_mode_0_0
};

#line 686 "check_hlds.modecheck_call.c"
static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_proc_mode_0[1] = {
  (MR_Integer) 0
};

#line 691 "check_hlds.modecheck_call.c"
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

#line 712 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0_10001(
#line 715 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 717 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2)
#line 719 "check_hlds.modecheck_call.c"
{
#line 721 "check_hlds.modecheck_call.c"
  {
#line 723 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 726 "check_hlds.modecheck_call.c"
    {
#line 728 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call____Unify____match_0_0(((MR_Word) check_hlds__modecheck_call__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2));
    }
#line 731 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 733 "check_hlds.modecheck_call.c"
  }
#line 735 "check_hlds.modecheck_call.c"
}

#line 738 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0_10001(
#line 741 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 743 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 745 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3)
#line 747 "check_hlds.modecheck_call.c"
{
#line 749 "check_hlds.modecheck_call.c"
  {
#line 751 "check_hlds.modecheck_call.c"
    MR_Word check_hlds__modecheck_call__conv0_HeadVar__1_1;

#line 754 "check_hlds.modecheck_call.c"
    {
#line 756 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call____Compare____match_0_0(&check_hlds__modecheck_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_3));
    }
#line 759 "check_hlds.modecheck_call.c"
    *check_hlds__modecheck_call__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_call__conv0_HeadVar__1_1));
#line 761 "check_hlds.modecheck_call.c"
  }
#line 763 "check_hlds.modecheck_call.c"
}

#line 766 "check_hlds.modecheck_call.c"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____proc_mode_0_0_10001(
#line 769 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_1,
#line 771 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2)
#line 773 "check_hlds.modecheck_call.c"
{
#line 775 "check_hlds.modecheck_call.c"
  {
#line 777 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 780 "check_hlds.modecheck_call.c"
    {
#line 782 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call____Unify____proc_mode_0_0(((MR_Word) check_hlds__modecheck_call__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2));
    }
#line 785 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 787 "check_hlds.modecheck_call.c"
  }
#line 789 "check_hlds.modecheck_call.c"
}

#line 792 "check_hlds.modecheck_call.c"
static void MR_CALL 
check_hlds__modecheck_call____Compare____proc_mode_0_0_10001(
#line 795 "check_hlds.modecheck_call.c"
  MR_Box * check_hlds__modecheck_call__wrapper_arg_1,
#line 797 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_2,
#line 799 "check_hlds.modecheck_call.c"
  MR_Box check_hlds__modecheck_call__wrapper_arg_3)
#line 801 "check_hlds.modecheck_call.c"
{
#line 803 "check_hlds.modecheck_call.c"
  {
#line 805 "check_hlds.modecheck_call.c"
    MR_Word check_hlds__modecheck_call__conv0_HeadVar__1_1;

#line 808 "check_hlds.modecheck_call.c"
    {
#line 810 "check_hlds.modecheck_call.c"
      check_hlds__modecheck_call____Compare____proc_mode_0_0(&check_hlds__modecheck_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_call__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_call__wrapper_arg_3));
    }
#line 813 "check_hlds.modecheck_call.c"
    *check_hlds__modecheck_call__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_call__conv0_HeadVar__1_1));
#line 815 "check_hlds.modecheck_call.c"
  }
#line 817 "check_hlds.modecheck_call.c"
}

#line 679 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
#line 679 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 679 "modecheck_call.m"
{
#line 679 "modecheck_call.m"
  {
#line 679 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 679 "modecheck_call.m"
    MR_builtin_longjmp((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 679 "modecheck_call.m"
  }
#line 679 "modecheck_call.m"
}

#line 679 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
#line 679 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 679 "modecheck_call.m"
{
#line 679 "modecheck_call.m"
  {
#line 679 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 679 "modecheck_call.m"
    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34 = ((MR_Word) (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34);
#line 679 "modecheck_call.m"
    {
#line 679 "modecheck_call.m"
      check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(check_hlds__modecheck_call__env_ptr);
#line 679 "modecheck_call.m"
      return;
    }
#line 679 "modecheck_call.m"
  }
#line 679 "modecheck_call.m"
}

#line 679 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
#line 679 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 679 "modecheck_call.m"
{
#line 679 "modecheck_call.m"
  {
#line 679 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 679 "modecheck_call.m"
    {
#line 679 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__V_31_31;
#line 679 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__V_32_32;
#line 702 "modecheck_call.m"
      MR_Box check_hlds__modecheck_call__conv1_ProcInfo_44;
#line 703 "modecheck_call.m"
      MR_Box check_hlds__modecheck_call__conv2_OtherProcInfo_45;
#line 714 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call___ArgLives_54;
#line 747 "modecheck_call.m"
      MR_Word check_hlds__modecheck_call__Result0_73;

#line 679 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 0)));
#line 679 "modecheck_call.m"
      check_hlds__modecheck_call__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 1)));
#line 679 "modecheck_call.m"
      check_hlds__modecheck_call__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_34_34, (MR_Integer) 2)));
#line 680 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 = (MR_Integer) 0;
#line 900 "check_hlds.modecheck_call.c"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_34_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 902 "check_hlds.modecheck_call.c"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_35_66 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 702 "modecheck_call.m"
      {
#line 702 "modecheck_call.m"
        mercury__map__lookup_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_34_65, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_35_66, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_30)), &check_hlds__modecheck_call__conv1_ProcInfo_44);
      }
#line 702 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44 = ((MR_Word) check_hlds__modecheck_call__conv1_ProcInfo_44);
#line 703 "modecheck_call.m"
      {
#line 703 "modecheck_call.m"
        mercury__map__lookup_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_34_65, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_35_66, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20)), &check_hlds__modecheck_call__conv2_OtherProcInfo_45);
      }
#line 703 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45 = ((MR_Word) check_hlds__modecheck_call__conv2_OtherProcInfo_45);
#line 706 "modecheck_call.m"
      {
#line 706 "modecheck_call.m"
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46);
      }
#line 707 "modecheck_call.m"
      {
#line 707 "modecheck_call.m"
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47);
      }
#line 708 "modecheck_call.m"
      {
#line 708 "modecheck_call.m"
        check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48);
      }
#line 709 "modecheck_call.m"
      {
#line 709 "modecheck_call.m"
        check_hlds__mode_info__mode_info_get_var_types_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49);
      }
#line 710 "modecheck_call.m"
      {
#line 710 "modecheck_call.m"
        parse_tree__prog_data__lookup_var_types_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_49, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50);
      }
#line 711 "modecheck_call.m"
      {
#line 711 "modecheck_call.m"
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51);
      }
#line 712 "modecheck_call.m"
      {
#line 712 "modecheck_call.m"
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52);
      }
#line 714 "modecheck_call.m"
      {
#line 714 "modecheck_call.m"
        check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53, &check_hlds__modecheck_call___ArgLives_54);
      }
#line 716 "modecheck_call.m"
      {
#line 716 "modecheck_call.m"
        MR_Word base;
#line 716 "modecheck_call.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 716 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_64_64 = base;
#line 716 "modecheck_call.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_53));
#line 716 "modecheck_call.m"
      }
#line 743 "modecheck_call.m"
      {
#line 743 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_51, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_52, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_64_64, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_50, &check_hlds__modecheck_call__Result0_73);
      }
#line 747 "modecheck_call.m"
      if ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 746 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 = check_hlds__modecheck_call__Result0_73;
#line 747 "modecheck_call.m"
      else
#line 748 "modecheck_call.m"
        {
#line 748 "modecheck_call.m"
          {
#line 748 "modecheck_call.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
#line 748 "modecheck_call.m"
            return;
          }
#line 748 "modecheck_call.m"
        }
#line 719 "modecheck_call.m"
      {
#line 719 "modecheck_call.m"
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_46, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56);
      }
#line 720 "modecheck_call.m"
      {
#line 720 "modecheck_call.m"
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_48, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_47, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57);
      }
#line 721 "modecheck_call.m"
      {
#line 721 "modecheck_call.m"
        check_hlds__modecheck_call__compare_liveness_list_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58);
      }
#line 724 "modecheck_call.m"
      {
#line 724 "modecheck_call.m"
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_44, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59);
      }
#line 725 "modecheck_call.m"
      {
#line 725 "modecheck_call.m"
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_45, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60);
      }
#line 726 "modecheck_call.m"
      {
#line 726 "modecheck_call.m"
        check_hlds__det_report__compare_determinisms_3_p_0((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet0_61);
      }
#line 728 "modecheck_call.m"
      if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet0_61 == (MR_Integer) 2))
#line 728 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62 = (MR_Integer) 1;
#line 728 "modecheck_call.m"
      else
#line 728 "modecheck_call.m"
        if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet0_61 == (MR_Integer) 1))
#line 729 "modecheck_call.m"
          (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62 = (MR_Integer) 2;
#line 728 "modecheck_call.m"
        else
#line 727 "modecheck_call.m"
          (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62 = (MR_Integer) 0;
#line 1036 "check_hlds.modecheck_call.c"
      if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 == (MR_Integer) 0))
#line 1038 "check_hlds.modecheck_call.c"
        if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 0))
#line 1040 "check_hlds.modecheck_call.c"
          {
#line 680 "modecheck_call.m"
            (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 1044 "check_hlds.modecheck_call.c"
          }
#line 1046 "check_hlds.modecheck_call.c"
        else
#line 1048 "check_hlds.modecheck_call.c"
          if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 3))
#line 1050 "check_hlds.modecheck_call.c"
            {
#line 680 "modecheck_call.m"
              (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1054 "check_hlds.modecheck_call.c"
            }
#line 1056 "check_hlds.modecheck_call.c"
          else
#line 1058 "check_hlds.modecheck_call.c"
            if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 2))
#line 1060 "check_hlds.modecheck_call.c"
              {
#line 680 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 1064 "check_hlds.modecheck_call.c"
              }
#line 1066 "check_hlds.modecheck_call.c"
            else
#line 1068 "check_hlds.modecheck_call.c"
              {
#line 680 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1072 "check_hlds.modecheck_call.c"
              }
#line 1074 "check_hlds.modecheck_call.c"
      else
#line 1076 "check_hlds.modecheck_call.c"
        if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 == (MR_Integer) 3))
#line 1078 "check_hlds.modecheck_call.c"
          {
#line 680 "modecheck_call.m"
            (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1082 "check_hlds.modecheck_call.c"
          }
#line 1084 "check_hlds.modecheck_call.c"
        else
#line 1086 "check_hlds.modecheck_call.c"
          if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 == (MR_Integer) 2))
#line 796 "modecheck_call.m"
            if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 0))
#line 796 "modecheck_call.m"
              {
#line 680 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 0);
#line 796 "modecheck_call.m"
              }
#line 796 "modecheck_call.m"
            else
#line 796 "modecheck_call.m"
              if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 3))
#line 799 "modecheck_call.m"
                {
#line 680 "modecheck_call.m"
                  (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 799 "modecheck_call.m"
                }
#line 796 "modecheck_call.m"
              else
#line 796 "modecheck_call.m"
                if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 2))
#line 680 "modecheck_call.m"
                  (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_62);
#line 796 "modecheck_call.m"
                else
#line 797 "modecheck_call.m"
                  {
#line 680 "modecheck_call.m"
                    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 797 "modecheck_call.m"
                  }
#line 1120 "check_hlds.modecheck_call.c"
          else
#line 1122 "check_hlds.modecheck_call.c"
            if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 0))
#line 1124 "check_hlds.modecheck_call.c"
              {
#line 680 "modecheck_call.m"
                (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1128 "check_hlds.modecheck_call.c"
              }
#line 1130 "check_hlds.modecheck_call.c"
            else
#line 1132 "check_hlds.modecheck_call.c"
              if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 3))
#line 1134 "check_hlds.modecheck_call.c"
                {
#line 680 "modecheck_call.m"
                  (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 3);
#line 1138 "check_hlds.modecheck_call.c"
                }
#line 1140 "check_hlds.modecheck_call.c"
              else
#line 1142 "check_hlds.modecheck_call.c"
                if (((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58 == (MR_Integer) 2))
#line 1144 "check_hlds.modecheck_call.c"
                  {
#line 680 "modecheck_call.m"
                    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 1148 "check_hlds.modecheck_call.c"
                  }
#line 1150 "check_hlds.modecheck_call.c"
                else
#line 1152 "check_hlds.modecheck_call.c"
                  {
#line 680 "modecheck_call.m"
                    (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__V_35_35 == (MR_Integer) 1);
#line 1156 "check_hlds.modecheck_call.c"
                  }
#line 1158 "check_hlds.modecheck_call.c"
      if ((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1160 "check_hlds.modecheck_call.c"
        {
#line 1162 "check_hlds.modecheck_call.c"
          check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(check_hlds__modecheck_call__env_ptr);
#line 1164 "check_hlds.modecheck_call.c"
          return;
        }
#line 679 "modecheck_call.m"
    }
#line 679 "modecheck_call.m"
  }
#line 679 "modecheck_call.m"
}

#line 679 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
#line 679 "modecheck_call.m"
  void * check_hlds__modecheck_call__env_ptr_arg)
#line 679 "modecheck_call.m"
{
#line 679 "modecheck_call.m"
  {
#line 679 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__modecheck_call__env_ptr = (struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__modecheck_call__env_ptr_arg;

#line 679 "modecheck_call.m"
    if (MR_builtin_setjmp((check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 679 "modecheck_call.m"
      {
#line 679 "modecheck_call.m"
        {
#line 679 "modecheck_call.m"
          {
#line 679 "modecheck_call.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_proc_mode_0, &(check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_V_34_34, (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23, check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3, check_hlds__modecheck_call__env_ptr);
          }
#line 679 "modecheck_call.m"
        }
#line 679 "modecheck_call.m"
        (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 679 "modecheck_call.m"
      }
#line 679 "modecheck_call.m"
    else
#line 679 "modecheck_call.m"
      (check_hlds__modecheck_call__env_ptr)->check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 679 "modecheck_call.m"
  }
#line 679 "modecheck_call.m"
}

#line 667 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModeInfo_1,
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__Procs_4,
#line 667 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ArgVars_5,
#line 667 "modecheck_call.m"
  MR_Integer * check_hlds__modecheck_call__TheProcId_6,
#line 667 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheInstVarSub_7,
#line 667 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__TheArgModes_8)
#line 667 "modecheck_call.m"
{
#line 667 "modecheck_call.m"
  {
#line 667 "modecheck_call.m"
    struct check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s check_hlds__modecheck_call__env;

#line 667 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1 = check_hlds__modecheck_call__ModeInfo_1;
#line 667 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4 = check_hlds__modecheck_call__Procs_4;
#line 667 "modecheck_call.m"
    (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5 = check_hlds__modecheck_call__ArgVars_5;
#line 671 "modecheck_call.m"
    while (MR_TRUE)
#line 671 "modecheck_call.m"
      {
#line 671 "modecheck_call.m"
        /* tailcall optimized into a loop */
#line 671 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "modecheck_call.m"
          {
#line 672 "modecheck_call.m"
            {
#line 672 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.choose_best_match\'/8", (MR_String) "no best match");
#line 672 "modecheck_call.m"
              return;
            }
#line 671 "modecheck_call.m"
          }
#line 671 "modecheck_call.m"
        else
#line 675 "modecheck_call.m"
          {
#line 675 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__InstVarSub_21;
#line 675 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__ArgModes_22;
#line 675 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));

#line 674 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 674 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 0)));
#line 674 "modecheck_call.m"
            check_hlds__modecheck_call__InstVarSub_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 1)));
#line 674 "modecheck_call.m"
            check_hlds__modecheck_call__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__V_33_33, (MR_Integer) 2)));
#line 679 "modecheck_call.m"
            {
#line 679 "modecheck_call.m"
              check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(&check_hlds__modecheck_call__env);
            }
#line 678 "modecheck_call.m"
            (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = !((check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 686 "modecheck_call.m"
            if ((check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 683 "modecheck_call.m"
              {
#line 683 "modecheck_call.m"
                *check_hlds__modecheck_call__TheProcId_6 = (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_20;
#line 684 "modecheck_call.m"
                *check_hlds__modecheck_call__TheInstVarSub_7 = check_hlds__modecheck_call__InstVarSub_21;
#line 685 "modecheck_call.m"
                *check_hlds__modecheck_call__TheArgModes_8 = check_hlds__modecheck_call__ArgModes_22;
#line 683 "modecheck_call.m"
              }
#line 686 "modecheck_call.m"
            else
#line 687 "modecheck_call.m"
              {
#line 687 "modecheck_call.m"
                /* direct tailcall eliminated */
#line 687 "modecheck_call.m"
                {
#line 687 "modecheck_call.m"
                  MR_Word check_hlds__modecheck_call__HeadVar__2__tmp_copy_2 = (check_hlds__modecheck_call__env).check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcIds_23;

#line 687 "modecheck_call.m"
                  check_hlds__modecheck_call__HeadVar__2_2 = check_hlds__modecheck_call__HeadVar__2__tmp_copy_2;
#line 687 "modecheck_call.m"
                }
#line 687 "modecheck_call.m"
                continue;
#line 687 "modecheck_call.m"
              }
#line 675 "modecheck_call.m"
          }
#line 671 "modecheck_call.m"
        break;
#line 671 "modecheck_call.m"
      }
#line 667 "modecheck_call.m"
  }
#line 667 "modecheck_call.m"
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
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__HeadVar__3_3, ((MR_Box) (check_hlds__modecheck_call__ProcId_23)), &check_hlds__modecheck_call__conv0_ProcInfo_31);
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
#line 422 "modecheck_call.m"
                check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_65_65 = check_hlds__modecheck_call__STATE_VARIABLE_WaitingVars_0_7;
#line 422 "modecheck_call.m"
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
#line 418 "modecheck_call.m"
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
#line 168 "modecheck_call.m"
              return;
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
#line 1979 "check_hlds.modecheck_call.c"
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
                  mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__modecheck_call__Procs_25, ((MR_Box) (*check_hlds__modecheck_call__TheProcId_14)), &check_hlds__modecheck_call__conv2_ProcInfo_83);
                }
#line 192 "modecheck_call.m"
                check_hlds__modecheck_call__ProcInfo_83 = ((MR_Word) check_hlds__modecheck_call__conv2_ProcInfo_83);
#line 193 "modecheck_call.m"
                {
#line 193 "modecheck_call.m"
                  check_hlds__modecheck_call__CalleeModeErrors_48 = hlds__hlds_pred__mode_errors_1_f_0(check_hlds__modecheck_call__ProcInfo_83);
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
#line 216 "modecheck_call.m"
              return;
            }
#line 174 "modecheck_call.m"
          }
#line 170 "modecheck_call.m"
      }
#line 103 "modecheck_call.m"
  }
#line 41 "modecheck_call.m"
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
      return check_hlds__modecheck_call__succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(check_hlds__modecheck_call__ExtraGoals_11, check_hlds__modecheck_call__HeadVar__2_19);
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
#line 2187 "check_hlds.modecheck_call.c"
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
#line 2213 "check_hlds.modecheck_call.c"
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
#line 2233 "check_hlds.modecheck_call.c"
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
#line 361 "modecheck_call.m"
                  return;
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
        MR_Word check_hlds__modecheck_call__TypeInfo_12_12;
#line 361 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__TypeInfo_13_13;
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

#line 2308 "check_hlds.modecheck_call.c"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__V_3_3 == check_hlds__modecheck_call__V_6_6);
#line 361 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 361 "modecheck_call.m"
          {
#line 2314 "check_hlds.modecheck_call.c"
            check_hlds__modecheck_call__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_call_scalar_common_2[0];
#line 2316 "check_hlds.modecheck_call.c"
            {
#line 2318 "check_hlds.modecheck_call.c"
              check_hlds__modecheck_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_call__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_call__V_4_4)), ((MR_Box) (check_hlds__modecheck_call__V_7_7)));
            }
#line 361 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 361 "modecheck_call.m"
              {
#line 2325 "check_hlds.modecheck_call.c"
                check_hlds__modecheck_call__TypeInfo_13_13 = (MR_Word) &check_hlds__modecheck_call_scalar_common_1[2];
#line 2327 "check_hlds.modecheck_call.c"
                {
#line 2329 "check_hlds.modecheck_call.c"
                  return check_hlds__modecheck_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_call__TypeInfo_13_13, ((MR_Box) (check_hlds__modecheck_call__V_5_5)), ((MR_Box) (check_hlds__modecheck_call__V_8_8)));
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

#line 661 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call____Compare____match_0_0(
#line 661 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__1_1,
#line 661 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 661 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3)
#line 661 "modecheck_call.m"
{
#line 661 "modecheck_call.m"
  {
#line 661 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 661 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Cast_HeadVar1_4 = (MR_Integer) check_hlds__modecheck_call__HeadVar__2_2;
#line 661 "modecheck_call.m"
    MR_Integer check_hlds__modecheck_call__Cast_HeadVar2_5 = (MR_Integer) check_hlds__modecheck_call__HeadVar__3_3;

#line 661 "modecheck_call.m"
    {
#line 661 "modecheck_call.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__modecheck_call__HeadVar__1_1, check_hlds__modecheck_call__Cast_HeadVar1_4, check_hlds__modecheck_call__Cast_HeadVar2_5);
#line 661 "modecheck_call.m"
      return;
    }
#line 661 "modecheck_call.m"
  }
#line 661 "modecheck_call.m"
}

#line 661 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____match_0_0(
#line 661 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_1,
#line 661 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2)
#line 661 "modecheck_call.m"
{
#line 2386 "check_hlds.modecheck_call.c"
  {
#line 2388 "check_hlds.modecheck_call.c"
    MR_bool check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__2_1 == check_hlds__modecheck_call__HeadVar__2_2);

#line 2391 "check_hlds.modecheck_call.c"
    return check_hlds__modecheck_call__succeeded;
#line 2393 "check_hlds.modecheck_call.c"
  }
#line 661 "modecheck_call.m"
}

#line 768 "modecheck_call.m"
static void MR_CALL 
check_hlds__modecheck_call__compare_liveness_list_3_p_0(
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__1_1,
#line 768 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 768 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__3_3)
#line 768 "modecheck_call.m"
{
#line 771 "modecheck_call.m"
  {
#line 771 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 771 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "modecheck_call.m"
      if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "modecheck_call.m"
        *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 2;
#line 771 "modecheck_call.m"
      else
#line 774 "modecheck_call.m"
        {
#line 775 "modecheck_call.m"
          {
#line 775 "modecheck_call.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_liveness_list\'/3", (MR_String) "length mismatch");
#line 775 "modecheck_call.m"
            return;
          }
#line 774 "modecheck_call.m"
        }
#line 771 "modecheck_call.m"
    else
#line 771 "modecheck_call.m"
      {
#line 771 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 1)));
#line 771 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__1_1, (MR_Integer) 0)));

#line 771 "modecheck_call.m"
        if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
#line 771 "modecheck_call.m"
        else
#line 776 "modecheck_call.m"
          {
#line 776 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__LiveB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 776 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__LiveBs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 776 "modecheck_call.m"
            MR_Word check_hlds__modecheck_call__Result1_22;

#line 778 "modecheck_call.m"
            {
#line 778 "modecheck_call.m"
              check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__V_23_23, check_hlds__modecheck_call__LiveBs_19, &check_hlds__modecheck_call__Result1_22);
            }
#line 2471 "check_hlds.modecheck_call.c"
            if ((check_hlds__modecheck_call__V_24_24 == (MR_Integer) 1))
#line 2473 "check_hlds.modecheck_call.c"
              if ((check_hlds__modecheck_call__LiveB_18 == (MR_Integer) 1))
#line 813 "modecheck_call.m"
                *check_hlds__modecheck_call__HeadVar__3_3 = check_hlds__modecheck_call__Result1_22;
#line 2477 "check_hlds.modecheck_call.c"
              else
#line 805 "modecheck_call.m"
                if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 0))
#line 805 "modecheck_call.m"
                  *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 0;
#line 805 "modecheck_call.m"
                else
#line 805 "modecheck_call.m"
                  if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 3))
#line 808 "modecheck_call.m"
                    *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                  else
#line 805 "modecheck_call.m"
                    if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 2))
#line 806 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 0;
#line 805 "modecheck_call.m"
                    else
#line 807 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 3;
#line 2499 "check_hlds.modecheck_call.c"
            else
#line 2501 "check_hlds.modecheck_call.c"
              if ((check_hlds__modecheck_call__LiveB_18 == (MR_Integer) 1))
#line 805 "modecheck_call.m"
                if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 0))
#line 811 "modecheck_call.m"
                  *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                else
#line 805 "modecheck_call.m"
                  if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 3))
#line 812 "modecheck_call.m"
                    *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                  else
#line 805 "modecheck_call.m"
                    if ((check_hlds__modecheck_call__Result1_22 == (MR_Integer) 2))
#line 810 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 1;
#line 805 "modecheck_call.m"
                    else
#line 809 "modecheck_call.m"
                      *check_hlds__modecheck_call__HeadVar__3_3 = (MR_Integer) 1;
#line 2523 "check_hlds.modecheck_call.c"
              else
#line 813 "modecheck_call.m"
                *check_hlds__modecheck_call__HeadVar__3_3 = check_hlds__modecheck_call__Result1_22;
#line 776 "modecheck_call.m"
          }
#line 771 "modecheck_call.m"
      }
#line 771 "modecheck_call.m"
  }
#line 768 "modecheck_call.m"
}

#line 751 "modecheck_call.m"
static MR_bool MR_CALL 
check_hlds__modecheck_call__compare_inst_list_2_6_p_0(
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__ModuleInfo_1,
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__2_2,
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__3_3,
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__4_4,
#line 751 "modecheck_call.m"
  MR_Word check_hlds__modecheck_call__HeadVar__5_5,
#line 751 "modecheck_call.m"
  MR_Word * check_hlds__modecheck_call__HeadVar__6_6)
#line 751 "modecheck_call.m"
{
#line 755 "modecheck_call.m"
  {
#line 755 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 755 "modecheck_call.m"
    if ((check_hlds__modecheck_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 755 "modecheck_call.m"
      {
#line 755 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 755 "modecheck_call.m"
          {
#line 755 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 755 "modecheck_call.m"
              {
#line 755 "modecheck_call.m"
                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 2;
#line 755 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 755 "modecheck_call.m"
              }
#line 755 "modecheck_call.m"
          }
#line 755 "modecheck_call.m"
      }
#line 755 "modecheck_call.m"
    else
#line 755 "modecheck_call.m"
      {
#line 755 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__2_2, (MR_Integer) 0)));
#line 755 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_38_38;
#line 755 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_39_39;
#line 755 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_40_40;
#line 755 "modecheck_call.m"
        MR_Word check_hlds__modecheck_call__V_41_41;

#line 756 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 756 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 756 "modecheck_call.m"
          {
#line 756 "modecheck_call.m"
            check_hlds__modecheck_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 0)));
#line 756 "modecheck_call.m"
            check_hlds__modecheck_call__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__3_3, (MR_Integer) 1)));
#line 757 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 757 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 757 "modecheck_call.m"
              {
#line 757 "modecheck_call.m"
                check_hlds__modecheck_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__5_5, (MR_Integer) 0)));
#line 757 "modecheck_call.m"
                check_hlds__modecheck_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__5_5, (MR_Integer) 1)));
#line 755 "modecheck_call.m"
                if ((check_hlds__modecheck_call__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 757 "modecheck_call.m"
                  {
#line 757 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_20_20;
#line 757 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__B_mi_A_49;

#line 845 "modecheck_call.m"
                    {
#line 845 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                    }
#line 847 "modecheck_call.m"
                    if (check_hlds__modecheck_call__succeeded)
#line 846 "modecheck_call.m"
                      check_hlds__modecheck_call__B_mi_A_49 = (MR_Integer) 1;
#line 847 "modecheck_call.m"
                    else
#line 848 "modecheck_call.m"
                      check_hlds__modecheck_call__B_mi_A_49 = (MR_Integer) 0;
#line 759 "modecheck_call.m"
                    check_hlds__modecheck_call__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "modecheck_call.m"
                    {
#line 840 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                    }
#line 2650 "check_hlds.modecheck_call.c"
                    if (check_hlds__modecheck_call__succeeded)
#line 2652 "check_hlds.modecheck_call.c"
                      {
#line 2654 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result0_17;
#line 2656 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result1_18;

#line 851 "modecheck_call.m"
                        if ((check_hlds__modecheck_call__B_mi_A_49 == (MR_Integer) 0))
#line 850 "modecheck_call.m"
                          check_hlds__modecheck_call__Result0_17 = (MR_Integer) 0;
#line 851 "modecheck_call.m"
                        else
#line 853 "modecheck_call.m"
                          {
#line 853 "modecheck_call.m"
                            MR_Word check_hlds__modecheck_call__B_mf_A_55;

#line 903 "modecheck_call.m"
                            {
#line 903 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                            }
#line 907 "modecheck_call.m"
                            if (check_hlds__modecheck_call__succeeded)
#line 906 "modecheck_call.m"
                              check_hlds__modecheck_call__B_mf_A_55 = (MR_Integer) 1;
#line 907 "modecheck_call.m"
                            else
#line 908 "modecheck_call.m"
                              check_hlds__modecheck_call__B_mf_A_55 = (MR_Integer) 0;
#line 895 "modecheck_call.m"
                            {
#line 895 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                            }
#line 2688 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 911 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__B_mf_A_55 == (MR_Integer) 0))
#line 910 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_17 = (MR_Integer) 0;
#line 911 "modecheck_call.m"
                              else
#line 913 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_17 = (MR_Integer) 2;
#line 2698 "check_hlds.modecheck_call.c"
                            else
#line 911 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__B_mf_A_55 == (MR_Integer) 0))
#line 912 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_17 = (MR_Integer) 3;
#line 911 "modecheck_call.m"
                              else
#line 911 "modecheck_call.m"
                                check_hlds__modecheck_call__Result0_17 = (MR_Integer) 1;
#line 853 "modecheck_call.m"
                          }
#line 759 "modecheck_call.m"
                        {
#line 759 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_20_20, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_18);
                        }
#line 2715 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2717 "check_hlds.modecheck_call.c"
                          {
#line 805 "modecheck_call.m"
                            if ((check_hlds__modecheck_call__Result0_17 == (MR_Integer) 0))
#line 805 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 0))
#line 805 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 0;
#line 805 "modecheck_call.m"
                              else
#line 805 "modecheck_call.m"
                                if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 3))
#line 808 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                else
#line 805 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 2))
#line 806 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 0;
#line 805 "modecheck_call.m"
                                  else
#line 807 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                            else
#line 805 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__Result0_17 == (MR_Integer) 3))
#line 814 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                              else
#line 805 "modecheck_call.m"
                                if ((check_hlds__modecheck_call__Result0_17 == (MR_Integer) 2))
#line 813 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = check_hlds__modecheck_call__Result1_18;
#line 805 "modecheck_call.m"
                                else
#line 805 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 0))
#line 811 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                  else
#line 805 "modecheck_call.m"
                                    if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 3))
#line 812 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                    else
#line 805 "modecheck_call.m"
                                      if ((check_hlds__modecheck_call__Result1_18 == (MR_Integer) 2))
#line 810 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 805 "modecheck_call.m"
                                      else
#line 809 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 805 "modecheck_call.m"
                            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 2777 "check_hlds.modecheck_call.c"
                          }
#line 2779 "check_hlds.modecheck_call.c"
                      }
#line 2781 "check_hlds.modecheck_call.c"
                    else
#line 2783 "check_hlds.modecheck_call.c"
                      {
#line 2785 "check_hlds.modecheck_call.c"
                        MR_Word check_hlds__modecheck_call__Result1_79;

#line 759 "modecheck_call.m"
                        {
#line 759 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_20_20, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_79);
                        }
#line 2793 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2795 "check_hlds.modecheck_call.c"
                          {
#line 2797 "check_hlds.modecheck_call.c"
                            if ((check_hlds__modecheck_call__B_mi_A_49 == (MR_Integer) 0))
#line 814 "modecheck_call.m"
                              *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 2801 "check_hlds.modecheck_call.c"
                            else
#line 805 "modecheck_call.m"
                              if ((check_hlds__modecheck_call__Result1_79 == (MR_Integer) 0))
#line 811 "modecheck_call.m"
                                *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                              else
#line 805 "modecheck_call.m"
                                if ((check_hlds__modecheck_call__Result1_79 == (MR_Integer) 3))
#line 812 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                else
#line 805 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_79 == (MR_Integer) 2))
#line 810 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 805 "modecheck_call.m"
                                  else
#line 809 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 2823 "check_hlds.modecheck_call.c"
                            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 2825 "check_hlds.modecheck_call.c"
                          }
#line 2827 "check_hlds.modecheck_call.c"
                      }
#line 757 "modecheck_call.m"
                  }
#line 755 "modecheck_call.m"
                else
#line 762 "modecheck_call.m"
                  {
#line 762 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInst_26;
#line 762 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__ArgInsts_27;
#line 762 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__HeadVar__4_4, (MR_Integer) 0)));
#line 762 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_34_34;
#line 762 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__V_35_35;
#line 762 "modecheck_call.m"
                    MR_Word check_hlds__modecheck_call__B_mi_A_65;

#line 762 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_call__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 762 "modecheck_call.m"
                    if (check_hlds__modecheck_call__succeeded)
#line 762 "modecheck_call.m"
                      {
#line 762 "modecheck_call.m"
                        check_hlds__modecheck_call__ArgInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_33_33, (MR_Integer) 0)));
#line 762 "modecheck_call.m"
                        check_hlds__modecheck_call__ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_33_33, (MR_Integer) 1)));
#line 763 "modecheck_call.m"
                        {
#line 763 "modecheck_call.m"
                          check_hlds__modecheck_call__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "modecheck_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_34_34, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgInst_26));
#line 763 "modecheck_call.m"
                        }
#line 845 "modecheck_call.m"
                        {
#line 845 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                        }
#line 847 "modecheck_call.m"
                        if (check_hlds__modecheck_call__succeeded)
#line 846 "modecheck_call.m"
                          check_hlds__modecheck_call__B_mi_A_65 = (MR_Integer) 1;
#line 847 "modecheck_call.m"
                        else
#line 848 "modecheck_call.m"
                          check_hlds__modecheck_call__B_mi_A_65 = (MR_Integer) 0;
#line 764 "modecheck_call.m"
                        {
#line 764 "modecheck_call.m"
                          check_hlds__modecheck_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 764 "modecheck_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_call__ArgInsts_27));
#line 764 "modecheck_call.m"
                        }
#line 840 "modecheck_call.m"
                        {
#line 840 "modecheck_call.m"
                          check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                        }
#line 2892 "check_hlds.modecheck_call.c"
                        if (check_hlds__modecheck_call__succeeded)
#line 2894 "check_hlds.modecheck_call.c"
                          {
#line 2896 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result0_31;
#line 2898 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result1_32;

#line 851 "modecheck_call.m"
                            if ((check_hlds__modecheck_call__B_mi_A_65 == (MR_Integer) 0))
#line 850 "modecheck_call.m"
                              check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 851 "modecheck_call.m"
                            else
#line 853 "modecheck_call.m"
                              {
#line 853 "modecheck_call.m"
                                MR_Word check_hlds__modecheck_call__ArgInst_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_call__V_34_34, (MR_Integer) 0)));
#line 853 "modecheck_call.m"
                                MR_Word check_hlds__modecheck_call__Arg_mf_B_69;

#line 875 "modecheck_call.m"
                                {
#line 875 "modecheck_call.m"
                                  check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__ArgInst_67, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                }
#line 879 "modecheck_call.m"
                                if (check_hlds__modecheck_call__succeeded)
#line 878 "modecheck_call.m"
                                  check_hlds__modecheck_call__Arg_mf_B_69 = (MR_Integer) 1;
#line 879 "modecheck_call.m"
                                else
#line 880 "modecheck_call.m"
                                  check_hlds__modecheck_call__Arg_mf_B_69 = (MR_Integer) 0;
#line 867 "modecheck_call.m"
                                {
#line 867 "modecheck_call.m"
                                  check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__ArgInst_67, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                }
#line 2932 "check_hlds.modecheck_call.c"
                                if (check_hlds__modecheck_call__succeeded)
#line 2934 "check_hlds.modecheck_call.c"
                                  if ((check_hlds__modecheck_call__Arg_mf_B_69 == (MR_Integer) 0))
#line 882 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 2938 "check_hlds.modecheck_call.c"
                                  else
#line 2940 "check_hlds.modecheck_call.c"
                                    {
#line 2942 "check_hlds.modecheck_call.c"
                                      MR_Word check_hlds__modecheck_call__B_mf_A_71;

#line 903 "modecheck_call.m"
                                      {
#line 903 "modecheck_call.m"
                                        check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                      }
#line 907 "modecheck_call.m"
                                      if (check_hlds__modecheck_call__succeeded)
#line 906 "modecheck_call.m"
                                        check_hlds__modecheck_call__B_mf_A_71 = (MR_Integer) 1;
#line 907 "modecheck_call.m"
                                      else
#line 908 "modecheck_call.m"
                                        check_hlds__modecheck_call__B_mf_A_71 = (MR_Integer) 0;
#line 895 "modecheck_call.m"
                                      {
#line 895 "modecheck_call.m"
                                        check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                      }
#line 2963 "check_hlds.modecheck_call.c"
                                      if (check_hlds__modecheck_call__succeeded)
#line 911 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__B_mf_A_71 == (MR_Integer) 0))
#line 910 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 911 "modecheck_call.m"
                                        else
#line 913 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 2;
#line 2973 "check_hlds.modecheck_call.c"
                                      else
#line 911 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__B_mf_A_71 == (MR_Integer) 0))
#line 912 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 3;
#line 911 "modecheck_call.m"
                                        else
#line 911 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 2983 "check_hlds.modecheck_call.c"
                                    }
#line 2985 "check_hlds.modecheck_call.c"
                                else
#line 2987 "check_hlds.modecheck_call.c"
                                  if ((check_hlds__modecheck_call__Arg_mf_B_69 == (MR_Integer) 0))
#line 2989 "check_hlds.modecheck_call.c"
                                    {
#line 2991 "check_hlds.modecheck_call.c"
                                      MR_Word check_hlds__modecheck_call__B_mf_A_89;

#line 903 "modecheck_call.m"
                                      {
#line 903 "modecheck_call.m"
                                        check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                      }
#line 907 "modecheck_call.m"
                                      if (check_hlds__modecheck_call__succeeded)
#line 906 "modecheck_call.m"
                                        check_hlds__modecheck_call__B_mf_A_89 = (MR_Integer) 1;
#line 907 "modecheck_call.m"
                                      else
#line 908 "modecheck_call.m"
                                        check_hlds__modecheck_call__B_mf_A_89 = (MR_Integer) 0;
#line 895 "modecheck_call.m"
                                      {
#line 895 "modecheck_call.m"
                                        check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_call__V_37_37, check_hlds__modecheck_call__V_39_39, check_hlds__modecheck_call__V_41_41, check_hlds__modecheck_call__ModuleInfo_1);
                                      }
#line 3012 "check_hlds.modecheck_call.c"
                                      if (check_hlds__modecheck_call__succeeded)
#line 911 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__B_mf_A_89 == (MR_Integer) 0))
#line 910 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 0;
#line 911 "modecheck_call.m"
                                        else
#line 913 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 2;
#line 3022 "check_hlds.modecheck_call.c"
                                      else
#line 911 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__B_mf_A_89 == (MR_Integer) 0))
#line 912 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 3;
#line 911 "modecheck_call.m"
                                        else
#line 911 "modecheck_call.m"
                                          check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 3032 "check_hlds.modecheck_call.c"
                                    }
#line 3034 "check_hlds.modecheck_call.c"
                                  else
#line 883 "modecheck_call.m"
                                    check_hlds__modecheck_call__Result0_31 = (MR_Integer) 1;
#line 853 "modecheck_call.m"
                              }
#line 764 "modecheck_call.m"
                            {
#line 764 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_35_35, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_32);
                            }
#line 3045 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 3047 "check_hlds.modecheck_call.c"
                              {
#line 805 "modecheck_call.m"
                                if ((check_hlds__modecheck_call__Result0_31 == (MR_Integer) 0))
#line 805 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 0))
#line 805 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 0;
#line 805 "modecheck_call.m"
                                  else
#line 805 "modecheck_call.m"
                                    if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 3))
#line 808 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                    else
#line 805 "modecheck_call.m"
                                      if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 2))
#line 806 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 0;
#line 805 "modecheck_call.m"
                                      else
#line 807 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                else
#line 805 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result0_31 == (MR_Integer) 3))
#line 814 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                  else
#line 805 "modecheck_call.m"
                                    if ((check_hlds__modecheck_call__Result0_31 == (MR_Integer) 2))
#line 813 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = check_hlds__modecheck_call__Result1_32;
#line 805 "modecheck_call.m"
                                    else
#line 805 "modecheck_call.m"
                                      if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 0))
#line 811 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                      else
#line 805 "modecheck_call.m"
                                        if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 3))
#line 812 "modecheck_call.m"
                                          *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                        else
#line 805 "modecheck_call.m"
                                          if ((check_hlds__modecheck_call__Result1_32 == (MR_Integer) 2))
#line 810 "modecheck_call.m"
                                            *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 805 "modecheck_call.m"
                                          else
#line 809 "modecheck_call.m"
                                            *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 805 "modecheck_call.m"
                                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 3107 "check_hlds.modecheck_call.c"
                              }
#line 3109 "check_hlds.modecheck_call.c"
                          }
#line 3111 "check_hlds.modecheck_call.c"
                        else
#line 3113 "check_hlds.modecheck_call.c"
                          {
#line 3115 "check_hlds.modecheck_call.c"
                            MR_Word check_hlds__modecheck_call__Result1_94;

#line 764 "modecheck_call.m"
                            {
#line 764 "modecheck_call.m"
                              check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_1, check_hlds__modecheck_call__V_36_36, check_hlds__modecheck_call__V_38_38, check_hlds__modecheck_call__V_35_35, check_hlds__modecheck_call__V_40_40, &check_hlds__modecheck_call__Result1_94);
                            }
#line 3123 "check_hlds.modecheck_call.c"
                            if (check_hlds__modecheck_call__succeeded)
#line 3125 "check_hlds.modecheck_call.c"
                              {
#line 3127 "check_hlds.modecheck_call.c"
                                if ((check_hlds__modecheck_call__B_mi_A_65 == (MR_Integer) 0))
#line 814 "modecheck_call.m"
                                  *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 3131 "check_hlds.modecheck_call.c"
                                else
#line 805 "modecheck_call.m"
                                  if ((check_hlds__modecheck_call__Result1_94 == (MR_Integer) 0))
#line 811 "modecheck_call.m"
                                    *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                  else
#line 805 "modecheck_call.m"
                                    if ((check_hlds__modecheck_call__Result1_94 == (MR_Integer) 3))
#line 812 "modecheck_call.m"
                                      *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 3;
#line 805 "modecheck_call.m"
                                    else
#line 805 "modecheck_call.m"
                                      if ((check_hlds__modecheck_call__Result1_94 == (MR_Integer) 2))
#line 810 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 805 "modecheck_call.m"
                                      else
#line 809 "modecheck_call.m"
                                        *check_hlds__modecheck_call__HeadVar__6_6 = (MR_Integer) 1;
#line 3153 "check_hlds.modecheck_call.c"
                                check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 3155 "check_hlds.modecheck_call.c"
                              }
#line 3157 "check_hlds.modecheck_call.c"
                          }
#line 762 "modecheck_call.m"
                      }
#line 762 "modecheck_call.m"
                  }
#line 757 "modecheck_call.m"
              }
#line 756 "modecheck_call.m"
          }
#line 755 "modecheck_call.m"
      }
#line 755 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 755 "modecheck_call.m"
  }
#line 751 "modecheck_call.m"
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
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_call__VarTypes_15, check_hlds__modecheck_call__Var_6, &check_hlds__modecheck_call__Type_17);
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
        if ((check_hlds__modecheck_call__IsLive0_18 == (MR_Integer) 1))
#line 530 "modecheck_call.m"
          {
#line 526 "modecheck_call.m"
            {
#line 526 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Inst_9);
            }
#line 526 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 527 "modecheck_call.m"
              {
#line 527 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = check_hlds__inst_match__inst_is_mostly_unique_2_p_0(check_hlds__modecheck_call__ModuleInfo_13, check_hlds__modecheck_call__Inst_9);
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
        else
#line 517 "modecheck_call.m"
          check_hlds__modecheck_call__IsLive_11 = (MR_Integer) 0;
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
#line 444 "modecheck_call.m"
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
    if ((check_hlds__modecheck_call__NeverSucceeds_26 == (MR_Integer) 0))
#line 461 "modecheck_call.m"
      check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33 = check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_32_32;
#line 460 "modecheck_call.m"
    else
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
#line 463 "modecheck_call.m"
    {
#line 463 "modecheck_call.m"
      check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(check_hlds__modecheck_call__MayInitSolverVars_21, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_29);
#line 463 "modecheck_call.m"
      return;
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
#line 351 "modecheck_call.m"
          return;
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
#line 357 "modecheck_call.m"
          return;
        }
#line 353 "modecheck_call.m"
      }
#line 334 "modecheck_call.m"
  }
#line 329 "modecheck_call.m"
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
#line 588 "modecheck_call.m"
  {
#line 588 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_32_32;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_33_33;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_9;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcInfo_10;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcInfo_11;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgModes_12;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgModes_13;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_14;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherInitialInsts_15;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ArgTypes_16;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__FinalInsts_18;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherFinalInsts_19;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgLives_21;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgLives_22;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CompareLives_23;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Detism_24;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherDetism_25;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CanFail_26;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Solns_27;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherCanFail_28;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherSolns_29;
#line 588 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__V_31_31;
#line 590 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_ProcInfo_10;
#line 591 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv1_OtherProcInfo_11;
#line 747 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_40;
#line 747 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_50;

#line 589 "modecheck_call.m"
    {
#line 589 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__Procs_9);
    }
#line 3796 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 3798 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 590 "modecheck_call.m"
    {
#line 590 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_32_32, check_hlds__modecheck_call__TypeCtorInfo_33_33, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__ProcId_5)), &check_hlds__modecheck_call__conv0_ProcInfo_10);
    }
#line 590 "modecheck_call.m"
    check_hlds__modecheck_call__ProcInfo_10 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_10);
#line 591 "modecheck_call.m"
    {
#line 591 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_32_32, check_hlds__modecheck_call__TypeCtorInfo_33_33, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__OtherProcId_6)), &check_hlds__modecheck_call__conv1_OtherProcInfo_11);
    }
#line 591 "modecheck_call.m"
    check_hlds__modecheck_call__OtherProcInfo_11 = ((MR_Word) check_hlds__modecheck_call__conv1_OtherProcInfo_11);
#line 594 "modecheck_call.m"
    {
#line 594 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__ProcArgModes_12);
    }
#line 595 "modecheck_call.m"
    {
#line 595 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherProcArgModes_13);
    }
#line 596 "modecheck_call.m"
    {
#line 596 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__InitialInsts_14);
    }
#line 597 "modecheck_call.m"
    {
#line 597 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherInitialInsts_15);
    }
#line 599 "modecheck_call.m"
    {
#line 599 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__ArgTypes_16);
    }
#line 743 "modecheck_call.m"
    {
#line 743 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__InitialInsts_14, check_hlds__modecheck_call__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_40);
    }
#line 747 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 602 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_40 == (MR_Integer) 2);
#line 747 "modecheck_call.m"
    else
#line 748 "modecheck_call.m"
      {
#line 748 "modecheck_call.m"
        {
#line 748 "modecheck_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
#line 748 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 748 "modecheck_call.m"
      }
#line 588 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 588 "modecheck_call.m"
      {
#line 605 "modecheck_call.m"
        {
#line 605 "modecheck_call.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__FinalInsts_18);
        }
#line 606 "modecheck_call.m"
        {
#line 606 "modecheck_call.m"
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherFinalInsts_19);
        }
#line 608 "modecheck_call.m"
        check_hlds__modecheck_call__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 743 "modecheck_call.m"
        {
#line 743 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__FinalInsts_18, check_hlds__modecheck_call__OtherFinalInsts_19, check_hlds__modecheck_call__V_31_31, check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_50);
        }
#line 747 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 610 "modecheck_call.m"
          check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_50 == (MR_Integer) 2);
#line 747 "modecheck_call.m"
        else
#line 748 "modecheck_call.m"
          {
#line 748 "modecheck_call.m"
            {
#line 748 "modecheck_call.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
            }
#line 748 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 748 "modecheck_call.m"
          }
#line 588 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 588 "modecheck_call.m"
          {
#line 613 "modecheck_call.m"
            {
#line 613 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__ProcArgLives_21);
            }
#line 614 "modecheck_call.m"
            {
#line 614 "modecheck_call.m"
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherProcArgLives_22);
            }
#line 615 "modecheck_call.m"
            {
#line 615 "modecheck_call.m"
              check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__ProcArgLives_21, check_hlds__modecheck_call__OtherProcArgLives_22, &check_hlds__modecheck_call__CompareLives_23);
            }
#line 616 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CompareLives_23 == (MR_Integer) 2);
#line 588 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 588 "modecheck_call.m"
              {
#line 619 "modecheck_call.m"
                {
#line 619 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__Detism_24);
                }
#line 620 "modecheck_call.m"
                {
#line 620 "modecheck_call.m"
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherDetism_25);
                }
#line 621 "modecheck_call.m"
                {
#line 621 "modecheck_call.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__Detism_24, &check_hlds__modecheck_call__CanFail_26, &check_hlds__modecheck_call__Solns_27);
                }
#line 622 "modecheck_call.m"
                {
#line 622 "modecheck_call.m"
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__OtherDetism_25, &check_hlds__modecheck_call__OtherCanFail_28, &check_hlds__modecheck_call__OtherSolns_29);
                }
#line 623 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CanFail_26 == check_hlds__modecheck_call__OtherCanFail_28);
#line 588 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 588 "modecheck_call.m"
                  {
#line 625 "modecheck_call.m"
                    if ((check_hlds__modecheck_call__Solns_27 == (MR_Integer) 3))
#line 626 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_29 == (MR_Integer) 2);
#line 625 "modecheck_call.m"
                    else
#line 625 "modecheck_call.m"
                      if ((check_hlds__modecheck_call__Solns_27 == (MR_Integer) 2))
#line 625 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_29 == (MR_Integer) 3);
#line 625 "modecheck_call.m"
                      else
#line 625 "modecheck_call.m"
                        check_hlds__modecheck_call__succeeded = MR_FALSE;
#line 625 "modecheck_call.m"
                    if (!(check_hlds__modecheck_call__succeeded))
#line 624 "modecheck_call.m"
                      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_27 == check_hlds__modecheck_call__OtherSolns_29);
#line 588 "modecheck_call.m"
                  }
#line 588 "modecheck_call.m"
              }
#line 588 "modecheck_call.m"
          }
#line 588 "modecheck_call.m"
      }
#line 588 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 588 "modecheck_call.m"
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
#line 548 "modecheck_call.m"
  {
#line 548 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_28_28;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__TypeCtorInfo_29_29;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Procs_9;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcInfo_10;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcInfo_11;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgModes_12;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgModes_13;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__InitialInsts_14;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherInitialInsts_15;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ArgTypes_16;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__ProcArgLives_18;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherProcArgLives_19;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__CompareLives_20;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Detism_21;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherDetism_22;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Solns_24;
#line 548 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__OtherSolns_26;
#line 550 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv0_ProcInfo_10;
#line 551 "modecheck_call.m"
    MR_Box check_hlds__modecheck_call__conv1_OtherProcInfo_11;
#line 747 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call__Result0_36;
#line 574 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call___CanFail_23;
#line 575 "modecheck_call.m"
    MR_Word check_hlds__modecheck_call___OtherCanFail_25;

#line 549 "modecheck_call.m"
    {
#line 549 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__Procs_9);
    }
#line 4050 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 4052 "check_hlds.modecheck_call.c"
    check_hlds__modecheck_call__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 550 "modecheck_call.m"
    {
#line 550 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_28_28, check_hlds__modecheck_call__TypeCtorInfo_29_29, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__ProcId_5)), &check_hlds__modecheck_call__conv0_ProcInfo_10);
    }
#line 550 "modecheck_call.m"
    check_hlds__modecheck_call__ProcInfo_10 = ((MR_Word) check_hlds__modecheck_call__conv0_ProcInfo_10);
#line 551 "modecheck_call.m"
    {
#line 551 "modecheck_call.m"
      mercury__map__lookup_3_p_0(check_hlds__modecheck_call__TypeCtorInfo_28_28, check_hlds__modecheck_call__TypeCtorInfo_29_29, check_hlds__modecheck_call__Procs_9, ((MR_Box) (check_hlds__modecheck_call__OtherProcId_6)), &check_hlds__modecheck_call__conv1_OtherProcInfo_11);
    }
#line 551 "modecheck_call.m"
    check_hlds__modecheck_call__OtherProcInfo_11 = ((MR_Word) check_hlds__modecheck_call__conv1_OtherProcInfo_11);
#line 554 "modecheck_call.m"
    {
#line 554 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__ProcArgModes_12);
    }
#line 555 "modecheck_call.m"
    {
#line 555 "modecheck_call.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherProcArgModes_13);
    }
#line 556 "modecheck_call.m"
    {
#line 556 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__InitialInsts_14);
    }
#line 557 "modecheck_call.m"
    {
#line 557 "modecheck_call.m"
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherInitialInsts_15);
    }
#line 559 "modecheck_call.m"
    {
#line 559 "modecheck_call.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_call__PredInfo_7, &check_hlds__modecheck_call__ArgTypes_16);
    }
#line 743 "modecheck_call.m"
    {
#line 743 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__compare_inst_list_2_6_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__InitialInsts_14, check_hlds__modecheck_call__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_call__ArgTypes_16, &check_hlds__modecheck_call__Result0_36);
    }
#line 747 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 562 "modecheck_call.m"
      check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Result0_36 == (MR_Integer) 2);
#line 747 "modecheck_call.m"
    else
#line 748 "modecheck_call.m"
      {
#line 748 "modecheck_call.m"
        {
#line 748 "modecheck_call.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_call", (MR_String) "predicate \140check_hlds.modecheck_call.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
#line 748 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = MR_TRUE;
#line 748 "modecheck_call.m"
      }
#line 548 "modecheck_call.m"
    if (check_hlds__modecheck_call__succeeded)
#line 548 "modecheck_call.m"
      {
#line 565 "modecheck_call.m"
        {
#line 565 "modecheck_call.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__ProcArgModes_12, &check_hlds__modecheck_call__ProcArgLives_18);
        }
#line 566 "modecheck_call.m"
        {
#line 566 "modecheck_call.m"
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_call__ModuleInfo_8, check_hlds__modecheck_call__OtherProcArgModes_13, &check_hlds__modecheck_call__OtherProcArgLives_19);
        }
#line 567 "modecheck_call.m"
        {
#line 567 "modecheck_call.m"
          check_hlds__modecheck_call__compare_liveness_list_3_p_0(check_hlds__modecheck_call__ProcArgLives_18, check_hlds__modecheck_call__OtherProcArgLives_19, &check_hlds__modecheck_call__CompareLives_20);
        }
#line 568 "modecheck_call.m"
        check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__CompareLives_20 == (MR_Integer) 2);
#line 548 "modecheck_call.m"
        if (check_hlds__modecheck_call__succeeded)
#line 548 "modecheck_call.m"
          {
#line 572 "modecheck_call.m"
            {
#line 572 "modecheck_call.m"
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__ProcInfo_10, &check_hlds__modecheck_call__Detism_21);
            }
#line 573 "modecheck_call.m"
            {
#line 573 "modecheck_call.m"
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__modecheck_call__OtherProcInfo_11, &check_hlds__modecheck_call__OtherDetism_22);
            }
#line 574 "modecheck_call.m"
            {
#line 574 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__Detism_21, &check_hlds__modecheck_call___CanFail_23, &check_hlds__modecheck_call__Solns_24);
            }
#line 575 "modecheck_call.m"
            {
#line 575 "modecheck_call.m"
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_call__OtherDetism_22, &check_hlds__modecheck_call___OtherCanFail_25, &check_hlds__modecheck_call__OtherSolns_26);
            }
#line 576 "modecheck_call.m"
            check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_24 == (MR_Integer) 2);
#line 576 "modecheck_call.m"
            if (check_hlds__modecheck_call__succeeded)
#line 576 "modecheck_call.m"
              check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_26 == (MR_Integer) 2);
#line 577 "modecheck_call.m"
            if (!(check_hlds__modecheck_call__succeeded))
#line 577 "modecheck_call.m"
              {
#line 577 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__Solns_24 == (MR_Integer) 2);
#line 577 "modecheck_call.m"
                check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 577 "modecheck_call.m"
                if (check_hlds__modecheck_call__succeeded)
#line 577 "modecheck_call.m"
                  {
#line 577 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = (check_hlds__modecheck_call__OtherSolns_26 == (MR_Integer) 2);
#line 577 "modecheck_call.m"
                    check_hlds__modecheck_call__succeeded = !(check_hlds__modecheck_call__succeeded);
#line 577 "modecheck_call.m"
                  }
#line 577 "modecheck_call.m"
              }
#line 548 "modecheck_call.m"
          }
#line 548 "modecheck_call.m"
      }
#line 548 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 548 "modecheck_call.m"
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
#line 324 "modecheck_call.m"
      return;
    }
#line 297 "modecheck_call.m"
  }
#line 55 "modecheck_call.m"
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
      return check_hlds__modecheck_call__succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__294__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_call__closure, (MR_Integer) 4))));
    }
#line 294 "modecheck_call.m"
    return check_hlds__modecheck_call__succeeded;
#line 294 "modecheck_call.m"
  }
#line 294 "modecheck_call.m"
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
#line 294 "modecheck_call.m"
      return;
    }
#line 291 "modecheck_call.m"
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
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_call__ModuleInfo0_20, check_hlds__modecheck_call__PredVarInst0_19, &check_hlds__modecheck_call__PredVarInst_21);
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
              parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_call__VarTypes_26, check_hlds__modecheck_call__PredVar_11, &check_hlds__modecheck_call__Type_27);
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
#line 4579 "check_hlds.modecheck_call.c"
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
#line 4627 "check_hlds.modecheck_call.c"
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
#line 272 "modecheck_call.m"
                  return;
                }
#line 271 "modecheck_call.m"
              }
#line 273 "modecheck_call.m"
            else
#line 272 "modecheck_call.m"
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
#line 103 "modecheck_call.m"
  {
#line 103 "modecheck_call.m"
    MR_bool check_hlds__modecheck_call__succeeded;

#line 103 "modecheck_call.m"
    {
#line 103 "modecheck_call.m"
      check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(check_hlds__modecheck_call__PredId_11, check_hlds__modecheck_call__DeterminismKnown_12, check_hlds__modecheck_call__ProcId0_13, check_hlds__modecheck_call__TheProcId_14, check_hlds__modecheck_call__ArgVars0_15, check_hlds__modecheck_call__ArgVars_16, check_hlds__modecheck_call__ExtraGoals_18, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_0_54, check_hlds__modecheck_call__STATE_VARIABLE_ModeInfo_55);
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
