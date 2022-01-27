/*
** Automatically generated from `call_gen.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module ll_backend.call_gen. */
/* :- implementation. */

/*
INIT mercury__ll_backend__call_gen__init
ENDINIT
*/

#include "ll_backend.call_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
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




#line 160 "ll_backend.call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0;

#line 166 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1;

#line 169 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2];

#line 172 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2];

#line 175 "ll_backend.call_gen.c"
static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2];

#line 178 "ll_backend.call_gen.c"
static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
#line 181 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 183 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2);

#line 186 "ll_backend.call_gen.c"
static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
#line 189 "ll_backend.call_gen.c"
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
#line 191 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 193 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_3);

#line 623 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_9,
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_10,
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__ReturnInstMap_12,
#line 623 "call_gen.m"
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_13,
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_14,
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_20,
#line 623 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_21);

#line 214 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_14,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_15,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_16,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_18,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_19,
#line 214 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_20,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_68,
#line 214 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_69,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_70,
#line 214 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_71);

#line 825 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
#line 825 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 825 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 825 "call_gen.m"
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
#line 825 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__4_4,
#line 825 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__5_5);

#line 754 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_simple_test_6_p_0(
#line 754 "call_gen.m"
  MR_Word ll_backend__call_gen__TestExpr_7,
#line 754 "call_gen.m"
  MR_Word * ll_backend__call_gen__Rval_8,
#line 754 "call_gen.m"
  MR_Word * ll_backend__call_gen__ArgCode_9,
#line 754 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_10,
#line 754 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_22,
#line 754 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_23);

#line 744 "call_gen.m"
static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
#line 744 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1);

#line 661 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
#line 661 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 661 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 661 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 661 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_4,
#line 661 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_5);

#line 641 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
#line 641 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 641 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 641 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
#line 641 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4);

#line 612 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
#line 612 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_6,
#line 612 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 612 "call_gen.m"
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
#line 612 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_13,
#line 612 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_14);

#line 565 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
#line 565 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_5,
#line 565 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_6,
#line 565 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 565 "call_gen.m"
  MR_String * ll_backend__call_gen__Msg_8);

#line 537 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
#line 537 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 537 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_8,
#line 537 "call_gen.m"
  MR_Word * ll_backend__call_gen__FailHandlingCode_9,
#line 537 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
#line 537 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
#line 537 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);

#line 512 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__prepare_for_call_8_p_0(
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_9,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_10,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__CallModel_11,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__TraceCode_12,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_20);

#line 456 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__HoCallVariant_2,
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsR_3,
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsF_4,
#line 456 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_5,
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
#line 456 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7);

#line 377 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
#line 377 "call_gen.m"
  MR_Integer ll_backend__call_gen__Reg_4,
#line 377 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_5,
#line 377 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6);

#line 372 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
#line 372 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_3,
#line 372 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4);

#line 335 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_7_p_0(
#line 335 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 335 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
#line 335 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 335 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
#line 335 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__5_5,
#line 335 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
#line 335 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7);

#line 705 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0_1(
#line 705 "call_gen.m"
  MR_Box ll_backend__call_gen__closure_arg,
#line 705 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 705 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 705 "call_gen.m"
  MR_Box * ll_backend__call_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[9][2];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[2][1];




static /* final */ const MR_Box ll_backend__call_gen_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__call_gen_scalar_common_1[5])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__call_gen_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__call_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__call_gen__generate_builtin_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
  },
};

static /* final */ const MR_Box ll_backend__call_gen_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[5])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 537 "ll_backend.call_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__call_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 545 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0 = {
  (MR_String) "ho_call_known_num",
  (MR_Integer) 0
};

#line 551 "ll_backend.call_gen.c"
static const MR_EnumFunctorDesc ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1 = {
  (MR_String) "ho_call_unknown",
  (MR_Integer) 1
};

#line 557 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

#line 563 "ll_backend.call_gen.c"
static const MR_EnumFunctorDescPtr ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0[2] = {
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_0,
  &ll_backend__call_gen__ll_backend__call_gen__enum_functor_desc_known_call_variant_0_1
};

#line 569 "ll_backend.call_gen.c"
static const MR_Integer ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 575 "ll_backend.call_gen.c"
const MR_TypeCtorInfo_Struct ll_backend__call_gen__ll_backend__call_gen__type_ctor_info_known_call_variant_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__call_gen____Unify____known_call_variant_0_0_10001)),
  ((MR_Box) (ll_backend__call_gen____Compare____known_call_variant_0_0_10001)),
  (MR_String) "ll_backend.call_gen",
  (MR_String) "known_call_variant",
  {     ll_backend__call_gen__ll_backend__call_gen__enum_name_ordered_known_call_variant_0 },
  {     ll_backend__call_gen__ll_backend__call_gen__enum_value_ordered_known_call_variant_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__call_gen__ll_backend__call_gen__functor_number_map_known_call_variant_0
};

#line 592 "ll_backend.call_gen.c"
static MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0_10001(
#line 595 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 597 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2)
#line 599 "ll_backend.call_gen.c"
{
#line 601 "ll_backend.call_gen.c"
  {
#line 603 "ll_backend.call_gen.c"
    MR_bool ll_backend__call_gen__succeeded;

#line 606 "ll_backend.call_gen.c"
    {
#line 608 "ll_backend.call_gen.c"
      ll_backend__call_gen__succeeded = ll_backend__call_gen____Unify____known_call_variant_0_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2));
    }
#line 611 "ll_backend.call_gen.c"
    return ll_backend__call_gen__succeeded;
#line 613 "ll_backend.call_gen.c"
  }
#line 615 "ll_backend.call_gen.c"
}

#line 618 "ll_backend.call_gen.c"
static void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0_10001(
#line 621 "ll_backend.call_gen.c"
  MR_Box * ll_backend__call_gen__wrapper_arg_1,
#line 623 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 625 "ll_backend.call_gen.c"
  MR_Box ll_backend__call_gen__wrapper_arg_3)
#line 627 "ll_backend.call_gen.c"
{
#line 629 "ll_backend.call_gen.c"
  {
#line 631 "ll_backend.call_gen.c"
    MR_Word ll_backend__call_gen__conv0_HeadVar__1_1;

#line 634 "ll_backend.call_gen.c"
    {
#line 636 "ll_backend.call_gen.c"
      ll_backend__call_gen____Compare____known_call_variant_0_0(&ll_backend__call_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__call_gen__wrapper_arg_2), ((MR_Word) ll_backend__call_gen__wrapper_arg_3));
    }
#line 639 "ll_backend.call_gen.c"
    *ll_backend__call_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__1_1));
#line 641 "ll_backend.call_gen.c"
  }
#line 643 "ll_backend.call_gen.c"
}

#line 623 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_9,
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_10,
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__ReturnInstMap_12,
#line 623 "call_gen.m"
  MR_Word * ll_backend__call_gen__ReturnLiveLvalues_13,
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_14,
#line 623 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_20,
#line 623 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_21)
#line 623 "call_gen.m"
{
#line 628 "call_gen.m"
  {
#line 628 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 628 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_16;
#line 628 "call_gen.m"
    MR_Word ll_backend__call_gen__OkToDeleteAny_17;
#line 628 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_18;
#line 628 "call_gen.m"
    MR_Word ll_backend__call_gen__OutputArgLocs_19;
#line 628 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_22_22;

#line 629 "call_gen.m"
    {
#line 629 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_10);
    }
#line 630 "call_gen.m"
    {
#line 630 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(ll_backend__call_gen__InstMapDelta_16);
    }
#line 630 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 631 "call_gen.m"
      ll_backend__call_gen__OkToDeleteAny_17 = (MR_Integer) 0;
#line 630 "call_gen.m"
    else
#line 633 "call_gen.m"
      ll_backend__call_gen__OkToDeleteAny_17 = (MR_Integer) 1;
#line 635 "call_gen.m"
    {
#line 635 "call_gen.m"
      ll_backend__code_loc_dep__clear_all_registers_3_p_0(ll_backend__call_gen__OkToDeleteAny_17, ll_backend__call_gen__STATE_VARIABLE_CLD_0_20, &ll_backend__call_gen__STATE_VARIABLE_CLD_22_22);
    }
#line 636 "call_gen.m"
    {
#line 636 "call_gen.m"
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_22_22, &ll_backend__call_gen__Liveness_18);
    }
#line 637 "call_gen.m"
    {
#line 637 "call_gen.m"
      ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__ArgsInfos_9, ll_backend__call_gen__Liveness_18, &ll_backend__call_gen__OutputArgLocs_19, ll_backend__call_gen__STATE_VARIABLE_CLD_22_22, ll_backend__call_gen__STATE_VARIABLE_CLD_21);
    }
#line 638 "call_gen.m"
    {
#line 638 "call_gen.m"
      ll_backend__code_loc_dep__generate_return_live_lvalues_6_p_0(ll_backend__call_gen__CI_14, *ll_backend__call_gen__STATE_VARIABLE_CLD_21, ll_backend__call_gen__OutputArgLocs_19, ll_backend__call_gen__ReturnInstMap_12, ll_backend__call_gen__OkToDeleteAny_17, ll_backend__call_gen__ReturnLiveLvalues_13);
    }
#line 628 "call_gen.m"
  }
#line 623 "call_gen.m"
}

#line 214 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_14,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_15,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_16,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_18,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_19,
#line 214 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_20,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_68,
#line 214 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_69,
#line 214 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_70,
#line 214 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_71)
#line 214 "call_gen.m"
{
#line 220 "call_gen.m"
  {
#line 220 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_114_114;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_115_115;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_117_117;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_23;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__VarTypes_24;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__Types_25;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgRegTypes_26;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarsR_27;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarsF_28;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__OutVarsR_29;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__OutVarsF_30;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__Globals_31;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__CodeAddr_32;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__SpecifierArgInfos_33;
#line 220 "call_gen.m"
    MR_Integer ll_backend__call_gen__FirstImmInputR_34;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__HoCallVariant_35;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__CodeModel_37;
#line 220 "call_gen.m"
    MR_Integer ll_backend__call_gen__FirstOutputR_38;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarArgInfosR_40;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__InVarArgInfosF_41;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfosR_42;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfosF_43;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgInfos_44;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals0_45;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__SetupCode_46;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__NonVarCode_48;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__ExtraLiveVals_49;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals_50;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__CallModel_51;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceCode_52;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLabel_53;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__Context_54;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__GoalId_55;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMap_56;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_57;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnInstMap_58;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__OutArgsInfos_59;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_60;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_61;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeGoalPath_64;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__CallCode_65;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__AfterReturn_66;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__FailHandlingCode_67;
#line 220 "call_gen.m"
    MR_Integer ll_backend__call_gen__V_72_72;
#line 220 "call_gen.m"
    MR_Integer ll_backend__call_gen__V_73_73;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_82_82;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_83_83;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_84_84;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_85_85;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_86_86;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_88_88;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_89_89;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_90_90;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_91_91;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_92_92;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_93_93;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_94_94;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_95_95;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_96_96;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_97_97;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_99_99;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_100_100;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_101_101;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_102_102;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_104_104;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_105_105;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_106_106;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_111_111;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_112_112;
#line 220 "call_gen.m"
    MR_Word ll_backend__call_gen__V_113_113;
#line 258 "call_gen.m"
    MR_Word ll_backend__call_gen__NonLiveOutputs_47;

#line 221 "call_gen.m"
    {
#line 221 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__ModuleInfo_23);
    }
#line 222 "call_gen.m"
    {
#line 222 "call_gen.m"
      ll_backend__code_info__get_vartypes_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__VarTypes_24);
    }
#line 223 "call_gen.m"
    {
#line 223 "call_gen.m"
      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__call_gen__VarTypes_24, ll_backend__call_gen__Args_15, &ll_backend__call_gen__Types_25);
    }
#line 224 "call_gen.m"
    {
#line 224 "call_gen.m"
      hlds__arg_info__generic_call_arg_reg_types_6_p_0(ll_backend__call_gen__ModuleInfo_23, ll_backend__call_gen__VarTypes_24, ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__MaybeRegTypes_17, &ll_backend__call_gen__ArgRegTypes_26);
    }
#line 226 "call_gen.m"
    {
#line 226 "call_gen.m"
      hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(ll_backend__call_gen__ModuleInfo_23, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__Types_25, ll_backend__call_gen__ArgRegTypes_26, &ll_backend__call_gen__InVarsR_27, &ll_backend__call_gen__InVarsF_28, &ll_backend__call_gen__OutVarsR_29, &ll_backend__call_gen__OutVarsF_30);
    }
#line 228 "call_gen.m"
    {
#line 228 "call_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__call_gen__ModuleInfo_23, &ll_backend__call_gen__Globals_31);
    }
#line 927 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_114_114 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 229 "call_gen.m"
    {
#line 229 "call_gen.m"
      ll_backend__call_gen__V_72_72 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_114_114, ll_backend__call_gen__InVarsR_27);
    }
#line 229 "call_gen.m"
    {
#line 229 "call_gen.m"
      ll_backend__call_gen__V_73_73 = mercury__list__length_1_f_0(ll_backend__call_gen__TypeInfo_114_114, ll_backend__call_gen__InVarsF_28);
    }
#line 229 "call_gen.m"
    {
#line 229 "call_gen.m"
      ll_backend__call_gen__generic_call_info_8_p_0(ll_backend__call_gen__Globals_31, ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__V_72_72, ll_backend__call_gen__V_73_73, &ll_backend__call_gen__CodeAddr_32, &ll_backend__call_gen__SpecifierArgInfos_33, &ll_backend__call_gen__FirstImmInputR_34, &ll_backend__call_gen__HoCallVariant_35);
    }
#line 232 "call_gen.m"
    {
#line 232 "call_gen.m"
      hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__call_gen__Det_18, &ll_backend__call_gen__CodeModel_37);
    }
#line 236 "call_gen.m"
#line 236 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_37) {
#line 236 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 236 "call_gen.m"
      case (MR_Integer) 0:
#line 236 "call_gen.m"
      case (MR_Integer) 2:
#line 240 "call_gen.m"
        ll_backend__call_gen__FirstOutputR_38 = (MR_Integer) 1;
#line 236 "call_gen.m"
        break;
#line 236 "call_gen.m"
      case (MR_Integer) 1:
#line 235 "call_gen.m"
        ll_backend__call_gen__FirstOutputR_38 = (MR_Integer) 2;
#line 236 "call_gen.m"
        break;
#line 236 "call_gen.m"
    }
#line 244 "call_gen.m"
    {
#line 244 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsR_27, (MR_Integer) 0, ll_backend__call_gen__FirstImmInputR_34, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosR_40);
    }
#line 246 "call_gen.m"
    {
#line 246 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__InVarsF_28, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 0, &ll_backend__call_gen__InVarArgInfosF_41);
    }
#line 248 "call_gen.m"
    {
#line 248 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsR_29, (MR_Integer) 0, ll_backend__call_gen__FirstOutputR_38, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosR_42);
    }
#line 250 "call_gen.m"
    {
#line 250 "call_gen.m"
      ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__OutVarsF_30, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, &ll_backend__call_gen__OutArgsInfosF_43);
    }
#line 990 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_115_115 = (MR_Word) &ll_backend__call_gen_scalar_common_2[0];
#line 253 "call_gen.m"
    {
#line 253 "call_gen.m"
      ll_backend__call_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_86_86, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosF_43));
#line 253 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "call_gen.m"
    }
#line 253 "call_gen.m"
    {
#line 253 "call_gen.m"
      ll_backend__call_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_85_85, 0) = ((MR_Box) (ll_backend__call_gen__OutArgsInfosR_42));
#line 253 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_85_85, 1) = ((MR_Box) (ll_backend__call_gen__V_86_86));
#line 253 "call_gen.m"
    }
#line 253 "call_gen.m"
    {
#line 253 "call_gen.m"
      ll_backend__call_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosF_41));
#line 253 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 1) = ((MR_Box) (ll_backend__call_gen__V_85_85));
#line 253 "call_gen.m"
    }
#line 253 "call_gen.m"
    {
#line 253 "call_gen.m"
      ll_backend__call_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_83_83, 0) = ((MR_Box) (ll_backend__call_gen__InVarArgInfosR_40));
#line 253 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_83_83, 1) = ((MR_Box) (ll_backend__call_gen__V_84_84));
#line 253 "call_gen.m"
    }
#line 252 "call_gen.m"
    {
#line 252 "call_gen.m"
      ll_backend__call_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_82_82, 0) = ((MR_Box) (ll_backend__call_gen__SpecifierArgInfos_33));
#line 252 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_82_82, 1) = ((MR_Box) (ll_backend__call_gen__V_83_83));
#line 252 "call_gen.m"
    }
#line 252 "call_gen.m"
    {
#line 252 "call_gen.m"
      ll_backend__call_gen__ArgInfos_44 = mercury__list__condense_1_f_0(ll_backend__call_gen__TypeInfo_115_115, ll_backend__call_gen__V_82_82);
    }
#line 257 "call_gen.m"
    {
#line 257 "call_gen.m"
      ll_backend__code_loc_dep__setup_call_7_p_0(ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__ArgInfos_44, &ll_backend__call_gen__LiveVals0_45, &ll_backend__call_gen__SetupCode_46, ll_backend__call_gen__STATE_VARIABLE_CI_0_68, ll_backend__call_gen__STATE_VARIABLE_CLD_0_70, &ll_backend__call_gen__STATE_VARIABLE_CLD_88_88);
    }
#line 258 "call_gen.m"
    {
#line 258 "call_gen.m"
      ll_backend__call_gen__kill_dead_input_vars_5_p_0(ll_backend__call_gen__ArgInfos_44, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__NonLiveOutputs_47, ll_backend__call_gen__STATE_VARIABLE_CLD_88_88, &ll_backend__call_gen__STATE_VARIABLE_CLD_89_89);
    }
#line 263 "call_gen.m"
    {
#line 263 "call_gen.m"
      ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__HoCallVariant_35, ll_backend__call_gen__InVarsR_27, ll_backend__call_gen__InVarsF_28, &ll_backend__call_gen__NonVarCode_48, ll_backend__call_gen__STATE_VARIABLE_CLD_89_89, &ll_backend__call_gen__STATE_VARIABLE_CLD_90_90);
    }
#line 266 "call_gen.m"
    {
#line 266 "call_gen.m"
      ll_backend__call_gen__extra_livevals_2_p_0(ll_backend__call_gen__FirstImmInputR_34, &ll_backend__call_gen__ExtraLiveVals_49);
    }
#line 267 "call_gen.m"
    {
#line 267 "call_gen.m"
      mercury__set__insert_list_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__call_gen__ExtraLiveVals_49, ll_backend__call_gen__LiveVals0_45, &ll_backend__call_gen__LiveVals_50);
    }
#line 269 "call_gen.m"
    {
#line 269 "call_gen.m"
      ll_backend__call_gen__prepare_for_call_8_p_0(ll_backend__call_gen__CodeModel_37, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__CallModel_51, &ll_backend__call_gen__TraceCode_52, ll_backend__call_gen__STATE_VARIABLE_CI_0_68, &ll_backend__call_gen__STATE_VARIABLE_CI_91_91, ll_backend__call_gen__STATE_VARIABLE_CLD_90_90, &ll_backend__call_gen__STATE_VARIABLE_CLD_92_92);
    }
#line 272 "call_gen.m"
    {
#line 272 "call_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_53, ll_backend__call_gen__STATE_VARIABLE_CI_91_91, &ll_backend__call_gen__STATE_VARIABLE_CI_93_93);
    }
#line 273 "call_gen.m"
    {
#line 273 "call_gen.m"
      ll_backend__call_gen__Context_54 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
#line 274 "call_gen.m"
    {
#line 274 "call_gen.m"
      ll_backend__call_gen__GoalId_55 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
#line 278 "call_gen.m"
    {
#line 278 "call_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__call_gen__InstMap_56);
    }
#line 279 "call_gen.m"
    {
#line 279 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_57 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_19);
    }
#line 280 "call_gen.m"
    {
#line 280 "call_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_56, ll_backend__call_gen__InstMapDelta_57, &ll_backend__call_gen__ReturnInstMap_58);
    }
#line 283 "call_gen.m"
    {
#line 283 "call_gen.m"
      ll_backend__call_gen__OutArgsInfos_59 = mercury__list__f_43_43_2_f_0(ll_backend__call_gen__TypeInfo_115_115, ll_backend__call_gen__OutArgsInfosR_42, ll_backend__call_gen__OutArgsInfosF_43);
    }
#line 284 "call_gen.m"
    {
#line 284 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(ll_backend__call_gen__OutArgsInfos_59, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__ReturnInstMap_58, &ll_backend__call_gen__ReturnLiveLvalues_60, ll_backend__call_gen__STATE_VARIABLE_CI_93_93, ll_backend__call_gen__STATE_VARIABLE_CLD_92_92, &ll_backend__call_gen__STATE_VARIABLE_CLD_94_94);
    }
#line 287 "call_gen.m"
    {
#line 287 "call_gen.m"
      ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_93_93, &ll_backend__call_gen__MaybeContainingGoalMap_61);
    }
#line 292 "call_gen.m"
    if ((ll_backend__call_gen__MaybeContainingGoalMap_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "call_gen.m"
      ll_backend__call_gen__MaybeGoalPath_64 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 292 "call_gen.m"
    else
#line 289 "call_gen.m"
      {
#line 289 "call_gen.m"
        MR_Word ll_backend__call_gen__ContainingGoalMap_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_61, (MR_Integer) 0)));
#line 289 "call_gen.m"
        MR_Word ll_backend__call_gen__GoalPath_63;

#line 290 "call_gen.m"
        {
#line 290 "call_gen.m"
          ll_backend__call_gen__GoalPath_63 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_62, ll_backend__call_gen__GoalId_55);
        }
#line 291 "call_gen.m"
        {
#line 291 "call_gen.m"
          ll_backend__call_gen__MaybeGoalPath_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_64, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_63));
#line 291 "call_gen.m"
        }
#line 289 "call_gen.m"
      }
#line 1150 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_117_117 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 297 "call_gen.m"
    {
#line 297 "call_gen.m"
      ll_backend__call_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 297 "call_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_97_97, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_50));
#line 297 "call_gen.m"
    }
#line 297 "call_gen.m"
    {
#line 297 "call_gen.m"
      ll_backend__call_gen__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_96_96, 0) = ((MR_Box) (ll_backend__call_gen__V_97_97));
#line 297 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_96_96, 1) = ((MR_Box) ((MR_String) ""));
#line 297 "call_gen.m"
    }
#line 298 "call_gen.m"
    {
#line 298 "call_gen.m"
      ll_backend__call_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_102_102, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_53));
#line 298 "call_gen.m"
    }
#line 298 "call_gen.m"
    {
#line 298 "call_gen.m"
      ll_backend__call_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 1) = ((MR_Box) (ll_backend__call_gen__CodeAddr_32));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 2) = ((MR_Box) (ll_backend__call_gen__V_102_102));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_60));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 4) = ((MR_Box) (ll_backend__call_gen__Context_54));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_64));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_101_101, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_51));
#line 298 "call_gen.m"
    }
#line 298 "call_gen.m"
    {
#line 298 "call_gen.m"
      ll_backend__call_gen__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_100_100, 0) = ((MR_Box) (ll_backend__call_gen__V_101_101));
#line 298 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_100_100, 1) = ((MR_Box) ((MR_String) "Setup and call"));
#line 298 "call_gen.m"
    }
#line 300 "call_gen.m"
    {
#line 300 "call_gen.m"
      ll_backend__call_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 300 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_106_106, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_53));
#line 300 "call_gen.m"
    }
#line 300 "call_gen.m"
    {
#line 300 "call_gen.m"
      ll_backend__call_gen__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_105_105, 0) = ((MR_Box) (ll_backend__call_gen__V_106_106));
#line 300 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_105_105, 1) = ((MR_Box) ((MR_String) "Continuation label"));
#line 300 "call_gen.m"
    }
#line 301 "call_gen.m"
    {
#line 301 "call_gen.m"
      ll_backend__call_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_104_104, 0) = ((MR_Box) (ll_backend__call_gen__V_105_105));
#line 301 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "call_gen.m"
    }
#line 299 "call_gen.m"
    {
#line 299 "call_gen.m"
      ll_backend__call_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_99_99, 0) = ((MR_Box) (ll_backend__call_gen__V_100_100));
#line 299 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_99_99, 1) = ((MR_Box) (ll_backend__call_gen__V_104_104));
#line 299 "call_gen.m"
    }
#line 297 "call_gen.m"
    {
#line 297 "call_gen.m"
      ll_backend__call_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_95_95, 0) = ((MR_Box) (ll_backend__call_gen__V_96_96));
#line 297 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_95_95, 1) = ((MR_Box) (ll_backend__call_gen__V_99_99));
#line 297 "call_gen.m"
    }
#line 296 "call_gen.m"
    {
#line 296 "call_gen.m"
      ll_backend__call_gen__CallCode_65 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__V_95_95);
    }
#line 304 "call_gen.m"
    {
#line 304 "call_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_94_94, &ll_backend__call_gen__AfterReturn_66);
    }
#line 305 "call_gen.m"
    {
#line 305 "call_gen.m"
      ll_backend__call_gen__handle_call_failure_6_p_0(ll_backend__call_gen__CodeModel_37, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__FailHandlingCode_67, ll_backend__call_gen__STATE_VARIABLE_CI_93_93, ll_backend__call_gen__STATE_VARIABLE_CI_69, ll_backend__call_gen__STATE_VARIABLE_CLD_94_94);
    }
#line 306 "call_gen.m"
    {
#line 306 "call_gen.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__call_gen__AfterReturn_66, *ll_backend__call_gen__STATE_VARIABLE_CI_69, ll_backend__call_gen__STATE_VARIABLE_CLD_71);
    }
#line 308 "call_gen.m"
    {
#line 308 "call_gen.m"
      ll_backend__call_gen__V_113_113 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__CallCode_65, ll_backend__call_gen__FailHandlingCode_67);
    }
#line 308 "call_gen.m"
    {
#line 308 "call_gen.m"
      ll_backend__call_gen__V_112_112 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__TraceCode_52, ll_backend__call_gen__V_113_113);
    }
#line 308 "call_gen.m"
    {
#line 308 "call_gen.m"
      ll_backend__call_gen__V_111_111 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__NonVarCode_48, ll_backend__call_gen__V_112_112);
    }
#line 308 "call_gen.m"
    {
#line 308 "call_gen.m"
      *ll_backend__call_gen__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_117_117, ll_backend__call_gen__SetupCode_46, ll_backend__call_gen__V_111_111);
    }
#line 220 "call_gen.m"
  }
#line 214 "call_gen.m"
}

#line 41 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_14,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_15,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_16,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_18,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_19,
#line 41 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_20,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_39,
#line 41 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_40,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_41,
#line 41 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_42)
#line 41 "call_gen.m"
{
#line 186 "call_gen.m"
  {
#line 186 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 186 "call_gen.m"
#line 186 "call_gen.m"
    switch (MR_tag((MR_Word) ll_backend__call_gen__GenericCall_14)) {
#line 186 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 186 "call_gen.m"
      case (MR_Integer) 0:
#line 186 "call_gen.m"
      case (MR_Integer) 1:
#line 187 "call_gen.m"
        {
#line 187 "call_gen.m"
          ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_97_105_110_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__MaybeRegTypes_17, ll_backend__call_gen__Det_18, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
        }
#line 186 "call_gen.m"
        break;
#line 186 "call_gen.m"
      case (MR_Integer) 2:
#line 190 "call_gen.m"
        {
#line 190 "call_gen.m"
          MR_String ll_backend__call_gen__EventName_31 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__GenericCall_14, (MR_Integer) 0)));
#line 190 "call_gen.m"
          MR_Word ll_backend__call_gen__ModuleInfo_73;
#line 190 "call_gen.m"
          MR_Word ll_backend__call_gen__EventSet_74;
#line 190 "call_gen.m"
          MR_Word ll_backend__call_gen__EventSpecMap_75;
#line 320 "call_gen.m"
          MR_String ll_backend__call_gen__V_89_89;
#line 321 "call_gen.m"
          MR_Word ll_backend__call_gen__Attributes_76;
#line 321 "call_gen.m"
          MR_Integer ll_backend__call_gen__EventNumber_77;

#line 318 "call_gen.m"
          {
#line 318 "call_gen.m"
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ModuleInfo_73);
          }
#line 319 "call_gen.m"
          {
#line 319 "call_gen.m"
            hlds__hlds_module__module_info_get_event_set_2_p_0(ll_backend__call_gen__ModuleInfo_73, &ll_backend__call_gen__EventSet_74);
          }
#line 320 "call_gen.m"
          ll_backend__call_gen__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_74, (MR_Integer) 0)));
#line 320 "call_gen.m"
          ll_backend__call_gen__EventSpecMap_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__EventSet_74, (MR_Integer) 1)));
#line 322 "call_gen.m"
          {
#line 322 "call_gen.m"
            ll_backend__call_gen__succeeded = parse_tree__prog_event__event_attributes_3_p_0(ll_backend__call_gen__EventSpecMap_75, ll_backend__call_gen__EventName_31, &ll_backend__call_gen__Attributes_76);
          }
#line 322 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 323 "call_gen.m"
            {
#line 323 "call_gen.m"
              ll_backend__call_gen__succeeded = parse_tree__prog_event__event_number_3_p_0(ll_backend__call_gen__EventSpecMap_75, ll_backend__call_gen__EventName_31, &ll_backend__call_gen__EventNumber_77);
            }
#line 321 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 326 "call_gen.m"
            {
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeCtorInfo_36_90;
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__MaybeUserAttributes_78;
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__AttrCodes_79;
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__UserEventInfo_80;
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__EventCode_81;
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_28_82;
#line 326 "call_gen.m"
              MR_Word ll_backend__call_gen__V_85_85;

#line 325 "call_gen.m"
              {
#line 325 "call_gen.m"
                ll_backend__call_gen__generate_event_attributes_7_p_0(ll_backend__call_gen__Attributes_76, ll_backend__call_gen__Args_15, &ll_backend__call_gen__MaybeUserAttributes_78, &ll_backend__call_gen__AttrCodes_79, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, &ll_backend__call_gen__STATE_VARIABLE_CLD_28_82);
              }
#line 327 "call_gen.m"
              {
#line 327 "call_gen.m"
                ll_backend__call_gen__UserEventInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 327 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_80, 0) = ((MR_Box) (ll_backend__call_gen__EventNumber_77));
#line 327 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserEventInfo_80, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttributes_78));
#line 327 "call_gen.m"
              }
#line 328 "call_gen.m"
              {
#line 328 "call_gen.m"
                ll_backend__trace_gen__generate_user_event_code_7_p_0(ll_backend__call_gen__UserEventInfo_80, ll_backend__call_gen__GoalInfo_19, &ll_backend__call_gen__EventCode_81, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_28_82, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
              }
#line 1435 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeCtorInfo_36_90 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 330 "call_gen.m"
              {
#line 330 "call_gen.m"
                ll_backend__call_gen__V_85_85 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__call_gen__TypeCtorInfo_36_90, ll_backend__call_gen__AttrCodes_79);
              }
#line 330 "call_gen.m"
              {
#line 330 "call_gen.m"
                *ll_backend__call_gen__Code_20 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_36_90, ll_backend__call_gen__V_85_85, ll_backend__call_gen__EventCode_81);
              }
#line 326 "call_gen.m"
            }
#line 321 "call_gen.m"
          else
#line 332 "call_gen.m"
            {
#line 332 "call_gen.m"
              {
#line 332 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_call\'/8", (MR_String) "bad event name");
#line 332 "call_gen.m"
                return;
              }
#line 332 "call_gen.m"
            }
#line 190 "call_gen.m"
        }
#line 186 "call_gen.m"
        break;
#line 186 "call_gen.m"
      case (MR_Integer) 3:
#line 193 "call_gen.m"
        {
#line 194 "call_gen.m"
          MR_Word ll_backend__call_gen__InputArg_33;
#line 194 "call_gen.m"
          MR_Word ll_backend__call_gen__OutputArg_34;
#line 194 "call_gen.m"
          MR_Word ll_backend__call_gen__V_43_43;
#line 194 "call_gen.m"
          MR_Word ll_backend__call_gen__V_44_44;

#line 194 "call_gen.m"
          ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 194 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 194 "call_gen.m"
            {
#line 194 "call_gen.m"
              ll_backend__call_gen__InputArg_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_15, (MR_Integer) 0)));
#line 194 "call_gen.m"
              ll_backend__call_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Args_15, (MR_Integer) 1)));
#line 194 "call_gen.m"
              ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 194 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 194 "call_gen.m"
                {
#line 194 "call_gen.m"
                  ll_backend__call_gen__OutputArg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_43_43, (MR_Integer) 0)));
#line 194 "call_gen.m"
                  ll_backend__call_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_43_43, (MR_Integer) 1)));
#line 194 "call_gen.m"
                  ll_backend__call_gen__succeeded = (ll_backend__call_gen__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "call_gen.m"
                }
#line 194 "call_gen.m"
            }
#line 194 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 195 "call_gen.m"
            {
#line 195 "call_gen.m"
              MR_Word ll_backend__call_gen__ModuleInfo_35;
#line 195 "call_gen.m"
              MR_Word ll_backend__call_gen__ProcInfo_36;
#line 195 "call_gen.m"
              MR_Word ll_backend__call_gen__VarTypes_37;
#line 195 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_38;

#line 195 "call_gen.m"
              {
#line 195 "call_gen.m"
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ModuleInfo_35);
              }
#line 196 "call_gen.m"
              {
#line 196 "call_gen.m"
                ll_backend__code_info__get_proc_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_39, &ll_backend__call_gen__ProcInfo_36);
              }
#line 197 "call_gen.m"
              {
#line 197 "call_gen.m"
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__call_gen__ProcInfo_36, &ll_backend__call_gen__VarTypes_37);
              }
#line 198 "call_gen.m"
              {
#line 198 "call_gen.m"
                ll_backend__call_gen__succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(ll_backend__call_gen__ModuleInfo_35, ll_backend__call_gen__VarTypes_37, ll_backend__call_gen__InputArg_33);
              }
#line 198 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 204 "call_gen.m"
                {
#line 204 "call_gen.m"
                  ll_backend__call_gen__Rval_38 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_4[1]);
#line 204 "call_gen.m"
                }
#line 198 "call_gen.m"
              else
#line 206 "call_gen.m"
                {
#line 206 "call_gen.m"
                  ll_backend__call_gen__Rval_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 206 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__Rval_38, 0) = ((MR_Box) (ll_backend__call_gen__InputArg_33));
#line 206 "call_gen.m"
                }
#line 737 "call_gen.m"
              {
#line 737 "call_gen.m"
                ll_backend__call_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__OutputArg_34);
              }
#line 737 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 738 "call_gen.m"
                {
#line 738 "call_gen.m"
                  MR_Word ll_backend__call_gen__Rval_60;

#line 738 "call_gen.m"
                  {
#line 738 "call_gen.m"
                    ll_backend__call_gen__Rval_60 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Rval_38);
                  }
#line 739 "call_gen.m"
                  {
#line 739 "call_gen.m"
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__call_gen__OutputArg_34, ll_backend__call_gen__Rval_60, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
                  }
#line 738 "call_gen.m"
                }
#line 737 "call_gen.m"
              else
#line 741 "call_gen.m"
                {
#line 741 "call_gen.m"
                  {
#line 741 "call_gen.m"
                    *ll_backend__call_gen__Code_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
#line 741 "call_gen.m"
                  *ll_backend__call_gen__STATE_VARIABLE_CLD_42 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_41;
#line 741 "call_gen.m"
                }
#line 195 "call_gen.m"
            }
#line 194 "call_gen.m"
          else
#line 210 "call_gen.m"
            {
#line 210 "call_gen.m"
              {
#line 210 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_generic_call\'/12", (MR_String) "invalid type/inst cast call");
#line 210 "call_gen.m"
                return;
              }
#line 210 "call_gen.m"
            }
#line 193 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CI_40 = ll_backend__call_gen__STATE_VARIABLE_CI_0_39;
#line 193 "call_gen.m"
        }
#line 186 "call_gen.m"
        break;
#line 186 "call_gen.m"
    }
#line 186 "call_gen.m"
  }
#line 41 "call_gen.m"
}

#line 50 "call_gen.m"
void MR_CALL 
ll_backend__call_gen____Compare____known_call_variant_0_0(
#line 50 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__1_1,
#line 50 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 50 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__3_3)
#line 50 "call_gen.m"
{
#line 50 "call_gen.m"
  {
#line 50 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 50 "call_gen.m"
    MR_Integer ll_backend__call_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__call_gen__HeadVar__2_2;
#line 50 "call_gen.m"
    MR_Integer ll_backend__call_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__call_gen__HeadVar__3_3;

#line 50 "call_gen.m"
    {
#line 50 "call_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__call_gen__HeadVar__1_1, ll_backend__call_gen__Cast_HeadVar1_4, ll_backend__call_gen__Cast_HeadVar2_5);
    }
#line 50 "call_gen.m"
  }
#line 50 "call_gen.m"
}

#line 50 "call_gen.m"
MR_bool MR_CALL 
ll_backend__call_gen____Unify____known_call_variant_0_0(
#line 50 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_1,
#line 50 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2)
#line 50 "call_gen.m"
{
#line 1660 "ll_backend.call_gen.c"
  {
#line 1662 "ll_backend.call_gen.c"
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__HeadVar__2_1 == ll_backend__call_gen__HeadVar__2_2);

#line 1665 "ll_backend.call_gen.c"
    return ll_backend__call_gen__succeeded;
#line 1667 "ll_backend.call_gen.c"
  }
#line 50 "call_gen.m"
}

#line 825 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(
#line 825 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 825 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__2_2,
#line 825 "call_gen.m"
  MR_Integer ll_backend__call_gen__HeadVar__3_3,
#line 825 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__4_4,
#line 825 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__5_5)
#line 825 "call_gen.m"
{
#line 829 "call_gen.m"
  {
#line 829 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 829 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 829 "call_gen.m"
      *ll_backend__call_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 829 "call_gen.m"
    else
#line 831 "call_gen.m"
      {
#line 831 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 831 "call_gen.m"
        MR_Word ll_backend__call_gen__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 831 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgInfo_14;
#line 831 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgInfos_15;
#line 831 "call_gen.m"
        MR_Word ll_backend__call_gen__V_16_16;
#line 831 "call_gen.m"
        MR_Word ll_backend__call_gen__V_17_17;
#line 831 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_18_18;

#line 832 "call_gen.m"
        {
#line 832 "call_gen.m"
          ll_backend__call_gen__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 832 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 0) = ((MR_Box) (ll_backend__call_gen__HeadVar__2_2));
#line 832 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__3_3));
#line 832 "call_gen.m"
        }
#line 832 "call_gen.m"
        {
#line 832 "call_gen.m"
          ll_backend__call_gen__ArgInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 832 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 0) = ((MR_Box) (ll_backend__call_gen__V_17_17));
#line 832 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__ArgInfo_14, 1) = ((MR_Box) (ll_backend__call_gen__HeadVar__4_4));
#line 832 "call_gen.m"
        }
#line 831 "call_gen.m"
        {
#line 831 "call_gen.m"
          ll_backend__call_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 831 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 0) = ((MR_Box) (ll_backend__call_gen__Var_9));
#line 831 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_16_16, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfo_14));
#line 831 "call_gen.m"
        }
#line 833 "call_gen.m"
        ll_backend__call_gen__V_18_18 = (ll_backend__call_gen__HeadVar__3_3 + (MR_Integer) 1);
#line 833 "call_gen.m"
        {
#line 833 "call_gen.m"
          ll_backend__call_gen__give_vars_consecutive_arg_infos_5_p_0(ll_backend__call_gen__Vars_10, ll_backend__call_gen__HeadVar__2_2, ll_backend__call_gen__V_18_18, ll_backend__call_gen__HeadVar__4_4, &ll_backend__call_gen__ArgInfos_15);
        }
#line 831 "call_gen.m"
        {
#line 831 "call_gen.m"
          MR_Word base;
#line 831 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "call_gen.m"
          *ll_backend__call_gen__HeadVar__5_5 = base;
#line 831 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_16_16));
#line 831 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ArgInfos_15));
#line 831 "call_gen.m"
        }
#line 831 "call_gen.m"
      }
#line 829 "call_gen.m"
  }
#line 825 "call_gen.m"
}

#line 754 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_simple_test_6_p_0(
#line 754 "call_gen.m"
  MR_Word ll_backend__call_gen__TestExpr_7,
#line 754 "call_gen.m"
  MR_Word * ll_backend__call_gen__Rval_8,
#line 754 "call_gen.m"
  MR_Word * ll_backend__call_gen__ArgCode_9,
#line 754 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_10,
#line 754 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_22,
#line 754 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_23)
#line 754 "call_gen.m"
{
#line 760 "call_gen.m"
  {
#line 760 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 760 "call_gen.m"
    if (((((MR_tag((MR_Word) ll_backend__call_gen__TestExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 760 "call_gen.m"
      {
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__BinOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 1)));
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__X0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 2)));
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__Y0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 3)));
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__X1_15;
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__Y1_16;
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__X_17;
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__CodeX_18;
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__Y_19;
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__CodeY_20;
#line 760 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;

#line 761 "call_gen.m"
        {
#line 761 "call_gen.m"
          ll_backend__call_gen__X1_15 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_13);
        }
#line 762 "call_gen.m"
        {
#line 762 "call_gen.m"
          ll_backend__call_gen__Y1_16 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Y0_14);
        }
#line 779 "call_gen.m"
#line 779 "call_gen.m"
        switch (MR_tag((MR_Word) ll_backend__call_gen__X1_15)) {
#line 779 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 779 "call_gen.m"
          case (MR_Integer) 0:
#line 779 "call_gen.m"
          case (MR_Integer) 2:
#line 789 "call_gen.m"
            {
#line 790 "call_gen.m"
              ll_backend__call_gen__X_17 = ll_backend__call_gen__X1_15;
#line 791 "call_gen.m"
              {
#line 791 "call_gen.m"
                ll_backend__call_gen__CodeX_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 789 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_CLD_25_25 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
#line 789 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
          case (MR_Integer) 1:
#line 779 "call_gen.m"
            {
#line 779 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_15, (MR_Integer) 0)));

#line 780 "call_gen.m"
              {
#line 780 "call_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_38, &ll_backend__call_gen__CodeX_18, &ll_backend__call_gen__X_17, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_0_22, &ll_backend__call_gen__STATE_VARIABLE_CLD_25_25);
              }
#line 779 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
          case (MR_Integer) 3:
#line 789 "call_gen.m"
            {
#line 790 "call_gen.m"
              ll_backend__call_gen__X_17 = ll_backend__call_gen__X1_15;
#line 791 "call_gen.m"
              {
#line 791 "call_gen.m"
                ll_backend__call_gen__CodeX_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 789 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_CLD_25_25 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
#line 789 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
        }
#line 779 "call_gen.m"
#line 779 "call_gen.m"
        switch (MR_tag((MR_Word) ll_backend__call_gen__Y1_16)) {
#line 779 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 779 "call_gen.m"
          case (MR_Integer) 0:
#line 779 "call_gen.m"
          case (MR_Integer) 2:
#line 789 "call_gen.m"
            {
#line 790 "call_gen.m"
              ll_backend__call_gen__Y_19 = ll_backend__call_gen__Y1_16;
#line 791 "call_gen.m"
              {
#line 791 "call_gen.m"
                ll_backend__call_gen__CodeY_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 789 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;
#line 789 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
          case (MR_Integer) 1:
#line 779 "call_gen.m"
            {
#line 779 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__Y1_16, (MR_Integer) 0)));

#line 780 "call_gen.m"
              {
#line 780 "call_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_59, &ll_backend__call_gen__CodeY_20, &ll_backend__call_gen__Y_19, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_25_25, ll_backend__call_gen__STATE_VARIABLE_CLD_23);
              }
#line 779 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
          case (MR_Integer) 3:
#line 789 "call_gen.m"
            {
#line 790 "call_gen.m"
              ll_backend__call_gen__Y_19 = ll_backend__call_gen__Y1_16;
#line 791 "call_gen.m"
              {
#line 791 "call_gen.m"
                ll_backend__call_gen__CodeY_20 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 789 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_25_25;
#line 789 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
        }
#line 765 "call_gen.m"
        {
#line 765 "call_gen.m"
          MR_Word base;
#line 765 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 765 "call_gen.m"
          *ll_backend__call_gen__Rval_8 = base;
#line 765 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 765 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_12));
#line 765 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_17));
#line 765 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__call_gen__Y_19));
#line 765 "call_gen.m"
        }
#line 766 "call_gen.m"
        {
#line 766 "call_gen.m"
          *ll_backend__call_gen__ArgCode_9 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__CodeX_18, ll_backend__call_gen__CodeY_20);
        }
#line 760 "call_gen.m"
      }
#line 760 "call_gen.m"
    else
#line 768 "call_gen.m"
      {
#line 768 "call_gen.m"
        MR_Word ll_backend__call_gen__UnOp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 1)));
#line 768 "call_gen.m"
        MR_Word ll_backend__call_gen__X0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__TestExpr_7, (MR_Integer) 2)));
#line 768 "call_gen.m"
        MR_Word ll_backend__call_gen__X1_28;
#line 768 "call_gen.m"
        MR_Word ll_backend__call_gen__X_29;

#line 769 "call_gen.m"
        {
#line 769 "call_gen.m"
          ll_backend__call_gen__X1_28 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__X0_27);
        }
#line 779 "call_gen.m"
#line 779 "call_gen.m"
        switch (MR_tag((MR_Word) ll_backend__call_gen__X1_28)) {
#line 779 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 779 "call_gen.m"
          case (MR_Integer) 0:
#line 779 "call_gen.m"
          case (MR_Integer) 2:
#line 789 "call_gen.m"
            {
#line 790 "call_gen.m"
              ll_backend__call_gen__X_29 = ll_backend__call_gen__X1_28;
#line 791 "call_gen.m"
              {
#line 791 "call_gen.m"
                *ll_backend__call_gen__ArgCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 789 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
#line 789 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
          case (MR_Integer) 1:
#line 779 "call_gen.m"
            {
#line 779 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__X1_28, (MR_Integer) 0)));

#line 780 "call_gen.m"
              {
#line 780 "call_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_80, ll_backend__call_gen__ArgCode_9, &ll_backend__call_gen__X_29, ll_backend__call_gen__CI_10, ll_backend__call_gen__STATE_VARIABLE_CLD_0_22, ll_backend__call_gen__STATE_VARIABLE_CLD_23);
              }
#line 779 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
          case (MR_Integer) 3:
#line 789 "call_gen.m"
            {
#line 790 "call_gen.m"
              ll_backend__call_gen__X_29 = ll_backend__call_gen__X1_28;
#line 791 "call_gen.m"
              {
#line 791 "call_gen.m"
                *ll_backend__call_gen__ArgCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 789 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_23 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_22;
#line 789 "call_gen.m"
            }
#line 779 "call_gen.m"
            break;
#line 779 "call_gen.m"
        }
#line 771 "call_gen.m"
        {
#line 771 "call_gen.m"
          MR_Word base;
#line 771 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 771 "call_gen.m"
          *ll_backend__call_gen__Rval_8 = base;
#line 771 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 771 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_21));
#line 771 "call_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__call_gen__X_29));
#line 771 "call_gen.m"
        }
#line 768 "call_gen.m"
      }
#line 760 "call_gen.m"
  }
#line 754 "call_gen.m"
}

#line 744 "call_gen.m"
static MR_Word MR_CALL 
ll_backend__call_gen__convert_simple_expr_1_f_0(
#line 744 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1)
#line 744 "call_gen.m"
{
#line 746 "call_gen.m"
  {
#line 746 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 746 "call_gen.m"
    MR_Word ll_backend__call_gen__HeadVar__2_2;

#line 746 "call_gen.m"
#line 746 "call_gen.m"
    switch (MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) {
#line 746 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 746 "call_gen.m"
      case (MR_Integer) 0:
#line 746 "call_gen.m"
        {
#line 746 "call_gen.m"
          MR_Word ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));

#line 746 "call_gen.m"
          {
#line 746 "call_gen.m"
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 746 "call_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 746 "call_gen.m"
          }
#line 746 "call_gen.m"
        }
#line 746 "call_gen.m"
        break;
#line 746 "call_gen.m"
      case (MR_Integer) 1:
#line 747 "call_gen.m"
        {
#line 747 "call_gen.m"
          MR_Integer ll_backend__call_gen__Int_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 747 "call_gen.m"
          MR_Word ll_backend__call_gen__V_5_5;

#line 747 "call_gen.m"
          {
#line 747 "call_gen.m"
            ll_backend__call_gen__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 747 "call_gen.m"
            MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_5_5, 0) = ((MR_Box) (ll_backend__call_gen__Int_4));
#line 747 "call_gen.m"
          }
#line 747 "call_gen.m"
          {
#line 747 "call_gen.m"
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 747 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_5_5));
#line 747 "call_gen.m"
          }
#line 747 "call_gen.m"
        }
#line 746 "call_gen.m"
        break;
#line 746 "call_gen.m"
      case (MR_Integer) 2:
#line 748 "call_gen.m"
        {
#line 748 "call_gen.m"
          MR_Float ll_backend__call_gen__Float_6 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 748 "call_gen.m"
          MR_Word ll_backend__call_gen__V_7_7;

#line 748 "call_gen.m"
          {
#line 748 "call_gen.m"
            ll_backend__call_gen__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 748 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_7_7, 1) = MR_box_float(ll_backend__call_gen__Float_6);
#line 748 "call_gen.m"
          }
#line 748 "call_gen.m"
          {
#line 748 "call_gen.m"
            ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 748 "call_gen.m"
            MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__V_7_7));
#line 748 "call_gen.m"
          }
#line 748 "call_gen.m"
        }
#line 746 "call_gen.m"
        break;
#line 746 "call_gen.m"
      case (MR_Integer) 3:
#line 746 "call_gen.m"
#line 746 "call_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)))) {
#line 746 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 746 "call_gen.m"
          case (MR_Integer) 0:
#line 749 "call_gen.m"
            {
#line 749 "call_gen.m"
              MR_Word ll_backend__call_gen__UnOp_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 749 "call_gen.m"
              MR_Word ll_backend__call_gen__V_10_10;

#line 750 "call_gen.m"
              {
#line 750 "call_gen.m"
                ll_backend__call_gen__V_10_10 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr_9);
              }
#line 750 "call_gen.m"
              {
#line 750 "call_gen.m"
                ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 750 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 750 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__UnOp_8));
#line 750 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_10_10));
#line 750 "call_gen.m"
              }
#line 749 "call_gen.m"
            }
#line 746 "call_gen.m"
            break;
#line 746 "call_gen.m"
          case (MR_Integer) 1:
#line 751 "call_gen.m"
            {
#line 751 "call_gen.m"
              MR_Word ll_backend__call_gen__BinOp_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 751 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 751 "call_gen.m"
              MR_Word ll_backend__call_gen__Expr2_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 751 "call_gen.m"
              MR_Word ll_backend__call_gen__V_14_14;
#line 751 "call_gen.m"
              MR_Word ll_backend__call_gen__V_15_15;

#line 752 "call_gen.m"
              {
#line 752 "call_gen.m"
                ll_backend__call_gen__V_14_14 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr1_12);
              }
#line 752 "call_gen.m"
              {
#line 752 "call_gen.m"
                ll_backend__call_gen__V_15_15 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__Expr2_13);
              }
#line 752 "call_gen.m"
              {
#line 752 "call_gen.m"
                ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 752 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 752 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__call_gen__BinOp_11));
#line 752 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 2) = ((MR_Box) (ll_backend__call_gen__V_14_14));
#line 752 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__HeadVar__2_2, 3) = ((MR_Box) (ll_backend__call_gen__V_15_15));
#line 752 "call_gen.m"
              }
#line 751 "call_gen.m"
            }
#line 746 "call_gen.m"
            break;
#line 746 "call_gen.m"
        }
#line 746 "call_gen.m"
        break;
#line 746 "call_gen.m"
    }
#line 746 "call_gen.m"
    return ll_backend__call_gen__HeadVar__2_2;
#line 746 "call_gen.m"
  }
#line 744 "call_gen.m"
}

#line 661 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__rebuild_registers_5_p_0(
#line 661 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 661 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 661 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 661 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_4,
#line 661 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_5)
#line 661 "call_gen.m"
{
#line 665 "call_gen.m"
  {
#line 665 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 665 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "call_gen.m"
      {
#line 665 "call_gen.m"
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CLD_5 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_4;
#line 665 "call_gen.m"
      }
#line 665 "call_gen.m"
    else
#line 667 "call_gen.m"
      {
#line 667 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_10;
#line 667 "call_gen.m"
        MR_Word ll_backend__call_gen__ArgLoc_11;
#line 667 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_12;
#line 667 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 667 "call_gen.m"
        MR_Word ll_backend__call_gen__OutputArgLocs1_17;
#line 667 "call_gen.m"
        MR_Word ll_backend__call_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 667 "call_gen.m"
        MR_Word ll_backend__call_gen__V_22_22;
#line 667 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_23_23;
#line 670 "call_gen.m"
        MR_Word ll_backend__call_gen__TypeCtorInfo_26_26;

#line 666 "call_gen.m"
        ll_backend__call_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 0)));
#line 666 "call_gen.m"
        ll_backend__call_gen__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_21_21, (MR_Integer) 1)));
#line 666 "call_gen.m"
        ll_backend__call_gen__ArgLoc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 0)));
#line 666 "call_gen.m"
        ll_backend__call_gen__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, (MR_Integer) 1)));
#line 668 "call_gen.m"
        {
#line 668 "call_gen.m"
          ll_backend__call_gen__rebuild_registers_5_p_0(ll_backend__call_gen__Args_13, ll_backend__call_gen__Liveness_2, &ll_backend__call_gen__OutputArgLocs1_17, ll_backend__call_gen__STATE_VARIABLE_CLD_0_4, &ll_backend__call_gen__STATE_VARIABLE_CLD_23_23);
        }
#line 670 "call_gen.m"
        ll_backend__call_gen__succeeded = (ll_backend__call_gen__Mode_12 == (MR_Integer) 1);
#line 670 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 670 "call_gen.m"
          {
#line 2342 "ll_backend.call_gen.c"
            ll_backend__call_gen__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 671 "call_gen.m"
            {
#line 671 "call_gen.m"
              ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__call_gen__TypeCtorInfo_26_26, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_10);
            }
#line 670 "call_gen.m"
          }
#line 669 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 673 "call_gen.m"
          {
#line 673 "call_gen.m"
            MR_Word ll_backend__call_gen__Register_18;
#line 673 "call_gen.m"
            MR_Word ll_backend__call_gen__V_25_25;

#line 673 "call_gen.m"
            {
#line 673 "call_gen.m"
              ll_backend__code_util__arg_loc_to_register_2_p_0(ll_backend__call_gen__ArgLoc_11, &ll_backend__call_gen__Register_18);
            }
#line 674 "call_gen.m"
            {
#line 674 "call_gen.m"
              ll_backend__code_loc_dep__set_var_location_4_p_0(ll_backend__call_gen__Var_10, ll_backend__call_gen__Register_18, ll_backend__call_gen__STATE_VARIABLE_CLD_23_23, ll_backend__call_gen__STATE_VARIABLE_CLD_5);
            }
#line 675 "call_gen.m"
            {
#line 675 "call_gen.m"
              ll_backend__call_gen__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 0) = ((MR_Box) (ll_backend__call_gen__Var_10));
#line 675 "call_gen.m"
              MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_25_25, 1) = ((MR_Box) (ll_backend__call_gen__ArgLoc_11));
#line 675 "call_gen.m"
            }
#line 675 "call_gen.m"
            {
#line 675 "call_gen.m"
              MR_Word base;
#line 675 "call_gen.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "call_gen.m"
              *ll_backend__call_gen__HeadVar__3_3 = base;
#line 675 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_25_25));
#line 675 "call_gen.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__OutputArgLocs1_17));
#line 675 "call_gen.m"
            }
#line 673 "call_gen.m"
          }
#line 669 "call_gen.m"
        else
#line 677 "call_gen.m"
          {
#line 677 "call_gen.m"
            *ll_backend__call_gen__HeadVar__3_3 = ll_backend__call_gen__OutputArgLocs1_17;
#line 677 "call_gen.m"
            *ll_backend__call_gen__STATE_VARIABLE_CLD_5 = ll_backend__call_gen__STATE_VARIABLE_CLD_23_23;
#line 677 "call_gen.m"
          }
#line 667 "call_gen.m"
      }
#line 665 "call_gen.m"
  }
#line 661 "call_gen.m"
}

#line 641 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__find_nonlive_outputs_4_p_0(
#line 641 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 641 "call_gen.m"
  MR_Word ll_backend__call_gen__Liveness_2,
#line 641 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3,
#line 641 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4)
#line 641 "call_gen.m"
{
#line 644 "call_gen.m"
  while (MR_TRUE)
#line 644 "call_gen.m"
    {
#line 644 "call_gen.m"
      /* tailcall optimized into a loop */
#line 644 "call_gen.m"
      {
#line 644 "call_gen.m"
        MR_bool ll_backend__call_gen__succeeded;

#line 644 "call_gen.m"
        if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_4 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 644 "call_gen.m"
        else
#line 646 "call_gen.m"
          {
#line 646 "call_gen.m"
            MR_Word ll_backend__call_gen__Var_9;
#line 646 "call_gen.m"
            MR_Word ll_backend__call_gen__Mode_11;
#line 646 "call_gen.m"
            MR_Word ll_backend__call_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "call_gen.m"
            MR_Word ll_backend__call_gen__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 646 "call_gen.m"
            MR_Word ll_backend__call_gen__V_18_18;
#line 646 "call_gen.m"
            MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;
#line 645 "call_gen.m"
            MR_Word ll_backend__call_gen___ArgLoc_10;

#line 645 "call_gen.m"
            ll_backend__call_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 0)));
#line 645 "call_gen.m"
            ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_17_17, (MR_Integer) 1)));
#line 645 "call_gen.m"
            ll_backend__call_gen___ArgLoc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 0)));
#line 645 "call_gen.m"
            ll_backend__call_gen__Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_18_18, (MR_Integer) 1)));
#line 654 "call_gen.m"
#line 654 "call_gen.m"
            switch (ll_backend__call_gen__Mode_11) {
#line 654 "call_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 654 "call_gen.m"
              case (MR_Integer) 0:
#line 655 "call_gen.m"
                ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 654 "call_gen.m"
                break;
#line 654 "call_gen.m"
              case (MR_Integer) 1:
#line 649 "call_gen.m"
                {
#line 649 "call_gen.m"
                  {
#line 649 "call_gen.m"
                    ll_backend__call_gen__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Liveness_2, ll_backend__call_gen__Var_9);
                  }
#line 649 "call_gen.m"
                  if (ll_backend__call_gen__succeeded)
#line 649 "call_gen.m"
                    ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 649 "call_gen.m"
                  else
#line 652 "call_gen.m"
                    {
#line 652 "call_gen.m"
                      {
#line 652 "call_gen.m"
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__call_gen__Var_9, ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3, &ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19);
                      }
#line 652 "call_gen.m"
                    }
#line 649 "call_gen.m"
                }
#line 654 "call_gen.m"
                break;
#line 654 "call_gen.m"
              case (MR_Integer) 2:
#line 656 "call_gen.m"
                ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3;
#line 654 "call_gen.m"
                break;
#line 654 "call_gen.m"
            }
#line 659 "call_gen.m"
            /* direct tailcall eliminated */
#line 659 "call_gen.m"
            {
#line 659 "call_gen.m"
              MR_Word ll_backend__call_gen__HeadVar__1__tmp_copy_1 = ll_backend__call_gen__Args_12;
#line 659 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_19_19;

#line 659 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0_3 = ll_backend__call_gen__STATE_VARIABLE_NonLiveOutputs_0__tmp_copy_3;
#line 659 "call_gen.m"
              ll_backend__call_gen__HeadVar__1_1 = ll_backend__call_gen__HeadVar__1__tmp_copy_1;
#line 659 "call_gen.m"
            }
#line 659 "call_gen.m"
            continue;
#line 646 "call_gen.m"
          }
#line 644 "call_gen.m"
      }
#line 644 "call_gen.m"
      break;
#line 644 "call_gen.m"
    }
#line 641 "call_gen.m"
}

#line 612 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__kill_dead_input_vars_5_p_0(
#line 612 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgsInfos_6,
#line 612 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_7,
#line 612 "call_gen.m"
  MR_Word * ll_backend__call_gen__NonLiveOutputs_8,
#line 612 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_13,
#line 612 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_14)
#line 612 "call_gen.m"
{
#line 616 "call_gen.m"
  {
#line 616 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 616 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_17_17;
#line 616 "call_gen.m"
    MR_Word ll_backend__call_gen__Liveness_10;
#line 616 "call_gen.m"
    MR_Word ll_backend__call_gen__PostDeaths_11;
#line 616 "call_gen.m"
    MR_Word ll_backend__call_gen__ImmediatePostDeaths_12;
#line 616 "call_gen.m"
    MR_Word ll_backend__call_gen__V_15_15;

#line 617 "call_gen.m"
    {
#line 617 "call_gen.m"
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_13, &ll_backend__call_gen__Liveness_10);
    }
#line 2578 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 618 "call_gen.m"
    {
#line 618 "call_gen.m"
      ll_backend__call_gen__V_15_15 = parse_tree__set_of_var__init_0_f_0(ll_backend__call_gen__TypeCtorInfo_17_17);
    }
#line 618 "call_gen.m"
    {
#line 618 "call_gen.m"
      ll_backend__call_gen__find_nonlive_outputs_4_p_0(ll_backend__call_gen__ArgsInfos_6, ll_backend__call_gen__Liveness_10, ll_backend__call_gen__V_15_15, ll_backend__call_gen__NonLiveOutputs_8);
    }
#line 619 "call_gen.m"
    {
#line 619 "call_gen.m"
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__call_gen__GoalInfo_7, &ll_backend__call_gen__PostDeaths_11);
    }
#line 620 "call_gen.m"
    {
#line 620 "call_gen.m"
      parse_tree__set_of_var__difference_3_p_0(ll_backend__call_gen__TypeCtorInfo_17_17, ll_backend__call_gen__PostDeaths_11, *ll_backend__call_gen__NonLiveOutputs_8, &ll_backend__call_gen__ImmediatePostDeaths_12);
    }
#line 621 "call_gen.m"
    {
#line 621 "call_gen.m"
      ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(ll_backend__call_gen__ImmediatePostDeaths_12, ll_backend__call_gen__STATE_VARIABLE_CLD_0_13, ll_backend__call_gen__STATE_VARIABLE_CLD_14);
    }
#line 616 "call_gen.m"
  }
#line 612 "call_gen.m"
}

#line 565 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__call_comment_4_p_0(
#line 565 "call_gen.m"
  MR_Word ll_backend__call_gen__CI_5,
#line 565 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_6,
#line 565 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 565 "call_gen.m"
  MR_String * ll_backend__call_gen__Msg_8)
#line 565 "call_gen.m"
{
#line 568 "call_gen.m"
  {
#line 568 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 568 "call_gen.m"
    MR_String ll_backend__call_gen__BaseMsg_9;
#line 568 "call_gen.m"
    MR_Word ll_backend__call_gen__AutoComments_10;

#line 572 "call_gen.m"
#line 572 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_7) {
#line 572 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 572 "call_gen.m"
      case (MR_Integer) 0:
#line 571 "call_gen.m"
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to det procedure";
#line 572 "call_gen.m"
        break;
#line 572 "call_gen.m"
      case (MR_Integer) 2:
#line 577 "call_gen.m"
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to nondet procedure";
#line 572 "call_gen.m"
        break;
#line 572 "call_gen.m"
      case (MR_Integer) 1:
#line 574 "call_gen.m"
        ll_backend__call_gen__BaseMsg_9 = (MR_String) "branch to semidet procedure";
#line 572 "call_gen.m"
        break;
#line 572 "call_gen.m"
    }
#line 579 "call_gen.m"
    {
#line 579 "call_gen.m"
      ll_backend__code_info__get_auto_comments_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__AutoComments_10);
    }
#line 586 "call_gen.m"
#line 586 "call_gen.m"
    switch (ll_backend__call_gen__AutoComments_10) {
#line 586 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 586 "call_gen.m"
      case (MR_Integer) 0:
#line 588 "call_gen.m"
        *ll_backend__call_gen__Msg_8 = ll_backend__call_gen__BaseMsg_9;
#line 586 "call_gen.m"
        break;
#line 586 "call_gen.m"
      case (MR_Integer) 1:
#line 581 "call_gen.m"
        {
#line 581 "call_gen.m"
          MR_Word ll_backend__call_gen__ModuleInfo_11;
#line 581 "call_gen.m"
          MR_Word ll_backend__call_gen__PredInfo_12;
#line 581 "call_gen.m"
          MR_String ll_backend__call_gen__PredName_13;
#line 581 "call_gen.m"
          MR_String ll_backend__call_gen__V_14_14;

#line 582 "call_gen.m"
          {
#line 582 "call_gen.m"
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__CI_5, &ll_backend__call_gen__ModuleInfo_11);
          }
#line 583 "call_gen.m"
          {
#line 583 "call_gen.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__call_gen__ModuleInfo_11, ll_backend__call_gen__PredId_6, &ll_backend__call_gen__PredInfo_12);
          }
#line 584 "call_gen.m"
          {
#line 584 "call_gen.m"
            ll_backend__call_gen__PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(ll_backend__call_gen__PredInfo_12);
          }
#line 585 "call_gen.m"
          {
#line 585 "call_gen.m"
            ll_backend__call_gen__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__call_gen__PredName_13);
          }
#line 585 "call_gen.m"
          {
#line 585 "call_gen.m"
            *ll_backend__call_gen__Msg_8 = mercury__string__f_43_43_2_f_0(ll_backend__call_gen__BaseMsg_9, ll_backend__call_gen__V_14_14);
          }
#line 581 "call_gen.m"
        }
#line 586 "call_gen.m"
        break;
#line 586 "call_gen.m"
    }
#line 568 "call_gen.m"
  }
#line 565 "call_gen.m"
}

#line 537 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__handle_call_failure_6_p_0(
#line 537 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_7,
#line 537 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_8,
#line 537 "call_gen.m"
  MR_Word * ll_backend__call_gen__FailHandlingCode_9,
#line 537 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
#line 537 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
#line 537 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19)
#line 537 "call_gen.m"
{
#line 542 "call_gen.m"
  {
#line 542 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 542 "call_gen.m"
#line 542 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_7) {
#line 542 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 542 "call_gen.m"
      case (MR_Integer) 0:
#line 542 "call_gen.m"
      case (MR_Integer) 2:
#line 561 "call_gen.m"
        {
#line 562 "call_gen.m"
          {
#line 562 "call_gen.m"
            *ll_backend__call_gen__FailHandlingCode_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
#line 561 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CI_18 = ll_backend__call_gen__STATE_VARIABLE_CI_0_17;
#line 561 "call_gen.m"
        }
#line 542 "call_gen.m"
        break;
#line 542 "call_gen.m"
      case (MR_Integer) 1:
#line 542 "call_gen.m"
        {
#line 542 "call_gen.m"
          MR_Word ll_backend__call_gen__Detism_12;

#line 543 "call_gen.m"
          {
#line 543 "call_gen.m"
            ll_backend__call_gen__Detism_12 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__call_gen__GoalInfo_8);
          }
#line 544 "call_gen.m"
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__Detism_12 == (MR_Integer) 7);
#line 544 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 545 "call_gen.m"
            {
#line 545 "call_gen.m"
              ll_backend__code_loc_dep__generate_failure_4_p_0(ll_backend__call_gen__FailHandlingCode_9, ll_backend__call_gen__STATE_VARIABLE_CI_0_17, ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);
            }
#line 544 "call_gen.m"
          else
#line 547 "call_gen.m"
            {
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeCtorInfo_35_35;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__ContLab_13;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__FailTestCode_14;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__FailCode_15;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__ContLabelCode_16;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_21_21;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__V_22_22;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__V_23_23;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__V_28_28;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__V_31_31;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__V_32_32;
#line 547 "call_gen.m"
              MR_Word ll_backend__call_gen__V_34_34;

#line 547 "call_gen.m"
              {
#line 547 "call_gen.m"
                ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ContLab_13, ll_backend__call_gen__STATE_VARIABLE_CI_0_17, &ll_backend__call_gen__STATE_VARIABLE_CI_21_21);
              }
#line 2821 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeCtorInfo_35_35 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 549 "call_gen.m"
              {
#line 549 "call_gen.m"
                ll_backend__call_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_28_28, 0) = ((MR_Box) (ll_backend__call_gen__ContLab_13));
#line 549 "call_gen.m"
              }
#line 549 "call_gen.m"
              {
#line 549 "call_gen.m"
                ll_backend__call_gen__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 549 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 549 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_4[0]));
#line 549 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_23_23, 2) = ((MR_Box) (ll_backend__call_gen__V_28_28));
#line 549 "call_gen.m"
              }
#line 549 "call_gen.m"
              {
#line 549 "call_gen.m"
                ll_backend__call_gen__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, 0) = ((MR_Box) (ll_backend__call_gen__V_23_23));
#line 549 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_22_22, 1) = ((MR_Box) ((MR_String) "test for success"));
#line 549 "call_gen.m"
              }
#line 548 "call_gen.m"
              {
#line 548 "call_gen.m"
                ll_backend__call_gen__FailTestCode_14 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ((MR_Box) (ll_backend__call_gen__V_22_22)));
              }
#line 552 "call_gen.m"
              {
#line 552 "call_gen.m"
                ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__call_gen__FailCode_15, ll_backend__call_gen__STATE_VARIABLE_CI_21_21, ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__STATE_VARIABLE_CLD_0_19);
              }
#line 554 "call_gen.m"
              {
#line 554 "call_gen.m"
                ll_backend__call_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 554 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_32_32, 1) = ((MR_Box) (ll_backend__call_gen__ContLab_13));
#line 554 "call_gen.m"
              }
#line 554 "call_gen.m"
              {
#line 554 "call_gen.m"
                ll_backend__call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 554 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (ll_backend__call_gen__V_32_32));
#line 554 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) ((MR_String) ""));
#line 554 "call_gen.m"
              }
#line 553 "call_gen.m"
              {
#line 553 "call_gen.m"
                ll_backend__call_gen__ContLabelCode_16 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ((MR_Box) (ll_backend__call_gen__V_31_31)));
              }
#line 556 "call_gen.m"
              {
#line 556 "call_gen.m"
                ll_backend__call_gen__V_34_34 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ll_backend__call_gen__FailCode_15, ll_backend__call_gen__ContLabelCode_16);
              }
#line 556 "call_gen.m"
              {
#line 556 "call_gen.m"
                *ll_backend__call_gen__FailHandlingCode_9 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_35_35, ll_backend__call_gen__FailTestCode_14, ll_backend__call_gen__V_34_34);
              }
#line 547 "call_gen.m"
            }
#line 542 "call_gen.m"
        }
#line 542 "call_gen.m"
        break;
#line 542 "call_gen.m"
    }
#line 542 "call_gen.m"
  }
#line 537 "call_gen.m"
}

#line 512 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__prepare_for_call_8_p_0(
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_9,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_10,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__CallModel_11,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__TraceCode_12,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_17,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_18,
#line 512 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_19,
#line 512 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_20)
#line 512 "call_gen.m"
{
#line 516 "call_gen.m"
  {
#line 516 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 516 "call_gen.m"
    MR_Word ll_backend__call_gen__AllowLCO_15;

#line 517 "call_gen.m"
    {
#line 517 "call_gen.m"
      ll_backend__code_info__succip_is_used_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_17, ll_backend__call_gen__STATE_VARIABLE_CI_18);
    }
#line 518 "call_gen.m"
    {
#line 518 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_10, (MR_Integer) 22);
    }
#line 518 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 519 "call_gen.m"
      ll_backend__call_gen__AllowLCO_15 = (MR_Integer) 0;
#line 518 "call_gen.m"
    else
#line 521 "call_gen.m"
      ll_backend__call_gen__AllowLCO_15 = (MR_Integer) 1;
#line 526 "call_gen.m"
#line 526 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_9) {
#line 526 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 526 "call_gen.m"
      case (MR_Integer) 0:
#line 524 "call_gen.m"
        {
#line 525 "call_gen.m"
          {
#line 525 "call_gen.m"
            MR_Word base;
#line 525 "call_gen.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 525 "call_gen.m"
            *ll_backend__call_gen__CallModel_11 = base;
#line 525 "call_gen.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_15));
#line 525 "call_gen.m"
          }
#line 524 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CLD_20 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_19;
#line 524 "call_gen.m"
        }
#line 526 "call_gen.m"
        break;
#line 526 "call_gen.m"
      case (MR_Integer) 2:
#line 530 "call_gen.m"
        {
#line 530 "call_gen.m"
          MR_Word ll_backend__call_gen__TailCallStatus_16;

#line 531 "call_gen.m"
          {
#line 531 "call_gen.m"
            ll_backend__code_loc_dep__may_use_nondet_tailcall_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_19, &ll_backend__call_gen__TailCallStatus_16);
          }
#line 532 "call_gen.m"
          {
#line 532 "call_gen.m"
            MR_Word base;
#line 532 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 532 "call_gen.m"
            *ll_backend__call_gen__CallModel_11 = base;
#line 532 "call_gen.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__call_gen__TailCallStatus_16));
#line 532 "call_gen.m"
          }
#line 533 "call_gen.m"
          {
#line 533 "call_gen.m"
            ll_backend__code_loc_dep__set_resume_point_and_frame_to_unknown_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_19, ll_backend__call_gen__STATE_VARIABLE_CLD_20);
          }
#line 530 "call_gen.m"
        }
#line 526 "call_gen.m"
        break;
#line 526 "call_gen.m"
      case (MR_Integer) 1:
#line 527 "call_gen.m"
        {
#line 528 "call_gen.m"
          {
#line 528 "call_gen.m"
            MR_Word base;
#line 528 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "call_gen.m"
            *ll_backend__call_gen__CallModel_11 = base;
#line 528 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__AllowLCO_15));
#line 528 "call_gen.m"
          }
#line 527 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CLD_20 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_19;
#line 527 "call_gen.m"
        }
#line 526 "call_gen.m"
        break;
#line 526 "call_gen.m"
    }
#line 535 "call_gen.m"
    {
#line 535 "call_gen.m"
      ll_backend__trace_gen__trace_prepare_for_call_2_p_0(*ll_backend__call_gen__STATE_VARIABLE_CI_18, ll_backend__call_gen__TraceCode_12);
    }
#line 516 "call_gen.m"
  }
#line 512 "call_gen.m"
}

#line 456 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generic_call_nonvar_setup_7_p_0(
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__HoCallVariant_2,
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsR_3,
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__InVarsF_4,
#line 456 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_5,
#line 456 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
#line 456 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7)
#line 456 "call_gen.m"
{
#line 461 "call_gen.m"
  {
#line 461 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 461 "call_gen.m"
#line 461 "call_gen.m"
    switch (MR_tag((MR_Word) ll_backend__call_gen__HeadVar__1_1)) {
#line 461 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 461 "call_gen.m"
      case (MR_Integer) 0:
#line 465 "call_gen.m"
#line 465 "call_gen.m"
        switch (ll_backend__call_gen__HoCallVariant_2) {
#line 465 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 465 "call_gen.m"
          case (MR_Integer) 0:
#line 463 "call_gen.m"
            {
#line 464 "call_gen.m"
              {
#line 464 "call_gen.m"
                *ll_backend__call_gen__Code_5 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
#line 463 "call_gen.m"
              *ll_backend__call_gen__STATE_VARIABLE_CLD_7 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
#line 463 "call_gen.m"
            }
#line 465 "call_gen.m"
            break;
#line 465 "call_gen.m"
          case (MR_Integer) 1:
#line 466 "call_gen.m"
            {
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__TypeInfo_117_117;
#line 466 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVarsR_17;
#line 466 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVarsF_18;
#line 466 "call_gen.m"
              MR_Integer ll_backend__call_gen__NumInVars_19;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]);
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_26_26;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_27_27;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_31_31;
#line 466 "call_gen.m"
              MR_Word ll_backend__call_gen__V_32_32;

#line 467 "call_gen.m"
              {
#line 467 "call_gen.m"
                ll_backend__code_loc_dep__clobber_reg_3_p_0(ll_backend__call_gen__V_22_22, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
              }
#line 3130 "ll_backend.call_gen.c"
              ll_backend__call_gen__TypeInfo_117_117 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 468 "call_gen.m"
              {
#line 468 "call_gen.m"
                mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_117_117, ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_17);
              }
#line 469 "call_gen.m"
              {
#line 469 "call_gen.m"
                mercury__list__length_2_p_0(ll_backend__call_gen__TypeInfo_117_117, ll_backend__call_gen__InVarsF_4, &ll_backend__call_gen__NumInVarsF_18);
              }
#line 470 "call_gen.m"
              {
#line 470 "call_gen.m"
                ll_backend__call_gen__NumInVars_19 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_17, ll_backend__call_gen__NumInVarsF_18);
              }
#line 472 "call_gen.m"
              {
#line 472 "call_gen.m"
                ll_backend__call_gen__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_32_32, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_19));
#line 472 "call_gen.m"
              }
#line 472 "call_gen.m"
              {
#line 472 "call_gen.m"
                ll_backend__call_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) (ll_backend__call_gen__V_32_32));
#line 472 "call_gen.m"
              }
#line 472 "call_gen.m"
              {
#line 472 "call_gen.m"
                ll_backend__call_gen__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 1) = ((MR_Box) (ll_backend__call_gen__V_22_22));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_27_27, 2) = ((MR_Box) (ll_backend__call_gen__V_31_31));
#line 472 "call_gen.m"
              }
#line 472 "call_gen.m"
              {
#line 472 "call_gen.m"
                ll_backend__call_gen__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_26_26, 0) = ((MR_Box) (ll_backend__call_gen__V_27_27));
#line 472 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_26_26, 1) = ((MR_Box) ((MR_String) "Assign number of immediate input arguments"));
#line 472 "call_gen.m"
              }
#line 471 "call_gen.m"
              {
#line 471 "call_gen.m"
                *ll_backend__call_gen__Code_5 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_26_26)));
              }
#line 466 "call_gen.m"
            }
#line 465 "call_gen.m"
            break;
#line 465 "call_gen.m"
        }
#line 461 "call_gen.m"
        break;
#line 461 "call_gen.m"
      case (MR_Integer) 1:
#line 477 "call_gen.m"
        {
#line 477 "call_gen.m"
          MR_Integer ll_backend__call_gen__Method_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "call_gen.m"
          MR_Word ll_backend__call_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 476 "call_gen.m"
          MR_Word ll_backend__call_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 476 "call_gen.m"
          MR_Word ll_backend__call_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 3)));

#line 480 "call_gen.m"
          if ((ll_backend__call_gen__InVarsF_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "call_gen.m"
            {
#line 479 "call_gen.m"
            }
#line 480 "call_gen.m"
          else
#line 481 "call_gen.m"
            {
#line 482 "call_gen.m"
              {
#line 482 "call_gen.m"
                mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "float input reg");
#line 482 "call_gen.m"
                return;
              }
#line 481 "call_gen.m"
            }
#line 491 "call_gen.m"
#line 491 "call_gen.m"
          switch (ll_backend__call_gen__HoCallVariant_2) {
#line 491 "call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 491 "call_gen.m"
            case (MR_Integer) 0:
#line 485 "call_gen.m"
              {
#line 485 "call_gen.m"
                MR_Word ll_backend__call_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3]);
#line 485 "call_gen.m"
                MR_Word ll_backend__call_gen__V_86_86;
#line 485 "call_gen.m"
                MR_Word ll_backend__call_gen__V_87_87;
#line 485 "call_gen.m"
                MR_Word ll_backend__call_gen__V_91_91;
#line 485 "call_gen.m"
                MR_Word ll_backend__call_gen__V_92_92;

#line 486 "call_gen.m"
                {
#line 486 "call_gen.m"
                  ll_backend__code_loc_dep__clobber_reg_3_p_0(ll_backend__call_gen__V_82_82, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
                }
#line 488 "call_gen.m"
                {
#line 488 "call_gen.m"
                  ll_backend__call_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 488 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_92_92, 0) = ((MR_Box) (ll_backend__call_gen__Method_35));
#line 488 "call_gen.m"
                }
#line 488 "call_gen.m"
                {
#line 488 "call_gen.m"
                  ll_backend__call_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 488 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_91_91, 1) = ((MR_Box) (ll_backend__call_gen__V_92_92));
#line 488 "call_gen.m"
                }
#line 488 "call_gen.m"
                {
#line 488 "call_gen.m"
                  ll_backend__call_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 488 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 488 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 1) = ((MR_Box) (ll_backend__call_gen__V_82_82));
#line 488 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_87_87, 2) = ((MR_Box) (ll_backend__call_gen__V_91_91));
#line 488 "call_gen.m"
                }
#line 488 "call_gen.m"
                {
#line 488 "call_gen.m"
                  ll_backend__call_gen__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_86_86, 0) = ((MR_Box) (ll_backend__call_gen__V_87_87));
#line 488 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_86_86, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
#line 488 "call_gen.m"
                }
#line 487 "call_gen.m"
                {
#line 487 "call_gen.m"
                  *ll_backend__call_gen__Code_5 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__call_gen__V_86_86)));
                }
#line 485 "call_gen.m"
              }
#line 491 "call_gen.m"
              break;
#line 491 "call_gen.m"
            case (MR_Integer) 1:
#line 492 "call_gen.m"
              {
#line 492 "call_gen.m"
                MR_Integer ll_backend__call_gen__NumInVarsR_45;
#line 492 "call_gen.m"
                MR_Integer ll_backend__call_gen__NumInVars_47;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_63_63;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_64_64;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_65_65;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_69_69;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_70_70;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_72_72;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_73_73;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_74_74;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_78_78;
#line 492 "call_gen.m"
                MR_Word ll_backend__call_gen__V_79_79;

#line 493 "call_gen.m"
                {
#line 493 "call_gen.m"
                  ll_backend__code_loc_dep__clobber_regs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[4]), ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
                }
#line 494 "call_gen.m"
                {
#line 494 "call_gen.m"
                  mercury__list__length_2_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], ll_backend__call_gen__InVarsR_3, &ll_backend__call_gen__NumInVarsR_45);
                }
#line 497 "call_gen.m"
                {
#line 497 "call_gen.m"
                  ll_backend__call_gen__NumInVars_47 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__call_gen__NumInVarsR_45, (MR_Integer) 0);
                }
#line 499 "call_gen.m"
                {
#line 499 "call_gen.m"
                  ll_backend__call_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_70_70, 0) = ((MR_Box) (ll_backend__call_gen__Method_35));
#line 499 "call_gen.m"
                }
#line 499 "call_gen.m"
                {
#line 499 "call_gen.m"
                  ll_backend__call_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 1) = ((MR_Box) (ll_backend__call_gen__V_70_70));
#line 499 "call_gen.m"
                }
#line 499 "call_gen.m"
                {
#line 499 "call_gen.m"
                  ll_backend__call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[3])));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_65_65, 2) = ((MR_Box) (ll_backend__call_gen__V_69_69));
#line 499 "call_gen.m"
                }
#line 499 "call_gen.m"
                {
#line 499 "call_gen.m"
                  ll_backend__call_gen__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_64_64, 0) = ((MR_Box) (ll_backend__call_gen__V_65_65));
#line 499 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_64_64, 1) = ((MR_Box) ((MR_String) "Index of class method in typeclass info"));
#line 499 "call_gen.m"
                }
#line 501 "call_gen.m"
                {
#line 501 "call_gen.m"
                  ll_backend__call_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 501 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_79_79, 0) = ((MR_Box) (ll_backend__call_gen__NumInVars_47));
#line 501 "call_gen.m"
                }
#line 501 "call_gen.m"
                {
#line 501 "call_gen.m"
                  ll_backend__call_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 501 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_78_78, 1) = ((MR_Box) (ll_backend__call_gen__V_79_79));
#line 501 "call_gen.m"
                }
#line 501 "call_gen.m"
                {
#line 501 "call_gen.m"
                  ll_backend__call_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 501 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 501 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__call_gen_scalar_common_1[1])));
#line 501 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_74_74, 2) = ((MR_Box) (ll_backend__call_gen__V_78_78));
#line 501 "call_gen.m"
                }
#line 501 "call_gen.m"
                {
#line 501 "call_gen.m"
                  ll_backend__call_gen__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 0) = ((MR_Box) (ll_backend__call_gen__V_74_74));
#line 501 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_73_73, 1) = ((MR_Box) ((MR_String) "Assign number of immediate regular input arguments"));
#line 501 "call_gen.m"
                }
#line 503 "call_gen.m"
                {
#line 503 "call_gen.m"
                  ll_backend__call_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 0) = ((MR_Box) (ll_backend__call_gen__V_73_73));
#line 503 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "call_gen.m"
                }
#line 500 "call_gen.m"
                {
#line 500 "call_gen.m"
                  ll_backend__call_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_63_63, 0) = ((MR_Box) (ll_backend__call_gen__V_64_64));
#line 500 "call_gen.m"
                  MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_63_63, 1) = ((MR_Box) (ll_backend__call_gen__V_72_72));
#line 500 "call_gen.m"
                }
#line 498 "call_gen.m"
                {
#line 498 "call_gen.m"
                  *ll_backend__call_gen__Code_5 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__V_63_63);
                }
#line 492 "call_gen.m"
              }
#line 491 "call_gen.m"
              break;
#line 491 "call_gen.m"
          }
#line 477 "call_gen.m"
        }
#line 461 "call_gen.m"
        break;
#line 461 "call_gen.m"
      case (MR_Integer) 2:
#line 505 "call_gen.m"
        {
#line 506 "call_gen.m"
          {
#line 506 "call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "event_call");
#line 506 "call_gen.m"
            return;
          }
#line 505 "call_gen.m"
        }
#line 461 "call_gen.m"
        break;
#line 461 "call_gen.m"
      case (MR_Integer) 3:
#line 507 "call_gen.m"
        {
#line 508 "call_gen.m"
          {
#line 508 "call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_nonvar_setup\'/7", (MR_String) "cast");
#line 508 "call_gen.m"
            return;
          }
#line 507 "call_gen.m"
        }
#line 461 "call_gen.m"
        break;
#line 461 "call_gen.m"
    }
#line 461 "call_gen.m"
  }
#line 456 "call_gen.m"
}

#line 377 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_from_3_p_0(
#line 377 "call_gen.m"
  MR_Integer ll_backend__call_gen__Reg_4,
#line 377 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_5,
#line 377 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_6)
#line 377 "call_gen.m"
{
#line 380 "call_gen.m"
  {
#line 380 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded = (ll_backend__call_gen__Reg_4 < ll_backend__call_gen__FirstInput_5);

#line 380 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 381 "call_gen.m"
      {
#line 381 "call_gen.m"
        MR_Word ll_backend__call_gen__ExtraLiveVals1_7;
#line 381 "call_gen.m"
        MR_Integer ll_backend__call_gen__NextReg_8;
#line 381 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9;

#line 381 "call_gen.m"
        {
#line 381 "call_gen.m"
          ll_backend__call_gen__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 0) = ((MR_Box) ((MR_Integer) 0));
#line 381 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_9_9, 1) = ((MR_Box) (ll_backend__call_gen__Reg_4));
#line 381 "call_gen.m"
        }
#line 382 "call_gen.m"
        ll_backend__call_gen__NextReg_8 = (ll_backend__call_gen__Reg_4 + (MR_Integer) 1);
#line 383 "call_gen.m"
        {
#line 383 "call_gen.m"
          ll_backend__call_gen__extra_livevals_from_3_p_0(ll_backend__call_gen__NextReg_8, ll_backend__call_gen__FirstInput_5, &ll_backend__call_gen__ExtraLiveVals1_7);
        }
#line 381 "call_gen.m"
        {
#line 381 "call_gen.m"
          MR_Word base;
#line 381 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "call_gen.m"
          *ll_backend__call_gen__ExtraLiveVals_6 = base;
#line 381 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_9_9));
#line 381 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__ExtraLiveVals1_7));
#line 381 "call_gen.m"
        }
#line 381 "call_gen.m"
      }
#line 380 "call_gen.m"
    else
#line 385 "call_gen.m"
      *ll_backend__call_gen__ExtraLiveVals_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 380 "call_gen.m"
  }
#line 377 "call_gen.m"
}

#line 372 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__extra_livevals_2_p_0(
#line 372 "call_gen.m"
  MR_Integer ll_backend__call_gen__FirstInput_3,
#line 372 "call_gen.m"
  MR_Word * ll_backend__call_gen__ExtraLiveVals_4)
#line 372 "call_gen.m"
{
#line 374 "call_gen.m"
  {
#line 374 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 375 "call_gen.m"
    {
#line 375 "call_gen.m"
      ll_backend__call_gen__extra_livevals_from_3_p_0((MR_Integer) 1, ll_backend__call_gen__FirstInput_3, ll_backend__call_gen__ExtraLiveVals_4);
    }
#line 374 "call_gen.m"
  }
#line 372 "call_gen.m"
}

#line 335 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_event_attributes_7_p_0(
#line 335 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 335 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_0_2,
#line 335 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__3_3,
#line 335 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__4_4,
#line 335 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__5_5,
#line 335 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_6,
#line 335 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_7)
#line 335 "call_gen.m"
{
#line 339 "call_gen.m"
  {
#line 339 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 339 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 339 "call_gen.m"
      {
#line 339 "call_gen.m"
        *ll_backend__call_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "call_gen.m"
        *ll_backend__call_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "call_gen.m"
        if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 344 "call_gen.m"
          {
#line 344 "call_gen.m"
          }
#line 343 "call_gen.m"
        else
#line 341 "call_gen.m"
          {
#line 342 "call_gen.m"
            {
#line 342 "call_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "var");
#line 342 "call_gen.m"
              return;
            }
#line 341 "call_gen.m"
          }
#line 339 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CLD_7 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
#line 339 "call_gen.m"
      }
#line 339 "call_gen.m"
    else
#line 347 "call_gen.m"
      {
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__Attribute_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__MaybeUserAttr_22;
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__MaybeUserAttrs_23;
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__Code_24;
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__Codes_25;
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__SynthCall_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 4)));
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_Vars_39_39;
#line 347 "call_gen.m"
        MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_40_40;
#line 348 "call_gen.m"
        MR_Integer ll_backend__call_gen__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 0)));
#line 348 "call_gen.m"
        MR_String ll_backend__call_gen__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 1)));
#line 348 "call_gen.m"
        MR_Word ll_backend__call_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 2)));
#line 348 "call_gen.m"
        MR_Word ll_backend__call_gen__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__Attribute_19, (MR_Integer) 3)));

#line 360 "call_gen.m"
        if ((ll_backend__call_gen__SynthCall_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "call_gen.m"
          if ((ll_backend__call_gen__STATE_VARIABLE_Vars_0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "call_gen.m"
            {
#line 358 "call_gen.m"
              {
#line 358 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_event_attributes\'/7", (MR_String) "no var");
#line 358 "call_gen.m"
                return;
              }
#line 357 "call_gen.m"
            }
#line 356 "call_gen.m"
          else
#line 352 "call_gen.m"
            {
#line 352 "call_gen.m"
              MR_Word ll_backend__call_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 0)));
#line 352 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_30;
#line 352 "call_gen.m"
              MR_Word ll_backend__call_gen__UserAttr_31;

#line 352 "call_gen.m"
              ll_backend__call_gen__STATE_VARIABLE_Vars_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__STATE_VARIABLE_Vars_0_2, (MR_Integer) 1)));
#line 353 "call_gen.m"
              {
#line 353 "call_gen.m"
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__Var_29, &ll_backend__call_gen__Code_24, &ll_backend__call_gen__Rval_30, ll_backend__call_gen__HeadVar__5_5, ll_backend__call_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__call_gen__STATE_VARIABLE_CLD_40_40);
              }
#line 354 "call_gen.m"
              {
#line 354 "call_gen.m"
                ll_backend__call_gen__UserAttr_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_31, 0) = ((MR_Box) (ll_backend__call_gen__Rval_30));
#line 354 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__UserAttr_31, 1) = ((MR_Box) (ll_backend__call_gen__Var_29));
#line 354 "call_gen.m"
              }
#line 355 "call_gen.m"
              {
#line 355 "call_gen.m"
                ll_backend__call_gen__MaybeUserAttr_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeUserAttr_22, 0) = ((MR_Box) (ll_backend__call_gen__UserAttr_31));
#line 355 "call_gen.m"
              }
#line 352 "call_gen.m"
            }
#line 360 "call_gen.m"
        else
#line 361 "call_gen.m"
          {
#line 362 "call_gen.m"
            ll_backend__call_gen__MaybeUserAttr_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 363 "call_gen.m"
            {
#line 363 "call_gen.m"
              ll_backend__call_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
#line 361 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_Vars_39_39 = ll_backend__call_gen__STATE_VARIABLE_Vars_0_2;
#line 361 "call_gen.m"
            ll_backend__call_gen__STATE_VARIABLE_CLD_40_40 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_6;
#line 361 "call_gen.m"
          }
#line 365 "call_gen.m"
        {
#line 365 "call_gen.m"
          ll_backend__call_gen__generate_event_attributes_7_p_0(ll_backend__call_gen__Attributes_20, ll_backend__call_gen__STATE_VARIABLE_Vars_39_39, &ll_backend__call_gen__MaybeUserAttrs_23, &ll_backend__call_gen__Codes_25, ll_backend__call_gen__HeadVar__5_5, ll_backend__call_gen__STATE_VARIABLE_CLD_40_40, ll_backend__call_gen__STATE_VARIABLE_CLD_7);
        }
#line 347 "call_gen.m"
        {
#line 347 "call_gen.m"
          MR_Word base;
#line 347 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "call_gen.m"
          *ll_backend__call_gen__HeadVar__3_3 = base;
#line 347 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttr_22));
#line 347 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__MaybeUserAttrs_23));
#line 347 "call_gen.m"
        }
#line 347 "call_gen.m"
        {
#line 347 "call_gen.m"
          MR_Word base;
#line 347 "call_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "call_gen.m"
          *ll_backend__call_gen__HeadVar__4_4 = base;
#line 347 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__Code_24));
#line 347 "call_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Codes_25));
#line 347 "call_gen.m"
        }
#line 347 "call_gen.m"
      }
#line 339 "call_gen.m"
  }
#line 335 "call_gen.m"
}

#line 65 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__output_arg_locs_2_p_0(
#line 65 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 65 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__2_2)
#line 65 "call_gen.m"
{
#line 810 "call_gen.m"
  {
#line 810 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 810 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 810 "call_gen.m"
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 810 "call_gen.m"
    else
#line 811 "call_gen.m"
      {
#line 811 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_3;
#line 811 "call_gen.m"
        MR_Word ll_backend__call_gen__Loc_4;
#line 811 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_5;
#line 811 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 811 "call_gen.m"
        MR_Word ll_backend__call_gen__Vs0_8;
#line 811 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 811 "call_gen.m"
        MR_Word ll_backend__call_gen__V_10_10;

#line 811 "call_gen.m"
        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
#line 811 "call_gen.m"
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
#line 811 "call_gen.m"
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
#line 811 "call_gen.m"
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
#line 812 "call_gen.m"
        {
#line 812 "call_gen.m"
          ll_backend__call_gen__output_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
#line 816 "call_gen.m"
#line 816 "call_gen.m"
        switch (ll_backend__call_gen__Mode_5) {
#line 816 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 816 "call_gen.m"
          case (MR_Integer) 0:
#line 816 "call_gen.m"
          case (MR_Integer) 2:
#line 820 "call_gen.m"
            *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
#line 816 "call_gen.m"
            break;
#line 816 "call_gen.m"
          case (MR_Integer) 1:
#line 814 "call_gen.m"
            {
#line 814 "call_gen.m"
              MR_Word ll_backend__call_gen__V_11_11;

#line 815 "call_gen.m"
              {
#line 815 "call_gen.m"
                ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 815 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 815 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
#line 815 "call_gen.m"
              }
#line 815 "call_gen.m"
              {
#line 815 "call_gen.m"
                MR_Word base;
#line 815 "call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "call_gen.m"
                *ll_backend__call_gen__HeadVar__2_2 = base;
#line 815 "call_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
#line 815 "call_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
#line 815 "call_gen.m"
              }
#line 814 "call_gen.m"
            }
#line 816 "call_gen.m"
            break;
#line 816 "call_gen.m"
        }
#line 811 "call_gen.m"
      }
#line 810 "call_gen.m"
  }
#line 65 "call_gen.m"
}

#line 62 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__input_arg_locs_2_p_0(
#line 62 "call_gen.m"
  MR_Word ll_backend__call_gen__HeadVar__1_1,
#line 62 "call_gen.m"
  MR_Word * ll_backend__call_gen__HeadVar__2_2)
#line 62 "call_gen.m"
{
#line 797 "call_gen.m"
  {
#line 797 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 797 "call_gen.m"
    if ((ll_backend__call_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "call_gen.m"
      *ll_backend__call_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 797 "call_gen.m"
    else
#line 798 "call_gen.m"
      {
#line 798 "call_gen.m"
        MR_Word ll_backend__call_gen__Var_3;
#line 798 "call_gen.m"
        MR_Word ll_backend__call_gen__Loc_4;
#line 798 "call_gen.m"
        MR_Word ll_backend__call_gen__Mode_5;
#line 798 "call_gen.m"
        MR_Word ll_backend__call_gen__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 798 "call_gen.m"
        MR_Word ll_backend__call_gen__Vs0_8;
#line 798 "call_gen.m"
        MR_Word ll_backend__call_gen__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 798 "call_gen.m"
        MR_Word ll_backend__call_gen__V_10_10;

#line 798 "call_gen.m"
        ll_backend__call_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 0)));
#line 798 "call_gen.m"
        ll_backend__call_gen__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_9_9, (MR_Integer) 1)));
#line 798 "call_gen.m"
        ll_backend__call_gen__Loc_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 0)));
#line 798 "call_gen.m"
        ll_backend__call_gen__Mode_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_10_10, (MR_Integer) 1)));
#line 799 "call_gen.m"
        {
#line 799 "call_gen.m"
          ll_backend__call_gen__input_arg_locs_2_p_0(ll_backend__call_gen__Args_6, &ll_backend__call_gen__Vs0_8);
        }
#line 803 "call_gen.m"
#line 803 "call_gen.m"
        switch (ll_backend__call_gen__Mode_5) {
#line 803 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 803 "call_gen.m"
          case (MR_Integer) 0:
#line 801 "call_gen.m"
            {
#line 801 "call_gen.m"
              MR_Word ll_backend__call_gen__V_11_11;

#line 802 "call_gen.m"
              {
#line 802 "call_gen.m"
                ll_backend__call_gen__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 802 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 0) = ((MR_Box) (ll_backend__call_gen__Var_3));
#line 802 "call_gen.m"
                MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_11_11, 1) = ((MR_Box) (ll_backend__call_gen__Loc_4));
#line 802 "call_gen.m"
              }
#line 802 "call_gen.m"
              {
#line 802 "call_gen.m"
                MR_Word base;
#line 802 "call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "call_gen.m"
                *ll_backend__call_gen__HeadVar__2_2 = base;
#line 802 "call_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_11_11));
#line 802 "call_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__call_gen__Vs0_8));
#line 802 "call_gen.m"
              }
#line 801 "call_gen.m"
            }
#line 803 "call_gen.m"
            break;
#line 803 "call_gen.m"
          case (MR_Integer) 1:
#line 803 "call_gen.m"
          case (MR_Integer) 2:
#line 807 "call_gen.m"
            *ll_backend__call_gen__HeadVar__2_2 = ll_backend__call_gen__Vs0_8;
#line 803 "call_gen.m"
            break;
#line 803 "call_gen.m"
        }
#line 798 "call_gen.m"
      }
#line 797 "call_gen.m"
  }
#line 62 "call_gen.m"
}

#line 58 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generic_call_info_8_p_0(
#line 58 "call_gen.m"
  MR_Word ll_backend__call_gen__Globals_9,
#line 58 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_10,
#line 58 "call_gen.m"
  MR_Integer ll_backend__call_gen__NumInputArgsR_11,
#line 58 "call_gen.m"
  MR_Integer ll_backend__call_gen__NumInputArgsF_12,
#line 58 "call_gen.m"
  MR_Word * ll_backend__call_gen__CodeAddr_13,
#line 58 "call_gen.m"
  MR_Word * ll_backend__call_gen__SpecifierArgInfos_14,
#line 58 "call_gen.m"
  MR_Integer * ll_backend__call_gen__FirstImmediateInputReg_15,
#line 58 "call_gen.m"
  MR_Word * ll_backend__call_gen__HoCallVariant_16)
#line 58 "call_gen.m"
{
#line 391 "call_gen.m"
  {
#line 391 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 391 "call_gen.m"
#line 391 "call_gen.m"
    switch (MR_tag((MR_Word) ll_backend__call_gen__GenericCall_10)) {
#line 391 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 391 "call_gen.m"
      case (MR_Integer) 0:
#line 391 "call_gen.m"
        {
#line 391 "call_gen.m"
          MR_Word ll_backend__call_gen__PredVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
#line 391 "call_gen.m"
          MR_Integer ll_backend__call_gen__MaxSpec_22;
#line 391 "call_gen.m"
          MR_Word ll_backend__call_gen__V_44_44;
#line 391 "call_gen.m"
          MR_Word ll_backend__call_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
#line 391 "call_gen.m"
          MR_Word ll_backend__call_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
#line 391 "call_gen.m"
          MR_Integer ll_backend__call_gen__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

#line 393 "call_gen.m"
          {
#line 393 "call_gen.m"
            ll_backend__call_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 0) = ((MR_Box) (ll_backend__call_gen__PredVar_17));
#line 393 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_44_44, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[6]));
#line 393 "call_gen.m"
          }
#line 393 "call_gen.m"
          {
#line 393 "call_gen.m"
            MR_Word base;
#line 393 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "call_gen.m"
            *ll_backend__call_gen__SpecifierArgInfos_14 = base;
#line 393 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_44_44));
#line 393 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "call_gen.m"
          }
#line 394 "call_gen.m"
          {
#line 394 "call_gen.m"
            libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 309, &ll_backend__call_gen__MaxSpec_22);
          }
#line 397 "call_gen.m"
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_22 >= (MR_Integer) 0);
#line 397 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 397 "call_gen.m"
            {
#line 398 "call_gen.m"
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_22);
#line 397 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 399 "call_gen.m"
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
#line 397 "call_gen.m"
            }
#line 396 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 401 "call_gen.m"
            {
#line 401 "call_gen.m"
              MR_Word ll_backend__call_gen__V_50_50;

#line 401 "call_gen.m"
              {
#line 401 "call_gen.m"
                ll_backend__call_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "call_gen.m"
                MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_50_50, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
#line 401 "call_gen.m"
              }
#line 401 "call_gen.m"
              {
#line 401 "call_gen.m"
                MR_Word base;
#line 401 "call_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "call_gen.m"
                *ll_backend__call_gen__CodeAddr_13 = base;
#line 401 "call_gen.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 401 "call_gen.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_50_50));
#line 401 "call_gen.m"
              }
#line 402 "call_gen.m"
              *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
#line 403 "call_gen.m"
              *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 2;
#line 401 "call_gen.m"
            }
#line 396 "call_gen.m"
          else
#line 405 "call_gen.m"
            {
#line 405 "call_gen.m"
              *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[8]);
#line 406 "call_gen.m"
              *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 407 "call_gen.m"
              *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
#line 405 "call_gen.m"
            }
#line 391 "call_gen.m"
        }
#line 391 "call_gen.m"
        break;
#line 391 "call_gen.m"
      case (MR_Integer) 1:
#line 410 "call_gen.m"
        {
#line 410 "call_gen.m"
          MR_Word ll_backend__call_gen__TCVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 0)));
#line 410 "call_gen.m"
          MR_Word ll_backend__call_gen__V_31_31;
#line 410 "call_gen.m"
          MR_Integer ll_backend__call_gen__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 1)));
#line 410 "call_gen.m"
          MR_Word ll_backend__call_gen__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 2)));
#line 410 "call_gen.m"
          MR_Word ll_backend__call_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__GenericCall_10, (MR_Integer) 3)));

#line 412 "call_gen.m"
          {
#line 412 "call_gen.m"
            ll_backend__call_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 0) = ((MR_Box) (ll_backend__call_gen__TCVar_23));
#line 412 "call_gen.m"
            MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_31_31, 1) = ((MR_Box) (&ll_backend__call_gen_scalar_common_1[6]));
#line 412 "call_gen.m"
          }
#line 412 "call_gen.m"
          {
#line 412 "call_gen.m"
            MR_Word base;
#line 412 "call_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "call_gen.m"
            *ll_backend__call_gen__SpecifierArgInfos_14 = base;
#line 412 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__call_gen__V_31_31));
#line 412 "call_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "call_gen.m"
          }
#line 414 "call_gen.m"
          ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsF_12 == (MR_Integer) 0);
#line 414 "call_gen.m"
          if (ll_backend__call_gen__succeeded)
#line 416 "call_gen.m"
            {
#line 416 "call_gen.m"
              MR_Integer ll_backend__call_gen__MaxSpec_52;

#line 415 "call_gen.m"
              {
#line 415 "call_gen.m"
                libs__globals__lookup_int_option_3_p_0(ll_backend__call_gen__Globals_9, (MR_Integer) 310, &ll_backend__call_gen__MaxSpec_52);
              }
#line 418 "call_gen.m"
              ll_backend__call_gen__succeeded = (ll_backend__call_gen__MaxSpec_52 >= (MR_Integer) 0);
#line 418 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 419 "call_gen.m"
                ll_backend__call_gen__succeeded = (ll_backend__call_gen__NumInputArgsR_11 <= ll_backend__call_gen__MaxSpec_52);
#line 417 "call_gen.m"
              if (ll_backend__call_gen__succeeded)
#line 422 "call_gen.m"
                {
#line 422 "call_gen.m"
                  MR_Word ll_backend__call_gen__V_37_37;

#line 422 "call_gen.m"
                  {
#line 422 "call_gen.m"
                    ll_backend__call_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 422 "call_gen.m"
                    MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_37_37, 0) = ((MR_Box) (ll_backend__call_gen__NumInputArgsR_11));
#line 422 "call_gen.m"
                  }
#line 421 "call_gen.m"
                  {
#line 421 "call_gen.m"
                    MR_Word base;
#line 421 "call_gen.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "call_gen.m"
                    *ll_backend__call_gen__CodeAddr_13 = base;
#line 421 "call_gen.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 421 "call_gen.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__call_gen__V_37_37));
#line 421 "call_gen.m"
                  }
#line 423 "call_gen.m"
                  *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 0;
#line 424 "call_gen.m"
                  *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 3;
#line 422 "call_gen.m"
                }
#line 417 "call_gen.m"
              else
#line 426 "call_gen.m"
                {
#line 426 "call_gen.m"
                  *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__call_gen_scalar_common_1[7]);
#line 427 "call_gen.m"
                  *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 428 "call_gen.m"
                  *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 4;
#line 426 "call_gen.m"
                }
#line 416 "call_gen.m"
            }
#line 414 "call_gen.m"
          else
#line 431 "call_gen.m"
            {
#line 431 "call_gen.m"
              {
#line 431 "call_gen.m"
                mercury__require__sorry_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generic_call_info\'/8", (MR_String) "float reg inputs");
#line 431 "call_gen.m"
                return;
              }
#line 431 "call_gen.m"
            }
#line 410 "call_gen.m"
        }
#line 391 "call_gen.m"
        break;
#line 391 "call_gen.m"
      case (MR_Integer) 2:
#line 391 "call_gen.m"
      case (MR_Integer) 3:
#line 437 "call_gen.m"
        {
#line 438 "call_gen.m"
          *ll_backend__call_gen__CodeAddr_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 439 "call_gen.m"
          *ll_backend__call_gen__SpecifierArgInfos_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 440 "call_gen.m"
          *ll_backend__call_gen__FirstImmediateInputReg_15 = (MR_Integer) 1;
#line 441 "call_gen.m"
          *ll_backend__call_gen__HoCallVariant_16 = (MR_Integer) 1;
#line 437 "call_gen.m"
        }
#line 391 "call_gen.m"
        break;
#line 391 "call_gen.m"
    }
#line 391 "call_gen.m"
  }
#line 58 "call_gen.m"
}

#line 705 "call_gen.m"
static void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0_1(
#line 705 "call_gen.m"
  MR_Box ll_backend__call_gen__closure_arg,
#line 705 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_1,
#line 705 "call_gen.m"
  MR_Box ll_backend__call_gen__wrapper_arg_2,
#line 705 "call_gen.m"
  MR_Box * ll_backend__call_gen__wrapper_arg_3)
#line 705 "call_gen.m"
{
#line 705 "call_gen.m"
  {
#line 705 "call_gen.m"
    MR_Box ll_backend__call_gen__closure = ll_backend__call_gen__closure_arg;
#line 705 "call_gen.m"
    MR_Word ll_backend__call_gen__conv0_HeadVar__3_3;

#line 705 "call_gen.m"
    {
#line 705 "call_gen.m"
      ll_backend__code_loc_dep__magically_put_var_in_unused_reg_3_p_0(((MR_Word) ll_backend__call_gen__wrapper_arg_1), ((MR_Word) ll_backend__call_gen__wrapper_arg_2), &ll_backend__call_gen__conv0_HeadVar__3_3);
    }
#line 705 "call_gen.m"
    *ll_backend__call_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__call_gen__conv0_HeadVar__3_3));
#line 705 "call_gen.m"
  }
#line 705 "call_gen.m"
}

#line 46 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_builtin_9_p_0(
#line 46 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_10,
#line 46 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_11,
#line 46 "call_gen.m"
  MR_Integer ll_backend__call_gen__ProcId_12,
#line 46 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_13,
#line 46 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_14,
#line 46 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_42,
#line 46 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_43,
#line 46 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_44,
#line 46 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_45)
#line 46 "call_gen.m"
{
#line 682 "call_gen.m"
  {
#line 682 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 682 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeInfo_73_73;
#line 682 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_17;
#line 682 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleName_18;
#line 682 "call_gen.m"
    MR_String ll_backend__call_gen__PredName_19;
#line 682 "call_gen.m"
    MR_Word ll_backend__call_gen__SimpleCode_20;

#line 683 "call_gen.m"
    {
#line 683 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_42, &ll_backend__call_gen__ModuleInfo_17);
    }
#line 684 "call_gen.m"
    {
#line 684 "call_gen.m"
      ll_backend__call_gen__ModuleName_18 = hlds__hlds_module__predicate_module_2_f_0(ll_backend__call_gen__ModuleInfo_17, ll_backend__call_gen__PredId_11);
    }
#line 685 "call_gen.m"
    {
#line 685 "call_gen.m"
      ll_backend__call_gen__PredName_19 = hlds__hlds_module__predicate_name_2_f_0(ll_backend__call_gen__ModuleInfo_17, ll_backend__call_gen__PredId_11);
    }
#line 4382 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeInfo_73_73 = (MR_Word) &ll_backend__call_gen_scalar_common_1[0];
#line 686 "call_gen.m"
    {
#line 686 "call_gen.m"
      backend_libs__builtin_ops__translate_builtin_5_p_0(ll_backend__call_gen__TypeInfo_73_73, ll_backend__call_gen__ModuleName_18, ll_backend__call_gen__PredName_19, ll_backend__call_gen__ProcId_12, ll_backend__call_gen__Args_13, &ll_backend__call_gen__SimpleCode_20);
    }
#line 708 "call_gen.m"
#line 708 "call_gen.m"
    switch (ll_backend__call_gen__CodeModel_10) {
#line 708 "call_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 708 "call_gen.m"
      case (MR_Integer) 0:
#line 689 "call_gen.m"
        {
#line 693 "call_gen.m"
#line 693 "call_gen.m"
          switch (MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_20)) {
#line 693 "call_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 693 "call_gen.m"
            case (MR_Integer) 0:
#line 691 "call_gen.m"
              {
#line 691 "call_gen.m"
                MR_Word ll_backend__call_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
#line 691 "call_gen.m"
                MR_Word ll_backend__call_gen__AssignExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 1)));

#line 737 "call_gen.m"
                {
#line 737 "call_gen.m"
                  ll_backend__call_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, ll_backend__call_gen__Var_21);
                }
#line 737 "call_gen.m"
                if (ll_backend__call_gen__succeeded)
#line 738 "call_gen.m"
                  {
#line 738 "call_gen.m"
                    MR_Word ll_backend__call_gen__Rval_87;

#line 738 "call_gen.m"
                    {
#line 738 "call_gen.m"
                      ll_backend__call_gen__Rval_87 = ll_backend__call_gen__convert_simple_expr_1_f_0(ll_backend__call_gen__AssignExpr_22);
                    }
#line 739 "call_gen.m"
                    {
#line 739 "call_gen.m"
                      ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__call_gen__Var_21, ll_backend__call_gen__Rval_87, ll_backend__call_gen__Code_14, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
                    }
#line 738 "call_gen.m"
                  }
#line 737 "call_gen.m"
                else
#line 741 "call_gen.m"
                  {
#line 741 "call_gen.m"
                    {
#line 741 "call_gen.m"
                      *ll_backend__call_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
#line 741 "call_gen.m"
                    *ll_backend__call_gen__STATE_VARIABLE_CLD_45 = ll_backend__call_gen__STATE_VARIABLE_CLD_0_44;
#line 741 "call_gen.m"
                  }
#line 691 "call_gen.m"
              }
#line 693 "call_gen.m"
              break;
#line 693 "call_gen.m"
            case (MR_Integer) 1:
#line 694 "call_gen.m"
              {
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__TypeCtorInfo_74_74;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__AddrVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__ValueVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 1)));
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__AddrVarCode_25;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__AddrRval_26;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__ValueVarCode_27;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__ValueRval_28;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__StoreInstr_29;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__StoreCode_30;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_66_66;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__V_68_68;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__V_69_69;
#line 694 "call_gen.m"
                MR_Word ll_backend__call_gen__V_71_71;

#line 695 "call_gen.m"
                {
#line 695 "call_gen.m"
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__AddrVar_23, &ll_backend__call_gen__AddrVarCode_25, &ll_backend__call_gen__AddrRval_26, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, &ll_backend__call_gen__STATE_VARIABLE_CLD_66_66);
                }
#line 696 "call_gen.m"
                {
#line 696 "call_gen.m"
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__call_gen__ValueVar_24, &ll_backend__call_gen__ValueVarCode_27, &ll_backend__call_gen__ValueRval_28, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_66_66, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
                }
#line 697 "call_gen.m"
                {
#line 697 "call_gen.m"
                  ll_backend__call_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 697 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_69_69, 1) = ((MR_Box) (ll_backend__call_gen__AddrRval_26));
#line 697 "call_gen.m"
                }
#line 697 "call_gen.m"
                {
#line 697 "call_gen.m"
                  ll_backend__call_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 697 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 697 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 1) = ((MR_Box) (ll_backend__call_gen__V_69_69));
#line 697 "call_gen.m"
                  MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 2) = ((MR_Box) (ll_backend__call_gen__ValueRval_28));
#line 697 "call_gen.m"
                }
#line 697 "call_gen.m"
                {
#line 697 "call_gen.m"
                  ll_backend__call_gen__StoreInstr_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 697 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_29, 0) = ((MR_Box) (ll_backend__call_gen__V_68_68));
#line 697 "call_gen.m"
                  MR_hl_field(MR_mktag(0), ll_backend__call_gen__StoreInstr_29, 1) = ((MR_Box) ((MR_String) ""));
#line 697 "call_gen.m"
                }
#line 4526 "ll_backend.call_gen.c"
                ll_backend__call_gen__TypeCtorInfo_74_74 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 698 "call_gen.m"
                {
#line 698 "call_gen.m"
                  ll_backend__call_gen__StoreCode_30 = mercury__cord__singleton_1_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ((MR_Box) (ll_backend__call_gen__StoreInstr_29)));
                }
#line 699 "call_gen.m"
                {
#line 699 "call_gen.m"
                  ll_backend__call_gen__V_71_71 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ll_backend__call_gen__ValueVarCode_27, ll_backend__call_gen__StoreCode_30);
                }
#line 699 "call_gen.m"
                {
#line 699 "call_gen.m"
                  *ll_backend__call_gen__Code_14 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_74_74, ll_backend__call_gen__AddrVarCode_25, ll_backend__call_gen__V_71_71);
                }
#line 694 "call_gen.m"
              }
#line 693 "call_gen.m"
              break;
#line 693 "call_gen.m"
            case (MR_Integer) 2:
#line 701 "call_gen.m"
              {
#line 702 "call_gen.m"
                {
#line 702 "call_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_det builtin predicate");
#line 702 "call_gen.m"
                  return;
                }
#line 701 "call_gen.m"
              }
#line 693 "call_gen.m"
              break;
#line 693 "call_gen.m"
            case (MR_Integer) 3:
#line 704 "call_gen.m"
              {
#line 704 "call_gen.m"
                MR_Word ll_backend__call_gen__DefinedVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
#line 705 "call_gen.m"
                MR_Box ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45;

#line 705 "call_gen.m"
                {
#line 705 "call_gen.m"
                  mercury__list__foldl_4_p_0(ll_backend__call_gen__TypeInfo_73_73, (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, (MR_Word) &ll_backend__call_gen_scalar_common_2[1], ll_backend__call_gen__DefinedVars_32, ((MR_Box) (ll_backend__call_gen__STATE_VARIABLE_CLD_0_44)), &ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45);
                }
#line 705 "call_gen.m"
                *ll_backend__call_gen__STATE_VARIABLE_CLD_45 = ((MR_Word) ll_backend__call_gen__conv1_STATE_VARIABLE_CLD_45);
#line 706 "call_gen.m"
                {
#line 706 "call_gen.m"
                  *ll_backend__call_gen__Code_14 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
#line 704 "call_gen.m"
              }
#line 693 "call_gen.m"
              break;
#line 693 "call_gen.m"
          }
#line 689 "call_gen.m"
          *ll_backend__call_gen__STATE_VARIABLE_CI_43 = ll_backend__call_gen__STATE_VARIABLE_CI_0_42;
#line 689 "call_gen.m"
        }
#line 708 "call_gen.m"
        break;
#line 708 "call_gen.m"
      case (MR_Integer) 2:
#line 729 "call_gen.m"
        {
#line 730 "call_gen.m"
          {
#line 730 "call_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "model_non builtin predicate");
#line 730 "call_gen.m"
            return;
          }
#line 729 "call_gen.m"
        }
#line 708 "call_gen.m"
        break;
#line 708 "call_gen.m"
      case (MR_Integer) 1:
#line 715 "call_gen.m"
#line 715 "call_gen.m"
        switch (MR_tag((MR_Word) ll_backend__call_gen__SimpleCode_20)) {
#line 715 "call_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 715 "call_gen.m"
          case (MR_Integer) 0:
#line 716 "call_gen.m"
            {
#line 717 "call_gen.m"
              {
#line 717 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 717 "call_gen.m"
                return;
              }
#line 716 "call_gen.m"
            }
#line 715 "call_gen.m"
            break;
#line 715 "call_gen.m"
          case (MR_Integer) 1:
#line 720 "call_gen.m"
            {
#line 721 "call_gen.m"
              {
#line 721 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 721 "call_gen.m"
                return;
              }
#line 720 "call_gen.m"
            }
#line 715 "call_gen.m"
            break;
#line 715 "call_gen.m"
          case (MR_Integer) 2:
#line 711 "call_gen.m"
            {
#line 711 "call_gen.m"
              MR_Word ll_backend__call_gen__TestExpr_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__call_gen__SimpleCode_20, (MR_Integer) 0)));
#line 711 "call_gen.m"
              MR_Word ll_backend__call_gen__Rval_34;
#line 711 "call_gen.m"
              MR_Word ll_backend__call_gen__ArgCode_35;
#line 711 "call_gen.m"
              MR_Word ll_backend__call_gen__TestCode_36;
#line 711 "call_gen.m"
              MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_58_58;

#line 712 "call_gen.m"
              {
#line 712 "call_gen.m"
                ll_backend__call_gen__generate_simple_test_6_p_0(ll_backend__call_gen__TestExpr_33, &ll_backend__call_gen__Rval_34, &ll_backend__call_gen__ArgCode_35, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CLD_0_44, &ll_backend__call_gen__STATE_VARIABLE_CLD_58_58);
              }
#line 713 "call_gen.m"
              {
#line 713 "call_gen.m"
                ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__call_gen__Rval_34, &ll_backend__call_gen__TestCode_36, ll_backend__call_gen__STATE_VARIABLE_CI_0_42, ll_backend__call_gen__STATE_VARIABLE_CI_43, ll_backend__call_gen__STATE_VARIABLE_CLD_58_58, ll_backend__call_gen__STATE_VARIABLE_CLD_45);
              }
#line 714 "call_gen.m"
              {
#line 714 "call_gen.m"
                *ll_backend__call_gen__Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__call_gen__ArgCode_35, ll_backend__call_gen__TestCode_36);
              }
#line 711 "call_gen.m"
            }
#line 715 "call_gen.m"
            break;
#line 715 "call_gen.m"
          case (MR_Integer) 3:
#line 724 "call_gen.m"
            {
#line 725 "call_gen.m"
              {
#line 725 "call_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.call_gen", (MR_String) "predicate \140ll_backend.call_gen.generate_builtin\'/9", (MR_String) "malformed model_semi builtin predicate");
#line 725 "call_gen.m"
                return;
              }
#line 724 "call_gen.m"
            }
#line 715 "call_gen.m"
            break;
#line 715 "call_gen.m"
        }
#line 708 "call_gen.m"
        break;
#line 708 "call_gen.m"
    }
#line 682 "call_gen.m"
  }
#line 46 "call_gen.m"
}

#line 41 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_generic_call_12_p_0(
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__OuterCodeModel_13,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__GenericCall_14,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__Args_15,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__Modes_16,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__MaybeRegTypes_17,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__Det_18,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_19,
#line 41 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_20,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_39,
#line 41 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_40,
#line 41 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_41,
#line 41 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_42)
#line 41 "call_gen.m"
{
#line 186 "call_gen.m"
  {
#line 186 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;

#line 186 "call_gen.m"
    {
#line 186 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_49_93_95_48_12_p_0(ll_backend__call_gen__GenericCall_14, ll_backend__call_gen__Args_15, ll_backend__call_gen__Modes_16, ll_backend__call_gen__MaybeRegTypes_17, ll_backend__call_gen__Det_18, ll_backend__call_gen__GoalInfo_19, ll_backend__call_gen__Code_20, ll_backend__call_gen__STATE_VARIABLE_CI_0_39, ll_backend__call_gen__STATE_VARIABLE_CI_40, ll_backend__call_gen__STATE_VARIABLE_CLD_0_41, ll_backend__call_gen__STATE_VARIABLE_CLD_42);
    }
#line 186 "call_gen.m"
  }
#line 41 "call_gen.m"
}

#line 37 "call_gen.m"
void MR_CALL 
ll_backend__call_gen__generate_call_10_p_0(
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__CodeModel_11,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__PredId_12,
#line 37 "call_gen.m"
  MR_Integer ll_backend__call_gen__ProcId_13,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__ArgVars_14,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__GoalInfo_15,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__Code_16,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_0_48,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CI_49,
#line 37 "call_gen.m"
  MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_0_50,
#line 37 "call_gen.m"
  MR_Word * ll_backend__call_gen__STATE_VARIABLE_CLD_51)
#line 37 "call_gen.m"
{
#line 100 "call_gen.m"
  {
#line 100 "call_gen.m"
    MR_bool ll_backend__call_gen__succeeded;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__TypeCtorInfo_92_92;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgInfo_19;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__ArgsInfos_20;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__LiveVals_21;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__SetupCode_22;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__CallModel_24;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceResetCode_25;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__ModuleInfo_26;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__Address_27;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLabel_28;
#line 100 "call_gen.m"
    MR_String ll_backend__call_gen__CallComment_29;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__Context_30;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__GoalId_31;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeContainingGoalMap_32;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeGoalPath_35;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__CallCode_36;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnLiveLvalues_37;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMap_38;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__InstMapDelta_39;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__ReturnInstMap_40;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__AfterReturn_41;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__FailHandlingCode_42;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_52_52;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_53_53;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_54_54;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_55_55;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_57_57;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_58_58;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_59_59;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_60_60;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_62_62;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_63_63;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_64_64;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_65_65;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_66_66;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_67_67;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__V_68_68;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_71_71;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CI_72_72;
#line 100 "call_gen.m"
    MR_Word ll_backend__call_gen__STATE_VARIABLE_CLD_73_73;
#line 108 "call_gen.m"
    MR_Word ll_backend__call_gen__NonLiveOutputs_23;
#line 153 "call_gen.m"
    MR_Word ll_backend__call_gen__TraceInfo_44;
#line 154 "call_gen.m"
    MR_Word ll_backend__call_gen__MaybeTraceInfo_43;

#line 102 "call_gen.m"
    {
#line 102 "call_gen.m"
      ll_backend__call_gen__ArgInfo_19 = ll_backend__code_info__get_pred_proc_arginfo_3_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_0_48, ll_backend__call_gen__PredId_12, ll_backend__call_gen__ProcId_13);
    }
#line 103 "call_gen.m"
    {
#line 103 "call_gen.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__call_gen_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__call_gen__ArgVars_14, ll_backend__call_gen__ArgInfo_19, &ll_backend__call_gen__ArgsInfos_20);
    }
#line 107 "call_gen.m"
    {
#line 107 "call_gen.m"
      ll_backend__code_loc_dep__setup_call_7_p_0(ll_backend__call_gen__GoalInfo_15, ll_backend__call_gen__ArgsInfos_20, &ll_backend__call_gen__LiveVals_21, &ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__STATE_VARIABLE_CI_0_48, ll_backend__call_gen__STATE_VARIABLE_CLD_0_50, &ll_backend__call_gen__STATE_VARIABLE_CLD_52_52);
    }
#line 108 "call_gen.m"
    {
#line 108 "call_gen.m"
      ll_backend__call_gen__kill_dead_input_vars_5_p_0(ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__NonLiveOutputs_23, ll_backend__call_gen__STATE_VARIABLE_CLD_52_52, &ll_backend__call_gen__STATE_VARIABLE_CLD_53_53);
    }
#line 111 "call_gen.m"
    {
#line 111 "call_gen.m"
      ll_backend__call_gen__prepare_for_call_8_p_0(ll_backend__call_gen__CodeModel_11, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__CallModel_24, &ll_backend__call_gen__TraceResetCode_25, ll_backend__call_gen__STATE_VARIABLE_CI_0_48, &ll_backend__call_gen__STATE_VARIABLE_CI_54_54, ll_backend__call_gen__STATE_VARIABLE_CLD_53_53, &ll_backend__call_gen__STATE_VARIABLE_CLD_55_55);
    }
#line 116 "call_gen.m"
    {
#line 116 "call_gen.m"
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_54_54, &ll_backend__call_gen__ModuleInfo_26);
    }
#line 117 "call_gen.m"
    {
#line 117 "call_gen.m"
      ll_backend__call_gen__Address_27 = ll_backend__code_info__make_proc_entry_label_5_f_0(ll_backend__call_gen__STATE_VARIABLE_CI_54_54, ll_backend__call_gen__ModuleInfo_26, ll_backend__call_gen__PredId_12, ll_backend__call_gen__ProcId_13, (MR_Integer) 1);
    }
#line 118 "call_gen.m"
    {
#line 118 "call_gen.m"
      ll_backend__code_info__get_next_label_3_p_0(&ll_backend__call_gen__ReturnLabel_28, ll_backend__call_gen__STATE_VARIABLE_CI_54_54, &ll_backend__call_gen__STATE_VARIABLE_CI_57_57);
    }
#line 119 "call_gen.m"
    {
#line 119 "call_gen.m"
      ll_backend__call_gen__call_comment_4_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_57_57, ll_backend__call_gen__PredId_12, ll_backend__call_gen__CodeModel_11, &ll_backend__call_gen__CallComment_29);
    }
#line 120 "call_gen.m"
    {
#line 120 "call_gen.m"
      ll_backend__call_gen__Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
#line 121 "call_gen.m"
    {
#line 121 "call_gen.m"
      ll_backend__call_gen__GoalId_31 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
#line 122 "call_gen.m"
    {
#line 122 "call_gen.m"
      ll_backend__code_info__get_maybe_containing_goal_map_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_57_57, &ll_backend__call_gen__MaybeContainingGoalMap_32);
    }
#line 127 "call_gen.m"
    if ((ll_backend__call_gen__MaybeContainingGoalMap_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 129 "call_gen.m"
      ll_backend__call_gen__MaybeGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 127 "call_gen.m"
    else
#line 124 "call_gen.m"
      {
#line 124 "call_gen.m"
        MR_Word ll_backend__call_gen__ContainingGoalMap_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeContainingGoalMap_32, (MR_Integer) 0)));
#line 124 "call_gen.m"
        MR_Word ll_backend__call_gen__GoalPath_34;

#line 125 "call_gen.m"
        {
#line 125 "call_gen.m"
          ll_backend__call_gen__GoalPath_34 = mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(ll_backend__call_gen__ContainingGoalMap_33, ll_backend__call_gen__GoalId_31);
        }
#line 126 "call_gen.m"
        {
#line 126 "call_gen.m"
          ll_backend__call_gen__MaybeGoalPath_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 126 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeGoalPath_35, 0) = ((MR_Box) (ll_backend__call_gen__GoalPath_34));
#line 126 "call_gen.m"
        }
#line 124 "call_gen.m"
      }
#line 4955 "ll_backend.call_gen.c"
    ll_backend__call_gen__TypeCtorInfo_92_92 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 132 "call_gen.m"
    {
#line 132 "call_gen.m"
      ll_backend__call_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 132 "call_gen.m"
      MR_hl_field(MR_mktag(2), ll_backend__call_gen__V_60_60, 0) = ((MR_Box) (ll_backend__call_gen__LiveVals_21));
#line 132 "call_gen.m"
    }
#line 132 "call_gen.m"
    {
#line 132 "call_gen.m"
      ll_backend__call_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 132 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_59_59, 0) = ((MR_Box) (ll_backend__call_gen__V_60_60));
#line 132 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_59_59, 1) = ((MR_Box) ((MR_String) ""));
#line 132 "call_gen.m"
    }
#line 133 "call_gen.m"
    {
#line 133 "call_gen.m"
      ll_backend__call_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_65_65, 0) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_28));
#line 133 "call_gen.m"
    }
#line 135 "call_gen.m"
    {
#line 135 "call_gen.m"
      ll_backend__call_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 135 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_68_68, 1) = ((MR_Box) (ll_backend__call_gen__ReturnLabel_28));
#line 135 "call_gen.m"
    }
#line 135 "call_gen.m"
    {
#line 135 "call_gen.m"
      ll_backend__call_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 135 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_67_67, 0) = ((MR_Box) (ll_backend__call_gen__V_68_68));
#line 135 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_67_67, 1) = ((MR_Box) ((MR_String) "continuation label"));
#line 135 "call_gen.m"
    }
#line 136 "call_gen.m"
    {
#line 136 "call_gen.m"
      ll_backend__call_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 136 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_66_66, 0) = ((MR_Box) (ll_backend__call_gen__V_67_67));
#line 136 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "call_gen.m"
    }
#line 140 "call_gen.m"
    {
#line 140 "call_gen.m"
      ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_55_55, &ll_backend__call_gen__InstMap_38);
    }
#line 141 "call_gen.m"
    {
#line 141 "call_gen.m"
      ll_backend__call_gen__InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__call_gen__GoalInfo_15);
    }
#line 142 "call_gen.m"
    {
#line 142 "call_gen.m"
      hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__call_gen__InstMap_38, ll_backend__call_gen__InstMapDelta_39, &ll_backend__call_gen__ReturnInstMap_40);
    }
#line 145 "call_gen.m"
    {
#line 145 "call_gen.m"
      ll_backend__call_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_114_101_116_117_114_110_95_95_91_51_93_95_48_8_p_0(ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalInfo_15, ll_backend__call_gen__ReturnInstMap_40, &ll_backend__call_gen__ReturnLiveLvalues_37, ll_backend__call_gen__STATE_VARIABLE_CI_57_57, ll_backend__call_gen__STATE_VARIABLE_CLD_55_55, &ll_backend__call_gen__STATE_VARIABLE_CLD_71_71);
    }
#line 133 "call_gen.m"
    {
#line 133 "call_gen.m"
      ll_backend__call_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 1) = ((MR_Box) (ll_backend__call_gen__Address_27));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 2) = ((MR_Box) (ll_backend__call_gen__V_65_65));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 3) = ((MR_Box) (ll_backend__call_gen__ReturnLiveLvalues_37));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 4) = ((MR_Box) (ll_backend__call_gen__Context_30));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 5) = ((MR_Box) (ll_backend__call_gen__MaybeGoalPath_35));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_64_64, 6) = ((MR_Box) (ll_backend__call_gen__CallModel_24));
#line 133 "call_gen.m"
    }
#line 133 "call_gen.m"
    {
#line 133 "call_gen.m"
      ll_backend__call_gen__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_63_63, 0) = ((MR_Box) (ll_backend__call_gen__V_64_64));
#line 133 "call_gen.m"
      MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_63_63, 1) = ((MR_Box) (ll_backend__call_gen__CallComment_29));
#line 133 "call_gen.m"
    }
#line 134 "call_gen.m"
    {
#line 134 "call_gen.m"
      ll_backend__call_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_62_62, 0) = ((MR_Box) (ll_backend__call_gen__V_63_63));
#line 134 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_62_62, 1) = ((MR_Box) (ll_backend__call_gen__V_66_66));
#line 134 "call_gen.m"
    }
#line 132 "call_gen.m"
    {
#line 132 "call_gen.m"
      ll_backend__call_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 132 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_58_58, 0) = ((MR_Box) (ll_backend__call_gen__V_59_59));
#line 132 "call_gen.m"
      MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_58_58, 1) = ((MR_Box) (ll_backend__call_gen__V_62_62));
#line 132 "call_gen.m"
    }
#line 131 "call_gen.m"
    {
#line 131 "call_gen.m"
      ll_backend__call_gen__CallCode_36 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__V_58_58);
    }
#line 149 "call_gen.m"
    {
#line 149 "call_gen.m"
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CLD_71_71, &ll_backend__call_gen__AfterReturn_41);
    }
#line 150 "call_gen.m"
    {
#line 150 "call_gen.m"
      ll_backend__call_gen__handle_call_failure_6_p_0(ll_backend__call_gen__CodeModel_11, ll_backend__call_gen__GoalInfo_15, &ll_backend__call_gen__FailHandlingCode_42, ll_backend__call_gen__STATE_VARIABLE_CI_57_57, &ll_backend__call_gen__STATE_VARIABLE_CI_72_72, ll_backend__call_gen__STATE_VARIABLE_CLD_71_71);
    }
#line 151 "call_gen.m"
    {
#line 151 "call_gen.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__call_gen__AfterReturn_41, ll_backend__call_gen__STATE_VARIABLE_CI_72_72, &ll_backend__call_gen__STATE_VARIABLE_CLD_73_73);
    }
#line 154 "call_gen.m"
    {
#line 154 "call_gen.m"
      ll_backend__call_gen__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(ll_backend__call_gen__GoalInfo_15, (MR_Integer) 10);
    }
#line 154 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 154 "call_gen.m"
      {
#line 155 "call_gen.m"
        {
#line 155 "call_gen.m"
          ll_backend__code_info__get_maybe_trace_info_2_p_0(ll_backend__call_gen__STATE_VARIABLE_CI_72_72, &ll_backend__call_gen__MaybeTraceInfo_43);
        }
#line 156 "call_gen.m"
        ll_backend__call_gen__succeeded = ((MR_tag((MR_Word) ll_backend__call_gen__MaybeTraceInfo_43)) == (MR_mktag((MR_Integer) 1)));
#line 156 "call_gen.m"
        if (ll_backend__call_gen__succeeded)
#line 156 "call_gen.m"
          ll_backend__call_gen__TraceInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__call_gen__MaybeTraceInfo_43, (MR_Integer) 0)));
#line 154 "call_gen.m"
      }
#line 153 "call_gen.m"
    if (ll_backend__call_gen__succeeded)
#line 159 "call_gen.m"
      {
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__TraceTailRecResetAndEventCode_45;
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__TailRecLabel_46;
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__JumpCode_47;
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__V_77_77;
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__V_81_81;
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__V_82_82;
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__V_83_83;
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__V_84_84;
#line 159 "call_gen.m"
        MR_Word ll_backend__call_gen__V_87_87;

#line 158 "call_gen.m"
        {
#line 158 "call_gen.m"
          ll_backend__trace_gen__generate_tailrec_event_code_10_p_0(ll_backend__call_gen__TraceInfo_44, ll_backend__call_gen__ArgsInfos_20, ll_backend__call_gen__GoalId_31, ll_backend__call_gen__Context_30, &ll_backend__call_gen__TraceTailRecResetAndEventCode_45, &ll_backend__call_gen__TailRecLabel_46, ll_backend__call_gen__STATE_VARIABLE_CI_72_72, ll_backend__call_gen__STATE_VARIABLE_CI_49, ll_backend__call_gen__STATE_VARIABLE_CLD_73_73, ll_backend__call_gen__STATE_VARIABLE_CLD_51);
        }
#line 162 "call_gen.m"
        {
#line 162 "call_gen.m"
          ll_backend__call_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 162 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_84_84, 0) = ((MR_Box) (ll_backend__call_gen__TailRecLabel_46));
#line 162 "call_gen.m"
        }
#line 162 "call_gen.m"
        {
#line 162 "call_gen.m"
          ll_backend__call_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 162 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 162 "call_gen.m"
          MR_hl_field(MR_mktag(3), ll_backend__call_gen__V_83_83, 1) = ((MR_Box) (ll_backend__call_gen__V_84_84));
#line 162 "call_gen.m"
        }
#line 162 "call_gen.m"
        {
#line 162 "call_gen.m"
          ll_backend__call_gen__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 162 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_82_82, 0) = ((MR_Box) (ll_backend__call_gen__V_83_83));
#line 162 "call_gen.m"
          MR_hl_field(MR_mktag(0), ll_backend__call_gen__V_82_82, 1) = ((MR_Box) ((MR_String) "tail recursive jump"));
#line 162 "call_gen.m"
        }
#line 164 "call_gen.m"
        {
#line 164 "call_gen.m"
          ll_backend__call_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_81_81, 0) = ((MR_Box) (ll_backend__call_gen__V_82_82));
#line 164 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "call_gen.m"
        }
#line 161 "call_gen.m"
        {
#line 161 "call_gen.m"
          ll_backend__call_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 0) = ((MR_Box) (ll_backend__call_gen__V_59_59));
#line 161 "call_gen.m"
          MR_hl_field(MR_mktag(1), ll_backend__call_gen__V_77_77, 1) = ((MR_Box) (ll_backend__call_gen__V_81_81));
#line 161 "call_gen.m"
        }
#line 160 "call_gen.m"
        {
#line 160 "call_gen.m"
          ll_backend__call_gen__JumpCode_47 = mercury__cord__from_list_1_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__V_77_77);
        }
#line 165 "call_gen.m"
        {
#line 165 "call_gen.m"
          ll_backend__call_gen__V_87_87 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__TraceTailRecResetAndEventCode_45, ll_backend__call_gen__JumpCode_47);
        }
#line 165 "call_gen.m"
        {
#line 165 "call_gen.m"
          *ll_backend__call_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__V_87_87);
        }
#line 159 "call_gen.m"
      }
#line 153 "call_gen.m"
    else
#line 167 "call_gen.m"
      {
#line 167 "call_gen.m"
        MR_Word ll_backend__call_gen__V_88_88;
#line 167 "call_gen.m"
        MR_Word ll_backend__call_gen__V_89_89;

#line 167 "call_gen.m"
        {
#line 167 "call_gen.m"
          ll_backend__call_gen__V_89_89 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__CallCode_36, ll_backend__call_gen__FailHandlingCode_42);
        }
#line 167 "call_gen.m"
        {
#line 167 "call_gen.m"
          ll_backend__call_gen__V_88_88 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__TraceResetCode_25, ll_backend__call_gen__V_89_89);
        }
#line 167 "call_gen.m"
        {
#line 167 "call_gen.m"
          *ll_backend__call_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__call_gen__TypeCtorInfo_92_92, ll_backend__call_gen__SetupCode_22, ll_backend__call_gen__V_88_88);
        }
#line 167 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CLD_51 = ll_backend__call_gen__STATE_VARIABLE_CLD_73_73;
#line 167 "call_gen.m"
        *ll_backend__call_gen__STATE_VARIABLE_CI_49 = ll_backend__call_gen__STATE_VARIABLE_CI_72_72;
#line 167 "call_gen.m"
      }
#line 100 "call_gen.m"
  }
#line 37 "call_gen.m"
}

void mercury__ll_backend__call_gen__init(void)
{
}

void mercury__ll_backend__call_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__call_gen__ll_backend__call_gen__type_ctor_info_known_call_variant_0);
}

void mercury__ll_backend__call_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.call_gen. */
