/*
** Automatically generated from `mode_comparison.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module check_hlds.mode_comparison. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_comparison__init
ENDINIT
*/

#include "check_hlds.mode_comparison.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
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



struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5;
  MR_bool check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcModes_21;
  MR_Integer check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_28;
  jmp_buf check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_71;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35;
  MR_Integer check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_36;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_50;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_51;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_52;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_53;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_54;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_61;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_62;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_63;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_64;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_65;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66;
  MR_Word check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_69;
  MR_Box check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_Var_34;
};


static const MR_EnumFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_1;

static const MR_EnumFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_2;

static const MR_EnumFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_3;

static const MR_EnumFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__enum_value_ordered_match_0[4];

static const MR_EnumFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__enum_name_ordered_match_0[4];

static const MR_Integer check_hlds__mode_comparison__check_hlds__mode_comparison__functor_number_map_match_0[4];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_comparison__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_comparison__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_comparison__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_PseudoTypeInfo check_hlds__mode_comparison__check_hlds__mode_comparison__field_types_proc_mode_0_0[3];

static const MR_DuFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__du_functor_desc_proc_mode_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__du_stag_ordered_proc_mode_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_comparison__check_hlds__mode_comparison__du_ptag_ordered_proc_mode_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__du_name_ordered_proc_mode_0[1];

static const MR_Integer check_hlds__mode_comparison__check_hlds__mode_comparison__functor_number_map_proc_mode_0[1];

static MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____match_0_0_10001(
  MR_Box check_hlds__mode_comparison__wrapper_arg_1,
  MR_Box check_hlds__mode_comparison__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_comparison____Compare____match_0_0_10001(
  MR_Box * check_hlds__mode_comparison__wrapper_arg_1,
  MR_Box check_hlds__mode_comparison__wrapper_arg_2,
  MR_Box check_hlds__mode_comparison__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____proc_mode_0_0_10001(
  MR_Box check_hlds__mode_comparison__wrapper_arg_1,
  MR_Box check_hlds__mode_comparison__wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_comparison____Compare____proc_mode_0_0_10001(
  MR_Box * check_hlds__mode_comparison__wrapper_arg_1,
  MR_Box check_hlds__mode_comparison__wrapper_arg_2,
  MR_Box check_hlds__mode_comparison__wrapper_arg_3);

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
  void * check_hlds__mode_comparison__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
  void * check_hlds__mode_comparison__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
  void * check_hlds__mode_comparison__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
  void * check_hlds__mode_comparison__env_ptr_arg);

static void MR_CALL 
check_hlds__mode_comparison__compare_liveness_list_3_p_0(
  MR_Word check_hlds__mode_comparison__HeadVar__1_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word * check_hlds__mode_comparison__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_comparison__compare_inst_list_2_6_p_0(
  MR_Word check_hlds__mode_comparison__ModuleInfo_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word check_hlds__mode_comparison__HeadVar__3_3,
  MR_Word check_hlds__mode_comparison__HeadVar__4_4,
  MR_Word check_hlds__mode_comparison__HeadVar__5_5,
  MR_Word * check_hlds__mode_comparison__HeadVar__6_6);

static void MR_CALL 
check_hlds__mode_comparison__get_var_insts_3_p_0(
  MR_Word check_hlds__mode_comparison__ModeInfo_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word * check_hlds__mode_comparison__HeadVar__3_3);


static /* final */ const MR_Box check_hlds__mode_comparison_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__mode_comparison_scalar_common_2[1][3];


/* sealed */ struct check_hlds__mode_comparison__vector_common_type_3_0_s {
  const MR_Word check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct check_hlds__mode_comparison__vector_common_type_3_0_s check_hlds__mode_comparison_vector_common_3[32];



static /* final */ const MR_Box check_hlds__mode_comparison_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_comparison_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_comparison_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};


static /* final */ const struct check_hlds__mode_comparison__vector_common_type_3_0_s check_hlds__mode_comparison_vector_common_3[32] = {
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



static const MR_EnumFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_0 = {
  (MR_String) "better",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_1 = {
  (MR_String) "worse",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_2 = {
  (MR_String) "same",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_3 = {
  (MR_String) "incomparable",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__enum_value_ordered_match_0[4] = {
  &check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_0,
  &check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_1,
  &check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_2,
  &check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_3
};

static const MR_EnumFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__enum_name_ordered_match_0[4] = {
  &check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_0,
  &check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_3,
  &check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_2,
  &check_hlds__mode_comparison__check_hlds__mode_comparison__enum_functor_desc_match_0_1
};

static const MR_Integer check_hlds__mode_comparison__check_hlds__mode_comparison__functor_number_map_match_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_comparison____Unify____match_0_0_10001)),
  ((MR_Box) (check_hlds__mode_comparison____Compare____match_0_0_10001)),
  (MR_String) "check_hlds.mode_comparison",
  (MR_String) "match",
  {     check_hlds__mode_comparison__check_hlds__mode_comparison__enum_name_ordered_match_0 },
  {     check_hlds__mode_comparison__check_hlds__mode_comparison__enum_value_ordered_match_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__mode_comparison__check_hlds__mode_comparison__functor_number_map_match_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_comparison__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_comparison__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_comparison__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_comparison__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_comparison__check_hlds__mode_comparison__field_types_proc_mode_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_comparison__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_comparison__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0
};

static const MR_DuFunctorDesc check_hlds__mode_comparison__check_hlds__mode_comparison__du_functor_desc_proc_mode_0_0 = {
  (MR_String) "proc_mode",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_comparison__check_hlds__mode_comparison__field_types_proc_mode_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__du_stag_ordered_proc_mode_0_0[1] = {
  &check_hlds__mode_comparison__check_hlds__mode_comparison__du_functor_desc_proc_mode_0_0
};

static const MR_DuPtagLayout check_hlds__mode_comparison__check_hlds__mode_comparison__du_ptag_ordered_proc_mode_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_comparison__check_hlds__mode_comparison__du_stag_ordered_proc_mode_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__du_name_ordered_proc_mode_0[1] = {
  &check_hlds__mode_comparison__check_hlds__mode_comparison__du_functor_desc_proc_mode_0_0
};

static const MR_Integer check_hlds__mode_comparison__check_hlds__mode_comparison__functor_number_map_proc_mode_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_proc_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_comparison____Unify____proc_mode_0_0_10001)),
  ((MR_Box) (check_hlds__mode_comparison____Compare____proc_mode_0_0_10001)),
  (MR_String) "check_hlds.mode_comparison",
  (MR_String) "proc_mode",
  {     check_hlds__mode_comparison__check_hlds__mode_comparison__du_name_ordered_proc_mode_0 },
  {     check_hlds__mode_comparison__check_hlds__mode_comparison__du_ptag_ordered_proc_mode_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_comparison__check_hlds__mode_comparison__functor_number_map_proc_mode_0
};

static MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____match_0_0_10001(
  MR_Box check_hlds__mode_comparison__wrapper_arg_1,
  MR_Box check_hlds__mode_comparison__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;

    {
      check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison____Unify____match_0_0(((MR_Word) check_hlds__mode_comparison__wrapper_arg_1), ((MR_Word) check_hlds__mode_comparison__wrapper_arg_2));
    }
    return check_hlds__mode_comparison__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_comparison____Compare____match_0_0_10001(
  MR_Box * check_hlds__mode_comparison__wrapper_arg_1,
  MR_Box check_hlds__mode_comparison__wrapper_arg_2,
  MR_Box check_hlds__mode_comparison__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_comparison__conv0_HeadVar__1_1;

    {
      check_hlds__mode_comparison____Compare____match_0_0(&check_hlds__mode_comparison__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_comparison__wrapper_arg_2), ((MR_Word) check_hlds__mode_comparison__wrapper_arg_3));
    }
    *check_hlds__mode_comparison__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_comparison__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____proc_mode_0_0_10001(
  MR_Box check_hlds__mode_comparison__wrapper_arg_1,
  MR_Box check_hlds__mode_comparison__wrapper_arg_2)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;

    {
      check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison____Unify____proc_mode_0_0(((MR_Word) check_hlds__mode_comparison__wrapper_arg_1), ((MR_Word) check_hlds__mode_comparison__wrapper_arg_2));
    }
    return check_hlds__mode_comparison__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_comparison____Compare____proc_mode_0_0_10001(
  MR_Box * check_hlds__mode_comparison__wrapper_arg_1,
  MR_Box check_hlds__mode_comparison__wrapper_arg_2,
  MR_Box check_hlds__mode_comparison__wrapper_arg_3)
{
  {
    MR_Word check_hlds__mode_comparison__conv0_HeadVar__1_1;

    {
      check_hlds__mode_comparison____Compare____proc_mode_0_0(&check_hlds__mode_comparison__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_comparison__wrapper_arg_2), ((MR_Word) check_hlds__mode_comparison__wrapper_arg_3));
    }
    *check_hlds__mode_comparison__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_comparison__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
  void * check_hlds__mode_comparison__env_ptr_arg)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__mode_comparison__env_ptr = (struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__mode_comparison__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
  void * check_hlds__mode_comparison__env_ptr_arg)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__mode_comparison__env_ptr = (struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__mode_comparison__env_ptr_arg;

    (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34 = ((MR_Word) (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_Var_34);
    {
      check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(check_hlds__mode_comparison__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
  void * check_hlds__mode_comparison__env_ptr_arg)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__mode_comparison__env_ptr = (struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__mode_comparison__env_ptr_arg;

    {
      MR_Word check_hlds__mode_comparison__Var_32;
      MR_Word check_hlds__mode_comparison__Var_33;
      MR_Box check_hlds__mode_comparison__conv1_ProcInfo_45;
      MR_Box check_hlds__mode_comparison__conv2_OtherProcInfo_46;
      MR_Word check_hlds__mode_comparison__Result0_78;

      (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34, (MR_Integer) 0)));
      check_hlds__mode_comparison__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34, (MR_Integer) 1)));
      check_hlds__mode_comparison__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34, (MR_Integer) 2)));
      (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 = (MR_Integer) 0;
      (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_71, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_36, &check_hlds__mode_comparison__conv1_ProcInfo_45);
      }
      (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45 = ((MR_Word) check_hlds__mode_comparison__conv1_ProcInfo_45);
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_71, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_28, &check_hlds__mode_comparison__conv2_OtherProcInfo_46);
      }
      (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46 = ((MR_Word) check_hlds__mode_comparison__conv2_OtherProcInfo_46);
      {
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47);
      }
      {
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48);
      }
      {
        check_hlds__mode_info__mode_info_get_module_info_2_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49);
      }
      {
        check_hlds__mode_info__mode_info_get_var_types_2_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_50);
      }
      {
        hlds__vartypes__lookup_var_types_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_50, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_51);
      }
      {
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_52);
      }
      {
        check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_53);
      }
      {
        check_hlds__mode_comparison__get_var_insts_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_54);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_69 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_54));
      }
      {
        (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_52, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_53, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_69, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_51, &check_hlds__mode_comparison__Result0_78);
      }
      if ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 = check_hlds__mode_comparison__Result0_78;
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_inst_list\'/6", (MR_String) "length mismatch");
            return;
          }
        }
      {
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56);
      }
      {
        check_hlds__mode_util__get_arg_lives_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57);
      }
      {
        check_hlds__mode_comparison__compare_liveness_list_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58);
      }
      {
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59);
      }
      {
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60);
      }
      {
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_61, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_62);
      }
      {
        parse_tree__prog_data__determinism_components_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_63, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_64);
      }
      {
        parse_tree__prog_detism__compare_solncounts_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_62, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_64, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_65);
      }
      switch ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_65) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__mode_comparison__CompareCanFails_67;

            {
              parse_tree__prog_detism__compare_canfails_3_p_0((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_61, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_63, &check_hlds__mode_comparison__CompareCanFails_67);
            }
            switch (check_hlds__mode_comparison__CompareCanFails_67) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 2;
                break;
              case (MR_Integer) 0:
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 0;
          break;
      }
      switch ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 3:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
            case (MR_Integer) 2:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 1:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
          }
          break;
        case (MR_Integer) 3:
          {
            (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
          }
          break;
        case (MR_Integer) 2:
          switch ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 3:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
            case (MR_Integer) 2:
              (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66);
              break;
            case (MR_Integer) 1:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 1);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
            case (MR_Integer) 3:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
            case (MR_Integer) 2:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 1);
              }
              break;
          }
          break;
      }
      if ((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(check_hlds__mode_comparison__env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
  void * check_hlds__mode_comparison__env_ptr_arg)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * check_hlds__mode_comparison__env_ptr = (struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) check_hlds__mode_comparison__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_proc_mode_0, &(check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_Var_34, (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcModes_21, check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3, check_hlds__mode_comparison__env_ptr);
          }
        }
        (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (check_hlds__mode_comparison__env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
  MR_Word check_hlds__mode_comparison__ModeInfo_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word check_hlds__mode_comparison__Procs_4,
  MR_Word check_hlds__mode_comparison__ArgVars_5,
  MR_Integer * check_hlds__mode_comparison__TheProcId_6,
  MR_Word * check_hlds__mode_comparison__TheInstVarSub_7,
  MR_Word * check_hlds__mode_comparison__TheArgModes_8)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s check_hlds__mode_comparison__env;

    (check_hlds__mode_comparison__env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1 = check_hlds__mode_comparison__ModeInfo_1;
    (check_hlds__mode_comparison__env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4 = check_hlds__mode_comparison__Procs_4;
    (check_hlds__mode_comparison__env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5 = check_hlds__mode_comparison__ArgVars_5;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((check_hlds__mode_comparison__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.choose_best_match\'/8", (MR_String) "no best match");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_comparison__ProcMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__mode_comparison__InstVarSub_29;
            MR_Word check_hlds__mode_comparison__ArgModes_30;

            (check_hlds__mode_comparison__env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcModes_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 1)));
            (check_hlds__mode_comparison__env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__ProcMode_20, (MR_Integer) 0)));
            check_hlds__mode_comparison__InstVarSub_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__ProcMode_20, (MR_Integer) 1)));
            check_hlds__mode_comparison__ArgModes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__ProcMode_20, (MR_Integer) 2)));
            {
              check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(&check_hlds__mode_comparison__env);
            }
            if ((check_hlds__mode_comparison__env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__mode_comparison__next_value_of_HeadVar__2_2 = (check_hlds__mode_comparison__env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcModes_21;

                  check_hlds__mode_comparison__HeadVar__2_2 = check_hlds__mode_comparison__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            else
              {
                *check_hlds__mode_comparison__TheProcId_6 = (check_hlds__mode_comparison__env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_28;
                *check_hlds__mode_comparison__TheInstVarSub_7 = check_hlds__mode_comparison__InstVarSub_29;
                *check_hlds__mode_comparison__TheArgModes_8 = check_hlds__mode_comparison__ArgModes_30;
              }
          }
        break;
      }
  }
}

void MR_CALL 
check_hlds__mode_comparison____Compare____proc_mode_0_0(
  MR_Word * check_hlds__mode_comparison__HeadVar__1_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word check_hlds__mode_comparison__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;
    MR_Integer check_hlds__mode_comparison__CastX_12 = (MR_Integer) check_hlds__mode_comparison__HeadVar__2_2;
    MR_Integer check_hlds__mode_comparison__CastY_13 = (MR_Integer) check_hlds__mode_comparison__HeadVar__3_3;

    check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__CastX_12 == check_hlds__mode_comparison__CastY_13);
    if (check_hlds__mode_comparison__succeeded)
      *check_hlds__mode_comparison__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer check_hlds__mode_comparison__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer check_hlds__mode_comparison__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__mode_comparison__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_comparison__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__mode_comparison__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__mode_comparison__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__mode_comparison__Var_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_comparison__Var_10, check_hlds__mode_comparison__ArgX1_4, check_hlds__mode_comparison__ArgY1_5);
        }
        check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__Var_10 == (MR_Integer) 0);
        check_hlds__mode_comparison__succeeded = !(check_hlds__mode_comparison__succeeded);
        if (check_hlds__mode_comparison__succeeded)
          *check_hlds__mode_comparison__HeadVar__1_1 = check_hlds__mode_comparison__Var_10;
        else
          {
            MR_Word check_hlds__mode_comparison__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_comparison_scalar_common_2[0], &check_hlds__mode_comparison__Var_11, ((MR_Box) (check_hlds__mode_comparison__ArgX2_6)), ((MR_Box) (check_hlds__mode_comparison__ArgY2_7)));
            }
            check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__Var_11 == (MR_Integer) 0);
            check_hlds__mode_comparison__succeeded = !(check_hlds__mode_comparison__succeeded);
            if (check_hlds__mode_comparison__succeeded)
              *check_hlds__mode_comparison__HeadVar__1_1 = check_hlds__mode_comparison__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_comparison_scalar_common_1[1], check_hlds__mode_comparison__HeadVar__1_1, ((MR_Box) (check_hlds__mode_comparison__ArgX3_8)), ((MR_Box) (check_hlds__mode_comparison__ArgY3_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____proc_mode_0_0(
  MR_Word check_hlds__mode_comparison__HeadVar__1_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;
    MR_Integer check_hlds__mode_comparison__CastX_9 = (MR_Integer) check_hlds__mode_comparison__HeadVar__1_1;
    MR_Integer check_hlds__mode_comparison__CastY_10 = (MR_Integer) check_hlds__mode_comparison__HeadVar__2_2;

    check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__CastX_9 == check_hlds__mode_comparison__CastY_10);
    if (check_hlds__mode_comparison__succeeded)
      check_hlds__mode_comparison__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__mode_comparison__TypeInfo_11_11;
        MR_Word check_hlds__mode_comparison__TypeInfo_12_12;
        MR_Integer check_hlds__mode_comparison__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer check_hlds__mode_comparison__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_comparison__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_comparison__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_comparison__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__mode_comparison__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 2)));

        check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__ArgX1_3 == check_hlds__mode_comparison__ArgY1_4);
        if (check_hlds__mode_comparison__succeeded)
          {
            check_hlds__mode_comparison__TypeInfo_11_11 = (MR_Word) &check_hlds__mode_comparison_scalar_common_2[0];
            {
              check_hlds__mode_comparison__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_comparison__TypeInfo_11_11, ((MR_Box) (check_hlds__mode_comparison__ArgX2_5)), ((MR_Box) (check_hlds__mode_comparison__ArgY2_6)));
            }
            if (check_hlds__mode_comparison__succeeded)
              {
                check_hlds__mode_comparison__TypeInfo_12_12 = (MR_Word) &check_hlds__mode_comparison_scalar_common_1[1];
                {
                  check_hlds__mode_comparison__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_comparison__TypeInfo_12_12, ((MR_Box) (check_hlds__mode_comparison__ArgX3_7)), ((MR_Box) (check_hlds__mode_comparison__ArgY3_8)));
                }
              }
          }
      }
    return check_hlds__mode_comparison__succeeded;
  }
}

void MR_CALL 
check_hlds__mode_comparison____Compare____match_0_0(
  MR_Word * check_hlds__mode_comparison__HeadVar__1_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word check_hlds__mode_comparison__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;
    MR_Integer check_hlds__mode_comparison__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_comparison__HeadVar__2_2;
    MR_Integer check_hlds__mode_comparison__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_comparison__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_comparison__HeadVar__1_1, check_hlds__mode_comparison__Cast_HeadVar1_4, check_hlds__mode_comparison__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____match_0_0(
  MR_Word check_hlds__mode_comparison__HeadVar__2_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__HeadVar__2_1 == check_hlds__mode_comparison__HeadVar__2_2);

    return check_hlds__mode_comparison__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_comparison__compare_liveness_list_3_p_0(
  MR_Word check_hlds__mode_comparison__HeadVar__1_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word * check_hlds__mode_comparison__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;

    if ((check_hlds__mode_comparison__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__mode_comparison__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__mode_comparison__HeadVar__3_3 = (MR_Integer) 2;
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_liveness_list\'/3", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__mode_comparison__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__mode_comparison__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__mode_comparison__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_liveness_list\'/3", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__mode_comparison__LiveB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__mode_comparison__LiveBs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__mode_comparison__Result1_22;

            {
              check_hlds__mode_comparison__compare_liveness_list_3_p_0(check_hlds__mode_comparison__Var_23, check_hlds__mode_comparison__LiveBs_19, &check_hlds__mode_comparison__Result1_22);
            }
            switch (check_hlds__mode_comparison__Var_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                switch (check_hlds__mode_comparison__LiveB_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    *check_hlds__mode_comparison__HeadVar__3_3 = check_hlds__mode_comparison__Result1_22;
                    break;
                  case (MR_Integer) 0:
                    {
                      *check_hlds__mode_comparison__HeadVar__3_3 = ((&check_hlds__mode_comparison_vector_common_3[24 + check_hlds__mode_comparison__Result1_22]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                    }
                    break;
                }
                break;
              case (MR_Integer) 0:
                switch (check_hlds__mode_comparison__LiveB_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      *check_hlds__mode_comparison__HeadVar__3_3 = ((&check_hlds__mode_comparison_vector_common_3[28 + check_hlds__mode_comparison__Result1_22]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                    }
                    break;
                  case (MR_Integer) 0:
                    *check_hlds__mode_comparison__HeadVar__3_3 = check_hlds__mode_comparison__Result1_22;
                    break;
                }
                break;
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_comparison__compare_inst_list_2_6_p_0(
  MR_Word check_hlds__mode_comparison__ModuleInfo_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word check_hlds__mode_comparison__HeadVar__3_3,
  MR_Word check_hlds__mode_comparison__HeadVar__4_4,
  MR_Word check_hlds__mode_comparison__HeadVar__5_5,
  MR_Word * check_hlds__mode_comparison__HeadVar__6_6)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;

    if ((check_hlds__mode_comparison__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__mode_comparison__succeeded)
          {
            check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__mode_comparison__succeeded)
              {
                *check_hlds__mode_comparison__HeadVar__6_6 = (MR_Integer) 2;
                check_hlds__mode_comparison__succeeded = MR_TRUE;
              }
          }
      }
    else
      {
        MR_Word check_hlds__mode_comparison__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_comparison__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_comparison__Var_38;
        MR_Word check_hlds__mode_comparison__Var_39;
        MR_Word check_hlds__mode_comparison__Var_40;
        MR_Word check_hlds__mode_comparison__Var_41;

        check_hlds__mode_comparison__succeeded = ((MR_tag((MR_Word) check_hlds__mode_comparison__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__mode_comparison__succeeded)
          {
            check_hlds__mode_comparison__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__3_3, (MR_Integer) 0)));
            check_hlds__mode_comparison__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__3_3, (MR_Integer) 1)));
            check_hlds__mode_comparison__succeeded = ((MR_tag((MR_Word) check_hlds__mode_comparison__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__mode_comparison__succeeded)
              {
                check_hlds__mode_comparison__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__5_5, (MR_Integer) 0)));
                check_hlds__mode_comparison__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__5_5, (MR_Integer) 1)));
                if ((check_hlds__mode_comparison__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word check_hlds__mode_comparison__Var_20;
                    MR_Word check_hlds__mode_comparison__B_mi_A_49;

                    {
                      check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                    }
                    if (check_hlds__mode_comparison__succeeded)
                      check_hlds__mode_comparison__B_mi_A_49 = (MR_Integer) 1;
                    else
                      check_hlds__mode_comparison__B_mi_A_49 = (MR_Integer) 0;
                    check_hlds__mode_comparison__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                    }
                    if (check_hlds__mode_comparison__succeeded)
                      {
                        MR_Word check_hlds__mode_comparison__Result0_17;
                        MR_Word check_hlds__mode_comparison__Result1_18;

                        switch (check_hlds__mode_comparison__B_mi_A_49) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            check_hlds__mode_comparison__Result0_17 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__mode_comparison__B_mf_A_55;

                              {
                                check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                              }
                              if (check_hlds__mode_comparison__succeeded)
                                check_hlds__mode_comparison__B_mf_A_55 = (MR_Integer) 1;
                              else
                                check_hlds__mode_comparison__B_mf_A_55 = (MR_Integer) 0;
                              {
                                check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                              }
                              if (check_hlds__mode_comparison__succeeded)
                                switch (check_hlds__mode_comparison__B_mf_A_55) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    check_hlds__mode_comparison__Result0_17 = (MR_Integer) 0;
                                    break;
                                  case (MR_Integer) 1:
                                    check_hlds__mode_comparison__Result0_17 = (MR_Integer) 2;
                                    break;
                                }
                              else
                                switch (check_hlds__mode_comparison__B_mf_A_55) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    check_hlds__mode_comparison__Result0_17 = (MR_Integer) 3;
                                    break;
                                  case (MR_Integer) 1:
                                    check_hlds__mode_comparison__Result0_17 = (MR_Integer) 1;
                                    break;
                                }
                            }
                            break;
                        }
                        {
                          check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(check_hlds__mode_comparison__ModuleInfo_1, check_hlds__mode_comparison__Var_36, check_hlds__mode_comparison__Var_38, check_hlds__mode_comparison__Var_20, check_hlds__mode_comparison__Var_40, &check_hlds__mode_comparison__Result1_18);
                        }
                        if (check_hlds__mode_comparison__succeeded)
                          {
                            switch (check_hlds__mode_comparison__Result0_17) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  *check_hlds__mode_comparison__HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[0 + check_hlds__mode_comparison__Result1_18]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                                }
                                break;
                              case (MR_Integer) 3:
                                *check_hlds__mode_comparison__HeadVar__6_6 = (MR_Integer) 3;
                                break;
                              case (MR_Integer) 2:
                                *check_hlds__mode_comparison__HeadVar__6_6 = check_hlds__mode_comparison__Result1_18;
                                break;
                              case (MR_Integer) 1:
                                {
                                  *check_hlds__mode_comparison__HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[4 + check_hlds__mode_comparison__Result1_18]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                                }
                                break;
                            }
                            check_hlds__mode_comparison__succeeded = MR_TRUE;
                          }
                      }
                    else
                      {
                        MR_Word check_hlds__mode_comparison__Result1_79;

                        {
                          check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(check_hlds__mode_comparison__ModuleInfo_1, check_hlds__mode_comparison__Var_36, check_hlds__mode_comparison__Var_38, check_hlds__mode_comparison__Var_20, check_hlds__mode_comparison__Var_40, &check_hlds__mode_comparison__Result1_79);
                        }
                        if (check_hlds__mode_comparison__succeeded)
                          {
                            switch (check_hlds__mode_comparison__B_mi_A_49) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *check_hlds__mode_comparison__HeadVar__6_6 = (MR_Integer) 3;
                                break;
                              case (MR_Integer) 1:
                                {
                                  *check_hlds__mode_comparison__HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[8 + check_hlds__mode_comparison__Result1_79]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                                }
                                break;
                            }
                            check_hlds__mode_comparison__succeeded = MR_TRUE;
                          }
                      }
                  }
                else
                  {
                    MR_Word check_hlds__mode_comparison__ArgInst_26;
                    MR_Word check_hlds__mode_comparison__ArgInsts_27;
                    MR_Word check_hlds__mode_comparison__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__4_4, (MR_Integer) 0)));
                    MR_Word check_hlds__mode_comparison__Var_34;
                    MR_Word check_hlds__mode_comparison__Var_35;
                    MR_Word check_hlds__mode_comparison__B_mi_A_65;

                    check_hlds__mode_comparison__succeeded = ((MR_tag((MR_Word) check_hlds__mode_comparison__Var_33)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__mode_comparison__succeeded)
                      {
                        check_hlds__mode_comparison__ArgInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__Var_33, (MR_Integer) 0)));
                        check_hlds__mode_comparison__ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__Var_33, (MR_Integer) 1)));
                        {
                          check_hlds__mode_comparison__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__Var_34, 0) = ((MR_Box) (check_hlds__mode_comparison__ArgInst_26));
                        }
                        {
                          check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                        }
                        if (check_hlds__mode_comparison__succeeded)
                          check_hlds__mode_comparison__B_mi_A_65 = (MR_Integer) 1;
                        else
                          check_hlds__mode_comparison__B_mi_A_65 = (MR_Integer) 0;
                        {
                          check_hlds__mode_comparison__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__Var_35, 0) = ((MR_Box) (check_hlds__mode_comparison__ArgInsts_27));
                        }
                        {
                          check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                        }
                        if (check_hlds__mode_comparison__succeeded)
                          {
                            MR_Word check_hlds__mode_comparison__Result0_31;
                            MR_Word check_hlds__mode_comparison__Result1_32;

                            switch (check_hlds__mode_comparison__B_mi_A_65) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word check_hlds__mode_comparison__ArgInst_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__Var_34, (MR_Integer) 0)));
                                  MR_Word check_hlds__mode_comparison__Arg_mf_B_69;

                                  {
                                    check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__mode_comparison__ArgInst_67, check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                                  }
                                  if (check_hlds__mode_comparison__succeeded)
                                    check_hlds__mode_comparison__Arg_mf_B_69 = (MR_Integer) 1;
                                  else
                                    check_hlds__mode_comparison__Arg_mf_B_69 = (MR_Integer) 0;
                                  {
                                    check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__mode_comparison__ArgInst_67, check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                                  }
                                  if (check_hlds__mode_comparison__succeeded)
                                    switch (check_hlds__mode_comparison__Arg_mf_B_69) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        check_hlds__mode_comparison__Result0_31 = (MR_Integer) 0;
                                        break;
                                      case (MR_Integer) 1:
                                        {
                                          MR_Word check_hlds__mode_comparison__B_mf_A_71;

                                          {
                                            check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                                          }
                                          if (check_hlds__mode_comparison__succeeded)
                                            check_hlds__mode_comparison__B_mf_A_71 = (MR_Integer) 1;
                                          else
                                            check_hlds__mode_comparison__B_mf_A_71 = (MR_Integer) 0;
                                          {
                                            check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                                          }
                                          if (check_hlds__mode_comparison__succeeded)
                                            switch (check_hlds__mode_comparison__B_mf_A_71) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 0;
                                                break;
                                              case (MR_Integer) 1:
                                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 2;
                                                break;
                                            }
                                          else
                                            switch (check_hlds__mode_comparison__B_mf_A_71) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 3;
                                                break;
                                              case (MR_Integer) 1:
                                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 1;
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                  else
                                    switch (check_hlds__mode_comparison__Arg_mf_B_69) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        {
                                          MR_Word check_hlds__mode_comparison__B_mf_A_89;

                                          {
                                            check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                                          }
                                          if (check_hlds__mode_comparison__succeeded)
                                            check_hlds__mode_comparison__B_mf_A_89 = (MR_Integer) 1;
                                          else
                                            check_hlds__mode_comparison__B_mf_A_89 = (MR_Integer) 0;
                                          {
                                            check_hlds__mode_comparison__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__mode_comparison__Var_37, check_hlds__mode_comparison__Var_39, check_hlds__mode_comparison__Var_41, check_hlds__mode_comparison__ModuleInfo_1);
                                          }
                                          if (check_hlds__mode_comparison__succeeded)
                                            switch (check_hlds__mode_comparison__B_mf_A_89) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 0;
                                                break;
                                              case (MR_Integer) 1:
                                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 2;
                                                break;
                                            }
                                          else
                                            switch (check_hlds__mode_comparison__B_mf_A_89) {
                                              default: /*NOTREACHED*/ MR_assert(0);
                                              case (MR_Integer) 0:
                                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 3;
                                                break;
                                              case (MR_Integer) 1:
                                                check_hlds__mode_comparison__Result0_31 = (MR_Integer) 1;
                                                break;
                                            }
                                        }
                                        break;
                                      case (MR_Integer) 1:
                                        check_hlds__mode_comparison__Result0_31 = (MR_Integer) 1;
                                        break;
                                    }
                                }
                                break;
                            }
                            {
                              check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(check_hlds__mode_comparison__ModuleInfo_1, check_hlds__mode_comparison__Var_36, check_hlds__mode_comparison__Var_38, check_hlds__mode_comparison__Var_35, check_hlds__mode_comparison__Var_40, &check_hlds__mode_comparison__Result1_32);
                            }
                            if (check_hlds__mode_comparison__succeeded)
                              {
                                switch (check_hlds__mode_comparison__Result0_31) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      *check_hlds__mode_comparison__HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[12 + check_hlds__mode_comparison__Result1_32]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                                    }
                                    break;
                                  case (MR_Integer) 3:
                                    *check_hlds__mode_comparison__HeadVar__6_6 = (MR_Integer) 3;
                                    break;
                                  case (MR_Integer) 2:
                                    *check_hlds__mode_comparison__HeadVar__6_6 = check_hlds__mode_comparison__Result1_32;
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      *check_hlds__mode_comparison__HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[16 + check_hlds__mode_comparison__Result1_32]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                                    }
                                    break;
                                }
                                check_hlds__mode_comparison__succeeded = MR_TRUE;
                              }
                          }
                        else
                          {
                            MR_Word check_hlds__mode_comparison__Result1_94;

                            {
                              check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(check_hlds__mode_comparison__ModuleInfo_1, check_hlds__mode_comparison__Var_36, check_hlds__mode_comparison__Var_38, check_hlds__mode_comparison__Var_35, check_hlds__mode_comparison__Var_40, &check_hlds__mode_comparison__Result1_94);
                            }
                            if (check_hlds__mode_comparison__succeeded)
                              {
                                switch (check_hlds__mode_comparison__B_mi_A_65) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    *check_hlds__mode_comparison__HeadVar__6_6 = (MR_Integer) 3;
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      *check_hlds__mode_comparison__HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[20 + check_hlds__mode_comparison__Result1_94]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                                    }
                                    break;
                                }
                                check_hlds__mode_comparison__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__mode_comparison__succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_comparison__get_var_insts_3_p_0(
  MR_Word check_hlds__mode_comparison__ModeInfo_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word * check_hlds__mode_comparison__HeadVar__3_3)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;

    if ((check_hlds__mode_comparison__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__mode_comparison__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__mode_comparison__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__mode_comparison__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_comparison__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__mode_comparison__Inst_8;
        MR_Word check_hlds__mode_comparison__Insts_9;

        {
          check_hlds__modecheck_util__get_var_inst_3_p_0(check_hlds__mode_comparison__ModeInfo_1, check_hlds__mode_comparison__Var_6, &check_hlds__mode_comparison__Inst_8);
        }
        {
          check_hlds__mode_comparison__get_var_insts_3_p_0(check_hlds__mode_comparison__ModeInfo_1, check_hlds__mode_comparison__Vars_7, &check_hlds__mode_comparison__Insts_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__mode_comparison__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_comparison__Inst_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_comparison__Insts_9));
        }
      }
  }
}

void MR_CALL 
check_hlds__mode_comparison__choose_best_match_8_p_0(
  MR_Word check_hlds__mode_comparison__ModeInfo_1,
  MR_Word check_hlds__mode_comparison__HeadVar__2_2,
  MR_Word check_hlds__mode_comparison__PredId_3,
  MR_Word check_hlds__mode_comparison__Procs_4,
  MR_Word check_hlds__mode_comparison__ArgVars_5,
  MR_Integer * check_hlds__mode_comparison__TheProcId_6,
  MR_Word * check_hlds__mode_comparison__TheInstVarSub_7,
  MR_Word * check_hlds__mode_comparison__TheArgModes_8)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;

    {
      check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(check_hlds__mode_comparison__ModeInfo_1, check_hlds__mode_comparison__HeadVar__2_2, check_hlds__mode_comparison__Procs_4, check_hlds__mode_comparison__ArgVars_5, check_hlds__mode_comparison__TheProcId_6, check_hlds__mode_comparison__TheInstVarSub_7, check_hlds__mode_comparison__TheArgModes_8);
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_comparison__modes_are_identical_bar_cc_4_p_0(
  MR_Integer check_hlds__mode_comparison__ProcId_5,
  MR_Integer check_hlds__mode_comparison__OtherProcId_6,
  MR_Word check_hlds__mode_comparison__PredInfo_7,
  MR_Word check_hlds__mode_comparison__ModuleInfo_8)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;
    MR_Word check_hlds__mode_comparison__TypeCtorInfo_33_33;
    MR_Word check_hlds__mode_comparison__Procs_9;
    MR_Word check_hlds__mode_comparison__ProcInfo_10;
    MR_Word check_hlds__mode_comparison__OtherProcInfo_11;
    MR_Word check_hlds__mode_comparison__ProcArgModes_12;
    MR_Word check_hlds__mode_comparison__OtherProcArgModes_13;
    MR_Word check_hlds__mode_comparison__InitialInsts_14;
    MR_Word check_hlds__mode_comparison__OtherInitialInsts_15;
    MR_Word check_hlds__mode_comparison__ArgTypes_16;
    MR_Word check_hlds__mode_comparison__FinalInsts_18;
    MR_Word check_hlds__mode_comparison__OtherFinalInsts_19;
    MR_Word check_hlds__mode_comparison__ProcArgLives_21;
    MR_Word check_hlds__mode_comparison__OtherProcArgLives_22;
    MR_Word check_hlds__mode_comparison__CompareLives_23;
    MR_Word check_hlds__mode_comparison__Detism_24;
    MR_Word check_hlds__mode_comparison__OtherDetism_25;
    MR_Word check_hlds__mode_comparison__CanFail_26;
    MR_Word check_hlds__mode_comparison__Solns_27;
    MR_Word check_hlds__mode_comparison__OtherCanFail_28;
    MR_Word check_hlds__mode_comparison__OtherSolns_29;
    MR_Word check_hlds__mode_comparison__Var_31;
    MR_Box check_hlds__mode_comparison__conv0_ProcInfo_10;
    MR_Box check_hlds__mode_comparison__conv1_OtherProcInfo_11;
    MR_Word check_hlds__mode_comparison__Result0_40;
    MR_Word check_hlds__mode_comparison__Result0_50;

    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__mode_comparison__PredInfo_7, &check_hlds__mode_comparison__Procs_9);
    }
    check_hlds__mode_comparison__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__mode_comparison__TypeCtorInfo_33_33, check_hlds__mode_comparison__Procs_9, check_hlds__mode_comparison__ProcId_5, &check_hlds__mode_comparison__conv0_ProcInfo_10);
    }
    check_hlds__mode_comparison__ProcInfo_10 = ((MR_Word) check_hlds__mode_comparison__conv0_ProcInfo_10);
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__mode_comparison__TypeCtorInfo_33_33, check_hlds__mode_comparison__Procs_9, check_hlds__mode_comparison__OtherProcId_6, &check_hlds__mode_comparison__conv1_OtherProcInfo_11);
    }
    check_hlds__mode_comparison__OtherProcInfo_11 = ((MR_Word) check_hlds__mode_comparison__conv1_OtherProcInfo_11);
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_comparison__ProcInfo_10, &check_hlds__mode_comparison__ProcArgModes_12);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_comparison__OtherProcInfo_11, &check_hlds__mode_comparison__OtherProcArgModes_13);
    }
    {
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__ProcArgModes_12, &check_hlds__mode_comparison__InitialInsts_14);
    }
    {
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__OtherProcArgModes_13, &check_hlds__mode_comparison__OtherInitialInsts_15);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__mode_comparison__PredInfo_7, &check_hlds__mode_comparison__ArgTypes_16);
    }
    {
      check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__InitialInsts_14, check_hlds__mode_comparison__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_comparison__ArgTypes_16, &check_hlds__mode_comparison__Result0_40);
    }
    if (check_hlds__mode_comparison__succeeded)
      check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__Result0_40 == (MR_Integer) 2);
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
        check_hlds__mode_comparison__succeeded = MR_TRUE;
      }
    if (check_hlds__mode_comparison__succeeded)
      {
        {
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__ProcArgModes_12, &check_hlds__mode_comparison__FinalInsts_18);
        }
        {
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__OtherProcArgModes_13, &check_hlds__mode_comparison__OtherFinalInsts_19);
        }
        check_hlds__mode_comparison__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__FinalInsts_18, check_hlds__mode_comparison__OtherFinalInsts_19, check_hlds__mode_comparison__Var_31, check_hlds__mode_comparison__ArgTypes_16, &check_hlds__mode_comparison__Result0_50);
        }
        if (check_hlds__mode_comparison__succeeded)
          check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__Result0_50 == (MR_Integer) 2);
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_inst_list\'/6", (MR_String) "length mismatch");
            }
            check_hlds__mode_comparison__succeeded = MR_TRUE;
          }
        if (check_hlds__mode_comparison__succeeded)
          {
            {
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__ProcArgModes_12, &check_hlds__mode_comparison__ProcArgLives_21);
            }
            {
              check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__OtherProcArgModes_13, &check_hlds__mode_comparison__OtherProcArgLives_22);
            }
            {
              check_hlds__mode_comparison__compare_liveness_list_3_p_0(check_hlds__mode_comparison__ProcArgLives_21, check_hlds__mode_comparison__OtherProcArgLives_22, &check_hlds__mode_comparison__CompareLives_23);
            }
            check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__CompareLives_23 == (MR_Integer) 2);
            if (check_hlds__mode_comparison__succeeded)
              {
                {
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_comparison__ProcInfo_10, &check_hlds__mode_comparison__Detism_24);
                }
                {
                  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_comparison__OtherProcInfo_11, &check_hlds__mode_comparison__OtherDetism_25);
                }
                {
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_comparison__Detism_24, &check_hlds__mode_comparison__CanFail_26, &check_hlds__mode_comparison__Solns_27);
                }
                {
                  parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_comparison__OtherDetism_25, &check_hlds__mode_comparison__OtherCanFail_28, &check_hlds__mode_comparison__OtherSolns_29);
                }
                check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__CanFail_26 == check_hlds__mode_comparison__OtherCanFail_28);
                if (check_hlds__mode_comparison__succeeded)
                  {
                    switch (check_hlds__mode_comparison__Solns_27) {
                      default:
                        check_hlds__mode_comparison__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 3:
                        check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__OtherSolns_29 == (MR_Integer) 2);
                        break;
                      case (MR_Integer) 2:
                        check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__OtherSolns_29 == (MR_Integer) 3);
                        break;
                    }
                    if (!(check_hlds__mode_comparison__succeeded))
                      check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__Solns_27 == check_hlds__mode_comparison__OtherSolns_29);
                  }
              }
          }
      }
    return check_hlds__mode_comparison__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_comparison__modes_are_indistinguishable_4_p_0(
  MR_Integer check_hlds__mode_comparison__ProcId_5,
  MR_Integer check_hlds__mode_comparison__OtherProcId_6,
  MR_Word check_hlds__mode_comparison__PredInfo_7,
  MR_Word check_hlds__mode_comparison__ModuleInfo_8)
{
  {
    MR_bool check_hlds__mode_comparison__succeeded;
    MR_Word check_hlds__mode_comparison__TypeCtorInfo_29_29;
    MR_Word check_hlds__mode_comparison__Procs_9;
    MR_Word check_hlds__mode_comparison__ProcInfo_10;
    MR_Word check_hlds__mode_comparison__OtherProcInfo_11;
    MR_Word check_hlds__mode_comparison__ProcArgModes_12;
    MR_Word check_hlds__mode_comparison__OtherProcArgModes_13;
    MR_Word check_hlds__mode_comparison__InitialInsts_14;
    MR_Word check_hlds__mode_comparison__OtherInitialInsts_15;
    MR_Word check_hlds__mode_comparison__ArgTypes_16;
    MR_Word check_hlds__mode_comparison__ProcArgLives_18;
    MR_Word check_hlds__mode_comparison__OtherProcArgLives_19;
    MR_Word check_hlds__mode_comparison__CompareLives_20;
    MR_Word check_hlds__mode_comparison__Detism_21;
    MR_Word check_hlds__mode_comparison__OtherDetism_22;
    MR_Word check_hlds__mode_comparison__Solns_24;
    MR_Word check_hlds__mode_comparison__OtherSolns_26;
    MR_Box check_hlds__mode_comparison__conv0_ProcInfo_10;
    MR_Box check_hlds__mode_comparison__conv1_OtherProcInfo_11;
    MR_Word check_hlds__mode_comparison__Result0_36;
    MR_Word check_hlds__mode_comparison___CanFail_23;
    MR_Word check_hlds__mode_comparison___OtherCanFail_25;

    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__mode_comparison__PredInfo_7, &check_hlds__mode_comparison__Procs_9);
    }
    check_hlds__mode_comparison__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__mode_comparison__TypeCtorInfo_29_29, check_hlds__mode_comparison__Procs_9, check_hlds__mode_comparison__ProcId_5, &check_hlds__mode_comparison__conv0_ProcInfo_10);
    }
    check_hlds__mode_comparison__ProcInfo_10 = ((MR_Word) check_hlds__mode_comparison__conv0_ProcInfo_10);
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__mode_comparison__TypeCtorInfo_29_29, check_hlds__mode_comparison__Procs_9, check_hlds__mode_comparison__OtherProcId_6, &check_hlds__mode_comparison__conv1_OtherProcInfo_11);
    }
    check_hlds__mode_comparison__OtherProcInfo_11 = ((MR_Word) check_hlds__mode_comparison__conv1_OtherProcInfo_11);
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_comparison__ProcInfo_10, &check_hlds__mode_comparison__ProcArgModes_12);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__mode_comparison__OtherProcInfo_11, &check_hlds__mode_comparison__OtherProcArgModes_13);
    }
    {
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__ProcArgModes_12, &check_hlds__mode_comparison__InitialInsts_14);
    }
    {
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__OtherProcArgModes_13, &check_hlds__mode_comparison__OtherInitialInsts_15);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__mode_comparison__PredInfo_7, &check_hlds__mode_comparison__ArgTypes_16);
    }
    {
      check_hlds__mode_comparison__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__InitialInsts_14, check_hlds__mode_comparison__OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__mode_comparison__ArgTypes_16, &check_hlds__mode_comparison__Result0_36);
    }
    if (check_hlds__mode_comparison__succeeded)
      check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__Result0_36 == (MR_Integer) 2);
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_inst_list\'/6", (MR_String) "length mismatch");
        }
        check_hlds__mode_comparison__succeeded = MR_TRUE;
      }
    if (check_hlds__mode_comparison__succeeded)
      {
        {
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__ProcArgModes_12, &check_hlds__mode_comparison__ProcArgLives_18);
        }
        {
          check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__mode_comparison__ModuleInfo_8, check_hlds__mode_comparison__OtherProcArgModes_13, &check_hlds__mode_comparison__OtherProcArgLives_19);
        }
        {
          check_hlds__mode_comparison__compare_liveness_list_3_p_0(check_hlds__mode_comparison__ProcArgLives_18, check_hlds__mode_comparison__OtherProcArgLives_19, &check_hlds__mode_comparison__CompareLives_20);
        }
        check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__CompareLives_20 == (MR_Integer) 2);
        if (check_hlds__mode_comparison__succeeded)
          {
            {
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_comparison__ProcInfo_10, &check_hlds__mode_comparison__Detism_21);
            }
            {
              hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__mode_comparison__OtherProcInfo_11, &check_hlds__mode_comparison__OtherDetism_22);
            }
            {
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_comparison__Detism_21, &check_hlds__mode_comparison___CanFail_23, &check_hlds__mode_comparison__Solns_24);
            }
            {
              parse_tree__prog_data__determinism_components_3_p_0(check_hlds__mode_comparison__OtherDetism_22, &check_hlds__mode_comparison___OtherCanFail_25, &check_hlds__mode_comparison__OtherSolns_26);
            }
            check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__Solns_24 == (MR_Integer) 2);
            if (check_hlds__mode_comparison__succeeded)
              check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__OtherSolns_26 == (MR_Integer) 2);
            if (!(check_hlds__mode_comparison__succeeded))
              {
                check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__Solns_24 == (MR_Integer) 2);
                check_hlds__mode_comparison__succeeded = !(check_hlds__mode_comparison__succeeded);
                if (check_hlds__mode_comparison__succeeded)
                  {
                    check_hlds__mode_comparison__succeeded = (check_hlds__mode_comparison__OtherSolns_26 == (MR_Integer) 2);
                    check_hlds__mode_comparison__succeeded = !(check_hlds__mode_comparison__succeeded);
                  }
              }
          }
      }
    return check_hlds__mode_comparison__succeeded;
  }
}

void mercury__check_hlds__mode_comparison__init(void)
{
}

void mercury__check_hlds__mode_comparison__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_match_0);
	MR_register_type_ctor_info(&check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_proc_mode_0);
}

void mercury__check_hlds__mode_comparison__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_comparison__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.mode_comparison. */
