/*
** Automatically generated from `ml_unify_gen_deconstruct.m'
** by the Mercury compiler,
** version rotd-2019-12-29
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
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_table.mih"
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

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
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__591__2_2_p_0(
  MR_Word HeadFilledBitfields_89,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__591__1_2_p_0(
  MR_Word HeadFilledBitfields_89,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_deconstruct_tagword_args__340__1_2_p_0(
  MR_Word ToOrRvals_22,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__285__1_2_p_0(
  MR_Word FieldVia_71,
  MR_Word HeadVar__2_103);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__385__2_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__385__1_2_p_0(
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
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_17_p_1(
  MR_Word FieldGen_18,
  MR_Word ArgVar_19,
  MR_Word CtorArgRepn_20,
  MR_Word ArgMode_21,
  MR_Word ArgVarRepns_22,
  MR_Word ArgModes_23,
  MR_Word * LeftOverArgVarRepns_24,
  MR_Word * LeftOverArgModes_25,
  MR_Integer CurArgNum_26,
  MR_Integer * LeftOverArgNum_27,
  MR_Word CellOffset_28,
  MR_Word Context_29,
  MR_Word TakeAddr_30,
  MR_Word * Defns_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

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
  MR_Word STATE_VARIABLE_Info_0_86,
  MR_Word * STATE_VARIABLE_Info_87);

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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_11_p_0(
  MR_Word LHSTagwordLval_12,
  MR_Word CastTagwordRval_13,
  MR_Word TagwordType_14,
  MR_Word TagFilledBitfield_15,
  MR_Word RHSVarRepns_16,
  MR_Word ArgModes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_loop_14_p_0(
  MR_Word Info_1,
  MR_Word WordRval_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_ToOrRvals_0_6,
  MR_Word * STATE_VARIABLE_ToOrRvals_7,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_8,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_9,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_10,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_11,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_12,
  MR_Word * STATE_VARIABLE_AllPartialsRight_13,
  MR_Word * HeadVar__14_14);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_14_p_0(
  MR_Word Info_15,
  MR_Word WordRval_16,
  MR_Word HeadVar__3_3,
  MR_Word ArgMode_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_ToOrRvals_0_35,
  MR_Word * STATE_VARIABLE_ToOrRvals_36,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_37,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_38,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_39,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_40,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_41,
  MR_Word * STATE_VARIABLE_AllPartialsRight_42,
  MR_Word * Stmts_25);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_assign_right_8_p_0(
  MR_Word WordRval_9,
  MR_Word ArgPosWidth_10,
  MR_Word ArgVar_11,
  MR_Word ArgLval_12,
  MR_Word Context_13,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_40,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_41,
  MR_Word * Stmts_15);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_51_93_95_48_17_p_0(
  MR_Word FieldGen_18,
  MR_Word ArgVar_19,
  MR_Word CtorArgRepn_20,
  MR_Word ArgMode_21,
  MR_Word ArgVarRepns_22,
  MR_Word ArgModes_23,
  MR_Word * LeftOverArgVarRepns_24,
  MR_Word * LeftOverArgModes_25,
  MR_Integer CurArgNum_26,
  MR_Integer * LeftOverArgNum_27,
  MR_Word CellOffset_28,
  MR_Word Context_29,
  MR_Word * Defns_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

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
ml_backend__ml_unify_gen_deconstruct__record_packed_word_7_p_0(
  MR_Word FilledBitfields_8,
  MR_Word WordRval_9,
  MR_Word Context_10,
  MR_Word * WordVarDefns_11,
  MR_Word * WordVarStmts_12,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(
  MR_Word FieldGen_11,
  MR_Word ArgVar_12,
  MR_Word CtorArgRepn_13,
  MR_Word ArgMode_14,
  MR_Integer ArgNum_15,
  MR_Word Context_16,
  MR_Word * FilledBitfields_17,
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
  MR_Word * FilledBitfields_19,
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


static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_1[17][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_2[4][5];

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_3[2][1];




static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_1[17][2] = {
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0))
  },
  /* row 6 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_unify_gen_deconstruct_scalar_common_3[0])))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_2[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[16])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_0 = {
  (MR_String) "not_all_partials_assign_right",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_1 = {
  (MR_String) "all_partials_assign_right",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_deconstruct",
  (MR_String) "do_all_partials_assign_right",
  {     ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_name_ordered_do_all_partials_assign_right_0 },
  {     ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_value_ordered_do_all_partials_assign_right_0 },
  (MR_Integer) 2,
  UINT16_C(4),
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
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_deconstruct",
  (MR_String) "take_addr_info",
  {     ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_name_ordered_take_addr_info_0 },
  {     ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_ptag_ordered_take_addr_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_take_addr_info_0
};

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__591__2_2_p_0(
  MR_Word HeadFilledBitfields_89,
  MR_Word HeadVar__2_118)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[5]), ((MR_Box) (HeadFilledBitfields_89)), ((MR_Box) (HeadVar__2_118)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__591__1_2_p_0(
  MR_Word HeadFilledBitfields_89,
  MR_Word HeadVar__2_118)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[5]), ((MR_Box) (HeadFilledBitfields_89)), ((MR_Box) (HeadVar__2_118)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_deconstruct_tagword_args__340__1_2_p_0(
  MR_Word ToOrRvals_22,
  MR_Word HeadVar__2_54)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), ((MR_Box) (ToOrRvals_22)), ((MR_Box) (HeadVar__2_54)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__285__1_2_p_0(
  MR_Word FieldVia_71,
  MR_Word HeadVar__2_103)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_unify_gen_util____Unify____field_via_0_0(FieldVia_71, HeadVar__2_103);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__385__2_2_p_0(
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
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__385__1_2_p_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_21 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          ml_backend__mlds____Compare____mlds_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            ml_backend__mlds____Compare____mlds_type_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
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
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__385__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
          Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TakeAddr_6));
          MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word ArgMode_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 0))));
        MR_Word CtorArgRepn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 1))));
        MR_Integer NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
        MR_Word ArgPosWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_64, (MR_Integer) 2))));
        MR_Word TailTakeAddr_67;
        MR_Integer Var_110;

        succeeded = (TakeAddr_6 != (MR_Word) ((MR_Unsigned) 0U));
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "taking address of something other than a full word");
              return;
            }
          ml_backend__ml_unify_gen_deconstruct__ml_gen_take_addr_of_arg_5_p_0(STATE_VARIABLE_Info_0_10, ArgVar_63, CtorArgRepn_64, CellOffset_70, &TakeAddrInfo_71);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, Var_111, ArgModes_55, NextArgNum_65, Context_5, TailTakeAddr_67, &TakeAddrInfosTail_72, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TakeAddrInfo_71));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakeAddrInfosTail_72));
          }
        }
        else
        {
          MR_Word CellOffset_102;
          MR_Word FieldVia_81;

          succeeded = ((((MR_tag((MR_Word) ArgPosWidth_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CellOffset_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 2))));
            FieldVia_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
            succeeded = (FieldVia_81 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word LeftOverArgVarRepns_82;
            MR_Word LeftOverArgModes_83;
            MR_Integer LeftOverArgNum_84;
            MR_Word HeadDefns_85;
            MR_Word HeadStmts_86;
            MR_Word TailDefns_87;
            MR_Word TailStmts_88;
            MR_Word STATE_VARIABLE_Info_96_96;

            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_17_p_1(FieldGen_1, ArgVar_63, CtorArgRepn_64, ArgMode_54, Var_111, ArgModes_55, &LeftOverArgVarRepns_82, &LeftOverArgModes_83, CurArgNum_4, &LeftOverArgNum_84, CellOffset_102, Context_5, TakeAddr_6, &HeadDefns_85, &HeadStmts_86, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_96_96);
            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, LeftOverArgVarRepns_82, LeftOverArgModes_83, LeftOverArgNum_84, Context_5, TakeAddr_6, HeadVar__7_7, &TailDefns_87, &TailStmts_88, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_11);
            *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_85, TailDefns_87);
            *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_86, TailStmts_88);
          }
          else
          {
            MR_Word STATE_VARIABLE_Info_98_98;
            MR_Word HeadStmts_100;
            MR_Word TailStmts_101;
            MR_Word _FilledBitfields_89;

            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, ArgMode_54, CurArgNum_4, Context_5, &_FilledBitfields_89, &HeadStmts_100, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_98_98);
            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, Var_111, ArgModes_55, NextArgNum_65, Context_5, TakeAddr_6, HeadVar__7_7, HeadVar__8_8, &TailStmts_101, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_11);
            *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_100, TailStmts_101);
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
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *TakeAddrInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgVar_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CurOffset_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MLDS_FieldType_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MLDS_BoxedFieldType_18));
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_17_p_1(
  MR_Word FieldGen_18,
  MR_Word ArgVar_19,
  MR_Word CtorArgRepn_20,
  MR_Word ArgMode_21,
  MR_Word ArgVarRepns_22,
  MR_Word ArgModes_23,
  MR_Word * LeftOverArgVarRepns_24,
  MR_Word * LeftOverArgModes_25,
  MR_Integer CurArgNum_26,
  MR_Integer * LeftOverArgNum_27,
  MR_Word CellOffset_28,
  MR_Word Context_29,
  MR_Word TakeAddr_30,
  MR_Word * Defns_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  {
    MR_Word FirstFilledBitfields_34;
    MR_Word HeadStmts_35;
    MR_Word AllPartialsRight0_36;
    MR_Integer NextArgNum_39;
    MR_Word AllPartialsRight_40;
    MR_Word LaterFilledBitfields_41;
    MR_Word TailStmts_42;
    MR_Word Stmts0_43;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Info_58_58;

    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_18, ArgVar_19, CtorArgRepn_20, ArgMode_21, CurArgNum_26, Context_29, &FirstFilledBitfields_34, &HeadStmts_35, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_56_56);
    if ((FirstFilledBitfields_34 == (MR_Word) ((MR_Unsigned) 0U)))
      AllPartialsRight0_36 = (MR_Integer) 0;
    else
      AllPartialsRight0_36 = (MR_Integer) 1;
    NextArgNum_39 = (MR_Integer) ((MR_Unsigned) CurArgNum_26 + (MR_Unsigned) 1);
    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(FieldGen_18, ArgVarRepns_22, ArgModes_23, LeftOverArgVarRepns_24, LeftOverArgModes_25, NextArgNum_39, LeftOverArgNum_27, Context_29, TakeAddr_30, AllPartialsRight0_36, &AllPartialsRight_40, &LaterFilledBitfields_41, &TailStmts_42, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
    Stmts0_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_35, TailStmts_42);
    switch (AllPartialsRight_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FilledBitfields_44;
          MR_Integer CellOffsetInt_45;
          MR_Word FieldId_46;
          MR_Word MaybePtag_47;
          MR_Word AddrRval_48;
          MR_Word AddrType_49;
          MR_Word FieldLval_51;
          MR_Word WordRval_52;
          MR_Word WordVarStmts_53;
          MR_Word Var_59;
          MR_Word Var_60;

          FilledBitfields_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), FirstFilledBitfields_34, LaterFilledBitfields_41);
          CellOffsetInt_45 = (MR_Integer) (CellOffset_28);
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (CellOffsetInt_45));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
          }
          {
            FieldId_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_46, 0) = ((MR_Box) (Var_59));
          }
          MaybePtag_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_18, (MR_Integer) 0))));
          AddrRval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_18, (MR_Integer) 1))));
          AddrType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_18, (MR_Integer) 2))));
          {
            FieldLval_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_51, 0) = ((MR_Box) (MaybePtag_47));
            MR_hl_field(MR_mktag(0), FieldLval_51, 1) = ((MR_Box) (AddrRval_48));
            MR_hl_field(MR_mktag(0), FieldLval_51, 2) = ((MR_Box) (AddrType_49));
            MR_hl_field(MR_mktag(0), FieldLval_51, 3) = ((MR_Box) (FieldId_46));
            MR_hl_field(MR_mktag(0), FieldLval_51, 4) = ((MR_Box) ((MR_Unsigned) 20U));
          }
          {
            WordRval_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), WordRval_52, 0) = ((MR_Box) (FieldLval_51));
          }
          ml_backend__ml_unify_gen_deconstruct__record_packed_word_7_p_0(FilledBitfields_44, WordRval_52, Context_29, Defns_31, &WordVarStmts_53, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_55);
          *Stmts_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), WordVarStmts_53, Stmts0_43);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_31 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_32 = Stmts0_43;
          *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_58_58;
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__591__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_82, (MR_Integer) 0))))) {
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
                  MR_Word HeadFilledBitfields_142;
                  MR_Word HeadStmts_143;
                  MR_Integer NextArgNum_145;
                  MR_Word TailFilledBitfields_146;
                  MR_Word TailStmts_147;
                  MR_Word STATE_VARIABLE_Info_119_148;
                  MR_Word STATE_VARIABLE_AllPartialsRight_120_149;
                  MR_Integer Var_135;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, ArgMode_68, CurArgNum_6, HeadVar__8_8, &HeadFilledBitfields_142, &HeadStmts_143, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_119_148);
                  if ((HeadFilledBitfields_142 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AllPartialsRight_120_149 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_120_149 = STATE_VARIABLE_AllPartialsRight_0_10;
                  succeeded = (HeadVar__9_9 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
                    succeeded = (CurArgNum_6 == Var_135);
                  }
                  if (succeeded)
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  NextArgNum_145 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) 1);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(HeadVar__1_1, Var_156, ArgModes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_145, LeftOverArgNum_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_120_149, STATE_VARIABLE_AllPartialsRight_11, &TailFilledBitfields_146, &TailStmts_147, STATE_VARIABLE_Info_119_148, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), HeadFilledBitfields_142, TailFilledBitfields_146);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_143, TailStmts_147);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadFilledBitfields_89;
                  MR_Word HeadStmts_90;
                  MR_Integer NextArgNum_96;
                  MR_Word TailFilledBitfields_97;
                  MR_Word TailStmts_98;
                  MR_Word Var_115;
                  MR_Word STATE_VARIABLE_Info_119_119;
                  MR_Integer Var_132;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, ArgMode_68, CurArgNum_6, HeadVar__8_8, &HeadFilledBitfields_89, &HeadStmts_90, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_119_119);
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1_1));
                    MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (HeadFilledBitfields_89));
                    MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "HeadFilledBitfields != [] for apw_none_shifted");
                  succeeded = (HeadVar__9_9 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_132 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
                    succeeded = (CurArgNum_6 == Var_132);
                  }
                  if (succeeded)
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  NextArgNum_96 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) 1);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(HeadVar__1_1, Var_156, ArgModes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_96, LeftOverArgNum_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_0_10, STATE_VARIABLE_AllPartialsRight_11, &TailFilledBitfields_97, &TailStmts_98, STATE_VARIABLE_Info_119_119, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), HeadFilledBitfields_89, TailFilledBitfields_97);
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
              UnifyStmts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), UnifyStmts_25, 0) = ((MR_Box) (SetTestResultStmt_52));
              MR_hl_field(MR_mktag(1), UnifyStmts_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
                IfStmt_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), IfStmt_59, 0) = ((MR_Box) (SucceededRval_53));
                MR_hl_field(MR_mktag(2), IfStmt_59, 1) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(2), IfStmt_59, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), IfStmt_59, 3) = ((MR_Box) (Context_20));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (IfStmt_59));
                MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                UnifyStmts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
                IfStmt_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), IfStmt_73, 0) = ((MR_Box) (SucceededRval_53));
                MR_hl_field(MR_mktag(2), IfStmt_73, 1) = ((MR_Box) (DetDeconstructStmt_72));
                MR_hl_field(MR_mktag(2), IfStmt_73, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), IfStmt_73, 3) = ((MR_Box) (Context_20));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (IfStmt_73));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                UnifyStmts_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
            Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (LHSVarLval_26));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Var_34, 2) = ((MR_Box) (Var_36));
          }
          {
            Delete_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Delete_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Delete_27, 1) = ((MR_Box) (Var_34));
          }
          {
            CGCStmt_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CGCStmt_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), CGCStmt_28, 1) = ((MR_Box) (Delete_27));
            MR_hl_field(MR_mktag(3), CGCStmt_28, 2) = ((MR_Box) (Context_20));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__285__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_Info_0_86,
  MR_Word * STATE_VARIABLE_Info_87)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_18;

    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_86, ConsId_11, &ConsTag_18);
    switch (MR_tag((MR_Word) ConsTag_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_87 = STATE_VARIABLE_Info_0_86;
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
              ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_6_p_0(STATE_VARIABLE_Info_0_86, LHSVar_10, RHSVar_46, ArgMode_47, Context_14, Stmts_16);
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_87 = STATE_VARIABLE_Info_0_86;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_87 = STATE_VARIABLE_Info_0_86;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_87 = STATE_VARIABLE_Info_0_86;
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_generate_det_deconstruction\'/9", (MR_String) "unexpected tag");
              return;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word LHSVarType_58;
              MR_Word LHSVarLval_59;

              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_86, LHSVar_10, &LHSVarType_58);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_86, LHSVar_10, &LHSVarLval_59);
              switch (MR_tag((MR_Word) RemoteArgsTagInfo_49)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word FieldGen_144;
                    MR_Word RHSVarRepns_145;
                    MR_Word Var_141;

                    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_86, LHSVarLval_59, LHSVarType_58, ConsId_11, ConsTag_18, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), &FieldGen_144);
                    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_86, LHSVarType_58, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_12, &RHSVarRepns_145);
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_144, RHSVarRepns_145, ArgModes_13, (MR_Integer) 1, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_141, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_86, STATE_VARIABLE_Info_87);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word FieldGen_169;
                    MR_Word RHSVarRepns_170;
                    MR_Word Ptag_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_49, (MR_Integer) 0))));
                    MR_Word Var_166;

                    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_86, LHSVarLval_59, LHSVarType_58, ConsId_11, ConsTag_18, Ptag_174, &FieldGen_169);
                    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_86, LHSVarType_58, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_12, &RHSVarRepns_170);
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_169, RHSVarRepns_170, ArgModes_13, (MR_Integer) 1, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_166, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_86, STATE_VARIABLE_Info_87);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RemoteSectag_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_49, (MR_Integer) 1))));
                    MR_Unsigned SectagUint_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_53, (MR_Integer) 0))));
                    MR_Word SectagSize_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_53, (MR_Integer) 1))));
                    MR_Word FieldGen_159;
                    MR_Word Ptag_164 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_49, (MR_Integer) 0))));

                    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_86, LHSVarLval_59, LHSVarType_58, ConsId_11, ConsTag_18, Ptag_164, &FieldGen_159);
                    if ((SectagSize_55 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word RHSVarRepns_178;
                      MR_Word Var_150;

                      ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_86, LHSVarType_58, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) 1))), RHSVars_12, &RHSVarRepns_178);
                      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_159, RHSVarRepns_178, ArgModes_13, (MR_Integer) 1, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_150, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_86, STATE_VARIABLE_Info_87);
                    }
                    else
                    {
                      MR_Word SectagBits_56 = (MR_Word) (MR_body((MR_Word) (SectagSize_55), (MR_Integer) 1));
                      MR_Word TagFilledBitfield_62;
                      MR_Word TagwordRHSVarRepns_63;
                      MR_Word TagwordArgModes_64;
                      MR_Word NonTagwordRHSVarRepns_65;
                      MR_Word NonTagwordArgModes_66;
                      MR_Integer FirstNonTagwordArgNum_67;
                      MR_Word MaybePtag_68;
                      MR_Word AddrRval_69;
                      MR_Word AddrType_70;
                      MR_Word FieldVia_71;
                      MR_Word TagwordLval_73;
                      MR_Word CastTagwordRval_75;
                      MR_Word TagwordDefns_76;
                      MR_Word TagwordStmts_77;
                      MR_Word NonTagwordDefns_79;
                      MR_Word NonTagwordStmts_80;
                      MR_Word Var_100;
                      MR_Word Var_109;
                      MR_Word STATE_VARIABLE_Info_111_111;
                      MR_Word RHSVarRepns_160;
                      MR_Word Var_78;

                      ml_backend__ml_unify_gen_util__remote_sectag_filled_bitfield_3_p_0(SectagUint_54, SectagBits_56, &TagFilledBitfield_62);
                      ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_86, LHSVarType_58, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) -42))), RHSVars_12, &RHSVarRepns_160);
                      ml_backend__ml_unify_gen_deconstruct__ml_take_tagword_args_8_p_0(RHSVarRepns_160, ArgModes_13, &TagwordRHSVarRepns_63, &TagwordArgModes_64, &NonTagwordRHSVarRepns_65, &NonTagwordArgModes_66, (MR_Integer) 1, &FirstNonTagwordArgNum_67);
                      MaybePtag_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_159, (MR_Integer) 0))));
                      AddrRval_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_159, (MR_Integer) 1))));
                      AddrType_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_159, (MR_Integer) 2))));
                      FieldVia_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_159, (MR_Integer) 3))));
                      {
                        Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[3]));
                        MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_9_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (FieldVia_71));
                        MR_hl_field(MR_mktag(0), Var_100, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_generate_det_deconstruction\'/9", (MR_String) "not field_via_offset for tagword");
                      {
                        TagwordLval_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TagwordLval_73, 0) = ((MR_Box) (MaybePtag_68));
                        MR_hl_field(MR_mktag(0), TagwordLval_73, 1) = ((MR_Box) (AddrRval_69));
                        MR_hl_field(MR_mktag(0), TagwordLval_73, 2) = ((MR_Box) (AddrType_70));
                        MR_hl_field(MR_mktag(0), TagwordLval_73, 3) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[1]));
                        MR_hl_field(MR_mktag(0), TagwordLval_73, 4) = ((MR_Box) ((MR_Unsigned) 20U));
                      }
                      {
                        Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_109, 0) = ((MR_Box) (TagwordLval_73));
                      }
                      {
                        CastTagwordRval_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastTagwordRval_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(MR_mktag(3), CastTagwordRval_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7])));
                        MR_hl_field(MR_mktag(3), CastTagwordRval_75, 2) = ((MR_Box) (Var_109));
                      }
                      ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_11_p_0(TagwordLval_73, CastTagwordRval_75, (MR_Word) ((MR_Unsigned) 20U), TagFilledBitfield_62, TagwordRHSVarRepns_63, TagwordArgModes_64, Context_14, &TagwordDefns_76, &TagwordStmts_77, STATE_VARIABLE_Info_0_86, &STATE_VARIABLE_Info_111_111);
                      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_159, NonTagwordRHSVarRepns_65, NonTagwordArgModes_66, FirstNonTagwordArgNum_67, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_78, &NonTagwordDefns_79, &NonTagwordStmts_80, STATE_VARIABLE_Info_111_111, STATE_VARIABLE_Info_87);
                      *Defns_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), TagwordDefns_76, NonTagwordDefns_79);
                      *Stmts_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), TagwordStmts_77, NonTagwordStmts_80);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word FieldGen_60;
                    MR_Word RHSVarRepns_61;
                    MR_Word Var_81;

                    ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_86, LHSVarLval_59, LHSVarType_58, ConsId_11, ConsTag_18, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), &FieldGen_60);
                    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_86, LHSVarType_58, ConsId_11, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_12, &RHSVarRepns_61);
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_60, RHSVarRepns_61, ArgModes_13, (MR_Integer) 1, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_81, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_86, STATE_VARIABLE_Info_87);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word ModuleInfo_83;
              MR_Word ConsRepnDefn_84;
              MR_Word CtorArgRepns_85;
              MR_Word Var_88;
              MR_Word LHSVarLval_120;
              MR_Word RHSVarRepns_121;
              MR_Word TagFilledBitfield_122;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_86, LHSVar_10, &LHSVarLval_120);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_86, &ModuleInfo_83);
              check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_83, ConsId_11, &ConsRepnDefn_84);
              CtorArgRepns_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_84, (MR_Integer) 4))));
              mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), RHSVars_12, CtorArgRepns_85, &RHSVarRepns_121);
              ml_backend__ml_unify_gen_util__local_primsectag_filled_bitfield_3_p_0(STATE_VARIABLE_Info_0_86, LocalArgsTagInfo_82, &TagFilledBitfield_122);
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_88, 0) = ((MR_Box) (LHSVarLval_120));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_11_p_0(LHSVarLval_120, Var_88, (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7])), TagFilledBitfield_122, RHSVarRepns_121, ArgModes_13, Context_14, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_86, STATE_VARIABLE_Info_87);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Ptag_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word RHSVar_116;
              MR_Word ArgMode_117;
              MR_Box conv1_RHSVar_116;
              MR_Box conv0_ArgMode_117;

              hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_12, ArgModes_13, &conv1_RHSVar_116, &conv0_ArgMode_117);
              RHSVar_116 = ((MR_Word) (conv1_RHSVar_116));
              ArgMode_117 = ((MR_Word) (conv0_ArgMode_117));
              ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(STATE_VARIABLE_Info_0_86, Ptag_48, LHSVar_10, RHSVar_116, ArgMode_117, Context_14, Stmts_16);
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_87 = STATE_VARIABLE_Info_0_86;
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_take_tagword_args\'/8", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_take_tagword_args\'/8", (MR_String) "length mismatch");
        return;
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_45, (MR_Integer) 0))))) {
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
                MR_Integer STATE_VARIABLE_FirstNonTagwordArgNum_69_69 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstNonTagwordArgNum_0_7 + (MR_Unsigned) 1);

                ml_backend__ml_unify_gen_deconstruct__ml_take_tagword_args_8_p_0(Var_75, ArgModes_37, &TailTagwordRHSVarRepns_54, &TailTagwordArgModes_55, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_FirstNonTagwordArgNum_69_69, STATE_VARIABLE_FirstNonTagwordArgNum_8);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_76));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordRHSVarRepns_54));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    ArgPosWidth_19 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6]));
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
          MR_Word _FilledBitfields_21;

          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_17, LHSLval_16, LHSType_14, RHSVar_9, RHSLval_15, RHSType_13, ArgPosWidth_19, Context_11, &_FilledBitfields_21, Stmts_12);
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
    MR_bool succeeded;
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_direct_arg\'/7", (MR_String) "dummy unify");
          return;
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
            Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (RHSLval_17));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, RHSType_15, LHSType_16, (MR_Integer) 0, Var_31, &RHSRval_27);
          MLDS_Type_41 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, LHSType_16);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Ptag_9));
            MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (RHSRval_27));
          }
          {
            CastRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_42, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), CastRval_42, 1) = ((MR_Box) (MLDS_Type_41));
            MR_hl_field(MR_mktag(3), CastRval_42, 2) = ((MR_Box) (Var_32));
          }
          Stmt_43 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_18, CastRval_42, Context_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          MR_Word CastRval_24;
          MR_Word Stmt_26;
          MR_Word Var_35;

          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (LHSLval_18));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, LHSType_16, RHSType_15, (MR_Integer) 0, Var_35, &LHSRval_21);
          MLDS_Type_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, RHSType_15);
          PtagUint8_23 = (uint8_t) (Ptag_9);
          succeeded = (PtagUint8_23 == UINT8_C(0));
          if (succeeded)
            {
              CastRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), CastRval_24, 1) = ((MR_Box) (MLDS_Type_22));
              MR_hl_field(MR_mktag(3), CastRval_24, 2) = ((MR_Box) (LHSRval_21));
            }
          else
          {
            MR_Integer PtagInt_25;
            MR_Word Var_36;
            MR_Word Var_38;
            MR_Word Var_39;

            PtagInt_25 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_23);
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (PtagInt_25));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (LHSRval_21));
              MR_hl_field(MR_mktag(3), Var_36, 3) = ((MR_Box) (Var_38));
            }
            {
              CastRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CastRval_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), CastRval_24, 1) = ((MR_Box) (MLDS_Type_22));
              MR_hl_field(MR_mktag(3), CastRval_24, 2) = ((MR_Box) (Var_36));
            }
          }
          Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_17, CastRval_24, Context_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_deconstruct_tagword_args__340__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_11_p_0(
  MR_Word LHSTagwordLval_12,
  MR_Word CastTagwordRval_13,
  MR_Word TagwordType_14,
  MR_Word TagFilledBitfield_15,
  MR_Word RHSVarRepns_16,
  MR_Word ArgModes_17,
  MR_Word Context_18,
  MR_Word * Defns_19,
  MR_Word * Stmts_20,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word ToOrRvals_22;
    MR_Unsigned ToOrMask_23;
    MR_Word RevArgFilledBitfields_24;
    MR_Word AllPartialsRight_25;
    MR_Word RightStmts_26;

    ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_loop_14_p_0(STATE_VARIABLE_Info_0_38, CastTagwordRval_13, RHSVarRepns_16, ArgModes_17, Context_18, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_22, (MR_Unsigned) 0U, &ToOrMask_23, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_24, (MR_Integer) 1, &AllPartialsRight_25, &RightStmts_26);
    switch (AllPartialsRight_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ArgFilledBitfields_27;
          MR_Word FilledBitfields_28;
          MR_Word WordVarStmts_29;
          MR_Word Var_51;

          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[2]));
            MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ToOrRvals_22));
            MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_args\'/11", (MR_String) "all_partials_assign_right but ToOrRvals != []");
          mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevArgFilledBitfields_24, &ArgFilledBitfields_27);
          {
            FilledBitfields_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FilledBitfields_28, 0) = ((MR_Box) (TagFilledBitfield_15));
            MR_hl_field(MR_mktag(1), FilledBitfields_28, 1) = ((MR_Box) (ArgFilledBitfields_27));
          }
          ml_backend__ml_unify_gen_deconstruct__record_packed_word_7_p_0(FilledBitfields_28, CastTagwordRval_13, Context_18, Defns_19, &WordVarStmts_29, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          *Stmts_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), WordVarStmts_29, RightStmts_26);
        }
        break;
      case (MR_Integer) 0:
        {
          if ((ToOrRvals_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            *Stmts_20 = RightStmts_26;
          }
          else
          {
            MR_Word HeadToOrRval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_22, (MR_Integer) 0))));
            MR_Word TailToOrRvals_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_22, (MR_Integer) 1))));
            MR_Word ToOrRval_32;
            MR_Word ComplementMask_33;
            MR_Word MaskedOldTagwordRval_34;
            MR_Word NewTagwordRval_35;
            MR_Word CastNewTagwordRval_36;
            MR_Word LeftStmt_37;
            MR_Word Var_44;
            MR_Unsigned Var_45;
            MR_Word Var_50;

            *Defns_19 = (MR_Word) ((MR_Unsigned) 0U);
            ToOrRval_32 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadToOrRval_30, TailToOrRvals_31);
            Var_45 = ~(ToOrMask_23);
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
            }
            {
              ComplementMask_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ComplementMask_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), ComplementMask_33, 1) = ((MR_Box) (Var_44));
            }
            {
              MaskedOldTagwordRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), MaskedOldTagwordRval_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), MaskedOldTagwordRval_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[14])));
              MR_hl_field(MR_mktag(3), MaskedOldTagwordRval_34, 2) = ((MR_Box) (CastTagwordRval_13));
              MR_hl_field(MR_mktag(3), MaskedOldTagwordRval_34, 3) = ((MR_Box) (ComplementMask_33));
            }
            {
              NewTagwordRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), NewTagwordRval_35, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), NewTagwordRval_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[15])));
              MR_hl_field(MR_mktag(3), NewTagwordRval_35, 2) = ((MR_Box) (MaskedOldTagwordRval_34));
              MR_hl_field(MR_mktag(3), NewTagwordRval_35, 3) = ((MR_Box) (ToOrRval_32));
            }
            succeeded = ((((MR_tag((MR_Word) TagwordType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TagwordType_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), TagwordType_14, (MR_Integer) 1))) & (MR_Integer) 15);
              succeeded = (Var_50 == (MR_Integer) 1);
            }
            if (succeeded)
              CastNewTagwordRval_36 = NewTagwordRval_35;
            else
              {
                CastNewTagwordRval_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastNewTagwordRval_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), CastNewTagwordRval_36, 1) = ((MR_Box) (TagwordType_14));
                MR_hl_field(MR_mktag(3), CastNewTagwordRval_36, 2) = ((MR_Box) (NewTagwordRval_35));
              }
            LeftStmt_37 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSTagwordLval_12, CastNewTagwordRval_36, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftStmt_37));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RightStmts_26));
            }
          }
          *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_loop_14_p_0(
  MR_Word Info_1,
  MR_Word WordRval_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_ToOrRvals_0_6,
  MR_Word * STATE_VARIABLE_ToOrRvals_7,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_8,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_9,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_10,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_11,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_12,
  MR_Word * STATE_VARIABLE_AllPartialsRight_13,
  MR_Word * HeadVar__14_14)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_AllPartialsRight_13 = STATE_VARIABLE_AllPartialsRight_0_12;
      *STATE_VARIABLE_RevFilledBitfields_11 = STATE_VARIABLE_RevFilledBitfields_0_10;
      *STATE_VARIABLE_ToOrMask_9 = STATE_VARIABLE_ToOrMask_0_8;
      *STATE_VARIABLE_ToOrRvals_7 = STATE_VARIABLE_ToOrRvals_0_6;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_args_loop\'/14", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_args_loop\'/14", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ArgModes_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadStmts_82;
      MR_Word TailStmts_83;
      MR_Word STATE_VARIABLE_ToOrRvals_92_92;
      MR_Unsigned STATE_VARIABLE_ToOrMask_93_93;
      MR_Word STATE_VARIABLE_RevFilledBitfields_94_94;
      MR_Word STATE_VARIABLE_AllPartialsRight_95_95;

      ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_14_p_0(Info_1, WordRval_2, Var_102, ArgMode_74, Context_5, STATE_VARIABLE_ToOrRvals_0_6, &STATE_VARIABLE_ToOrRvals_92_92, STATE_VARIABLE_ToOrMask_0_8, &STATE_VARIABLE_ToOrMask_93_93, STATE_VARIABLE_RevFilledBitfields_0_10, &STATE_VARIABLE_RevFilledBitfields_94_94, STATE_VARIABLE_AllPartialsRight_0_12, &STATE_VARIABLE_AllPartialsRight_95_95, &HeadStmts_82);
      ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_loop_14_p_0(Info_1, WordRval_2, Var_101, ArgModes_75, Context_5, STATE_VARIABLE_ToOrRvals_92_92, STATE_VARIABLE_ToOrRvals_7, STATE_VARIABLE_ToOrMask_93_93, STATE_VARIABLE_ToOrMask_9, STATE_VARIABLE_RevFilledBitfields_94_94, STATE_VARIABLE_RevFilledBitfields_11, STATE_VARIABLE_AllPartialsRight_95_95, STATE_VARIABLE_AllPartialsRight_13, &TailStmts_83);
      *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_82, TailStmts_83);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_14_p_0(
  MR_Word Info_15,
  MR_Word WordRval_16,
  MR_Word HeadVar__3_3,
  MR_Word ArgMode_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_ToOrRvals_0_35,
  MR_Word * STATE_VARIABLE_ToOrRvals_36,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_37,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_38,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_39,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_40,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_41,
  MR_Word * STATE_VARIABLE_AllPartialsRight_42,
  MR_Word * Stmts_25)
{
  {
    MR_Word ArgVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word CtorArgRepn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgLval_26;
    MR_Word ArgType_27;
    MR_Word ModuleInfo_28;
    MR_Word HighLevelData_29;
    MR_Word ArgPosWidth_30;
    MR_Word FieldWidth_31;
    MR_Word FieldRawType_32;
    MR_Word FieldType_33;
    MR_Word Dir_34;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_15, ArgVar_17, &ArgLval_26);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_15, ArgVar_17, &ArgType_27);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_15, &ModuleInfo_28);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_15, &HighLevelData_29);
    ArgPosWidth_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_18, (MR_Integer) 2))));
    FieldWidth_31 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_30);
    FieldRawType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_18, (MR_Integer) 1))));
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_28, HighLevelData_29, FieldRawType_32, FieldWidth_31, &FieldType_33);
    ml_backend__ml_unify_gen_util__ml_compute_assign_direction_5_p_0(ModuleInfo_28, ArgMode_19, ArgType_27, FieldType_33, &Dir_34);
    switch (Dir_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_AllPartialsRight_42 = (MR_Integer) 0;
          *Stmts_25 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ToOrRvals_36 = STATE_VARIABLE_ToOrRvals_0_35;
          *STATE_VARIABLE_ToOrMask_38 = STATE_VARIABLE_ToOrMask_0_37;
          *STATE_VARIABLE_RevFilledBitfields_40 = STATE_VARIABLE_RevFilledBitfields_0_39;
        }
        break;
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) ArgPosWidth_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_left\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                return;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_left\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                return;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_left\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Shift_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 3))));
                    MR_Word Mask_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 5))));
                    MR_Word Fill_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 6))) & (MR_Integer) 7);
                    MR_Integer ShiftInt_69 = (MR_Integer) (Shift_65);
                    MR_Integer MaskInt_70 = (MR_Integer) (Mask_67);
                    MR_Word LeftShiftedArgRval_71;
                    MR_Word Var_87;
                    MR_Unsigned Var_90;
                    MR_Unsigned Var_91;

                    {
                      Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (ArgLval_26));
                    }
                    LeftShiftedArgRval_71 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(Var_87, Shift_65, Fill_68);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_ToOrRvals_36 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftShiftedArgRval_71));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_35));
                    }
                    Var_91 = mercury__uint__cast_from_int_1_f_0(MaskInt_70);
                    Var_90 = mercury__uint__f_60_60_2_f_0(Var_91, ShiftInt_69);
                    *STATE_VARIABLE_ToOrMask_38 = (Var_90 | STATE_VARIABLE_ToOrMask_0_37);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_ToOrRvals_36 = STATE_VARIABLE_ToOrRvals_0_35;
                    *STATE_VARIABLE_ToOrMask_38 = STATE_VARIABLE_ToOrMask_0_37;
                  }
                  break;
              }
              break;
          }
          *STATE_VARIABLE_AllPartialsRight_42 = (MR_Integer) 0;
          *Stmts_25 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_RevFilledBitfields_40 = STATE_VARIABLE_RevFilledBitfields_0_39;
        }
        break;
      case (MR_Integer) 1:
        {
          ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_assign_right_8_p_0(WordRval_16, ArgPosWidth_30, ArgVar_17, ArgLval_26, Context_20, STATE_VARIABLE_RevFilledBitfields_0_39, STATE_VARIABLE_RevFilledBitfields_40, Stmts_25);
          *STATE_VARIABLE_ToOrRvals_36 = STATE_VARIABLE_ToOrRvals_0_35;
          *STATE_VARIABLE_ToOrMask_38 = STATE_VARIABLE_ToOrMask_0_37;
          *STATE_VARIABLE_AllPartialsRight_42 = STATE_VARIABLE_AllPartialsRight_0_41;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_assign_right_8_p_0(
  MR_Word WordRval_9,
  MR_Word ArgPosWidth_10,
  MR_Word ArgVar_11,
  MR_Word ArgLval_12,
  MR_Word Context_13,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_40,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_41,
  MR_Word * Stmts_15)
{
  switch (MR_tag((MR_Word) ArgPosWidth_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_right\'/8", (MR_String) "ArgPosWidth does not belong in tagword");
        return;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_right\'/8", (MR_String) "ArgPosWidth does not belong in tagword");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_right\'/8", (MR_String) "ArgPosWidth does not belong in tagword");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 3))));
            MR_Word NumBits_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 4))));
            MR_Word Mask_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 5))));
            MR_Word Fill_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word Bitfield_22;
            MR_Word BitfieldValue_23;
            MR_Word FilledBitfield_24;
            MR_Word ToAssignRval_25;
            MR_Word Stmt_26;
            MR_Word UnsignedWordRval_51;
            MR_Integer MaskInt_52;
            MR_Word MaskedRval_53;
            MR_Word Var_58;

            {
              Bitfield_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Bitfield_22, 0) = ((MR_Box) (Shift_18));
              MR_hl_field(MR_mktag(0), Bitfield_22, 1) = ((MR_Box) (NumBits_19));
              MR_hl_field(MR_mktag(0), Bitfield_22, 2) = (MR_Box) ((MR_Unsigned) (Fill_21));
            }
            {
              BitfieldValue_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), BitfieldValue_23, 0) = ((MR_Box) (ArgVar_11));
            }
            {
              FilledBitfield_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FilledBitfield_24, 0) = ((MR_Box) (Bitfield_22));
              MR_hl_field(MR_mktag(0), FilledBitfield_24, 1) = ((MR_Box) (BitfieldValue_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevFilledBitfields_41 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FilledBitfield_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevFilledBitfields_0_40));
            }
            {
              UnsignedWordRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7])));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_51, 2) = ((MR_Box) (WordRval_9));
            }
            MaskInt_52 = (MR_Integer) (Mask_20);
            Var_58 = ml_backend__ml_unify_gen_util__ml_right_shift_rval_2_f_0(UnsignedWordRval_51, Shift_18);
            MaskedRval_53 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(Var_58, MaskInt_52);
            switch (Fill_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 7:
              case (MR_Integer) 0:
                ToAssignRval_25 = MaskedRval_53;
                break;
              case (MR_Integer) 2:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[8])));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_53));
                }
                break;
              case (MR_Integer) 3:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[9])));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_53));
                }
                break;
              case (MR_Integer) 1:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[10])));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_53));
                }
                break;
              case (MR_Integer) 5:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[11])));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_53));
                }
                break;
              case (MR_Integer) 6:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[12])));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_53));
                }
                break;
              case (MR_Integer) 4:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[13])));
                  MR_hl_field(MR_mktag(3), ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_53));
                }
                break;
            }
            Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_12, ToAssignRval_25, Context_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_15 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *Stmts_15 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_RevFilledBitfields_41 = STATE_VARIABLE_RevFilledBitfields_0_40;
          }
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__385__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
          Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TakeAddr_6));
          MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word ArgMode_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgModes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 0))));
        MR_Word CtorArgRepn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_112, (MR_Integer) 1))));
        MR_Integer NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) 1);
        MR_Word ArgPosWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_64, (MR_Integer) 2))));
        MR_Word CellOffset_102;
        MR_Word FieldVia_81;

        succeeded = ((((MR_tag((MR_Word) ArgPosWidth_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          CellOffset_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 2))));
          FieldVia_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
          succeeded = (FieldVia_81 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word LeftOverArgVarRepns_82;
          MR_Word LeftOverArgModes_83;
          MR_Integer LeftOverArgNum_84;
          MR_Word HeadDefns_85;
          MR_Word HeadStmts_86;
          MR_Word TailDefns_87;
          MR_Word TailStmts_88;
          MR_Word STATE_VARIABLE_Info_96_96;

          ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_51_93_95_48_17_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, ArgMode_54, Var_111, ArgModes_55, &LeftOverArgVarRepns_82, &LeftOverArgModes_83, CurArgNum_4, &LeftOverArgNum_84, CellOffset_102, Context_5, &HeadDefns_85, &HeadStmts_86, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_96_96);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_1, LeftOverArgVarRepns_82, LeftOverArgModes_83, LeftOverArgNum_84, Context_5, TakeAddr_6, HeadVar__7_7, &TailDefns_87, &TailStmts_88, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_11);
          *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_85, TailDefns_87);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_86, TailStmts_88);
        }
        else
        {
          MR_Word STATE_VARIABLE_Info_98_98;
          MR_Word HeadStmts_100;
          MR_Word TailStmts_101;
          MR_Word _FilledBitfields_89;

          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, ArgMode_54, CurArgNum_4, Context_5, &_FilledBitfields_89, &HeadStmts_100, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_98_98);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_1, Var_111, ArgModes_55, NextArgNum_65, Context_5, TakeAddr_6, HeadVar__7_7, HeadVar__8_8, &TailStmts_101, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_11);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_100, TailStmts_101);
        }
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_51_93_95_48_17_p_0(
  MR_Word FieldGen_18,
  MR_Word ArgVar_19,
  MR_Word CtorArgRepn_20,
  MR_Word ArgMode_21,
  MR_Word ArgVarRepns_22,
  MR_Word ArgModes_23,
  MR_Word * LeftOverArgVarRepns_24,
  MR_Word * LeftOverArgModes_25,
  MR_Integer CurArgNum_26,
  MR_Integer * LeftOverArgNum_27,
  MR_Word CellOffset_28,
  MR_Word Context_29,
  MR_Word * Defns_31,
  MR_Word * Stmts_32,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  {
    MR_Word FirstFilledBitfields_34;
    MR_Word HeadStmts_35;
    MR_Word AllPartialsRight0_36;
    MR_Integer NextArgNum_39;
    MR_Word AllPartialsRight_40;
    MR_Word LaterFilledBitfields_41;
    MR_Word TailStmts_42;
    MR_Word Stmts0_43;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Info_58_58;

    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_18, ArgVar_19, CtorArgRepn_20, ArgMode_21, CurArgNum_26, Context_29, &FirstFilledBitfields_34, &HeadStmts_35, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_56_56);
    if ((FirstFilledBitfields_34 == (MR_Word) ((MR_Unsigned) 0U)))
      AllPartialsRight0_36 = (MR_Integer) 0;
    else
      AllPartialsRight0_36 = (MR_Integer) 1;
    NextArgNum_39 = (MR_Integer) ((MR_Unsigned) CurArgNum_26 + (MR_Unsigned) 1);
    ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(FieldGen_18, ArgVarRepns_22, ArgModes_23, LeftOverArgVarRepns_24, LeftOverArgModes_25, NextArgNum_39, LeftOverArgNum_27, Context_29, AllPartialsRight0_36, &AllPartialsRight_40, &LaterFilledBitfields_41, &TailStmts_42, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
    Stmts0_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_35, TailStmts_42);
    switch (AllPartialsRight_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FilledBitfields_44;
          MR_Integer CellOffsetInt_45;
          MR_Word FieldId_46;
          MR_Word MaybePtag_47;
          MR_Word AddrRval_48;
          MR_Word AddrType_49;
          MR_Word FieldLval_51;
          MR_Word WordRval_52;
          MR_Word WordVarStmts_53;
          MR_Word Var_59;
          MR_Word Var_60;

          FilledBitfields_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), FirstFilledBitfields_34, LaterFilledBitfields_41);
          CellOffsetInt_45 = (MR_Integer) (CellOffset_28);
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (CellOffsetInt_45));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
          }
          {
            FieldId_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_46, 0) = ((MR_Box) (Var_59));
          }
          MaybePtag_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_18, (MR_Integer) 0))));
          AddrRval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_18, (MR_Integer) 1))));
          AddrType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_18, (MR_Integer) 2))));
          {
            FieldLval_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_51, 0) = ((MR_Box) (MaybePtag_47));
            MR_hl_field(MR_mktag(0), FieldLval_51, 1) = ((MR_Box) (AddrRval_48));
            MR_hl_field(MR_mktag(0), FieldLval_51, 2) = ((MR_Box) (AddrType_49));
            MR_hl_field(MR_mktag(0), FieldLval_51, 3) = ((MR_Box) (FieldId_46));
            MR_hl_field(MR_mktag(0), FieldLval_51, 4) = ((MR_Box) ((MR_Unsigned) 20U));
          }
          {
            WordRval_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), WordRval_52, 0) = ((MR_Box) (FieldLval_51));
          }
          ml_backend__ml_unify_gen_deconstruct__record_packed_word_7_p_0(FilledBitfields_44, WordRval_52, Context_29, Defns_31, &WordVarStmts_53, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_55);
          *Stmts_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), WordVarStmts_53, Stmts0_43);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_31 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_32 = Stmts0_43;
          *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_58_58;
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__591__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_82, (MR_Integer) 0))))) {
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
                  MR_Word HeadFilledBitfields_133;
                  MR_Word HeadStmts_134;
                  MR_Integer NextArgNum_135;
                  MR_Word TailFilledBitfields_136;
                  MR_Word TailStmts_137;
                  MR_Word STATE_VARIABLE_Info_119_138;
                  MR_Word STATE_VARIABLE_AllPartialsRight_120_139;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, ArgMode_68, CurArgNum_6, HeadVar__8_8, &HeadFilledBitfields_133, &HeadStmts_134, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_119_138);
                  if ((HeadFilledBitfields_133 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AllPartialsRight_120_139 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_120_139 = STATE_VARIABLE_AllPartialsRight_0_10;
                  NextArgNum_135 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) 1);
                  ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(HeadVar__1_1, Var_143, ArgModes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_135, LeftOverArgNum_7, HeadVar__8_8, STATE_VARIABLE_AllPartialsRight_120_139, STATE_VARIABLE_AllPartialsRight_11, &TailFilledBitfields_136, &TailStmts_137, STATE_VARIABLE_Info_119_138, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), HeadFilledBitfields_133, TailFilledBitfields_136);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_134, TailStmts_137);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadFilledBitfields_89;
                  MR_Word HeadStmts_90;
                  MR_Integer NextArgNum_96;
                  MR_Word TailFilledBitfields_97;
                  MR_Word TailStmts_98;
                  MR_Word Var_115;
                  MR_Word STATE_VARIABLE_Info_119_119;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, ArgMode_68, CurArgNum_6, HeadVar__8_8, &HeadFilledBitfields_89, &HeadStmts_90, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_119_119);
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (HeadFilledBitfields_89));
                    MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "HeadFilledBitfields != [] for apw_none_shifted");
                  NextArgNum_96 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) 1);
                  ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(HeadVar__1_1, Var_143, ArgModes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_96, LeftOverArgNum_7, HeadVar__8_8, STATE_VARIABLE_AllPartialsRight_0_10, STATE_VARIABLE_AllPartialsRight_11, &TailFilledBitfields_97, &TailStmts_98, STATE_VARIABLE_Info_119_119, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), HeadFilledBitfields_89, TailFilledBitfields_97);
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
ml_backend__ml_unify_gen_deconstruct__record_packed_word_7_p_0(
  MR_Word FilledBitfields_8,
  MR_Word WordRval_9,
  MR_Word Context_10,
  MR_Word * WordVarDefns_11,
  MR_Word * WordVarStmts_12,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    MR_bool succeeded;

    if ((FilledBitfields_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *WordVarDefns_11 = (MR_Word) ((MR_Unsigned) 0U);
      *WordVarStmts_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
    }
    else
    {
      MR_Word HeadFilledBitfields_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FilledBitfields_8, (MR_Integer) 0))));
      MR_Word TailFilledBitfields_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FilledBitfields_8, (MR_Integer) 1))));
      MR_Word WordCompVar_16;
      MR_Word WordVar_17;
      MR_Word WordVarType_18;
      MR_Word WordVarDefn_19;
      MR_Word WordVarLval_20;
      MR_Word CastWordRval_21;
      MR_Word WordAssignStmt_22;
      MR_Word PackedWord_23;
      MR_Word FilledPackedWord_24;
      MR_Word Instance_25;
      MR_Word PackedWordMap0_26;
      MR_Word PackedWordMap_31;
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word Var_40;
      MR_Word OldInstances_27;
      MR_Box conv0_OldInstances_27;

      ml_backend__ml_gen_info__ml_gen_info_new_packed_word_var_3_p_0(&WordCompVar_16, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_34_34);
      {
        WordVar_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), WordVar_17, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), WordVar_17, 1) = ((MR_Box) (WordCompVar_16));
      }
      WordVarType_18 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7]));
      {
        WordVarDefn_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), WordVarDefn_19, 0) = ((MR_Box) (WordVar_17));
        MR_hl_field(MR_mktag(0), WordVarDefn_19, 1) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), WordVarDefn_19, 2) = ((MR_Box) (WordVarType_18));
        MR_hl_field(MR_mktag(0), WordVarDefn_19, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), WordVarDefn_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *WordVarDefns_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordVarDefn_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        WordVarLval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), WordVarLval_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), WordVarLval_20, 1) = ((MR_Box) (WordVar_17));
        MR_hl_field(MR_mktag(3), WordVarLval_20, 2) = ((MR_Box) (WordVarType_18));
      }
      {
        CastWordRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CastWordRval_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), CastWordRval_21, 1) = ((MR_Box) (WordVarType_18));
        MR_hl_field(MR_mktag(3), CastWordRval_21, 2) = ((MR_Box) (WordRval_9));
      }
      WordAssignStmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_20, CastWordRval_21, Context_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *WordVarStmts_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordAssignStmt_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ml_backend__ml_gen_info__get_unfilled_filled_packed_words_4_p_0(HeadFilledBitfields_14, TailFilledBitfields_15, &PackedWord_23, &FilledPackedWord_24);
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (WordVarLval_20));
      }
      {
        Instance_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Instance_25, 0) = ((MR_Box) (FilledPackedWord_24));
        MR_hl_field(MR_mktag(0), Instance_25, 1) = ((MR_Box) (Var_40));
      }
      ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(STATE_VARIABLE_Info_34_34, &PackedWordMap0_26);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4]), PackedWordMap0_26, ((MR_Box) (PackedWord_23)), &conv0_OldInstances_27);
      if (succeeded)
      {
        OldInstances_27 = ((MR_Word) (conv0_OldInstances_27));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadOldInstance_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldInstances_27, (MR_Integer) 0))));
        MR_Word TailOldInstances_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldInstances_27, (MR_Integer) 1))));
        MR_Word NewInstances_30;
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (HeadOldInstance_28));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (TailOldInstances_29));
        }
        {
          NewInstances_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NewInstances_30, 0) = ((MR_Box) (Instance_25));
          MR_hl_field(MR_mktag(0), NewInstances_30, 1) = ((MR_Box) (Var_41));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4]), ((MR_Box) (PackedWord_23)), ((MR_Box) (NewInstances_30)), PackedWordMap0_26, &PackedWordMap_31);
      }
      else
      {
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Instance_25));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4]), ((MR_Box) (PackedWord_23)), ((MR_Box) (Var_42)), PackedWordMap0_26, &PackedWordMap_31);
      }
      ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(PackedWordMap_31, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_33);
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
  MR_Word * FilledBitfields_17,
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

            CellOffsetInt_40 = (MR_Integer) (CellOffset_26);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellOffset_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));

                CellOffsetInt_40 = (MR_Integer) (CellOffset_73);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellOffset_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));

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
        Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (CellOffsetInt_40));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
      }
      {
        FieldId_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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
        QualifiedFieldName_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QualifiedFieldName_46, 0) = ((MR_Box) (FieldQualifier_42));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_46, 2) = ((MR_Box) (FieldName_45));
      }
      {
        FieldId_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      FieldLval_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
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
          *FilledBitfields_17 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          *FilledBitfields_17 = (MR_Word) ((MR_Unsigned) 0U);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_47, HighLevelData_48, FieldLval_53, FieldType_51, ArgLval_54, ArgType_55, ArgPosWidth_24, Context_16, Stmts_18);
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_47, FieldLval_53, FieldType_51, ArgVar_12, ArgLval_54, ArgType_55, ArgPosWidth_24, Context_16, FilledBitfields_17, Stmts_18);
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
          MR_Word Var_61;
          MR_Word RHSRval_76;
          MR_Word Stmt_77;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (RHSLval_14));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, RHSType_15, LHSType_13, (MR_Integer) 0, Var_61, &RHSRval_76);
          Stmt_77 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, RHSRval_76, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_77));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RHSRval_22;
          MR_Word Var_64;
          MR_Word LHSLvalA_23;
          MR_Word LHSLvalB_24;

          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (RHSLval_14));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, RHSType_15, LHSType_13, (MR_Integer) 0, Var_64, &RHSRval_22);
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
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_71;
            MR_Word Var_73;

            {
              FloatWordA_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 2) = ((MR_Box) (RHSRval_22));
            }
            {
              FloatWordB_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 1) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 2) = ((MR_Box) (RHSRval_22));
            }
            Var_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_10, HighLevelData_11, Var_67, (MR_Integer) 2, &IntLHSType_27);
            Var_69 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, Var_69, IntLHSType_27, (MR_Integer) 0, FloatWordA_25, &RHSRvalA_28);
            Var_71 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, Var_71, IntLHSType_27, (MR_Integer) 0, FloatWordB_26, &RHSRvalB_29);
            StmtA_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLvalA_23, RHSRvalA_28, Context_17);
            StmtB_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLvalB_24, RHSRvalB_29, Context_17);
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (StmtB_31));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmtA_30));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_73));
            }
          }
          else
          {
            MR_Word Stmt_32;

            Stmt_32 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, RHSRval_22, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 0))))) {
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
              MR_Word Var_54;
              MR_Integer Var_55;
              MR_Integer Var_56;
              MR_Word Var_58;
              MR_Word RHSRval_78;
              MR_Word Stmt_79;

              {
                RHSRval_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), RHSRval_78, 0) = ((MR_Box) (RHSLval_14));
              }
              ShiftInt_44 = (MR_Integer) (Shift_37);
              MaskInt_45 = (MR_Integer) (Mask_39);
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (LHSLval_12));
              }
              {
                CastLHSRVal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastLHSRVal_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), CastLHSRVal_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7])));
                MR_hl_field(MR_mktag(3), CastLHSRVal_46, 2) = ((MR_Box) (Var_54));
              }
              Var_56 = mercury__int__f_60_60_2_f_0(MaskInt_45, ShiftInt_44);
              Var_55 = ~(Var_56);
              OldLHSBits_47 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(CastLHSRVal_46, Var_55);
              NewLHSBits_48 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(RHSRval_78, Shift_37, Fill_40);
              Var_58 = ml_backend__ml_unify_gen_util__ml_bitwise_or_two_rvals_2_f_0(OldLHSBits_47, NewLHSBits_48);
              {
                UpdatedLHSBits_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_49, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_49, 2) = ((MR_Box) (Var_58));
              }
              Stmt_79 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, UpdatedLHSBits_49, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_79));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 3))));
              MR_Word Mask_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 5))));
              MR_Word Fill_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_16, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_83;
              MR_Integer MaskInt_84;
              MR_Word CastLHSRVal_85;
              MR_Word OldLHSBits_86;
              MR_Word NewLHSBits_87;
              MR_Word UpdatedLHSBits_88;
              MR_Word Var_91;
              MR_Integer Var_92;
              MR_Integer Var_93;
              MR_Word Var_95;
              MR_Word RHSRval_97;
              MR_Word Stmt_98;

              {
                RHSRval_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), RHSRval_97, 0) = ((MR_Box) (RHSLval_14));
              }
              ShiftInt_83 = (MR_Integer) (Shift_80);
              MaskInt_84 = (MR_Integer) (Mask_81);
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_91, 0) = ((MR_Box) (LHSLval_12));
              }
              {
                CastLHSRVal_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastLHSRVal_85, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), CastLHSRVal_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7])));
                MR_hl_field(MR_mktag(3), CastLHSRVal_85, 2) = ((MR_Box) (Var_91));
              }
              Var_93 = mercury__int__f_60_60_2_f_0(MaskInt_84, ShiftInt_83);
              Var_92 = ~(Var_93);
              OldLHSBits_86 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(CastLHSRVal_85, Var_92);
              NewLHSBits_87 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(RHSRval_97, Shift_80, Fill_82);
              Var_95 = ml_backend__ml_unify_gen_util__ml_bitwise_or_two_rvals_2_f_0(OldLHSBits_86, NewLHSBits_87);
              {
                UpdatedLHSBits_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_88, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_88, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), UpdatedLHSBits_88, 2) = ((MR_Box) (Var_95));
              }
              Stmt_98 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, UpdatedLHSBits_88, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_98));
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
        succeeded = ((((MR_tag((MR_Word) FieldOffsetA_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldOffsetA_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
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
          MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Offset_13 + (MR_Unsigned) 1);

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_18, 0) = ((MR_Box) (Var_19));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
          }
          {
            FieldIdB_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldIdB_14, 0) = ((MR_Box) (Var_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalA_5 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldIdA_10));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 20U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            *FieldLvalB_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_7));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_8));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_9));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldIdB_14));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 20U));
          }
        }
        else
          mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
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
  MR_Word * FilledBitfields_19,
  MR_Word * Stmts_20)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ArgPosWidth_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *FilledBitfields_19 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_20 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_48;
          MR_Word LHSRval_56;
          MR_Word Stmt_57;

          *FilledBitfields_19 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (LHSLval_12));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, LHSType_13, RHSType_16, (MR_Integer) 0, Var_48, &LHSRval_56);
          Stmt_57 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, LHSRval_56, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_57));
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
          MR_Word Ptag_74;
          MR_Word PtrRval_75;
          MR_Word PtrType_76;
          MR_Word FieldIdA_77;
          MR_Word FieldOffsetA_79;
          MR_Integer Offset_80;
          MR_Word Var_83;

          *FilledBitfields_19 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = ((MR_tag((MR_Word) LHSLval_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Ptag_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSLval_12, (MR_Integer) 0))));
            PtrRval_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSLval_12, (MR_Integer) 1))));
            PtrType_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSLval_12, (MR_Integer) 2))));
            FieldIdA_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSLval_12, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) FieldIdA_77)) == (MR_Integer) 0);
            if (succeeded)
            {
              FieldOffsetA_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdA_77, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) FieldOffsetA_79)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldOffsetA_79, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldOffsetA_79, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_Integer) 2);
                if (succeeded)
                  Offset_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_83, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word FieldIdB_81;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Integer Var_86 = (MR_Integer) ((MR_Unsigned) Offset_80 + (MR_Unsigned) 1);

                {
                  Var_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_85, 0) = ((MR_Box) (Var_86));
                }
                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
                }
                {
                  FieldIdB_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FieldIdB_81, 0) = ((MR_Box) (Var_84));
                }
                {
                  LHSLvalA_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 0) = ((MR_Box) (Ptag_74));
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 1) = ((MR_Box) (PtrRval_75));
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 2) = ((MR_Box) (PtrType_76));
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 3) = ((MR_Box) (FieldIdA_77));
                  MR_hl_field(MR_mktag(0), LHSLvalA_24, 4) = ((MR_Box) ((MR_Unsigned) 20U));
                }
                {
                  LHSLvalB_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 0) = ((MR_Box) (Ptag_74));
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 1) = ((MR_Box) (PtrRval_75));
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 2) = ((MR_Box) (PtrType_76));
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 3) = ((MR_Box) (FieldIdB_81));
                  MR_hl_field(MR_mktag(0), LHSLvalB_25, 4) = ((MR_Box) ((MR_Unsigned) 20U));
                }
              }
              else
                {
                  mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
                  return;
                }
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Word Var_51;
            MR_Word Var_52;

            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (LHSLvalA_24));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (LHSLvalB_25));
            }
            {
              LHSRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), LHSRval_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), LHSRval_26, 1) = ((MR_Box) ((MR_Unsigned) 88U));
              MR_hl_field(MR_mktag(3), LHSRval_26, 2) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(3), LHSRval_26, 3) = ((MR_Box) (Var_52));
            }
          }
          else
          {
            MR_Word Var_54;

            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (LHSLval_12));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, LHSType_13, RHSType_16, (MR_Integer) 0, Var_54, &LHSRval_26);
          }
          Stmt_27 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, LHSRval_26, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Shift_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 3))));
              MR_Word NumBits_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 4))));
              MR_Word Mask_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 5))));
              MR_Word Fill_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word Bitfield_38;
              MR_Word ToAssignRval_39;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_45;
              MR_Word Stmt_58;

              {
                Bitfield_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Bitfield_38, 0) = ((MR_Box) (Shift_32));
                MR_hl_field(MR_mktag(0), Bitfield_38, 1) = ((MR_Box) (NumBits_33));
                MR_hl_field(MR_mktag(0), Bitfield_38, 2) = (MR_Box) ((MR_Unsigned) (Fill_35));
              }
              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (RHSVar_14));
              }
              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Bitfield_38));
                MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Var_43));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *FilledBitfields_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_45, 0) = ((MR_Box) (LHSLval_12));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(Var_45, Shift_32, Mask_34, Fill_35, &ToAssignRval_39);
              Stmt_58 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, ToAssignRval_39, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_58));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 3))));
              MR_Word NumBits_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 4))));
              MR_Word Mask_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 5))));
              MR_Word Fill_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_17, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word Bitfield_63;
              MR_Word ToAssignRval_64;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_68;
              MR_Word Stmt_70;

              {
                Bitfield_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Bitfield_63, 0) = ((MR_Box) (Shift_59));
                MR_hl_field(MR_mktag(0), Bitfield_63, 1) = ((MR_Box) (NumBits_60));
                MR_hl_field(MR_mktag(0), Bitfield_63, 2) = (MR_Box) ((MR_Unsigned) (Fill_62));
              }
              {
                Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (RHSVar_14));
              }
              {
                Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Bitfield_63));
                MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Var_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *FilledBitfields_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (LHSLval_12));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(Var_68, Shift_59, Mask_61, Fill_62, &ToAssignRval_64);
              Stmt_70 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, ToAssignRval_64, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_70));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *FilledBitfields_19 = (MR_Word) ((MR_Unsigned) 0U);
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
    MR_Word Var_18;

    {
      UnsignedWordRval_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7])));
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 2) = ((MR_Box) (WordRval_6));
    }
    MaskInt_12 = (MR_Integer) (Mask_8);
    Var_18 = ml_backend__ml_unify_gen_util__ml_right_shift_rval_2_f_0(UnsignedWordRval_11, Shift_7);
    MaskedRval_13 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(Var_18, MaskInt_12);
    switch (Fill_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 7:
      case (MR_Integer) 0:
        *Rval_10 = MaskedRval_13;
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[8])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[9])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[10])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[11])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[12])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[13])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaskedRval_13));
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
