/*
** Automatically generated from `mode_robdd.tfeirn.m'
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
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s {
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17;
  MR_Word * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7;
  MR_Word * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8;
  MR_Cont mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont;
  void * mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr;
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21;
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9;
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12;
  MR_Word mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13;
};

struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s {
  MR_Word * mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12;
  MR_Word * mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13;
  MR_Cont mode_robdd__tfeirn__labelling_4_p_0_env_0__cont;
  void * mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17;
  MR_Word mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18;
};


static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6];

static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6];

static const MR_DuFunctorDesc mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0;

static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1];

static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1];

static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1];

static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1];

static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0;

static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box * mode_robdd__tfeirn__wrapper_arg_2,
  MR_Box mode_robdd__tfeirn__wrapper_arg_3,
  MR_Box mode_robdd__tfeirn__wrapper_arg_4);

static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
  MR_Box * mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word mode_robdd__tfeirn__HeadVar__1_1);

static void MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_120_116_114_97_99_116_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_102_114_111_109_95_114_111_98_100_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(
  MR_Word * mode_robdd__tfeirn__Changed_6,
  MR_Word mode_robdd__tfeirn__Robdd0_7,
  MR_Word * mode_robdd__tfeirn__Robdd_8,
  MR_Word mode_robdd__tfeirn__EQVars0_9,
  MR_Word * mode_robdd__tfeirn__EQVars_10);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__RB_10);

static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
  MR_Word mode_robdd__tfeirn__Var_6,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_18,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_19);

static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__772__1_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_12,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_13,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_14);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__E_19,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_70,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_71);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__E_19,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_64,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_65);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__E_19,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_56,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_57);

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__E_19,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_50,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_51);

static MR_Word MR_CALL 
mode_robdd__tfeirn__x_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26,
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__RB_10);

static MR_Word MR_CALL 
mode_robdd__tfeirn__normalise_1_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_57,
  MR_Word mode_robdd__tfeirn__HeadVar__1_1);

static MR_bool MR_CALL 
mode_robdd__tfeirn__minimal_model_2_4_p_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
  MR_Word mode_robdd__tfeirn__Vars0_5,
  MR_Word mode_robdd__tfeirn__X0_6,
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
  MR_Word * mode_robdd__tfeirn__FalseVars_8);

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_1(
  void * mode_robdd__tfeirn__env_ptr_arg);

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_2(
  void * mode_robdd__tfeirn__env_ptr_arg);

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
  MR_Word mode_robdd__tfeirn__Vars0_5,
  MR_Word mode_robdd__tfeirn__X0_6,
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
  MR_Cont mode_robdd__tfeirn__cont,
  void * mode_robdd__tfeirn__cont_env_ptr);

static MR_Box MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
  MR_Box mode_robdd__tfeirn__wrapper_arg_3);

static void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0_1(
  void * mode_robdd__tfeirn__env_ptr_arg);

static MR_Box MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_4(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_3(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_2(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2);

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
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



static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_equiv_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_robdd_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1 = {
  &mercury__robdd__robdd__type_ctor_info_imp_vars_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &mode_robdd__tfeirn__term__pti_var_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mode_robdd__tfeirn__mode_robdd__tfeirn__field_types_tfeirn_1_0[6] = {
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__sparse_bitset__pti_sparse_bitset_1__pseudo_term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_equiv_vars_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_imp_vars_1__pseudo_1,
  (MR_PseudoTypeInfo) &mode_robdd__tfeirn__robdd__pti_robdd_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString mode_robdd__tfeirn__mode_robdd__tfeirn__field_names_tfeirn_1_0[6] = {
  (MR_String) "true_vars",
  (MR_String) "false_vars",
  (MR_String) "equiv_vars",
  (MR_String) "imp_vars",
  (MR_String) "robdd",
  (MR_String) "normalised"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0[1] = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0
};

static const MR_DuPtagLayout mode_robdd__tfeirn__mode_robdd__tfeirn__du_ptag_ordered_tfeirn_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mode_robdd__tfeirn__mode_robdd__tfeirn__du_stag_ordered_tfeirn_1_0
  }
};

static const MR_DuFunctorDescPtr mode_robdd__tfeirn__mode_robdd__tfeirn__du_name_ordered_tfeirn_1[1] = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__du_functor_desc_tfeirn_1_0
};

static const MR_Integer mode_robdd__tfeirn__mode_robdd__tfeirn__functor_number_map_tfeirn_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 mode_robdd__tfeirn__mode_robdd__tfeirn__ti_tfeirn_1term__type_ctor_info_generic_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0_10001(
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;

    {
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
    return mode_robdd__tfeirn__succeeded;
  }
}

static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0_10001(
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box * mode_robdd__tfeirn__wrapper_arg_2,
  MR_Box mode_robdd__tfeirn__wrapper_arg_3,
  MR_Box mode_robdd__tfeirn__wrapper_arg_4)
{
  {
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__1_1;

    {
      mode_robdd__tfeirn____Compare____tfeirn_1_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), &mode_robdd__tfeirn__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_4));
    }
    *mode_robdd__tfeirn__wrapper_arg_2 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0_10001(
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;

    {
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_0_0(((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    return mode_robdd__tfeirn__succeeded;
  }
}

static void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0_10001(
  MR_Box * mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
{
  {
    MR_Word mode_robdd__tfeirn__conv0_HeadVar__1_1;

    {
      mode_robdd__tfeirn____Compare____tfeirn_0_0(&mode_robdd__tfeirn__conv0_HeadVar__1_1, ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
    *mode_robdd__tfeirn__wrapper_arg_1 = ((MR_Box) (mode_robdd__tfeirn__conv0_HeadVar__1_1));
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_110_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0(void)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__Var_2;
    MR_Word mode_robdd__tfeirn__Var_3;
    MR_Word mode_robdd__tfeirn__Var_4;
    MR_Word mode_robdd__tfeirn__Var_5;
    MR_Word mode_robdd__tfeirn__Var_6;
    MR_Word mode_robdd__tfeirn__Var_7;

    {
      mode_robdd__tfeirn__Var_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
    {
      mode_robdd__tfeirn__Var_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
    {
      mode_robdd__tfeirn__Var_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    {
      mode_robdd__tfeirn__Var_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    {
      mode_robdd__tfeirn__Var_6 = mercury__robdd__one_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    mode_robdd__tfeirn__Var_7 = (MR_Integer) 1;
    {
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_2));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_3));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_4));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_7));
    }
    return mode_robdd__tfeirn__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0(void)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__Var_2;
    MR_Word mode_robdd__tfeirn__Var_3;
    MR_Word mode_robdd__tfeirn__Var_4;
    MR_Word mode_robdd__tfeirn__Var_5;
    MR_Word mode_robdd__tfeirn__Var_6;
    MR_Word mode_robdd__tfeirn__Var_7;

    {
      mode_robdd__tfeirn__Var_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
    {
      mode_robdd__tfeirn__Var_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
    {
      mode_robdd__tfeirn__Var_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    {
      mode_robdd__tfeirn__Var_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    {
      mode_robdd__tfeirn__Var_6 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    mode_robdd__tfeirn__Var_7 = (MR_Integer) 1;
    {
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_2));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_3));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_4));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_7));
    }
    return mode_robdd__tfeirn__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_44 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_46_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__TB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__TA1_16;
    MR_Word mode_robdd__tfeirn__TB1_17;
    MR_Word mode_robdd__tfeirn__FA1_18;
    MR_Word mode_robdd__tfeirn__FB1_19;
    MR_Word mode_robdd__tfeirn__EA1_20;
    MR_Word mode_robdd__tfeirn__EB1_21;
    MR_Word mode_robdd__tfeirn__IA1_22;
    MR_Word mode_robdd__tfeirn__IB1_23;
    MR_Word mode_robdd__tfeirn__RA1_24;
    MR_Word mode_robdd__tfeirn__RB1_25;
    MR_Word mode_robdd__tfeirn__TU_26;
    MR_Word mode_robdd__tfeirn__FU_27;
    MR_Word mode_robdd__tfeirn__EU_28;
    MR_Word mode_robdd__tfeirn__IU_29;
    MR_Word mode_robdd__tfeirn__Var_32;
    MR_Word mode_robdd__tfeirn__Var_33;
    MR_Word mode_robdd__tfeirn__Var_34;
    MR_Word mode_robdd__tfeirn__Var_35;
    MR_Word mode_robdd__tfeirn__Var_36;
    MR_Word mode_robdd__tfeirn__Var_37 = (MR_Integer) 0;
    MR_Word mode_robdd__tfeirn__Var_38;
    MR_Word mode_robdd__tfeirn__Var_39;
    MR_Word mode_robdd__tfeirn__Var_40;
    MR_Word mode_robdd__tfeirn__Var_41;
    MR_Word mode_robdd__tfeirn__Var_42;
    MR_Word mode_robdd__tfeirn__Var_43;
    MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_30;
    MR_Word mode_robdd__tfeirn__Var_31;

    {
      mode_robdd__tfeirn__TU_26 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__TA_4, mode_robdd__tfeirn__TB_10);
    }
    {
      mode_robdd__tfeirn__FU_27 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__FA_5, mode_robdd__tfeirn__FB_11);
    }
    {
      mode_robdd__tfeirn__EU_28 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__EB_12);
    }
    {
      mode_robdd__tfeirn__IU_29 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__IB_13);
    }
    mode_robdd__tfeirn__Var_40 = (MR_Integer) 0;
    {
      mode_robdd__tfeirn__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 4) = ((MR_Box) (mode_robdd__tfeirn__RA_8));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_40));
    }
    {
      mode_robdd__tfeirn__Var_38 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__Var_39);
    }
    mode_robdd__tfeirn__TA1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 0)));
    mode_robdd__tfeirn__FA1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 1)));
    mode_robdd__tfeirn__EA1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 2)));
    mode_robdd__tfeirn__IA1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 3)));
    mode_robdd__tfeirn__RA1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 5)));
    mode_robdd__tfeirn__Var_43 = (MR_Integer) 0;
    {
      mode_robdd__tfeirn__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_14));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_43));
    }
    {
      mode_robdd__tfeirn__Var_41 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__Var_42);
    }
    mode_robdd__tfeirn__TB1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 0)));
    mode_robdd__tfeirn__FB1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 1)));
    mode_robdd__tfeirn__EB1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 2)));
    mode_robdd__tfeirn__IB1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 3)));
    mode_robdd__tfeirn__RB1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 5)));
    {
      mode_robdd__tfeirn__Var_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__TA1_16, mode_robdd__tfeirn__TB1_17);
    }
    {
      mode_robdd__tfeirn__Var_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, mode_robdd__tfeirn__FA1_18, mode_robdd__tfeirn__FB1_19);
    }
    {
      mode_robdd__tfeirn__Var_34 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA1_20, mode_robdd__tfeirn__EB1_21);
    }
    {
      mode_robdd__tfeirn__Var_35 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA1_22, mode_robdd__tfeirn__IB1_23);
    }
    {
      mode_robdd__tfeirn__Var_36 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__RA1_24, mode_robdd__tfeirn__RB1_25);
    }
    {
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_32));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_33));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_34));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_35));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_36));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_37));
    }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv6_LambdaHeadVar__3_72;

    {
      mode_robdd__tfeirn__conv6_LambdaHeadVar__3_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv6_LambdaHeadVar__3_72));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv4_LambdaHeadVar__3_66;

    {
      mode_robdd__tfeirn__conv4_LambdaHeadVar__3_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv4_LambdaHeadVar__3_66));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv2_LambdaHeadVar__3_58;

    {
      mode_robdd__tfeirn__conv2_LambdaHeadVar__3_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv2_LambdaHeadVar__3_58));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv0_LambdaHeadVar__3_52;

    {
      mode_robdd__tfeirn__conv0_LambdaHeadVar__3_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv0_LambdaHeadVar__3_52));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__X_16;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TA0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EA0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RA0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__TB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__NA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__NB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_92;

    {
      mode_robdd__tfeirn__Var_92 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA0_8, mode_robdd__tfeirn__Var_92);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__2_2;
    else
      {
        MR_Word mode_robdd__tfeirn__Var_93;

        {
          mode_robdd__tfeirn__Var_93 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RB0_14, mode_robdd__tfeirn__Var_93);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__1_1;
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_87_87 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_89;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_90_90;
            MR_Word mode_robdd__tfeirn__TypeInfo_91_91;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_98_98;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_99_99;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_100_100;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_101_101;
            MR_Word mode_robdd__tfeirn__T_17;
            MR_Word mode_robdd__tfeirn__F_18;
            MR_Word mode_robdd__tfeirn__E_19;
            MR_Word mode_robdd__tfeirn__I_20;
            MR_Word mode_robdd__tfeirn__R_21;
            MR_Word mode_robdd__tfeirn__EA_22;
            MR_Word mode_robdd__tfeirn__EB_23;
            MR_Word mode_robdd__tfeirn__IA_24;
            MR_Word mode_robdd__tfeirn__IB_25;
            MR_Word mode_robdd__tfeirn__RA_26;
            MR_Word mode_robdd__tfeirn__RB_27;
            MR_Word mode_robdd__tfeirn__TAB_28;
            MR_Word mode_robdd__tfeirn__FAB_29;
            MR_Word mode_robdd__tfeirn__TBA_30;
            MR_Word mode_robdd__tfeirn__FBA_31;
            MR_Word mode_robdd__tfeirn__EAB_32;
            MR_Word mode_robdd__tfeirn__EBA_33;
            MR_Word mode_robdd__tfeirn__RA1_34;
            MR_Word mode_robdd__tfeirn__RA2_37;
            MR_Word mode_robdd__tfeirn__EA1_38;
            MR_Word mode_robdd__tfeirn__RA3_39;
            MR_Word mode_robdd__tfeirn__IA1_40;
            MR_Word mode_robdd__tfeirn__RB1_41;
            MR_Word mode_robdd__tfeirn__RB2_42;
            MR_Word mode_robdd__tfeirn__EB1_43;
            MR_Word mode_robdd__tfeirn__RB3_44;
            MR_Word mode_robdd__tfeirn__IB1_45;
            MR_Word mode_robdd__tfeirn__Var_46 = (MR_Integer) 0;
            MR_Word mode_robdd__tfeirn__Var_47;
            MR_Word mode_robdd__tfeirn__Var_48;
            MR_Word mode_robdd__tfeirn__Var_49;
            MR_Word mode_robdd__tfeirn__Var_55;
            MR_Word mode_robdd__tfeirn__Var_61;
            MR_Word mode_robdd__tfeirn__Var_62;
            MR_Word mode_robdd__tfeirn__Var_63;
            MR_Word mode_robdd__tfeirn__Var_69;
            MR_Word mode_robdd__tfeirn__Var_75;
            MR_Word mode_robdd__tfeirn__Var_76;
            MR_Box mode_robdd__tfeirn__conv1_RA1_34;
            MR_Box mode_robdd__tfeirn__conv3_RA2_37;
            MR_Box mode_robdd__tfeirn__conv5_RB1_41;
            MR_Box mode_robdd__tfeirn__conv7_RB2_42;

            {
              mode_robdd__tfeirn__T_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TA0_4, mode_robdd__tfeirn__TB0_10);
            }
            {
              mode_robdd__tfeirn__F_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FA0_5, mode_robdd__tfeirn__FB0_11);
            }
            {
              mode_robdd__tfeirn__TAB_28 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TA0_4, mode_robdd__tfeirn__TB0_10);
            }
            {
              mode_robdd__tfeirn__FAB_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FA0_5, mode_robdd__tfeirn__FB0_11);
            }
            {
              mode_robdd__tfeirn__Var_47 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TAB_28, mode_robdd__tfeirn__EA0_6);
            }
            {
              mode_robdd__tfeirn__EA_22 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FAB_29, mode_robdd__tfeirn__Var_47);
            }
            {
              mode_robdd__tfeirn__TBA_30 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__TB0_10, mode_robdd__tfeirn__TA0_4);
            }
            {
              mode_robdd__tfeirn__FBA_31 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, mode_robdd__tfeirn__FB0_11, mode_robdd__tfeirn__FA0_5);
            }
            {
              mode_robdd__tfeirn__Var_48 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TBA_30, mode_robdd__tfeirn__EB0_12);
            }
            {
              mode_robdd__tfeirn__EB_23 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FBA_31, mode_robdd__tfeirn__Var_48);
            }
            {
              mode_robdd__tfeirn__E_19 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
            {
              mode_robdd__tfeirn__EAB_32 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
            {
              mode_robdd__tfeirn__IA_24 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EAB_32, mode_robdd__tfeirn__IA0_7);
            }
            {
              mode_robdd__tfeirn__EBA_33 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
            {
              mode_robdd__tfeirn__IB_25 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EBA_33, mode_robdd__tfeirn__IB0_13);
            }
            {
              mode_robdd__tfeirn__I_20 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            mode_robdd__tfeirn__TypeClassInfo_for_enum_89 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            mode_robdd__tfeirn__TypeCtorInfo_90_90 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
            mode_robdd__tfeirn__TypeInfo_91_91 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[3];
            {
              mode_robdd__tfeirn__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_1));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
            }
            mode_robdd__tfeirn__TypeCtorInfo_98_98 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            {
              mode_robdd__tfeirn__conv1_RA1_34 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_98_98, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__Var_49, mode_robdd__tfeirn__TAB_28, ((MR_Box) (mode_robdd__tfeirn__RA0_8)));
            }
            mode_robdd__tfeirn__RA1_34 = ((MR_Word) mode_robdd__tfeirn__conv1_RA1_34);
            {
              mode_robdd__tfeirn__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
            }
            mode_robdd__tfeirn__TypeCtorInfo_99_99 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            {
              mode_robdd__tfeirn__conv3_RA2_37 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_99_99, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__Var_55, mode_robdd__tfeirn__FAB_29, ((MR_Box) (mode_robdd__tfeirn__RA1_34)));
            }
            mode_robdd__tfeirn__RA2_37 = ((MR_Word) mode_robdd__tfeirn__conv3_RA2_37);
            {
              mode_robdd__tfeirn__Var_61 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
            {
              mode_robdd__tfeirn__EA1_38 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_61, mode_robdd__tfeirn__EA0_6);
            }
            {
              mode_robdd__tfeirn__RA3_39 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA1_38, mode_robdd__tfeirn__RA2_37);
            }
            {
              mode_robdd__tfeirn__Var_62 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
            {
              mode_robdd__tfeirn__IA1_40 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_62, mode_robdd__tfeirn__IA0_7);
            }
            {
              mode_robdd__tfeirn__RA_26 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA1_40, mode_robdd__tfeirn__RA3_39);
            }
            {
              mode_robdd__tfeirn__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_3));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
            }
            mode_robdd__tfeirn__TypeCtorInfo_100_100 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            {
              mode_robdd__tfeirn__conv5_RB1_41 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_100_100, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__Var_63, mode_robdd__tfeirn__TBA_30, ((MR_Box) (mode_robdd__tfeirn__RB0_14)));
            }
            mode_robdd__tfeirn__RB1_41 = ((MR_Word) mode_robdd__tfeirn__conv5_RB1_41);
            {
              mode_robdd__tfeirn__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_43_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0_4));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
            }
            mode_robdd__tfeirn__TypeCtorInfo_101_101 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            {
              mode_robdd__tfeirn__conv7_RB2_42 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_101_101, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, mode_robdd__tfeirn__Var_69, mode_robdd__tfeirn__FBA_31, ((MR_Box) (mode_robdd__tfeirn__RB1_41)));
            }
            mode_robdd__tfeirn__RB2_42 = ((MR_Word) mode_robdd__tfeirn__conv7_RB2_42);
            {
              mode_robdd__tfeirn__Var_75 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
            {
              mode_robdd__tfeirn__EB1_43 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_75, mode_robdd__tfeirn__EB0_12);
            }
            {
              mode_robdd__tfeirn__RB3_44 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB1_43, mode_robdd__tfeirn__RB2_42);
            }
            {
              mode_robdd__tfeirn__Var_76 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB_25, mode_robdd__tfeirn__IA_24);
            }
            {
              mode_robdd__tfeirn__IB1_45 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_76, mode_robdd__tfeirn__IB0_13);
            }
            {
              mode_robdd__tfeirn__RB_27 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB1_45, mode_robdd__tfeirn__RB3_44);
            }
            {
              mode_robdd__tfeirn__R_21 = mercury__robdd__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA_26, mode_robdd__tfeirn__RB_27);
            }
            {
              mode_robdd__tfeirn__X_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 0) = ((MR_Box) (mode_robdd__tfeirn__T_17));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 1) = ((MR_Box) (mode_robdd__tfeirn__F_18));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 2) = ((MR_Box) (mode_robdd__tfeirn__E_19));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 3) = ((MR_Box) (mode_robdd__tfeirn__I_20));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 4) = ((MR_Box) (mode_robdd__tfeirn__R_21));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_46));
            }
          }
      }
    return mode_robdd__tfeirn__X_16;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_27_27, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_28_28, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__F_7, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__Var_12;
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_13 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_27_27, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_28_28, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__T_7, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__Var_12;
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_13 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word mode_robdd__tfeirn__VarA_5,
  MR_Word mode_robdd__tfeirn__VarB_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

    {
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34;

      {
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
      if (mode_robdd__tfeirn__succeeded)
        {
          mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
          {
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
          }
        }
    }
    if (!(mode_robdd__tfeirn__succeeded))
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
          }
      }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
    else
      {
        {
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_37_37 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38;

          {
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_37_37, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
          if (mode_robdd__tfeirn__succeeded)
            {
              mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
              {
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_38_38, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
              }
            }
        }
        if (!(mode_robdd__tfeirn__succeeded))
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40;

            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
                {
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
                }
              }
          }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
        else
          {
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_15;

            {
              mode_robdd__tfeirn__Var_14 = mode_robdd__equiv_vars__add_equality_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__E_10);
            }
            mode_robdd__tfeirn__Var_15 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__I_11));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word mode_robdd__tfeirn__VarA_5,
  MR_Word mode_robdd__tfeirn__VarB_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

    {
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34;

      {
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
      if (mode_robdd__tfeirn__succeeded)
        {
          mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
          {
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
          }
        }
    }
    if (!(mode_robdd__tfeirn__succeeded))
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
          }
      }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
    else
      {
        {
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_37_37 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38;

          {
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_37_37, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
          if (mode_robdd__tfeirn__succeeded)
            {
              mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
              {
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_38_38, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
              }
            }
        }
        if (!(mode_robdd__tfeirn__succeeded))
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40;

            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
                {
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
                }
              }
          }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
        else
          {
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_15;

            {
              mode_robdd__tfeirn__Var_14 = mode_robdd__implications__neq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
            }
            mode_robdd__tfeirn__Var_15 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_109_112_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word mode_robdd__tfeirn__VarA_5,
  MR_Word mode_robdd__tfeirn__VarB_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30;

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_29_29, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_30_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
        }
      }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_31_31, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_32_32 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_32_32, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
            if (mode_robdd__tfeirn__succeeded)
              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
            else
              {
                MR_Word mode_robdd__tfeirn__Var_14;
                MR_Word mode_robdd__tfeirn__Var_15;

                {
                  mode_robdd__tfeirn__Var_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                }
                mode_robdd__tfeirn__Var_15 = (MR_Integer) 0;
                {
                  mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
                }
              }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__Vars_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_6);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__Var_12;

        {
          mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_7);
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__Var_12);
        }
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__Var_13;
            MR_Word mode_robdd__tfeirn__Var_14;

            {
              mode_robdd__tfeirn__Var_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__Vars_4);
            }
            mode_robdd__tfeirn__Var_14 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__Vars_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_6);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__Var_12;

        {
          mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, mode_robdd__tfeirn__Var_12);
        }
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__Var_13;
            MR_Word mode_robdd__tfeirn__Var_14;

            {
              mode_robdd__tfeirn__Var_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__Vars_4);
            }
            mode_robdd__tfeirn__Var_14 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__Vars_4,
  MR_Word mode_robdd__tfeirn__X0_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__X_6;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_22 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn___N_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__Var_18;

    {
      mode_robdd__tfeirn__Var_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_24_24, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_24_24, mode_robdd__tfeirn__Var_18);
    }
    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__X0_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_26_26, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_8);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__VarsNF_13;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_30;
            MR_Word mode_robdd__tfeirn__Var1_14;
            MR_Word mode_robdd__tfeirn__VarsNF1_15;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29;
            MR_Box mode_robdd__tfeirn__conv0_Var1_14;

            {
              mode_robdd__tfeirn__VarsNF_13 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_8);
            }
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            mode_robdd__tfeirn__TypeClassInfo_for_enum_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv0_Var1_14, mode_robdd__tfeirn__VarsNF_13, &mode_robdd__tfeirn__VarsNF1_15);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__Var1_14 = ((MR_Word) mode_robdd__tfeirn__conv0_Var1_14);
                mode_robdd__tfeirn__succeeded = MR_TRUE;
              }
            if (mode_robdd__tfeirn__succeeded)
              {
                MR_Word mode_robdd__tfeirn__Var2_16;
                MR_Word mode_robdd__tfeirn__VarsNF2_17;
                MR_Box mode_robdd__tfeirn__conv1_Var2_16;

                {
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv1_Var2_16, mode_robdd__tfeirn__VarsNF1_15, &mode_robdd__tfeirn__VarsNF2_17);
                }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    mode_robdd__tfeirn__Var2_16 = ((MR_Word) mode_robdd__tfeirn__conv1_Var2_16);
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
                  }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    {
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__VarsNF2_17);
                    }
                    if (mode_robdd__tfeirn__succeeded)
                      {
                        MR_Word mode_robdd__tfeirn__Var_19;
                        MR_Word mode_robdd__tfeirn__Var_20;

                        {
                          mode_robdd__tfeirn__Var_19 = mode_robdd__implications__either_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__Var2_16, mode_robdd__tfeirn__I_10);
                        }
                        mode_robdd__tfeirn__Var_20 = (MR_Integer) 0;
                        {
                          mode_robdd__tfeirn__X_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 2) = ((MR_Box) (mode_robdd__tfeirn__E_9));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_19));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 4) = ((MR_Box) (mode_robdd__tfeirn__R_11));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_20));
                        }
                      }
                    else
                      {
                        MR_Word mode_robdd__tfeirn__Var_21;

                        {
                          mode_robdd__tfeirn__Var_21 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__VarsNF_13);
                        }
                        {
                          mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__X0_5, mode_robdd__tfeirn__Var_21);
                        }
                      }
                  }
                else
                  {
                    mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__X0_5);
                  }
              }
            else
              {
                mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
              }
          }
      }
    return mode_robdd__tfeirn__X_6;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_97_116_95_109_111_115_116_95_111_110_101_95_111_102_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__Vars_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Integer mode_robdd__tfeirn__Var_12;
    MR_Integer mode_robdd__tfeirn__Var_13;
    MR_Word mode_robdd__tfeirn__Var_14;

    {
      mode_robdd__tfeirn__Var_14 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_22_22, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__F_6);
    }
    {
      mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__Var_14);
    }
    mode_robdd__tfeirn__Var_13 = (MR_Integer) 1;
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_12 <= mode_robdd__tfeirn__Var_13);
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Integer mode_robdd__tfeirn__Var_15;
        MR_Integer mode_robdd__tfeirn__Var_16;
        MR_Word mode_robdd__tfeirn__Var_17;

        {
          mode_robdd__tfeirn__Var_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_26_26, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__T_7);
        }
        {
          mode_robdd__tfeirn__Var_15 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__Var_17);
        }
        mode_robdd__tfeirn__Var_16 = (MR_Integer) 1;
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_15 > mode_robdd__tfeirn__Var_16);
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
          }
        else
          {
            MR_Word mode_robdd__tfeirn__Var_18;
            MR_Word mode_robdd__tfeirn__Var_19;

            {
              mode_robdd__tfeirn__Var_18 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__I_9);
            }
            mode_robdd__tfeirn__Var_19 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_18));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_19));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_98_111_116_104_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word mode_robdd__tfeirn__VarA_5,
  MR_Word mode_robdd__tfeirn__VarB_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_33_33 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_33_33, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarA_5);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_34_34, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarB_6);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_35_35, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarA_5);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__X_7);
              }
            else
              {
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
                MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
                MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

                {
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_36_36, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarB_6);
                }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__X_7);
                  }
                else
                  {
                    MR_Word mode_robdd__tfeirn__Var_14;
                    MR_Word mode_robdd__tfeirn__Var_15;

                    {
                      mode_robdd__tfeirn__Var_14 = mode_robdd__implications__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                    }
                    mode_robdd__tfeirn__Var_15 = (MR_Integer) 0;
                    {
                      mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_9));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
                    }
                  }
              }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_111_95_99_111_110_115_116_114_97_105_110_116_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__V_in_6,
  MR_Word mode_robdd__tfeirn__V_out_7,
  MR_Word mode_robdd__tfeirn__V__8,
  MR_Word mode_robdd__tfeirn__X_9)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__5_5;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16;
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_19;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20;
    MR_Word mode_robdd__tfeirn__Vars_10;
    MR_Word mode_robdd__tfeirn__Var_11;
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_13;
    MR_Word mode_robdd__tfeirn__Var_14;

    {
      mode_robdd__tfeirn__Var_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_98_111_116_104_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__V_in_6, mode_robdd__tfeirn__V__8, mode_robdd__tfeirn__X_9);
    }
    mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    mode_robdd__tfeirn__TypeClassInfo_for_enum_19 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    mode_robdd__tfeirn__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mode_robdd__tfeirn__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_13, 0) = ((MR_Box) (mode_robdd__tfeirn__V__8));
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_13, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
    }
    {
      mode_robdd__tfeirn__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_12, 0) = ((MR_Box) (mode_robdd__tfeirn__V_in_6));
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_12, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
    }
    mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    {
      mode_robdd__tfeirn__Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__TypeCtorInfo_20_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_19, mode_robdd__tfeirn__Var_12);
    }
    {
      mode_robdd__tfeirn__HeadVar__5_5 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__V_out_7, mode_robdd__tfeirn__Var_11);
    }
    return mode_robdd__tfeirn__HeadVar__5_5;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv1_LambdaHeadVar__3_20;

    {
      mode_robdd__tfeirn__conv1_LambdaHeadVar__3_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv1_LambdaHeadVar__3_20));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(
  MR_Word mode_robdd__tfeirn__Vars_5,
  MR_Word mode_robdd__tfeirn__Var_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_21 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn___E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn___I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn___R_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn___N_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_25 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_45_45, mode_robdd__tfeirn__TypeClassInfo_for_enum_25, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__Var_6);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_23_23, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
        else
          {
            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_106_95_110_111_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
          }
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_31 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_46_46 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_46_46, mode_robdd__tfeirn__TypeClassInfo_for_enum_31, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__Var_6);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_29_29, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
              }
            else
              {
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
              }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_35_35 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__Var_16;

            {
              mode_robdd__tfeirn__Var_16 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_35_35, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__T_9);
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_35_35, mode_robdd__tfeirn__Var_16);
            }
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
              }
            else
              {
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mode_robdd__tfeirn__TypeInfo_37_37 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

                {
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_37_37, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__F_8);
                }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                  }
                else
                  {
                    MR_Word mode_robdd__tfeirn__TypeInfo_39_39 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
                    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_41 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
                    MR_Word mode_robdd__tfeirn__Var1_10;
                    MR_Word mode_robdd__tfeirn__Vars1_11;
                    MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
                    MR_Box mode_robdd__tfeirn__conv0_Var1_10;

                    {
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_41, &mode_robdd__tfeirn__conv0_Var1_10, mode_robdd__tfeirn__Vars_5, &mode_robdd__tfeirn__Vars1_11);
                    }
                    if (mode_robdd__tfeirn__succeeded)
                      {
                        mode_robdd__tfeirn__Var1_10 = ((MR_Word) mode_robdd__tfeirn__conv0_Var1_10);
                        mode_robdd__tfeirn__succeeded = MR_TRUE;
                      }
                    if (mode_robdd__tfeirn__succeeded)
                      {
                        {
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_39_39, mode_robdd__tfeirn__Vars1_11);
                        }
                        if (mode_robdd__tfeirn__succeeded)
                          {
                            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_113_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var1_10, mode_robdd__tfeirn__X_7);
                          }
                        else
                          {
                            MR_Word mode_robdd__tfeirn__TypeInfo_for_T_65 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_70;
                            MR_Word mode_robdd__tfeirn__TypeInfo_29_71;
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_72;
                            MR_Word mode_robdd__tfeirn__Var_17;
                            MR_Word mode_robdd__tfeirn__Var_18;
                            MR_Word mode_robdd__tfeirn__Var_19;
                            MR_Word mode_robdd__tfeirn__Var_20;
                            MR_Word mode_robdd__tfeirn__T_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
                            MR_Word mode_robdd__tfeirn__F_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
                            MR_Word mode_robdd__tfeirn__E_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
                            MR_Word mode_robdd__tfeirn__I0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
                            MR_Word mode_robdd__tfeirn__R_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
                            MR_Word mode_robdd__tfeirn__I_55;
                            MR_Word mode_robdd__tfeirn__Var_58 = (MR_Integer) 0;
                            MR_Word mode_robdd__tfeirn__Var_59;
                            MR_Word mode_robdd__tfeirn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
                            MR_Box mode_robdd__tfeirn__conv2_I_55;

                            {
                              mode_robdd__tfeirn__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_59, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[1]));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_59, 1) = ((MR_Box) (mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_115_106_95_118_97_114_115_95_101_113_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_f_0_1));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_59, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_65));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_59, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
                            }
                            mode_robdd__tfeirn__TypeCtorInfo_28_70 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
                            mode_robdd__tfeirn__TypeInfo_29_71 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[2];
                            mode_robdd__tfeirn__TypeCtorInfo_30_72 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
                            {
                              mode_robdd__tfeirn__conv2_I_55 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeCtorInfo_30_72, mode_robdd__tfeirn__TypeInfo_29_71, mode_robdd__tfeirn__TypeClassInfo_for_enum_41, mode_robdd__tfeirn__Var_59, mode_robdd__tfeirn__Vars_5, ((MR_Box) (mode_robdd__tfeirn__I0_52)));
                            }
                            mode_robdd__tfeirn__I_55 = ((MR_Word) mode_robdd__tfeirn__conv2_I_55);
                            {
                              mode_robdd__tfeirn__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 0) = ((MR_Box) (mode_robdd__tfeirn__T_49));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 1) = ((MR_Box) (mode_robdd__tfeirn__F_50));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 2) = ((MR_Box) (mode_robdd__tfeirn__E_51));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 3) = ((MR_Box) (mode_robdd__tfeirn__I_55));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 4) = ((MR_Box) (mode_robdd__tfeirn__R_53));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_58));
                            }
                            {
                              mode_robdd__tfeirn__Var_19 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6);
                            }
                            {
                              mode_robdd__tfeirn__Var_20 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5);
                            }
                            {
                              mode_robdd__tfeirn__Var_18 = mercury__robdd__f_less_or_equal_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_19, mode_robdd__tfeirn__Var_20);
                            }
                            {
                              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_17, mode_robdd__tfeirn__Var_18);
                            }
                          }
                      }
                    else
                      {
                        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_116_95_118_97_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                      }
                  }
              }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_114_101_115_116_114_105_99_116_95_116_114_117_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__X_11;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_47_47 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_47_47, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_48_48, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_49_49, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
            {
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
            }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_51_51;
            MR_Word mode_robdd__tfeirn__X0_12;
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_15;
            MR_Word mode_robdd__tfeirn__Var_16;
            MR_Word mode_robdd__tfeirn__Var_17;
            MR_Word mode_robdd__tfeirn__Var_18;
            MR_Word mode_robdd__tfeirn__Var_19;
            MR_Word mode_robdd__tfeirn__Var_20;
            MR_Word mode_robdd__tfeirn__Var_21;
            MR_Word mode_robdd__tfeirn__Var_22;
            MR_Word mode_robdd__tfeirn__Var_23;
            MR_Word mode_robdd__tfeirn__Var_25;
            MR_Word mode_robdd__tfeirn__Var_26;
            MR_Word mode_robdd__tfeirn__Var_27;
            MR_Word mode_robdd__tfeirn__Var_28;
            MR_Word mode_robdd__tfeirn__Var_29;
            MR_Word mode_robdd__tfeirn__Var_24;

            {
              mode_robdd__tfeirn__Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_50_50, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_16 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_16));
            }
            {
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__Var_14);
            }
            mode_robdd__tfeirn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
            mode_robdd__tfeirn__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            {
              mode_robdd__tfeirn__Var_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_51_51, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__Var_18, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_17));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_25));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_26));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_27));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_28));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_29));
            }
          }
      }
    return mode_robdd__tfeirn__X_11;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_114_101_115_116_114_105_99_116_95_102_97_108_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__X_11;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_47_47 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_47_47, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_48_48, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_49_49 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_49_49, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
            {
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
            }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_51_51;
            MR_Word mode_robdd__tfeirn__X0_12;
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_15;
            MR_Word mode_robdd__tfeirn__Var_16;
            MR_Word mode_robdd__tfeirn__Var_17;
            MR_Word mode_robdd__tfeirn__Var_18;
            MR_Word mode_robdd__tfeirn__Var_19;
            MR_Word mode_robdd__tfeirn__Var_20;
            MR_Word mode_robdd__tfeirn__Var_21;
            MR_Word mode_robdd__tfeirn__Var_22;
            MR_Word mode_robdd__tfeirn__Var_23;
            MR_Word mode_robdd__tfeirn__Var_24;
            MR_Word mode_robdd__tfeirn__Var_26;
            MR_Word mode_robdd__tfeirn__Var_27;
            MR_Word mode_robdd__tfeirn__Var_28;
            MR_Word mode_robdd__tfeirn__Var_29;
            MR_Word mode_robdd__tfeirn__Var_25;

            {
              mode_robdd__tfeirn__Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_50_50, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_16 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_16));
            }
            {
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__Var_14);
            }
            mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
            mode_robdd__tfeirn__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            {
              mode_robdd__tfeirn__Var_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_51_51, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__Var_18, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_24));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_17));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_26));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_27));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_28));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_29));
            }
          }
      }
    return mode_robdd__tfeirn__X_11;
  }
}

MR_bool MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0(
  MR_Word mode_robdd__tfeirn__X_3,
  MR_Word mode_robdd__tfeirn__V_4)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_12 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

    {
      MR_Word mode_robdd__tfeirn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
      MR_Word mode_robdd__tfeirn__Var_17;
      MR_Word mode_robdd__tfeirn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
      MR_Word mode_robdd__tfeirn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
      MR_Word mode_robdd__tfeirn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
      MR_Word mode_robdd__tfeirn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
      MR_Word mode_robdd__tfeirn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

      {
        mode_robdd__tfeirn__Var_17 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_12);
      }
      {
        mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var_17);
      }
    }
    if (!(mode_robdd__tfeirn__succeeded))
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_14_14 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_16 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
        MR_Word mode_robdd__tfeirn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_20_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_16, mode_robdd__tfeirn__Var_5, mode_robdd__tfeirn__V_4);
        }
      }
    return mode_robdd__tfeirn__succeeded;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word mode_robdd__tfeirn__X_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

    {
      mode_robdd__tfeirn__Var_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__Var_4, mode_robdd__tfeirn__Var_12);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mode_robdd__tfeirn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

        {
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
        }
      }
    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_115_95_100_105_115_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word mode_robdd__tfeirn__X_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

    {
      mode_robdd__tfeirn__Var_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__Var_4, mode_robdd__tfeirn__Var_12);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mode_robdd__tfeirn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

        {
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
        }
      }
    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

void MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_107_110_111_119_110_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_3_p_0(
  MR_Word mode_robdd__tfeirn__X_4,
  MR_Word * mode_robdd__tfeirn__TrueVars_5,
  MR_Word * mode_robdd__tfeirn__FalseVars_6)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_18 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_21;
    MR_Word mode_robdd__tfeirn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));

    {
      mode_robdd__tfeirn__Var_21 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_18);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_18, mode_robdd__tfeirn__Var_7, mode_robdd__tfeirn__Var_21);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];

        {
          *mode_robdd__tfeirn__TrueVars_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
        {
          *mode_robdd__tfeirn__FalseVars_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
      }
    else
      {
        MR_Word mode_robdd__tfeirn__Var_9;
        MR_Word mode_robdd__tfeirn__Var_10;
        MR_Word mode_robdd__tfeirn__Var_11;
        MR_Word mode_robdd__tfeirn__Var_12;

        *mode_robdd__tfeirn__TrueVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
        *mode_robdd__tfeirn__FalseVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
        mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
        mode_robdd__tfeirn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
        mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
        mode_robdd__tfeirn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));
      }
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_39_39 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_39_39, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
        MR_Word mode_robdd__tfeirn__Var_12;

        {
          mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_40_40, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
        {
          mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
        }
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeCtorInfo_41_41, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_42_42 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeCtorInfo_42_42, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
            }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__L_11;

            {
              mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_101_97_100_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7, &mode_robdd__tfeirn__L_11);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                {
                  mode_robdd__tfeirn__succeeded = mercury__term____Unify____var_1_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__L_11, mode_robdd__tfeirn__V_4);
                }
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
                if (mode_robdd__tfeirn__succeeded)
                  {
                    MR_Word mode_robdd__tfeirn__Var_14;

                    {
                      mode_robdd__tfeirn__Var_14 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
                    {
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
                    }
                  }
                else
                  {
                    MR_Word mode_robdd__tfeirn__Var_15;
                    MR_Word mode_robdd__tfeirn__Var_16;
                    MR_Word mode_robdd__tfeirn__Var_17;

                    {
                      mode_robdd__tfeirn__Var_15 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
                    {
                      mode_robdd__tfeirn__Var_16 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                    }
                    {
                      mode_robdd__tfeirn__Var_17 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                    }
                    {
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_16));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_17));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
                    }
                  }
              }
            else
              {
                MR_Word mode_robdd__tfeirn__Var_18;
                MR_Word mode_robdd__tfeirn__Var_19;

                {
                  mode_robdd__tfeirn__Var_18 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                }
                {
                  mode_robdd__tfeirn__Var_19 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                }
                {
                  mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_18));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_19));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
                }
              }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_116_104_114_101_115_104_111_108_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_11;
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_13;
    MR_Word mode_robdd__tfeirn__Var_14;
    MR_Word mode_robdd__tfeirn__Var_15;

    {
      mode_robdd__tfeirn__Var_11 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_5, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
    {
      mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_6, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
    {
      mode_robdd__tfeirn__Var_13 = mode_robdd__equiv_vars__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7);
    }
    {
      mode_robdd__tfeirn__Var_14 = mode_robdd__implications__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__I_8);
    }
    {
      mode_robdd__tfeirn__Var_15 = mercury__robdd__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
    }
    {
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_11));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
    }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_114_101_115_116_114_105_99_116_95_102_105_108_116_101_114_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__P_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) &mode_robdd__tfeirn_scalar_common_4[0];
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_11;
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_13;
    MR_Word mode_robdd__tfeirn__Var_14;
    MR_Word mode_robdd__tfeirn__Var_15;

    {
      mode_robdd__tfeirn__Var_11 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__T_5);
    }
    {
      mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__F_6);
    }
    {
      mode_robdd__tfeirn__Var_13 = mode_robdd__equiv_vars__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__E_7);
    }
    {
      mode_robdd__tfeirn__Var_14 = mode_robdd__implications__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__I_8);
    }
    {
      mode_robdd__tfeirn__Var_15 = mercury__robdd__restrict_filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__R_9);
    }
    {
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_11));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
    }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word mode_robdd__tfeirn__X_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;

    {
      mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__X_3);
    }
    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mode_robdd__tfeirn__succeeded;
        MR_Word mode_robdd__tfeirn__X_2;
        MR_Word mode_robdd__tfeirn__TypeInfo_for_T_57 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
        MR_Word mode_robdd__tfeirn__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word mode_robdd__tfeirn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));

        switch (mode_robdd__tfeirn__Var_64) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mode_robdd__tfeirn__TypeCtorInfo_58_58 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
              MR_Word mode_robdd__tfeirn__TypeInfo_59_59 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
              MR_Word mode_robdd__tfeirn__Var_50;

              {
                mode_robdd__tfeirn__Var_50 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_59_59, mode_robdd__tfeirn__Var_69, mode_robdd__tfeirn__Var_68);
              }
              {
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_59_59, mode_robdd__tfeirn__Var_50);
              }
              mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
              if (mode_robdd__tfeirn__succeeded)
                {
                  mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                }
              else
                {
                  MR_Word mode_robdd__tfeirn__Changed0_18;
                  MR_Word mode_robdd__tfeirn__TrueVars1_19;
                  MR_Word mode_robdd__tfeirn__FalseVars1_20;
                  MR_Word mode_robdd__tfeirn__EQVars1_21;
                  MR_Word mode_robdd__tfeirn__Changed1_22;
                  MR_Word mode_robdd__tfeirn__TrueVars2_23;
                  MR_Word mode_robdd__tfeirn__FalseVars2_24;
                  MR_Word mode_robdd__tfeirn__ImpVars1_25;
                  MR_Word mode_robdd__tfeirn__Changed2_26;
                  MR_Word mode_robdd__tfeirn__Robdd1_27;
                  MR_Word mode_robdd__tfeirn__Changed3_28;
                  MR_Word mode_robdd__tfeirn__Var_51;
                  MR_Word mode_robdd__tfeirn__Changed0_79;
                  MR_Word mode_robdd__tfeirn__Changed1_80;
                  MR_Word mode_robdd__tfeirn__DCG_1_81;
                  MR_Word mode_robdd__tfeirn__NewTrueVars_29;
                  MR_Word mode_robdd__tfeirn__NewFalseVars_30;
                  MR_Word mode_robdd__tfeirn__Var_52;
                  MR_Word mode_robdd__tfeirn__Var_53;

                  {
                    mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&mode_robdd__tfeirn__Changed0_79, mode_robdd__tfeirn__Var_69, &mode_robdd__tfeirn__TrueVars1_19, mode_robdd__tfeirn__Var_67, &mode_robdd__tfeirn__DCG_1_81);
                  }
                  {
                    mode_robdd__equiv_vars__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_107_110_111_119_110_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&mode_robdd__tfeirn__Changed1_80, mode_robdd__tfeirn__Var_68, &mode_robdd__tfeirn__FalseVars1_20, mode_robdd__tfeirn__DCG_1_81, &mode_robdd__tfeirn__EQVars1_21);
                  }
                  {
                    mode_robdd__tfeirn__Changed0_18 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_79, mode_robdd__tfeirn__Changed1_80);
                  }
                  {
                    mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed1_22, mode_robdd__tfeirn__TrueVars1_19, &mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__FalseVars1_20, &mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__Var_66, &mode_robdd__tfeirn__ImpVars1_25);
                  }
                  {
                    mode_robdd__tfeirn__Changed2_26 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_18, mode_robdd__tfeirn__Changed1_22);
                  }
                  {
                    mode_robdd__tfeirn__Robdd1_27 = mercury__robdd__restrict_true_false_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__Var_65);
                  }
                  {
                    mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, mode_robdd__tfeirn__Var_65);
                  }
                  mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
                  if (mode_robdd__tfeirn__succeeded)
                    mode_robdd__tfeirn__Var_51 = (MR_Integer) 1;
                  else
                    mode_robdd__tfeirn__Var_51 = (MR_Integer) 0;
                  {
                    mode_robdd__tfeirn__Changed3_28 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed2_26, mode_robdd__tfeirn__Var_51);
                  }
                  {
                    mercury__robdd__definite_vars_3_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, &mode_robdd__tfeirn__Var_52, &mode_robdd__tfeirn__Var_53);
                  }
                  mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__Var_52)) == (MR_mktag((MR_Integer) 1)));
                  if (mode_robdd__tfeirn__succeeded)
                    {
                      mode_robdd__tfeirn__NewTrueVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_52, (MR_Integer) 0)));
                      mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__Var_53)) == (MR_mktag((MR_Integer) 1)));
                      if (mode_robdd__tfeirn__succeeded)
                        mode_robdd__tfeirn__NewFalseVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_53, (MR_Integer) 0)));
                    }
                  if (mode_robdd__tfeirn__succeeded)
                    {
                      MR_Word mode_robdd__tfeirn__Changed4_31;
                      MR_Word mode_robdd__tfeirn__TrueVars_32;
                      MR_Word mode_robdd__tfeirn__FalseVars_33;
                      MR_Word mode_robdd__tfeirn__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                      MR_Word mode_robdd__tfeirn__TypeInfo_61_61 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
                      MR_Word mode_robdd__tfeirn__Changed5_34;
                      MR_Word mode_robdd__tfeirn__ImpVars2_35;

                      {
                        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_61_61, mode_robdd__tfeirn__NewTrueVars_29);
                      }
                      if (mode_robdd__tfeirn__succeeded)
                        {
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_61_61, mode_robdd__tfeirn__NewFalseVars_30);
                        }
                      if (mode_robdd__tfeirn__succeeded)
                        {
                          mode_robdd__tfeirn__Changed4_31 = mode_robdd__tfeirn__Changed3_28;
                          mode_robdd__tfeirn__TrueVars_32 = mode_robdd__tfeirn__TrueVars2_23;
                          mode_robdd__tfeirn__FalseVars_33 = mode_robdd__tfeirn__FalseVars2_24;
                        }
                      else
                        {
                          MR_Word mode_robdd__tfeirn__TypeCtorInfo_62_62;
                          MR_Word mode_robdd__tfeirn__TypeInfo_63_63;

                          mode_robdd__tfeirn__Changed4_31 = (MR_Integer) 1;
                          mode_robdd__tfeirn__TypeCtorInfo_62_62 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                          mode_robdd__tfeirn__TypeInfo_63_63 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
                          {
                            mode_robdd__tfeirn__TrueVars_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_63_63, mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__NewTrueVars_29);
                          }
                          {
                            mode_robdd__tfeirn__FalseVars_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_63_63, mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__NewFalseVars_30);
                          }
                        }
                      {
                        mode_robdd__tfeirn__succeeded = mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars1_21, &mode_robdd__tfeirn__Changed5_34, mode_robdd__tfeirn__ImpVars1_25, &mode_robdd__tfeirn__ImpVars2_35);
                      }
                      if (mode_robdd__tfeirn__succeeded)
                        {
                          MR_Word mode_robdd__tfeirn__Changed6_36;
                          MR_Word mode_robdd__tfeirn__EQVars2_37;
                          MR_Word mode_robdd__tfeirn__ImpVars3_38;
                          MR_Word mode_robdd__tfeirn__Changed7_39;
                          MR_Word mode_robdd__tfeirn__Changed8_40;
                          MR_Word mode_robdd__tfeirn__Robdd2_41;
                          MR_Word mode_robdd__tfeirn__EQVars_42;
                          MR_Word mode_robdd__tfeirn__Changed9_43;
                          MR_Word mode_robdd__tfeirn__Changed10_44;
                          MR_Word mode_robdd__tfeirn__Robdd_45;
                          MR_Word mode_robdd__tfeirn__ImpVars_46;
                          MR_Word mode_robdd__tfeirn__Changed_47;
                          MR_Word mode_robdd__tfeirn__Var_54;

                          {
                            mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed6_36, mode_robdd__tfeirn__EQVars1_21, &mode_robdd__tfeirn__EQVars2_37, mode_robdd__tfeirn__ImpVars2_35, &mode_robdd__tfeirn__ImpVars3_38);
                          }
                          {
                            mode_robdd__tfeirn__Var_54 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed4_31, mode_robdd__tfeirn__Changed5_34);
                          }
                          {
                            mode_robdd__tfeirn__Changed7_39 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Var_54, mode_robdd__tfeirn__Changed6_36);
                          }
                          {
                            mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_120_116_114_97_99_116_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_102_114_111_109_95_114_111_98_100_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(&mode_robdd__tfeirn__Changed8_40, mode_robdd__tfeirn__Robdd1_27, &mode_robdd__tfeirn__Robdd2_41, mode_robdd__tfeirn__EQVars2_37, &mode_robdd__tfeirn__EQVars_42);
                          }
                          {
                            mode_robdd__tfeirn__Changed9_43 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed7_39, mode_robdd__tfeirn__Changed8_40);
                          }
                          {
                            mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed10_44, mode_robdd__tfeirn__Robdd2_41, &mode_robdd__tfeirn__Robdd_45, mode_robdd__tfeirn__ImpVars3_38, &mode_robdd__tfeirn__ImpVars_46);
                          }
                          {
                            mode_robdd__tfeirn__Changed_47 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed9_43, mode_robdd__tfeirn__Changed10_44);
                          }
                          switch (mode_robdd__tfeirn__Changed_47) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                MR_Word mode_robdd__tfeirn__Var_55 = (MR_Integer) 1;

                                {
                                  mode_robdd__tfeirn__X_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_32));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_33));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_42));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_46));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_45));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_55));
                                }
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word mode_robdd__tfeirn__X0_48;
                                MR_Word mode_robdd__tfeirn__Var_56 = (MR_Integer) 0;

                                {
                                  mode_robdd__tfeirn__X0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_32));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_33));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_42));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_46));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_45));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_56));
                                }
                                /* direct tailcall eliminated */
                                {
                                  MR_Word mode_robdd__tfeirn__next_value_of_HeadVar__1_1 = mode_robdd__tfeirn__X0_48;

                                  mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                              break;
                          }
                        }
                      else
                        {
                          mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                        }
                    }
                  else
                    {
                      mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_122_101_114_111_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_0_f_0();
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mode_robdd__tfeirn__Var_11 = (MR_Integer) 1;

              {
                mode_robdd__tfeirn__X_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_69));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_68));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_67));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_66));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_65));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_11));
              }
            }
            break;
        }
        return mode_robdd__tfeirn__X_2;
      }
      break;
    }
}

static void MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_120_116_114_97_99_116_95_101_113_117_105_118_97_108_101_110_116_95_118_97_114_115_95_102_114_111_109_95_114_111_98_100_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_5_p_0(
  MR_Word * mode_robdd__tfeirn__Changed_6,
  MR_Word mode_robdd__tfeirn__Robdd0_7,
  MR_Word * mode_robdd__tfeirn__Robdd_8,
  MR_Word mode_robdd__tfeirn__EQVars0_9,
  MR_Word * mode_robdd__tfeirn__EQVars_10)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__Changed0_12;
    MR_Word mode_robdd__tfeirn__Robdd1_13;
    MR_Word mode_robdd__tfeirn__Var_14;
    MR_Word mode_robdd__tfeirn__RobddEQVars_11;

    {
      mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__Robdd0_7, &mode_robdd__tfeirn__RobddEQVars_11);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        {
          mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__RobddEQVars_11);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__Changed0_12 = (MR_Integer) 0;
            mode_robdd__tfeirn__Robdd1_13 = mode_robdd__tfeirn__Robdd0_7;
            *mode_robdd__tfeirn__EQVars_10 = mode_robdd__tfeirn__EQVars0_9;
          }
        else
          {
            mode_robdd__tfeirn__Changed0_12 = (MR_Integer) 1;
            {
              mode_robdd__tfeirn__Robdd1_13 = mercury__robdd__squeeze_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__RobddEQVars_11, mode_robdd__tfeirn__Robdd0_7);
            }
            {
              *mode_robdd__tfeirn__EQVars_10 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__EQVars0_9, mode_robdd__tfeirn__RobddEQVars_11);
            }
          }
      }
    else
      {
        {
          *mode_robdd__tfeirn__EQVars_10 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_15, *mode_robdd__tfeirn__EQVars_10, mode_robdd__tfeirn__EQVars0_9);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__Changed0_12 = (MR_Integer) 0;
        else
          mode_robdd__tfeirn__Changed0_12 = (MR_Integer) 1;
        mode_robdd__tfeirn__Robdd1_13 = mode_robdd__tfeirn__Robdd0_7;
      }
    {
      *mode_robdd__tfeirn__Robdd_8 = mode_robdd__equiv_vars__remove_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__EQVars0_9, mode_robdd__tfeirn__Robdd1_13);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_15, *mode_robdd__tfeirn__Robdd_8, mode_robdd__tfeirn__Robdd1_13);
    }
    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__Var_14 = (MR_Integer) 1;
    else
      mode_robdd__tfeirn__Var_14 = (MR_Integer) 0;
    {
      *mode_robdd__tfeirn__Changed_6 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_12, mode_robdd__tfeirn__Var_14);
    }
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_120_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__RB_10)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26 = (MR_Word) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[1];
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__T1_11;
    MR_Word mode_robdd__tfeirn__F1_12;
    MR_Word mode_robdd__tfeirn__E1_13;
    MR_Word mode_robdd__tfeirn__I1_14;
    MR_Word mode_robdd__tfeirn__R1_15;
    MR_Word mode_robdd__tfeirn__Var_17;
    MR_Word mode_robdd__tfeirn__Var_18;
    MR_Word mode_robdd__tfeirn__Var_19;
    MR_Word mode_robdd__tfeirn__Var_20;
    MR_Word mode_robdd__tfeirn__Var_21;
    MR_Word mode_robdd__tfeirn__Var_22 = (MR_Integer) 0;
    MR_Word mode_robdd__tfeirn__Var_23;
    MR_Word mode_robdd__tfeirn__Var_24;
    MR_Word mode_robdd__tfeirn__Var_25 = (MR_Integer) 0;
    MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_16;

    {
      mode_robdd__tfeirn__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TA_4));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 1) = ((MR_Box) (mode_robdd__tfeirn__FA_5));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 2) = ((MR_Box) (mode_robdd__tfeirn__EA_6));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 3) = ((MR_Box) (mode_robdd__tfeirn__IA_7));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_10));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_25));
    }
    {
      mode_robdd__tfeirn__Var_23 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_110_111_114_109_97_108_105_115_101_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__Var_24);
    }
    mode_robdd__tfeirn__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 0)));
    mode_robdd__tfeirn__F1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 1)));
    mode_robdd__tfeirn__E1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 2)));
    mode_robdd__tfeirn__I1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 3)));
    mode_robdd__tfeirn__R1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 5)));
    {
      mode_robdd__tfeirn__Var_17 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__TA_4, mode_robdd__tfeirn__T1_11);
    }
    {
      mode_robdd__tfeirn__Var_18 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, mode_robdd__tfeirn__FA_5, mode_robdd__tfeirn__F1_12);
    }
    {
      mode_robdd__tfeirn__Var_19 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__E1_13);
    }
    {
      mode_robdd__tfeirn__Var_20 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__I1_14);
    }
    {
      mode_robdd__tfeirn__Var_21 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__RA_8, mode_robdd__tfeirn__R1_15);
    }
    {
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_18));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_19));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_20));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_21));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_22));
    }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
  MR_Word mode_robdd__tfeirn__Var_6,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_18,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_19)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_20;

    {
      mode_robdd__tfeirn__LambdaHeadVar__3_20 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_23, mode_robdd__tfeirn__LambdaHeadVar__1_18, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__LambdaHeadVar__2_19);
    }
    return mode_robdd__tfeirn__LambdaHeadVar__3_20;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__772__1_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_12,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_13,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_14)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__4_15;
    MR_Word mode_robdd__tfeirn__Var_16;

    {
      mode_robdd__tfeirn__Var_16 = mercury__robdd__eq_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__LambdaHeadVar__1_12, mode_robdd__tfeirn__LambdaHeadVar__2_13);
    }
    {
      mode_robdd__tfeirn__LambdaHeadVar__4_15 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__LambdaHeadVar__3_14, mode_robdd__tfeirn__Var_16);
    }
    return mode_robdd__tfeirn__LambdaHeadVar__4_15;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__E_19,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_70,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_71)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_72;
    MR_Word mode_robdd__tfeirn__Var_73;
    MR_Word mode_robdd__tfeirn__Var_74;

    {
      mode_robdd__tfeirn__Var_74 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__1_70, mode_robdd__tfeirn__E_19);
    }
    {
      mode_robdd__tfeirn__Var_73 = mercury__robdd__not_var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_74);
    }
    {
      mode_robdd__tfeirn__LambdaHeadVar__3_72 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__2_71, mode_robdd__tfeirn__Var_73);
    }
    return mode_robdd__tfeirn__LambdaHeadVar__3_72;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__E_19,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_64,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_65)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_66;
    MR_Word mode_robdd__tfeirn__Var_67;
    MR_Word mode_robdd__tfeirn__Var_68;

    {
      mode_robdd__tfeirn__Var_68 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__1_64, mode_robdd__tfeirn__E_19);
    }
    {
      mode_robdd__tfeirn__Var_67 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_68);
    }
    {
      mode_robdd__tfeirn__LambdaHeadVar__3_66 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__2_65, mode_robdd__tfeirn__Var_67);
    }
    return mode_robdd__tfeirn__LambdaHeadVar__3_66;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__E_19,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_56,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_57)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_58;
    MR_Word mode_robdd__tfeirn__Var_59;
    MR_Word mode_robdd__tfeirn__Var_60;

    {
      mode_robdd__tfeirn__Var_60 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__1_56, mode_robdd__tfeirn__E_19);
    }
    {
      mode_robdd__tfeirn__Var_59 = mercury__robdd__not_var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_60);
    }
    {
      mode_robdd__tfeirn__LambdaHeadVar__3_58 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__2_57, mode_robdd__tfeirn__Var_59);
    }
    return mode_robdd__tfeirn__LambdaHeadVar__3_58;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__E_19,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__1_50,
  MR_Word mode_robdd__tfeirn__LambdaHeadVar__2_51)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__LambdaHeadVar__3_52;
    MR_Word mode_robdd__tfeirn__Var_53;
    MR_Word mode_robdd__tfeirn__Var_54;

    {
      mode_robdd__tfeirn__Var_54 = mode_robdd__equiv_vars__det_leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__1_50, mode_robdd__tfeirn__E_19);
    }
    {
      mode_robdd__tfeirn__Var_53 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_54);
    }
    {
      mode_robdd__tfeirn__LambdaHeadVar__3_52 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__LambdaHeadVar__2_51, mode_robdd__tfeirn__Var_53);
    }
    return mode_robdd__tfeirn__LambdaHeadVar__3_52;
  }
}

void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_1_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
  MR_Word * mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
  MR_Word mode_robdd__tfeirn__HeadVar__3_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Integer mode_robdd__tfeirn__CastX_21 = (MR_Integer) mode_robdd__tfeirn__HeadVar__2_2;
    MR_Integer mode_robdd__tfeirn__CastY_22 = (MR_Integer) mode_robdd__tfeirn__HeadVar__3_3;

    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__CastX_21 == mode_robdd__tfeirn__CastY_22);
    if (mode_robdd__tfeirn__succeeded)
      *mode_robdd__tfeirn__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mode_robdd__tfeirn__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mode_robdd__tfeirn__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mode_robdd__tfeirn__Var_16;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_25_25;

        {
          mode_robdd__tfeirn__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_25_25, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_24_24));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_25_25, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
        }
        {
          mercury__sparse_bitset____Compare____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_25_25, &mode_robdd__tfeirn__Var_16, (MR_Word) mode_robdd__tfeirn__ArgX1_4, (MR_Word) mode_robdd__tfeirn__ArgY1_5);
        }
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_16 == (MR_Integer) 0);
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
        if (mode_robdd__tfeirn__succeeded)
          *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__Var_16;
        else
          {
            MR_Word mode_robdd__tfeirn__Var_17;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_29_29;

            {
              mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_28));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
            }
            {
              mercury__sparse_bitset____Compare____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_29_29, &mode_robdd__tfeirn__Var_17, (MR_Word) mode_robdd__tfeirn__ArgX2_6, (MR_Word) mode_robdd__tfeirn__ArgY2_7);
            }
            mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_17 == (MR_Integer) 0);
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
            if (mode_robdd__tfeirn__succeeded)
              *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__Var_17;
            else
              {
                MR_Word mode_robdd__tfeirn__Var_18;

                {
                  mercury__robdd____Compare____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__Var_18, mode_robdd__tfeirn__ArgX3_8, mode_robdd__tfeirn__ArgY3_9);
                }
                mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_18 == (MR_Integer) 0);
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
                if (mode_robdd__tfeirn__succeeded)
                  *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__Var_18;
                else
                  {
                    MR_Word mode_robdd__tfeirn__Var_19;

                    {
                      mercury__robdd____Compare____imp_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__Var_19, mode_robdd__tfeirn__ArgX4_10, mode_robdd__tfeirn__ArgY4_11);
                    }
                    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_19 == (MR_Integer) 0);
                    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
                    if (mode_robdd__tfeirn__succeeded)
                      *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__Var_19;
                    else
                      {
                        MR_Word mode_robdd__tfeirn__Var_20;

                        {
                          mercury__robdd____Compare____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_23, &mode_robdd__tfeirn__Var_20, mode_robdd__tfeirn__ArgX5_12, mode_robdd__tfeirn__ArgY5_13);
                        }
                        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_20 == (MR_Integer) 0);
                        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
                        if (mode_robdd__tfeirn__succeeded)
                          *mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__Var_20;
                        else
                          {
                            MR_Integer mode_robdd__tfeirn__Var_39 = (MR_Integer) mode_robdd__tfeirn__ArgX6_14;
                            MR_Integer mode_robdd__tfeirn__Var_40 = (MR_Integer) mode_robdd__tfeirn__ArgY6_15;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(mode_robdd__tfeirn__HeadVar__1_1, mode_robdd__tfeirn__Var_39, mode_robdd__tfeirn__Var_40);
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_1_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Integer mode_robdd__tfeirn__CastX_15 = (MR_Integer) mode_robdd__tfeirn__HeadVar__1_1;
    MR_Integer mode_robdd__tfeirn__CastY_16 = (MR_Integer) mode_robdd__tfeirn__HeadVar__2_2;

    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__CastX_15 == mode_robdd__tfeirn__CastY_16);
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__succeeded = MR_TRUE;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_23_23;
        MR_Word mode_robdd__tfeirn__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word mode_robdd__tfeirn__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));

        {
          mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__ArgX1_3, (MR_Word) mode_robdd__tfeirn__ArgY1_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__ArgX2_5, (MR_Word) mode_robdd__tfeirn__ArgY2_6);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                {
                  mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__ArgX3_7, mode_robdd__tfeirn__ArgY3_8);
                }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    {
                      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____imp_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__ArgX4_9, mode_robdd__tfeirn__ArgY4_10);
                    }
                    if (mode_robdd__tfeirn__succeeded)
                      {
                        {
                          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__ArgX5_11, mode_robdd__tfeirn__ArgY5_12);
                        }
                        if (mode_robdd__tfeirn__succeeded)
                          mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__ArgX6_13 == mode_robdd__tfeirn__ArgY6_14);
                      }
                  }
              }
          }
      }
    return mode_robdd__tfeirn__succeeded;
  }
}

void MR_CALL 
mode_robdd__tfeirn____Compare____tfeirn_0_0(
  MR_Word * mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
  MR_Word mode_robdd__tfeirn__HeadVar__3_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__TypeInfo_6_6 = (MR_Word) &mode_robdd__tfeirn_scalar_common_1[0];
    MR_Word mode_robdd__tfeirn__Cast_HeadVar1_4 = mode_robdd__tfeirn__HeadVar__2_2;
    MR_Word mode_robdd__tfeirn__Cast_HeadVar2_5 = mode_robdd__tfeirn__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mode_robdd__tfeirn__TypeInfo_6_6, mode_robdd__tfeirn__HeadVar__1_1, ((MR_Box) (mode_robdd__tfeirn__Cast_HeadVar1_4)), ((MR_Box) (mode_robdd__tfeirn__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mode_robdd__tfeirn____Unify____tfeirn_0_0(
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word mode_robdd__tfeirn__Cast_HeadVar1_3 = mode_robdd__tfeirn__HeadVar__1_1;
    MR_Word mode_robdd__tfeirn__Cast_HeadVar2_4 = mode_robdd__tfeirn__HeadVar__2_2;

    {
      mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn____Unify____tfeirn_1_0(mode_robdd__tfeirn__TypeCtorInfo_5_5, mode_robdd__tfeirn__Cast_HeadVar1_3, mode_robdd__tfeirn__Cast_HeadVar2_4);
    }
    return mode_robdd__tfeirn__succeeded;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__x_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_26,
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__RB_10)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_28_28;
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__T1_11;
    MR_Word mode_robdd__tfeirn__F1_12;
    MR_Word mode_robdd__tfeirn__E1_13;
    MR_Word mode_robdd__tfeirn__I1_14;
    MR_Word mode_robdd__tfeirn__R1_15;
    MR_Word mode_robdd__tfeirn__Var_17;
    MR_Word mode_robdd__tfeirn__Var_18;
    MR_Word mode_robdd__tfeirn__Var_19;
    MR_Word mode_robdd__tfeirn__Var_20;
    MR_Word mode_robdd__tfeirn__Var_21;
    MR_Word mode_robdd__tfeirn__Var_22;
    MR_Word mode_robdd__tfeirn__Var_23;
    MR_Word mode_robdd__tfeirn__Var_24;
    MR_Word mode_robdd__tfeirn__Var_25;
    MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_16;
    MR_Word mode_robdd__tfeirn__conv0_Var_17;
    MR_Word mode_robdd__tfeirn__conv1_Var_18;

    {
      mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_27_27));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_26));
    }
    mode_robdd__tfeirn__Var_22 = (MR_Integer) 0;
    mode_robdd__tfeirn__Var_25 = (MR_Integer) 0;
    {
      mode_robdd__tfeirn__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TA_4));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 1) = ((MR_Box) (mode_robdd__tfeirn__FA_5));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 2) = ((MR_Box) (mode_robdd__tfeirn__EA_6));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 3) = ((MR_Box) (mode_robdd__tfeirn__IA_7));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_10));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_24, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_25));
    }
    {
      mode_robdd__tfeirn__Var_23 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__Var_24);
    }
    mode_robdd__tfeirn__T1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 0)));
    mode_robdd__tfeirn__F1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 1)));
    mode_robdd__tfeirn__E1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 2)));
    mode_robdd__tfeirn__I1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 3)));
    mode_robdd__tfeirn__R1_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_23, (MR_Integer) 5)));
    {
      mode_robdd__tfeirn__conv0_Var_17 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__TA_4, (MR_Word) mode_robdd__tfeirn__T1_11);
    }
    mode_robdd__tfeirn__Var_17 = (MR_Word) mode_robdd__tfeirn__conv0_Var_17;
    {
      mode_robdd__tfeirn__conv1_Var_18 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__FA_5, (MR_Word) mode_robdd__tfeirn__F1_12);
    }
    mode_robdd__tfeirn__Var_18 = (MR_Word) mode_robdd__tfeirn__conv1_Var_18;
    {
      mode_robdd__tfeirn__Var_19 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__E1_13);
    }
    {
      mode_robdd__tfeirn__Var_20 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__I1_14);
    }
    {
      mode_robdd__tfeirn__Var_21 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_26, mode_robdd__tfeirn__RA_8, mode_robdd__tfeirn__R1_15);
    }
    {
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_18));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_19));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_20));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_21));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_22));
    }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mode_robdd__tfeirn__normalise_1_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_57,
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mode_robdd__tfeirn__succeeded;
        MR_Word mode_robdd__tfeirn__X_2;
        MR_Word mode_robdd__tfeirn__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word mode_robdd__tfeirn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));

        switch (mode_robdd__tfeirn__Var_64) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mode_robdd__tfeirn__TypeCtorInfo_58_58 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
              MR_Word mode_robdd__tfeirn__TypeInfo_59_59;
              MR_Word mode_robdd__tfeirn__Var_50;
              MR_Word mode_robdd__tfeirn__conv0_Var_50;

              {
                mode_robdd__tfeirn__TypeInfo_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_59_59, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_58_58));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_59_59, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
              }
              {
                mode_robdd__tfeirn__conv0_Var_50 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_59_59, (MR_Word) mode_robdd__tfeirn__Var_69, (MR_Word) mode_robdd__tfeirn__Var_68);
              }
              mode_robdd__tfeirn__Var_50 = (MR_Word) mode_robdd__tfeirn__conv0_Var_50;
              {
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_59_59, (MR_Word) mode_robdd__tfeirn__Var_50);
              }
              mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
              if (mode_robdd__tfeirn__succeeded)
                {
                  mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                }
              else
                {
                  MR_Word mode_robdd__tfeirn__Changed0_18;
                  MR_Word mode_robdd__tfeirn__TrueVars1_19;
                  MR_Word mode_robdd__tfeirn__FalseVars1_20;
                  MR_Word mode_robdd__tfeirn__EQVars1_21;
                  MR_Word mode_robdd__tfeirn__Changed1_22;
                  MR_Word mode_robdd__tfeirn__TrueVars2_23;
                  MR_Word mode_robdd__tfeirn__FalseVars2_24;
                  MR_Word mode_robdd__tfeirn__ImpVars1_25;
                  MR_Word mode_robdd__tfeirn__Changed2_26;
                  MR_Word mode_robdd__tfeirn__Robdd1_27;
                  MR_Word mode_robdd__tfeirn__Changed3_28;
                  MR_Word mode_robdd__tfeirn__Var_51;
                  MR_Word mode_robdd__tfeirn__Changed0_79;
                  MR_Word mode_robdd__tfeirn__Changed1_80;
                  MR_Word mode_robdd__tfeirn__DCG_1_81;
                  MR_Word mode_robdd__tfeirn__NewTrueVars_29;
                  MR_Word mode_robdd__tfeirn__NewFalseVars_30;
                  MR_Word mode_robdd__tfeirn__Var_52;
                  MR_Word mode_robdd__tfeirn__Var_53;

                  {
                    mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed0_79, mode_robdd__tfeirn__Var_69, &mode_robdd__tfeirn__TrueVars1_19, mode_robdd__tfeirn__Var_67, &mode_robdd__tfeirn__DCG_1_81);
                  }
                  {
                    mode_robdd__equiv_vars__normalise_known_equivalent_vars_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed1_80, mode_robdd__tfeirn__Var_68, &mode_robdd__tfeirn__FalseVars1_20, mode_robdd__tfeirn__DCG_1_81, &mode_robdd__tfeirn__EQVars1_21);
                  }
                  {
                    mode_robdd__tfeirn__Changed0_18 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_79, mode_robdd__tfeirn__Changed1_80);
                  }
                  {
                    mode_robdd__implications__normalise_true_false_implication_vars_7_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed1_22, mode_robdd__tfeirn__TrueVars1_19, &mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__FalseVars1_20, &mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__Var_66, &mode_robdd__tfeirn__ImpVars1_25);
                  }
                  {
                    mode_robdd__tfeirn__Changed2_26 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_18, mode_robdd__tfeirn__Changed1_22);
                  }
                  {
                    mode_robdd__tfeirn__Robdd1_27 = mercury__robdd__restrict_true_false_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__TrueVars2_23, mode_robdd__tfeirn__FalseVars2_24, mode_robdd__tfeirn__Var_65);
                  }
                  {
                    mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, mode_robdd__tfeirn__Var_65);
                  }
                  mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
                  if (mode_robdd__tfeirn__succeeded)
                    mode_robdd__tfeirn__Var_51 = (MR_Integer) 1;
                  else
                    mode_robdd__tfeirn__Var_51 = (MR_Integer) 0;
                  {
                    mode_robdd__tfeirn__Changed3_28 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed2_26, mode_robdd__tfeirn__Var_51);
                  }
                  {
                    mercury__robdd__definite_vars_3_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, &mode_robdd__tfeirn__Var_52, &mode_robdd__tfeirn__Var_53);
                  }
                  mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__Var_52)) == (MR_mktag((MR_Integer) 1)));
                  if (mode_robdd__tfeirn__succeeded)
                    {
                      mode_robdd__tfeirn__NewTrueVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_52, (MR_Integer) 0)));
                      mode_robdd__tfeirn__succeeded = ((MR_tag((MR_Word) mode_robdd__tfeirn__Var_53)) == (MR_mktag((MR_Integer) 1)));
                      if (mode_robdd__tfeirn__succeeded)
                        mode_robdd__tfeirn__NewFalseVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_53, (MR_Integer) 0)));
                    }
                  if (mode_robdd__tfeirn__succeeded)
                    {
                      MR_Word mode_robdd__tfeirn__Changed4_31;
                      MR_Word mode_robdd__tfeirn__TrueVars_32;
                      MR_Word mode_robdd__tfeirn__FalseVars_33;
                      MR_Word mode_robdd__tfeirn__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                      MR_Word mode_robdd__tfeirn__TypeInfo_61_61;
                      MR_Word mode_robdd__tfeirn__Changed5_34;
                      MR_Word mode_robdd__tfeirn__ImpVars2_35;

                      {
                        mode_robdd__tfeirn__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_61_61, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_60_60));
                        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_61_61, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
                      }
                      {
                        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_61_61, (MR_Word) mode_robdd__tfeirn__NewTrueVars_29);
                      }
                      if (mode_robdd__tfeirn__succeeded)
                        {
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_61_61, (MR_Word) mode_robdd__tfeirn__NewFalseVars_30);
                        }
                      if (mode_robdd__tfeirn__succeeded)
                        {
                          mode_robdd__tfeirn__Changed4_31 = mode_robdd__tfeirn__Changed3_28;
                          mode_robdd__tfeirn__TrueVars_32 = mode_robdd__tfeirn__TrueVars2_23;
                          mode_robdd__tfeirn__FalseVars_33 = mode_robdd__tfeirn__FalseVars2_24;
                        }
                      else
                        {
                          MR_Word mode_robdd__tfeirn__TypeCtorInfo_62_62;
                          MR_Word mode_robdd__tfeirn__TypeInfo_63_63;
                          MR_Word mode_robdd__tfeirn__conv1_TrueVars_32;
                          MR_Word mode_robdd__tfeirn__conv2_FalseVars_33;

                          mode_robdd__tfeirn__Changed4_31 = (MR_Integer) 1;
                          mode_robdd__tfeirn__TypeCtorInfo_62_62 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                          {
                            mode_robdd__tfeirn__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_63_63, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_62_62));
                            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_63_63, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_57));
                          }
                          {
                            mode_robdd__tfeirn__conv1_TrueVars_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_63_63, (MR_Word) mode_robdd__tfeirn__TrueVars2_23, (MR_Word) mode_robdd__tfeirn__NewTrueVars_29);
                          }
                          mode_robdd__tfeirn__TrueVars_32 = (MR_Word) mode_robdd__tfeirn__conv1_TrueVars_32;
                          {
                            mode_robdd__tfeirn__conv2_FalseVars_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_63_63, (MR_Word) mode_robdd__tfeirn__FalseVars2_24, (MR_Word) mode_robdd__tfeirn__NewFalseVars_30);
                          }
                          mode_robdd__tfeirn__FalseVars_33 = (MR_Word) mode_robdd__tfeirn__conv2_FalseVars_33;
                        }
                      {
                        mode_robdd__tfeirn__succeeded = mode_robdd__implications__propagate_equivalences_into_implications_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars1_21, &mode_robdd__tfeirn__Changed5_34, mode_robdd__tfeirn__ImpVars1_25, &mode_robdd__tfeirn__ImpVars2_35);
                      }
                      if (mode_robdd__tfeirn__succeeded)
                        {
                          MR_Word mode_robdd__tfeirn__Changed6_36;
                          MR_Word mode_robdd__tfeirn__EQVars2_37;
                          MR_Word mode_robdd__tfeirn__ImpVars3_38;
                          MR_Word mode_robdd__tfeirn__Changed7_39;
                          MR_Word mode_robdd__tfeirn__Changed8_40;
                          MR_Word mode_robdd__tfeirn__Robdd2_41;
                          MR_Word mode_robdd__tfeirn__EQVars_42;
                          MR_Word mode_robdd__tfeirn__Changed9_43;
                          MR_Word mode_robdd__tfeirn__Changed10_44;
                          MR_Word mode_robdd__tfeirn__Robdd_45;
                          MR_Word mode_robdd__tfeirn__ImpVars_46;
                          MR_Word mode_robdd__tfeirn__Changed_47;
                          MR_Word mode_robdd__tfeirn__Var_54;
                          MR_Word mode_robdd__tfeirn__Changed0_88;
                          MR_Word mode_robdd__tfeirn__Robdd1_89;
                          MR_Word mode_robdd__tfeirn__Var_90;
                          MR_Word mode_robdd__tfeirn__RobddEQVars_87;

                          {
                            mode_robdd__implications__propagate_implications_into_equivalences_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed6_36, mode_robdd__tfeirn__EQVars1_21, &mode_robdd__tfeirn__EQVars2_37, mode_robdd__tfeirn__ImpVars2_35, &mode_robdd__tfeirn__ImpVars3_38);
                          }
                          {
                            mode_robdd__tfeirn__Var_54 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed4_31, mode_robdd__tfeirn__Changed5_34);
                          }
                          {
                            mode_robdd__tfeirn__Changed7_39 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Var_54, mode_robdd__tfeirn__Changed6_36);
                          }
                          {
                            mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__equivalent_vars_in_robdd_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd1_27, &mode_robdd__tfeirn__RobddEQVars_87);
                          }
                          if (mode_robdd__tfeirn__succeeded)
                            {
                              {
                                mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__RobddEQVars_87);
                              }
                              if (mode_robdd__tfeirn__succeeded)
                                {
                                  mode_robdd__tfeirn__Changed0_88 = (MR_Integer) 0;
                                  mode_robdd__tfeirn__Robdd1_89 = mode_robdd__tfeirn__Robdd1_27;
                                  mode_robdd__tfeirn__EQVars_42 = mode_robdd__tfeirn__EQVars2_37;
                                }
                              else
                                {
                                  mode_robdd__tfeirn__Changed0_88 = (MR_Integer) 1;
                                  {
                                    mode_robdd__tfeirn__Robdd1_89 = mercury__robdd__squeeze_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__RobddEQVars_87, mode_robdd__tfeirn__Robdd1_27);
                                  }
                                  {
                                    mode_robdd__tfeirn__EQVars_42 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars2_37, mode_robdd__tfeirn__RobddEQVars_87);
                                  }
                                }
                            }
                          else
                            {
                              {
                                mode_robdd__tfeirn__EQVars_42 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                              }
                              {
                                mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____equiv_vars_1_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars_42, mode_robdd__tfeirn__EQVars2_37);
                              }
                              if (mode_robdd__tfeirn__succeeded)
                                mode_robdd__tfeirn__Changed0_88 = (MR_Integer) 0;
                              else
                                mode_robdd__tfeirn__Changed0_88 = (MR_Integer) 1;
                              mode_robdd__tfeirn__Robdd1_89 = mode_robdd__tfeirn__Robdd1_27;
                            }
                          {
                            mode_robdd__tfeirn__Robdd2_41 = mode_robdd__equiv_vars__remove_equiv_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__EQVars2_37, mode_robdd__tfeirn__Robdd1_89);
                          }
                          {
                            mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_57, mode_robdd__tfeirn__Robdd2_41, mode_robdd__tfeirn__Robdd1_89);
                          }
                          mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
                          if (mode_robdd__tfeirn__succeeded)
                            mode_robdd__tfeirn__Var_90 = (MR_Integer) 1;
                          else
                            mode_robdd__tfeirn__Var_90 = (MR_Integer) 0;
                          {
                            mode_robdd__tfeirn__Changed8_40 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed0_88, mode_robdd__tfeirn__Var_90);
                          }
                          {
                            mode_robdd__tfeirn__Changed9_43 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed7_39, mode_robdd__tfeirn__Changed8_40);
                          }
                          {
                            mode_robdd__implications__extract_implication_vars_from_robdd_5_p_0(mode_robdd__tfeirn__TypeInfo_for_T_57, &mode_robdd__tfeirn__Changed10_44, mode_robdd__tfeirn__Robdd2_41, &mode_robdd__tfeirn__Robdd_45, mode_robdd__tfeirn__ImpVars3_38, &mode_robdd__tfeirn__ImpVars_46);
                          }
                          {
                            mode_robdd__tfeirn__Changed_47 = mercury__bool__or_2_f_0(mode_robdd__tfeirn__Changed9_43, mode_robdd__tfeirn__Changed10_44);
                          }
                          switch (mode_robdd__tfeirn__Changed_47) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                MR_Word mode_robdd__tfeirn__Var_55 = (MR_Integer) 1;

                                {
                                  mode_robdd__tfeirn__X_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_32));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_33));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_42));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_46));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_45));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_55));
                                }
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word mode_robdd__tfeirn__X0_48;
                                MR_Word mode_robdd__tfeirn__Var_56 = (MR_Integer) 0;

                                {
                                  mode_robdd__tfeirn__X0_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 0) = ((MR_Box) (mode_robdd__tfeirn__TrueVars_32));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 1) = ((MR_Box) (mode_robdd__tfeirn__FalseVars_33));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 2) = ((MR_Box) (mode_robdd__tfeirn__EQVars_42));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 3) = ((MR_Box) (mode_robdd__tfeirn__ImpVars_46));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 4) = ((MR_Box) (mode_robdd__tfeirn__Robdd_45));
                                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_48, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_56));
                                }
                                /* direct tailcall eliminated */
                                {
                                  MR_Word mode_robdd__tfeirn__next_value_of_HeadVar__1_1 = mode_robdd__tfeirn__X0_48;

                                  mode_robdd__tfeirn__HeadVar__1_1 = mode_robdd__tfeirn__next_value_of_HeadVar__1_1;
                                }
                                continue;
                              }
                              break;
                          }
                        }
                      else
                        {
                          mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                        }
                    }
                  else
                    {
                      mode_robdd__tfeirn__X_2 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_57);
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mode_robdd__tfeirn__Var_11 = (MR_Integer) 1;

              {
                mode_robdd__tfeirn__X_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_69));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_68));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_67));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_66));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_65));
                MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_2, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_11));
              }
            }
            break;
        }
        return mode_robdd__tfeirn__X_2;
      }
      break;
    }
}

static MR_bool MR_CALL 
mode_robdd__tfeirn__minimal_model_2_4_p_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
  MR_Word mode_robdd__tfeirn__Vars0_5,
  MR_Word mode_robdd__tfeirn__X0_6,
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
  MR_Word * mode_robdd__tfeirn__FalseVars_8)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_21;
    MR_Word mode_robdd__tfeirn__V_9;
    MR_Word mode_robdd__tfeirn__Vars_10;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Box mode_robdd__tfeirn__conv1_V_9;
    MR_Word mode_robdd__tfeirn__conv0_Vars_10;

    {
      mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_21, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_19_19));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_21, &mode_robdd__tfeirn__conv1_V_9, (MR_Word) mode_robdd__tfeirn__Vars0_5, &mode_robdd__tfeirn__conv0_Vars_10);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__V_9 = ((MR_Word) mode_robdd__tfeirn__conv1_V_9);
        mode_robdd__tfeirn__Vars_10 = (MR_Word) mode_robdd__tfeirn__conv0_Vars_10;
        mode_robdd__tfeirn__succeeded = MR_TRUE;
      }
    if (mode_robdd__tfeirn__succeeded)
      {
        MR_Word mode_robdd__tfeirn__X1_11;
        MR_Word mode_robdd__tfeirn__Var_15;
        MR_Word mode_robdd__tfeirn__Var_32;
        MR_Word mode_robdd__tfeirn__Var_38;
        MR_Word mode_robdd__tfeirn__Var_39;
        MR_Word mode_robdd__tfeirn__Var_40;
        MR_Word mode_robdd__tfeirn__Var_41;
        MR_Word mode_robdd__tfeirn__Var_42;

        {
          mode_robdd__tfeirn__X1_11 = mode_robdd__tfeirn__var_restrict_false_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_9, mode_robdd__tfeirn__X0_6);
        }
        mode_robdd__tfeirn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 0)));
        mode_robdd__tfeirn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 1)));
        mode_robdd__tfeirn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 2)));
        mode_robdd__tfeirn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 3)));
        mode_robdd__tfeirn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 4)));
        mode_robdd__tfeirn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X1_11, (MR_Integer) 5)));
        {
          mode_robdd__tfeirn__Var_32 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17);
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__Var_15, mode_robdd__tfeirn__Var_32);
        }
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
        if (mode_robdd__tfeirn__succeeded)
          {
            MR_Word mode_robdd__tfeirn__FalseVars0_12;

            {
              mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X1_11, mode_robdd__tfeirn__TrueVars_7, &mode_robdd__tfeirn__FalseVars0_12);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                {
                  *mode_robdd__tfeirn__FalseVars_8 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__TypeClassInfo_for_enum_21, mode_robdd__tfeirn__FalseVars0_12, mode_robdd__tfeirn__V_9);
                }
                mode_robdd__tfeirn__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__X2_13;
            MR_Word mode_robdd__tfeirn__TrueVars0_14;
            MR_Word mode_robdd__tfeirn__Var_16;
            MR_Word mode_robdd__tfeirn__Var_33;
            MR_Word mode_robdd__tfeirn__Var_43;
            MR_Word mode_robdd__tfeirn__Var_44;
            MR_Word mode_robdd__tfeirn__Var_45;
            MR_Word mode_robdd__tfeirn__Var_46;
            MR_Word mode_robdd__tfeirn__Var_47;

            {
              mode_robdd__tfeirn__X2_13 = mode_robdd__tfeirn__var_restrict_true_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__V_9, mode_robdd__tfeirn__X0_6);
            }
            mode_robdd__tfeirn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X2_13, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__Var_33 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17);
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__Var_16, mode_robdd__tfeirn__Var_33);
            }
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
            if (mode_robdd__tfeirn__succeeded)
              {
                {
                  mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X2_13, &mode_robdd__tfeirn__TrueVars0_14, mode_robdd__tfeirn__FalseVars_8);
                }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    {
                      *mode_robdd__tfeirn__TrueVars_7 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_17, mode_robdd__tfeirn__TypeClassInfo_for_enum_21, mode_robdd__tfeirn__TrueVars0_14, mode_robdd__tfeirn__V_9);
                    }
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
                  }
              }
          }
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_31_31;
        MR_Word mode_robdd__tfeirn__conv2_TrueVars_7;
        MR_Word mode_robdd__tfeirn__conv3_FalseVars_8;

        {
          mode_robdd__tfeirn__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_30_30));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_17));
        }
        {
          mode_robdd__tfeirn__conv2_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
        }
        *mode_robdd__tfeirn__TrueVars_7 = (MR_Word) mode_robdd__tfeirn__conv2_TrueVars_7;
        {
          mode_robdd__tfeirn__conv3_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
        }
        *mode_robdd__tfeirn__FalseVars_8 = (MR_Word) mode_robdd__tfeirn__conv3_FalseVars_8;
        mode_robdd__tfeirn__succeeded = MR_TRUE;
      }
    return mode_robdd__tfeirn__succeeded;
  }
}

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_1(
  void * mode_robdd__tfeirn__env_ptr_arg)
{
  {
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

    {
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8) = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9);
    }
    {
      ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0_2(
  void * mode_robdd__tfeirn__env_ptr_arg)
{
  {
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

    {
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7) = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9);
    }
    {
      ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mode_robdd__tfeirn__labelling_2_4_p_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_17,
  MR_Word mode_robdd__tfeirn__Vars0_5,
  MR_Word mode_robdd__tfeirn__X0_6,
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
  MR_Cont mode_robdd__tfeirn__cont,
  void * mode_robdd__tfeirn__cont_env_ptr)
{
  {
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s mode_robdd__tfeirn__env;
    struct mode_robdd__tfeirn__labelling_2_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = &mode_robdd__tfeirn__env;

    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17 = mode_robdd__tfeirn__TypeInfo_for_T_17;
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7 = mode_robdd__tfeirn__TrueVars_7;
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8 = mode_robdd__tfeirn__FalseVars_8;
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont = mode_robdd__tfeirn__cont;
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr = mode_robdd__tfeirn__cont_env_ptr;
    {
      MR_bool mode_robdd__tfeirn__succeeded;
      MR_Word mode_robdd__tfeirn__Vars_10;
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      MR_Box mode_robdd__tfeirn__conv1_V_9;
      MR_Word mode_robdd__tfeirn__conv0_Vars_10;

      {
        mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_20));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_19_19));
      }
      {
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeClassInfo_for_enum_21, &mode_robdd__tfeirn__conv1_V_9, (MR_Word) mode_robdd__tfeirn__Vars0_5, &mode_robdd__tfeirn__conv0_Vars_10);
      }
      if (mode_robdd__tfeirn__succeeded)
        {
          (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9 = ((MR_Word) mode_robdd__tfeirn__conv1_V_9);
          mode_robdd__tfeirn__Vars_10 = (MR_Word) mode_robdd__tfeirn__conv0_Vars_10;
          mode_robdd__tfeirn__succeeded = MR_TRUE;
        }
      if (mode_robdd__tfeirn__succeeded)
        {
          {
            MR_Word mode_robdd__tfeirn__X_11;
            MR_Word mode_robdd__tfeirn__Var_15;
            MR_Word mode_robdd__tfeirn__Var_32;
            MR_Word mode_robdd__tfeirn__Var_38;
            MR_Word mode_robdd__tfeirn__Var_39;
            MR_Word mode_robdd__tfeirn__Var_40;
            MR_Word mode_robdd__tfeirn__Var_41;
            MR_Word mode_robdd__tfeirn__Var_42;

            {
              mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__var_restrict_false_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9, mode_robdd__tfeirn__X0_6);
            }
            mode_robdd__tfeirn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__Var_32 = mercury__robdd__zero_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17);
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__Var_15, mode_robdd__tfeirn__Var_32);
            }
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__labelling_2_4_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X_11, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars0_12, mode_robdd__tfeirn__labelling_2_4_p_0_1, mode_robdd__tfeirn__env_ptr);
              }
          }
          {
            MR_Word mode_robdd__tfeirn__X_16;
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_33;
            MR_Word mode_robdd__tfeirn__Var_43;
            MR_Word mode_robdd__tfeirn__Var_44;
            MR_Word mode_robdd__tfeirn__Var_45;
            MR_Word mode_robdd__tfeirn__Var_46;
            MR_Word mode_robdd__tfeirn__Var_47;

            {
              mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__var_restrict_true_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__V_9, mode_robdd__tfeirn__X0_6);
            }
            mode_robdd__tfeirn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__Var_33 = mercury__robdd__zero_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17);
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__Var_14, mode_robdd__tfeirn__Var_33);
            }
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__labelling_2_4_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__X_16, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars0_13, (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8, mode_robdd__tfeirn__labelling_2_4_p_0_2, mode_robdd__tfeirn__env_ptr);
              }
          }
        }
      else
        {
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_30_30 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          MR_Word mode_robdd__tfeirn__TypeInfo_31_31;
          MR_Word mode_robdd__tfeirn__conv2_TrueVars_7;
          MR_Word mode_robdd__tfeirn__conv3_FalseVars_8;

          {
            mode_robdd__tfeirn__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_30_30));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_31_31, 1) = ((MR_Box) ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TypeInfo_for_T_17));
          }
          {
            mode_robdd__tfeirn__conv2_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
          }
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__TrueVars_7) = (MR_Word) mode_robdd__tfeirn__conv2_TrueVars_7;
          {
            mode_robdd__tfeirn__conv3_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_31_31);
          }
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__FalseVars_8) = (MR_Word) mode_robdd__tfeirn__conv3_FalseVars_8;
          {
            ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_2_4_p_0_env_0__cont_env_ptr);
          }
        }
    }
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__robdd_to_mode_robdd_1_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_10,
  MR_Word mode_robdd__tfeirn__R_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_12_12;
    MR_Word mode_robdd__tfeirn__Var_4;
    MR_Word mode_robdd__tfeirn__Var_5;
    MR_Word mode_robdd__tfeirn__Var_6;
    MR_Word mode_robdd__tfeirn__Var_7;
    MR_Word mode_robdd__tfeirn__Var_8;
    MR_Word mode_robdd__tfeirn__Var_9;
    MR_Word mode_robdd__tfeirn__conv0_Var_5;
    MR_Word mode_robdd__tfeirn__conv1_Var_6;

    {
      mode_robdd__tfeirn__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_12_12, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_12_12, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_10));
    }
    {
      mode_robdd__tfeirn__conv0_Var_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_12_12);
    }
    mode_robdd__tfeirn__Var_5 = (MR_Word) mode_robdd__tfeirn__conv0_Var_5;
    {
      mode_robdd__tfeirn__conv1_Var_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_12_12);
    }
    mode_robdd__tfeirn__Var_6 = (MR_Word) mode_robdd__tfeirn__conv1_Var_6;
    {
      mode_robdd__tfeirn__Var_7 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10);
    }
    {
      mode_robdd__tfeirn__Var_8 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10);
    }
    mode_robdd__tfeirn__Var_9 = (MR_Integer) 0;
    {
      mode_robdd__tfeirn__Var_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_4, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_4, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_4, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_7));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_4, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_8));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_3));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_9));
    }
    {
      mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_10, mode_robdd__tfeirn__Var_4);
    }
    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2,
  MR_Box mode_robdd__tfeirn__wrapper_arg_3)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_4;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv0_LambdaHeadVar__4_15;

    {
      mode_robdd__tfeirn__conv0_LambdaHeadVar__4_15 = mode_robdd__tfeirn__IntroducedFrom__func__to_robdd__772__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_3));
    }
    mode_robdd__tfeirn__wrapper_arg_4 = ((MR_Box) (mode_robdd__tfeirn__conv0_LambdaHeadVar__4_15));
    return mode_robdd__tfeirn__wrapper_arg_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__to_robdd_1_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_47,
  MR_Word mode_robdd__tfeirn__X_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_48_48;
    MR_Word mode_robdd__tfeirn__TypeInfo_49_49;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_50_50;
    MR_Word mode_robdd__tfeirn__TypeInfo_51_51;
    MR_Word mode_robdd__tfeirn__Var_7;
    MR_Word mode_robdd__tfeirn__Var_8;
    MR_Word mode_robdd__tfeirn__Var_9;
    MR_Word mode_robdd__tfeirn__Var_10;
    MR_Word mode_robdd__tfeirn__Var_11;
    MR_Word mode_robdd__tfeirn__Var_17;
    MR_Word mode_robdd__tfeirn__Var_18;
    MR_Word mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_20;
    MR_Word mode_robdd__tfeirn__Var_22;
    MR_Word mode_robdd__tfeirn__Var_23;
    MR_Word mode_robdd__tfeirn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_32;
    MR_Word mode_robdd__tfeirn__Var_33;
    MR_Word mode_robdd__tfeirn__Var_34;
    MR_Word mode_robdd__tfeirn__Var_35;
    MR_Word mode_robdd__tfeirn__Var_36;
    MR_Word mode_robdd__tfeirn__Var_37;
    MR_Word mode_robdd__tfeirn__Var_38;
    MR_Word mode_robdd__tfeirn__Var_39;
    MR_Word mode_robdd__tfeirn__Var_40;
    MR_Word mode_robdd__tfeirn__Var_41;
    MR_Box mode_robdd__tfeirn__conv1_Var_10;
    MR_Word mode_robdd__tfeirn__Var_42;
    MR_Word mode_robdd__tfeirn__Var_43;
    MR_Word mode_robdd__tfeirn__Var_44;
    MR_Word mode_robdd__tfeirn__Var_45;
    MR_Word mode_robdd__tfeirn__Var_46;

    {
      mode_robdd__tfeirn__Var_20 = mercury__robdd__conj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__Var_52);
    }
    {
      mode_robdd__tfeirn__Var_18 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__Var_19, mode_robdd__tfeirn__Var_20);
    }
    mode_robdd__tfeirn__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
    mode_robdd__tfeirn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
    mode_robdd__tfeirn__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
    mode_robdd__tfeirn__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
    mode_robdd__tfeirn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
    {
      mode_robdd__tfeirn__Var_22 = mercury__robdd__conj_not_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__Var_23);
    }
    {
      mode_robdd__tfeirn__Var_7 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__Var_18, mode_robdd__tfeirn__Var_22);
    }
    {
      mode_robdd__tfeirn__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_8, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_8, 1) = ((MR_Box) (mode_robdd__tfeirn__to_robdd_1_f_0_1));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_8, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
    }
    mode_robdd__tfeirn__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
    mode_robdd__tfeirn__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
    mode_robdd__tfeirn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
    mode_robdd__tfeirn__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
    mode_robdd__tfeirn__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
    mode_robdd__tfeirn__Var_9 = (MR_Word) mode_robdd__tfeirn__Var_17;
    mode_robdd__tfeirn__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__tfeirn__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_49_49, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_48_48));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_49_49, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
    }
    mode_robdd__tfeirn__TypeCtorInfo_50_50 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
    {
      mode_robdd__tfeirn__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_51_51, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_50_50));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_51_51, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_47));
    }
    {
      mode_robdd__tfeirn__conv1_Var_10 = mercury__map__foldl_3_f_0(mode_robdd__tfeirn__TypeInfo_49_49, mode_robdd__tfeirn__TypeInfo_49_49, mode_robdd__tfeirn__TypeInfo_51_51, (MR_Word) mode_robdd__tfeirn__Var_8, (MR_Word) mode_robdd__tfeirn__Var_9, ((MR_Box) (mode_robdd__tfeirn__Var_7)));
    }
    mode_robdd__tfeirn__Var_10 = ((MR_Word) mode_robdd__tfeirn__conv1_Var_10);
    mode_robdd__tfeirn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
    mode_robdd__tfeirn__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
    mode_robdd__tfeirn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
    mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
    mode_robdd__tfeirn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));
    {
      mode_robdd__tfeirn__HeadVar__2_2 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_47, mode_robdd__tfeirn__Var_11, mode_robdd__tfeirn__Var_10);
    }
    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__robdd_1_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8,
  MR_Word mode_robdd__tfeirn__HeadVar__1_1)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));

    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__ensure_normalised_1_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_4,
  MR_Word mode_robdd__tfeirn__X_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;

    {
      mode_robdd__tfeirn__HeadVar__2_2 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_4, mode_robdd__tfeirn__X_3);
    }
    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

void MR_CALL 
mode_robdd__tfeirn__minimal_model_4_p_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
  MR_Word mode_robdd__tfeirn__Vars_5,
  MR_Word mode_robdd__tfeirn__X0_6,
  MR_Word * mode_robdd__tfeirn__TrueVars_7,
  MR_Word * mode_robdd__tfeirn__FalseVars_8,
  MR_Cont mode_robdd__tfeirn__cont,
  void * mode_robdd__tfeirn__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mode_robdd__tfeirn__succeeded;
        MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;

        {
          mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_16_16, (MR_Word) mode_robdd__tfeirn__Vars_5);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            MR_Word mode_robdd__tfeirn__conv0_TrueVars_7;
            MR_Word mode_robdd__tfeirn__conv1_FalseVars_8;

            {
              mode_robdd__tfeirn__conv0_TrueVars_7 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_16_16);
            }
            *mode_robdd__tfeirn__TrueVars_7 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars_7;
            {
              mode_robdd__tfeirn__conv1_FalseVars_8 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_16_16);
            }
            *mode_robdd__tfeirn__FalseVars_8 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars_8;
            {
              mode_robdd__tfeirn__cont(mode_robdd__tfeirn__cont_env_ptr);
            }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TrueVars0_9;
            MR_Word mode_robdd__tfeirn__FalseVars0_10;

            {
              mode_robdd__tfeirn__succeeded = mode_robdd__tfeirn__minimal_model_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X0_6, &mode_robdd__tfeirn__TrueVars0_9, &mode_robdd__tfeirn__FalseVars0_10);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                *mode_robdd__tfeirn__TrueVars_7 = mode_robdd__tfeirn__TrueVars0_9;
                *mode_robdd__tfeirn__FalseVars_8 = mode_robdd__tfeirn__FalseVars0_10;
                {
                  mode_robdd__tfeirn__cont(mode_robdd__tfeirn__cont_env_ptr);
                }
                {
                  MR_Word mode_robdd__tfeirn__X_11;
                  MR_Word mode_robdd__tfeirn__Var_12;
                  MR_Word mode_robdd__tfeirn__Var_13;

                  {
                    mode_robdd__tfeirn__Var_13 = mercury__robdd__conj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TrueVars0_9);
                  }
                  {
                    mode_robdd__tfeirn__Var_12 = mercury__robdd__f_126_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__Var_13);
                  }
                  {
                    mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__X0_6, mode_robdd__tfeirn__Var_12);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mode_robdd__tfeirn__next_value_of_X0_6 = mode_robdd__tfeirn__X_11;

                    mode_robdd__tfeirn__X0_6 = mode_robdd__tfeirn__next_value_of_X0_6;
                  }
                  continue;
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0_1(
  void * mode_robdd__tfeirn__env_ptr_arg)
{
  {
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = (struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s *) mode_robdd__tfeirn__env_ptr_arg;

    {
      MR_Word mode_robdd__tfeirn__conv6_TrueVars_12;
      MR_Word mode_robdd__tfeirn__conv7_FalseVars_13;

      {
        mode_robdd__tfeirn__conv6_TrueVars_12 = mercury__sparse_bitset__union_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17);
      }
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12) = (MR_Word) mode_robdd__tfeirn__conv6_TrueVars_12;
      {
        mode_robdd__tfeirn__conv7_FalseVars_13 = mercury__sparse_bitset__union_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18);
      }
      *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13) = (MR_Word) mode_robdd__tfeirn__conv7_FalseVars_13;
      {
        ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
mode_robdd__tfeirn__labelling_4_p_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_23,
  MR_Word mode_robdd__tfeirn__Vars0_5,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2,
  MR_Word * mode_robdd__tfeirn__TrueVars_12,
  MR_Word * mode_robdd__tfeirn__FalseVars_13,
  MR_Cont mode_robdd__tfeirn__cont,
  void * mode_robdd__tfeirn__cont_env_ptr)
{
  {
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s mode_robdd__tfeirn__env;
    struct mode_robdd__tfeirn__labelling_4_p_0_env_0_s * mode_robdd__tfeirn__env_ptr = &mode_robdd__tfeirn__env;

    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12 = mode_robdd__tfeirn__TrueVars_12;
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13 = mode_robdd__tfeirn__FalseVars_13;
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont = mode_robdd__tfeirn__cont;
    (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr = mode_robdd__tfeirn__cont_env_ptr;
    {
      MR_bool mode_robdd__tfeirn__succeeded;
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word mode_robdd__tfeirn__N_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word mode_robdd__tfeirn__Vars_16;
      MR_Word mode_robdd__tfeirn__Var_19;
      MR_Word mode_robdd__tfeirn__conv0_TrueVars0_14;
      MR_Word mode_robdd__tfeirn__conv1_FalseVars0_15;
      MR_Word mode_robdd__tfeirn__conv2_Var_19;
      MR_Word mode_robdd__tfeirn__conv3_Vars_16;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_24_24));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_23));
      }
      {
        mode_robdd__tfeirn__conv0_TrueVars0_14 = mercury__sparse_bitset__intersect_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__T_6, (MR_Word) mode_robdd__tfeirn__Vars0_5);
      }
      (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars0_14;
      {
        mode_robdd__tfeirn__conv1_FalseVars0_15 = mercury__sparse_bitset__intersect_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__F_7, (MR_Word) mode_robdd__tfeirn__Vars0_5);
      }
      (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars0_15;
      {
        mode_robdd__tfeirn__conv2_Var_19 = mercury__sparse_bitset__difference_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__Vars0_5, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14);
      }
      mode_robdd__tfeirn__Var_19 = (MR_Word) mode_robdd__tfeirn__conv2_Var_19;
      {
        mode_robdd__tfeirn__conv3_Vars_16 = mercury__sparse_bitset__difference_2_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__Var_19, (MR_Word) (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15);
      }
      mode_robdd__tfeirn__Vars_16 = (MR_Word) mode_robdd__tfeirn__conv3_Vars_16;
      {
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25, (MR_Word) mode_robdd__tfeirn__Vars_16);
      }
      if (mode_robdd__tfeirn__succeeded)
        {
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars_12) = (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars0_14;
          *((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars_13) = (mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars0_15;
          {
            ((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont)((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__cont_env_ptr);
          }
        }
      else
        {
          MR_Word mode_robdd__tfeirn__Var_20;
          MR_Word mode_robdd__tfeirn__Var_21;
          MR_Word mode_robdd__tfeirn__Var_22;
          MR_Word mode_robdd__tfeirn__conv4_Var_21;
          MR_Word mode_robdd__tfeirn__conv5_Var_22;

          {
            mode_robdd__tfeirn__conv4_Var_21 = mercury__sparse_bitset__init_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25);
          }
          mode_robdd__tfeirn__Var_21 = (MR_Word) mode_robdd__tfeirn__conv4_Var_21;
          {
            mode_robdd__tfeirn__conv5_Var_22 = mercury__sparse_bitset__init_0_f_0((mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TypeInfo_25_25);
          }
          mode_robdd__tfeirn__Var_22 = (MR_Word) mode_robdd__tfeirn__conv5_Var_22;
          {
            mode_robdd__tfeirn__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_20, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_21));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_20, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_22));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_20, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_20, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_20, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_20, 5) = ((MR_Box) (mode_robdd__tfeirn__N_11));
          }
          {
            mode_robdd__tfeirn__labelling_2_4_p_0(mode_robdd__tfeirn__TypeInfo_for_T_23, mode_robdd__tfeirn__Vars_16, mode_robdd__tfeirn__Var_20, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__TrueVars1_17, &(mode_robdd__tfeirn__env_ptr)->mode_robdd__tfeirn__labelling_4_p_0_env_0__FalseVars1_18, mode_robdd__tfeirn__labelling_4_p_0_1, mode_robdd__tfeirn__env_ptr);
          }
        }
    }
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_filter_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
  MR_Word mode_robdd__tfeirn__P_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_11;
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_13;
    MR_Word mode_robdd__tfeirn__Var_14;
    MR_Word mode_robdd__tfeirn__Var_15;
    MR_Word mode_robdd__tfeirn__conv0_Var_11;
    MR_Word mode_robdd__tfeirn__conv1_Var_12;

    {
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
    }
    {
      mode_robdd__tfeirn__conv0_Var_11 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__P_4, (MR_Word) mode_robdd__tfeirn__T_5);
    }
    mode_robdd__tfeirn__Var_11 = (MR_Word) mode_robdd__tfeirn__conv0_Var_11;
    {
      mode_robdd__tfeirn__conv1_Var_12 = mercury__sparse_bitset__filter_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__P_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
    mode_robdd__tfeirn__Var_12 = (MR_Word) mode_robdd__tfeirn__conv1_Var_12;
    {
      mode_robdd__tfeirn__Var_13 = mode_robdd__equiv_vars__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__E_7);
    }
    {
      mode_robdd__tfeirn__Var_14 = mode_robdd__implications__filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__I_8);
    }
    {
      mode_robdd__tfeirn__Var_15 = mercury__robdd__restrict_filter_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__P_4, mode_robdd__tfeirn__R_9);
    }
    {
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_11));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
    }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_threshold_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_11;
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_13;
    MR_Word mode_robdd__tfeirn__Var_14;
    MR_Word mode_robdd__tfeirn__Var_15;
    MR_Word mode_robdd__tfeirn__conv0_Var_11;
    MR_Word mode_robdd__tfeirn__conv1_Var_12;

    {
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
    }
    {
      mode_robdd__tfeirn__conv0_Var_11 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__T_5, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
    mode_robdd__tfeirn__Var_11 = (MR_Word) mode_robdd__tfeirn__conv0_Var_11;
    {
      mode_robdd__tfeirn__conv1_Var_12 = mercury__sparse_bitset__remove_gt_2_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_20, (MR_Word) mode_robdd__tfeirn__F_6, ((MR_Box) (mode_robdd__tfeirn__V_4)));
    }
    mode_robdd__tfeirn__Var_12 = (MR_Word) mode_robdd__tfeirn__conv1_Var_12;
    {
      mode_robdd__tfeirn__Var_13 = mode_robdd__equiv_vars__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7);
    }
    {
      mode_robdd__tfeirn__Var_14 = mode_robdd__implications__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__I_8);
    }
    {
      mode_robdd__tfeirn__Var_15 = mercury__robdd__restrict_threshold_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
    }
    {
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_11));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
    }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__restrict_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20,
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

    {
      mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        MR_Word mode_robdd__tfeirn__Var_12;

        {
          mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
        {
          mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
        }
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

        {
          mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
            }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__L_11;

            {
              mode_robdd__tfeirn__succeeded = mode_robdd__equiv_vars__leader_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__E_7, &mode_robdd__tfeirn__L_11);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                {
                  mode_robdd__tfeirn__succeeded = mercury__term____Unify____var_1_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__L_11, mode_robdd__tfeirn__V_4);
                }
                mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
                if (mode_robdd__tfeirn__succeeded)
                  {
                    MR_Word mode_robdd__tfeirn__Var_14;

                    {
                      mode_robdd__tfeirn__Var_14 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
                    {
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
                    }
                  }
                else
                  {
                    MR_Word mode_robdd__tfeirn__Var_15;
                    MR_Word mode_robdd__tfeirn__Var_16;
                    MR_Word mode_robdd__tfeirn__Var_17;

                    {
                      mode_robdd__tfeirn__Var_15 = mode_robdd__equiv_vars__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__E_7, mode_robdd__tfeirn__V_4);
                    }
                    {
                      mode_robdd__tfeirn__Var_16 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                    }
                    {
                      mode_robdd__tfeirn__Var_17 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                    }
                    {
                      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_16));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_17));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
                    }
                  }
              }
            else
              {
                MR_Word mode_robdd__tfeirn__Var_18;
                MR_Word mode_robdd__tfeirn__Var_19;

                {
                  mode_robdd__tfeirn__Var_18 = mode_robdd__implications__delete_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__I_8, mode_robdd__tfeirn__V_4);
                }
                {
                  mode_robdd__tfeirn__Var_19 = mercury__robdd__restrict_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__V_4, mode_robdd__tfeirn__R_9);
                }
                {
                  mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_18));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_19));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
                }
              }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

void MR_CALL 
mode_robdd__tfeirn__known_vars_3_p_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_18,
  MR_Word mode_robdd__tfeirn__X_4,
  MR_Word * mode_robdd__tfeirn__TrueVars_5,
  MR_Word * mode_robdd__tfeirn__FalseVars_6)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_21;
    MR_Word mode_robdd__tfeirn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));

    {
      mode_robdd__tfeirn__Var_21 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_18);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_18, mode_robdd__tfeirn__Var_7, mode_robdd__tfeirn__Var_21);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
        MR_Word mode_robdd__tfeirn__conv0_TrueVars_5;
        MR_Word mode_robdd__tfeirn__conv1_FalseVars_6;

        {
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_18));
        }
        {
          mode_robdd__tfeirn__conv0_TrueVars_5 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
        *mode_robdd__tfeirn__TrueVars_5 = (MR_Word) mode_robdd__tfeirn__conv0_TrueVars_5;
        {
          mode_robdd__tfeirn__conv1_FalseVars_6 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_20_20);
        }
        *mode_robdd__tfeirn__FalseVars_6 = (MR_Word) mode_robdd__tfeirn__conv1_FalseVars_6;
      }
    else
      {
        MR_Word mode_robdd__tfeirn__Var_9;
        MR_Word mode_robdd__tfeirn__Var_10;
        MR_Word mode_robdd__tfeirn__Var_11;
        MR_Word mode_robdd__tfeirn__Var_12;

        *mode_robdd__tfeirn__TrueVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 0)));
        *mode_robdd__tfeirn__FalseVars_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 1)));
        mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 2)));
        mode_robdd__tfeirn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 3)));
        mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 4)));
        mode_robdd__tfeirn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_4, (MR_Integer) 5)));
      }
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__vars_disentailed_1_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11,
  MR_Word mode_robdd__tfeirn__X_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
    MR_Word mode_robdd__tfeirn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

    {
      mode_robdd__tfeirn__Var_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__Var_4, mode_robdd__tfeirn__Var_12);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mode_robdd__tfeirn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

        {
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
        }
      }
    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__vars_entailed_1_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_11,
  MR_Word mode_robdd__tfeirn__X_3)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__2_2;
    MR_Word mode_robdd__tfeirn__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

    {
      mode_robdd__tfeirn__Var_12 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_11);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_11, mode_robdd__tfeirn__Var_4, mode_robdd__tfeirn__Var_12);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mode_robdd__tfeirn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

        {
          mode_robdd__tfeirn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__HeadVar__2_2, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
        }
      }
    return mode_robdd__tfeirn__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mode_robdd__tfeirn__var_entailed_2_p_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_12,
  MR_Word mode_robdd__tfeirn__X_3,
  MR_Word mode_robdd__tfeirn__V_4)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;

    {
      MR_Word mode_robdd__tfeirn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
      MR_Word mode_robdd__tfeirn__Var_17;
      MR_Word mode_robdd__tfeirn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
      MR_Word mode_robdd__tfeirn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
      MR_Word mode_robdd__tfeirn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
      MR_Word mode_robdd__tfeirn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
      MR_Word mode_robdd__tfeirn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

      {
        mode_robdd__tfeirn__Var_17 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_12);
      }
      {
        mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var_17);
      }
    }
    if (!(mode_robdd__tfeirn__succeeded))
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_14_14;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_16;
        MR_Word mode_robdd__tfeirn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 0)));
        MR_Word mode_robdd__tfeirn__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 1)));
        MR_Word mode_robdd__tfeirn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 2)));
        MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 3)));
        MR_Word mode_robdd__tfeirn__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 4)));
        MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_3, (MR_Integer) 5)));

        {
          mode_robdd__tfeirn__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_14_14, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_13_13));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_14_14, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_12));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_15));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_12));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_16, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_14_14));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_12, mode_robdd__tfeirn__TypeClassInfo_for_enum_16, mode_robdd__tfeirn__Var_5, mode_robdd__tfeirn__V_4);
        }
      }
    return mode_robdd__tfeirn__succeeded;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__var_restrict_false_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30,
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__X_11;
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34;

    {
      mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_31_31));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_32_32));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30);
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

        {
          mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_35_35));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_36_36));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
            {
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
            }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46;
            MR_Word mode_robdd__tfeirn__X0_12;
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_15;
            MR_Word mode_robdd__tfeirn__Var_16;
            MR_Word mode_robdd__tfeirn__Var_17;
            MR_Word mode_robdd__tfeirn__Var_18;
            MR_Word mode_robdd__tfeirn__Var_19;
            MR_Word mode_robdd__tfeirn__Var_20;
            MR_Word mode_robdd__tfeirn__Var_21;
            MR_Word mode_robdd__tfeirn__Var_22;
            MR_Word mode_robdd__tfeirn__Var_23;
            MR_Word mode_robdd__tfeirn__Var_24;
            MR_Word mode_robdd__tfeirn__Var_26;
            MR_Word mode_robdd__tfeirn__Var_27;
            MR_Word mode_robdd__tfeirn__Var_28;
            MR_Word mode_robdd__tfeirn__Var_29;
            MR_Word mode_robdd__tfeirn__Var_25;

            {
              mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_43_43));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
            }
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_44_44));
            }
            {
              mode_robdd__tfeirn__Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_16 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 0) = ((MR_Box) (mode_robdd__tfeirn__T_5));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_16));
            }
            {
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__Var_14);
            }
            mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__Var_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__Var_18, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_24));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_17));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_26));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_27));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_28));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_29));
            }
          }
      }
    return mode_robdd__tfeirn__X_11;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__var_restrict_true_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_30,
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__X_11;
    MR_Word mode_robdd__tfeirn__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_32_32;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_34;

    {
      mode_robdd__tfeirn__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_31_31));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_32_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_33));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_34, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_32_32));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_34, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__X_11 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30);
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_38;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_36_36;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;

        {
          mode_robdd__tfeirn__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_35_35));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_36_36, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_37));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_38, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_36_36));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__Var_13 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_38, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
            {
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__N_10));
            }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_44_44;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_46;
            MR_Word mode_robdd__tfeirn__X0_12;
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_15;
            MR_Word mode_robdd__tfeirn__Var_16;
            MR_Word mode_robdd__tfeirn__Var_17;
            MR_Word mode_robdd__tfeirn__Var_18;
            MR_Word mode_robdd__tfeirn__Var_19;
            MR_Word mode_robdd__tfeirn__Var_20;
            MR_Word mode_robdd__tfeirn__Var_21;
            MR_Word mode_robdd__tfeirn__Var_22;
            MR_Word mode_robdd__tfeirn__Var_23;
            MR_Word mode_robdd__tfeirn__Var_25;
            MR_Word mode_robdd__tfeirn__Var_26;
            MR_Word mode_robdd__tfeirn__Var_27;
            MR_Word mode_robdd__tfeirn__Var_28;
            MR_Word mode_robdd__tfeirn__Var_29;
            MR_Word mode_robdd__tfeirn__Var_24;

            {
              mode_robdd__tfeirn__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_43_43));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_44_44, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
            }
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_45));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_30));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_46, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_44_44));
            }
            {
              mode_robdd__tfeirn__Var_15 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__T_5, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_16 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 2) = ((MR_Box) (mode_robdd__tfeirn__E_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 3) = ((MR_Box) (mode_robdd__tfeirn__I_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 4) = ((MR_Box) (mode_robdd__tfeirn__R_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_14, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_16));
            }
            {
              mode_robdd__tfeirn__X0_12 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__Var_14);
            }
            mode_robdd__tfeirn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__Var_17 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_108_101_116_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_30, mode_robdd__tfeirn__TypeClassInfo_for_enum_46, mode_robdd__tfeirn__Var_18, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 0)));
            mode_robdd__tfeirn__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 1)));
            mode_robdd__tfeirn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 2)));
            mode_robdd__tfeirn__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 3)));
            mode_robdd__tfeirn__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 4)));
            mode_robdd__tfeirn__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_12, (MR_Integer) 5)));
            {
              mode_robdd__tfeirn__X_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_17));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_25));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_26));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_27));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_28));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_11, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_29));
            }
          }
      }
    return mode_robdd__tfeirn__X_11;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv3_LambdaHeadVar__3_20;

    {
      mode_robdd__tfeirn__conv3_LambdaHeadVar__3_20 = mode_robdd__tfeirn__IntroducedFrom__func__imp_vars_set__521__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv3_LambdaHeadVar__3_20));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__disj_vars_eq_3_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_21,
  MR_Word mode_robdd__tfeirn__Vars_5,
  MR_Word mode_robdd__tfeirn__Var_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn___E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn___I_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn___R_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn___N_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeInfo_23_23;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_25;

    {
      mode_robdd__tfeirn__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_23_23, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_24));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_25, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_23_23));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeClassInfo_for_enum_25, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__Var_6);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_23_23, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
        else
          {
            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__conj_not_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
          }
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeInfo_29_29;
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_31;

        {
          mode_robdd__tfeirn__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_28));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_29, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_30));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_31, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_29_29));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeClassInfo_for_enum_31, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__Var_6);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_29_29, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21);
              }
            else
              {
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__disj_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5, mode_robdd__tfeirn__X_7);
              }
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_35_35;
            MR_Word mode_robdd__tfeirn__Var_16;
            MR_Word mode_robdd__tfeirn__conv0_Var_16;

            {
              mode_robdd__tfeirn__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_35_35, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_34_34));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_35_35, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
            }
            {
              mode_robdd__tfeirn__conv0_Var_16 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_35_35, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__T_9);
            }
            mode_robdd__tfeirn__Var_16 = (MR_Word) mode_robdd__tfeirn__conv0_Var_16;
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_35_35, (MR_Word) mode_robdd__tfeirn__Var_16);
            }
            mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
              }
            else
              {
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mode_robdd__tfeirn__TypeInfo_37_37;

                {
                  mode_robdd__tfeirn__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_37_37, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_36_36));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_37_37, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
                }
                {
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_37_37, (MR_Word) mode_robdd__tfeirn__Vars_5, (MR_Word) mode_robdd__tfeirn__F_8);
                }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                  }
                else
                  {
                    MR_Word mode_robdd__tfeirn__TypeInfo_39_39;
                    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_41;
                    MR_Word mode_robdd__tfeirn__Var1_10;
                    MR_Word mode_robdd__tfeirn__Vars1_11;
                    MR_Word mode_robdd__tfeirn__TypeCtorInfo_38_38 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
                    MR_Box mode_robdd__tfeirn__conv2_Var1_10;
                    MR_Word mode_robdd__tfeirn__conv1_Vars1_11;

                    {
                      mode_robdd__tfeirn__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_39_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_38_38));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_39_39, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
                    }
                    {
                      mode_robdd__tfeirn__TypeClassInfo_for_enum_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_40));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_41, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_39_39));
                    }
                    {
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_41, &mode_robdd__tfeirn__conv2_Var1_10, (MR_Word) mode_robdd__tfeirn__Vars_5, &mode_robdd__tfeirn__conv1_Vars1_11);
                    }
                    if (mode_robdd__tfeirn__succeeded)
                      {
                        mode_robdd__tfeirn__Var1_10 = ((MR_Word) mode_robdd__tfeirn__conv2_Var1_10);
                        mode_robdd__tfeirn__Vars1_11 = (MR_Word) mode_robdd__tfeirn__conv1_Vars1_11;
                        mode_robdd__tfeirn__succeeded = MR_TRUE;
                      }
                    if (mode_robdd__tfeirn__succeeded)
                      {
                        {
                          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_39_39, (MR_Word) mode_robdd__tfeirn__Vars1_11);
                        }
                        if (mode_robdd__tfeirn__succeeded)
                          {
                            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__eq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__Var1_10, mode_robdd__tfeirn__X_7);
                          }
                        else
                          {
                            MR_Word mode_robdd__tfeirn__TypeCtorInfo_28_67;
                            MR_Word mode_robdd__tfeirn__TypeInfo_29_68;
                            MR_Word mode_robdd__tfeirn__Var_17;
                            MR_Word mode_robdd__tfeirn__Var_18;
                            MR_Word mode_robdd__tfeirn__Var_19;
                            MR_Word mode_robdd__tfeirn__Var_20;
                            MR_Word mode_robdd__tfeirn__T_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
                            MR_Word mode_robdd__tfeirn__F_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
                            MR_Word mode_robdd__tfeirn__E_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
                            MR_Word mode_robdd__tfeirn__I0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
                            MR_Word mode_robdd__tfeirn__R_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
                            MR_Word mode_robdd__tfeirn__I_53;
                            MR_Word mode_robdd__tfeirn__Var_56 = (MR_Integer) 0;
                            MR_Word mode_robdd__tfeirn__Var_57;
                            MR_Word mode_robdd__tfeirn__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
                            MR_Box mode_robdd__tfeirn__conv4_I_53;

                            {
                              mode_robdd__tfeirn__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_57, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[1]));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_57, 1) = ((MR_Box) (mode_robdd__tfeirn__disj_vars_eq_3_f_0_1));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_57, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_57, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
                            }
                            mode_robdd__tfeirn__TypeCtorInfo_28_67 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_imp_vars_1;
                            {
                              mode_robdd__tfeirn__TypeInfo_29_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_68, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_28_67));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_29_68, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_21));
                            }
                            {
                              mode_robdd__tfeirn__conv4_I_53 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__TypeInfo_29_68, mode_robdd__tfeirn__TypeClassInfo_for_enum_41, (MR_Word) mode_robdd__tfeirn__Var_57, mode_robdd__tfeirn__Vars_5, ((MR_Box) (mode_robdd__tfeirn__I0_50)));
                            }
                            mode_robdd__tfeirn__I_53 = ((MR_Word) mode_robdd__tfeirn__conv4_I_53);
                            {
                              mode_robdd__tfeirn__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 0) = ((MR_Box) (mode_robdd__tfeirn__T_47));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 1) = ((MR_Box) (mode_robdd__tfeirn__F_48));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 2) = ((MR_Box) (mode_robdd__tfeirn__E_49));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 3) = ((MR_Box) (mode_robdd__tfeirn__I_53));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 4) = ((MR_Box) (mode_robdd__tfeirn__R_51));
                              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_17, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_56));
                            }
                            {
                              mode_robdd__tfeirn__Var_19 = mercury__robdd__var_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6);
                            }
                            {
                              mode_robdd__tfeirn__Var_20 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Vars_5);
                            }
                            {
                              mode_robdd__tfeirn__Var_18 = mercury__robdd__f_less_or_equal_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_19, mode_robdd__tfeirn__Var_20);
                            }
                            {
                              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_17, mode_robdd__tfeirn__Var_18);
                            }
                          }
                      }
                    else
                      {
                        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_21, mode_robdd__tfeirn__Var_6, mode_robdd__tfeirn__X_7);
                      }
                  }
              }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__io_constraint_4_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
  MR_Word mode_robdd__tfeirn__V_in_6,
  MR_Word mode_robdd__tfeirn__V_out_7,
  MR_Word mode_robdd__tfeirn__V__8,
  MR_Word mode_robdd__tfeirn__X_9)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__5_5;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16;
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_19;
    MR_Word mode_robdd__tfeirn__Vars_10;
    MR_Word mode_robdd__tfeirn__Var_11;
    MR_Word mode_robdd__tfeirn__Var_12;
    MR_Word mode_robdd__tfeirn__Var_13;
    MR_Word mode_robdd__tfeirn__Var_14;

    {
      mode_robdd__tfeirn__Var_11 = mode_robdd__tfeirn__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__V_in_6, mode_robdd__tfeirn__V__8, mode_robdd__tfeirn__X_9);
    }
    mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    {
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_18));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_19, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_17_17));
    }
    mode_robdd__tfeirn__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mode_robdd__tfeirn__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_13, 0) = ((MR_Box) (mode_robdd__tfeirn__V__8));
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_13, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
    }
    {
      mode_robdd__tfeirn__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_12, 0) = ((MR_Box) (mode_robdd__tfeirn__V_in_6));
      MR_hl_field(MR_mktag(1), mode_robdd__tfeirn__Var_12, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
    }
    {
      mode_robdd__tfeirn__Vars_10 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__TypeClassInfo_for_enum_19, mode_robdd__tfeirn__Var_12);
    }
    {
      mode_robdd__tfeirn__HeadVar__5_5 = mode_robdd__tfeirn__disj_vars_eq_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15, mode_robdd__tfeirn__Vars_10, mode_robdd__tfeirn__V_out_7, mode_robdd__tfeirn__Var_11);
    }
    return mode_robdd__tfeirn__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__not_both_3_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
  MR_Word mode_robdd__tfeirn__VarA_5,
  MR_Word mode_robdd__tfeirn__VarB_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

    {
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarA_5);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

        {
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_8, mode_robdd__tfeirn__VarB_6);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

            {
              mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
            }
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarA_5);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__X_7);
              }
            else
              {
                MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
                MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
                MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

                {
                  mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
                }
                {
                  mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
                }
                {
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_9, mode_robdd__tfeirn__VarB_6);
                }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__not_var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__X_7);
                  }
                else
                  {
                    MR_Word mode_robdd__tfeirn__Var_14;
                    MR_Word mode_robdd__tfeirn__Var_15;

                    {
                      mode_robdd__tfeirn__Var_14 = mode_robdd__implications__not_both_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                    }
                    mode_robdd__tfeirn__Var_15 = (MR_Integer) 0;
                    {
                      mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_9));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
                      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
                    }
                  }
              }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__at_most_one_of_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_20,
  MR_Word mode_robdd__tfeirn__Vars_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;
    MR_Integer mode_robdd__tfeirn__Var_12;
    MR_Integer mode_robdd__tfeirn__Var_13;
    MR_Word mode_robdd__tfeirn__Var_14;
    MR_Word mode_robdd__tfeirn__conv0_Var_14;

    {
      mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
    }
    {
      mode_robdd__tfeirn__conv0_Var_14 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_22_22, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
    mode_robdd__tfeirn__Var_14 = (MR_Word) mode_robdd__tfeirn__conv0_Var_14;
    {
      mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_24, (MR_Word) mode_robdd__tfeirn__Var_14);
    }
    mode_robdd__tfeirn__Var_13 = (MR_Integer) 1;
    mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_12 <= mode_robdd__tfeirn__Var_13);
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;
        MR_Integer mode_robdd__tfeirn__Var_15;
        MR_Integer mode_robdd__tfeirn__Var_16;
        MR_Word mode_robdd__tfeirn__Var_17;
        MR_Word mode_robdd__tfeirn__conv1_Var_17;

        {
          mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_20));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
        }
        {
          mode_robdd__tfeirn__conv1_Var_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_26_26, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
        }
        mode_robdd__tfeirn__Var_17 = (MR_Word) mode_robdd__tfeirn__conv1_Var_17;
        {
          mode_robdd__tfeirn__Var_15 = mercury__sparse_bitset__count_1_f_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_28, (MR_Word) mode_robdd__tfeirn__Var_17);
        }
        mode_robdd__tfeirn__Var_16 = (MR_Integer) 1;
        mode_robdd__tfeirn__succeeded = (mode_robdd__tfeirn__Var_15 > mode_robdd__tfeirn__Var_16);
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20);
          }
        else
          {
            MR_Word mode_robdd__tfeirn__Var_18;
            MR_Word mode_robdd__tfeirn__Var_19;

            {
              mode_robdd__tfeirn__Var_18 = mode_robdd__implications__at_most_one_of_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_20, mode_robdd__tfeirn__Vars_4, mode_robdd__tfeirn__I_9);
            }
            mode_robdd__tfeirn__Var_19 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_6));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_18));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_19));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__disj_vars_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_22,
  MR_Word mode_robdd__tfeirn__Vars_4,
  MR_Word mode_robdd__tfeirn__X0_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__X_6;
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn___N_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X0_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
    MR_Word mode_robdd__tfeirn__Var_18;
    MR_Word mode_robdd__tfeirn__conv0_Var_18;

    {
      mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
    }
    {
      mode_robdd__tfeirn__conv0_Var_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_24_24, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
    }
    mode_robdd__tfeirn__Var_18 = (MR_Word) mode_robdd__tfeirn__conv0_Var_18;
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_24_24, (MR_Word) mode_robdd__tfeirn__Var_18);
    }
    mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__X0_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_26_26;

        {
          mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_26_26, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_8);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22);
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_28_28;
            MR_Word mode_robdd__tfeirn__VarsNF_13;
            MR_Word mode_robdd__tfeirn__conv1_VarsNF_13;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_30;
            MR_Word mode_robdd__tfeirn__Var1_14;
            MR_Word mode_robdd__tfeirn__VarsNF1_15;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29;
            MR_Box mode_robdd__tfeirn__conv3_Var1_14;
            MR_Word mode_robdd__tfeirn__conv2_VarsNF1_15;

            {
              mode_robdd__tfeirn__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_27_27));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_28_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
            }
            {
              mode_robdd__tfeirn__conv1_VarsNF_13 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_8);
            }
            mode_robdd__tfeirn__VarsNF_13 = (MR_Word) mode_robdd__tfeirn__conv1_VarsNF_13;
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_29));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_22));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_30, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_28_28));
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv3_Var1_14, (MR_Word) mode_robdd__tfeirn__VarsNF_13, &mode_robdd__tfeirn__conv2_VarsNF1_15);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__Var1_14 = ((MR_Word) mode_robdd__tfeirn__conv3_Var1_14);
                mode_robdd__tfeirn__VarsNF1_15 = (MR_Word) mode_robdd__tfeirn__conv2_VarsNF1_15;
                mode_robdd__tfeirn__succeeded = MR_TRUE;
              }
            if (mode_robdd__tfeirn__succeeded)
              {
                MR_Word mode_robdd__tfeirn__Var2_16;
                MR_Word mode_robdd__tfeirn__VarsNF2_17;
                MR_Box mode_robdd__tfeirn__conv5_Var2_16;
                MR_Word mode_robdd__tfeirn__conv4_VarsNF2_17;

                {
                  mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__remove_least_3_p_0(mode_robdd__tfeirn__TypeClassInfo_for_enum_30, &mode_robdd__tfeirn__conv5_Var2_16, (MR_Word) mode_robdd__tfeirn__VarsNF1_15, &mode_robdd__tfeirn__conv4_VarsNF2_17);
                }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    mode_robdd__tfeirn__Var2_16 = ((MR_Word) mode_robdd__tfeirn__conv5_Var2_16);
                    mode_robdd__tfeirn__VarsNF2_17 = (MR_Word) mode_robdd__tfeirn__conv4_VarsNF2_17;
                    mode_robdd__tfeirn__succeeded = MR_TRUE;
                  }
                if (mode_robdd__tfeirn__succeeded)
                  {
                    {
                      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_28_28, (MR_Word) mode_robdd__tfeirn__VarsNF2_17);
                    }
                    if (mode_robdd__tfeirn__succeeded)
                      {
                        MR_Word mode_robdd__tfeirn__Var_19;
                        MR_Word mode_robdd__tfeirn__Var_20;

                        {
                          mode_robdd__tfeirn__Var_19 = mode_robdd__implications__either_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__Var2_16, mode_robdd__tfeirn__I_10);
                        }
                        mode_robdd__tfeirn__Var_20 = (MR_Integer) 0;
                        {
                          mode_robdd__tfeirn__X_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 1) = ((MR_Box) (mode_robdd__tfeirn__F_8));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 2) = ((MR_Box) (mode_robdd__tfeirn__E_9));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_19));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 4) = ((MR_Box) (mode_robdd__tfeirn__R_11));
                          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_6, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_20));
                        }
                      }
                    else
                      {
                        MR_Word mode_robdd__tfeirn__Var_21;

                        {
                          mode_robdd__tfeirn__Var_21 = mercury__robdd__disj_vars_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__VarsNF_13);
                        }
                        {
                          mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__x_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__X0_5, mode_robdd__tfeirn__Var_21);
                        }
                      }
                  }
                else
                  {
                    mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__var_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22, mode_robdd__tfeirn__Var1_14, mode_robdd__tfeirn__X0_5);
                  }
              }
            else
              {
                mode_robdd__tfeirn__X_6 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_22);
              }
          }
      }
    return mode_robdd__tfeirn__X_6;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__conj_not_vars_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
  MR_Word mode_robdd__tfeirn__Vars_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;

    {
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_6);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
        MR_Word mode_robdd__tfeirn__Var_12;
        MR_Word mode_robdd__tfeirn__conv0_Var_12;

        {
          mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
        }
        {
          mode_robdd__tfeirn__conv0_Var_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_7);
        }
        mode_robdd__tfeirn__Var_12 = (MR_Word) mode_robdd__tfeirn__conv0_Var_12;
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__Var_12);
        }
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21;
            MR_Word mode_robdd__tfeirn__Var_13;
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__conv1_Var_13;

            {
              mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_20_20));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
            }
            {
              mode_robdd__tfeirn__conv1_Var_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, (MR_Word) mode_robdd__tfeirn__F_6, (MR_Word) mode_robdd__tfeirn__Vars_4);
            }
            mode_robdd__tfeirn__Var_13 = (MR_Word) mode_robdd__tfeirn__conv1_Var_13;
            mode_robdd__tfeirn__Var_14 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__conj_vars_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_15,
  MR_Word mode_robdd__tfeirn__Vars_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_17_17;

    {
      mode_robdd__tfeirn__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_17_17, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__subset_2_p_0(mode_robdd__tfeirn__TypeInfo_17_17, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__T_6);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_19_19;
        MR_Word mode_robdd__tfeirn__Var_12;
        MR_Word mode_robdd__tfeirn__conv0_Var_12;

        {
          mode_robdd__tfeirn__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_18_18));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_19_19, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
        }
        {
          mode_robdd__tfeirn__conv0_Var_12 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__Vars_4, (MR_Word) mode_robdd__tfeirn__F_7);
        }
        mode_robdd__tfeirn__Var_12 = (MR_Word) mode_robdd__tfeirn__conv0_Var_12;
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__empty_1_p_0(mode_robdd__tfeirn__TypeInfo_19_19, (MR_Word) mode_robdd__tfeirn__Var_12);
        }
        mode_robdd__tfeirn__succeeded = !(mode_robdd__tfeirn__succeeded);
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_15);
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_21_21;
            MR_Word mode_robdd__tfeirn__Var_13;
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__conv1_Var_13;

            {
              mode_robdd__tfeirn__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_20_20));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_21_21, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_15));
            }
            {
              mode_robdd__tfeirn__conv1_Var_13 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_21_21, (MR_Word) mode_robdd__tfeirn__T_6, (MR_Word) mode_robdd__tfeirn__Vars_4);
            }
            mode_robdd__tfeirn__Var_13 = (MR_Word) mode_robdd__tfeirn__conv1_Var_13;
            mode_robdd__tfeirn__Var_14 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__imp_vars_3_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
  MR_Word mode_robdd__tfeirn__VarA_5,
  MR_Word mode_robdd__tfeirn__VarB_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

    {
      mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
    }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
      }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
      }
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

        {
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

            {
              mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
            }
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
            if (mode_robdd__tfeirn__succeeded)
              mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
            else
              {
                MR_Word mode_robdd__tfeirn__Var_14;
                MR_Word mode_robdd__tfeirn__Var_15;

                {
                  mode_robdd__tfeirn__Var_14 = mode_robdd__implications__imp_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
                }
                mode_robdd__tfeirn__Var_15 = (MR_Integer) 0;
                {
                  mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
                  MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
                }
              }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__neq_vars_3_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
  MR_Word mode_robdd__tfeirn__VarA_5,
  MR_Word mode_robdd__tfeirn__VarB_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

    {
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

      {
        mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
      }
      {
        mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
      }
      {
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
      if (mode_robdd__tfeirn__succeeded)
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
    }
    if (!(mode_robdd__tfeirn__succeeded))
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

        {
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
          }
      }
    if (mode_robdd__tfeirn__succeeded)
      {
        mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
      }
    else
      {
        {
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

          {
            mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
          }
          {
            mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
          }
          {
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
          if (mode_robdd__tfeirn__succeeded)
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
        }
        if (!(mode_robdd__tfeirn__succeeded))
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

            {
              mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
            }
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
              }
          }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
        else
          {
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_15;

            {
              mode_robdd__tfeirn__Var_14 = mode_robdd__implications__neq_vars_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__I_11);
            }
            mode_robdd__tfeirn__Var_15 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__E_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__eq_vars_3_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_16,
  MR_Word mode_robdd__tfeirn__VarA_5,
  MR_Word mode_robdd__tfeirn__VarB_6,
  MR_Word mode_robdd__tfeirn__X_7)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__4_4;
    MR_Word mode_robdd__tfeirn__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_7, (MR_Integer) 5)));

    {
      MR_Word mode_robdd__tfeirn__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
      MR_Word mode_robdd__tfeirn__TypeInfo_18_18;
      MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
      MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_20;

      {
        mode_robdd__tfeirn__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_17_17));
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_18_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
      }
      {
        mode_robdd__tfeirn__TypeClassInfo_for_enum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_19));
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
        MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_20, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_18_18));
      }
      {
        mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
      }
      if (mode_robdd__tfeirn__succeeded)
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_20, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
        }
    }
    if (!(mode_robdd__tfeirn__succeeded))
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_22_22;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_24;

        {
          mode_robdd__tfeirn__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_21_21));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_22_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_23));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_24, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_22_22));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_24, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
          }
      }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__X_7;
    else
      {
        {
          MR_Word mode_robdd__tfeirn__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
          MR_Word mode_robdd__tfeirn__TypeInfo_26_26;
          MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
          MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_28;

          {
            mode_robdd__tfeirn__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_25_25));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_26_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
          }
          {
            mode_robdd__tfeirn__TypeClassInfo_for_enum_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_27));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
            MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_28, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_26_26));
          }
          {
            mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarA_5);
          }
          if (mode_robdd__tfeirn__succeeded)
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_28, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarB_6);
            }
        }
        if (!(mode_robdd__tfeirn__succeeded))
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_30_30;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_32;

            {
              mode_robdd__tfeirn__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_29_29));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_30_30, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
            }
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_31));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_16));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_32, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_30_30));
            }
            {
              mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__F_9, mode_robdd__tfeirn__VarA_5);
            }
            if (mode_robdd__tfeirn__succeeded)
              {
                mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__TypeClassInfo_for_enum_32, mode_robdd__tfeirn__T_8, mode_robdd__tfeirn__VarB_6);
              }
          }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__4_4 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16);
          }
        else
          {
            MR_Word mode_robdd__tfeirn__Var_14;
            MR_Word mode_robdd__tfeirn__Var_15;

            {
              mode_robdd__tfeirn__Var_14 = mode_robdd__equiv_vars__add_equality_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_16, mode_robdd__tfeirn__VarA_5, mode_robdd__tfeirn__VarB_6, mode_robdd__tfeirn__E_10);
            }
            mode_robdd__tfeirn__Var_15 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 0) = ((MR_Box) (mode_robdd__tfeirn__T_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 1) = ((MR_Box) (mode_robdd__tfeirn__F_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_14));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 3) = ((MR_Box) (mode_robdd__tfeirn__I_11));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 4) = ((MR_Box) (mode_robdd__tfeirn__R_12));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__4_4, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_15));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__not_var_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__F_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18;

    {
      mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_16_16));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22;

        {
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_20_20));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__T_7, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14);
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26;
            MR_Word mode_robdd__tfeirn__Var_12;
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
            }
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_24_24));
            }
            {
              mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__F_6, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_13 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__T_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__var_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_14,
  MR_Word mode_robdd__tfeirn__V_4,
  MR_Word mode_robdd__tfeirn__X_5)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__F_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__E_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__I_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_5, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_16_16;
    MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
    MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_18;

    {
      mode_robdd__tfeirn__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_16_16, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
    }
    {
      mode_robdd__tfeirn__TypeClassInfo_for_enum_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_17));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_18, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_16_16));
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_18, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__X_5;
    else
      {
        MR_Word mode_robdd__tfeirn__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mode_robdd__tfeirn__TypeInfo_20_20;
        MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
        MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_22;

        {
          mode_robdd__tfeirn__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_19_19));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_20_20, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
        }
        {
          mode_robdd__tfeirn__TypeClassInfo_for_enum_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_21));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
          MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_22, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_20_20));
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_22, mode_robdd__tfeirn__F_7, mode_robdd__tfeirn__V_4);
        }
        if (mode_robdd__tfeirn__succeeded)
          {
            mode_robdd__tfeirn__HeadVar__3_3 = mode_robdd__tfeirn__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14);
          }
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_23_23 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_24_24;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_26;
            MR_Word mode_robdd__tfeirn__Var_12;
            MR_Word mode_robdd__tfeirn__Var_13;

            {
              mode_robdd__tfeirn__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_23_23));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_24_24, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
            }
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_25));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_14));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_26, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_24_24));
            }
            {
              mode_robdd__tfeirn__Var_12 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_14, mode_robdd__tfeirn__TypeClassInfo_for_enum_26, mode_robdd__tfeirn__T_6, mode_robdd__tfeirn__V_4);
            }
            mode_robdd__tfeirn__Var_13 = (MR_Integer) 0;
            {
              mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_12));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__F_7));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__E_8));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__I_9));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__R_10));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_13));
            }
          }
      }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_4(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv12_LambdaHeadVar__3_72;

    {
      mode_robdd__tfeirn__conv12_LambdaHeadVar__3_72 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv12_LambdaHeadVar__3_72));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_3(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv10_LambdaHeadVar__3_66;

    {
      mode_robdd__tfeirn__conv10_LambdaHeadVar__3_66 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_56_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv10_LambdaHeadVar__3_66));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_2(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv8_LambdaHeadVar__3_58;

    {
      mode_robdd__tfeirn__conv8_LambdaHeadVar__3_58 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_57_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv8_LambdaHeadVar__3_58));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

static MR_Box MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0_1(
  MR_Box mode_robdd__tfeirn__closure_arg,
  MR_Box mode_robdd__tfeirn__wrapper_arg_1,
  MR_Box mode_robdd__tfeirn__wrapper_arg_2)
{
  {
    MR_Box mode_robdd__tfeirn__wrapper_arg_3;
    MR_Box mode_robdd__tfeirn__closure = mode_robdd__tfeirn__closure_arg;
    MR_Word mode_robdd__tfeirn__conv6_LambdaHeadVar__3_52;

    {
      mode_robdd__tfeirn__conv6_LambdaHeadVar__3_52 = mode_robdd__tfeirn__f_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_43_95_95_50_55_55_95_95_49_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__closure, (MR_Integer) 4))), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_1), ((MR_Word) mode_robdd__tfeirn__wrapper_arg_2));
    }
    mode_robdd__tfeirn__wrapper_arg_3 = ((MR_Box) (mode_robdd__tfeirn__conv6_LambdaHeadVar__3_52));
    return mode_robdd__tfeirn__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_plus_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_85,
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__X_16;
    MR_Word mode_robdd__tfeirn__TA0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EA0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IA0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RA0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__TB0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FB0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EB0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__NA0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__NB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_92;

    {
      mode_robdd__tfeirn__Var_92 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
    }
    {
      mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA0_8, mode_robdd__tfeirn__Var_92);
    }
    if (mode_robdd__tfeirn__succeeded)
      mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__2_2;
    else
      {
        MR_Word mode_robdd__tfeirn__Var_93;

        {
          mode_robdd__tfeirn__Var_93 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85);
        }
        {
          mode_robdd__tfeirn__succeeded = mercury__robdd____Unify____robdd_1_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RB0_14, mode_robdd__tfeirn__Var_93);
        }
        if (mode_robdd__tfeirn__succeeded)
          mode_robdd__tfeirn__X_16 = mode_robdd__tfeirn__HeadVar__1_1;
        else
          {
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mode_robdd__tfeirn__TypeInfo_87_87;
            MR_Word mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88;
            MR_Word mode_robdd__tfeirn__TypeClassInfo_for_enum_89;
            MR_Word mode_robdd__tfeirn__TypeCtorInfo_90_90;
            MR_Word mode_robdd__tfeirn__TypeInfo_91_91;
            MR_Word mode_robdd__tfeirn__T_17;
            MR_Word mode_robdd__tfeirn__F_18;
            MR_Word mode_robdd__tfeirn__E_19;
            MR_Word mode_robdd__tfeirn__I_20;
            MR_Word mode_robdd__tfeirn__R_21;
            MR_Word mode_robdd__tfeirn__EA_22;
            MR_Word mode_robdd__tfeirn__EB_23;
            MR_Word mode_robdd__tfeirn__IA_24;
            MR_Word mode_robdd__tfeirn__IB_25;
            MR_Word mode_robdd__tfeirn__RA_26;
            MR_Word mode_robdd__tfeirn__RB_27;
            MR_Word mode_robdd__tfeirn__TAB_28;
            MR_Word mode_robdd__tfeirn__FAB_29;
            MR_Word mode_robdd__tfeirn__TBA_30;
            MR_Word mode_robdd__tfeirn__FBA_31;
            MR_Word mode_robdd__tfeirn__EAB_32;
            MR_Word mode_robdd__tfeirn__EBA_33;
            MR_Word mode_robdd__tfeirn__RA1_34;
            MR_Word mode_robdd__tfeirn__RA2_37;
            MR_Word mode_robdd__tfeirn__EA1_38;
            MR_Word mode_robdd__tfeirn__RA3_39;
            MR_Word mode_robdd__tfeirn__IA1_40;
            MR_Word mode_robdd__tfeirn__RB1_41;
            MR_Word mode_robdd__tfeirn__RB2_42;
            MR_Word mode_robdd__tfeirn__EB1_43;
            MR_Word mode_robdd__tfeirn__RB3_44;
            MR_Word mode_robdd__tfeirn__IB1_45;
            MR_Word mode_robdd__tfeirn__Var_46 = (MR_Integer) 0;
            MR_Word mode_robdd__tfeirn__Var_47;
            MR_Word mode_robdd__tfeirn__Var_48;
            MR_Word mode_robdd__tfeirn__Var_49;
            MR_Word mode_robdd__tfeirn__Var_55;
            MR_Word mode_robdd__tfeirn__Var_61;
            MR_Word mode_robdd__tfeirn__Var_62;
            MR_Word mode_robdd__tfeirn__Var_63;
            MR_Word mode_robdd__tfeirn__Var_69;
            MR_Word mode_robdd__tfeirn__Var_75;
            MR_Word mode_robdd__tfeirn__Var_76;
            MR_Word mode_robdd__tfeirn__conv0_T_17;
            MR_Word mode_robdd__tfeirn__conv1_F_18;
            MR_Word mode_robdd__tfeirn__conv2_TAB_28;
            MR_Word mode_robdd__tfeirn__conv3_FAB_29;
            MR_Word mode_robdd__tfeirn__conv4_TBA_30;
            MR_Word mode_robdd__tfeirn__conv5_FBA_31;
            MR_Box mode_robdd__tfeirn__conv7_RA1_34;
            MR_Box mode_robdd__tfeirn__conv9_RA2_37;
            MR_Box mode_robdd__tfeirn__conv11_RB1_41;
            MR_Box mode_robdd__tfeirn__conv13_RB2_42;

            {
              mode_robdd__tfeirn__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_87_87, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_86_86));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_87_87, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
            }
            {
              mode_robdd__tfeirn__conv0_T_17 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TA0_4, (MR_Word) mode_robdd__tfeirn__TB0_10);
            }
            mode_robdd__tfeirn__T_17 = (MR_Word) mode_robdd__tfeirn__conv0_T_17;
            {
              mode_robdd__tfeirn__conv1_F_18 = mercury__sparse_bitset__intersect_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FA0_5, (MR_Word) mode_robdd__tfeirn__FB0_11);
            }
            mode_robdd__tfeirn__F_18 = (MR_Word) mode_robdd__tfeirn__conv1_F_18;
            {
              mode_robdd__tfeirn__conv2_TAB_28 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TA0_4, (MR_Word) mode_robdd__tfeirn__TB0_10);
            }
            mode_robdd__tfeirn__TAB_28 = (MR_Word) mode_robdd__tfeirn__conv2_TAB_28;
            {
              mode_robdd__tfeirn__conv3_FAB_29 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FA0_5, (MR_Word) mode_robdd__tfeirn__FB0_11);
            }
            mode_robdd__tfeirn__FAB_29 = (MR_Word) mode_robdd__tfeirn__conv3_FAB_29;
            {
              mode_robdd__tfeirn__Var_47 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TAB_28, mode_robdd__tfeirn__EA0_6);
            }
            {
              mode_robdd__tfeirn__EA_22 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FAB_29, mode_robdd__tfeirn__Var_47);
            }
            {
              mode_robdd__tfeirn__conv4_TBA_30 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__TB0_10, (MR_Word) mode_robdd__tfeirn__TA0_4);
            }
            mode_robdd__tfeirn__TBA_30 = (MR_Word) mode_robdd__tfeirn__conv4_TBA_30;
            {
              mode_robdd__tfeirn__conv5_FBA_31 = mercury__sparse_bitset__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_87_87, (MR_Word) mode_robdd__tfeirn__FB0_11, (MR_Word) mode_robdd__tfeirn__FA0_5);
            }
            mode_robdd__tfeirn__FBA_31 = (MR_Word) mode_robdd__tfeirn__conv5_FBA_31;
            {
              mode_robdd__tfeirn__Var_48 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TBA_30, mode_robdd__tfeirn__EB0_12);
            }
            {
              mode_robdd__tfeirn__EB_23 = mode_robdd__equiv_vars__add_equalities_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__FBA_31, mode_robdd__tfeirn__Var_48);
            }
            {
              mode_robdd__tfeirn__E_19 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
            {
              mode_robdd__tfeirn__EAB_32 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
            {
              mode_robdd__tfeirn__IA_24 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EAB_32, mode_robdd__tfeirn__IA0_7);
            }
            {
              mode_robdd__tfeirn__EBA_33 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
            {
              mode_robdd__tfeirn__IB_25 = mode_robdd__implications__add_equalities_to_imp_vars_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EBA_33, mode_robdd__tfeirn__IB0_13);
            }
            {
              mode_robdd__tfeirn__I_20 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
            mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88 = (MR_Word) base_typeclass_info_enum__enum__arity1__term__var__arity1__;
            {
              mode_robdd__tfeirn__TypeClassInfo_for_enum_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 0) = ((MR_Box) (mode_robdd__tfeirn__BaseTypeClassInfo_for_enum_88));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeClassInfo_for_enum_89, 2) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_87_87));
            }
            mode_robdd__tfeirn__TypeCtorInfo_90_90 = (MR_Word) &mercury__robdd__robdd__type_ctor_info_robdd_1;
            {
              mode_robdd__tfeirn__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_91_91, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_90_90));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_91_91, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
            }
            {
              mode_robdd__tfeirn__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_1));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_49, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
            }
            {
              mode_robdd__tfeirn__conv7_RA1_34 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__Var_49, mode_robdd__tfeirn__TAB_28, ((MR_Box) (mode_robdd__tfeirn__RA0_8)));
            }
            mode_robdd__tfeirn__RA1_34 = ((MR_Word) mode_robdd__tfeirn__conv7_RA1_34);
            {
              mode_robdd__tfeirn__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_55, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
            }
            {
              mode_robdd__tfeirn__conv9_RA2_37 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__Var_55, mode_robdd__tfeirn__FAB_29, ((MR_Box) (mode_robdd__tfeirn__RA1_34)));
            }
            mode_robdd__tfeirn__RA2_37 = ((MR_Word) mode_robdd__tfeirn__conv9_RA2_37);
            {
              mode_robdd__tfeirn__Var_61 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA_22, mode_robdd__tfeirn__EB_23);
            }
            {
              mode_robdd__tfeirn__EA1_38 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_61, mode_robdd__tfeirn__EA0_6);
            }
            {
              mode_robdd__tfeirn__RA3_39 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EA1_38, mode_robdd__tfeirn__RA2_37);
            }
            {
              mode_robdd__tfeirn__Var_62 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA_24, mode_robdd__tfeirn__IB_25);
            }
            {
              mode_robdd__tfeirn__IA1_40 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_62, mode_robdd__tfeirn__IA0_7);
            }
            {
              mode_robdd__tfeirn__RA_26 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IA1_40, mode_robdd__tfeirn__RA3_39);
            }
            {
              mode_robdd__tfeirn__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_3));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_63, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
            }
            {
              mode_robdd__tfeirn__conv11_RB1_41 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__Var_63, mode_robdd__tfeirn__TBA_30, ((MR_Box) (mode_robdd__tfeirn__RB0_14)));
            }
            mode_robdd__tfeirn__RB1_41 = ((MR_Word) mode_robdd__tfeirn__conv11_RB1_41);
            {
              mode_robdd__tfeirn__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 0) = ((MR_Box) (&mode_robdd__tfeirn_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 1) = ((MR_Box) (mode_robdd__tfeirn__f_plus_2_f_0_4));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 3) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_85));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_69, 4) = ((MR_Box) (mode_robdd__tfeirn__E_19));
            }
            {
              mode_robdd__tfeirn__conv13_RB2_42 = mercury__sparse_bitset__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_102_111_108_100_108_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__TypeInfo_91_91, mode_robdd__tfeirn__TypeClassInfo_for_enum_89, (MR_Word) mode_robdd__tfeirn__Var_69, mode_robdd__tfeirn__FBA_31, ((MR_Box) (mode_robdd__tfeirn__RB1_41)));
            }
            mode_robdd__tfeirn__RB2_42 = ((MR_Word) mode_robdd__tfeirn__conv13_RB2_42);
            {
              mode_robdd__tfeirn__Var_75 = mode_robdd__equiv_vars__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB_23, mode_robdd__tfeirn__EA_22);
            }
            {
              mode_robdd__tfeirn__EB1_43 = mode_robdd__equiv_vars__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_75, mode_robdd__tfeirn__EB0_12);
            }
            {
              mode_robdd__tfeirn__RB3_44 = mercury__robdd__add_equivalences_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__EB1_43, mode_robdd__tfeirn__RB2_42);
            }
            {
              mode_robdd__tfeirn__Var_76 = mode_robdd__implications__difference_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB_25, mode_robdd__tfeirn__IA_24);
            }
            {
              mode_robdd__tfeirn__IB1_45 = mode_robdd__implications__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__Var_76, mode_robdd__tfeirn__IB0_13);
            }
            {
              mode_robdd__tfeirn__RB_27 = mercury__robdd__add_implications_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__IB1_45, mode_robdd__tfeirn__RB3_44);
            }
            {
              mode_robdd__tfeirn__R_21 = mercury__robdd__f_plus_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_85, mode_robdd__tfeirn__RA_26, mode_robdd__tfeirn__RB_27);
            }
            {
              mode_robdd__tfeirn__X_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 0) = ((MR_Box) (mode_robdd__tfeirn__T_17));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 1) = ((MR_Box) (mode_robdd__tfeirn__F_18));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 2) = ((MR_Box) (mode_robdd__tfeirn__E_19));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 3) = ((MR_Box) (mode_robdd__tfeirn__I_20));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 4) = ((MR_Box) (mode_robdd__tfeirn__R_21));
              MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__X_16, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_46));
            }
          }
      }
    return mode_robdd__tfeirn__X_16;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__f_times_2_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_44,
  MR_Word mode_robdd__tfeirn__HeadVar__1_1,
  MR_Word mode_robdd__tfeirn__HeadVar__2_2)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__3_3;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_46_46;
    MR_Word mode_robdd__tfeirn__TA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__TB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mode_robdd__tfeirn__FB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mode_robdd__tfeirn__EB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word mode_robdd__tfeirn__IB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 3)));
    MR_Word mode_robdd__tfeirn__RB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 4)));
    MR_Word mode_robdd__tfeirn__TA1_16;
    MR_Word mode_robdd__tfeirn__TB1_17;
    MR_Word mode_robdd__tfeirn__FA1_18;
    MR_Word mode_robdd__tfeirn__FB1_19;
    MR_Word mode_robdd__tfeirn__EA1_20;
    MR_Word mode_robdd__tfeirn__EB1_21;
    MR_Word mode_robdd__tfeirn__IA1_22;
    MR_Word mode_robdd__tfeirn__IB1_23;
    MR_Word mode_robdd__tfeirn__RA1_24;
    MR_Word mode_robdd__tfeirn__RB1_25;
    MR_Word mode_robdd__tfeirn__TU_26;
    MR_Word mode_robdd__tfeirn__FU_27;
    MR_Word mode_robdd__tfeirn__EU_28;
    MR_Word mode_robdd__tfeirn__IU_29;
    MR_Word mode_robdd__tfeirn__Var_32;
    MR_Word mode_robdd__tfeirn__Var_33;
    MR_Word mode_robdd__tfeirn__Var_34;
    MR_Word mode_robdd__tfeirn__Var_35;
    MR_Word mode_robdd__tfeirn__Var_36;
    MR_Word mode_robdd__tfeirn__Var_37;
    MR_Word mode_robdd__tfeirn__Var_38;
    MR_Word mode_robdd__tfeirn__Var_39;
    MR_Word mode_robdd__tfeirn__Var_40;
    MR_Word mode_robdd__tfeirn__Var_41;
    MR_Word mode_robdd__tfeirn__Var_42;
    MR_Word mode_robdd__tfeirn__Var_43;
    MR_Word mode_robdd__tfeirn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__2_2, (MR_Integer) 5)));
    MR_Word mode_robdd__tfeirn__conv0_TU_26;
    MR_Word mode_robdd__tfeirn__conv1_FU_27;
    MR_Word mode_robdd__tfeirn__Var_30;
    MR_Word mode_robdd__tfeirn__Var_31;
    MR_Word mode_robdd__tfeirn__conv2_Var_32;
    MR_Word mode_robdd__tfeirn__conv3_Var_33;

    {
      mode_robdd__tfeirn__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_46_46, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_45_45));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_46_46, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_44));
    }
    mode_robdd__tfeirn__Var_37 = (MR_Integer) 0;
    {
      mode_robdd__tfeirn__conv0_TU_26 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__TA_4, (MR_Word) mode_robdd__tfeirn__TB_10);
    }
    mode_robdd__tfeirn__TU_26 = (MR_Word) mode_robdd__tfeirn__conv0_TU_26;
    {
      mode_robdd__tfeirn__conv1_FU_27 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__FA_5, (MR_Word) mode_robdd__tfeirn__FB_11);
    }
    mode_robdd__tfeirn__FU_27 = (MR_Word) mode_robdd__tfeirn__conv1_FU_27;
    {
      mode_robdd__tfeirn__EU_28 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA_6, mode_robdd__tfeirn__EB_12);
    }
    {
      mode_robdd__tfeirn__IU_29 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA_7, mode_robdd__tfeirn__IB_13);
    }
    mode_robdd__tfeirn__Var_40 = (MR_Integer) 0;
    {
      mode_robdd__tfeirn__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 4) = ((MR_Box) (mode_robdd__tfeirn__RA_8));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_39, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_40));
    }
    {
      mode_robdd__tfeirn__Var_38 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__Var_39);
    }
    mode_robdd__tfeirn__TA1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 0)));
    mode_robdd__tfeirn__FA1_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 1)));
    mode_robdd__tfeirn__EA1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 2)));
    mode_robdd__tfeirn__IA1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 3)));
    mode_robdd__tfeirn__RA1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_38, (MR_Integer) 5)));
    mode_robdd__tfeirn__Var_43 = (MR_Integer) 0;
    {
      mode_robdd__tfeirn__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 0) = ((MR_Box) (mode_robdd__tfeirn__TU_26));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 1) = ((MR_Box) (mode_robdd__tfeirn__FU_27));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 2) = ((MR_Box) (mode_robdd__tfeirn__EU_28));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 3) = ((MR_Box) (mode_robdd__tfeirn__IU_29));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 4) = ((MR_Box) (mode_robdd__tfeirn__RB_14));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_42, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_43));
    }
    {
      mode_robdd__tfeirn__Var_41 = mode_robdd__tfeirn__normalise_1_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__Var_42);
    }
    mode_robdd__tfeirn__TB1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 0)));
    mode_robdd__tfeirn__FB1_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 1)));
    mode_robdd__tfeirn__EB1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 2)));
    mode_robdd__tfeirn__IB1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 3)));
    mode_robdd__tfeirn__RB1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 4)));
    mode_robdd__tfeirn__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__Var_41, (MR_Integer) 5)));
    {
      mode_robdd__tfeirn__conv2_Var_32 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__TA1_16, (MR_Word) mode_robdd__tfeirn__TB1_17);
    }
    mode_robdd__tfeirn__Var_32 = (MR_Word) mode_robdd__tfeirn__conv2_Var_32;
    {
      mode_robdd__tfeirn__conv3_Var_33 = mercury__sparse_bitset__union_2_f_0(mode_robdd__tfeirn__TypeInfo_46_46, (MR_Word) mode_robdd__tfeirn__FA1_18, (MR_Word) mode_robdd__tfeirn__FB1_19);
    }
    mode_robdd__tfeirn__Var_33 = (MR_Word) mode_robdd__tfeirn__conv3_Var_33;
    {
      mode_robdd__tfeirn__Var_34 = mode_robdd__equiv_vars__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__EA1_20, mode_robdd__tfeirn__EB1_21);
    }
    {
      mode_robdd__tfeirn__Var_35 = mode_robdd__implications__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__IA1_22, mode_robdd__tfeirn__IB1_23);
    }
    {
      mode_robdd__tfeirn__Var_36 = mercury__robdd__f_times_2_f_0(mode_robdd__tfeirn__TypeInfo_for_T_44, mode_robdd__tfeirn__RA1_24, mode_robdd__tfeirn__RB1_25);
    }
    {
      mode_robdd__tfeirn__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_32));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_33));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_34));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_35));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_36));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__3_3, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_37));
    }
    return mode_robdd__tfeirn__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__zero_0_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10;
    MR_Word mode_robdd__tfeirn__Var_2;
    MR_Word mode_robdd__tfeirn__Var_3;
    MR_Word mode_robdd__tfeirn__Var_4;
    MR_Word mode_robdd__tfeirn__Var_5;
    MR_Word mode_robdd__tfeirn__Var_6;
    MR_Word mode_robdd__tfeirn__Var_7;
    MR_Word mode_robdd__tfeirn__conv0_Var_2;
    MR_Word mode_robdd__tfeirn__conv1_Var_3;

    {
      mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_8));
    }
    {
      mode_robdd__tfeirn__conv0_Var_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
    mode_robdd__tfeirn__Var_2 = (MR_Word) mode_robdd__tfeirn__conv0_Var_2;
    {
      mode_robdd__tfeirn__conv1_Var_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
    mode_robdd__tfeirn__Var_3 = (MR_Word) mode_robdd__tfeirn__conv1_Var_3;
    {
      mode_robdd__tfeirn__Var_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    {
      mode_robdd__tfeirn__Var_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    {
      mode_robdd__tfeirn__Var_6 = mercury__robdd__zero_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    mode_robdd__tfeirn__Var_7 = (MR_Integer) 1;
    {
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_2));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_3));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_4));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_7));
    }
    return mode_robdd__tfeirn__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mode_robdd__tfeirn__one_0_f_0(
  MR_Word mode_robdd__tfeirn__TypeInfo_for_T_8)
{
  {
    MR_bool mode_robdd__tfeirn__succeeded;
    MR_Word mode_robdd__tfeirn__HeadVar__1_1;
    MR_Word mode_robdd__tfeirn__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mode_robdd__tfeirn__TypeInfo_10_10;
    MR_Word mode_robdd__tfeirn__Var_2;
    MR_Word mode_robdd__tfeirn__Var_3;
    MR_Word mode_robdd__tfeirn__Var_4;
    MR_Word mode_robdd__tfeirn__Var_5;
    MR_Word mode_robdd__tfeirn__Var_6;
    MR_Word mode_robdd__tfeirn__Var_7;
    MR_Word mode_robdd__tfeirn__conv0_Var_2;
    MR_Word mode_robdd__tfeirn__conv1_Var_3;

    {
      mode_robdd__tfeirn__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 0) = ((MR_Box) (mode_robdd__tfeirn__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__TypeInfo_10_10, 1) = ((MR_Box) (mode_robdd__tfeirn__TypeInfo_for_T_8));
    }
    {
      mode_robdd__tfeirn__conv0_Var_2 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
    mode_robdd__tfeirn__Var_2 = (MR_Word) mode_robdd__tfeirn__conv0_Var_2;
    {
      mode_robdd__tfeirn__conv1_Var_3 = mercury__sparse_bitset__init_0_f_0(mode_robdd__tfeirn__TypeInfo_10_10);
    }
    mode_robdd__tfeirn__Var_3 = (MR_Word) mode_robdd__tfeirn__conv1_Var_3;
    {
      mode_robdd__tfeirn__Var_4 = mode_robdd__equiv_vars__init_equiv_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    {
      mode_robdd__tfeirn__Var_5 = mode_robdd__implications__init_imp_vars_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    {
      mode_robdd__tfeirn__Var_6 = mercury__robdd__one_0_f_0(mode_robdd__tfeirn__TypeInfo_for_T_8);
    }
    mode_robdd__tfeirn__Var_7 = (MR_Integer) 1;
    {
      mode_robdd__tfeirn__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 0) = ((MR_Box) (mode_robdd__tfeirn__Var_2));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 1) = ((MR_Box) (mode_robdd__tfeirn__Var_3));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 2) = ((MR_Box) (mode_robdd__tfeirn__Var_4));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 3) = ((MR_Box) (mode_robdd__tfeirn__Var_5));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 4) = ((MR_Box) (mode_robdd__tfeirn__Var_6));
      MR_hl_field(MR_mktag(0), mode_robdd__tfeirn__HeadVar__1_1, 5) = ((MR_Box) (mode_robdd__tfeirn__Var_7));
    }
    return mode_robdd__tfeirn__HeadVar__1_1;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mode_robdd__tfeirn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mode_robdd.tfeirn. */
