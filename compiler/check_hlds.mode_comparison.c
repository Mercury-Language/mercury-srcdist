/*
** Automatically generated from `mode_comparison.m'
** by the Mercury compiler,
** version 2017-08-10
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

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__mode_comparison__get_var_insts_3_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__mode_comparison__compare_liveness_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_comparison__compare_inst_list_2_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_comparison____Compare____match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____proc_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_comparison____Compare____proc_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_TYPECTOR_REP_ENUM,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_comparison__check_hlds__mode_comparison__field_types_proc_mode_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__mode_comparison__check_hlds__mode_comparison__du_stag_ordered_proc_mode_0_0[1] = {
  &check_hlds__mode_comparison__check_hlds__mode_comparison__du_functor_desc_proc_mode_0_0
};

static const MR_DuPtagLayout check_hlds__mode_comparison__check_hlds__mode_comparison__du_ptag_ordered_proc_mode_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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

void MR_CALL 
check_hlds__mode_comparison____Compare____proc_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_comparison_scalar_common_2[0], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_comparison_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____proc_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) &check_hlds__mode_comparison_scalar_common_2[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) &check_hlds__mode_comparison_scalar_common_1[1];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_comparison____Compare____match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____match_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_comparison__choose_best_match_8_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word PredId_3,
  MR_Word Procs_4,
  MR_Word ArgVars_5,
  MR_Integer * TheProcId_6,
  MR_Word * TheInstVarSub_7,
  MR_Word * TheArgModes_8)
{
  check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(ModeInfo_1, HeadVar__2_2, Procs_4, ArgVars_5, TheProcId_6, TheInstVarSub_7, TheArgModes_8);
}

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34 = ((MR_Word) (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_Var_34);
    check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    {
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Box conv1_ProcInfo_45;
      MR_Box conv2_OtherProcInfo_46;
      MR_Word Result0_78;

      (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34, (MR_Integer) 0)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34, (MR_Integer) 1)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_34, (MR_Integer) 2)));
      (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 = (MR_Integer) 0;
      (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_71, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcId_36, &conv1_ProcInfo_45);
      (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45 = ((MR_Word) conv1_ProcInfo_45);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_39_71, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_28, &conv2_OtherProcInfo_46);
      (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46 = ((MR_Word) conv2_OtherProcInfo_46);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49);
      check_hlds__mode_info__mode_info_get_var_types_2_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_50);
      hlds__vartypes__lookup_var_types_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__VarTypes_50, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_51);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_52);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_53);
      check_hlds__mode_comparison__get_var_insts_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_54);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_69 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgInitialInsts_54));
      }
      (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__InitialInsts_52, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherInitialInsts_53, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_69, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgTypes_51, &Result0_78);
      if ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55 = Result0_78;
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_inst_list\'/6", (MR_String) "length mismatch");
          return;
        }
      }
      check_hlds__mode_util__get_arg_lives_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgModes_47, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56);
      check_hlds__mode_util__get_arg_lives_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModuleInfo_49, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgModes_48, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57);
      check_hlds__mode_comparison__compare_liveness_list_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcArgLives_56, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcArgLives_57, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58);
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcInfo_45, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59);
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherProcInfo_46, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60);
      parse_tree__prog_data__determinism_components_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Detism_59, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_61, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_62);
      parse_tree__prog_data__determinism_components_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherDetism_60, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_63, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_64);
      parse_tree__prog_detism__compare_solncounts_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__SolnCount_62, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherSolnCount_64, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_65);
      switch ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareSolnCounts_65) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word CompareCanFails_67;

            parse_tree__prog_detism__compare_canfails_3_p_0((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CanFail_61, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__OtherCanFail_63, &CompareCanFails_67);
            switch (CompareCanFails_67) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 2;
                break;
              case (MR_Integer) 0:
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66 = (MR_Integer) 0;
          break;
      }
      switch ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareInsts_55) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 3:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
            case (MR_Integer) 2:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 1:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
          }
          break;
        case (MR_Integer) 3:
          {
            (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
          }
          break;
        case (MR_Integer) 2:
          switch ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 3:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
            case (MR_Integer) 2:
              (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareDet_66);
              break;
            case (MR_Integer) 1:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 1);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__CompareLives_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
            case (MR_Integer) 3:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 3);
              }
              break;
            case (MR_Integer) 2:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              {
                (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Var_35 == (MR_Integer) 1);
              }
              break;
          }
          break;
      }
      if ((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_proc_mode_0, &(env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__conv0_Var_34, (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcModes_21, check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

void MR_CALL 
check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word Procs_4,
  MR_Word ArgVars_5,
  MR_Integer * TheProcId_6,
  MR_Word * TheInstVarSub_7,
  MR_Word * TheArgModes_8)
{
  {
    struct check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

    (env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ModeInfo_1 = ModeInfo_1;
    (env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Procs_4 = Procs_4;
    (env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ArgVars_5 = ArgVars_5;
    while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.choose_best_match\'/8", (MR_String) "no best match");
          return;
        }
      }
      else
      {
        MR_Word ProcMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word InstVarSub_29;
        MR_Word ArgModes_30;

        (env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcModes_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        (env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcMode_20, (MR_Integer) 0)));
        InstVarSub_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcMode_20, (MR_Integer) 1)));
        ArgModes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcMode_20, (MR_Integer) 2)));
        check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_8_p_0_4(&env);
        if ((env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word next_value_of_HeadVar__2_2 = (env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcModes_21;

            HeadVar__2_2 = next_value_of_HeadVar__2_2;
          }
          continue;
        }
        else
        {
          *TheProcId_6 = (env).check_hlds__mode_comparison__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_98_101_115_116_95_109_97_116_99_104_95_95_91_51_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ProcId_28;
          *TheInstVarSub_7 = InstVarSub_29;
          *TheArgModes_8 = ArgModes_30;
        }
      }
      break;
    }
  }
}

static void MR_CALL 
check_hlds__mode_comparison__get_var_insts_3_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Inst_8;
    MR_Word Insts_9;

    check_hlds__modecheck_util__get_var_inst_3_p_0(ModeInfo_1, Var_6, &Inst_8);
    check_hlds__mode_comparison__get_var_insts_3_p_0(ModeInfo_1, Vars_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_comparison__modes_are_identical_bar_cc_4_p_0(
  MR_Integer ProcId_5,
  MR_Integer OtherProcId_6,
  MR_Word PredInfo_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_33_33;
    MR_Word Procs_9;
    MR_Word ProcInfo_10;
    MR_Word OtherProcInfo_11;
    MR_Word ProcArgModes_12;
    MR_Word OtherProcArgModes_13;
    MR_Word InitialInsts_14;
    MR_Word OtherInitialInsts_15;
    MR_Word ArgTypes_16;
    MR_Word FinalInsts_18;
    MR_Word OtherFinalInsts_19;
    MR_Word ProcArgLives_21;
    MR_Word OtherProcArgLives_22;
    MR_Word CompareLives_23;
    MR_Word Detism_24;
    MR_Word OtherDetism_25;
    MR_Word CanFail_26;
    MR_Word Solns_27;
    MR_Word OtherCanFail_28;
    MR_Word OtherSolns_29;
    MR_Word Var_31;
    MR_Box conv0_ProcInfo_10;
    MR_Box conv1_OtherProcInfo_11;
    MR_Word Result0_40;
    MR_Word Result0_50;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_7, &Procs_9);
    TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_33_33, Procs_9, ProcId_5, &conv0_ProcInfo_10);
    ProcInfo_10 = ((MR_Word) conv0_ProcInfo_10);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_33_33, Procs_9, OtherProcId_6, &conv1_OtherProcInfo_11);
    OtherProcInfo_11 = ((MR_Word) conv1_OtherProcInfo_11);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &ProcArgModes_12);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(OtherProcInfo_11, &OtherProcArgModes_13);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_8, ProcArgModes_12, &InitialInsts_14);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_8, OtherProcArgModes_13, &OtherInitialInsts_15);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_7, &ArgTypes_16);
    succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(ModuleInfo_8, InitialInsts_14, OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgTypes_16, &Result0_40);
    if (succeeded)
      succeeded = (Result0_40 == (MR_Integer) 2);
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_inst_list\'/6", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_8, ProcArgModes_12, &FinalInsts_18);
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_8, OtherProcArgModes_13, &OtherFinalInsts_19);
      Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(ModuleInfo_8, FinalInsts_18, OtherFinalInsts_19, Var_31, ArgTypes_16, &Result0_50);
      if (succeeded)
        succeeded = (Result0_50 == (MR_Integer) 2);
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_inst_list\'/6", (MR_String) "length mismatch");
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo_8, ProcArgModes_12, &ProcArgLives_21);
        check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo_8, OtherProcArgModes_13, &OtherProcArgLives_22);
        check_hlds__mode_comparison__compare_liveness_list_3_p_0(ProcArgLives_21, OtherProcArgLives_22, &CompareLives_23);
        succeeded = (CompareLives_23 == (MR_Integer) 2);
        if (succeeded)
        {
          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_10, &Detism_24);
          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(OtherProcInfo_11, &OtherDetism_25);
          parse_tree__prog_data__determinism_components_3_p_0(Detism_24, &CanFail_26, &Solns_27);
          parse_tree__prog_data__determinism_components_3_p_0(OtherDetism_25, &OtherCanFail_28, &OtherSolns_29);
          succeeded = (CanFail_26 == OtherCanFail_28);
          if (succeeded)
          {
            switch (Solns_27) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                succeeded = (OtherSolns_29 == (MR_Integer) 2);
                break;
              case (MR_Integer) 2:
                succeeded = (OtherSolns_29 == (MR_Integer) 3);
                break;
            }
            if (!(succeeded))
              succeeded = (Solns_27 == OtherSolns_29);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__mode_comparison__modes_are_indistinguishable_4_p_0(
  MR_Integer ProcId_5,
  MR_Integer OtherProcId_6,
  MR_Word PredInfo_7,
  MR_Word ModuleInfo_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_29_29;
    MR_Word Procs_9;
    MR_Word ProcInfo_10;
    MR_Word OtherProcInfo_11;
    MR_Word ProcArgModes_12;
    MR_Word OtherProcArgModes_13;
    MR_Word InitialInsts_14;
    MR_Word OtherInitialInsts_15;
    MR_Word ArgTypes_16;
    MR_Word ProcArgLives_18;
    MR_Word OtherProcArgLives_19;
    MR_Word CompareLives_20;
    MR_Word Detism_21;
    MR_Word OtherDetism_22;
    MR_Word Solns_24;
    MR_Word OtherSolns_26;
    MR_Box conv0_ProcInfo_10;
    MR_Box conv1_OtherProcInfo_11;
    MR_Word Result0_36;
    MR_Word _CanFail_23;
    MR_Word _OtherCanFail_25;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_7, &Procs_9);
    TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_29_29, Procs_9, ProcId_5, &conv0_ProcInfo_10);
    ProcInfo_10 = ((MR_Word) conv0_ProcInfo_10);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeCtorInfo_29_29, Procs_9, OtherProcId_6, &conv1_OtherProcInfo_11);
    OtherProcInfo_11 = ((MR_Word) conv1_OtherProcInfo_11);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &ProcArgModes_12);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(OtherProcInfo_11, &OtherProcArgModes_13);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_8, ProcArgModes_12, &InitialInsts_14);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_8, OtherProcArgModes_13, &OtherInitialInsts_15);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_7, &ArgTypes_16);
    succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(ModuleInfo_8, InitialInsts_14, OtherInitialInsts_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgTypes_16, &Result0_36);
    if (succeeded)
      succeeded = (Result0_36 == (MR_Integer) 2);
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_inst_list\'/6", (MR_String) "length mismatch");
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo_8, ProcArgModes_12, &ProcArgLives_18);
      check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo_8, OtherProcArgModes_13, &OtherProcArgLives_19);
      check_hlds__mode_comparison__compare_liveness_list_3_p_0(ProcArgLives_18, OtherProcArgLives_19, &CompareLives_20);
      succeeded = (CompareLives_20 == (MR_Integer) 2);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_10, &Detism_21);
        hlds__hlds_pred__proc_info_interface_determinism_2_p_0(OtherProcInfo_11, &OtherDetism_22);
        parse_tree__prog_data__determinism_components_3_p_0(Detism_21, &_CanFail_23, &Solns_24);
        parse_tree__prog_data__determinism_components_3_p_0(OtherDetism_22, &_OtherCanFail_25, &OtherSolns_26);
        succeeded = (Solns_24 == (MR_Integer) 2);
        if (succeeded)
          succeeded = (OtherSolns_26 == (MR_Integer) 2);
        if (!(succeeded))
        {
          succeeded = (Solns_24 == (MR_Integer) 2);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = (OtherSolns_26 == (MR_Integer) 2);
            succeeded = !(succeeded);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_comparison__compare_liveness_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Integer) 2;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_liveness_list\'/3", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_comparison", (MR_String) "predicate \140check_hlds.mode_comparison.compare_liveness_list\'/3", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word LiveB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word LiveBs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Result1_22;

      check_hlds__mode_comparison__compare_liveness_list_3_p_0(Var_23, LiveBs_19, &Result1_22);
      switch (Var_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (LiveB_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *HeadVar__3_3 = Result1_22;
              break;
            case (MR_Integer) 0:
              {
                *HeadVar__3_3 = ((&check_hlds__mode_comparison_vector_common_3[24 + Result1_22]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
              }
              break;
          }
          break;
        case (MR_Integer) 0:
          switch (LiveB_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *HeadVar__3_3 = ((&check_hlds__mode_comparison_vector_common_3[28 + Result1_22]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
              }
              break;
            case (MR_Integer) 0:
              *HeadVar__3_3 = Result1_22;
              break;
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_comparison__compare_inst_list_2_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          *HeadVar__6_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;

      succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
          if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word Var_20;
            MR_Word B_mi_A_49;

            succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(Var_39, Var_37, Var_41, ModuleInfo_1);
            if (succeeded)
              B_mi_A_49 = (MR_Integer) 1;
            else
              B_mi_A_49 = (MR_Integer) 0;
            Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(Var_37, Var_39, Var_41, ModuleInfo_1);
            if (succeeded)
            {
              MR_Word Result0_17;
              MR_Word Result1_18;

              switch (B_mi_A_49) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Result0_17 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word B_mf_A_55;

                    succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(Var_39, Var_37, Var_41, ModuleInfo_1);
                    if (succeeded)
                      B_mf_A_55 = (MR_Integer) 1;
                    else
                      B_mf_A_55 = (MR_Integer) 0;
                    succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(Var_37, Var_39, Var_41, ModuleInfo_1);
                    if (succeeded)
                      switch (B_mf_A_55) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          Result0_17 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          Result0_17 = (MR_Integer) 2;
                          break;
                      }
                    else
                      switch (B_mf_A_55) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          Result0_17 = (MR_Integer) 3;
                          break;
                        case (MR_Integer) 1:
                          Result0_17 = (MR_Integer) 1;
                          break;
                      }
                  }
                  break;
              }
              succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(ModuleInfo_1, Var_36, Var_38, Var_20, Var_40, &Result1_18);
              if (succeeded)
              {
                switch (Result0_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[0 + Result1_18]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                    }
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__6_6 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__6_6 = Result1_18;
                    break;
                  case (MR_Integer) 1:
                    {
                      *HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[4 + Result1_18]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                    }
                    break;
                }
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word Result1_79;

              succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(ModuleInfo_1, Var_36, Var_38, Var_20, Var_40, &Result1_79);
              if (succeeded)
              {
                switch (B_mi_A_49) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__6_6 = (MR_Integer) 3;
                    break;
                  case (MR_Integer) 1:
                    {
                      *HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[8 + Result1_79]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                    }
                    break;
                }
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            MR_Word ArgInst_26;
            MR_Word ArgInsts_27;
            MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word B_mi_A_65;

            succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0)));
              ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1)));
              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (ArgInst_26));
              }
              succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(Var_39, Var_37, Var_41, ModuleInfo_1);
              if (succeeded)
                B_mi_A_65 = (MR_Integer) 1;
              else
                B_mi_A_65 = (MR_Integer) 0;
              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ArgInsts_27));
              }
              succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(Var_37, Var_39, Var_41, ModuleInfo_1);
              if (succeeded)
              {
                MR_Word Result0_31;
                MR_Word Result1_32;

                switch (B_mi_A_65) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Result0_31 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgInst_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0)));
                      MR_Word Arg_mf_B_69;

                      succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(ArgInst_67, Var_39, Var_41, ModuleInfo_1);
                      if (succeeded)
                        Arg_mf_B_69 = (MR_Integer) 1;
                      else
                        Arg_mf_B_69 = (MR_Integer) 0;
                      succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(ArgInst_67, Var_37, Var_41, ModuleInfo_1);
                      if (succeeded)
                        switch (Arg_mf_B_69) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            Result0_31 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word B_mf_A_71;

                              succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(Var_39, Var_37, Var_41, ModuleInfo_1);
                              if (succeeded)
                                B_mf_A_71 = (MR_Integer) 1;
                              else
                                B_mf_A_71 = (MR_Integer) 0;
                              succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(Var_37, Var_39, Var_41, ModuleInfo_1);
                              if (succeeded)
                                switch (B_mf_A_71) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    Result0_31 = (MR_Integer) 0;
                                    break;
                                  case (MR_Integer) 1:
                                    Result0_31 = (MR_Integer) 2;
                                    break;
                                }
                              else
                                switch (B_mf_A_71) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    Result0_31 = (MR_Integer) 3;
                                    break;
                                  case (MR_Integer) 1:
                                    Result0_31 = (MR_Integer) 1;
                                    break;
                                }
                            }
                            break;
                        }
                      else
                        switch (Arg_mf_B_69) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word B_mf_A_89;

                              succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(Var_39, Var_37, Var_41, ModuleInfo_1);
                              if (succeeded)
                                B_mf_A_89 = (MR_Integer) 1;
                              else
                                B_mf_A_89 = (MR_Integer) 0;
                              succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(Var_37, Var_39, Var_41, ModuleInfo_1);
                              if (succeeded)
                                switch (B_mf_A_89) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    Result0_31 = (MR_Integer) 0;
                                    break;
                                  case (MR_Integer) 1:
                                    Result0_31 = (MR_Integer) 2;
                                    break;
                                }
                              else
                                switch (B_mf_A_89) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    Result0_31 = (MR_Integer) 3;
                                    break;
                                  case (MR_Integer) 1:
                                    Result0_31 = (MR_Integer) 1;
                                    break;
                                }
                            }
                            break;
                          case (MR_Integer) 1:
                            Result0_31 = (MR_Integer) 1;
                            break;
                        }
                    }
                    break;
                }
                succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(ModuleInfo_1, Var_36, Var_38, Var_35, Var_40, &Result1_32);
                if (succeeded)
                {
                  switch (Result0_31) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[12 + Result1_32]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                      }
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__6_6 = (MR_Integer) 3;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__6_6 = Result1_32;
                      break;
                    case (MR_Integer) 1:
                      {
                        *HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[16 + Result1_32]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                      }
                      break;
                  }
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word Result1_94;

                succeeded = check_hlds__mode_comparison__compare_inst_list_2_6_p_0(ModuleInfo_1, Var_36, Var_38, Var_35, Var_40, &Result1_94);
                if (succeeded)
                {
                  switch (B_mi_A_65) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__6_6 = (MR_Integer) 3;
                      break;
                    case (MR_Integer) 1:
                      {
                        *HeadVar__6_6 = ((&check_hlds__mode_comparison_vector_common_3[20 + Result1_94]))->check_hlds__mode_comparison__vector_common_type_3_0__vct_3_f_0;
                      }
                      break;
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_comparison____Unify____match_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_comparison____Compare____match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_comparison____Compare____match_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_comparison____Unify____proc_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_comparison____Unify____proc_mode_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_comparison____Compare____proc_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_comparison____Compare____proc_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
