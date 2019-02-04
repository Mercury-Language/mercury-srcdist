/*
** Automatically generated from `ml_unify_gen_deconstruct.m'
** by the Mercury compiler,
** version rotd-2018-09-09
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


// :- module ml_backend.ml_unify_gen_deconstruct.
// :- implementation.

/*
INIT mercury__ml_backend__ml_unify_gen_deconstruct__init
ENDINIT
*/

#include "ml_backend.ml_unify_gen_deconstruct.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen_test.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_value_ordered_do_all_partials_assign_right_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_name_ordered_do_all_partials_assign_right_0[2];

static const MR_Integer ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_do_all_partials_assign_right_0[2];

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__field_types_take_addr_info_0_0[4];

static const MR_ConstString ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__field_names_take_addr_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_functor_desc_take_addr_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_stag_ordered_take_addr_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_ptag_ordered_take_addr_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_name_ordered_take_addr_info_0[1];

static const MR_Integer ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_take_addr_info_0[1];

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__529__2_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__529__1_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__284__1_2_p_0(
  MR_Word FieldVia_69,
  MR_Word HeadVar__2_117);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__354__2_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__354__1_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_take_addr_of_arg_5_p_0(
  MR_Word Info_6,
  MR_Word ArgVar_7,
  MR_Word CtorArgRepn_8,
  MR_Word CurOffset_9,
  MR_Word * TakeAddrInfo_10);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_16_p_1(
  MR_Word FieldGen_17,
  MR_Word ArgVar_18,
  MR_Word CtorArgRepn_19,
  MR_Word ArgMode_20,
  MR_Word ArgVarRepns_21,
  MR_Word ArgModes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverArgModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word TakeAddr_28,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_65,
  MR_Word * STATE_VARIABLE_Info_66);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer CurArgNum_6,
  MR_Integer * LeftOverArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_10,
  MR_Word * STATE_VARIABLE_AllPartialsRight_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_9_p_0(
  MR_Word LHSVar_10,
  MR_Word ConsId_11,
  MR_Word RHSVars_12,
  MR_Word ArgModes_13,
  MR_Word Context_14,
  MR_Word * Defns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_94,
  MR_Word * STATE_VARIABLE_Info_95);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_take_tagword_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_FirstNonTagwordArgNum_0_7,
  MR_Integer * STATE_VARIABLE_FirstNonTagwordArgNum_8);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_6_p_0(
  MR_Word Info_7,
  MR_Word LHSVar_8,
  MR_Word RHSVar_9,
  MR_Word ArgMode_10,
  MR_Word Context_11,
  MR_Word * Stmts_12);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word Ptag_9,
  MR_Word LHSVar_10,
  MR_Word RHSVar_11,
  MR_Word ArgMode_12,
  MR_Word Context_13,
  MR_Word * Stmts_14);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_10_p_0(
  MR_Word Info_1,
  MR_Word WordRval_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_ToOrRvals_0_6,
  MR_Word * STATE_VARIABLE_ToOrRvals_7,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_8,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_10_p_0(
  MR_Word Info_11,
  MR_Word WordRval_12,
  MR_Word HeadVar__3_3,
  MR_Word ArgMode_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ToOrRvals_0_29,
  MR_Word * STATE_VARIABLE_ToOrRvals_30,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_31,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_32,
  MR_Word * Stmts_19);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_assign_right_5_p_0(
  MR_Word WordRval_6,
  MR_Word ArgPosWidth_7,
  MR_Word ArgLval_8,
  MR_Word Context_9,
  MR_Word * Stmts_10);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_50_93_95_48_16_p_0(
  MR_Word FieldGen_17,
  MR_Word ArgVar_18,
  MR_Word CtorArgRepn_19,
  MR_Word ArgMode_20,
  MR_Word ArgVarRepns_21,
  MR_Word ArgModes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverArgModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_65,
  MR_Word * STATE_VARIABLE_Info_66);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer CurArgNum_6,
  MR_Integer * LeftOverArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_10,
  MR_Word * STATE_VARIABLE_AllPartialsRight_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(
  MR_Word FieldGen_11,
  MR_Word ArgVar_12,
  MR_Word CtorArgRepn_13,
  MR_Word ArgMode_14,
  MR_Integer ArgNum_15,
  MR_Word Context_16,
  MR_Word * PackedArgVars_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word HighLevelData_11,
  MR_Word LHSLval_12,
  MR_Word LHSType_13,
  MR_Word RHSLval_14,
  MR_Word RHSType_15,
  MR_Word ArgPosWidth_16,
  MR_Word Context_17,
  MR_Word * Stmts_18);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_field_offset_pair_3_p_0(
  MR_Word FieldLval_4,
  MR_Word * FieldLvalA_5,
  MR_Word * FieldLvalB_6);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word LHSLval_12,
  MR_Word LHSType_13,
  MR_Word RHSVar_14,
  MR_Word RHSLval_15,
  MR_Word RHSType_16,
  MR_Word ArgPosWidth_17,
  MR_Word Context_18,
  MR_Word * PackedRHSVars_19,
  MR_Word * Stmts_20);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(
  MR_Word WordRval_6,
  MR_Word Shift_7,
  MR_Word Mask_8,
  MR_Word Fill_9,
  MR_Word * Rval_10);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_2[3][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_3[2][1];




static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_deconstruct_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_via_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_via_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_0 = {
  (MR_String) "not_all_partials_assign_right",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_1 = {
  (MR_String) "all_partials_assign_right",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_value_ordered_do_all_partials_assign_right_0[2] = {
  &ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_0,
  &ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_name_ordered_do_all_partials_assign_right_0[2] = {
  &ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_1,
  &ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_0
};

static const MR_Integer ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_do_all_partials_assign_right_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__type_ctor_info_do_all_partials_assign_right_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_deconstruct",
  (MR_String) "do_all_partials_assign_right",
  {     ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_name_ordered_do_all_partials_assign_right_0 },
  {     ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_value_ordered_do_all_partials_assign_right_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_do_all_partials_assign_right_0
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__field_types_take_addr_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__ml_unify_gen_deconstruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
};

static const MR_ConstString ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__field_names_take_addr_info_0_0[4] = {
  (MR_String) "tai_address_var",
  (MR_String) "tai_offset",
  (MR_String) "tai_field_var_type",
  (MR_String) "tai_maybe_boxed_field_type"
};

static const MR_DuFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_functor_desc_take_addr_info_0_0 = {
  (MR_String) "take_addr_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__field_types_take_addr_info_0_0,
  ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__field_names_take_addr_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_stag_ordered_take_addr_info_0_0[1] = {
  &ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_functor_desc_take_addr_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_ptag_ordered_take_addr_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_stag_ordered_take_addr_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_name_ordered_take_addr_info_0[1] = {
  &ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_functor_desc_take_addr_info_0_0
};

static const MR_Integer ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_take_addr_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__type_ctor_info_take_addr_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_deconstruct",
  (MR_String) "take_addr_info",
  {     ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_name_ordered_take_addr_info_0 },
  {     ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_ptag_ordered_take_addr_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_take_addr_info_0
};

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__529__2_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_118)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), ((MR_Box) (HeadPackedArgVars_89)), ((MR_Box) (HeadVar__2_118)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__529__1_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_118)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), ((MR_Box) (HeadPackedArgVars_89)), ((MR_Box) (HeadVar__2_118)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__284__1_2_p_0(
  MR_Word FieldVia_69,
  MR_Word HeadVar__2_117)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____field_via_0_0(FieldVia_69, HeadVar__2_117);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__354__2_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[0]), ((MR_Box) (TakeAddr_6)), ((MR_Box) (HeadVar__2_22)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__354__1_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[0]), ((MR_Box) (TakeAddr_6)), ((MR_Box) (HeadVar__2_22)));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;
        MR_Integer Var_21 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_22 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_13, Var_21, Var_22);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          ml_backend__mlds____Compare____mlds_type_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            ml_backend__mlds____Compare____mlds_type_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer Var_17;
      MR_Integer Var_18;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        Var_17 = (MR_Integer) (ArgX2_5);
        Var_18 = (MR_Integer) (ArgY2_6);
        succeeded = (Var_17 == Var_18);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__354__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word Context_5,
  MR_Word TakeAddr_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_19;

        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TakeAddr_6));
          MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 0))));
        MR_Word CtorArgRepn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 1))));
        MR_Integer NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word ArgPosWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_64, (MR_Integer) 2))));
        MR_Word TailTakeAddr_67;
        MR_Integer Var_110;

        succeeded = ((MR_tag((MR_Word) TakeAddr_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_110 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TakeAddr_6, (MR_Integer) 0))));
          TailTakeAddr_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TakeAddr_6, (MR_Integer) 1))));
          succeeded = (CurArgNum_4 == Var_110);
        }
        if (succeeded)
        {
          MR_Word CellOffset_70;
          MR_Word TakeAddrInfo_71;
          MR_Word TakeAddrInfosTail_72;
          MR_Word CellOffsetPrime_69;

          succeeded = ((MR_tag((MR_Word) ArgPosWidth_66)) == (MR_Integer) 1);
          if (succeeded)
          {
            CellOffsetPrime_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_66, (MR_Integer) 1))));
            CellOffset_70 = CellOffsetPrime_69;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "taking address of something other than a full word");
              return;
            }
          }
          ml_backend__ml_unify_gen_deconstruct__ml_gen_take_addr_of_arg_5_p_0(STATE_VARIABLE_Info_0_10, ArgVar_63, CtorArgRepn_64, CellOffset_70, &TakeAddrInfo_71);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, Var_111, ArgModes_55, NextArgNum_65, Context_5, TailTakeAddr_67, &TakeAddrInfosTail_72, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_71));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_72));
          }
        }
        else
        {
          MR_Word FieldVia_82;
          MR_Unsigned packed_args_0;

          succeeded = ((((MR_tag((MR_Word) ArgPosWidth_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 6)));
            FieldVia_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
            succeeded = (FieldVia_82 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word LeftOverArgVarRepns_83;
            MR_Word LeftOverArgModes_84;
            MR_Integer LeftOverArgNum_85;
            MR_Word HeadDefns_86;
            MR_Word HeadStmts_87;
            MR_Word TailDefns_88;
            MR_Word TailStmts_89;
            MR_Word STATE_VARIABLE_Info_97_97;

            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_16_p_1(FieldGen_1, ArgVar_63, CtorArgRepn_64, ArgMode_54, Var_111, ArgModes_55, &LeftOverArgVarRepns_83, &LeftOverArgModes_84, CurArgNum_4, &LeftOverArgNum_85, Context_5, TakeAddr_6, &HeadDefns_86, &HeadStmts_87, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_97_97);
            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, LeftOverArgVarRepns_83, LeftOverArgModes_84, LeftOverArgNum_85, Context_5, TakeAddr_6, HeadVar__7_7, &TailDefns_88, &TailStmts_89, STATE_VARIABLE_Info_97_97, STATE_VARIABLE_Info_11);
            *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_86, TailDefns_88);
            *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_87, TailStmts_89);
          }
          else
          {
            MR_Word STATE_VARIABLE_Info_99_99;
            MR_Word HeadStmts_101;
            MR_Word TailStmts_102;
            MR_Word _PackedArgVars_90;

            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, ArgMode_54, CurArgNum_4, Context_5, &_PackedArgVars_90, &HeadStmts_101, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_99_99);
            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, Var_111, ArgModes_55, NextArgNum_65, Context_5, TakeAddr_6, HeadVar__7_7, HeadVar__8_8, &TailStmts_102, STATE_VARIABLE_Info_99_99, STATE_VARIABLE_Info_11);
            *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_101, TailStmts_102);
          }
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_take_addr_of_arg_5_p_0(
  MR_Word Info_6,
  MR_Word ArgVar_7,
  MR_Word CtorArgRepn_8,
  MR_Word CurOffset_9,
  MR_Word * TakeAddrInfo_10)
{
  {
    MR_Word ModuleInfo_11;
    MR_Word HighLevelData_12;
    MR_Word FieldType_13;
    MR_Word ArgPosWidth_14;
    MR_Word FieldWidth_15;
    MR_Word BoxedFieldType_16;
    MR_Word MLDS_FieldType_17;
    MR_Word MLDS_BoxedFieldType_18;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_11);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_6, &HighLevelData_12);
    FieldType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_8, (MR_Integer) 1))));
    ArgPosWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_8, (MR_Integer) 2))));
    FieldWidth_15 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_14);
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_11, HighLevelData_12, FieldType_13, FieldWidth_15, &BoxedFieldType_16);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(Info_6, FieldType_13, &MLDS_FieldType_17);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(Info_6, BoxedFieldType_16, &MLDS_BoxedFieldType_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *TakeAddrInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgVar_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CurOffset_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MLDS_FieldType_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MLDS_BoxedFieldType_18));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_16_p_1(
  MR_Word FieldGen_17,
  MR_Word ArgVar_18,
  MR_Word CtorArgRepn_19,
  MR_Word ArgMode_20,
  MR_Word ArgVarRepns_21,
  MR_Word ArgModes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverArgModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word TakeAddr_28,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_65,
  MR_Word * STATE_VARIABLE_Info_66)
{
  {
    MR_bool succeeded;
    MR_Word HeadPackedArgVars_32;
    MR_Word HeadStmts_33;
    MR_Word AllPartialsRight0_34;
    MR_Integer NextArgNum_37;
    MR_Word AllPartialsRight_38;
    MR_Word TailPackedArgVars_39;
    MR_Word TailStmts_40;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word STATE_VARIABLE_Info_69_69;

    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_17, ArgVar_18, CtorArgRepn_19, ArgMode_20, CurArgNum_25, Context_27, &HeadPackedArgVars_32, &HeadStmts_33, STATE_VARIABLE_Info_0_65, &STATE_VARIABLE_Info_67_67);
    if ((HeadPackedArgVars_32 == (MR_Word) ((MR_Unsigned) 0U)))
      AllPartialsRight0_34 = (MR_Integer) 0;
    else
      AllPartialsRight0_34 = (MR_Integer) 1;
    NextArgNum_37 = (MR_Integer) ((MR_Unsigned) CurArgNum_25 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(FieldGen_17, ArgVarRepns_21, ArgModes_22, LeftOverArgVarRepns_23, LeftOverArgModes_24, NextArgNum_37, LeftOverArgNum_26, Context_27, TakeAddr_28, AllPartialsRight0_34, &AllPartialsRight_38, &TailPackedArgVars_39, &TailStmts_40, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_69_69);
    switch (AllPartialsRight_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PackedArgVars_41;
          MR_Word WordCompVar_42;
          MR_Word WordVar_43;
          MR_Word UnsignedType_44;
          MR_Word WordVarDefn_45;
          MR_Word ArgPosWidth_46;
          MR_Integer CellOffsetInt_53;
          MR_Word FieldId_54;
          MR_Word MaybePtag_55;
          MR_Word AddrRval_56;
          MR_Word AddrType_57;
          MR_Word FieldLval_59;
          MR_Word CastFieldRval_60;
          MR_Word WordVarLval_61;
          MR_Word WordAssignStmt_62;
          MR_Word PackedArgsMap0_63;
          MR_Word PackedArgsMap_64;
          MR_Word STATE_VARIABLE_Info_70_70;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word CellOffset_48;
          MR_Unsigned packed_args_0;

          PackedArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_32, TailPackedArgVars_39);
          ml_backend__ml_gen_info__ml_gen_info_new_packed_args_var_3_p_0(&WordCompVar_42, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_70_70);
          {
            WordVar_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVar_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), WordVar_43, 1) = ((MR_Box) (WordCompVar_42));
          }
          UnsignedType_44 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
          {
            WordVarDefn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 0) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 1) = ((MR_Box) (Context_27));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 2) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Defns_29 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordVarDefn_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ArgPosWidth_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_19, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) ArgPosWidth_46)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_46, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CellOffset_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_46, (MR_Integer) 2))));
            packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_46, (MR_Integer) 6)));
            CellOffsetInt_53 = (MR_Integer) (CellOffset_48);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word\'/16", (MR_String) "no apw_partial_first");
              return;
            }
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) (CellOffsetInt_53));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
          }
          {
            FieldId_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_54, 0) = ((MR_Box) (Var_76));
          }
          MaybePtag_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 0))));
          AddrRval_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 1))));
          AddrType_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 2))));
          {
            FieldLval_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_59, 0) = ((MR_Box) (MaybePtag_55));
            MR_hl_field(MR_mktag(0), FieldLval_59, 1) = ((MR_Box) (AddrRval_56));
            MR_hl_field(MR_mktag(0), FieldLval_59, 2) = ((MR_Box) (AddrType_57));
            MR_hl_field(MR_mktag(0), FieldLval_59, 3) = ((MR_Box) (FieldId_54));
            MR_hl_field(MR_mktag(0), FieldLval_59, 4) = ((MR_Box) ((MR_Unsigned) 24U));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (FieldLval_59));
          }
          {
            CastFieldRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastFieldRval_60, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), CastFieldRval_60, 1) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(3), CastFieldRval_60, 2) = ((MR_Box) (Var_79));
          }
          {
            WordVarLval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVarLval_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), WordVarLval_61, 1) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(3), WordVarLval_61, 2) = ((MR_Box) (UnsignedType_44));
          }
          WordAssignStmt_62 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_61, CastFieldRval_60, Context_27);
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (WordAssignStmt_62));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (HeadStmts_33));
          }
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_80, TailStmts_40);
          ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(STATE_VARIABLE_Info_70_70, &PackedArgsMap0_63);
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (WordVarLval_61));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (PackedArgVars_41)), ((MR_Box) (Var_81)), PackedArgsMap0_63, &PackedArgsMap_64);
          ml_backend__ml_gen_info__ml_gen_info_set_packed_args_map_3_p_0(PackedArgsMap_64, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_66);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_29 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_33, TailStmts_40);
          *STATE_VARIABLE_Info_66 = STATE_VARIABLE_Info_69_69;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__529__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer CurArgNum_6,
  MR_Integer * LeftOverArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_10,
  MR_Word * STATE_VARIABLE_AllPartialsRight_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
        *LeftOverArgNum_7 = CurArgNum_6;
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_157, (MR_Integer) 0))));
        MR_Word CtorArgRepn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_157, (MR_Integer) 1))));
        MR_Word ArgPosWidth_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_81, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) ArgPosWidth_82)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverArgNum_7 = CurArgNum_6;
              *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
              *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverArgNum_7 = CurArgNum_6;
              *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
              *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_82, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__4_4 = HeadVar__2_2;
                  *HeadVar__5_5 = HeadVar__3_3;
                  *LeftOverArgNum_7 = CurArgNum_6;
                  *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
                  *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
                  *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadPackedArgVars_142;
                  MR_Word HeadStmts_143;
                  MR_Integer NextArgNum_145;
                  MR_Word TailPackedArgVars_146;
                  MR_Word TailStmts_147;
                  MR_Word STATE_VARIABLE_Info_119_148;
                  MR_Word STATE_VARIABLE_AllPartialsRight_120_149;
                  MR_Integer Var_135;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, ArgMode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_142, &HeadStmts_143, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_119_148);
                  if ((HeadPackedArgVars_142 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AllPartialsRight_120_149 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_120_149 = STATE_VARIABLE_AllPartialsRight_0_10;
                  succeeded = ((MR_tag((MR_Word) HeadVar__9_9)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
                    succeeded = (CurArgNum_6 == Var_135);
                  }
                  if (succeeded)
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  }
                  NextArgNum_145 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(HeadVar__1_1, Var_156, ArgModes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_145, LeftOverArgNum_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_120_149, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_146, &TailStmts_147, STATE_VARIABLE_Info_119_148, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_142, TailPackedArgVars_146);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_143, TailStmts_147);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadPackedArgVars_89;
                  MR_Word HeadStmts_90;
                  MR_Integer NextArgNum_96;
                  MR_Word TailPackedArgVars_97;
                  MR_Word TailStmts_98;
                  MR_Word Var_115;
                  MR_Word STATE_VARIABLE_Info_119_119;
                  MR_Integer Var_132;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, ArgMode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_89, &HeadStmts_90, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_119_119);
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1_1));
                    MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (HeadPackedArgVars_89));
                    MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "HeadPackedArgVars != [] for apw_none_shifted");
                  succeeded = ((MR_tag((MR_Word) HeadVar__9_9)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_132 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
                    succeeded = (CurArgNum_6 == Var_132);
                  }
                  if (succeeded)
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  }
                  NextArgNum_96 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(HeadVar__1_1, Var_156, ArgModes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_96, LeftOverArgNum_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_0_10, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_97, &TailStmts_98, STATE_VARIABLE_Info_119_119, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_89, TailPackedArgVars_97);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_90, TailStmts_98);
                }
                break;
            }
            break;
        }
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_deconstruction_unification_12_p_0(
  MR_Word LHSVar_13,
  MR_Word ConsId_14,
  MR_Word RHSVars_15,
  MR_Word ArgModes_16,
  MR_Word CanFail_17,
  MR_Word CanCGC_18,
  MR_Word CodeModel_19,
  MR_Word Context_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_Word ExpectedCodeModel_24;
    MR_Word UnifyStmts_25;
    MR_Word Stmts0_29;
    MR_Word STATE_VARIABLE_Info_33_33;

    switch (CanFail_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TestRval_51;
          MR_Word SetTestResultStmt_52;
          MR_Word SucceededRval_53;
          MR_Word DetDeconstructStmts_54;
          MR_Word STATE_VARIABLE_Info_29_60;
          MR_Word STATE_VARIABLE_Info_30_61;
          MR_Word STATE_VARIABLE_Info_31_62;

          ExpectedCodeModel_24 = (MR_Integer) 1;
          ml_backend__ml_unify_gen_test__ml_generate_test_var_has_cons_id_5_p_0(LHSVar_13, ConsId_14, &TestRval_51, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_29_60);
          ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TestRval_51, Context_20, &SetTestResultStmt_52, STATE_VARIABLE_Info_29_60, &STATE_VARIABLE_Info_30_61);
          ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&SucceededRval_53, STATE_VARIABLE_Info_30_61, &STATE_VARIABLE_Info_31_62);
          ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_9_p_0(LHSVar_13, ConsId_14, RHSVars_15, ArgModes_16, Context_20, Defns_21, &DetDeconstructStmts_54, STATE_VARIABLE_Info_31_62, &STATE_VARIABLE_Info_33_33);
          if ((DetDeconstructStmts_54 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              UnifyStmts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), UnifyStmts_25, 0) = ((MR_Box) (SetTestResultStmt_52));
              MR_hl_field(MR_mktag(1), UnifyStmts_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DetDeconstructStmts_54, (MR_Integer) 1))));
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DetDeconstructStmts_54, (MR_Integer) 0))));

            if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word IfStmt_59;
              MR_Word Var_69;

              {
                IfStmt_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), IfStmt_59, 0) = ((MR_Box) (SucceededRval_53));
                MR_hl_field(MR_mktag(2), IfStmt_59, 1) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(2), IfStmt_59, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), IfStmt_59, 3) = ((MR_Box) (Context_20));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (IfStmt_59));
                MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                UnifyStmts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), UnifyStmts_25, 0) = ((MR_Box) (SetTestResultStmt_52));
                MR_hl_field(MR_mktag(1), UnifyStmts_25, 1) = ((MR_Box) (Var_69));
              }
            }
            else
            {
              MR_Word DetDeconstructStmt_72;
              MR_Word IfStmt_73;
              MR_Word Var_75;

              DetDeconstructStmt_72 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), DetDeconstructStmts_54, Context_20);
              {
                IfStmt_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), IfStmt_73, 0) = ((MR_Box) (SucceededRval_53));
                MR_hl_field(MR_mktag(2), IfStmt_73, 1) = ((MR_Box) (DetDeconstructStmt_72));
                MR_hl_field(MR_mktag(2), IfStmt_73, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), IfStmt_73, 3) = ((MR_Box) (Context_20));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (IfStmt_73));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                UnifyStmts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), UnifyStmts_25, 0) = ((MR_Box) (SetTestResultStmt_52));
                MR_hl_field(MR_mktag(1), UnifyStmts_25, 1) = ((MR_Box) (Var_75));
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          ExpectedCodeModel_24 = (MR_Integer) 0;
          ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_9_p_0(LHSVar_13, ConsId_14, RHSVars_15, ArgModes_16, Context_20, Defns_21, &UnifyStmts_25, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_33_33);
        }
        break;
    }
    switch (CanCGC_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LHSVarLval_26;
          MR_Word Delete_27;
          MR_Word CGCStmt_28;
          MR_Word Var_34;
          MR_Word Var_36;
          MR_Word Var_37;

          ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_33_33, LHSVar_13, &LHSVarLval_26);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (LHSVarLval_26));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) (Var_36));
          }
          {
            Delete_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Delete_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Delete_27, 1) = ((MR_Box) (Var_34));
          }
          {
            CGCStmt_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CGCStmt_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), CGCStmt_28, 1) = ((MR_Box) (Delete_27));
            MR_hl_field(MR_mktag(3), CGCStmt_28, 2) = ((MR_Box) (Context_20));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CGCStmt_28));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Stmts0_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), UnifyStmts_25, Var_37);
        }
        break;
      case (MR_Integer) 1:
        Stmts0_29 = UnifyStmts_25;
        break;
    }
    ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(CodeModel_19, ExpectedCodeModel_24, Context_20, Stmts0_29, Stmts_22, STATE_VARIABLE_Info_33_33, STATE_VARIABLE_Info_31);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__284__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_9_p_0(
  MR_Word LHSVar_10,
  MR_Word ConsId_11,
  MR_Word RHSVars_12,
  MR_Word ArgModes_13,
  MR_Word Context_14,
  MR_Word * Defns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_94,
  MR_Word * STATE_VARIABLE_Info_95)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_18;

    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_94, ConsId_11, &ConsTag_18);
    switch (MR_tag((MR_Word) ConsTag_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_95 = STATE_VARIABLE_Info_0_94;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_46;
              MR_Word ArgMode_47;
              MR_Box conv3_RHSVar_46;
              MR_Box conv2_ArgMode_47;

              hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_12, ArgModes_13, &conv3_RHSVar_46, &conv2_ArgMode_47);
              RHSVar_46 = ((MR_Word) (conv3_RHSVar_46));
              ArgMode_47 = ((MR_Word) (conv2_ArgMode_47));
              ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_6_p_0(STATE_VARIABLE_Info_0_94, LHSVar_10, RHSVar_46, ArgMode_47, Context_14, Stmts_16);
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_95 = STATE_VARIABLE_Info_0_94;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_95 = STATE_VARIABLE_Info_0_94;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_95 = STATE_VARIABLE_Info_0_94;
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_generate_det_deconstruction\'/9", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word LHSVarType_57;
              MR_Word LHSVarLval_58;

              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_94, LHSVar_10, &LHSVarType_57);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_94, LHSVar_10, &LHSVarLval_58);
              switch (MR_tag((MR_Word) RemoteArgsTagInfo_49)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word FieldGen_181;
                    MR_Word RHSVarRepns_182;
                    MR_Word Var_178;

                    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_94, LHSVarLval_58, LHSVarType_57, ConsId_11, ConsTag_18, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), &FieldGen_181);
                    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_94, LHSVarType_57, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_12, &RHSVarRepns_182);
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_181, RHSVarRepns_182, ArgModes_13, (MR_Integer) 1, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_178, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_94, STATE_VARIABLE_Info_95);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word FieldGen_206;
                    MR_Word RHSVarRepns_207;
                    MR_Word Ptag_211 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_49, (MR_Integer) 0))));
                    MR_Word Var_203;

                    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_94, LHSVarLval_58, LHSVarType_57, ConsId_11, ConsTag_18, Ptag_211, &FieldGen_206);
                    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_94, LHSVarType_57, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_12, &RHSVarRepns_207);
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_206, RHSVarRepns_207, ArgModes_13, (MR_Integer) 1, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_203, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_94, STATE_VARIABLE_Info_95);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RemoteSectag_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_49, (MR_Integer) 1))));
                    MR_Word SectagSize_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_53, (MR_Integer) 1))));
                    MR_Word FieldGen_196;
                    MR_Word Ptag_201 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_49, (MR_Integer) 0))));

                    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_94, LHSVarLval_58, LHSVarType_57, ConsId_11, ConsTag_18, Ptag_201, &FieldGen_196);
                    if ((SectagSize_55 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word RHSVarRepns_215;
                      MR_Word Var_187;

                      ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_94, LHSVarType_57, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) 1))), RHSVars_12, &RHSVarRepns_215);
                      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_196, RHSVarRepns_215, ArgModes_13, (MR_Integer) 1, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_187, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_94, STATE_VARIABLE_Info_95);
                    }
                    else
                    {
                      MR_Word TagwordRHSVarRepns_61;
                      MR_Word TagwordArgModes_62;
                      MR_Word NonTagwordRHSVarRepns_63;
                      MR_Word NonTagwordArgModes_64;
                      MR_Integer FirstNonTagwordArgNum_65;
                      MR_Word MaybePtag_66;
                      MR_Word AddrRval_67;
                      MR_Word AddrType_68;
                      MR_Word FieldVia_69;
                      MR_Word TagwordLval_71;
                      MR_Word CastTagwordRval_72;
                      MR_Word ToOrRvals_73;
                      MR_Unsigned ToOrMask_74;
                      MR_Word RightStmts_75;
                      MR_Word TagwordStmts_76;
                      MR_Word NonTagwordStmts_86;
                      MR_Word Var_114;
                      MR_Word Var_122;
                      MR_Word Var_123;
                      MR_Word RHSVarRepns_197;
                      MR_Word Var_85;

                      ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_94, LHSVarType_57, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) -42))), RHSVars_12, &RHSVarRepns_197);
                      ml_backend__ml_unify_gen_deconstruct__ml_take_tagword_args_8_p_0(RHSVarRepns_197, ArgModes_13, &TagwordRHSVarRepns_61, &TagwordArgModes_62, &NonTagwordRHSVarRepns_63, &NonTagwordArgModes_64, (MR_Integer) 1, &FirstNonTagwordArgNum_65);
                      MaybePtag_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_196, (MR_Integer) 0))));
                      AddrRval_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_196, (MR_Integer) 1))));
                      AddrType_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_196, (MR_Integer) 2))));
                      FieldVia_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_196, (MR_Integer) 3))));
                      {
                        Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[2]));
                        MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_9_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (FieldVia_69));
                        MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_generate_det_deconstruction\'/9", (MR_String) "not field_via_offset for tagword");
                      {
                        TagwordLval_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TagwordLval_71, 0) = ((MR_Box) (MaybePtag_66));
                        MR_hl_field(MR_mktag(0), TagwordLval_71, 1) = ((MR_Box) (AddrRval_67));
                        MR_hl_field(MR_mktag(0), TagwordLval_71, 2) = ((MR_Box) (AddrType_68));
                        MR_hl_field(MR_mktag(0), TagwordLval_71, 3) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[1]));
                        MR_hl_field(MR_mktag(0), TagwordLval_71, 4) = ((MR_Box) ((MR_Unsigned) 24U));
                      }
                      Var_122 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
                      {
                        Var_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_123, 0) = ((MR_Box) (TagwordLval_71));
                      }
                      {
                        CastTagwordRval_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastTagwordRval_72, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(MR_mktag(3), CastTagwordRval_72, 1) = ((MR_Box) (Var_122));
                        MR_hl_field(MR_mktag(3), CastTagwordRval_72, 2) = ((MR_Box) (Var_123));
                      }
                      ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_10_p_0(STATE_VARIABLE_Info_0_94, CastTagwordRval_72, TagwordRHSVarRepns_61, TagwordArgModes_62, Context_14, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_73, (MR_Unsigned) 0U, &ToOrMask_74, &RightStmts_75);
                      if ((ToOrRvals_73 == (MR_Word) ((MR_Unsigned) 0U)))
                        TagwordStmts_76 = RightStmts_75;
                      else
                      {
                        MR_Word HeadToOrRval_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_73, (MR_Integer) 0))));
                        MR_Word TailToOrRvals_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_73, (MR_Integer) 1))));
                        MR_Word ToOrRval_79;
                        MR_Word ComplementMask_80;
                        MR_Word MaskedOldTagwordRval_81;
                        MR_Word NewTagwordRval_82;
                        MR_Word CastNewTagwordRval_83;
                        MR_Word LeftStmt_84;
                        MR_Word Var_126;
                        MR_Unsigned Var_127;

                        ToOrRval_79 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadToOrRval_77, TailToOrRvals_78);
                        Var_127 = ~(ToOrMask_74);
                        {
                          Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (Var_127));
                        }
                        {
                          ComplementMask_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ComplementMask_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ComplementMask_80, 1) = ((MR_Box) (Var_126));
                        }
                        {
                          MaskedOldTagwordRval_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), MaskedOldTagwordRval_81, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(MR_mktag(3), MaskedOldTagwordRval_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4])));
                          MR_hl_field(MR_mktag(3), MaskedOldTagwordRval_81, 2) = ((MR_Box) (CastTagwordRval_72));
                          MR_hl_field(MR_mktag(3), MaskedOldTagwordRval_81, 3) = ((MR_Box) (ComplementMask_80));
                        }
                        {
                          NewTagwordRval_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NewTagwordRval_82, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                          MR_hl_field(MR_mktag(3), NewTagwordRval_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[5])));
                          MR_hl_field(MR_mktag(3), NewTagwordRval_82, 2) = ((MR_Box) (MaskedOldTagwordRval_81));
                          MR_hl_field(MR_mktag(3), NewTagwordRval_82, 3) = ((MR_Box) (ToOrRval_79));
                        }
                        {
                          CastNewTagwordRval_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), CastNewTagwordRval_83, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), CastNewTagwordRval_83, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                          MR_hl_field(MR_mktag(3), CastNewTagwordRval_83, 2) = ((MR_Box) (NewTagwordRval_82));
                        }
                        LeftStmt_84 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(TagwordLval_71, CastNewTagwordRval_83, Context_14);
                        {
                          TagwordStmts_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TagwordStmts_76, 0) = ((MR_Box) (LeftStmt_84));
                          MR_hl_field(MR_mktag(1), TagwordStmts_76, 1) = ((MR_Box) (RightStmts_75));
                        }
                      }
                      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_196, NonTagwordRHSVarRepns_63, NonTagwordArgModes_64, FirstNonTagwordArgNum_65, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_85, Defns_15, &NonTagwordStmts_86, STATE_VARIABLE_Info_0_94, STATE_VARIABLE_Info_95);
                      *Stmts_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), TagwordStmts_76, NonTagwordStmts_86);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word FieldGen_59;
                    MR_Word RHSVarRepns_60;
                    MR_Word Var_87;

                    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_94, LHSVarLval_58, LHSVarType_57, ConsId_11, ConsTag_18, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), &FieldGen_59);
                    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_94, LHSVarType_57, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_12, &RHSVarRepns_60);
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_59, RHSVarRepns_60, ArgModes_13, (MR_Integer) 1, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_87, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_94, STATE_VARIABLE_Info_95);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ModuleInfo_89;
              MR_Word ConsRepnDefn_90;
              MR_Word CtorArgRepns_91;
              MR_Word Var_96;
              MR_Word LHSVarLval_151;
              MR_Word RHSVarRepns_152;
              MR_Word ToOrRvals_153;
              MR_Unsigned ToOrMask_154;
              MR_Word RightStmts_155;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_94, LHSVar_10, &LHSVarLval_151);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_94, &ModuleInfo_89);
              check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_89, ConsId_11, &ConsRepnDefn_90);
              CtorArgRepns_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_90, (MR_Integer) 4))));
              mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), RHSVars_12, CtorArgRepns_91, &RHSVarRepns_152);
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_96, 0) = ((MR_Box) (LHSVarLval_151));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_10_p_0(STATE_VARIABLE_Info_0_94, Var_96, RHSVarRepns_152, ArgModes_13, Context_14, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_153, (MR_Unsigned) 0U, &ToOrMask_154, &RightStmts_155);
              if ((ToOrRvals_153 == (MR_Word) ((MR_Unsigned) 0U)))
                *Stmts_16 = RightStmts_155;
              else
              {
                MR_Word MaskedOldVarRval_92;
                MR_Word NewVarRval_93;
                MR_Word Var_99;
                MR_Unsigned Var_100;
                MR_Word HeadToOrRval_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_153, (MR_Integer) 0))));
                MR_Word TailToOrRvals_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_153, (MR_Integer) 1))));
                MR_Word ToOrRval_143;
                MR_Word ComplementMask_144;
                MR_Word LeftStmt_145;

                ToOrRval_143 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadToOrRval_141, TailToOrRvals_142);
                Var_100 = ~(ToOrMask_154);
                {
                  Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (Var_100));
                }
                {
                  ComplementMask_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ComplementMask_144, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), ComplementMask_144, 1) = ((MR_Box) (Var_99));
                }
                {
                  MaskedOldVarRval_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), MaskedOldVarRval_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), MaskedOldVarRval_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(3), MaskedOldVarRval_92, 2) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(3), MaskedOldVarRval_92, 3) = ((MR_Box) (ComplementMask_144));
                }
                {
                  NewVarRval_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), NewVarRval_93, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), NewVarRval_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[5])));
                  MR_hl_field(MR_mktag(3), NewVarRval_93, 2) = ((MR_Box) (MaskedOldVarRval_92));
                  MR_hl_field(MR_mktag(3), NewVarRval_93, 3) = ((MR_Box) (ToOrRval_143));
                }
                LeftStmt_145 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSVarLval_151, NewVarRval_93, Context_14);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftStmt_145));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RightStmts_155));
                }
              }
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_95 = STATE_VARIABLE_Info_0_94;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Ptag_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word RHSVar_137;
              MR_Word ArgMode_138;
              MR_Box conv1_RHSVar_137;
              MR_Box conv0_ArgMode_138;

              hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_12, ArgModes_13, &conv1_RHSVar_137, &conv0_ArgMode_138);
              RHSVar_137 = ((MR_Word) (conv1_RHSVar_137));
              ArgMode_138 = ((MR_Word) (conv0_ArgMode_138));
              ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(STATE_VARIABLE_Info_0_94, Ptag_48, LHSVar_10, RHSVar_137, ArgMode_138, Context_14, Stmts_16);
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_95 = STATE_VARIABLE_Info_0_94;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_take_tagword_args_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_FirstNonTagwordArgNum_0_7,
  MR_Integer * STATE_VARIABLE_FirstNonTagwordArgNum_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_FirstNonTagwordArgNum_8 = STATE_VARIABLE_FirstNonTagwordArgNum_0_7;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_take_tagword_args\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_take_tagword_args\'/8", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Repn_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 1))));
      MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_44, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) ArgPosWidth_45)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
            *STATE_VARIABLE_FirstNonTagwordArgNum_8 = STATE_VARIABLE_FirstNonTagwordArgNum_0_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
            *STATE_VARIABLE_FirstNonTagwordArgNum_8 = STATE_VARIABLE_FirstNonTagwordArgNum_0_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_45, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__5_5 = HeadVar__1_1;
                *HeadVar__6_6 = HeadVar__2_2;
                *STATE_VARIABLE_FirstNonTagwordArgNum_8 = STATE_VARIABLE_FirstNonTagwordArgNum_0_7;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word TailTagwordRHSVarRepns_54;
                MR_Word TailTagwordArgModes_55;
                MR_Integer STATE_VARIABLE_FirstNonTagwordArgNum_69_69 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstNonTagwordArgNum_0_7 + (MR_Unsigned) (MR_Integer) 1);

                ml_backend__ml_unify_gen_deconstruct__ml_take_tagword_args_8_p_0(Var_75, ArgModes_37, &TailTagwordRHSVarRepns_54, &TailTagwordArgModes_55, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_FirstNonTagwordArgNum_69_69, STATE_VARIABLE_FirstNonTagwordArgNum_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_76));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordRHSVarRepns_54));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode_36));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordArgModes_55));
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_6_p_0(
  MR_Word Info_7,
  MR_Word LHSVar_8,
  MR_Word RHSVar_9,
  MR_Word ArgMode_10,
  MR_Word Context_11,
  MR_Word * Stmts_12)
{
  {
    MR_Word RHSType_13;
    MR_Word LHSType_14;
    MR_Word RHSLval_15;
    MR_Word LHSLval_16;
    MR_Word ModuleInfo_17;
    MR_Word HighLevelData_18;
    MR_Word ArgPosWidth_19;
    MR_Word Dir_20;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_7, RHSVar_9, &RHSType_13);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_7, LHSVar_8, &LHSType_14);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_7, RHSVar_9, &RHSLval_15);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_7, LHSVar_8, &LHSLval_16);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_7, &ModuleInfo_17);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_7, &HighLevelData_18);
    ArgPosWidth_19 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[3]));
    ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(ModuleInfo_17, ArgMode_10, RHSType_13, LHSType_14, &Dir_20);
    switch (Dir_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        *Stmts_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_17, HighLevelData_18, LHSLval_16, LHSType_14, RHSLval_15, RHSType_13, ArgPosWidth_19, Context_11, Stmts_12);
        break;
      case (MR_Integer) 1:
        {
          MR_Word _PackedArgVars_21;

          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_17, LHSLval_16, LHSType_14, RHSVar_9, RHSLval_15, RHSType_13, ArgPosWidth_19, Context_11, &_PackedArgVars_21, Stmts_12);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word Ptag_9,
  MR_Word LHSVar_10,
  MR_Word RHSVar_11,
  MR_Word ArgMode_12,
  MR_Word Context_13,
  MR_Word * Stmts_14)
{
  {
    MR_Word RHSType_15;
    MR_Word LHSType_16;
    MR_Word RHSLval_17;
    MR_Word LHSLval_18;
    MR_Word ModuleInfo_19;
    MR_Word Dir_20;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_8, RHSVar_11, &RHSType_15);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_8, LHSVar_10, &LHSType_16);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_8, RHSVar_11, &RHSLval_17);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_8, LHSVar_10, &LHSLval_18);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_8, &ModuleInfo_19);
    ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(ModuleInfo_19, ArgMode_12, RHSType_15, LHSType_16, &Dir_20);
    switch (Dir_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_direct_arg\'/7", (MR_String) "dummy unify");
            return;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word RHSRval_27;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word MLDS_Type_41;
          MR_Word CastRval_42;
          MR_Word Stmt_43;

          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (RHSLval_17));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, RHSType_15, LHSType_16, (MR_Integer) 0, Var_31, &RHSRval_27);
          MLDS_Type_41 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, LHSType_16);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Ptag_9));
            MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (RHSRval_27));
          }
          {
            CastRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_42, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), CastRval_42, 1) = ((MR_Box) (MLDS_Type_41));
            MR_hl_field(MR_mktag(3), CastRval_42, 2) = ((MR_Box) (Var_32));
          }
          Stmt_43 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_18, CastRval_42, Context_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_43));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSRval_21;
          MR_Word MLDS_Type_22;
          uint8_t PtagUint8_23;
          MR_Integer PtagInt_24;
          MR_Word CastRval_25;
          MR_Word Stmt_26;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_39;

          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (LHSLval_18));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, LHSType_16, RHSType_15, (MR_Integer) 0, Var_35, &LHSRval_21);
          MLDS_Type_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, RHSType_15);
          PtagUint8_23 = (uint8_t) (Ptag_9);
          PtagInt_24 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_23);
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (PtagInt_24));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (LHSRval_21));
            MR_hl_field(MR_mktag(3), Var_36, 3) = ((MR_Box) (Var_38));
          }
          {
            CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), CastRval_25, 1) = ((MR_Box) (MLDS_Type_22));
            MR_hl_field(MR_mktag(3), CastRval_25, 2) = ((MR_Box) (Var_36));
          }
          Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_17, CastRval_25, Context_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        *Stmts_14 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_10_p_0(
  MR_Word Info_1,
  MR_Word WordRval_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_ToOrRvals_0_6,
  MR_Word * STATE_VARIABLE_ToOrRvals_7,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_8,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_9,
  MR_Word * HeadVar__10_10)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ToOrMask_9 = STATE_VARIABLE_ToOrMask_0_8;
      *STATE_VARIABLE_ToOrRvals_7 = STATE_VARIABLE_ToOrRvals_0_6;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_args\'/10", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_args\'/10", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ArgModes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadStmts_58;
      MR_Word TailStmts_59;
      MR_Word STATE_VARIABLE_ToOrRvals_64_64;
      MR_Unsigned STATE_VARIABLE_ToOrMask_65_65;

      ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_10_p_0(Info_1, WordRval_2, Var_70, ArgMode_52, Context_5, STATE_VARIABLE_ToOrRvals_0_6, &STATE_VARIABLE_ToOrRvals_64_64, STATE_VARIABLE_ToOrMask_0_8, &STATE_VARIABLE_ToOrMask_65_65, &HeadStmts_58);
      ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_10_p_0(Info_1, WordRval_2, Var_69, ArgModes_53, Context_5, STATE_VARIABLE_ToOrRvals_64_64, STATE_VARIABLE_ToOrRvals_7, STATE_VARIABLE_ToOrMask_65_65, STATE_VARIABLE_ToOrMask_9, &TailStmts_59);
      *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_58, TailStmts_59);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_10_p_0(
  MR_Word Info_11,
  MR_Word WordRval_12,
  MR_Word HeadVar__3_3,
  MR_Word ArgMode_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ToOrRvals_0_29,
  MR_Word * STATE_VARIABLE_ToOrRvals_30,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_31,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_32,
  MR_Word * Stmts_19)
{
  {
    MR_Word ArgVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word CtorArgRepn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgLval_20;
    MR_Word ArgType_21;
    MR_Word ModuleInfo_22;
    MR_Word HighLevelData_23;
    MR_Word ArgPosWidth_24;
    MR_Word FieldWidth_25;
    MR_Word FieldRawType_26;
    MR_Word FieldType_27;
    MR_Word Dir_28;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_11, ArgVar_13, &ArgLval_20);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_11, ArgVar_13, &ArgType_21);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_11, &ModuleInfo_22);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_11, &HighLevelData_23);
    ArgPosWidth_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_14, (MR_Integer) 2))));
    FieldWidth_25 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_24);
    FieldRawType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_14, (MR_Integer) 1))));
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_22, HighLevelData_23, FieldRawType_26, FieldWidth_25, &FieldType_27);
    ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(ModuleInfo_22, ArgMode_15, ArgType_21, FieldType_27, &Dir_28);
    switch (Dir_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          *Stmts_19 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ToOrRvals_30 = STATE_VARIABLE_ToOrRvals_0_29;
          *STATE_VARIABLE_ToOrMask_32 = STATE_VARIABLE_ToOrMask_0_31;
        }
        break;
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) ArgPosWidth_24)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_left\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_left\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_left\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Shift_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 3))));
                    MR_Word Mask_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 5))));
                    MR_Word Fill_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 6))) & (MR_Integer) 7);
                    MR_Integer ShiftInt_56 = (MR_Integer) (Shift_52);
                    MR_Integer MaskInt_57 = (MR_Integer) (Mask_54);
                    MR_Word LeftShiftedArgRval_58;
                    MR_Word Var_74;
                    MR_Unsigned Var_77;
                    MR_Unsigned Var_78;
                    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 6)));

                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_74, 0) = ((MR_Box) (ArgLval_20));
                    }
                    LeftShiftedArgRval_58 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(Var_74, Shift_52, Fill_55);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_ToOrRvals_30 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftShiftedArgRval_58));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_29));
                    }
                    Var_78 = mercury__uint__cast_from_int_1_f_0(MaskInt_57);
                    Var_77 = mercury__uint__f_60_60_2_f_0(Var_78, ShiftInt_56);
                    *STATE_VARIABLE_ToOrMask_32 = (Var_77 | STATE_VARIABLE_ToOrMask_0_31);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_ToOrRvals_30 = STATE_VARIABLE_ToOrRvals_0_29;
                    *STATE_VARIABLE_ToOrMask_32 = STATE_VARIABLE_ToOrMask_0_31;
                  }
                  break;
              }
              break;
          }
          *Stmts_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_assign_right_5_p_0(WordRval_12, ArgPosWidth_24, ArgLval_20, Context_16, Stmts_19);
          *STATE_VARIABLE_ToOrRvals_30 = STATE_VARIABLE_ToOrRvals_0_29;
          *STATE_VARIABLE_ToOrMask_32 = STATE_VARIABLE_ToOrMask_0_31;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_assign_right_5_p_0(
  MR_Word WordRval_6,
  MR_Word ArgPosWidth_7,
  MR_Word ArgLval_8,
  MR_Word Context_9,
  MR_Word * Stmts_10)
{
  switch (MR_tag((MR_Word) ArgPosWidth_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_right\'/5", (MR_String) "ArgPosWidth does not belong in tagword");
          return;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_right\'/5", (MR_String) "ArgPosWidth does not belong in tagword");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_7, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_right\'/5", (MR_String) "ArgPosWidth does not belong in tagword");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_7, (MR_Integer) 3))));
            MR_Word Mask_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_7, (MR_Integer) 5))));
            MR_Word Fill_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_7, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word ToAssignRval_17;
            MR_Word Stmt_18;
            MR_Word UnsignedWordRval_40;
            MR_Integer MaskInt_41;
            MR_Word MaskedRval_42;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_7, (MR_Integer) 6)));

            Var_44 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
            {
              UnsignedWordRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_40, 1) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_40, 2) = ((MR_Box) (WordRval_6));
            }
            MaskInt_41 = (MR_Integer) (Mask_15);
            Var_45 = ml_backend__ml_unify_gen_util__ml_right_shift_rval_2_f_0(UnsignedWordRval_40, Shift_13);
            MaskedRval_42 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(Var_45, MaskInt_41);
            switch (Fill_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 7:
              case (MR_Integer) 0:
                ToAssignRval_17 = MaskedRval_42;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CastMLDSType_43;

                  CastMLDSType_43 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_43));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_42));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastMLDSType_46;

                  CastMLDSType_46 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_46));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_42));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CastMLDSType_47;

                  CastMLDSType_47 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_47));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_42));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word CastMLDSType_48;

                  CastMLDSType_48 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_48));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_42));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word CastMLDSType_49;

                  CastMLDSType_49 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_49));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_42));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word CastMLDSType_50;

                  CastMLDSType_50 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_50));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_42));
                  }
                }
                break;
            }
            Stmt_18 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_8, ToAssignRval_17, Context_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          *Stmts_10 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__354__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(
  MR_Word FieldGen_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word Context_5,
  MR_Word TakeAddr_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_19;

        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TakeAddr_6));
          MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 0))));
        MR_Word CtorArgRepn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 1))));
        MR_Integer NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word ArgPosWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_64, (MR_Integer) 2))));
        MR_Word FieldVia_82;
        MR_Unsigned packed_args_0;

        succeeded = ((((MR_tag((MR_Word) ArgPosWidth_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 0))) == (MR_Integer) 0)));
        if (succeeded)
        {
          packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 6)));
          FieldVia_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
          succeeded = (FieldVia_82 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word LeftOverArgVarRepns_83;
          MR_Word LeftOverArgModes_84;
          MR_Integer LeftOverArgNum_85;
          MR_Word HeadDefns_86;
          MR_Word HeadStmts_87;
          MR_Word TailDefns_88;
          MR_Word TailStmts_89;
          MR_Word STATE_VARIABLE_Info_97_97;

          ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_50_93_95_48_16_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, ArgMode_54, Var_111, ArgModes_55, &LeftOverArgVarRepns_83, &LeftOverArgModes_84, CurArgNum_4, &LeftOverArgNum_85, Context_5, &HeadDefns_86, &HeadStmts_87, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_97_97);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_1, LeftOverArgVarRepns_83, LeftOverArgModes_84, LeftOverArgNum_85, Context_5, TakeAddr_6, HeadVar__7_7, &TailDefns_88, &TailStmts_89, STATE_VARIABLE_Info_97_97, STATE_VARIABLE_Info_11);
          *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_86, TailDefns_88);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_87, TailStmts_89);
        }
        else
        {
          MR_Word STATE_VARIABLE_Info_99_99;
          MR_Word HeadStmts_101;
          MR_Word TailStmts_102;
          MR_Word _PackedArgVars_90;

          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, ArgMode_54, CurArgNum_4, Context_5, &_PackedArgVars_90, &HeadStmts_101, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_99_99);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_1, Var_111, ArgModes_55, NextArgNum_65, Context_5, TakeAddr_6, HeadVar__7_7, HeadVar__8_8, &TailStmts_102, STATE_VARIABLE_Info_99_99, STATE_VARIABLE_Info_11);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_101, TailStmts_102);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_50_93_95_48_16_p_0(
  MR_Word FieldGen_17,
  MR_Word ArgVar_18,
  MR_Word CtorArgRepn_19,
  MR_Word ArgMode_20,
  MR_Word ArgVarRepns_21,
  MR_Word ArgModes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverArgModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_65,
  MR_Word * STATE_VARIABLE_Info_66)
{
  {
    MR_bool succeeded;
    MR_Word HeadPackedArgVars_32;
    MR_Word HeadStmts_33;
    MR_Word AllPartialsRight0_34;
    MR_Integer NextArgNum_37;
    MR_Word AllPartialsRight_38;
    MR_Word TailPackedArgVars_39;
    MR_Word TailStmts_40;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word STATE_VARIABLE_Info_69_69;

    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_17, ArgVar_18, CtorArgRepn_19, ArgMode_20, CurArgNum_25, Context_27, &HeadPackedArgVars_32, &HeadStmts_33, STATE_VARIABLE_Info_0_65, &STATE_VARIABLE_Info_67_67);
    if ((HeadPackedArgVars_32 == (MR_Word) ((MR_Unsigned) 0U)))
      AllPartialsRight0_34 = (MR_Integer) 0;
    else
      AllPartialsRight0_34 = (MR_Integer) 1;
    NextArgNum_37 = (MR_Integer) ((MR_Unsigned) CurArgNum_25 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(FieldGen_17, ArgVarRepns_21, ArgModes_22, LeftOverArgVarRepns_23, LeftOverArgModes_24, NextArgNum_37, LeftOverArgNum_26, Context_27, AllPartialsRight0_34, &AllPartialsRight_38, &TailPackedArgVars_39, &TailStmts_40, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_69_69);
    switch (AllPartialsRight_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PackedArgVars_41;
          MR_Word WordCompVar_42;
          MR_Word WordVar_43;
          MR_Word UnsignedType_44;
          MR_Word WordVarDefn_45;
          MR_Word ArgPosWidth_46;
          MR_Integer CellOffsetInt_53;
          MR_Word FieldId_54;
          MR_Word MaybePtag_55;
          MR_Word AddrRval_56;
          MR_Word AddrType_57;
          MR_Word FieldLval_59;
          MR_Word CastFieldRval_60;
          MR_Word WordVarLval_61;
          MR_Word WordAssignStmt_62;
          MR_Word PackedArgsMap0_63;
          MR_Word PackedArgsMap_64;
          MR_Word STATE_VARIABLE_Info_70_70;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word CellOffset_48;
          MR_Unsigned packed_args_0;

          PackedArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_32, TailPackedArgVars_39);
          ml_backend__ml_gen_info__ml_gen_info_new_packed_args_var_3_p_0(&WordCompVar_42, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_70_70);
          {
            WordVar_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVar_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), WordVar_43, 1) = ((MR_Box) (WordCompVar_42));
          }
          UnsignedType_44 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
          {
            WordVarDefn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 0) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 1) = ((MR_Box) (Context_27));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 2) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), WordVarDefn_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Defns_29 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordVarDefn_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ArgPosWidth_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_19, (MR_Integer) 2))));
          succeeded = ((((MR_tag((MR_Word) ArgPosWidth_46)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_46, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CellOffset_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_46, (MR_Integer) 2))));
            packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_46, (MR_Integer) 6)));
            CellOffsetInt_53 = (MR_Integer) (CellOffset_48);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word\'/16", (MR_String) "no apw_partial_first");
              return;
            }
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) (CellOffsetInt_53));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
          }
          {
            FieldId_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_54, 0) = ((MR_Box) (Var_76));
          }
          MaybePtag_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 0))));
          AddrRval_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 1))));
          AddrType_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 2))));
          {
            FieldLval_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_59, 0) = ((MR_Box) (MaybePtag_55));
            MR_hl_field(MR_mktag(0), FieldLval_59, 1) = ((MR_Box) (AddrRval_56));
            MR_hl_field(MR_mktag(0), FieldLval_59, 2) = ((MR_Box) (AddrType_57));
            MR_hl_field(MR_mktag(0), FieldLval_59, 3) = ((MR_Box) (FieldId_54));
            MR_hl_field(MR_mktag(0), FieldLval_59, 4) = ((MR_Box) ((MR_Unsigned) 24U));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (FieldLval_59));
          }
          {
            CastFieldRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastFieldRval_60, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), CastFieldRval_60, 1) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(3), CastFieldRval_60, 2) = ((MR_Box) (Var_79));
          }
          {
            WordVarLval_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVarLval_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), WordVarLval_61, 1) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(3), WordVarLval_61, 2) = ((MR_Box) (UnsignedType_44));
          }
          WordAssignStmt_62 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_61, CastFieldRval_60, Context_27);
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (WordAssignStmt_62));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (HeadStmts_33));
          }
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_80, TailStmts_40);
          ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(STATE_VARIABLE_Info_70_70, &PackedArgsMap0_63);
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (WordVarLval_61));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (PackedArgVars_41)), ((MR_Box) (Var_81)), PackedArgsMap0_63, &PackedArgsMap_64);
          ml_backend__ml_gen_info__ml_gen_info_set_packed_args_map_3_p_0(PackedArgsMap_64, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_66);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_29 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_33, TailStmts_40);
          *STATE_VARIABLE_Info_66 = STATE_VARIABLE_Info_69_69;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__529__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Integer CurArgNum_6,
  MR_Integer * LeftOverArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_10,
  MR_Word * STATE_VARIABLE_AllPartialsRight_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
        *LeftOverArgNum_7 = CurArgNum_6;
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
        *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_144, (MR_Integer) 0))));
        MR_Word CtorArgRepn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_144, (MR_Integer) 1))));
        MR_Word ArgPosWidth_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_81, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) ArgPosWidth_82)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverArgNum_7 = CurArgNum_6;
              *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
              *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__4_4 = HeadVar__2_2;
              *HeadVar__5_5 = HeadVar__3_3;
              *LeftOverArgNum_7 = CurArgNum_6;
              *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
              *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_82, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__4_4 = HeadVar__2_2;
                  *HeadVar__5_5 = HeadVar__3_3;
                  *LeftOverArgNum_7 = CurArgNum_6;
                  *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
                  *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_AllPartialsRight_11 = STATE_VARIABLE_AllPartialsRight_0_10;
                  *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HeadPackedArgVars_133;
                  MR_Word HeadStmts_134;
                  MR_Integer NextArgNum_135;
                  MR_Word TailPackedArgVars_136;
                  MR_Word TailStmts_137;
                  MR_Word STATE_VARIABLE_Info_119_138;
                  MR_Word STATE_VARIABLE_AllPartialsRight_120_139;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, ArgMode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_133, &HeadStmts_134, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_119_138);
                  if ((HeadPackedArgVars_133 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AllPartialsRight_120_139 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_120_139 = STATE_VARIABLE_AllPartialsRight_0_10;
                  NextArgNum_135 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(HeadVar__1_1, Var_143, ArgModes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_135, LeftOverArgNum_7, HeadVar__8_8, STATE_VARIABLE_AllPartialsRight_120_139, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_136, &TailStmts_137, STATE_VARIABLE_Info_119_138, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_133, TailPackedArgVars_136);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_134, TailStmts_137);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadPackedArgVars_89;
                  MR_Word HeadStmts_90;
                  MR_Integer NextArgNum_96;
                  MR_Word TailPackedArgVars_97;
                  MR_Word TailStmts_98;
                  MR_Word Var_115;
                  MR_Word STATE_VARIABLE_Info_119_119;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, ArgMode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_89, &HeadStmts_90, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_119_119);
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (HeadPackedArgVars_89));
                    MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "HeadPackedArgVars != [] for apw_none_shifted");
                  NextArgNum_96 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(HeadVar__1_1, Var_143, ArgModes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_96, LeftOverArgNum_7, HeadVar__8_8, STATE_VARIABLE_AllPartialsRight_0_10, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_97, &TailStmts_98, STATE_VARIABLE_Info_119_119, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_89, TailPackedArgVars_97);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_90, TailStmts_98);
                }
                break;
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(
  MR_Word FieldGen_11,
  MR_Word ArgVar_12,
  MR_Word CtorArgRepn_13,
  MR_Word ArgMode_14,
  MR_Integer ArgNum_15,
  MR_Word Context_16,
  MR_Word * PackedArgVars_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58)
{
  {
    MR_Word MaybePrimaryTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 0))));
    MR_Word AddrRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 1))));
    MR_Word AddrType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 2))));
    MR_Word FieldVia_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 3))));
    MR_Word ArgPosWidth_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 2))));
    MR_Word FieldId_41;
    MR_Word ModuleInfo_47;
    MR_Word HighLevelData_48;
    MR_Word FieldWidth_49;
    MR_Word FieldRawType_50;
    MR_Word FieldType_51;
    MR_Word MLDS_FieldType_52;
    MR_Word FieldLval_53;
    MR_Word ArgLval_54;
    MR_Word ArgType_55;
    MR_Word Dir_56;
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 0))));

    if ((FieldVia_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CellOffsetInt_40;
      MR_Word Var_60;
      MR_Word Var_61;

      switch (MR_tag((MR_Word) ArgPosWidth_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CellOffsetInt_40 = (MR_Integer) -1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word CellOffset_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_24, (MR_Integer) 1))));

            CellOffsetInt_40 = (MR_Integer) (CellOffset_71);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CellOffset_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_24, (MR_Integer) 1))));
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), ArgPosWidth_24, (MR_Integer) 2)));

            CellOffsetInt_40 = (MR_Integer) (CellOffset_26);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellOffset_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));
                MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 6)));

                CellOffsetInt_40 = (MR_Integer) (CellOffset_73);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellOffset_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));
                MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 6)));

                CellOffsetInt_40 = (MR_Integer) (CellOffset_74);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word CellOffset_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));

                CellOffsetInt_40 = (MR_Integer) (CellOffset_72);
              }
              break;
          }
          break;
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (CellOffsetInt_40));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
      }
      {
        FieldId_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_41, 0) = ((MR_Box) (Var_60));
      }
    }
    else
    {
      MR_Word FieldQualifier_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_23, (MR_Integer) 0))));
      MR_Word ClassPtrType_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_23, (MR_Integer) 1))));
      MR_Word FieldName_45;
      MR_Word QualifiedFieldName_46;

      FieldName_45 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(Var_62, ArgNum_15);
      {
        QualifiedFieldName_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QualifiedFieldName_46, 0) = ((MR_Box) (FieldQualifier_42));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_46, 2) = ((MR_Box) (FieldName_45));
      }
      {
        FieldId_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldId_41, 0) = ((MR_Box) (QualifiedFieldName_46));
        MR_hl_field(MR_mktag(1), FieldId_41, 1) = ((MR_Box) (ClassPtrType_43));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_57, &ModuleInfo_47);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_57, &HighLevelData_48);
    FieldWidth_49 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_24);
    FieldRawType_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 1))));
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_47, HighLevelData_48, FieldRawType_50, FieldWidth_49, &FieldType_51);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_57, FieldType_51, &MLDS_FieldType_52);
    {
      FieldLval_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_53, 0) = ((MR_Box) (MaybePrimaryTag_20));
      MR_hl_field(MR_mktag(0), FieldLval_53, 1) = ((MR_Box) (AddrRval_21));
      MR_hl_field(MR_mktag(0), FieldLval_53, 2) = ((MR_Box) (AddrType_22));
      MR_hl_field(MR_mktag(0), FieldLval_53, 3) = ((MR_Box) (FieldId_41));
      MR_hl_field(MR_mktag(0), FieldLval_53, 4) = ((MR_Box) (MLDS_FieldType_52));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_57, ArgVar_12, &ArgLval_54);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_57, ArgVar_12, &ArgType_55);
    ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(ModuleInfo_47, ArgMode_14, ArgType_55, FieldType_51, &Dir_56);
    switch (Dir_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          *PackedArgVars_17 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          *PackedArgVars_17 = (MR_Word) ((MR_Unsigned) 0U);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_47, HighLevelData_48, FieldLval_53, FieldType_51, ArgLval_54, ArgType_55, ArgPosWidth_24, Context_16, Stmts_18);
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_47, FieldLval_53, FieldType_51, ArgVar_12, ArgLval_54, ArgType_55, ArgPosWidth_24, Context_16, PackedArgVars_17, Stmts_18);
        break;
    }
    *STATE_VARIABLE_Info_58 = STATE_VARIABLE_Info_0_57;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word HighLevelData_11,
  MR_Word LHSLval_12,
  MR_Word LHSType_13,
  MR_Word RHSLval_14,
  MR_Word RHSType_15,
  MR_Word ArgPosWidth_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ArgPosWidth_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_60;
          MR_Word RHSRval_75;
          MR_Word Stmt_76;

          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (RHSLval_14));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, RHSType_15, LHSType_13, (MR_Integer) 0, Var_60, &RHSRval_75);
          Stmt_76 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, RHSRval_75, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_76));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RHSRval_22;
          MR_Word Var_63;
          MR_Word LHSLvalA_23;
          MR_Word LHSLvalB_24;

          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (RHSLval_14));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, RHSType_15, LHSType_13, (MR_Integer) 0, Var_63, &RHSRval_22);
          succeeded = ml_backend__ml_unify_gen_deconstruct__ml_field_offset_pair_3_p_0(LHSLval_12, &LHSLvalA_23, &LHSLvalB_24);
          if (succeeded)
          {
            MR_Word FloatWordA_25;
            MR_Word FloatWordB_26;
            MR_Word IntLHSType_27;
            MR_Word RHSRvalA_28;
            MR_Word RHSRvalB_29;
            MR_Word StmtA_30;
            MR_Word StmtB_31;
            MR_Word Var_66;
            MR_Word Var_68;
            MR_Word Var_70;
            MR_Word Var_72;

            {
              FloatWordA_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 2) = ((MR_Box) (RHSRval_22));
            }
            {
              FloatWordB_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 1) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 2) = ((MR_Box) (RHSRval_22));
            }
            Var_66 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_10, HighLevelData_11, Var_66, (MR_Integer) 2, &IntLHSType_27);
            Var_68 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, Var_68, IntLHSType_27, (MR_Integer) 0, FloatWordA_25, &RHSRvalA_28);
            Var_70 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, Var_70, IntLHSType_27, (MR_Integer) 0, FloatWordB_26, &RHSRvalB_29);
            StmtA_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLvalA_23, RHSRvalA_28, Context_17);
            StmtB_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLvalB_24, RHSRvalB_29, Context_17);
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (StmtB_31));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmtA_30));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_72));
            }
          }
          else
          {
            MR_Word Stmt_32;

            Stmt_32 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, RHSRval_22, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Shift_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 3))));
              MR_Word Mask_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 5))));
              MR_Word Fill_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_44;
              MR_Integer MaskInt_45;
              MR_Word CastLHSRVal_46;
              MR_Word OldLHSBits_47;
              MR_Word NewLHSBits_48;
              MR_Word UpdatedLHSBits_49;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Integer Var_54;
              MR_Integer Var_55;
              MR_Word Var_57;
              MR_Word RHSRval_77;
              MR_Word Stmt_78;
              MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 6)));

              {
                RHSRval_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), RHSRval_77, 0) = ((MR_Box) (RHSLval_14));
              }
              ShiftInt_44 = (MR_Integer) (Shift_37);
              MaskInt_45 = (MR_Integer) (Mask_39);
              Var_52 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (LHSLval_12));
              }
              {
                CastLHSRVal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastLHSRVal_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), CastLHSRVal_46, 1) = ((MR_Box) (Var_52));
                MR_hl_field(MR_mktag(3), CastLHSRVal_46, 2) = ((MR_Box) (Var_53));
              }
              Var_55 = mercury__int__f_60_60_2_f_0(MaskInt_45, ShiftInt_44);
              Var_54 = ~(Var_55);
              OldLHSBits_47 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(CastLHSRVal_46, Var_54);
              NewLHSBits_48 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(RHSRval_77, Shift_37, Fill_40);
              Var_57 = ml_backend__ml_unify_gen_util__ml_bitwise_or_two_rvals_2_f_0(OldLHSBits_47, NewLHSBits_48);
              {
                UpdatedLHSBits_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_49, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_49, 2) = ((MR_Box) (Var_57));
              }
              Stmt_78 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, UpdatedLHSBits_49, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_78));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 3))));
              MR_Word Mask_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 5))));
              MR_Word Fill_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_82;
              MR_Integer MaskInt_83;
              MR_Word CastLHSRVal_84;
              MR_Word OldLHSBits_85;
              MR_Word NewLHSBits_86;
              MR_Word UpdatedLHSBits_87;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Integer Var_90;
              MR_Integer Var_91;
              MR_Word Var_93;
              MR_Word RHSRval_95;
              MR_Word Stmt_96;
              MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 6)));

              {
                RHSRval_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), RHSRval_95, 0) = ((MR_Box) (RHSLval_14));
              }
              ShiftInt_82 = (MR_Integer) (Shift_79);
              MaskInt_83 = (MR_Integer) (Mask_80);
              Var_88 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_89, 0) = ((MR_Box) (LHSLval_12));
              }
              {
                CastLHSRVal_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastLHSRVal_84, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), CastLHSRVal_84, 1) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(3), CastLHSRVal_84, 2) = ((MR_Box) (Var_89));
              }
              Var_91 = mercury__int__f_60_60_2_f_0(MaskInt_83, ShiftInt_82);
              Var_90 = ~(Var_91);
              OldLHSBits_85 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(CastLHSRVal_84, Var_90);
              NewLHSBits_86 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(RHSRval_95, Shift_79, Fill_81);
              Var_93 = ml_backend__ml_unify_gen_util__ml_bitwise_or_two_rvals_2_f_0(OldLHSBits_85, NewLHSBits_86);
              {
                UpdatedLHSBits_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_87, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_87, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_87, 2) = ((MR_Box) (Var_93));
              }
              Stmt_96 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, UpdatedLHSBits_87, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_96));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_field_offset_pair_3_p_0(
  MR_Word FieldLval_4,
  MR_Word * FieldLvalA_5,
  MR_Word * FieldLvalB_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) FieldLval_4)) == (MR_Integer) 0);
    MR_Word Ptag_7;
    MR_Word PtrRval_8;
    MR_Word PtrType_9;
    MR_Word FieldIdA_10;
    MR_Word FieldOffsetA_12;
    MR_Integer Offset_13;
    MR_Word Var_16;

    if (succeeded)
    {
      Ptag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 0))));
      PtrRval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 1))));
      PtrType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 2))));
      FieldIdA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_4, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) FieldIdA_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        FieldOffsetA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdA_10, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) FieldOffsetA_12)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
          if (succeeded)
            Offset_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word FieldIdB_14;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Offset_13 + (MR_Unsigned) (MR_Integer) 1);

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (Var_19));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
          }
          {
            FieldIdB_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldIdB_14, 0) = ((MR_Box) (Var_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalA_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldIdA_10));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 24U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalB_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldIdB_14));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 24U));
          }
        }
        else
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word LHSLval_12,
  MR_Word LHSType_13,
  MR_Word RHSVar_14,
  MR_Word RHSLval_15,
  MR_Word RHSType_16,
  MR_Word ArgPosWidth_17,
  MR_Word Context_18,
  MR_Word * PackedRHSVars_19,
  MR_Word * Stmts_20)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ArgPosWidth_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *PackedRHSVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_20 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_46;
          MR_Word LHSRval_54;
          MR_Word Stmt_55;

          *PackedRHSVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (LHSLval_12));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, LHSType_13, RHSType_16, (MR_Integer) 0, Var_46, &LHSRval_54);
          Stmt_55 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, LHSRval_54, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_55));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LHSRval_26;
          MR_Word Stmt_27;
          MR_Word LHSLvalA_24;
          MR_Word LHSLvalB_25;
          MR_Word Ptag_70;
          MR_Word PtrRval_71;
          MR_Word PtrType_72;
          MR_Word FieldIdA_73;
          MR_Word FieldOffsetA_75;
          MR_Integer Offset_76;
          MR_Word Var_79;

          *PackedRHSVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = ((MR_tag((MR_Word) LHSLval_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Ptag_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSLval_12, (MR_Integer) 0))));
            PtrRval_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSLval_12, (MR_Integer) 1))));
            PtrType_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSLval_12, (MR_Integer) 2))));
            FieldIdA_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSLval_12, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) FieldIdA_73)) == (MR_Integer) 0);
            if (succeeded)
            {
              FieldOffsetA_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdA_73, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) FieldOffsetA_75)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_75, (MR_Integer) 0))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldOffsetA_75, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_Integer) 2);
                if (succeeded)
                  Offset_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_79, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word FieldIdB_77;
                MR_Word Var_80;
                MR_Word Var_81;
                MR_Integer Var_82 = (MR_Integer) ((MR_Unsigned) Offset_76 + (MR_Unsigned) (MR_Integer) 1);

                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (Var_82));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_81));
                }
                {
                  FieldIdB_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FieldIdB_77, 0) = ((MR_Box) (Var_80));
                }
                {
                  LHSLvalA_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 0) = ((MR_Box) (Ptag_70));
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 1) = ((MR_Box) (PtrRval_71));
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 2) = ((MR_Box) (PtrType_72));
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 3) = ((MR_Box) (FieldIdA_73));
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 4) = ((MR_Box) ((MR_Unsigned) 24U));
                }
                {
                  LHSLvalB_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 0) = ((MR_Box) (Ptag_70));
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 1) = ((MR_Box) (PtrRval_71));
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 2) = ((MR_Box) (PtrType_72));
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 3) = ((MR_Box) (FieldIdB_77));
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 4) = ((MR_Box) ((MR_Unsigned) 24U));
                }
              }
              else
              {
                {
                  mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
                  return;
                }
              }
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Word Var_49;
            MR_Word Var_50;

            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_49, 0) = ((MR_Box) (LHSLvalA_24));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (LHSLvalB_25));
            }
            {
              LHSRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), LHSRval_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), LHSRval_26, 1) = ((MR_Box) ((MR_Unsigned) 88U));
              MR_hl_field(MR_mktag(3), LHSRval_26, 2) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(3), LHSRval_26, 3) = ((MR_Box) (Var_50));
            }
          }
          else
          {
            MR_Word Var_52;

            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (LHSLval_12));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, LHSType_13, RHSType_16, (MR_Integer) 0, Var_52, &LHSRval_26);
          }
          Stmt_27 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, LHSRval_26, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Shift_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 3))));
              MR_Word NumBits_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 4))));
              MR_Word Mask_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 5))));
              MR_Word Fill_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word PackedRHSVar_38;
              MR_Word ToAssignRval_39;
              MR_Word Var_43;
              MR_Word Stmt_56;
              MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 6)));

              {
                PackedRHSVar_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PackedRHSVar_38, 0) = ((MR_Box) (RHSVar_14));
                MR_hl_field(MR_mktag(0), PackedRHSVar_38, 1) = ((MR_Box) (Shift_32));
                MR_hl_field(MR_mktag(0), PackedRHSVar_38, 2) = ((MR_Box) (NumBits_33));
                MR_hl_field(MR_mktag(0), PackedRHSVar_38, 3) = (MR_Box) (packed_args_0);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PackedRHSVars_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRHSVar_38));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (LHSLval_12));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(Var_43, Shift_32, Mask_34, Fill_35, &ToAssignRval_39);
              Stmt_56 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, ToAssignRval_39, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_56));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 3))));
              MR_Word NumBits_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 4))));
              MR_Word Mask_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 5))));
              MR_Word Fill_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word PackedRHSVar_61;
              MR_Word ToAssignRval_62;
              MR_Word Var_64;
              MR_Word Stmt_66;
              MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 6)));

              {
                PackedRHSVar_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PackedRHSVar_61, 0) = ((MR_Box) (RHSVar_14));
                MR_hl_field(MR_mktag(0), PackedRHSVar_61, 1) = ((MR_Box) (Shift_57));
                MR_hl_field(MR_mktag(0), PackedRHSVar_61, 2) = ((MR_Box) (NumBits_58));
                MR_hl_field(MR_mktag(0), PackedRHSVar_61, 3) = (MR_Box) (packed_args_1);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PackedRHSVars_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRHSVar_61));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (LHSLval_12));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(Var_64, Shift_57, Mask_59, Fill_60, &ToAssignRval_62);
              Stmt_66 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, ToAssignRval_62, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_66));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *PackedRHSVars_19 = (MR_Word) ((MR_Unsigned) 0U);
              *Stmts_20 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(
  MR_Word WordRval_6,
  MR_Word Shift_7,
  MR_Word Mask_8,
  MR_Word Fill_9,
  MR_Word * Rval_10)
{
  {
    MR_Word UnsignedWordRval_11;
    MR_Integer MaskInt_12;
    MR_Word MaskedRval_13;
    MR_Word Var_15;
    MR_Word Var_16;

    Var_15 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
    {
      UnsignedWordRval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 2) = ((MR_Box) (WordRval_6));
    }
    MaskInt_12 = (MR_Integer) (Mask_8);
    Var_16 = ml_backend__ml_unify_gen_util__ml_right_shift_rval_2_f_0(UnsignedWordRval_11, Shift_7);
    MaskedRval_13 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(Var_16, MaskInt_12);
    switch (Fill_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 7:
      case (MR_Integer) 0:
        *Rval_10 = MaskedRval_13;
        break;
      case (MR_Integer) 2:
        {
          MR_Word CastMLDSType_14;

          CastMLDSType_14 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CastMLDSType_14));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word CastMLDSType_17;

          CastMLDSType_17 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CastMLDSType_17));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CastMLDSType_18;

          CastMLDSType_18 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CastMLDSType_18));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
          }
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word CastMLDSType_19;

          CastMLDSType_19 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CastMLDSType_19));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
          }
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word CastMLDSType_20;

          CastMLDSType_20 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CastMLDSType_20));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word CastMLDSType_21;

          CastMLDSType_21 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *Rval_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (CastMLDSType_21));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_unify_gen_deconstruct__init(void)
{
}

void mercury__ml_backend__ml_unify_gen_deconstruct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__type_ctor_info_do_all_partials_assign_right_0);
	MR_register_type_ctor_info(&ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__type_ctor_info_take_addr_info_0);
}

void mercury__ml_backend__ml_unify_gen_deconstruct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_unify_gen_deconstruct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_unify_gen_deconstruct.
