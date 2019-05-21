/*
** Automatically generated from `ml_simplify_switch.m'
** by the Mercury compiler,
** version rotd-2018-01-23
** configured for x86_64-pc-linux-gnu.
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


// :- module ml_backend.ml_simplify_switch.
// :- implementation.

/*
INIT mercury__ml_backend__ml_simplify_switch__init
ENDINIT
*/

#include "ml_backend.ml_simplify_switch.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.mark_tail_calls.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
  MR_Word Case_6,
  MR_Integer STATE_VARIABLE_Min_0_12,
  MR_Integer * STATE_VARIABLE_Min_13,
  MR_Integer STATE_VARIABLE_Max_0_14,
  MR_Integer * STATE_VARIABLE_Max_15);

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Min_0_2,
  MR_Integer * STATE_VARIABLE_Min_3,
  MR_Integer STATE_VARIABLE_Max_0_4,
  MR_Integer * STATE_VARIABLE_Max_5);

static void MR_CALL 
ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_11_p_0(
  MR_Word Cases_12,
  MR_Word Default_13,
  MR_Integer FirstVal_14,
  MR_Integer LastVal_15,
  MR_Word NeedRangeCheck_16,
  MR_Word Rval_18,
  MR_Word Context_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
  MR_Integer ThisVal_6,
  MR_Integer LastVal_7,
  MR_Word CaseLabelsMap_8,
  MR_String DefaultLabel_9);

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_3,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
  MR_String ThisLabel_5,
  MR_Word Cond_6,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_14,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_15);

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
  MR_Integer Min_6,
  MR_Integer Max_7,
  MR_String ThisLabel_8,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_10,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_11);

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Default_2,
  MR_Word HeadVar__3_3,
  MR_Word Context_4);

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchRval_2);

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
  MR_Word Range_8,
  MR_Word Cases_9,
  MR_Word Default_10,
  MR_Integer ReqDensity_11,
  MR_Integer * FirstVal_12,
  MR_Integer * LastVal_13,
  MR_Word * NeedRangeCheck_14);

static void MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
  MR_Word Cases_3,
  MR_Integer ReqDensity_4);

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_1_f_0(
  MR_Word MLDSType_3);

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_1[4][3];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_2[2][8];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[4][2];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[1][7];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[5][1];




static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_2[0])),
    ((MR_Box) (ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_2[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "case of dense switch"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "branch to end of dense switch"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "switch (using dense jump table)"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "End of dense switch"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_simplify_switch__ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001)),
  (MR_String) "ml_backend.ml_simplify_switch",
  (MR_String) "case_labels_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_Min_3;
    MR_Integer conv0_STATE_VARIABLE_Max_5;

    ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_STATE_VARIABLE_Min_3, ((MR_Integer) wrapper_arg_4), &conv0_STATE_VARIABLE_Max_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Min_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Max_5));
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
  MR_Word Case_6,
  MR_Integer STATE_VARIABLE_Min_0_12,
  MR_Integer * STATE_VARIABLE_Min_13,
  MR_Integer STATE_VARIABLE_Max_0_14,
  MR_Integer * STATE_VARIABLE_Max_15)
{
  {
    MR_Word TypeCtorInfo_27_27;
    MR_Word FirstCond_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_6, (MR_Integer) 0)));
    MR_Word LaterConds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_6, (MR_Integer) 1)));
    MR_Integer STATE_VARIABLE_Min_16_16;
    MR_Integer STATE_VARIABLE_Max_17_17;
    MR_Word _CaseStmt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_6, (MR_Integer) 2)));
    MR_Box conv3_STATE_VARIABLE_Min_13;
    MR_Box conv2_STATE_VARIABLE_Max_15;

    ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(FirstCond_9, STATE_VARIABLE_Min_0_12, &STATE_VARIABLE_Min_16_16, STATE_VARIABLE_Max_0_14, &STATE_VARIABLE_Max_17_17);
    TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, TypeCtorInfo_27_27, TypeCtorInfo_27_27, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[3], LaterConds_10, ((MR_Box) (STATE_VARIABLE_Min_16_16)), &conv3_STATE_VARIABLE_Min_13, ((MR_Box) (STATE_VARIABLE_Max_17_17)), &conv2_STATE_VARIABLE_Max_15);
    *STATE_VARIABLE_Min_13 = ((MR_Integer) conv3_STATE_VARIABLE_Min_13);
    *STATE_VARIABLE_Max_15 = ((MR_Integer) conv2_STATE_VARIABLE_Max_15);
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Min_0_2,
  MR_Integer * STATE_VARIABLE_Min_3,
  MR_Integer STATE_VARIABLE_Max_0_4,
  MR_Integer * STATE_VARIABLE_Max_5)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word MinRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word MaxRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer RvalMin_23;
      MR_Integer RvalMax_24;
      MR_Word Var_29;
      MR_Word Var_30;

      succeeded = ((((MR_tag((MR_Word) MinRval_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MinRval_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), MinRval_19, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          RvalMin_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_29, (MR_Integer) 0)));
          succeeded = ((((MR_tag((MR_Word) MaxRval_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MaxRval_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), MaxRval_20, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
              RvalMax_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_30, (MR_Integer) 0)));
          }
        }
      }
      if (succeeded)
      {
        mercury__int__min_3_p_0(RvalMin_23, STATE_VARIABLE_Min_0_2, STATE_VARIABLE_Min_3);
        mercury__int__max_3_p_0(RvalMax_24, STATE_VARIABLE_Max_0_4, STATE_VARIABLE_Max_5);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
          return;
        }
      }
    }
    else
    {
      MR_Word Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer Val_9;
      MR_Word Var_14;

      succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
          Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_14, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        mercury__int__min_3_p_0(Val_9, STATE_VARIABLE_Min_0_2, STATE_VARIABLE_Min_3);
        mercury__int__max_3_p_0(Val_9, STATE_VARIABLE_Max_0_4, STATE_VARIABLE_Max_5);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
          return;
        }
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word Globals_8;
    MR_Word Rval_10;
    MR_Word Range_11;
    MR_Word Cases_12;
    MR_Word Default_13;
    MR_Word Context_14;
    MR_Integer ReqDensity_17;
    MR_Word TypeCtorInfo_65_65;
    MR_Word Type_9;
    MR_Integer NumCases_15;
    MR_Integer DenseSize_16;
    MR_Word Var_33;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(STATE_VARIABLE_Info_0_30, &Globals_8);
    succeeded = ((((MR_tag((MR_Word) Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1)));
      Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2)));
      Range_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3)));
      Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4)));
      Default_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 5)));
      Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 6)));
      switch (MR_tag((MR_Word) Type_9)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Type_9)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 5:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 0)))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word CtorCat_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 2)));
                MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 1)));
                MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_9, (MR_Integer) 3)));

                if (((MR_tag((MR_Word) CtorCat_79)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorCat_79, (MR_Integer) 0)));

                  if ((Var_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                    succeeded = MR_TRUE;
                  else
                  if (((MR_tag((MR_Word) Var_92)) == (MR_mktag((MR_Integer) 1))))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                }
                else
                if (((MR_tag((MR_Word) CtorCat_79)) == (MR_mktag((MR_Integer) 2))))
                {
                  MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorCat_79, (MR_Integer) 0)));

                  succeeded = (Var_93 == (MR_Integer) 0);
                }
                else
                  succeeded = MR_FALSE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        Var_33 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(Globals_8);
        succeeded = (Var_33 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_34 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(Globals_8);
          succeeded = (Var_34 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_35 = (MR_Integer) 329;
            Var_36 = (MR_Integer) 1;
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_35, Var_36);
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeCtorInfo_65_65 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
            mercury__list__length_2_p_0(TypeCtorInfo_65_65, Cases_12, &NumCases_15);
            Var_37 = (MR_Integer) 447;
            libs__globals__lookup_int_option_3_p_0(Globals_8, Var_37, &DenseSize_16);
            succeeded = (NumCases_15 >= DenseSize_16);
            if (succeeded)
            {
              Var_38 = (MR_Integer) 445;
              libs__globals__lookup_int_option_3_p_0(Globals_8, Var_38, &ReqDensity_17);
              succeeded = ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(Cases_12, ReqDensity_17);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Integer FirstVal_18;
      MR_Integer LastVal_19;
      MR_Word NeedRangeCheck_20;
      MR_Word Stmts_21;

      ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(Range_11, Cases_12, Default_13, ReqDensity_17, &FirstVal_18, &LastVal_19, &NeedRangeCheck_20);
      ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_11_p_0(Cases_12, Default_13, FirstVal_18, LastVal_19, NeedRangeCheck_20, Rval_10, Context_14, &Stmts_21, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        *Stmt_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmts_21));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_14));
      }
    }
    else
    {
      MR_Word Rval_56;
      MR_Word Cases_57;
      MR_Word Default_58;
      MR_Word Context_59;
      MR_Word Var_42;
      MR_Word Type_47;
      MR_Word _Range_22;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      succeeded = ((((MR_tag((MR_Word) Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Type_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1)));
        Rval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2)));
        _Range_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3)));
        Cases_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4)));
        Default_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 5)));
        Context_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 6)));
        Var_42 = ml_backend__ml_simplify_switch__is_integral_type_1_f_0(Type_47);
        succeeded = (Var_42 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_43 = ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(Globals_8);
          succeeded = (Var_43 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_44 = (MR_Integer) 329;
            Var_45 = (MR_Integer) 1;
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_44, Var_45);
          }
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
        *Stmt_6 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(Cases_57, Default_58, Rval_56, Context_59);
      else
      {
        MR_Word SingleCase_26;
        MR_Word Var_46;
        MR_Word Cases_49;
        MR_Word Default_50;
        MR_Word _Type_23;
        MR_Word _Rval_24;
        MR_Word _Context_25;
        MR_Word _Range_48;

        succeeded = ((((MR_tag((MR_Word) Stmt0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          _Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1)));
          _Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2)));
          _Range_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3)));
          Cases_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4)));
          Default_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 5)));
          _Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 6)));
          succeeded = (Default_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Cases_49)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              SingleCase_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases_49, (MR_Integer) 0)));
              Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cases_49, (MR_Integer) 1)));
              succeeded = (Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        }
        if (succeeded)
        {
          MR_Word _FirstCond_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCase_26, (MR_Integer) 0)));
          MR_Word _LaterConds_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCase_26, (MR_Integer) 1)));

          *Stmt_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), SingleCase_26, (MR_Integer) 2)));
        }
        else
          *Stmt_6 = Stmt0_5;
      }
      *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
    }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_11_p_0(
  MR_Word Cases_12,
  MR_Word Default_13,
  MR_Integer FirstVal_14,
  MR_Integer LastVal_15,
  MR_Word NeedRangeCheck_16,
  MR_Word Rval_18,
  MR_Word Context_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  {
    MR_bool succeeded = (FirstVal_14 == (MR_Integer) 0);
    MR_Word Index_22;
    MR_String EndLabel_23;
    MR_Word CaseLabelsMap0_24;
    MR_Word CaseLabelsMap_25;
    MR_Word CasesCode_26;
    MR_String DefaultLabel_27;
    MR_Word CaseLabels_28;
    MR_Word DefaultLabelStmt_29;
    MR_Word DefaultStmts_30;
    MR_Word StartComment_32;
    MR_Word DoJump_33;
    MR_Word EndLabelStmt_34;
    MR_Word EndComment_35;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Info_48_48;

    if (succeeded)
      Index_22 = Rval_18;
    else
    {
      MR_Word Var_45;
      MR_Word Var_46;

      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (FirstVal_14));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
      }
      {
        Index_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Index_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Index_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_simplify_switch_scalar_common_5[2])));
        MR_hl_field(MR_mktag(3), Index_22, 2) = ((MR_Box) (Rval_18));
        MR_hl_field(MR_mktag(3), Index_22, 3) = ((MR_Box) (Var_45));
      }
    }
    ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&EndLabel_23, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_47_47);
    mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &CaseLabelsMap0_24);
    ml_backend__ml_simplify_switch__generate_cases_7_p_0(Cases_12, EndLabel_23, CaseLabelsMap0_24, &CaseLabelsMap_25, &CasesCode_26, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
    ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&DefaultLabel_27, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_42);
    CaseLabels_28 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(FirstVal_14, LastVal_15, CaseLabelsMap_25, DefaultLabel_27);
    {
      DefaultLabelStmt_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), DefaultLabelStmt_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), DefaultLabelStmt_29, 1) = ((MR_Box) (DefaultLabel_27));
      MR_hl_field(MR_mktag(3), DefaultLabelStmt_29, 2) = ((MR_Box) (Context_19));
    }
    switch (MR_tag((MR_Word) Default_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Default_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                DefaultStmts_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DefaultStmts_30, 0) = ((MR_Box) (DefaultLabelStmt_29));
                MR_hl_field(MR_mktag(1), DefaultStmts_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                DefaultStmts_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DefaultStmts_30, 0) = ((MR_Box) (DefaultLabelStmt_29));
                MR_hl_field(MR_mktag(1), DefaultStmts_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DefaultCase_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_13, (MR_Integer) 0)));
          MR_Word Var_50;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (DefaultCase_31));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            DefaultStmts_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DefaultStmts_30, 0) = ((MR_Box) (DefaultLabelStmt_29));
            MR_hl_field(MR_mktag(1), DefaultStmts_30, 1) = ((MR_Box) (Var_50));
          }
        }
        break;
    }
    {
      StartComment_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartComment_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), StartComment_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_5[3])));
      MR_hl_field(MR_mktag(3), StartComment_32, 2) = ((MR_Box) (Context_19));
    }
    {
      DoJump_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), DoJump_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), DoJump_33, 1) = ((MR_Box) (Index_22));
      MR_hl_field(MR_mktag(3), DoJump_33, 2) = ((MR_Box) (CaseLabels_28));
      MR_hl_field(MR_mktag(3), DoJump_33, 3) = ((MR_Box) (Context_19));
    }
    {
      EndLabelStmt_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndLabelStmt_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), EndLabelStmt_34, 1) = ((MR_Box) (EndLabel_23));
      MR_hl_field(MR_mktag(3), EndLabelStmt_34, 2) = ((MR_Box) (Context_19));
    }
    {
      EndComment_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndComment_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), EndComment_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_5[4])));
      MR_hl_field(MR_mktag(3), EndComment_35, 2) = ((MR_Box) (Context_19));
    }
    switch (NeedRangeCheck_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_79_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;

          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (DoJump_33));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (CasesCode_26));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (StartComment_32));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (EndComment_35));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (EndLabelStmt_34));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
          }
          Var_60 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_79_79, DefaultStmts_30, Var_61);
          *Stmts_20 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_79_79, Var_58, Var_60);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Difference_36 = (LastVal_15 - FirstVal_14);
          MR_Word InRange_37;
          MR_Word Else_38;
          MR_Word SwitchBody_39;
          MR_Word DoSwitch_40;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;

          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (Difference_36));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
          }
          {
            InRange_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InRange_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), InRange_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
            MR_hl_field(MR_mktag(3), InRange_37, 2) = ((MR_Box) (Index_22));
            MR_hl_field(MR_mktag(3), InRange_37, 3) = ((MR_Box) (Var_65));
          }
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (DefaultStmts_30));
            MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Context_19));
          }
          {
            Else_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Else_38, 0) = ((MR_Box) (Var_67));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (DoJump_33));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (CasesCode_26));
          }
          {
            SwitchBody_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SwitchBody_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), SwitchBody_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), SwitchBody_39, 2) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), SwitchBody_39, 3) = ((MR_Box) (Context_19));
          }
          {
            DoSwitch_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), DoSwitch_40, 0) = ((MR_Box) (InRange_37));
            MR_hl_field(MR_mktag(2), DoSwitch_40, 1) = ((MR_Box) (SwitchBody_39));
            MR_hl_field(MR_mktag(2), DoSwitch_40, 2) = ((MR_Box) (Else_38));
            MR_hl_field(MR_mktag(2), DoSwitch_40, 3) = ((MR_Box) (Context_19));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (EndComment_35));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (EndLabelStmt_34));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (DoSwitch_40));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StartComment_32));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_73));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
  MR_Integer ThisVal_6,
  MR_Integer LastVal_7,
  MR_Word CaseLabelsMap_8,
  MR_String DefaultLabel_9)
{
  {
    MR_bool succeeded = (ThisVal_6 > LastVal_7);
    MR_Word CaseLabels_10;

    if (succeeded)
      CaseLabels_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String CaseLabel_12;
      MR_Word CaseLabels1_13;
      MR_Integer Var_14;
      MR_String CaseLabel0_11;
      MR_Box conv0_CaseLabel0_11;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, CaseLabelsMap_8, ThisVal_6, &conv0_CaseLabel0_11);
      if (succeeded)
      {
        CaseLabel0_11 = ((MR_String) conv0_CaseLabel0_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        CaseLabel_12 = CaseLabel0_11;
      else
        CaseLabel_12 = DefaultLabel_9;
      Var_14 = (ThisVal_6 + (MR_Integer) 1);
      CaseLabels1_13 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(Var_14, LastVal_7, CaseLabelsMap_8, DefaultLabel_9);
      {
        CaseLabels_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CaseLabels_10, 0) = ((MR_Box) (CaseLabel_12));
        MR_hl_field(MR_mktag(1), CaseLabels_10, 1) = ((MR_Box) (CaseLabels1_13));
      }
    }
    return CaseLabels_10;
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CaseLabelsMap_15;

    ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_CaseLabelsMap_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CaseLabelsMap_15));
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_3,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_CaseLabelsMap_4 = STATE_VARIABLE_CaseLabelsMap_0_3;
  }
  else
  {
    MR_Word Case_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word CaseStmts_21;
    MR_Word CasesStmts_22;
    MR_Word STATE_VARIABLE_CaseLabelsMap_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word FirstCond_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 0)));
    MR_Word LaterConds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 1)));
    MR_Word CaseStmt_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 2)));
    MR_String ThisLabel_44;
    MR_Word Context_45;
    MR_Word LabelComment_46;
    MR_Word LabelCode_47;
    MR_Word JumpComment_48;
    MR_Word JumpCode_49;
    MR_Word STATE_VARIABLE_CaseLabelsMap_27_51;
    MR_Word Var_52;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Box conv1_STATE_VARIABLE_CaseLabelsMap_27_27;

    ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ThisLabel_44, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_28_28);
    ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(ThisLabel_44, FirstCond_41, STATE_VARIABLE_CaseLabelsMap_0_3, &STATE_VARIABLE_CaseLabelsMap_27_51);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__generate_cases_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ThisLabel_44));
    }
    mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[0], Var_52, LaterConds_42, ((MR_Box) (STATE_VARIABLE_CaseLabelsMap_27_51)), &conv1_STATE_VARIABLE_CaseLabelsMap_27_27);
    STATE_VARIABLE_CaseLabelsMap_27_27 = ((MR_Word) conv1_STATE_VARIABLE_CaseLabelsMap_27_27);
    Context_45 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(CaseStmt_43);
    {
      LabelComment_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LabelComment_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), LabelComment_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_5[0])));
      MR_hl_field(MR_mktag(3), LabelComment_46, 2) = ((MR_Box) (Context_45));
    }
    {
      LabelCode_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LabelCode_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), LabelCode_47, 1) = ((MR_Box) (ThisLabel_44));
      MR_hl_field(MR_mktag(3), LabelCode_47, 2) = ((MR_Box) (Context_45));
    }
    {
      JumpComment_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), JumpComment_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), JumpComment_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_simplify_switch_scalar_common_5[1])));
      MR_hl_field(MR_mktag(3), JumpComment_48, 2) = ((MR_Box) (Context_45));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (HeadVar__2_2));
    }
    {
      JumpCode_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), JumpCode_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), JumpCode_49, 1) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(3), JumpCode_49, 2) = ((MR_Box) (Context_45));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (JumpCode_49));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (JumpComment_48));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (CaseStmt_43));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (LabelCode_47));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      CaseStmts_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CaseStmts_21, 0) = ((MR_Box) (LabelComment_46));
      MR_hl_field(MR_mktag(1), CaseStmts_21, 1) = ((MR_Box) (Var_59));
    }
    ml_backend__ml_simplify_switch__generate_cases_7_p_0(Cases_16, HeadVar__2_2, STATE_VARIABLE_CaseLabelsMap_27_27, STATE_VARIABLE_CaseLabelsMap_4, &CasesStmts_22, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_7);
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, CaseStmts_21, CasesStmts_22);
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
  MR_String ThisLabel_5,
  MR_Word Cond_6,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_14,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_15)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Cond_6)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word MinRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cond_6, (MR_Integer) 0)));
      MR_Word MaxRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Cond_6, (MR_Integer) 1)));
      MR_Integer Min_12;
      MR_Integer Max_13;
      MR_Word Var_16;
      MR_Word Var_17;

      succeeded = ((((MR_tag((MR_Word) MinRval_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MinRval_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), MinRval_10, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          Min_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0)));
          succeeded = ((((MR_tag((MR_Word) MaxRval_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MaxRval_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), MaxRval_11, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
              Max_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_17, (MR_Integer) 0)));
          }
        }
      }
      if (succeeded)
        ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(Min_12, Max_13, ThisLabel_5, STATE_VARIABLE_CaseLabelsMap_0_14, STATE_VARIABLE_CaseLabelsMap_15);
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
          return;
        }
      }
    }
    else
    {
      MR_Word Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_6, (MR_Integer) 0)));
      MR_Integer Val_9;
      MR_Word Var_21;

      succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_8, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
          Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_21, (MR_Integer) 0)));
      }
      if (succeeded)
      {
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Val_9, ((MR_Box) (ThisLabel_5)), STATE_VARIABLE_CaseLabelsMap_0_14, STATE_VARIABLE_CaseLabelsMap_15);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
  MR_Integer Min_6,
  MR_Integer Max_7,
  MR_String ThisLabel_8,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_10,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Min_6 > Max_7);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      *STATE_VARIABLE_CaseLabelsMap_11 = STATE_VARIABLE_CaseLabelsMap_0_10;
    else
    {
      MR_Word STATE_VARIABLE_CaseLabelsMap_12_12;
      MR_Integer Var_13;
      MR_Integer next_value_of_Min_6;
      MR_Word next_value_of_STATE_VARIABLE_CaseLabelsMap_0_10;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Min_6, ((MR_Box) (ThisLabel_8)), STATE_VARIABLE_CaseLabelsMap_0_10, &STATE_VARIABLE_CaseLabelsMap_12_12);
      Var_13 = (Min_6 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Min_6 = Var_13;
      next_value_of_STATE_VARIABLE_CaseLabelsMap_0_10 = STATE_VARIABLE_CaseLabelsMap_12_12;
      Min_6 = next_value_of_Min_6;
      STATE_VARIABLE_CaseLabelsMap_0_10 = next_value_of_STATE_VARIABLE_CaseLabelsMap_0_10;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Default_2,
  MR_Word HeadVar__3_3,
  MR_Word Context_4)
{
  {
    MR_bool succeeded;
    MR_Word Stmt_5;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (MR_tag((MR_Word) Default_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Default_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  Stmt_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Stmt_5, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Stmt_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Stmt_5, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Stmt_5, 3) = ((MR_Box) (Context_4));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  Stmt_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Stmt_5, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Stmt_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Stmt_5, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), Stmt_5, 3) = ((MR_Box) (Context_4));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          Stmt_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Default_2, (MR_Integer) 0)));
          break;
      }
    else
    {
      MR_Word Case_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word FirstMatchCond_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_16, (MR_Integer) 0)));
      MR_Word LaterMatchConds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_16, (MR_Integer) 1)));
      MR_Word CaseStmt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_16, (MR_Integer) 2)));

      succeeded = (Cases_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        succeeded = (Default_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        Stmt_5 = CaseStmt_24;
      else
      {
        MR_Word AllMatchConds_25;
        MR_Word CaseMatchedRval_26;
        MR_Word RestStmt_27;
        MR_Word Var_28;

        {
          AllMatchConds_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AllMatchConds_25, 0) = ((MR_Box) (FirstMatchCond_22));
          MR_hl_field(MR_mktag(1), AllMatchConds_25, 1) = ((MR_Box) (LaterMatchConds_23));
        }
        CaseMatchedRval_26 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(AllMatchConds_25, HeadVar__3_3);
        RestStmt_27 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(Cases_17, Default_2, HeadVar__3_3, Context_4);
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (RestStmt_27));
        }
        {
          Stmt_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Stmt_5, 0) = ((MR_Box) (CaseMatchedRval_26));
          MR_hl_field(MR_mktag(2), Stmt_5, 1) = ((MR_Box) (CaseStmt_24));
          MR_hl_field(MR_mktag(2), Stmt_5, 2) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(2), Stmt_5, 3) = ((MR_Box) (Context_4));
        }
      }
    }
    return Stmt_5;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchRval_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_3[0]);
    }
    else
    {
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if (((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word MinRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
          MR_Word MaxRval_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
          MR_Word Var_28;
          MR_Word Var_31;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_3[1])));
            MR_hl_field(MR_mktag(3), Var_28, 2) = ((MR_Box) (SwitchRval_2));
            MR_hl_field(MR_mktag(3), Var_28, 3) = ((MR_Box) (MinRval_24));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_3[2])));
            MR_hl_field(MR_mktag(3), Var_31, 2) = ((MR_Box) (SwitchRval_2));
            MR_hl_field(MR_mktag(3), Var_31, 3) = ((MR_Box) (MaxRval_25));
          }
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_31));
          }
        }
        else
        {
          MR_Word CaseRval_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));

          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_3[3])));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (CaseRval_20));
            MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (SwitchRval_2));
          }
        }
      else
      {
        MR_Word Var_15;
        MR_Word Var_16;

        if (((MR_tag((MR_Word) Var_19)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word MinRval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0)));
          MR_Word MaxRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1)));
          MR_Word Var_42;
          MR_Word Var_45;

          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_3[1])));
            MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (SwitchRval_2));
            MR_hl_field(MR_mktag(3), Var_42, 3) = ((MR_Box) (MinRval_38));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_3[2])));
            MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (SwitchRval_2));
            MR_hl_field(MR_mktag(3), Var_45, 3) = ((MR_Box) (MaxRval_39));
          }
          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), Var_15, 2) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(3), Var_15, 3) = ((MR_Box) (Var_45));
          }
        }
        else
        {
          MR_Word CaseRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));

          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_simplify_switch_scalar_common_3[3])));
            MR_hl_field(MR_mktag(3), Var_15, 2) = ((MR_Box) (CaseRval_34));
            MR_hl_field(MR_mktag(3), Var_15, 3) = ((MR_Box) (SwitchRval_2));
          }
        }
        Var_16 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(Var_18, SwitchRval_2);
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_16));
        }
      }
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_Min_13;
    MR_Integer conv0_STATE_VARIABLE_Max_15;

    ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_STATE_VARIABLE_Min_13, ((MR_Integer) wrapper_arg_4), &conv0_STATE_VARIABLE_Max_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Min_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Max_15));
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
  MR_Word Range_8,
  MR_Word Cases_9,
  MR_Word Default_10,
  MR_Integer ReqDensity_11,
  MR_Integer * FirstVal_12,
  MR_Integer * LastVal_13,
  MR_Word * NeedRangeCheck_14)
{
  {
    MR_bool succeeded = (Default_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Integer Min_15;
    MR_Integer Max_16;
    MR_Word TypeCtorInfo_25_25;
    MR_Integer TypeRange_17;
    MR_Integer NumCases_18;
    MR_Integer NoDefaultDensity_19;
    MR_Integer Var_23;
    MR_Integer Var_24;

    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Range_8)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Min_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Range_8, (MR_Integer) 0)));
        Max_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Range_8, (MR_Integer) 1)));
        Var_23 = (Max_16 - Min_15);
        Var_24 = (MR_Integer) 1;
        TypeRange_17 = (Var_23 + Var_24);
        TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
        NumCases_18 = mercury__list__length_1_f_0(TypeCtorInfo_25_25, Cases_9);
        NoDefaultDensity_19 = backend_libs__switch_util__switch_density_2_f_0(NumCases_18, TypeRange_17);
        succeeded = (NoDefaultDensity_19 > ReqDensity_11);
      }
    }
    if (succeeded)
    {
      *NeedRangeCheck_14 = (MR_Integer) 0;
      *FirstVal_12 = Min_15;
      *LastVal_13 = Max_16;
    }
    else
    {
      MR_Word TypeCtorInfo_16_38;
      MR_Integer Var_30;
      MR_Integer Var_31;
      MR_Box conv3_FirstVal_12;
      MR_Box conv2_LastVal_13;

      switch (MR_tag((MR_Word) Default_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Default_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *NeedRangeCheck_14 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *NeedRangeCheck_14 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          *NeedRangeCheck_14 = (MR_Integer) 1;
          break;
      }
      Var_30 = mercury__int__max_int_0_f_0();
      Var_31 = mercury__int__min_int_0_f_0();
      TypeCtorInfo_16_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__list__foldl2_6_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, TypeCtorInfo_16_38, TypeCtorInfo_16_38, (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[2], Cases_9, ((MR_Box) (Var_30)), &conv3_FirstVal_12, ((MR_Box) (Var_31)), &conv2_LastVal_13);
      *FirstVal_12 = ((MR_Integer) conv3_FirstVal_12);
      *LastVal_13 = ((MR_Integer) conv2_LastVal_13);
    }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_Min_13;
    MR_Integer conv0_STATE_VARIABLE_Max_15;

    ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_STATE_VARIABLE_Min_13, ((MR_Integer) wrapper_arg_4), &conv0_STATE_VARIABLE_Max_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Min_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Max_15));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
  MR_Word Cases_3,
  MR_Integer ReqDensity_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_15_25;
    MR_Word TypeCtorInfo_16_26;
    MR_Integer NumCases_5;
    MR_Integer FirstCaseVal_6;
    MR_Integer LastCaseVal_7;
    MR_Integer CasesRange_8;
    MR_Integer Density_9;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Box conv3_FirstCaseVal_6;
    MR_Box conv2_LastCaseVal_7;

    NumCases_5 = mercury__list__length_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, Cases_3);
    succeeded = (NumCases_5 > (MR_Integer) 2);
    if (succeeded)
    {
      Var_17 = (MR_Word) &ml_backend__ml_simplify_switch_scalar_common_1[1];
      Var_18 = mercury__int__max_int_0_f_0();
      Var_19 = mercury__int__min_int_0_f_0();
      TypeCtorInfo_15_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
      TypeCtorInfo_16_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__list__foldl2_6_p_0(TypeCtorInfo_15_25, TypeCtorInfo_16_26, TypeCtorInfo_16_26, Var_17, Cases_3, ((MR_Box) (Var_18)), &conv3_FirstCaseVal_6, ((MR_Box) (Var_19)), &conv2_LastCaseVal_7);
      FirstCaseVal_6 = ((MR_Integer) conv3_FirstCaseVal_6);
      LastCaseVal_7 = ((MR_Integer) conv2_LastCaseVal_7);
      Var_11 = (LastCaseVal_7 - FirstCaseVal_6);
      Var_12 = (MR_Integer) 1;
      CasesRange_8 = (Var_11 + Var_12);
      Density_9 = backend_libs__switch_util__switch_density_2_f_0(NumCases_5, CasesRange_8);
      succeeded = (Density_9 > ReqDensity_4);
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_1_f_0(
  MR_Word MLDSType_3)
{
  {
    MR_Word IsIntegral_4;

    switch (MR_tag((MR_Word) MLDSType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MLDSType_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            IsIntegral_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
            IsIntegral_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        IsIntegral_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), MLDSType_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CtorCat_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDSType_3, (MR_Integer) 2)));
              MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDSType_3, (MR_Integer) 1)));
              MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), MLDSType_3, (MR_Integer) 3)));

              switch (MR_tag((MR_Word) CtorCat_16)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(CtorCat_16)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      IsIntegral_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      IsIntegral_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      IsIntegral_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      IsIntegral_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      IsIntegral_4 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorCat_16, (MR_Integer) 0)));

                    switch (MR_tag((MR_Word) Var_29)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(Var_29)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            IsIntegral_4 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            IsIntegral_4 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                            IsIntegral_4 = (MR_Integer) 0;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        IsIntegral_4 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), CtorCat_16, (MR_Integer) 0)));

                    switch (Var_30) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        IsIntegral_4 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 0:
                        IsIntegral_4 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_16, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      IsIntegral_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), CtorCat_16, (MR_Integer) 1)));

                        switch (Var_31) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            IsIntegral_4 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 2:
                            IsIntegral_4 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            IsIntegral_4 = (MR_Integer) 0;
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            IsIntegral_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return IsIntegral_4;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_simplify_switch__init(void)
{
}

void mercury__ml_backend__ml_simplify_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_simplify_switch__ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0);
}

void mercury__ml_backend__ml_simplify_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_simplify_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_simplify_switch.
