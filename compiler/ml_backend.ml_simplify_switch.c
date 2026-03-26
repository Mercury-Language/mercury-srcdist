/*
** Automatically generated from `ml_simplify_switch.m'
** by the Mercury compiler,
** version rotd-2026-03-26
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
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


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.lookup_switch_util.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_target_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__mlds__type_ctor_info_mlds_label_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_label_0;

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
  MR_Word DefaultLabel_9);

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_3,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
  MR_Word ThisLabel_5,
  MR_Word Cond_6,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_14,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_15);

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
  MR_Integer Min_6,
  MR_Integer Max_7,
  MR_Word ThisLabel_8,
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
  MR_Unsigned ReqDensity_11,
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
  MR_Unsigned ReqDensity_4);

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_2_p_0(
  MR_Word MLDSType_3,
  MR_Word * IntType_4);

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

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_2[5][1];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[5][2];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[2][8];

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[1][7];




static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_simplify_switch__is_dense_switch_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_2[5][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 1U)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "switch (using dense jump table)")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "End of dense switch")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "case of dense switch")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "branch to end of dense switch")) },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_3[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 4U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 3U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((MR_Unsigned) 0U << 3))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_4[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_simplify_switch_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__mlds__type_ctor_info_mlds_label_0)),
    ((MR_Box) (&ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__mlds__type_ctor_info_mlds_label_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ml_backend__mlds__type_ctor_info_mlds_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_simplify_switch__ml_backend__ml_simplify_switch__type_ctor_info_case_labels_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001)),
  (MR_String) "ml_backend.ml_simplify_switch",
  (MR_String) "case_labels_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_simplify_switch__tree234__ti_tree234_2builtin__type_ctor_info_int_0ml_backend__mlds__type_ctor_info_mlds_label_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_simplify_switch_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_simplify_switch_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
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
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_Min_3;
  MR_Integer conv0_STATE_VARIABLE_Max_5;

  ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Min_3, ((MR_Integer) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Max_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Min_3));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Max_5));
}

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(
  MR_Word Case_6,
  MR_Integer STATE_VARIABLE_Min_0_12,
  MR_Integer * STATE_VARIABLE_Min_13,
  MR_Integer STATE_VARIABLE_Max_0_14,
  MR_Integer * STATE_VARIABLE_Max_15)
{
  MR_Word FirstCond_9 = ((MR_Word) ((MR_hl_field(0, Case_6, 0))));
  MR_Word LaterConds_10 = ((MR_Word) ((MR_hl_field(0, Case_6, 1))));
  MR_Integer STATE_VARIABLE_Min_1_16;
  MR_Integer STATE_VARIABLE_Max_1_17;
  MR_Box conv3_STATE_VARIABLE_Min_13;
  MR_Box conv2_STATE_VARIABLE_Max_15;

  ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(FirstCond_9, STATE_VARIABLE_Min_0_12, &STATE_VARIABLE_Min_1_16, STATE_VARIABLE_Max_0_14, &STATE_VARIABLE_Max_1_17);
  mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_simplify_switch_scalar_common_1[3]), LaterConds_10, ((MR_Box) (STATE_VARIABLE_Min_1_16)), &conv3_STATE_VARIABLE_Min_13, ((MR_Box) (STATE_VARIABLE_Max_1_17)), &conv2_STATE_VARIABLE_Max_15);
  *STATE_VARIABLE_Min_13 = ((MR_Integer) (conv3_STATE_VARIABLE_Min_13));
  *STATE_VARIABLE_Max_15 = ((MR_Integer) (conv2_STATE_VARIABLE_Max_15));
}

static void MR_CALL 
ml_backend__ml_simplify_switch__find_min_and_max_in_case_cond_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Min_0_2,
  MR_Integer * STATE_VARIABLE_Min_3,
  MR_Integer STATE_VARIABLE_Max_0_4,
  MR_Integer * STATE_VARIABLE_Max_5)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word MinRval_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word MaxRval_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer RvalMin_23;
    MR_Integer RvalMax_24;
    MR_Word Var_29;
    MR_Word Var_30;

    succeeded = ((((MR_tag((MR_Word) MinRval_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MinRval_19, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(3, MinRval_19, 1))));
      succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 2);
      if (succeeded)
      {
        RvalMin_23 = ((MR_Integer) ((MR_hl_field(2, Var_29, 0))));
        succeeded = ((((MR_tag((MR_Word) MaxRval_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MaxRval_20, 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_30 = ((MR_Word) ((MR_hl_field(3, MaxRval_20, 1))));
          succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 2);
          if (succeeded)
            RvalMax_24 = ((MR_Integer) ((MR_hl_field(2, Var_30, 0))));
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
        return;
      }
  }
  else
  {
    MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer Val_9;
    MR_Word Var_14;

    succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_6, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(3, Rval_6, 1))));
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 2);
      if (succeeded)
        Val_9 = ((MR_Integer) ((MR_hl_field(2, Var_14, 0))));
    }
    if (succeeded)
    {
      mercury__int__min_3_p_0(Val_9, STATE_VARIABLE_Min_0_2, STATE_VARIABLE_Min_3);
      mercury__int__max_3_p_0(Val_9, STATE_VARIABLE_Max_0_4, STATE_VARIABLE_Max_5);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_simplify_switch.find_min_and_max_in_case_cond\'/5", (MR_String) "non-int case");
        return;
      }
  }
}

void MR_CALL 
ml_backend__ml_simplify_switch__ml_simplify_switch_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_bool succeeded;
  MR_Word Globals_8;
  MR_Word Rval_10;
  MR_Word Range_11;
  MR_Word Cases_12;
  MR_Word Default_13;
  MR_Word Context_14;
  MR_Unsigned ReqDensity_20;
  MR_Word TypeCtorInfo_308_308;
  MR_Word Type_9;
  MR_Word IntType_15;
  MR_Integer NumCases_16;
  MR_Word OptTuple_17;
  MR_Integer DenseSize_18;
  MR_Integer ReqDensityI_19;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;

  ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(STATE_VARIABLE_Info_0_33, &Globals_8);
  succeeded = ((((MR_tag((MR_Word) Stmt0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Stmt0_5, 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    Type_9 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 1))));
    Rval_10 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 2))));
    Range_11 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 3))));
    Cases_12 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 4))));
    Default_13 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 5))));
    Context_14 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 6))));
    succeeded = ml_backend__ml_simplify_switch__is_integral_type_2_p_0(Type_9, &IntType_15);
    if (succeeded)
    {
      Var_35 = ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(Globals_8);
      succeeded = (Var_35 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_36 = ml_backend__ml_target_util__globals_target_supports_int_type_switch_2_f_0(Globals_8, IntType_15);
        succeeded = (Var_36 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_37 = (MR_Integer) 666;
          Var_38 = (MR_Integer) 1;
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_37, Var_38);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_308_308 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0);
          mercury__list__length_2_p_0(TypeCtorInfo_308_308, Cases_12, &NumCases_16);
          libs__globals__get_opt_tuple_2_p_0(Globals_8, &OptTuple_17);
          ReqDensityI_19 = ((MR_Integer) ((MR_hl_field(0, OptTuple_17, 25))));
          DenseSize_18 = ((MR_Integer) ((MR_hl_field(0, OptTuple_17, 27))));
          succeeded = (NumCases_16 >= DenseSize_18);
          if (succeeded)
          {
            succeeded = mercury__uint__from_int_2_p_0(ReqDensityI_19, &ReqDensity_20);
            if (succeeded)
              succeeded = ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(Cases_12, ReqDensity_20);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer FirstVal_21;
    MR_Integer LastVal_22;
    MR_Word NeedRangeCheck_23;
    MR_Word Stmts_24;

    ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(Range_11, Cases_12, Default_13, ReqDensity_20, &FirstVal_21, &LastVal_22, &NeedRangeCheck_23);
    ml_backend__ml_simplify_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_110_115_101_95_115_119_105_116_99_104_95_95_91_54_93_95_48_11_p_0(Cases_12, Default_13, FirstVal_21, LastVal_22, NeedRangeCheck_23, Rval_10, Context_14, &Stmts_24, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Stmt_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 2) = ((MR_Box) (Stmts_24));
      MR_hl_field(0, base, 3) = ((MR_Box) (Context_14));
    }
  }
  else
  {
    MR_Word Rval_56;
    MR_Word Cases_57;
    MR_Word Default_58;
    MR_Word Context_59;
    MR_Word Type_46;
    MR_Word IntType_47;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    succeeded = ((((MR_tag((MR_Word) Stmt0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Stmt0_5, 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Type_46 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 1))));
      Rval_56 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 2))));
      Cases_57 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 4))));
      Default_58 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 5))));
      Context_59 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 6))));
      succeeded = ml_backend__ml_simplify_switch__is_integral_type_2_p_0(Type_46, &IntType_47);
      if (succeeded)
      {
        Var_42 = ml_backend__ml_target_util__globals_target_supports_int_type_switch_2_f_0(Globals_8, IntType_47);
        succeeded = (Var_42 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_43 = (MR_Integer) 666;
          Var_44 = (MR_Integer) 1;
          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_8, Var_43, Var_44);
        }
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      *Stmt_6 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(Cases_57, Default_58, Rval_56, Context_59);
    else
    {
      MR_Word SingleCase_29;
      MR_Word Var_45;
      MR_Word Cases_49;
      MR_Word Default_50;

      succeeded = ((((MR_tag((MR_Word) Stmt0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Stmt0_5, 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Cases_49 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 4))));
        Default_50 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 5))));
        succeeded = (Default_50 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Cases_49 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SingleCase_29 = ((MR_Word) ((MR_hl_field(1, Cases_49, 0))));
            Var_45 = ((MR_Word) ((MR_hl_field(1, Cases_49, 1))));
            succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
        *Stmt_6 = ((MR_Word) ((MR_hl_field(0, SingleCase_29, 2))));
      else
        *Stmt_6 = Stmt0_5;
    }
    *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
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
  MR_bool succeeded = (FirstVal_14 == (MR_Integer) 0);
  MR_Word Index_22;
  MR_Word EndLabel_23;
  MR_Word CaseLabelsMap0_24;
  MR_Word CaseLabelsMap_25;
  MR_Word CasesCode_26;
  MR_Word DefaultLabel_27;
  MR_Word CaseLabels_28;
  MR_Word DefaultLabelStmt_29;
  MR_Word DefaultStmts_30;
  MR_Word StartComment_32;
  MR_Word DoJump_33;
  MR_Word EndLabelStmt_34;
  MR_Word EndComment_35;
  MR_Word STATE_VARIABLE_Info_1_48;
  MR_Word STATE_VARIABLE_Info_2_49;

  if (succeeded)
    Index_22 = Rval_18;
  else
  {
    MR_Word Var_46;
    MR_Word Var_47;

    {
      Var_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_47, 0) = ((MR_Box) (FirstVal_14));
    }
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Index_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Index_22, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Index_22, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_simplify_switch_scalar_common_2[0])));
      MR_hl_field(3, Index_22, 2) = ((MR_Box) (Rval_18));
      MR_hl_field(3, Index_22, 3) = ((MR_Box) (Var_46));
    }
  }
  ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&EndLabel_23, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_1_48);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), &CaseLabelsMap0_24);
  ml_backend__ml_simplify_switch__generate_cases_7_p_0(Cases_12, EndLabel_23, CaseLabelsMap0_24, &CaseLabelsMap_25, &CasesCode_26, STATE_VARIABLE_Info_1_48, &STATE_VARIABLE_Info_2_49);
  ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&DefaultLabel_27, STATE_VARIABLE_Info_2_49, STATE_VARIABLE_Info_42);
  CaseLabels_28 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(FirstVal_14, LastVal_15, CaseLabelsMap_25, DefaultLabel_27);
  {
    DefaultLabelStmt_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, DefaultLabelStmt_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, DefaultLabelStmt_29, 1) = ((MR_Box) (DefaultLabel_27));
    MR_hl_field(3, DefaultLabelStmt_29, 2) = ((MR_Box) (Context_19));
  }
  switch (MR_tag((MR_Word) Default_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            DefaultStmts_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DefaultStmts_30, 0) = ((MR_Box) (DefaultLabelStmt_29));
            MR_hl_field(1, DefaultStmts_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          break;
        case (MR_Integer) 1:
          {
            DefaultStmts_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DefaultStmts_30, 0) = ((MR_Box) (DefaultLabelStmt_29));
            MR_hl_field(1, DefaultStmts_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DefaultCase_31 = ((MR_Word) ((MR_hl_field(1, Default_13, 0))));
        MR_Word Var_53;

        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (DefaultCase_31));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          DefaultStmts_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DefaultStmts_30, 0) = ((MR_Box) (DefaultLabelStmt_29));
          MR_hl_field(1, DefaultStmts_30, 1) = ((MR_Box) (Var_53));
        }
      }
      break;
  }
  {
    StartComment_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, StartComment_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, StartComment_32, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_simplify_switch_scalar_common_2[1])));
    MR_hl_field(3, StartComment_32, 2) = ((MR_Box) (Context_19));
  }
  {
    DoJump_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, DoJump_33, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, DoJump_33, 1) = ((MR_Box) (Index_22));
    MR_hl_field(3, DoJump_33, 2) = ((MR_Box) (CaseLabels_28));
    MR_hl_field(3, DoJump_33, 3) = ((MR_Box) (Context_19));
  }
  {
    EndLabelStmt_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, EndLabelStmt_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, EndLabelStmt_34, 1) = ((MR_Box) (EndLabel_23));
    MR_hl_field(3, EndLabelStmt_34, 2) = ((MR_Box) (Context_19));
  }
  {
    EndComment_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, EndComment_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, EndComment_35, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_simplify_switch_scalar_common_2[2])));
    MR_hl_field(3, EndComment_35, 2) = ((MR_Box) (Context_19));
  }
  switch (NeedRangeCheck_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;

        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (DoJump_33));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (CasesCode_26));
        }
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (StartComment_32));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (EndComment_35));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (EndLabelStmt_34));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
        }
        Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), DefaultStmts_30, Var_76);
        *Stmts_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_73, Var_75);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Difference_36 = (MR_Integer) ((MR_Unsigned) LastVal_15 - (MR_Unsigned) FirstVal_14);
        MR_Word InRange_37;
        MR_Word Else_38;
        MR_Word SwitchBody_39;
        MR_Word DoSwitch_40;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;

        {
          Var_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_62, 0) = ((MR_Box) (Difference_36));
        }
        {
          Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_61, 1) = ((MR_Box) (Var_62));
        }
        {
          InRange_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, InRange_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, InRange_37, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_simplify_switch_scalar_common_3[0])));
          MR_hl_field(3, InRange_37, 2) = ((MR_Box) (Index_22));
          MR_hl_field(3, InRange_37, 3) = ((MR_Box) (Var_61));
        }
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_63, 2) = ((MR_Box) (DefaultStmts_30));
          MR_hl_field(0, Var_63, 3) = ((MR_Box) (Context_19));
        }
        {
          Else_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Else_38, 0) = ((MR_Box) (Var_63));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (DoJump_33));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (CasesCode_26));
        }
        {
          SwitchBody_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SwitchBody_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SwitchBody_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SwitchBody_39, 2) = ((MR_Box) (Var_68));
          MR_hl_field(0, SwitchBody_39, 3) = ((MR_Box) (Context_19));
        }
        {
          DoSwitch_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, DoSwitch_40, 0) = ((MR_Box) (InRange_37));
          MR_hl_field(2, DoSwitch_40, 1) = ((MR_Box) (SwitchBody_39));
          MR_hl_field(2, DoSwitch_40, 2) = ((MR_Box) (Else_38));
          MR_hl_field(2, DoSwitch_40, 3) = ((MR_Box) (Context_19));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (EndComment_35));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (EndLabelStmt_34));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (DoSwitch_40));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (StartComment_32));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_69));
        }
      }
      break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__get_case_labels_4_f_0(
  MR_Integer ThisVal_6,
  MR_Integer LastVal_7,
  MR_Word CaseLabelsMap_8,
  MR_Word DefaultLabel_9)
{
  MR_bool succeeded = (ThisVal_6 > LastVal_7);
  MR_Word CaseLabels_10;

  if (succeeded)
    CaseLabels_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CaseLabel_12;
    MR_Word CaseLabels1_13;
    MR_Integer Var_14;
    MR_Word CaseLabel0_11;
    MR_Box conv0_CaseLabel0_11;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), CaseLabelsMap_8, ThisVal_6, &conv0_CaseLabel0_11);
    if (succeeded)
    {
      CaseLabel0_11 = ((MR_Word) (conv0_CaseLabel0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      CaseLabel_12 = CaseLabel0_11;
    else
      CaseLabel_12 = DefaultLabel_9;
    Var_14 = (MR_Integer) ((MR_Unsigned) ThisVal_6 + (MR_Unsigned) 1);
    CaseLabels1_13 = ml_backend__ml_simplify_switch__get_case_labels_4_f_0(Var_14, LastVal_7, CaseLabelsMap_8, DefaultLabel_9);
    {
      CaseLabels_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CaseLabels_10, 0) = ((MR_Box) (CaseLabel_12));
      MR_hl_field(1, CaseLabels_10, 1) = ((MR_Box) (CaseLabels1_13));
    }
  }
  return CaseLabels_10;
}

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CaseLabelsMap_15;

  ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CaseLabelsMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CaseLabelsMap_15));
}

static void MR_CALL 
ml_backend__ml_simplify_switch__generate_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_3,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_CaseLabelsMap_4 = STATE_VARIABLE_CaseLabelsMap_0_3;
  }
  else
  {
    MR_Word Case_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word CaseStmts_21;
    MR_Word CasesStmts_22;
    MR_Word STATE_VARIABLE_CaseLabelsMap_1_27;
    MR_Word STATE_VARIABLE_Info_1_28;
    MR_Word FirstCond_30 = ((MR_Word) ((MR_hl_field(0, Case_15, 0))));
    MR_Word LaterConds_31 = ((MR_Word) ((MR_hl_field(0, Case_15, 1))));
    MR_Word CaseStmt_32 = ((MR_Word) ((MR_hl_field(0, Case_15, 2))));
    MR_Word ThisLabel_33;
    MR_Word Context_34;
    MR_Word LabelComment_35;
    MR_Word LabelCode_36;
    MR_Word JumpComment_37;
    MR_Word JumpCode_38;
    MR_Word STATE_VARIABLE_CaseLabelsMap_1_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Box conv1_STATE_VARIABLE_CaseLabelsMap_1_27;

    ml_backend__ml_code_util__ml_gen_new_label_3_p_0(&ThisLabel_33, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_28);
    ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(ThisLabel_33, FirstCond_30, STATE_VARIABLE_CaseLabelsMap_0_3, &STATE_VARIABLE_CaseLabelsMap_1_39);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ml_backend__ml_simplify_switch_scalar_common_5[0]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (ml_backend__ml_simplify_switch__generate_cases_7_p_0_1));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (ThisLabel_33));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_simplify_switch_scalar_common_1[0]), Var_40, LaterConds_31, ((MR_Box) (STATE_VARIABLE_CaseLabelsMap_1_39)), &conv1_STATE_VARIABLE_CaseLabelsMap_1_27);
    STATE_VARIABLE_CaseLabelsMap_1_27 = ((MR_Word) (conv1_STATE_VARIABLE_CaseLabelsMap_1_27));
    Context_34 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(CaseStmt_32);
    {
      LabelComment_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LabelComment_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, LabelComment_35, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_simplify_switch_scalar_common_2[3])));
      MR_hl_field(3, LabelComment_35, 2) = ((MR_Box) (Context_34));
    }
    {
      LabelCode_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, LabelCode_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, LabelCode_36, 1) = ((MR_Box) (ThisLabel_33));
      MR_hl_field(3, LabelCode_36, 2) = ((MR_Box) (Context_34));
    }
    {
      JumpComment_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, JumpComment_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, JumpComment_37, 1) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_simplify_switch_scalar_common_2[4])));
      MR_hl_field(3, JumpComment_37, 2) = ((MR_Box) (Context_34));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (HeadVar__2_2));
    }
    {
      JumpCode_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, JumpCode_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, JumpCode_38, 1) = ((MR_Box) (Var_43));
      MR_hl_field(3, JumpCode_38, 2) = ((MR_Box) (Context_34));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (JumpCode_38));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (JumpComment_37));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (CaseStmt_32));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (LabelCode_36));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      CaseStmts_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CaseStmts_21, 0) = ((MR_Box) (LabelComment_35));
      MR_hl_field(1, CaseStmts_21, 1) = ((MR_Box) (Var_44));
    }
    ml_backend__ml_simplify_switch__generate_cases_7_p_0(Cases_16, HeadVar__2_2, STATE_VARIABLE_CaseLabelsMap_1_27, STATE_VARIABLE_CaseLabelsMap_4, &CasesStmts_22, STATE_VARIABLE_Info_1_28, STATE_VARIABLE_Info_7);
    *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CaseStmts_21, CasesStmts_22);
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_case_into_map_4_p_0(
  MR_Word ThisLabel_5,
  MR_Word Cond_6,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_14,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_15)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Cond_6)) == (MR_Integer) 1))
  {
    MR_Word MinRval_10 = ((MR_Word) ((MR_hl_field(1, Cond_6, 0))));
    MR_Word MaxRval_11 = ((MR_Word) ((MR_hl_field(1, Cond_6, 1))));
    MR_Integer Min_12;
    MR_Integer Max_13;
    MR_Word Var_20;
    MR_Word Var_21;

    succeeded = ((((MR_tag((MR_Word) MinRval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MinRval_10, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(3, MinRval_10, 1))));
      succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 2);
      if (succeeded)
      {
        Min_12 = ((MR_Integer) ((MR_hl_field(2, Var_20, 0))));
        succeeded = ((((MR_tag((MR_Word) MaxRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MaxRval_11, 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(3, MaxRval_11, 1))));
          succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 2);
          if (succeeded)
            Max_13 = ((MR_Integer) ((MR_hl_field(2, Var_21, 0))));
        }
      }
    }
    if (succeeded)
      ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(Min_12, Max_13, ThisLabel_5, STATE_VARIABLE_CaseLabelsMap_0_14, STATE_VARIABLE_CaseLabelsMap_15);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
        return;
      }
  }
  else
  {
    MR_Word Rval_8 = ((MR_Word) ((MR_hl_field(0, Cond_6, 0))));
    MR_Integer Val_9;
    MR_Word Var_16;

    succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(3, Rval_8, 1))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
      if (succeeded)
        Val_9 = ((MR_Integer) ((MR_hl_field(2, Var_16, 0))));
    }
    if (succeeded)
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), Val_9, ((MR_Box) (ThisLabel_5)), STATE_VARIABLE_CaseLabelsMap_0_14, STATE_VARIABLE_CaseLabelsMap_15);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_simplify_switch.insert_case_into_map\'/4", (MR_String) "non-int case");
        return;
      }
  }
}

static void MR_CALL 
ml_backend__ml_simplify_switch__insert_range_into_map_5_p_0(
  MR_Integer Min_6,
  MR_Integer Max_7,
  MR_Word ThisLabel_8,
  MR_Word STATE_VARIABLE_CaseLabelsMap_0_10,
  MR_Word * STATE_VARIABLE_CaseLabelsMap_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Min_6 > Max_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *STATE_VARIABLE_CaseLabelsMap_11 = STATE_VARIABLE_CaseLabelsMap_0_10;
    else
    {
      MR_Word STATE_VARIABLE_CaseLabelsMap_1_12;
      MR_Integer Var_13;
      MR_Integer next_value_of_Min_6;
      MR_Word next_value_of_STATE_VARIABLE_CaseLabelsMap_0_10;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_label_0), Min_6, ((MR_Box) (ThisLabel_8)), STATE_VARIABLE_CaseLabelsMap_0_10, &STATE_VARIABLE_CaseLabelsMap_1_12);
      Var_13 = (MR_Integer) ((MR_Unsigned) Min_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Min_6 = Var_13;
      next_value_of_STATE_VARIABLE_CaseLabelsMap_0_10 = STATE_VARIABLE_CaseLabelsMap_1_12;
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
  MR_bool succeeded;
  MR_Word Stmt_5;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (MR_tag((MR_Word) Default_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Default_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Stmt_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Stmt_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Stmt_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Stmt_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Stmt_5, 3) = ((MR_Box) (Context_4));
            }
            break;
          case (MR_Integer) 1:
            {
              Stmt_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Stmt_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Stmt_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Stmt_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Stmt_5, 3) = ((MR_Box) (Context_4));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        Stmt_5 = ((MR_Word) ((MR_hl_field(1, Default_2, 0))));
        break;
    }
  else
  {
    MR_Word Case_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word FirstMatchCond_22 = ((MR_Word) ((MR_hl_field(0, Case_16, 0))));
    MR_Word LaterMatchConds_23 = ((MR_Word) ((MR_hl_field(0, Case_16, 1))));
    MR_Word CaseStmt_24 = ((MR_Word) ((MR_hl_field(0, Case_16, 2))));

    succeeded = (Cases_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Default_2 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Stmt_5 = CaseStmt_24;
    else
    {
      MR_Word AllMatchConds_25;
      MR_Word CaseMatchedRval_26;
      MR_Word RestStmt_27;
      MR_Word Var_28;

      {
        AllMatchConds_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, AllMatchConds_25, 0) = ((MR_Box) (FirstMatchCond_22));
        MR_hl_field(1, AllMatchConds_25, 1) = ((MR_Box) (LaterMatchConds_23));
      }
      CaseMatchedRval_26 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(AllMatchConds_25, HeadVar__3_3);
      RestStmt_27 = ml_backend__ml_simplify_switch__ml_switch_to_if_else_chain_4_f_0(Cases_17, Default_2, HeadVar__3_3, Context_4);
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (RestStmt_27));
      }
      {
        Stmt_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Stmt_5, 0) = ((MR_Box) (CaseMatchedRval_26));
        MR_hl_field(2, Stmt_5, 1) = ((MR_Box) (CaseStmt_24));
        MR_hl_field(2, Stmt_5, 2) = ((MR_Box) (Var_28));
        MR_hl_field(2, Stmt_5, 3) = ((MR_Box) (Context_4));
      }
    }
  }
  return Stmt_5;
}

static MR_Word MR_CALL 
ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchRval_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) (MR_mkword(3, &ml_backend__ml_simplify_switch_scalar_common_3[1]));
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((Var_18 == (MR_Word) ((MR_Unsigned) 0U)))
      if (((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1))
      {
        MR_Word MinRval_25 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
        MR_Word MaxRval_26 = ((MR_Word) ((MR_hl_field(1, Var_19, 1))));
        MR_Word Var_29;
        MR_Word Var_33;

        {
          Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_29, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_simplify_switch_scalar_common_3[2])));
          MR_hl_field(3, Var_29, 2) = ((MR_Box) (SwitchRval_2));
          MR_hl_field(3, Var_29, 3) = ((MR_Box) (MinRval_25));
        }
        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_33, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_simplify_switch_scalar_common_3[3])));
          MR_hl_field(3, Var_33, 2) = ((MR_Box) (SwitchRval_2));
          MR_hl_field(3, Var_33, 3) = ((MR_Box) (MaxRval_26));
        }
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (Var_29));
          MR_hl_field(3, HeadVar__3_3, 3) = ((MR_Box) (Var_33));
        }
      }
      else
      {
        MR_Word CaseRval_20 = ((MR_Word) ((MR_hl_field(0, Var_19, 0))));

        {
          HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_simplify_switch_scalar_common_3[4])));
          MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (CaseRval_20));
          MR_hl_field(3, HeadVar__3_3, 3) = ((MR_Box) (SwitchRval_2));
        }
      }
    else
    {
      MR_Word Var_15;
      MR_Word Var_16;

      if (((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1))
      {
        MR_Word MinRval_42 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
        MR_Word MaxRval_43 = ((MR_Word) ((MR_hl_field(1, Var_19, 1))));
        MR_Word Var_46;
        MR_Word Var_50;

        {
          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_46, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_simplify_switch_scalar_common_3[2])));
          MR_hl_field(3, Var_46, 2) = ((MR_Box) (SwitchRval_2));
          MR_hl_field(3, Var_46, 3) = ((MR_Box) (MinRval_42));
        }
        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_simplify_switch_scalar_common_3[3])));
          MR_hl_field(3, Var_50, 2) = ((MR_Box) (SwitchRval_2));
          MR_hl_field(3, Var_50, 3) = ((MR_Box) (MaxRval_43));
        }
        {
          Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_15, 2) = ((MR_Box) (Var_46));
          MR_hl_field(3, Var_15, 3) = ((MR_Box) (Var_50));
        }
      }
      else
      {
        MR_Word CaseRval_37 = ((MR_Word) ((MR_hl_field(0, Var_19, 0))));

        {
          Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_15, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_simplify_switch_scalar_common_3[4])));
          MR_hl_field(3, Var_15, 2) = ((MR_Box) (CaseRval_37));
          MR_hl_field(3, Var_15, 3) = ((MR_Box) (SwitchRval_2));
        }
      }
      Var_16 = ml_backend__ml_simplify_switch__ml_gen_case_match_conds_2_f_0(Var_18, SwitchRval_2);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, HeadVar__3_3, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, HeadVar__3_3, 2) = ((MR_Box) (Var_15));
        MR_hl_field(3, HeadVar__3_3, 3) = ((MR_Box) (Var_16));
      }
    }
  }
  return HeadVar__3_3;
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
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_Min_13;
  MR_Integer conv0_STATE_VARIABLE_Max_15;

  ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Min_13, ((MR_Integer) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Max_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Min_13));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Max_15));
}

static void MR_CALL 
ml_backend__ml_simplify_switch__maybe_eliminate_default_7_p_0(
  MR_Word Range_8,
  MR_Word Cases_9,
  MR_Word Default_10,
  MR_Unsigned ReqDensity_11,
  MR_Integer * FirstVal_12,
  MR_Integer * LastVal_13,
  MR_Word * NeedRangeCheck_14)
{
  MR_bool succeeded = (Default_10 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Min_15;
  MR_Integer Max_16;
  MR_Word TypeCtorInfo_26_26;
  MR_Unsigned TypeRange_17;
  MR_Unsigned NumCases_18;
  MR_Unsigned NoDefaultDensity_19;
  MR_Integer Var_23;
  MR_Integer Var_24;
  MR_Integer Var_25;

  if (succeeded)
  {
    succeeded = (Range_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Min_15 = ((MR_Integer) ((MR_hl_field(1, Range_8, 0))));
      Max_16 = ((MR_Integer) ((MR_hl_field(1, Range_8, 1))));
      Var_24 = (MR_Integer) ((MR_Unsigned) Max_16 - (MR_Unsigned) Min_15);
      Var_25 = (MR_Integer) 1;
      Var_23 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) Var_25);
      succeeded = mercury__uint__from_int_2_p_0(Var_23, &TypeRange_17);
      if (succeeded)
      {
        TypeCtorInfo_26_26 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0);
        mercury__list__ulength_2_p_0(TypeCtorInfo_26_26, Cases_9, &NumCases_18);
        NoDefaultDensity_19 = backend_libs__lookup_switch_util__switch_density_2_f_0(NumCases_18, TypeRange_17);
        succeeded = (NoDefaultDensity_19 > ReqDensity_11);
      }
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
    MR_Integer Var_28;
    MR_Integer Var_29;
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
    Var_28 = mercury__int__max_int_0_f_0();
    Var_29 = mercury__int__min_int_0_f_0();
    mercury__list__foldl2_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__ml_simplify_switch_scalar_common_1[2]), Cases_9, ((MR_Box) (Var_28)), &conv3_FirstVal_12, ((MR_Box) (Var_29)), &conv2_LastVal_13);
    *FirstVal_12 = ((MR_Integer) (conv3_FirstVal_12));
    *LastVal_13 = ((MR_Integer) (conv2_LastVal_13));
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
  MR_Box closure = closure_arg;
  MR_Integer conv1_STATE_VARIABLE_Min_13;
  MR_Integer conv0_STATE_VARIABLE_Max_15;

  ml_backend__ml_simplify_switch__find_min_and_max_in_case_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Min_13, ((MR_Integer) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Max_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Min_13));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Max_15));
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_dense_switch_2_p_0(
  MR_Word Cases_3,
  MR_Unsigned ReqDensity_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_15_18;
  MR_Word TypeCtorInfo_16_19;
  MR_Unsigned NumCases_5;
  MR_Integer FirstCaseVal_6;
  MR_Integer LastCaseVal_7;
  MR_Unsigned CasesRange_8;
  MR_Unsigned Density_9;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Integer Var_13;
  MR_Word Var_15;
  MR_Integer Var_16;
  MR_Integer Var_17;
  MR_Box conv3_FirstCaseVal_6;
  MR_Box conv2_LastCaseVal_7;

  mercury__list__ulength_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), Cases_3, &NumCases_5);
  succeeded = (NumCases_5 > (MR_Unsigned) 2U);
  if (succeeded)
  {
    Var_15 = (MR_Word) (&ml_backend__ml_simplify_switch_scalar_common_1[1]);
    Var_16 = mercury__int__max_int_0_f_0();
    Var_17 = mercury__int__min_int_0_f_0();
    TypeCtorInfo_15_18 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0);
    TypeCtorInfo_16_19 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
    mercury__list__foldl2_6_p_0(TypeCtorInfo_15_18, TypeCtorInfo_16_19, TypeCtorInfo_16_19, Var_15, Cases_3, ((MR_Box) (Var_16)), &conv3_FirstCaseVal_6, ((MR_Box) (Var_17)), &conv2_LastCaseVal_7);
    FirstCaseVal_6 = ((MR_Integer) (conv3_FirstCaseVal_6));
    LastCaseVal_7 = ((MR_Integer) (conv2_LastCaseVal_7));
    Var_12 = (MR_Integer) ((MR_Unsigned) LastCaseVal_7 - (MR_Unsigned) FirstCaseVal_6);
    Var_13 = (MR_Integer) 1;
    Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 + (MR_Unsigned) Var_13);
    succeeded = mercury__uint__from_int_2_p_0(Var_11, &CasesRange_8);
    if (succeeded)
    {
      Density_9 = backend_libs__lookup_switch_util__switch_density_2_f_0(NumCases_5, CasesRange_8);
      succeeded = (Density_9 > ReqDensity_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch__is_integral_type_2_p_0(
  MR_Word MLDSType_3,
  MR_Word * IntType_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) MLDSType_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDSType_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            *IntType_4 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDSType_3, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            MR_Word CtorCat_19 = ((MR_Word) ((MR_hl_field(3, MLDSType_3, 2))));
            MR_Word Var_30;

            succeeded = ((MR_tag((MR_Word) CtorCat_19)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_30 = ((MR_Unsigned) ((MR_hl_field(2, CtorCat_19, 0))) & (MR_Integer) 1);
              succeeded = (Var_30 == (MR_Integer) 0);
              if (succeeded)
              {
                *IntType_4 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            *IntType_4 = ((MR_Unsigned) ((MR_hl_field(3, MLDSType_3, 1))) & (MR_Integer) 15);
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_simplify_switch____Unify____case_labels_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_simplify_switch____Compare____case_labels_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
