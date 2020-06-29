/*
** Automatically generated from `simplify_proc.m'
** by the Mercury compiler,
** version rotd-2020-06-29
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


// :- module check_hlds.simplify.simplify_proc.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_proc__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_proc.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.format_call.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__286__1_4_p_0(
  MR_Word HeadVar__1_127,
  MR_String HeadVar__2_128,
  MR_Word HeadVar__3_129,
  MR_Word * HeadVar__4_130);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
  MR_Word SimplifyTasks0_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_ProcInfo_0_49,
  MR_Word * STATE_VARIABLE_ProcInfo_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4);

static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(
  MR_Word Goal0_4,
  MR_Word * Goal_5,
  MR_Word * ContainsTrace_6);

static void MR_CALL 
check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33,
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word ImplicitStreamWarnings_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word * FormatSpecs_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * STATE_VARIABLE_ProcInfo_34);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * STATE_VARIABLE_ProcInfo_14);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_SimplifyTasks_0_17,
  MR_Word * STATE_VARIABLE_SimplifyTasks_18);


static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[19][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[3][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[2][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][7];


/* sealed */ struct check_hlds__simplify__simplify_proc__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_proc__vector_common_type_6_0_s check_hlds__simplify__simplify_proc_vector_common_6[9];



static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_1[19][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "pragma on the predicate."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "no_inline"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute on the foreign_proc contradicts the"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_duplicate"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "inline"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "may_not_duplicate"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[17])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_2[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_proc_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_4[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_proc_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct check_hlds__simplify__simplify_proc__vector_common_type_6_0_s check_hlds__simplify__simplify_proc_vector_common_6[9] = {
  /* row 0 */   {     (MR_String) "*" },
  /* row 1 */   {     (MR_String) "unchecked_left_shift" },
  /* row 2 */   {     (MR_String) "unchecked_quotient" },
  /* row 3 */   {     (MR_String) "unchecked_rem" },
  /* row 4 */   {     (MR_String) "unchecked_right_shift" },
  /* row 5 */   {     (MR_String) "++" },
  /* row 6 */   {     (MR_String) "char_to_string" },
  /* row 7 */   {     (MR_String) "float_to_string" },
  /* row 8 */   {     (MR_String) "int_to_string" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__286__1_4_p_0(
  MR_Word HeadVar__1_127,
  MR_String HeadVar__2_128,
  MR_Word HeadVar__3_129,
  MR_Word * HeadVar__4_130)
{
  mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_127, HeadVar__2_128, HeadVar__3_129, HeadVar__4_130);
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_may_introduce_calls_3_p_0(
  MR_String ModuleName_4,
  MR_String PredName_5,
  MR_Integer _Arity_6)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_p_0(ModuleName_4, PredName_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_109_97_121_95_105_110_116_114_111_100_117_99_101_95_99_97_108_108_115_95_95_91_51_93_95_48_3_p_0(
  MR_String ModuleName_4,
  MR_String PredName_5)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_11 = (MR_Integer) -1;

      switch (MR_nth_code_unit(ModuleName_4, 0)) {
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(ModuleName_4, 1)) {
            case (MR_Integer) 110:
              if (((MR_nth_code_unit(ModuleName_4, 2)) == (MR_Integer) 116))
                switch (MR_nth_code_unit(ModuleName_4, 3)) {
                  case (MR_Integer) 0:
                    case_num_11 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(4, ModuleName_4, (MR_String) "int16"))
                      case_num_11 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(4, ModuleName_4, (MR_String) "int32"))
                      case_num_11 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 54:
                    if (MR_offset_streq(4, ModuleName_4, (MR_String) "int64"))
                      case_num_11 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(4, ModuleName_4, (MR_String) "int8"))
                      case_num_11 = (MR_Integer) 0;
                    break;
                }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, ModuleName_4, (MR_String) "io"))
                case_num_11 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 112:
          if (MR_offset_streq(1, ModuleName_4, (MR_String) "private_builtin"))
            case_num_11 = (MR_Integer) 2;
          break;
        case (MR_Integer) 115:
          if (((((MR_nth_code_unit(ModuleName_4, 1)) == (MR_Integer) 116)) && (((MR_nth_code_unit(ModuleName_4, 2)) == (MR_Integer) 114))))
            switch (MR_nth_code_unit(ModuleName_4, 3)) {
              case (MR_Integer) 101:
                if (MR_offset_streq(4, ModuleName_4, (MR_String) "stream"))
                  case_num_11 = (MR_Integer) 3;
                break;
              case (MR_Integer) 105:
                if (((((MR_nth_code_unit(ModuleName_4, 4)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ModuleName_4, 5)) == (MR_Integer) 103))))
                  switch (MR_nth_code_unit(ModuleName_4, 6)) {
                    case (MR_Integer) 0:
                      case_num_11 = (MR_Integer) 4;
                      break;
                    case (MR_Integer) 46:
                      if (MR_offset_streq(7, ModuleName_4, (MR_String) "string.format"))
                        case_num_11 = (MR_Integer) 5;
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, ModuleName_4, (MR_String) "table_builtin"))
            case_num_11 = (MR_Integer) 6;
          break;
        case (MR_Integer) 117:
          if (((((((MR_nth_code_unit(ModuleName_4, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(ModuleName_4, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(ModuleName_4, 3)) == (MR_Integer) 116))))
            switch (MR_nth_code_unit(ModuleName_4, 4)) {
              case (MR_Integer) 0:
                case_num_11 = (MR_Integer) 0;
                break;
              case (MR_Integer) 49:
                if (MR_offset_streq(5, ModuleName_4, (MR_String) "uint16"))
                  case_num_11 = (MR_Integer) 0;
                break;
              case (MR_Integer) 51:
                if (MR_offset_streq(5, ModuleName_4, (MR_String) "uint32"))
                  case_num_11 = (MR_Integer) 0;
                break;
              case (MR_Integer) 54:
                if (MR_offset_streq(5, ModuleName_4, (MR_String) "uint64"))
                  case_num_11 = (MR_Integer) 0;
                break;
              case (MR_Integer) 56:
                if (MR_offset_streq(5, ModuleName_4, (MR_String) "uint8"))
                  case_num_11 = (MR_Integer) 0;
                break;
            }
          break;
      }
      switch (case_num_11) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            // case "int", "int16", "int32", "int64", "int8", "uint", "uint16", "uint32", "uint64", "uint8"
            ;
            {
              MR_Integer lo_0 = (MR_Integer) 0;
              MR_Integer hi_1 = (MR_Integer) 4;
              MR_Integer mid_2;
              MR_Integer result_3;

              // binary string simple lookup switch
              ;
              do
              {
                mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                result_3 = MR_strcmp(PredName_5, ((&check_hlds__simplify__simplify_proc_vector_common_6[0 + mid_2]))->check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_0;
                }
                else
                if ((result_3 < (MR_Integer) 0))
                  hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                else
                  lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
              }
              while ((lo_0 <= hi_1));
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "io"
            ;
            succeeded = (strcmp(PredName_5, (MR_String) "write_string") == 0);
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Integer case_num_4 = (MR_Integer) -1;

              switch (MR_nth_code_unit(PredName_5, 0)) {
                case (MR_Integer) 98:
                  if (((((((((((((((MR_nth_code_unit(PredName_5, 1)) == (MR_Integer) 117)) && (((MR_nth_code_unit(PredName_5, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 5)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 6)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 7)) == (MR_Integer) 95))))
                    switch (MR_nth_code_unit(PredName_5, 8)) {
                      case (MR_Integer) 99:
                        if (((((((((((((((((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(PredName_5, 17)) {
                            case (MR_Integer) 101:
                              if (MR_offset_streq(18, PredName_5, (MR_String) "builtin_compound_eq"))
                                case_num_4 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 108:
                              if (MR_offset_streq(18, PredName_5, (MR_String) "builtin_compound_lt"))
                                case_num_4 = (MR_Integer) 1;
                              break;
                          }
                        break;
                      case (MR_Integer) 105:
                        if (((((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(PredName_5, 11)) {
                            case (MR_Integer) 49:
                              if (((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 54)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 14)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int16_gt"))
                                      case_num_4 = (MR_Integer) 2;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int16_lt"))
                                      case_num_4 = (MR_Integer) 3;
                                    break;
                                }
                              break;
                            case (MR_Integer) 51:
                              if (((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 50)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 14)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int32_gt"))
                                      case_num_4 = (MR_Integer) 4;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int32_lt"))
                                      case_num_4 = (MR_Integer) 5;
                                    break;
                                }
                              break;
                            case (MR_Integer) 54:
                              if (((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 52)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 14)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int64_gt"))
                                      case_num_4 = (MR_Integer) 6;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_int64_lt"))
                                      case_num_4 = (MR_Integer) 7;
                                    break;
                                }
                              break;
                            case (MR_Integer) 56:
                              if (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 95))
                                switch (MR_nth_code_unit(PredName_5, 13)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(14, PredName_5, (MR_String) "builtin_int8_gt"))
                                      case_num_4 = (MR_Integer) 8;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(14, PredName_5, (MR_String) "builtin_int8_lt"))
                                      case_num_4 = (MR_Integer) 9;
                                    break;
                                }
                              break;
                            case (MR_Integer) 95:
                              switch (MR_nth_code_unit(PredName_5, 12)) {
                                case (MR_Integer) 103:
                                  if (MR_offset_streq(13, PredName_5, (MR_String) "builtin_int_gt"))
                                    case_num_4 = (MR_Integer) 10;
                                  break;
                                case (MR_Integer) 108:
                                  if (MR_offset_streq(13, PredName_5, (MR_String) "builtin_int_lt"))
                                    case_num_4 = (MR_Integer) 11;
                                  break;
                              }
                              break;
                          }
                        break;
                      case (MR_Integer) 117:
                        if (((((((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(PredName_5, 12)) {
                            case (MR_Integer) 49:
                              if (((((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 54)) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 15)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint16_gt"))
                                      case_num_4 = (MR_Integer) 12;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint16_lt"))
                                      case_num_4 = (MR_Integer) 13;
                                    break;
                                }
                              break;
                            case (MR_Integer) 51:
                              if (((((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 50)) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 15)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint32_gt"))
                                      case_num_4 = (MR_Integer) 14;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint32_lt"))
                                      case_num_4 = (MR_Integer) 15;
                                    break;
                                }
                              break;
                            case (MR_Integer) 54:
                              if (((((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 52)) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 15)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint64_gt"))
                                      case_num_4 = (MR_Integer) 16;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "builtin_uint64_lt"))
                                      case_num_4 = (MR_Integer) 17;
                                    break;
                                }
                              break;
                            case (MR_Integer) 56:
                              if (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 95))
                                switch (MR_nth_code_unit(PredName_5, 14)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_uint8_gt"))
                                      case_num_4 = (MR_Integer) 18;
                                    break;
                                  case (MR_Integer) 108:
                                    if (MR_offset_streq(15, PredName_5, (MR_String) "builtin_uint8_lt"))
                                      case_num_4 = (MR_Integer) 19;
                                    break;
                                }
                              break;
                            case (MR_Integer) 95:
                              switch (MR_nth_code_unit(PredName_5, 13)) {
                                case (MR_Integer) 103:
                                  if (MR_offset_streq(14, PredName_5, (MR_String) "builtin_uint_gt"))
                                    case_num_4 = (MR_Integer) 20;
                                  break;
                                case (MR_Integer) 108:
                                  if (MR_offset_streq(14, PredName_5, (MR_String) "builtin_uint_lt"))
                                    case_num_4 = (MR_Integer) 21;
                                  break;
                              }
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(1, PredName_5, (MR_String) "state_var_copy"))
                    case_num_4 = (MR_Integer) 22;
                  break;
              }
              if ((case_num_4 < (MR_Integer) 0))
                succeeded = MR_FALSE;
              else
              {
                // we found a match; look up the results
                ;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "stream"
            ;
            succeeded = (strcmp(PredName_5, (MR_String) "put") == 0);
          }
          break;
        case (MR_Integer) 4:
          {
            // case "string"
            ;
            {
              MR_Integer lo_5 = (MR_Integer) 0;
              MR_Integer hi_6 = (MR_Integer) 3;
              MR_Integer mid_7;
              MR_Integer result_8;

              // binary string simple lookup switch
              ;
              do
              {
                mid_7 = (((MR_Integer) ((MR_Unsigned) lo_5 + (MR_Unsigned) hi_6)) / (MR_Integer) 2);
                result_8 = MR_strcmp(PredName_5, ((&check_hlds__simplify__simplify_proc_vector_common_6[5 + mid_7]))->check_hlds__simplify__simplify_proc__vector_common_type_6_0__vct_6_f_0);
                if ((result_8 == (MR_Integer) 0))
                {
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_1;
                }
                else
                if ((result_8 < (MR_Integer) 0))
                  hi_6 = (MR_Integer) ((MR_Unsigned) mid_7 - (MR_Unsigned) 1);
                else
                  lo_5 = (MR_Integer) ((MR_Unsigned) mid_7 + (MR_Unsigned) 1);
              }
              while ((lo_5 <= hi_6));
              succeeded = MR_FALSE;
            label_1:;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            // case "string.format"
            ;
            {
              MR_Integer case_num_9 = (MR_Integer) -1;

              if (((((((((((((((MR_nth_code_unit(PredName_5, 0)) == (MR_Integer) 102)) && (((MR_nth_code_unit(PredName_5, 1)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 2)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 3)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 5)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 6)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(PredName_5, 7)) {
                  case (MR_Integer) 99:
                    if (((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 8)) == (MR_Integer) 104)) && (((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(PredName_5, 22)) {
                        case (MR_Integer) 110:
                          if (MR_offset_streq(23, PredName_5, (MR_String) "format_char_component_nowidth"))
                            case_num_9 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 119:
                          if (MR_offset_streq(23, PredName_5, (MR_String) "format_char_component_width"))
                            case_num_9 = (MR_Integer) 1;
                          break;
                      }
                    break;
                  case (MR_Integer) 102:
                    if (((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(PredName_5, 23)) {
                        case (MR_Integer) 110:
                          if (((((((((((((((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 30)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(PredName_5, 31)) {
                              case (MR_Integer) 110:
                                if (MR_offset_streq(32, PredName_5, (MR_String) "format_float_component_nowidth_noprec"))
                                  case_num_9 = (MR_Integer) 2;
                                break;
                              case (MR_Integer) 112:
                                if (MR_offset_streq(32, PredName_5, (MR_String) "format_float_component_nowidth_prec"))
                                  case_num_9 = (MR_Integer) 3;
                                break;
                            }
                          break;
                        case (MR_Integer) 119:
                          if (((((((((((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(PredName_5, 29)) {
                              case (MR_Integer) 110:
                                if (MR_offset_streq(30, PredName_5, (MR_String) "format_float_component_width_noprec"))
                                  case_num_9 = (MR_Integer) 4;
                                break;
                              case (MR_Integer) 112:
                                if (MR_offset_streq(30, PredName_5, (MR_String) "format_float_component_width_prec"))
                                  case_num_9 = (MR_Integer) 5;
                                break;
                            }
                          break;
                      }
                    break;
                  case (MR_Integer) 115:
                    switch (MR_nth_code_unit(PredName_5, 8)) {
                      case (MR_Integer) 105:
                        if (((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 103)) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(PredName_5, 28)) {
                            case (MR_Integer) 110:
                              if (((((((((((((((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 30)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 31)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 35)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 36)) {
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(37, PredName_5, (MR_String) "format_signed_int_component_nowidth_noprec"))
                                      case_num_9 = (MR_Integer) 6;
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(37, PredName_5, (MR_String) "format_signed_int_component_nowidth_prec"))
                                      case_num_9 = (MR_Integer) 7;
                                    break;
                                }
                              break;
                            case (MR_Integer) 119:
                              if (((((((((((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_5, 30)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 31)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 32)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 33)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 34)) {
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(35, PredName_5, (MR_String) "format_signed_int_component_width_noprec"))
                                      case_num_9 = (MR_Integer) 8;
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(35, PredName_5, (MR_String) "format_signed_int_component_width_prec"))
                                      case_num_9 = (MR_Integer) 9;
                                    break;
                                }
                              break;
                          }
                        break;
                      case (MR_Integer) 116:
                        if (((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 114)) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(PredName_5, 24)) {
                            case (MR_Integer) 110:
                              if (((((((((((((((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 30)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 31)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 32)) {
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(33, PredName_5, (MR_String) "format_string_component_nowidth_noprec"))
                                      case_num_9 = (MR_Integer) 10;
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(33, PredName_5, (MR_String) "format_string_component_nowidth_prec"))
                                      case_num_9 = (MR_Integer) 11;
                                    break;
                                }
                              break;
                            case (MR_Integer) 119:
                              if (((((((((((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 30)) {
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(31, PredName_5, (MR_String) "format_string_component_width_noprec"))
                                      case_num_9 = (MR_Integer) 12;
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(31, PredName_5, (MR_String) "format_string_component_width_prec"))
                                      case_num_9 = (MR_Integer) 13;
                                    break;
                                }
                              break;
                          }
                        break;
                    }
                    break;
                  case (MR_Integer) 117:
                    switch (MR_nth_code_unit(PredName_5, 8)) {
                      case (MR_Integer) 105:
                        if (((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(PredName_5, 22)) {
                            case (MR_Integer) 110:
                              if (((((((((((((((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 30)) {
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(31, PredName_5, (MR_String) "format_uint_component_nowidth_noprec"))
                                      case_num_9 = (MR_Integer) 14;
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(31, PredName_5, (MR_String) "format_uint_component_nowidth_prec"))
                                      case_num_9 = (MR_Integer) 15;
                                    break;
                                }
                              break;
                            case (MR_Integer) 119:
                              if (((((((((((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 28)) {
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(29, PredName_5, (MR_String) "format_uint_component_width_noprec"))
                                      case_num_9 = (MR_Integer) 16;
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(29, PredName_5, (MR_String) "format_uint_component_width_prec"))
                                      case_num_9 = (MR_Integer) 17;
                                    break;
                                }
                              break;
                          }
                        break;
                      case (MR_Integer) 110:
                        if (((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 115)) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(PredName_5, 30)) {
                            case (MR_Integer) 110:
                              if (((((((((((((((MR_nth_code_unit(PredName_5, 31)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 32)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 34)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 35)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 36)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 37)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 38)) {
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(39, PredName_5, (MR_String) "format_unsigned_int_component_nowidth_noprec"))
                                      case_num_9 = (MR_Integer) 18;
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(39, PredName_5, (MR_String) "format_unsigned_int_component_nowidth_prec"))
                                      case_num_9 = (MR_Integer) 19;
                                    break;
                                }
                              break;
                            case (MR_Integer) 119:
                              if (((((((((((MR_nth_code_unit(PredName_5, 31)) == (MR_Integer) 105)) && (((MR_nth_code_unit(PredName_5, 32)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 33)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 34)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(PredName_5, 35)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 36)) {
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(37, PredName_5, (MR_String) "format_unsigned_int_component_width_noprec"))
                                      case_num_9 = (MR_Integer) 20;
                                    break;
                                  case (MR_Integer) 112:
                                    if (MR_offset_streq(37, PredName_5, (MR_String) "format_unsigned_int_component_width_prec"))
                                      case_num_9 = (MR_Integer) 21;
                                    break;
                                }
                              break;
                          }
                        break;
                    }
                    break;
                }
              if ((case_num_9 < (MR_Integer) 0))
                succeeded = MR_FALSE;
              else
              {
                // we found a match; look up the results
                ;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            // case "table_builtin"
            ;
            {
              MR_Integer case_num_10 = (MR_Integer) -1;

              if (((((((((((((MR_nth_code_unit(PredName_5, 0)) == (MR_Integer) 116)) && (((MR_nth_code_unit(PredName_5, 1)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 2)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(PredName_5, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 5)) == (MR_Integer) 95))))
                switch (MR_nth_code_unit(PredName_5, 6)) {
                  case (MR_Integer) 101:
                    if (MR_offset_streq(7, PredName_5, (MR_String) "table_error"))
                      case_num_10 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 105:
                    if (((((MR_nth_code_unit(PredName_5, 7)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 8)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(PredName_5, 9)) {
                        case (MR_Integer) 99:
                          if (MR_offset_streq(10, PredName_5, (MR_String) "table_io_copy_io_state"))
                            case_num_10 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 104:
                          if (MR_offset_streq(10, PredName_5, (MR_String) "table_io_has_occurred"))
                            case_num_10 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 105:
                          if (MR_offset_streq(10, PredName_5, (MR_String) "table_io_in_range"))
                            case_num_10 = (MR_Integer) 3;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(10, PredName_5, (MR_String) "table_io_left_bracket_unitized_goal"))
                            case_num_10 = (MR_Integer) 4;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(10, PredName_5, (MR_String) "table_io_right_bracket_unitized_goal"))
                            case_num_10 = (MR_Integer) 5;
                          break;
                      }
                    break;
                  case (MR_Integer) 108:
                    if (((((MR_nth_code_unit(PredName_5, 7)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 8)) == (MR_Integer) 111))))
                      switch (MR_nth_code_unit(PredName_5, 9)) {
                        case (MR_Integer) 107:
                          if (((((((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 117)) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(PredName_5, 13)) {
                              case (MR_Integer) 105:
                                if (((((((((((((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(PredName_5, 20)) {
                                    case (MR_Integer) 97:
                                      if (MR_offset_streq(21, PredName_5, (MR_String) "table_lookup_insert_addr"))
                                        case_num_10 = (MR_Integer) 6;
                                      break;
                                    case (MR_Integer) 99:
                                      if (MR_offset_streq(21, PredName_5, (MR_String) "table_lookup_insert_char"))
                                        case_num_10 = (MR_Integer) 7;
                                      break;
                                    case (MR_Integer) 101:
                                      if (MR_offset_streq(21, PredName_5, (MR_String) "table_lookup_insert_enum"))
                                        case_num_10 = (MR_Integer) 8;
                                      break;
                                    case (MR_Integer) 102:
                                      switch (MR_nth_code_unit(PredName_5, 21)) {
                                        case (MR_Integer) 108:
                                          if (MR_offset_streq(22, PredName_5, (MR_String) "table_lookup_insert_float"))
                                            case_num_10 = (MR_Integer) 9;
                                          break;
                                        case (MR_Integer) 111:
                                          if (MR_offset_streq(22, PredName_5, (MR_String) "table_lookup_insert_foreign_enum"))
                                            case_num_10 = (MR_Integer) 10;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 103:
                                      if (MR_offset_streq(21, PredName_5, (MR_String) "table_lookup_insert_gen"))
                                        case_num_10 = (MR_Integer) 11;
                                      break;
                                    case (MR_Integer) 105:
                                      if (MR_offset_streq(21, PredName_5, (MR_String) "table_lookup_insert_int"))
                                        case_num_10 = (MR_Integer) 12;
                                      break;
                                    case (MR_Integer) 112:
                                      if (((((((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 121))))
                                        switch (MR_nth_code_unit(PredName_5, 24)) {
                                          case (MR_Integer) 0:
                                            case_num_10 = (MR_Integer) 13;
                                            break;
                                          case (MR_Integer) 95:
                                            if (MR_offset_streq(25, PredName_5, (MR_String) "table_lookup_insert_poly_addr"))
                                              case_num_10 = (MR_Integer) 14;
                                            break;
                                        }
                                      break;
                                    case (MR_Integer) 115:
                                      if (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 116))
                                        switch (MR_nth_code_unit(PredName_5, 22)) {
                                          case (MR_Integer) 97:
                                            if (MR_offset_streq(23, PredName_5, (MR_String) "table_lookup_insert_start_int"))
                                              case_num_10 = (MR_Integer) 15;
                                            break;
                                          case (MR_Integer) 114:
                                            if (MR_offset_streq(23, PredName_5, (MR_String) "table_lookup_insert_string"))
                                              case_num_10 = (MR_Integer) 16;
                                            break;
                                        }
                                      break;
                                    case (MR_Integer) 116:
                                      if (((((((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 121)) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 101))))
                                        switch (MR_nth_code_unit(PredName_5, 24)) {
                                          case (MR_Integer) 99:
                                            if (MR_offset_streq(25, PredName_5, (MR_String) "table_lookup_insert_typeclassinfo"))
                                              case_num_10 = (MR_Integer) 17;
                                            break;
                                          case (MR_Integer) 105:
                                            if (MR_offset_streq(25, PredName_5, (MR_String) "table_lookup_insert_typeinfo"))
                                              case_num_10 = (MR_Integer) 18;
                                            break;
                                        }
                                      break;
                                  }
                                break;
                              case (MR_Integer) 114:
                                if (((((((((((((((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(PredName_5, 21)) {
                                    case (MR_Integer) 97:
                                      if (MR_offset_streq(22, PredName_5, (MR_String) "table_lookup_restore_any_answer"))
                                        case_num_10 = (MR_Integer) 19;
                                      break;
                                    case (MR_Integer) 99:
                                      if (MR_offset_streq(22, PredName_5, (MR_String) "table_lookup_restore_char_answer"))
                                        case_num_10 = (MR_Integer) 20;
                                      break;
                                    case (MR_Integer) 102:
                                      if (MR_offset_streq(22, PredName_5, (MR_String) "table_lookup_restore_float_answer"))
                                        case_num_10 = (MR_Integer) 21;
                                      break;
                                    case (MR_Integer) 105:
                                      switch (MR_nth_code_unit(PredName_5, 22)) {
                                        case (MR_Integer) 110:
                                          if (MR_offset_streq(23, PredName_5, (MR_String) "table_lookup_restore_int_answer"))
                                            case_num_10 = (MR_Integer) 22;
                                          break;
                                        case (MR_Integer) 111:
                                          if (MR_offset_streq(23, PredName_5, (MR_String) "table_lookup_restore_io_state_answer"))
                                            case_num_10 = (MR_Integer) 23;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(22, PredName_5, (MR_String) "table_lookup_restore_string_answer"))
                                        case_num_10 = (MR_Integer) 24;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 115:
                                if (((((((((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 97)) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(PredName_5, 18)) {
                                    case (MR_Integer) 97:
                                      if (MR_offset_streq(19, PredName_5, (MR_String) "table_lookup_save_any_answer"))
                                        case_num_10 = (MR_Integer) 25;
                                      break;
                                    case (MR_Integer) 99:
                                      if (MR_offset_streq(19, PredName_5, (MR_String) "table_lookup_save_char_answer"))
                                        case_num_10 = (MR_Integer) 26;
                                      break;
                                    case (MR_Integer) 102:
                                      if (MR_offset_streq(19, PredName_5, (MR_String) "table_lookup_save_float_answer"))
                                        case_num_10 = (MR_Integer) 27;
                                      break;
                                    case (MR_Integer) 105:
                                      switch (MR_nth_code_unit(PredName_5, 19)) {
                                        case (MR_Integer) 110:
                                          if (MR_offset_streq(20, PredName_5, (MR_String) "table_lookup_save_int_answer"))
                                            case_num_10 = (MR_Integer) 28;
                                          break;
                                        case (MR_Integer) 111:
                                          if (MR_offset_streq(20, PredName_5, (MR_String) "table_lookup_save_io_state_answer"))
                                            case_num_10 = (MR_Integer) 29;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(19, PredName_5, (MR_String) "table_lookup_save_string_answer"))
                                        case_num_10 = (MR_Integer) 30;
                                      break;
                                  }
                                break;
                            }
                          break;
                        case (MR_Integer) 112:
                          if (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 95))
                            switch (MR_nth_code_unit(PredName_5, 11)) {
                              case (MR_Integer) 109:
                                if (((((((((((((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 97)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(PredName_5, 19)) {
                                    case (MR_Integer) 97:
                                      if (MR_offset_streq(20, PredName_5, (MR_String) "table_loop_mark_as_active_and_fail"))
                                        case_num_10 = (MR_Integer) 31;
                                      break;
                                    case (MR_Integer) 105:
                                      if (((((((((((((((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 101))))
                                        switch (MR_nth_code_unit(PredName_5, 27)) {
                                          case (MR_Integer) 0:
                                            case_num_10 = (MR_Integer) 32;
                                            break;
                                          case (MR_Integer) 95:
                                            if (MR_offset_streq(28, PredName_5, (MR_String) "table_loop_mark_as_inactive_and_fail"))
                                              case_num_10 = (MR_Integer) 33;
                                            break;
                                        }
                                      break;
                                  }
                                break;
                              case (MR_Integer) 115:
                                if (((((((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 112))))
                                  switch (MR_nth_code_unit(PredName_5, 16)) {
                                    case (MR_Integer) 0:
                                      case_num_10 = (MR_Integer) 34;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(17, PredName_5, (MR_String) "table_loop_setup_shortcut"))
                                        case_num_10 = (MR_Integer) 35;
                                      break;
                                  }
                                break;
                            }
                          break;
                      }
                    break;
                  case (MR_Integer) 109:
                    switch (MR_nth_code_unit(PredName_5, 7)) {
                      case (MR_Integer) 101:
                        if (((((((MR_nth_code_unit(PredName_5, 8)) == (MR_Integer) 109)) && (((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 95))))
                          switch (MR_nth_code_unit(PredName_5, 11)) {
                            case (MR_Integer) 99:
                              if (MR_offset_streq(12, PredName_5, (MR_String) "table_memo_create_answer_block"))
                                case_num_10 = (MR_Integer) 36;
                              break;
                            case (MR_Integer) 100:
                              if (((((((((((((((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 112))))
                                switch (MR_nth_code_unit(PredName_5, 20)) {
                                  case (MR_Integer) 0:
                                    case_num_10 = (MR_Integer) 37;
                                    break;
                                  case (MR_Integer) 95:
                                    if (MR_offset_streq(21, PredName_5, (MR_String) "table_memo_det_setup_shortcut"))
                                      case_num_10 = (MR_Integer) 38;
                                    break;
                                }
                              break;
                            case (MR_Integer) 103:
                              if (MR_offset_streq(12, PredName_5, (MR_String) "table_memo_get_answer_block"))
                                case_num_10 = (MR_Integer) 39;
                              break;
                            case (MR_Integer) 109:
                              if (((((((((((((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 97)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 19)) {
                                  case (MR_Integer) 97:
                                    if (MR_offset_streq(20, PredName_5, (MR_String) "table_memo_mark_as_active_and_fail"))
                                      case_num_10 = (MR_Integer) 40;
                                    break;
                                  case (MR_Integer) 99:
                                    if (MR_offset_streq(20, PredName_5, (MR_String) "table_memo_mark_as_complete_and_fail"))
                                      case_num_10 = (MR_Integer) 41;
                                    break;
                                  case (MR_Integer) 102:
                                    if (MR_offset_streq(20, PredName_5, (MR_String) "table_memo_mark_as_failed"))
                                      case_num_10 = (MR_Integer) 42;
                                    break;
                                  case (MR_Integer) 105:
                                    if (MR_offset_streq(20, PredName_5, (MR_String) "table_memo_mark_as_incomplete"))
                                      case_num_10 = (MR_Integer) 43;
                                    break;
                                  case (MR_Integer) 115:
                                    if (MR_offset_streq(20, PredName_5, (MR_String) "table_memo_mark_as_succeeded"))
                                      case_num_10 = (MR_Integer) 44;
                                    break;
                                }
                              break;
                            case (MR_Integer) 110:
                              if (((((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 111)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 15)) {
                                  case (MR_Integer) 97:
                                    if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 30)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 31)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 32)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 33)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 34)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 35)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 36)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 37)) == (MR_Integer) 101))))
                                      switch (MR_nth_code_unit(PredName_5, 38)) {
                                        case (MR_Integer) 0:
                                          case_num_10 = (MR_Integer) 45;
                                          break;
                                        case (MR_Integer) 95:
                                          if (MR_offset_streq(39, PredName_5, (MR_String) "table_memo_non_answer_is_not_duplicate_shortcut"))
                                            case_num_10 = (MR_Integer) 46;
                                          break;
                                      }
                                    break;
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "table_memo_non_get_answer_table"))
                                      case_num_10 = (MR_Integer) 47;
                                    break;
                                  case (MR_Integer) 114:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "table_memo_non_return_all_shortcut"))
                                      case_num_10 = (MR_Integer) 48;
                                    break;
                                  case (MR_Integer) 115:
                                    if (MR_offset_streq(16, PredName_5, (MR_String) "table_memo_non_setup"))
                                      case_num_10 = (MR_Integer) 49;
                                    break;
                                }
                              break;
                            case (MR_Integer) 114:
                              if (((((((((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(PredName_5, 30)) {
                                  case (MR_Integer) 109:
                                    if (MR_offset_streq(31, PredName_5, (MR_String) "table_memo_return_all_answers_multi"))
                                      case_num_10 = (MR_Integer) 50;
                                    break;
                                  case (MR_Integer) 110:
                                    if (MR_offset_streq(31, PredName_5, (MR_String) "table_memo_return_all_answers_nondet"))
                                      case_num_10 = (MR_Integer) 51;
                                    break;
                                }
                              break;
                            case (MR_Integer) 115:
                              if (((((((((((((((((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 112))))
                                switch (MR_nth_code_unit(PredName_5, 21)) {
                                  case (MR_Integer) 0:
                                    case_num_10 = (MR_Integer) 52;
                                    break;
                                  case (MR_Integer) 95:
                                    if (MR_offset_streq(22, PredName_5, (MR_String) "table_memo_semi_setup_shortcut"))
                                      case_num_10 = (MR_Integer) 53;
                                    break;
                                }
                              break;
                          }
                        break;
                      case (MR_Integer) 109:
                        switch (MR_nth_code_unit(PredName_5, 8)) {
                          case (MR_Integer) 95:
                            switch (MR_nth_code_unit(PredName_5, 9)) {
                              case (MR_Integer) 97:
                                if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 30)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 31)) == (MR_Integer) 101))))
                                  switch (MR_nth_code_unit(PredName_5, 32)) {
                                    case (MR_Integer) 0:
                                      case_num_10 = (MR_Integer) 54;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(33, PredName_5, (MR_String) "table_mm_answer_is_not_duplicate_shortcut"))
                                        case_num_10 = (MR_Integer) 55;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 99:
                                switch (MR_nth_code_unit(PredName_5, 10)) {
                                  case (MR_Integer) 111:
                                    if (MR_offset_streq(11, PredName_5, (MR_String) "table_mm_completion"))
                                      case_num_10 = (MR_Integer) 56;
                                    break;
                                  case (MR_Integer) 114:
                                    if (MR_offset_streq(11, PredName_5, (MR_String) "table_mm_create_answer_block"))
                                      case_num_10 = (MR_Integer) 57;
                                    break;
                                }
                                break;
                              case (MR_Integer) 102:
                                if (MR_offset_streq(10, PredName_5, (MR_String) "table_mm_fill_answer_block_shortcut"))
                                  case_num_10 = (MR_Integer) 58;
                                break;
                              case (MR_Integer) 103:
                                if (MR_offset_streq(10, PredName_5, (MR_String) "table_mm_get_answer_table"))
                                  case_num_10 = (MR_Integer) 59;
                                break;
                              case (MR_Integer) 114:
                                if (((((((((((((((((((((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 101)) && (((MR_nth_code_unit(PredName_5, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 95))))
                                  switch (MR_nth_code_unit(PredName_5, 20)) {
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(21, PredName_5, (MR_String) "table_mm_return_all_multi"))
                                        case_num_10 = (MR_Integer) 60;
                                      break;
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(21, PredName_5, (MR_String) "table_mm_return_all_nondet"))
                                        case_num_10 = (MR_Integer) 61;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(21, PredName_5, (MR_String) "table_mm_return_all_shortcut"))
                                        case_num_10 = (MR_Integer) 62;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 115:
                                switch (MR_nth_code_unit(PredName_5, 10)) {
                                  case (MR_Integer) 101:
                                    if (MR_offset_streq(11, PredName_5, (MR_String) "table_mm_setup"))
                                      case_num_10 = (MR_Integer) 63;
                                    break;
                                  case (MR_Integer) 117:
                                    if (MR_offset_streq(11, PredName_5, (MR_String) "table_mm_suspend_consumer"))
                                      case_num_10 = (MR_Integer) 64;
                                    break;
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 111:
                            if (((((MR_nth_code_unit(PredName_5, 9)) == (MR_Integer) 115)) && (((MR_nth_code_unit(PredName_5, 10)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(PredName_5, 11)) {
                                case (MR_Integer) 97:
                                  if (((((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 110)) && (((MR_nth_code_unit(PredName_5, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(PredName_5, 30)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(PredName_5, 31)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 32)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 33)) == (MR_Integer) 101))))
                                    switch (MR_nth_code_unit(PredName_5, 34)) {
                                      case (MR_Integer) 0:
                                        case_num_10 = (MR_Integer) 65;
                                        break;
                                      case (MR_Integer) 95:
                                        if (MR_offset_streq(35, PredName_5, (MR_String) "table_mmos_answer_is_not_duplicate_shortcut"))
                                          case_num_10 = (MR_Integer) 66;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 99:
                                  switch (MR_nth_code_unit(PredName_5, 12)) {
                                    case (MR_Integer) 111:
                                      switch (MR_nth_code_unit(PredName_5, 13)) {
                                        case (MR_Integer) 109:
                                          if (MR_offset_streq(14, PredName_5, (MR_String) "table_mmos_completion"))
                                            case_num_10 = (MR_Integer) 67;
                                          break;
                                        case (MR_Integer) 110:
                                          if (((((((((((((((((((((((((((((((((((MR_nth_code_unit(PredName_5, 14)) == (MR_Integer) 115)) && (((MR_nth_code_unit(PredName_5, 15)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(PredName_5, 16)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(PredName_5, 17)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 19)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 20)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 21)) == (MR_Integer) 120)))) && (((MR_nth_code_unit(PredName_5, 22)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(PredName_5, 23)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(PredName_5, 24)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(PredName_5, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(PredName_5, 26)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(PredName_5, 27)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(PredName_5, 28)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(PredName_5, 29)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(PredName_5, 30)) == (MR_Integer) 95))))
                                            switch (MR_nth_code_unit(PredName_5, 31)) {
                                              case (MR_Integer) 109:
                                                if (MR_offset_streq(32, PredName_5, (MR_String) "table_mmos_consume_next_answer_multi"))
                                                  case_num_10 = (MR_Integer) 68;
                                                break;
                                              case (MR_Integer) 110:
                                                if (MR_offset_streq(32, PredName_5, (MR_String) "table_mmos_consume_next_answer_nondet"))
                                                  case_num_10 = (MR_Integer) 69;
                                                break;
                                            }
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 114:
                                      if (MR_offset_streq(13, PredName_5, (MR_String) "table_mmos_create_answer_block"))
                                        case_num_10 = (MR_Integer) 70;
                                      break;
                                  }
                                  break;
                                case (MR_Integer) 112:
                                  if (MR_offset_streq(12, PredName_5, (MR_String) "table_mmos_pickup_inputs"))
                                    case_num_10 = (MR_Integer) 71;
                                  break;
                                case (MR_Integer) 114:
                                  if (((MR_nth_code_unit(PredName_5, 12)) == (MR_Integer) 101))
                                    switch (MR_nth_code_unit(PredName_5, 13)) {
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(14, PredName_5, (MR_String) "table_mmos_restore_answers"))
                                          case_num_10 = (MR_Integer) 72;
                                        break;
                                      case (MR_Integer) 116:
                                        if (MR_offset_streq(14, PredName_5, (MR_String) "table_mmos_return_answer"))
                                          case_num_10 = (MR_Integer) 73;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 115:
                                  switch (MR_nth_code_unit(PredName_5, 12)) {
                                    case (MR_Integer) 97:
                                      if (MR_offset_streq(13, PredName_5, (MR_String) "table_mmos_save_inputs"))
                                        case_num_10 = (MR_Integer) 74;
                                      break;
                                    case (MR_Integer) 101:
                                      if (MR_offset_streq(13, PredName_5, (MR_String) "table_mmos_setup_consumer"))
                                        case_num_10 = (MR_Integer) 75;
                                      break;
                                  }
                                  break;
                              }
                            break;
                        }
                        break;
                    }
                    break;
                }
              if ((case_num_10 < (MR_Integer) 0))
                succeeded = MR_FALSE;
              else
              {
                // we found a match; look up the results
                ;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_goal_update_vars_in_proc_11_p_0(
  MR_Word SimplifyTasks_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word STATE_VARIABLE_ProcInfo_0_31,
  MR_Word * STATE_VARIABLE_ProcInfo_32,
  MR_Word InstMap0_17,
  MR_Word STATE_VARIABLE_Goal_0_33,
  MR_Word * STATE_VARIABLE_Goal_34,
  MR_Integer * CostDelta_19)
{
  {
    MR_Word SimplifyInfo0_20;
    MR_Word SimplifyInfo_25;
    MR_Word VarSet_26;
    MR_Word VarTypes_27;
    MR_Word RttiVarMaps_28;
    MR_Word STATE_VARIABLE_ProcInfo_37_37;
    MR_Word STATE_VARIABLE_ProcInfo_38_38;

    check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_14, ProcId_15, STATE_VARIABLE_ProcInfo_0_31, SimplifyTasks_12, &SimplifyInfo0_20);
    check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(STATE_VARIABLE_Goal_0_33, STATE_VARIABLE_Goal_34, (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_3[2]), InstMap0_17, SimplifyInfo0_20, &SimplifyInfo_25);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(SimplifyInfo_25, STATE_VARIABLE_ModuleInfo_30);
    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(SimplifyInfo_25, &VarSet_26);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(SimplifyInfo_25, &VarTypes_27);
    check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(SimplifyInfo_25, &RttiVarMaps_28);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_26, STATE_VARIABLE_ProcInfo_0_31, &STATE_VARIABLE_ProcInfo_37_37);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_27, STATE_VARIABLE_ProcInfo_37_37, &STATE_VARIABLE_ProcInfo_38_38);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_28, STATE_VARIABLE_ProcInfo_38_38, STATE_VARIABLE_ProcInfo_32);
    check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(SimplifyInfo_25, CostDelta_19);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(
  MR_Word SimplifyTasks_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_17,
  MR_Word * STATE_VARIABLE_ProcInfo_18)
{
  {
    MR_Word Var_14;

    hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Simplifying ", PredId_9, STATE_VARIABLE_ModuleInfo_0_15);
    check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(SimplifyTasks_8, PredId_9, ProcId_10, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_ProcInfo_0_17, STATE_VARIABLE_ProcInfo_18, &Var_14);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_pred_procs_9_p_0(
  MR_Word SimplifyTasks_1,
  MR_Word PredId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_PredInfo_7 = STATE_VARIABLE_PredInfo_0_6;
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
    {
      MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_34_34;
      MR_Word STATE_VARIABLE_PredInfo_35_35;
      MR_Word STATE_VARIABLE_Specs_36_36;
      MR_Word ProcTable0_52;
      MR_Word ProcInfo0_53;
      MR_Word ProcInfo_54;
      MR_Word ProcSpecs_55;
      MR_Word HasParallelConj_56;
      MR_Word HasUserEvent_57;
      MR_Word ProcTable_58;
      MR_Word STATE_VARIABLE_ModuleInfo_29_59;
      MR_Word STATE_VARIABLE_ModuleInfo_30_60;
      MR_Box conv0_ProcInfo0_53;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_6, &ProcTable0_52);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_52, ((MR_Box) (ProcId_23)), &conv0_ProcInfo0_53);
      ProcInfo0_53 = ((MR_Word) (conv0_ProcInfo0_53));
      check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(SimplifyTasks_1, PredId_2, ProcId_23, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_29_59, ProcInfo0_53, &ProcInfo_54, &ProcSpecs_55);
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_54, &HasParallelConj_56);
      switch (HasParallelConj_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_ModuleInfo_30_60 = STATE_VARIABLE_ModuleInfo_29_59;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(STATE_VARIABLE_ModuleInfo_29_59, &STATE_VARIABLE_ModuleInfo_30_60);
          break;
      }
      hlds__hlds_pred__proc_info_get_has_user_event_2_p_0(ProcInfo_54, &HasUserEvent_57);
      switch (HasUserEvent_57) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_ModuleInfo_34_34 = STATE_VARIABLE_ModuleInfo_30_60;
          break;
        case (MR_Integer) 0:
          hlds__hlds_module__module_info_set_has_user_event_2_p_0(STATE_VARIABLE_ModuleInfo_30_60, &STATE_VARIABLE_ModuleInfo_34_34);
          break;
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_54)), ProcTable0_52, &ProcTable_58);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_58, STATE_VARIABLE_PredInfo_0_6, &STATE_VARIABLE_PredInfo_35_35);
      parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(ProcSpecs_55, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_36_36);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_24;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_34_34;
      next_value_of_STATE_VARIABLE_PredInfo_0_6 = STATE_VARIABLE_PredInfo_35_35;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_36_36;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      STATE_VARIABLE_PredInfo_0_6 = next_value_of_STATE_VARIABLE_PredInfo_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_130;

    check_hlds__simplify__simplify_proc__IntroducedFrom__pred__simplify_proc_return_msgs__286__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_130);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_130));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_return_msgs_8_p_0(
  MR_Word SimplifyTasks0_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_ProcInfo_0_49,
  MR_Word * STATE_VARIABLE_ProcInfo_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_15;
    MR_Word PredInfo0_16;
    MR_Word Markers0_17;
    MR_Word FormatSpecs_19;
    MR_Word Info0_20;
    MR_Word CodeModel_23;
    MR_Word ProcIsModelNon_24;
    MR_Word NestedContext0_25;
    MR_Word InstMap0_26;
    MR_Word Goal0_27;
    MR_Word Goal_28;
    MR_Word Info_29;
    MR_Word VarSet0_30;
    MR_Word VarTypes1_31;
    MR_Word RttiVarMaps_32;
    MR_Word ElimVarsLists0_33;
    MR_Word ElimVarsLists_34;
    MR_Word ElimVars_35;
    MR_Word VarSet1_36;
    MR_Word VarTypes_37;
    MR_Word VarSet_39;
    MR_Word HasParallelConj_40;
    MR_Word HasUserEvent_41;
    MR_Word CurDeletedCallCallees_42;
    MR_Word DeletedCallCallees0_43;
    MR_Word DeletedCallCallees_44;
    MR_Word Status_45;
    MR_Word IsDefinedHere_46;
    MR_Word STATE_VARIABLE_ProcInfo_53_53;
    MR_Word STATE_VARIABLE_ModuleInfo_58_58;
    MR_Word STATE_VARIABLE_ProcInfo_59_59;
    MR_Word STATE_VARIABLE_ProcInfo_61_61;
    MR_Word STATE_VARIABLE_ProcInfo_64_64;
    MR_Word STATE_VARIABLE_ProcInfo_65_65;
    MR_Word STATE_VARIABLE_ProcInfo_66_66;
    MR_Word STATE_VARIABLE_ProcInfo_67_67;
    MR_Word STATE_VARIABLE_ProcInfo_68_68;
    MR_Word STATE_VARIABLE_ProcInfo_69_69;
    MR_Word STATE_VARIABLE_Specs_72_72;
    MR_Word STATE_VARIABLE_Specs_73_73;
    MR_Word STATE_VARIABLE_Specs_74_74;
    MR_Word Var_78;
    MR_Word Var_55;

    check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(STATE_VARIABLE_ModuleInfo_0_47, PredId_10, STATE_VARIABLE_ProcInfo_0_49, SimplifyTasks0_9, &SimplifyTasks_15);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_47, PredId_10, &PredInfo0_16);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_16, &Markers0_17);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_17, (MR_Integer) 22);
    if (succeeded)
      check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(STATE_VARIABLE_ProcInfo_0_49, &STATE_VARIABLE_ProcInfo_53_53);
    else
      STATE_VARIABLE_ProcInfo_53_53 = STATE_VARIABLE_ProcInfo_0_49;
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_17, (MR_Integer) 26);
    if (succeeded)
    {
      Var_78 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_15, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
      Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimplifyTasks_15, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
      succeeded = (Var_55 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word ImplicitStreamWarnings_18;

      switch (Var_78) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ImplicitStreamWarnings_18 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          ImplicitStreamWarnings_18 = (MR_Integer) 1;
          break;
      }
      check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_58_58, ImplicitStreamWarnings_18, PredId_10, ProcId_11, &FormatSpecs_19, STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_ProcInfo_59_59);
    }
    else
    {
      FormatSpecs_19 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_ProcInfo_59_59 = STATE_VARIABLE_ProcInfo_53_53;
      STATE_VARIABLE_ModuleInfo_58_58 = STATE_VARIABLE_ModuleInfo_0_47;
    }
    check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_58_58, PredId_10, ProcId_11, STATE_VARIABLE_ProcInfo_59_59, SimplifyTasks_15, &Info0_20);
    CodeModel_23 = hlds__code_model__proc_info_interface_code_model_1_f_0(STATE_VARIABLE_ProcInfo_59_59);
    switch (CodeModel_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        ProcIsModelNon_24 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        ProcIsModelNon_24 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_4[1]));
        break;
    }
    {
      NestedContext0_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NestedContext0_25, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), NestedContext0_25, 1) = ((MR_Box) (ProcIsModelNon_24));
      MR_hl_field(MR_mktag(0), NestedContext0_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_59_59, STATE_VARIABLE_ModuleInfo_58_58, &InstMap0_26);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_59_59, &Goal0_27);
    check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(Goal0_27, &Goal_28, NestedContext0_25, InstMap0_26, Info0_20, &Info_29);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_28, STATE_VARIABLE_ProcInfo_59_59, &STATE_VARIABLE_ProcInfo_61_61);
    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(Info_29, &VarSet0_30);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(Info_29, &VarTypes1_31);
    check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(Info_29, &RttiVarMaps_32);
    check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(Info_29, &ElimVarsLists0_33);
    mercury__list__sort_2_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[1]), ElimVarsLists0_33, &ElimVarsLists_34);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), ElimVarsLists_34, &ElimVars_35);
    mercury__varset__delete_sorted_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ElimVars_35, VarSet0_30, &VarSet1_36);
    hlds__vartypes__delete_sorted_var_types_3_p_0(ElimVars_35, VarTypes1_31, &VarTypes_37);
    succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(Info_29);
    if (succeeded)
    {
      MR_Word VarNameRemap_38;
      MR_Word Var_63;
      MR_Box conv1_VarSet_39;

      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(STATE_VARIABLE_ProcInfo_61_61, &VarNameRemap_38);
      mercury__map__foldl_4_p_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[2]), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_3[1]), VarNameRemap_38, ((MR_Box) (VarSet1_36)), &conv1_VarSet_39);
      VarSet_39 = ((MR_Word) (conv1_VarSet_39));
      Var_63 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(Var_63, STATE_VARIABLE_ProcInfo_61_61, &STATE_VARIABLE_ProcInfo_64_64);
    }
    else
    {
      VarSet_39 = VarSet0_30;
      STATE_VARIABLE_ProcInfo_64_64 = STATE_VARIABLE_ProcInfo_61_61;
    }
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_39, STATE_VARIABLE_ProcInfo_64_64, &STATE_VARIABLE_ProcInfo_65_65);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_37, STATE_VARIABLE_ProcInfo_65_65, &STATE_VARIABLE_ProcInfo_66_66);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_32, STATE_VARIABLE_ProcInfo_66_66, &STATE_VARIABLE_ProcInfo_67_67);
    check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(Info_29, &HasParallelConj_40);
    hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0(HasParallelConj_40, STATE_VARIABLE_ProcInfo_67_67, &STATE_VARIABLE_ProcInfo_68_68);
    check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(Info_29, &HasUserEvent_41);
    hlds__hlds_pred__proc_info_set_has_user_event_3_p_0(HasUserEvent_41, STATE_VARIABLE_ProcInfo_68_68, &STATE_VARIABLE_ProcInfo_69_69);
    check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(Info_29, &CurDeletedCallCallees_42);
    hlds__hlds_pred__proc_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_ProcInfo_69_69, &DeletedCallCallees0_43);
    mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CurDeletedCallCallees_42, DeletedCallCallees0_43, &DeletedCallCallees_44);
    hlds__hlds_pred__proc_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_44, STATE_VARIABLE_ProcInfo_69_69, STATE_VARIABLE_ProcInfo_50);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_29, STATE_VARIABLE_ModuleInfo_48);
    check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(Info_29, &STATE_VARIABLE_Specs_72_72);
    STATE_VARIABLE_Specs_73_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FormatSpecs_19, STATE_VARIABLE_Specs_72_72);
    check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(*STATE_VARIABLE_ModuleInfo_48, PredId_10, *STATE_VARIABLE_ProcInfo_50, STATE_VARIABLE_Specs_73_73, &STATE_VARIABLE_Specs_74_74);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_16, &Status_45);
    IsDefinedHere_46 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_45);
    switch (IsDefinedHere_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_51 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_74_74;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_top_level_goal_6_p_0(
  MR_Word STATE_VARIABLE_Goal_0_15,
  MR_Word * STATE_VARIABLE_Goal_16,
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word OriginalSimplifyTasks_12;
    MR_Word FoundContainsTrace_13;
    MR_Word STATE_VARIABLE_Goal_25_25;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word STATE_VARIABLE_Goal_35_35;

    check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_17, &OriginalSimplifyTasks_12);
    succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(STATE_VARIABLE_Info_0_17);
    if (!(succeeded))
      succeeded = check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(STATE_VARIABLE_Info_0_17);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_SimplifyTasks_22_22;
      MR_Word STATE_VARIABLE_Info_24_24;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_SimplifyTasks_32_32;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OriginalSimplifyTasks_12, (MR_Integer) 0)));
      MR_Unsigned packed_word_1;

      {
        STATE_VARIABLE_SimplifyTasks_22_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_SimplifyTasks_22_22, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2560U)))) | (((((MR_Unsigned) ((MR_Integer) 0) << 9)) | (((MR_Unsigned) ((MR_Integer) 0) << 11))))));
      }
      check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(STATE_VARIABLE_SimplifyTasks_22_22, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_24_24);
      check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(STATE_VARIABLE_Goal_0_15, &STATE_VARIABLE_Goal_25_25, NestedContext0_8, InstMap0_9, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_26_26);
      check_hlds__simplify__simplify_info__simplify_info_set_allow_messages_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OriginalSimplifyTasks_12, (MR_Integer) 0)));
      {
        STATE_VARIABLE_SimplifyTasks_32_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_SimplifyTasks_32_32, 0) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 80U)))) | (((((MR_Unsigned) ((MR_Integer) 0) << 4)) | (((MR_Unsigned) ((MR_Integer) 0) << 6))))));
      }
      check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(STATE_VARIABLE_SimplifyTasks_32_32, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_34_34);
    }
    else
    {
      STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_0_17;
      STATE_VARIABLE_Goal_25_25 = STATE_VARIABLE_Goal_0_15;
    }
    check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(STATE_VARIABLE_Goal_25_25, &STATE_VARIABLE_Goal_35_35, NestedContext0_8, InstMap0_9, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_18);
    check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(*STATE_VARIABLE_Info_18, &FoundContainsTrace_13);
    switch (FoundContainsTrace_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Goal_16 = STATE_VARIABLE_Goal_35_35;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_14;

          check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(STATE_VARIABLE_Goal_35_35, STATE_VARIABLE_Goal_16, &Var_14);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ContainsTrace_4 = STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word GoalContainsTrace_17;
    MR_Word STATE_VARIABLE_ContainsTrace_20_20;

    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(Goal0_15, &Goal_16, &GoalContainsTrace_17);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    STATE_VARIABLE_ContainsTrace_20_20 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_17, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_ContainsTrace_20_20, STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ContainsTrace_4 = STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word GoalContainsTrace_13;
    MR_Word STATE_VARIABLE_ContainsTrace_16_16;

    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(Goal0_8, &Goal_10, &GoalContainsTrace_13);
    STATE_VARIABLE_ContainsTrace_16_16 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_13, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_ContainsTrace_16_16, STATE_VARIABLE_ContainsTrace_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(
  MR_Word Goal0_4,
  MR_Word * Goal_5,
  MR_Word * ContainsTrace_6)
{
  {
    MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 0))));
    MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 1))));
    MR_Word GoalExpr_32;
    MR_Word GoalInfo_94;

    switch (MR_tag((MR_Word) GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_51 = (MR_Word) ((MR_Word) (GoalExpr0_7));
          MR_Word SubGoal_52;

          check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(SubGoal0_51, &SubGoal_52, ContainsTrace_6);
          GoalExpr_32 = (MR_Word) ((MR_Word) (SubGoal_52));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          GoalExpr_32 = GoalExpr0_7;
          *ContainsTrace_6 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_32 = GoalExpr0_7;
              *ContainsTrace_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word SubGoals0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
              MR_Word SubGoals_36;

              check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(SubGoals0_34, &SubGoals_36, (MR_Integer) 1, ContainsTrace_6);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoals_36));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word SubGoals_102;

              check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(SubGoals0_100, &SubGoals_102, (MR_Integer) 1, ContainsTrace_6);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (SubGoals_102));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word CanFail_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3))));
              MR_Word Cases_40;

              check_hlds__simplify__simplify_proc__case_list_contains_trace_acc_4_p_0(Cases0_39, &Cases_40, (MR_Integer) 1, ContainsTrace_6);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (SwitchVar_37));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = (MR_Box) ((MR_Unsigned) (CanFail_38));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 3) = ((MR_Box) (Cases_40));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word SubGoal0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
              MR_Word SubGoal_105;

              switch (MR_tag((MR_Word) Reason_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(SubGoal0_104, &SubGoal_105, ContainsTrace_6);
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(SubGoal0_104, &SubGoal_105, ContainsTrace_6);
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word FGT_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_53, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (FGT_60) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              SubGoal_105 = SubGoal0_104;
                              *ContainsTrace_6 = (MR_Integer) 1;
                            }
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 3:
                            check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(SubGoal0_104, &SubGoal_105, ContainsTrace_6);
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        SubGoal_105 = SubGoal0_104;
                        *ContainsTrace_6 = (MR_Integer) 0;
                      }
                      break;
                  }
                  break;
              }
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Reason_53));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (SubGoal_105));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));
              MR_Word Cond0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
              MR_Word Then0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3))));
              MR_Word Else0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 4))));
              MR_Word Cond_45;
              MR_Word CondContainsTrace_46;
              MR_Word Then_47;
              MR_Word ThenContainsTrace_48;
              MR_Word Else_49;
              MR_Word ElseContainsTrace_50;
              MR_Word Var_97;

              check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(Cond0_42, &Cond_45, &CondContainsTrace_46);
              check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(Then0_43, &Then_47, &ThenContainsTrace_48);
              check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(Else0_44, &Else_49, &ElseContainsTrace_50);
              {
                GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (Vars_41));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (Cond_45));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 3) = ((MR_Box) (Then_47));
                MR_hl_field(MR_mktag(3), GoalExpr_32, 4) = ((MR_Box) (Else_49));
              }
              Var_97 = hlds__hlds_goal__worst_contains_trace_2_f_0(ThenContainsTrace_48, ElseContainsTrace_50);
              *ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(CondContainsTrace_46, Var_97);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand0_76)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_proc.goal_contains_trace\'/3", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 1))));
                    MR_Word Inner_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 3))));
                    MR_Word MainGoal0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 5))));
                    MR_Word OrElseInners_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_76, (MR_Integer) 6))));
                    MR_Word MainGoal_84;
                    MR_Word MainContainsTrace_85;
                    MR_Word OrElseGoals_87;
                    MR_Word OrElseContainsTrace_88;
                    MR_Word ShortHand_89;

                    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(MainGoal0_81, &MainGoal_84, &MainContainsTrace_85);
                    check_hlds__simplify__simplify_proc__goal_list_contains_trace_acc_4_p_0(OrElseGoals0_82, &OrElseGoals_87, (MR_Integer) 1, &OrElseContainsTrace_88);
                    {
                      ShortHand_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_89, 0) = (MR_Box) ((MR_Unsigned) (GoalType_77));
                      MR_hl_field(MR_mktag(1), ShortHand_89, 1) = ((MR_Box) (Outer_78));
                      MR_hl_field(MR_mktag(1), ShortHand_89, 2) = ((MR_Box) (Inner_79));
                      MR_hl_field(MR_mktag(1), ShortHand_89, 3) = ((MR_Box) (MaybeOutputVars_80));
                      MR_hl_field(MR_mktag(1), ShortHand_89, 4) = ((MR_Box) (MainGoal_84));
                      MR_hl_field(MR_mktag(1), ShortHand_89, 5) = ((MR_Box) (OrElseGoals_87));
                      MR_hl_field(MR_mktag(1), ShortHand_89, 6) = ((MR_Box) (OrElseInners_83));
                    }
                    {
                      GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (ShortHand_89));
                    }
                    *ContainsTrace_6 = hlds__hlds_goal__worst_contains_trace_2_f_0(MainContainsTrace_85, OrElseContainsTrace_88);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_76, (MR_Integer) 0))));
                    MR_Word ResultVar_91 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_76, (MR_Integer) 1))));
                    MR_Word SubGoal0_106 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_76, (MR_Integer) 2))));
                    MR_Word SubGoal_107;
                    MR_Word ShortHand_108;

                    check_hlds__simplify__simplify_proc__goal_contains_trace_3_p_0(SubGoal0_106, &SubGoal_107, ContainsTrace_6);
                    {
                      ShortHand_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_108, 0) = ((MR_Box) (MaybeIO_90));
                      MR_hl_field(MR_mktag(2), ShortHand_108, 1) = ((MR_Box) (ResultVar_91));
                      MR_hl_field(MR_mktag(2), ShortHand_108, 2) = ((MR_Box) (SubGoal_107));
                    }
                    {
                      GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) (ShortHand_108));
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    switch (*ContainsTrace_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, GoalInfo0_8, &GoalInfo_94);
        break;
      case (MR_Integer) 0:
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, GoalInfo0_8, &GoalInfo_94);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_94));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__do_process_top_level_goal_6_p_0(
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33,
  MR_Word NestedContext0_8,
  MR_Word InstMap0_9,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word GoalInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_32, (MR_Integer) 1))));
    MR_Word Detism_13;
    MR_Word NonLocals_14;
    MR_Word ShouldRequantify_16;
    MR_Word ShouldRerunDet_23;
    MR_Word STATE_VARIABLE_Goal_36_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word STATE_VARIABLE_Goal_52_52;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word _Common_15;

    Detism_13 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_12);
    NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_12);
    Var_37 = check_hlds__simplify__common__common_info_init_0_f_0();
    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(STATE_VARIABLE_Goal_0_32, &STATE_VARIABLE_Goal_36_36, NestedContext0_8, InstMap0_9, Var_37, &_Common_15, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_38_38);
    check_hlds__simplify__simplify_info__simplify_info_get_should_requantify_2_p_0(STATE_VARIABLE_Info_38_38, &ShouldRequantify_16);
    switch (ShouldRequantify_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Goal_52_52 = STATE_VARIABLE_Goal_36_36;
          STATE_VARIABLE_Info_54_54 = STATE_VARIABLE_Info_38_38;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstVarSet_22;
          MR_Word STATE_VARIABLE_VarSet_39_39;
          MR_Word STATE_VARIABLE_VarTypes_40_40;
          MR_Word STATE_VARIABLE_RttiVarMaps_41_41;
          MR_Word STATE_VARIABLE_Goal_43_43;
          MR_Word STATE_VARIABLE_VarSet_44_44;
          MR_Word STATE_VARIABLE_VarTypes_45_45;
          MR_Word STATE_VARIABLE_RttiVarMaps_46_46;
          MR_Word STATE_VARIABLE_Info_47_47;
          MR_Word STATE_VARIABLE_Info_48_48;
          MR_Word STATE_VARIABLE_Info_49_49;
          MR_Word STATE_VARIABLE_ModuleInfo_50_50;
          MR_Word STATE_VARIABLE_ModuleInfo_53_53;
          MR_Word Var_21;

          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_VarSet_39_39);
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_VarTypes_40_40);
          check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_RttiVarMaps_41_41);
          hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, NonLocals_14, &Var_21, STATE_VARIABLE_Goal_36_36, &STATE_VARIABLE_Goal_43_43, STATE_VARIABLE_VarSet_39_39, &STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarTypes_40_40, &STATE_VARIABLE_VarTypes_45_45, STATE_VARIABLE_RttiVarMaps_41_41, &STATE_VARIABLE_RttiVarMaps_46_46);
          check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_Info_47_47);
          check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(STATE_VARIABLE_VarTypes_45_45, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
          check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_46_46, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_49_49);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_ModuleInfo_50_50);
          check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(STATE_VARIABLE_Info_49_49, &InstVarSet_22);
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, STATE_VARIABLE_Goal_43_43, &STATE_VARIABLE_Goal_52_52, STATE_VARIABLE_VarTypes_45_45, InstVarSet_22, InstMap0_9, STATE_VARIABLE_ModuleInfo_50_50, &STATE_VARIABLE_ModuleInfo_53_53);
          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_53_53, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_54_54);
        }
        break;
    }
    check_hlds__simplify__simplify_info__simplify_info_get_should_rerun_det_2_p_0(STATE_VARIABLE_Info_54_54, &ShouldRerunDet_23);
    switch (ShouldRerunDet_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Goal_33 = STATE_VARIABLE_Goal_52_52;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_54_54;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SolnContext_25;
          MR_Word PredProcId_26;
          MR_Word PredInfo_27;
          MR_Word DetInfo0_28;
          MR_Word DetInfo_31;
          MR_Word STATE_VARIABLE_ModuleInfo_55_55;
          MR_Word STATE_VARIABLE_VarSet_56_56;
          MR_Word STATE_VARIABLE_VarTypes_57_57;
          MR_Word STATE_VARIABLE_RttiVarMaps_58_58;
          MR_Word STATE_VARIABLE_ProcInfo_59_59;
          MR_Word STATE_VARIABLE_ProcInfo_60_60;
          MR_Word STATE_VARIABLE_ProcInfo_61_61;
          MR_Word STATE_VARIABLE_ProcInfo_62_62;
          MR_Word STATE_VARIABLE_ModuleInfo_63_63;
          MR_Word STATE_VARIABLE_Info_64_64;
          MR_Word STATE_VARIABLE_ModuleInfo_70_70;
          MR_Word STATE_VARIABLE_VarTypes_71_71;
          MR_Word STATE_VARIABLE_Info_72_72;
          MR_Word Var_29;
          MR_Word Var_30;

          check_hlds__det_analysis__det_get_soln_context_2_p_0(Detism_13, &SolnContext_25);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_ModuleInfo_55_55);
          check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_VarSet_56_56);
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_VarTypes_57_57);
          check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_RttiVarMaps_58_58);
          check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_54_54, &PredProcId_26);
          hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_55_55, PredProcId_26, &PredInfo_27, &STATE_VARIABLE_ProcInfo_59_59);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_57_57, STATE_VARIABLE_ProcInfo_59_59, &STATE_VARIABLE_ProcInfo_60_60);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_56_56, STATE_VARIABLE_ProcInfo_60_60, &STATE_VARIABLE_ProcInfo_61_61);
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_58_58, STATE_VARIABLE_ProcInfo_61_61, &STATE_VARIABLE_ProcInfo_62_62);
          hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_26, PredInfo_27, STATE_VARIABLE_ProcInfo_62_62, STATE_VARIABLE_ModuleInfo_55_55, &STATE_VARIABLE_ModuleInfo_63_63);
          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_63_63, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_64_64);
          check_hlds__det_util__det_info_init_7_p_0(STATE_VARIABLE_ModuleInfo_63_63, PredProcId_26, STATE_VARIABLE_VarSet_56_56, STATE_VARIABLE_VarTypes_57_57, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_28);
          check_hlds__det_analysis__det_infer_goal_10_p_0(STATE_VARIABLE_Goal_52_52, STATE_VARIABLE_Goal_33, InstMap0_9, SolnContext_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Var_29, &Var_30, DetInfo0_28, &DetInfo_31);
          check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_31, &STATE_VARIABLE_ModuleInfo_70_70);
          check_hlds__det_util__det_info_get_vartypes_2_p_0(DetInfo_31, &STATE_VARIABLE_VarTypes_71_71);
          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_70_70, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_72_72);
          check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(STATE_VARIABLE_VarTypes_71_71, STATE_VARIABLE_Info_72_72, STATE_VARIABLE_Info_35);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_warn_about_duplicates_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_10;
    MR_Word Markers_11;
    MR_Word Goal_12;
    MR_Word GoalExpr_13;
    MR_Word GoalInfo_14;
    MR_Word MayDuplicate_23;
    MR_Word Attributes_15;
    MR_Word MaybeMayDuplicate_22;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_10);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_11);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_8, &Goal_12);
    GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 0))));
    GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_12, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) GoalExpr_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Attributes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1))));
      MaybeMayDuplicate_22 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attributes_15);
      succeeded = (MaybeMayDuplicate_22 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        MayDuplicate_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_22, (MR_Integer) 0))));
    }
    if (succeeded)
      switch (MayDuplicate_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 7);
            if (succeeded)
            {
              MR_Word Context_24;
              MR_Word Spec_26;

              Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
              {
                Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.simplify_proc_maybe_warn_about_duplicates\'/5"));
                MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_4[0])));
                MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Context_24));
                MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[12])));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_28 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
              }
            }
            else
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 6);
            if (succeeded)
            {
              MR_Word Context_71;
              MR_Word Spec_73;

              Context_71 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
              {
                Spec_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_73, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_proc.simplify_proc_maybe_warn_about_duplicates\'/5"));
                MR_hl_field(MR_mktag(1), Spec_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_73, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_proc_scalar_common_4[0])));
                MR_hl_field(MR_mktag(1), Spec_73, 3) = ((MR_Box) (Context_71));
                MR_hl_field(MR_mktag(1), Spec_73, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_proc_scalar_common_1[18])));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_28 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_73));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
              }
            }
            else
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
          }
          break;
      }
    else
      *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_analyze_and_format_calls_8_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word ImplicitStreamWarnings_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word * FormatSpecs_13,
  MR_Word STATE_VARIABLE_ProcInfo_0_33,
  MR_Word * STATE_VARIABLE_ProcInfo_34)
{
  {
    MR_Word Goal0_15;
    MR_Word VarSet0_16;
    MR_Word VarTypes0_17;
    MR_Word MaybeGoal_18;
    MR_Word VarSet_19;
    MR_Word VarTypes_20;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_33, &Goal0_15);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_33, &VarSet0_16);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_33, &VarTypes0_17);
    check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0(STATE_VARIABLE_ModuleInfo_0_31, ImplicitStreamWarnings_10, Goal0_15, &MaybeGoal_18, FormatSpecs_13, VarSet0_16, &VarSet_19, VarTypes0_17, &VarTypes_20);
    if ((MaybeGoal_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
      *STATE_VARIABLE_ProcInfo_34 = STATE_VARIABLE_ProcInfo_0_33;
    }
    else
    {
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_18, (MR_Integer) 0))));
      MR_Word PredTable0_22;
      MR_Word PredInfo0_23;
      MR_Word ProcTable0_24;
      MR_Word ProcTable_25;
      MR_Word PredInfo1_26;
      MR_Word Markers1_27;
      MR_Word Markers_28;
      MR_Word PredInfo_29;
      MR_Word PredTable_30;
      MR_Word STATE_VARIABLE_ProcInfo_35_35;
      MR_Word STATE_VARIABLE_ProcInfo_36_36;
      MR_Word STATE_VARIABLE_ProcInfo_37_37;
      MR_Word STATE_VARIABLE_ProcInfo_39_39;
      MR_Word STATE_VARIABLE_ModuleInfo_42_42;
      MR_Box conv0_PredInfo0_23;

      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_21, STATE_VARIABLE_ProcInfo_0_33, &STATE_VARIABLE_ProcInfo_35_35);
      hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_19, STATE_VARIABLE_ProcInfo_35_35, &STATE_VARIABLE_ProcInfo_36_36);
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_20, STATE_VARIABLE_ProcInfo_36_36, &STATE_VARIABLE_ProcInfo_37_37);
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_37_37, &STATE_VARIABLE_ProcInfo_39_39);
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_39_39, STATE_VARIABLE_ProcInfo_34, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_42_42);
      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_42_42, &PredTable0_22);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_22, ((MR_Box) (PredId_11)), &conv0_PredInfo0_23);
      PredInfo0_23 = ((MR_Word) (conv0_PredInfo0_23));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_23, &ProcTable0_24);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_12)), ((MR_Box) (*STATE_VARIABLE_ProcInfo_34)), ProcTable0_24, &ProcTable_25);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_25, PredInfo0_23, &PredInfo1_26);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo1_26, &Markers1_27);
      hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 26, Markers1_27, &Markers_28);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_28, PredInfo1_26, &PredInfo_29);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_11)), ((MR_Box) (PredInfo_29)), PredTable0_22, &PredTable_30);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_30, STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_ModuleInfo_32);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_mark_modecheck_clauses_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word * STATE_VARIABLE_ProcInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word Goal0_4;
    MR_Word GoalExpr0_5;
    MR_Word GoalInfo0_6;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_13, &Goal0_4);
    GoalExpr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 0))));
    GoalInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 1))));
    if (((((MR_tag((MR_Word) GoalExpr0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) GoalExpr0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word GoalInfo_11;
      MR_Word Goal_12;

      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 17, GoalInfo0_6, &GoalInfo_11);
      {
        Goal_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_12, 0) = ((MR_Box) (GoalExpr0_5));
        MR_hl_field(MR_mktag(0), Goal_12, 1) = ((MR_Box) (GoalInfo_11));
      }
      hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_12, STATE_VARIABLE_ProcInfo_0_13, STATE_VARIABLE_ProcInfo_14);
    }
    else
      *STATE_VARIABLE_ProcInfo_14 = STATE_VARIABLE_ProcInfo_0_13;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    succeeded = mercury__string__to_int_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_proc__simplify_proc_maybe_vary_parameters_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_SimplifyTasks_0_17,
  MR_Word * STATE_VARIABLE_SimplifyTasks_18)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes0_10;
    MR_Integer NumVars_11;
    MR_Word Globals_12;
    MR_String CommonStructPreds_13;
    MR_Word STATE_VARIABLE_SimplifyTasks_20_20;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_8, &VarTypes0_10);
    hlds__vartypes__vartypes_count_2_p_0(VarTypes0_10, &NumVars_11);
    succeeded = (NumVars_11 > (MR_Integer) 1000);
    if (succeeded)
    {
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SimplifyTasks_0_17, (MR_Integer) 0)));

      {
        STATE_VARIABLE_SimplifyTasks_20_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_SimplifyTasks_20_20, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 4))));
      }
    }
    else
      STATE_VARIABLE_SimplifyTasks_20_20 = STATE_VARIABLE_SimplifyTasks_0_17;
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_12);
    libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 378, &CommonStructPreds_13);
    succeeded = (strcmp(CommonStructPreds_13, (MR_String) "") == 0);
    if (succeeded)
      *STATE_VARIABLE_SimplifyTasks_18 = STATE_VARIABLE_SimplifyTasks_20_20;
    else
    {
      MR_Word CommonStructPredIdStrs_14;
      MR_Word CommonStructPredIdInts_15;

      CommonStructPredIdStrs_14 = mercury__string__split_at_char_2_f_0((MR_Char) 44, CommonStructPreds_13);
      succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__simplify__simplify_proc_scalar_common_3[0]), CommonStructPredIdStrs_14, &CommonStructPredIdInts_15);
      if (succeeded)
      {
        MR_Integer PredIdInt_16;

        PredIdInt_16 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_7);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (PredIdInt_16)), CommonStructPredIdInts_15);
        if (succeeded)
          *STATE_VARIABLE_SimplifyTasks_18 = STATE_VARIABLE_SimplifyTasks_20_20;
        else
        {
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SimplifyTasks_20_20, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_SimplifyTasks_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 4))));
          }
        }
      }
      else
        *STATE_VARIABLE_SimplifyTasks_18 = STATE_VARIABLE_SimplifyTasks_20_20;
    }
  }
}

void mercury__check_hlds__simplify__simplify_proc__init(void)
{
}

void mercury__check_hlds__simplify__simplify_proc__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__simplify_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_proc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_proc.
