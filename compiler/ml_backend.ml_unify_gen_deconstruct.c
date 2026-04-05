/*
** Automatically generated from `ml_unify_gen_deconstruct.m'
** by the Mercury compiler,
** version rotd-2026-04-05
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_unify_gen_test.mih"
#include "ml_backend.ml_unify_gen_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_ordinal_ordered_do_all_partials_assign_right_0[2];

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
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__608__2_2_p_0(
  MR_Word HeadFilledBitfields_94,
  MR_Word HeadVar__2_123);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__608__1_2_p_0(
  MR_Word HeadFilledBitfields_94,
  MR_Word HeadVar__2_123);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_deconstruct_tagword_args__354__1_2_p_0(
  MR_Word ToOrRvals_24,
  MR_Word HeadVar__2_49);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__295__1_2_p_0(
  MR_Word FieldVia_74,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__399__2_2_p_0(
  MR_Word TakeAddr_7,
  MR_Word HeadVar__2_24);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__399__1_2_p_0(
  MR_Word TakeAddr_7,
  MR_Word HeadVar__2_24);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_1_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_gen_dynamic_deconstruct_args__1_12_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_18_p_1(
  MR_Word NonLocals_19,
  MR_Word FieldGen_20,
  MR_Word ArgVar_21,
  MR_Word CtorArgRepn_22,
  MR_Word ArgMode_23,
  MR_Word ArgVarRepns_24,
  MR_Word ArgModes_25,
  MR_Word * LeftOverArgVarRepns_26,
  MR_Word * LeftOverArgModes_27,
  MR_Integer CurArgNum_28,
  MR_Integer * LeftOverArgNum_29,
  MR_Word CellOffset_30,
  MR_Word Context_31,
  MR_Word TakeAddr_32,
  MR_Word * Defns_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_16_p_1_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_16_p_1(
  MR_Word NonLocals_1,
  MR_Word FieldGen_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer CurArgNum_7,
  MR_Integer * LeftOverArgNum_8,
  MR_Word HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_11,
  MR_Word * STATE_VARIABLE_AllPartialsRight_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_10_p_0(
  MR_Word NonLocals_11,
  MR_Word LHSVar_12,
  MR_Word ConsId_13,
  MR_Word RHSVars_14,
  MR_Word ArgModes_15,
  MR_Word Context_16,
  MR_Word * Defns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_89,
  MR_Word * STATE_VARIABLE_Info_90);

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
ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_take_tagword_args__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_79,
  MR_Word * AddrOfHeadVar__4_80,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_FirstNonTagwordArgNum_0_7,
  MR_Integer * STATE_VARIABLE_FirstNonTagwordArgNum_8);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_7_p_0(
  MR_Word Info_8,
  MR_Word NonLocals_9,
  MR_Word LHSVar_10,
  MR_Word RHSVar_11,
  MR_Word ArgMode_12,
  MR_Word Context_13,
  MR_Word * Stmts_14);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_8_p_0(
  MR_Word Info_9,
  MR_Word NonLocals_10,
  MR_Word Ptag_11,
  MR_Word LHSVar_12,
  MR_Word RHSVar_13,
  MR_Word ArgMode_14,
  MR_Word Context_15,
  MR_Word * Stmts_16);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_12_p_0(
  MR_Word NonLocals_13,
  MR_Word LHSTagwordLval_14,
  MR_Word CastTagwordRval_15,
  MR_Word TagwordType_16,
  MR_Word TagFilledBitfield_17,
  MR_Word RHSVarRepns_18,
  MR_Word ArgModes_19,
  MR_Word Context_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_loop_15_p_0(
  MR_Word Info_1,
  MR_Word NonLocals_2,
  MR_Word WordRval_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_ToOrRvals_0_7,
  MR_Word * STATE_VARIABLE_ToOrRvals_8,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_9,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_10,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_11,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_12,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_13,
  MR_Word * STATE_VARIABLE_AllPartialsRight_14,
  MR_Word * HeadVar__15_15);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_15_p_0(
  MR_Word Info_16,
  MR_Word NonLocals_17,
  MR_Word WordRval_18,
  MR_Word HeadVar__4_4,
  MR_Word ArgMode_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ToOrRvals_0_38,
  MR_Word * STATE_VARIABLE_ToOrRvals_39,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_40,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_41,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_42,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_43,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_44,
  MR_Word * STATE_VARIABLE_AllPartialsRight_45,
  MR_Word * Stmts_27);

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
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0(
  MR_Word NonLocals_19,
  MR_Word FieldGen_20,
  MR_Word ArgVar_21,
  MR_Word CtorArgRepn_22,
  MR_Word ArgMode_23,
  MR_Word ArgVarRepns_24,
  MR_Word ArgModes_25,
  MR_Word * LeftOverArgVarRepns_26,
  MR_Word * LeftOverArgModes_27,
  MR_Integer CurArgNum_28,
  MR_Integer * LeftOverArgNum_29,
  MR_Word CellOffset_30,
  MR_Word Context_31,
  MR_Word * Defns_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_48_93_95_48_16_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_48_93_95_48_16_p_0(
  MR_Word NonLocals_1,
  MR_Word FieldGen_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer CurArgNum_7,
  MR_Integer * LeftOverArgNum_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_11,
  MR_Word * STATE_VARIABLE_AllPartialsRight_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

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
  MR_Word Info_11,
  MR_Word NonLocals_12,
  MR_Word FieldGen_13,
  MR_Word ArgVar_14,
  MR_Word CtorArgRepn_15,
  MR_Word ArgMode_16,
  MR_Integer ArgNum_17,
  MR_Word Context_18,
  MR_Word * FilledBitfields_19,
  MR_Word * Stmts_20);

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

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_2[2][1];

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_3[4][5];




static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_1[17][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_unify_gen_deconstruct_scalar_common_2[0])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  10 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_2[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[7]))) },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_3[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_via_0)),
    ((MR_Box) (&ml_backend__ml_unify_gen_util__ml_backend__ml_unify_gen_util__type_ctor_info_field_via_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0) }
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_0 = {
  (MR_String) "not_all_partials_assign_right",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_functor_desc_do_all_partials_assign_right_0_1 = {
  (MR_String) "all_partials_assign_right",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_ordinal_ordered_do_all_partials_assign_right_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_deconstruct",
  (MR_String) "do_all_partials_assign_right",
  { ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_name_ordered_do_all_partials_assign_right_0 },
  { ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__enum_ordinal_ordered_do_all_partials_assign_right_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_do_all_partials_assign_right_0,

};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_unify_gen_deconstruct__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_stag_ordered_take_addr_info_0_0[1] = { &ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_functor_desc_take_addr_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_ptag_ordered_take_addr_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_stag_ordered_take_addr_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_name_ordered_take_addr_info_0[1] = { &ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_functor_desc_take_addr_info_0_0 };

static const MR_Integer ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_take_addr_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__type_ctor_info_take_addr_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0_10001)),
  (MR_String) "ml_backend.ml_unify_gen_deconstruct",
  (MR_String) "take_addr_info",
  { ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_name_ordered_take_addr_info_0 },
  { ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__du_ptag_ordered_take_addr_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_unify_gen_deconstruct__ml_backend__ml_unify_gen_deconstruct__functor_number_map_take_addr_info_0,

};

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__608__2_2_p_0(
  MR_Word HeadFilledBitfields_94,
  MR_Word HeadVar__2_123)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[5]), ((MR_Box) (HeadFilledBitfields_94)), ((MR_Box) (HeadVar__2_123)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__608__1_2_p_0(
  MR_Word HeadFilledBitfields_94,
  MR_Word HeadVar__2_123)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[5]), ((MR_Box) (HeadFilledBitfields_94)), ((MR_Box) (HeadVar__2_123)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_deconstruct_tagword_args__354__1_2_p_0(
  MR_Word ToOrRvals_24,
  MR_Word HeadVar__2_49)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), ((MR_Box) (ToOrRvals_24)), ((MR_Box) (HeadVar__2_49)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__295__1_2_p_0(
  MR_Word FieldVia_74,
  MR_Word HeadVar__2_102)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unify_gen_util____Unify____field_via_0_0(FieldVia_74, HeadVar__2_102);
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__399__2_2_p_0(
  MR_Word TakeAddr_7,
  MR_Word HeadVar__2_24)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[0]), ((MR_Box) (TakeAddr_7)), ((MR_Box) (HeadVar__2_24)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__399__1_2_p_0(
  MR_Word TakeAddr_7,
  MR_Word HeadVar__2_24)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[0]), ((MR_Box) (TakeAddr_7)), ((MR_Box) (HeadVar__2_24)));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
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

MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
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

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_1_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__399__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_1(
  MR_Word NonLocals_1,
  MR_Word FieldGen_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word TakeAddr_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_21;

      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[1]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_1_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (TakeAddr_7));
        MR_hl_field(0, Var_21, 4) = ((MR_Box) (*HeadVar__8_8));
      }
      mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "TakeAddr != []");
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
        return;
      }
  else
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
      return;
    }
  else
  {
    MR_Word ArgMode_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word ArgModes_60 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word ArgVar_68;
    MR_Word CtorArgRepn_69;
    MR_Integer NextArgNum_70;
    MR_Word ArgPosWidth_71;
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word TailTakeAddr_72;
    MR_Integer Var_115;

    ArgVar_68 = ((MR_Word) ((MR_hl_field(0, Var_117, 0))));
    CtorArgRepn_69 = ((MR_Word) ((MR_hl_field(0, Var_117, 1))));
    NextArgNum_70 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) 1);
    ArgPosWidth_71 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_69, 3))));
    succeeded = (TakeAddr_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_115 = ((MR_Integer) ((MR_hl_field(1, TakeAddr_7, 0))));
      TailTakeAddr_72 = ((MR_Word) ((MR_hl_field(1, TakeAddr_7, 1))));
      succeeded = (CurArgNum_5 == Var_115);
    }
    if (succeeded)
    {
      MR_Word CellOffset_75;
      MR_Word TakeAddrInfo_76;
      MR_Word ModuleInfo_118;
      MR_Word HighLevelData_119;
      MR_Word FieldType_120;
      MR_Word ArgPosWidth_121;
      MR_Word FieldWidth_122;
      MR_Word BoxedFieldType_123;
      MR_Word MLDS_FieldType_124;
      MR_Word MLDS_BoxedFieldType_125;
      MR_Word CellOffsetPrime_74;
      MR_Word * AddrTakeAddrInfosTail_134;

      succeeded = ((MR_tag((MR_Word) ArgPosWidth_71)) == (MR_Integer) 1);
      if (succeeded)
      {
        CellOffsetPrime_74 = ((MR_Word) ((MR_hl_field(1, ArgPosWidth_71, 1))));
        CellOffset_75 = CellOffsetPrime_74;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "taking address of something other than a full word");
          return;
        }
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_11, &ModuleInfo_118);
      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_11, &HighLevelData_119);
      FieldType_120 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_69, 2))));
      ArgPosWidth_121 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_69, 3))));
      FieldWidth_122 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_121);
      ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_118, HighLevelData_119, FieldType_120, FieldWidth_122, &BoxedFieldType_123);
      ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_0_11, FieldType_120, &MLDS_FieldType_124);
      ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_0_11, BoxedFieldType_123, &MLDS_BoxedFieldType_125);
      {
        TakeAddrInfo_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TakeAddrInfo_76, 0) = ((MR_Box) (ArgVar_68));
        MR_hl_field(0, TakeAddrInfo_76, 1) = ((MR_Box) (CellOffset_75));
        MR_hl_field(0, TakeAddrInfo_76, 2) = ((MR_Box) (MLDS_FieldType_124));
        MR_hl_field(0, TakeAddrInfo_76, 3) = ((MR_Box) (MLDS_BoxedFieldType_125));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TakeAddrInfo_76));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrTakeAddrInfosTail_134 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__8_8, 1)));
      ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_gen_dynamic_deconstruct_args__1_12_p_1(NonLocals_1, FieldGen_2, Var_116, ArgModes_60, NextArgNum_70, Context_6, TailTakeAddr_72, AddrTakeAddrInfosTail_134, HeadVar__9_9, HeadVar__10_10, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
    }
    else
    {
      MR_Word CellOffset_106;
      MR_Word FieldVia_86;

      succeeded = ((((MR_tag((MR_Word) ArgPosWidth_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgPosWidth_71, 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        CellOffset_106 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_71, 2))));
        FieldVia_86 = ((MR_Word) ((MR_hl_field(0, FieldGen_2, 3))));
        succeeded = (FieldVia_86 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word LeftOverArgVarRepns_87;
        MR_Word LeftOverArgModes_88;
        MR_Integer LeftOverArgNum_89;
        MR_Word HeadDefns_90;
        MR_Word HeadStmts_91;
        MR_Word TailDefns_92;
        MR_Word TailStmts_93;
        MR_Word STATE_VARIABLE_Info_2_101;

        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_18_p_1(NonLocals_1, FieldGen_2, ArgVar_68, CtorArgRepn_69, ArgMode_59, Var_116, ArgModes_60, &LeftOverArgVarRepns_87, &LeftOverArgModes_88, CurArgNum_5, &LeftOverArgNum_89, CellOffset_106, Context_6, TakeAddr_7, &HeadDefns_90, &HeadStmts_91, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_2_101);
        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_1(NonLocals_1, FieldGen_2, LeftOverArgVarRepns_87, LeftOverArgModes_88, LeftOverArgNum_89, Context_6, TakeAddr_7, HeadVar__8_8, &TailDefns_92, &TailStmts_93, STATE_VARIABLE_Info_2_101, STATE_VARIABLE_Info_12);
        *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_90, TailDefns_92);
        *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_91, TailStmts_93);
      }
      else
      {
        MR_Word HeadStmts_104;
        MR_Word TailStmts_105;
        MR_Word _FilledBitfields_94;

        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_11, NonLocals_1, FieldGen_2, ArgVar_68, CtorArgRepn_69, ArgMode_59, CurArgNum_5, Context_6, &_FilledBitfields_94, &HeadStmts_104);
        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_1(NonLocals_1, FieldGen_2, Var_116, ArgModes_60, NextArgNum_70, Context_6, TakeAddr_7, HeadVar__8_8, HeadVar__9_9, &TailStmts_105, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
        *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_104, TailStmts_105);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_gen_dynamic_deconstruct_args__1_12_p_1_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__399__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_gen_dynamic_deconstruct_args__1_12_p_1(
  MR_Word NonLocals_1,
  MR_Word FieldGen_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word TakeAddr_7,
  MR_Word * AddrOfHeadVar__8_135,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_21;

        *AddrOfHeadVar__8_135 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[1]));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_gen_dynamic_deconstruct_args__1_12_p_1_1));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_21, 3) = ((MR_Box) (TakeAddr_7));
          MR_hl_field(0, Var_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "TakeAddr != []");
        *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
          return;
        }
    else
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ArgModes_60 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word ArgVar_68;
      MR_Word CtorArgRepn_69;
      MR_Integer NextArgNum_70;
      MR_Word ArgPosWidth_71;
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TailTakeAddr_72;
      MR_Integer Var_115;

      ArgVar_68 = ((MR_Word) ((MR_hl_field(0, Var_117, 0))));
      CtorArgRepn_69 = ((MR_Word) ((MR_hl_field(0, Var_117, 1))));
      NextArgNum_70 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) 1);
      ArgPosWidth_71 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_69, 3))));
      succeeded = (TakeAddr_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_115 = ((MR_Integer) ((MR_hl_field(1, TakeAddr_7, 0))));
        TailTakeAddr_72 = ((MR_Word) ((MR_hl_field(1, TakeAddr_7, 1))));
        succeeded = (CurArgNum_5 == Var_115);
      }
      if (succeeded)
      {
        MR_Word CellOffset_75;
        MR_Word TakeAddrInfo_76;
        MR_Word ModuleInfo_118;
        MR_Word HighLevelData_119;
        MR_Word FieldType_120;
        MR_Word ArgPosWidth_121;
        MR_Word FieldWidth_122;
        MR_Word BoxedFieldType_123;
        MR_Word MLDS_FieldType_124;
        MR_Word MLDS_BoxedFieldType_125;
        MR_Word CellOffsetPrime_74;
        MR_Word * AddrTakeAddrInfosTail_134;
        MR_Word HeadVar__8_136;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Integer next_value_of_CurArgNum_5;
        MR_Word next_value_of_TakeAddr_7;
        MR_Word * next_value_of_AddrOfHeadVar__8_135;

        succeeded = ((MR_tag((MR_Word) ArgPosWidth_71)) == (MR_Integer) 1);
        if (succeeded)
        {
          CellOffsetPrime_74 = ((MR_Word) ((MR_hl_field(1, ArgPosWidth_71, 1))));
          CellOffset_75 = CellOffsetPrime_74;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "taking address of something other than a full word");
            return;
          }
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_11, &ModuleInfo_118);
        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_11, &HighLevelData_119);
        FieldType_120 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_69, 2))));
        ArgPosWidth_121 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_69, 3))));
        FieldWidth_122 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_121);
        ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_118, HighLevelData_119, FieldType_120, FieldWidth_122, &BoxedFieldType_123);
        ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_0_11, FieldType_120, &MLDS_FieldType_124);
        ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_0_11, BoxedFieldType_123, &MLDS_BoxedFieldType_125);
        {
          TakeAddrInfo_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TakeAddrInfo_76, 0) = ((MR_Box) (ArgVar_68));
          MR_hl_field(0, TakeAddrInfo_76, 1) = ((MR_Box) (CellOffset_75));
          MR_hl_field(0, TakeAddrInfo_76, 2) = ((MR_Box) (MLDS_FieldType_124));
          MR_hl_field(0, TakeAddrInfo_76, 3) = ((MR_Box) (MLDS_BoxedFieldType_125));
        }
        {
          HeadVar__8_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__8_136, 0) = ((MR_Box) (TakeAddrInfo_76));
          MR_hl_field(1, HeadVar__8_136, 1) = NULL;
        }
        AddrTakeAddrInfosTail_134 = (MR_Word *) (&(MR_hl_field(1, HeadVar__8_136, 1)));
        *AddrOfHeadVar__8_135 = HeadVar__8_136;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_116;
        next_value_of_HeadVar__4_4 = ArgModes_60;
        next_value_of_CurArgNum_5 = NextArgNum_70;
        next_value_of_TakeAddr_7 = TailTakeAddr_72;
        next_value_of_AddrOfHeadVar__8_135 = AddrTakeAddrInfosTail_134;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        CurArgNum_5 = next_value_of_CurArgNum_5;
        TakeAddr_7 = next_value_of_TakeAddr_7;
        AddrOfHeadVar__8_135 = next_value_of_AddrOfHeadVar__8_135;
        continue;
      }
      else
      {
        MR_Word CellOffset_106;
        MR_Word FieldVia_86;

        succeeded = ((((MR_tag((MR_Word) ArgPosWidth_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgPosWidth_71, 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          CellOffset_106 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_71, 2))));
          FieldVia_86 = ((MR_Word) ((MR_hl_field(0, FieldGen_2, 3))));
          succeeded = (FieldVia_86 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word LeftOverArgVarRepns_87;
          MR_Word LeftOverArgModes_88;
          MR_Integer LeftOverArgNum_89;
          MR_Word HeadDefns_90;
          MR_Word HeadStmts_91;
          MR_Word TailDefns_92;
          MR_Word TailStmts_93;
          MR_Word STATE_VARIABLE_Info_2_101;

          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_18_p_1(NonLocals_1, FieldGen_2, ArgVar_68, CtorArgRepn_69, ArgMode_59, Var_116, ArgModes_60, &LeftOverArgVarRepns_87, &LeftOverArgModes_88, CurArgNum_5, &LeftOverArgNum_89, CellOffset_106, Context_6, TakeAddr_7, &HeadDefns_90, &HeadStmts_91, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_2_101);
          ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_gen_dynamic_deconstruct_args__1_12_p_1(NonLocals_1, FieldGen_2, LeftOverArgVarRepns_87, LeftOverArgModes_88, LeftOverArgNum_89, Context_6, TakeAddr_7, AddrOfHeadVar__8_135, &TailDefns_92, &TailStmts_93, STATE_VARIABLE_Info_2_101, STATE_VARIABLE_Info_12);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_90, TailDefns_92);
          *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_91, TailStmts_93);
        }
        else
        {
          MR_Word HeadStmts_104;
          MR_Word TailStmts_105;
          MR_Word _FilledBitfields_94;

          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_11, NonLocals_1, FieldGen_2, ArgVar_68, CtorArgRepn_69, ArgMode_59, CurArgNum_5, Context_6, &_FilledBitfields_94, &HeadStmts_104);
          ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_gen_dynamic_deconstruct_args__1_12_p_1(NonLocals_1, FieldGen_2, Var_116, ArgModes_60, NextArgNum_70, Context_6, TakeAddr_7, AddrOfHeadVar__8_135, HeadVar__9_9, &TailStmts_105, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
          *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_104, TailStmts_105);
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_18_p_1(
  MR_Word NonLocals_19,
  MR_Word FieldGen_20,
  MR_Word ArgVar_21,
  MR_Word CtorArgRepn_22,
  MR_Word ArgMode_23,
  MR_Word ArgVarRepns_24,
  MR_Word ArgModes_25,
  MR_Word * LeftOverArgVarRepns_26,
  MR_Word * LeftOverArgModes_27,
  MR_Integer CurArgNum_28,
  MR_Integer * LeftOverArgNum_29,
  MR_Word CellOffset_30,
  MR_Word Context_31,
  MR_Word TakeAddr_32,
  MR_Word * Defns_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57)
{
  MR_Word FirstFilledBitfields_36;
  MR_Word HeadStmts_37;
  MR_Word AllPartialsRight0_38;
  MR_Integer NextArgNum_41;
  MR_Word AllPartialsRight_42;
  MR_Word LaterFilledBitfields_43;
  MR_Word TailStmts_44;
  MR_Word Stmts0_45;
  MR_Word STATE_VARIABLE_Info_1_59;

  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_56, NonLocals_19, FieldGen_20, ArgVar_21, CtorArgRepn_22, ArgMode_23, CurArgNum_28, Context_31, &FirstFilledBitfields_36, &HeadStmts_37);
  if ((FirstFilledBitfields_36 == (MR_Word) ((MR_Unsigned) 0U)))
    AllPartialsRight0_38 = (MR_Integer) 0;
  else
    AllPartialsRight0_38 = (MR_Integer) 1;
  NextArgNum_41 = (MR_Integer) ((MR_Unsigned) CurArgNum_28 + (MR_Unsigned) 1);
  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_16_p_1(NonLocals_19, FieldGen_20, ArgVarRepns_24, ArgModes_25, LeftOverArgVarRepns_26, LeftOverArgModes_27, NextArgNum_41, LeftOverArgNum_29, Context_31, TakeAddr_32, AllPartialsRight0_38, &AllPartialsRight_42, &LaterFilledBitfields_43, &TailStmts_44, STATE_VARIABLE_Info_0_56, &STATE_VARIABLE_Info_1_59);
  Stmts0_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_37, TailStmts_44);
  switch (AllPartialsRight_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FilledBitfields_46;
        MR_Integer CellOffsetInt_47;
        MR_Word FieldId_48;
        MR_Word MaybePtag_49;
        MR_Word AddrRval_50;
        MR_Word AddrType_51;
        MR_Word FieldLval_53;
        MR_Word WordRval_54;
        MR_Word WordVarStmts_55;
        MR_Word Var_60;
        MR_Word Var_61;

        FilledBitfields_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), FirstFilledBitfields_36, LaterFilledBitfields_43);
        CellOffsetInt_47 = (MR_Integer) (CellOffset_30);
        {
          Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_61, 0) = ((MR_Box) (CellOffsetInt_47));
        }
        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
        }
        {
          FieldId_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FieldId_48, 0) = ((MR_Box) (Var_60));
        }
        MaybePtag_49 = ((MR_Word) ((MR_hl_field(0, FieldGen_20, 0))));
        AddrRval_50 = ((MR_Word) ((MR_hl_field(0, FieldGen_20, 1))));
        AddrType_51 = ((MR_Word) ((MR_hl_field(0, FieldGen_20, 2))));
        {
          FieldLval_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FieldLval_53, 0) = ((MR_Box) (MaybePtag_49));
          MR_hl_field(0, FieldLval_53, 1) = ((MR_Box) (AddrRval_50));
          MR_hl_field(0, FieldLval_53, 2) = ((MR_Box) (AddrType_51));
          MR_hl_field(0, FieldLval_53, 3) = ((MR_Box) (FieldId_48));
          MR_hl_field(0, FieldLval_53, 4) = ((MR_Box) ((MR_Unsigned) 20U));
        }
        {
          WordRval_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, WordRval_54, 0) = ((MR_Box) (FieldLval_53));
        }
        ml_backend__ml_unify_gen_deconstruct__record_packed_word_7_p_0(FilledBitfields_46, WordRval_54, Context_31, Defns_33, &WordVarStmts_55, STATE_VARIABLE_Info_1_59, STATE_VARIABLE_Info_57);
        *Stmts_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), WordVarStmts_55, Stmts0_45);
      }
      break;
    case (MR_Integer) 0:
      {
        *Defns_33 = (MR_Word) ((MR_Unsigned) 0U);
        *Stmts_34 = Stmts0_45;
        *STATE_VARIABLE_Info_57 = STATE_VARIABLE_Info_1_59;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_16_p_1_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__608__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_16_p_1(
  MR_Word NonLocals_1,
  MR_Word FieldGen_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer CurArgNum_7,
  MR_Integer * LeftOverArgNum_8,
  MR_Word HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_11,
  MR_Word * STATE_VARIABLE_AllPartialsRight_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
      *LeftOverArgNum_8 = CurArgNum_7;
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
      *STATE_VARIABLE_AllPartialsRight_12 = STATE_VARIABLE_AllPartialsRight_0_11;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/16", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_135 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_136 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/16", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ArgModes_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word ArgVar_85 = ((MR_Word) ((MR_hl_field(0, Var_136, 0))));
      MR_Word CtorArgRepn_86 = ((MR_Word) ((MR_hl_field(0, Var_136, 1))));
      MR_Word ArgPosWidth_87 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_86, 3))));

      switch (MR_tag((MR_Word) ArgPosWidth_87)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__5_5 = HeadVar__3_3;
            *HeadVar__6_6 = HeadVar__4_4;
            *LeftOverArgNum_8 = CurArgNum_7;
            *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_AllPartialsRight_12 = STATE_VARIABLE_AllPartialsRight_0_11;
            *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_87, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__5_5 = HeadVar__3_3;
                *HeadVar__6_6 = HeadVar__4_4;
                *LeftOverArgNum_8 = CurArgNum_7;
                *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_AllPartialsRight_12 = STATE_VARIABLE_AllPartialsRight_0_11;
                *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HeadFilledBitfields_146;
                MR_Word HeadStmts_147;
                MR_Integer NextArgNum_149;
                MR_Word TailFilledBitfields_150;
                MR_Word TailStmts_151;
                MR_Word STATE_VARIABLE_AllPartialsRight_1_152;
                MR_Integer Var_139;

                ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_15, NonLocals_1, FieldGen_2, ArgVar_85, CtorArgRepn_86, ArgMode_73, CurArgNum_7, HeadVar__9_9, &HeadFilledBitfields_146, &HeadStmts_147);
                if ((HeadFilledBitfields_146 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_AllPartialsRight_1_152 = (MR_Integer) 0;
                else
                  STATE_VARIABLE_AllPartialsRight_1_152 = STATE_VARIABLE_AllPartialsRight_0_11;
                succeeded = (HeadVar__10_10 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_139 = ((MR_Integer) ((MR_hl_field(1, HeadVar__10_10, 0))));
                  succeeded = (CurArgNum_7 == Var_139);
                }
                if (succeeded)
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/16", (MR_String) "taking address of something other than a full word");
                    return;
                  }
                NextArgNum_149 = (MR_Integer) ((MR_Unsigned) CurArgNum_7 + (MR_Unsigned) 1);
                ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_16_p_1(NonLocals_1, FieldGen_2, Var_135, ArgModes_74, HeadVar__5_5, HeadVar__6_6, NextArgNum_149, LeftOverArgNum_8, HeadVar__9_9, HeadVar__10_10, STATE_VARIABLE_AllPartialsRight_1_152, STATE_VARIABLE_AllPartialsRight_12, &TailFilledBitfields_150, &TailStmts_151, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
                *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), HeadFilledBitfields_146, TailFilledBitfields_150);
                *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_147, TailStmts_151);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word HeadFilledBitfields_94;
                MR_Word HeadStmts_95;
                MR_Integer NextArgNum_101;
                MR_Word TailFilledBitfields_102;
                MR_Word TailStmts_103;
                MR_Word Var_120;
                MR_Integer Var_134;

                ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_15, NonLocals_1, FieldGen_2, ArgVar_85, CtorArgRepn_86, ArgMode_73, CurArgNum_7, HeadVar__9_9, &HeadFilledBitfields_94, &HeadStmts_95);
                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_120, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[0]));
                  MR_hl_field(0, Var_120, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_16_p_1_1));
                  MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_120, 3) = ((MR_Box) (HeadFilledBitfields_94));
                  MR_hl_field(0, Var_120, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_120, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/16", (MR_String) "HeadFilledBitfields != [] for apw_none_shifted");
                succeeded = (HeadVar__10_10 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_134 = ((MR_Integer) ((MR_hl_field(1, HeadVar__10_10, 0))));
                  succeeded = (CurArgNum_7 == Var_134);
                }
                if (succeeded)
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/16", (MR_String) "taking address of something other than a full word");
                    return;
                  }
                NextArgNum_101 = (MR_Integer) ((MR_Unsigned) CurArgNum_7 + (MR_Unsigned) 1);
                ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_16_p_1(NonLocals_1, FieldGen_2, Var_135, ArgModes_74, HeadVar__5_5, HeadVar__6_6, NextArgNum_101, LeftOverArgNum_8, HeadVar__9_9, HeadVar__10_10, STATE_VARIABLE_AllPartialsRight_0_11, STATE_VARIABLE_AllPartialsRight_12, &TailFilledBitfields_102, &TailStmts_103, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
                *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), HeadFilledBitfields_94, TailFilledBitfields_102);
                *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_95, TailStmts_103);
              }
              break;
          }
          break;
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_deconstruction_unification_13_p_0(
  MR_Word NonLocals_14,
  MR_Word LHSVar_15,
  MR_Word ConsId_16,
  MR_Word RHSVars_17,
  MR_Word ArgModes_18,
  MR_Word CanFail_19,
  MR_Word CanCGC_20,
  MR_Word CodeModel_21,
  MR_Word Context_22,
  MR_Word * Defns_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_Word ExpectedCodeModel_26;
  MR_Word UnifyStmts_27;
  MR_Word Stmts0_33;
  MR_Word STATE_VARIABLE_Info_1_36;

  switch (CanFail_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TestRval_44;
        MR_Word SetTestResultStmt_45;
        MR_Word SucceededRval_46;
        MR_Word DetDeconstructStmts_47;
        MR_Word STATE_VARIABLE_Info_1_53;
        MR_Word STATE_VARIABLE_Info_2_54;

        ExpectedCodeModel_26 = (MR_Integer) 1;
        ml_backend__ml_unify_gen_test__ml_generate_test_var_has_cons_id_4_p_0(STATE_VARIABLE_Info_0_34, LHSVar_15, ConsId_16, &TestRval_44);
        ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TestRval_44, Context_22, &SetTestResultStmt_45, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_53);
        ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&SucceededRval_46, STATE_VARIABLE_Info_1_53, &STATE_VARIABLE_Info_2_54);
        ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_10_p_0(NonLocals_14, LHSVar_15, ConsId_16, RHSVars_17, ArgModes_18, Context_22, Defns_23, &DetDeconstructStmts_47, STATE_VARIABLE_Info_2_54, &STATE_VARIABLE_Info_1_36);
        if ((DetDeconstructStmts_47 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            UnifyStmts_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, UnifyStmts_27, 0) = ((MR_Box) (SetTestResultStmt_45));
            MR_hl_field(1, UnifyStmts_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        else
        {
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, DetDeconstructStmts_47, 1))));
          MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, DetDeconstructStmts_47, 0))));

          if ((Var_68 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word IfStmt_52;
            MR_Word Var_61;

            {
              IfStmt_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, IfStmt_52, 0) = ((MR_Box) (SucceededRval_46));
              MR_hl_field(2, IfStmt_52, 1) = ((MR_Box) (Var_69));
              MR_hl_field(2, IfStmt_52, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, IfStmt_52, 3) = ((MR_Box) (Context_22));
            }
            {
              Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_61, 0) = ((MR_Box) (IfStmt_52));
              MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              UnifyStmts_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnifyStmts_27, 0) = ((MR_Box) (SetTestResultStmt_45));
              MR_hl_field(1, UnifyStmts_27, 1) = ((MR_Box) (Var_61));
            }
          }
          else
          {
            MR_Word DetDeconstructStmt_63;
            MR_Word IfStmt_64;
            MR_Word Var_66;

            DetDeconstructStmt_63 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), DetDeconstructStmts_47, Context_22);
            {
              IfStmt_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, IfStmt_64, 0) = ((MR_Box) (SucceededRval_46));
              MR_hl_field(2, IfStmt_64, 1) = ((MR_Box) (DetDeconstructStmt_63));
              MR_hl_field(2, IfStmt_64, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, IfStmt_64, 3) = ((MR_Box) (Context_22));
            }
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = ((MR_Box) (IfStmt_64));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              UnifyStmts_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnifyStmts_27, 0) = ((MR_Box) (SetTestResultStmt_45));
              MR_hl_field(1, UnifyStmts_27, 1) = ((MR_Box) (Var_66));
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        ExpectedCodeModel_26 = (MR_Integer) 0;
        ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_10_p_0(NonLocals_14, LHSVar_15, ConsId_16, RHSVars_17, ArgModes_18, Context_22, Defns_23, &UnifyStmts_27, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_36);
      }
      break;
  }
  switch (CanCGC_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word VarTable_28;
        MR_Word LHSVarEntry_29;
        MR_Word LHSVarLval_30;
        MR_Word Delete_31;
        MR_Word CGCStmt_32;
        MR_Word Var_38;
        MR_Word Var_40;
        MR_Word Var_41;

        ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_1_36, &VarTable_28);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_28, LHSVar_15, &LHSVarEntry_29);
        ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_1_36, LHSVar_15, LHSVarEntry_29, &LHSVarLval_30);
        {
          Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_40, 0) = ((MR_Box) (LHSVarLval_30));
        }
        {
          Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Var_38, 2) = ((MR_Box) (Var_40));
        }
        {
          Delete_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Delete_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Delete_31, 1) = ((MR_Box) (Var_38));
        }
        {
          CGCStmt_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CGCStmt_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, CGCStmt_32, 1) = ((MR_Box) (Delete_31));
          MR_hl_field(3, CGCStmt_32, 2) = ((MR_Box) (Context_22));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (CGCStmt_32));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Stmts0_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), UnifyStmts_27, Var_41);
      }
      break;
    case (MR_Integer) 1:
      Stmts0_33 = UnifyStmts_27;
      break;
  }
  ml_backend__ml_code_gen__ml_gen_maybe_convert_goal_code_model_7_p_0(CodeModel_21, ExpectedCodeModel_26, Context_22, Stmts0_33, Stmts_24, STATE_VARIABLE_Info_1_36, STATE_VARIABLE_Info_35);
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_generate_det_deconstruction__295__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_10_p_0(
  MR_Word NonLocals_11,
  MR_Word LHSVar_12,
  MR_Word ConsId_13,
  MR_Word RHSVars_14,
  MR_Word ArgModes_15,
  MR_Word Context_16,
  MR_Word * Defns_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_89,
  MR_Word * STATE_VARIABLE_Info_90)
{
  MR_bool succeeded;
  MR_Word ConsTag_20;

  ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_89, ConsId_13, &ConsTag_20);
  switch (MR_tag((MR_Word) ConsTag_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
            *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_0_89;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHSVar_47;
            MR_Word ArgMode_48;
            MR_Box conv3_RHSVar_47;
            MR_Box conv2_ArgMode_48;

            hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_14, ArgModes_15, &conv3_RHSVar_47, &conv2_ArgMode_48);
            RHSVar_47 = ((MR_Word) (conv3_RHSVar_47));
            ArgMode_48 = ((MR_Word) (conv2_ArgMode_48));
            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_7_p_0(STATE_VARIABLE_Info_0_89, NonLocals_11, LHSVar_12, RHSVar_47, ArgMode_48, Context_16, Stmts_18);
            *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_0_89;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
        *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_0_89;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_20, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
            *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_0_89;
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_generate_det_deconstruction\'/10", (MR_String) "unexpected tag");
            return;
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_50 = ((MR_Word) ((MR_hl_field(3, ConsTag_20, 1))));
            MR_Word VarTable_59;
            MR_Word LHSVarEntry_60;
            MR_Word LHSVarLval_61;
            MR_Word LHSVarType_62;

            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_89, &VarTable_59);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_59, LHSVar_12, &LHSVarEntry_60);
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_89, LHSVar_12, LHSVarEntry_60, &LHSVarLval_61);
            LHSVarType_62 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_60, 1))));
            switch (MR_tag((MR_Word) RemoteArgsTagInfo_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FieldGen_149;
                  MR_Word RHSVarRepns_150;
                  MR_Word Var_146;

                  ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_89, LHSVarLval_61, LHSVarType_62, ConsId_13, ConsTag_20, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), &FieldGen_149);
                  ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_89, LHSVarType_62, ConsId_13, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_14, &RHSVarRepns_150);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0(NonLocals_11, FieldGen_149, RHSVarRepns_150, ArgModes_15, (MR_Integer) 1, Context_16, (MR_Word) ((MR_Unsigned) 0U), &Var_146, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_89, STATE_VARIABLE_Info_90);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word FieldGen_159;
                  MR_Word RHSVarRepns_160;
                  MR_Word Ptag_164 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_50, 0))));
                  MR_Word Var_156;

                  ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_89, LHSVarLval_61, LHSVarType_62, ConsId_13, ConsTag_20, Ptag_164, &FieldGen_159);
                  ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_89, LHSVarType_62, ConsId_13, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_14, &RHSVarRepns_160);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0(NonLocals_11, FieldGen_159, RHSVarRepns_160, ArgModes_15, (MR_Integer) 1, Context_16, (MR_Word) ((MR_Unsigned) 0U), &Var_156, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_89, STATE_VARIABLE_Info_90);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_54 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_50, 1))));
                  MR_Unsigned SectagUint_55 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_54, 0))));
                  MR_Word SectagSize_56 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_54, 1))));
                  MR_Word FieldGen_174;
                  MR_Word Ptag_179 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_50, 0))));

                  ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_89, LHSVarLval_61, LHSVarType_62, ConsId_13, ConsTag_20, Ptag_179, &FieldGen_174);
                  if ((SectagSize_56 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word RHSVarRepns_183;
                    MR_Word Var_165;

                    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_89, LHSVarType_62, ConsId_13, (MR_Word) (((MR_Box) ((MR_Integer) 1))), RHSVars_14, &RHSVarRepns_183);
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0(NonLocals_11, FieldGen_174, RHSVarRepns_183, ArgModes_15, (MR_Integer) 1, Context_16, (MR_Word) ((MR_Unsigned) 0U), &Var_165, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_89, STATE_VARIABLE_Info_90);
                  }
                  else
                  {
                    MR_Word SectagBits_57 = (MR_Word) (MR_body((MR_Word) (SectagSize_56), (MR_Integer) 1));
                    MR_Word TagFilledBitfield_65;
                    MR_Word TagwordRHSVarRepns_66;
                    MR_Word TagwordArgModes_67;
                    MR_Word NonTagwordRHSVarRepns_68;
                    MR_Word NonTagwordArgModes_69;
                    MR_Integer FirstNonTagwordArgNum_70;
                    MR_Word MaybePtag_71;
                    MR_Word AddrRval_72;
                    MR_Word AddrType_73;
                    MR_Word FieldVia_74;
                    MR_Word TagwordLval_76;
                    MR_Word CastTagwordRval_78;
                    MR_Word TagwordDefns_79;
                    MR_Word TagwordStmts_80;
                    MR_Word NonTagwordDefns_82;
                    MR_Word NonTagwordStmts_83;
                    MR_Word Var_99;
                    MR_Word Var_108;
                    MR_Word STATE_VARIABLE_Info_1_110;
                    MR_Word RHSVarRepns_175;
                    MR_Word Var_81;

                    ml_backend__ml_unify_gen_util__remote_sectag_filled_bitfield_3_p_0(SectagUint_55, SectagBits_57, &TagFilledBitfield_65);
                    ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_89, LHSVarType_62, ConsId_13, (MR_Word) (((MR_Box) ((MR_Integer) -42))), RHSVars_14, &RHSVarRepns_175);
                    ml_backend__ml_unify_gen_deconstruct__ml_take_tagword_args_8_p_0(RHSVarRepns_175, ArgModes_15, &TagwordRHSVarRepns_66, &TagwordArgModes_67, &NonTagwordRHSVarRepns_68, &NonTagwordArgModes_69, (MR_Integer) 1, &FirstNonTagwordArgNum_70);
                    MaybePtag_71 = ((MR_Word) ((MR_hl_field(0, FieldGen_174, 0))));
                    AddrRval_72 = ((MR_Word) ((MR_hl_field(0, FieldGen_174, 1))));
                    AddrType_73 = ((MR_Word) ((MR_hl_field(0, FieldGen_174, 2))));
                    FieldVia_74 = ((MR_Word) ((MR_hl_field(0, FieldGen_174, 3))));
                    {
                      Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_99, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[3]));
                      MR_hl_field(0, Var_99, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_generate_det_deconstruction_10_p_0_1));
                      MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_99, 3) = ((MR_Box) (FieldVia_74));
                      MR_hl_field(0, Var_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_generate_det_deconstruction\'/10", (MR_String) "not field_via_offset for tagword");
                    {
                      TagwordLval_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, TagwordLval_76, 0) = ((MR_Box) (MaybePtag_71));
                      MR_hl_field(0, TagwordLval_76, 1) = ((MR_Box) (AddrRval_72));
                      MR_hl_field(0, TagwordLval_76, 2) = ((MR_Box) (AddrType_73));
                      MR_hl_field(0, TagwordLval_76, 3) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[1]));
                      MR_hl_field(0, TagwordLval_76, 4) = ((MR_Box) ((MR_Unsigned) 20U));
                    }
                    {
                      Var_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Var_108, 0) = ((MR_Box) (TagwordLval_76));
                    }
                    {
                      CastTagwordRval_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, CastTagwordRval_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, CastTagwordRval_78, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6])));
                      MR_hl_field(3, CastTagwordRval_78, 2) = ((MR_Box) (Var_108));
                    }
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_12_p_0(NonLocals_11, TagwordLval_76, CastTagwordRval_78, (MR_Word) ((MR_Unsigned) 20U), TagFilledBitfield_65, TagwordRHSVarRepns_66, TagwordArgModes_67, Context_16, &TagwordDefns_79, &TagwordStmts_80, STATE_VARIABLE_Info_0_89, &STATE_VARIABLE_Info_1_110);
                    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0(NonLocals_11, FieldGen_174, NonTagwordRHSVarRepns_68, NonTagwordArgModes_69, FirstNonTagwordArgNum_70, Context_16, (MR_Word) ((MR_Unsigned) 0U), &Var_81, &NonTagwordDefns_82, &NonTagwordStmts_83, STATE_VARIABLE_Info_1_110, STATE_VARIABLE_Info_90);
                    *Defns_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), TagwordDefns_79, NonTagwordDefns_82);
                    *Stmts_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), TagwordStmts_80, NonTagwordStmts_83);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word FieldGen_63;
                  MR_Word RHSVarRepns_64;
                  MR_Word Var_84;

                  ml_backend__ml_unify_gen_util__decide_field_gen_7_p_0(STATE_VARIABLE_Info_0_89, LHSVarLval_61, LHSVarType_62, ConsId_13, ConsTag_20, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), &FieldGen_63);
                  ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_89, LHSVarType_62, ConsId_13, (MR_Word) (((MR_Box) ((MR_Integer) 0))), RHSVars_14, &RHSVarRepns_64);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0(NonLocals_11, FieldGen_63, RHSVarRepns_64, ArgModes_15, (MR_Integer) 1, Context_16, (MR_Word) ((MR_Unsigned) 0U), &Var_84, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_89, STATE_VARIABLE_Info_90);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_85 = ((MR_Word) ((MR_hl_field(3, ConsTag_20, 1))));
            MR_Word ModuleInfo_86;
            MR_Word ConsRepnDefn_87;
            MR_Word CtorArgRepns_88;
            MR_Word Var_115;
            MR_Word VarTable_123;
            MR_Word LHSVarEntry_124;
            MR_Word LHSVarLval_125;
            MR_Word RHSVarRepns_126;
            MR_Word TagFilledBitfield_127;

            ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_89, &VarTable_123);
            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_123, LHSVar_12, &LHSVarEntry_124);
            ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_0_89, LHSVar_12, LHSVarEntry_124, &LHSVarLval_125);
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_89, &ModuleInfo_86);
            hlds__type_util__get_cons_id_repn_defn_det_3_p_0(ModuleInfo_86, ConsId_13, &ConsRepnDefn_87);
            CtorArgRepns_88 = ((MR_Word) ((MR_hl_field(0, ConsRepnDefn_87, 4))));
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), RHSVars_14, CtorArgRepns_88, &RHSVarRepns_126);
            ml_backend__ml_unify_gen_util__local_primsectag_filled_bitfield_3_p_0(STATE_VARIABLE_Info_0_89, LocalArgsTagInfo_85, &TagFilledBitfield_127);
            {
              Var_115 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_115, 0) = ((MR_Box) (LHSVarLval_125));
            }
            ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_12_p_0(NonLocals_11, LHSVarLval_125, Var_115, (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6])), TagFilledBitfield_127, RHSVarRepns_126, ArgModes_15, Context_16, Defns_17, Stmts_18, STATE_VARIABLE_Info_0_89, STATE_VARIABLE_Info_90);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Ptag_49 = ((MR_Word) ((MR_hl_field(3, ConsTag_20, 1))));
            MR_Word RHSVar_119;
            MR_Word ArgMode_120;
            MR_Box conv1_RHSVar_119;
            MR_Box conv0_ArgMode_120;

            hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_14, ArgModes_15, &conv1_RHSVar_119, &conv0_ArgMode_120);
            RHSVar_119 = ((MR_Word) (conv1_RHSVar_119));
            ArgMode_120 = ((MR_Word) (conv0_ArgMode_120));
            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_8_p_0(STATE_VARIABLE_Info_0_89, NonLocals_11, Ptag_49, LHSVar_12, RHSVar_119, ArgMode_120, Context_16, Stmts_18);
            *Defns_17 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_0_89;
          }
          break;
      }
      break;
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
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_take_tagword_args\'/8", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Repn_44 = ((MR_Word) ((MR_hl_field(0, Var_76, 1))));
      MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(0, Repn_44, 3))));

      switch (MR_tag((MR_Word) ArgPosWidth_45)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
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
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_45, 0))))) {
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
                MR_Word ArgMode_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
                MR_Word ArgModes_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
                MR_Integer STATE_VARIABLE_FirstNonTagwordArgNum_1_69 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstNonTagwordArgNum_0_7 + (MR_Unsigned) 1);
                MR_Word * AddrTailTagwordArgModes_77;
                MR_Word * AddrTailTagwordRHSVarRepns_78;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_76));
                  MR_hl_field(1, base, 1) = NULL;
                }
                AddrTailTagwordRHSVarRepns_78 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ArgMode_36));
                  MR_hl_field(1, base, 1) = NULL;
                }
                AddrTailTagwordArgModes_77 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__4_4, 1)));
                ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_take_tagword_args__1_8_p_0(Var_75, ArgModes_37, AddrTailTagwordRHSVarRepns_78, AddrTailTagwordArgModes_77, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_FirstNonTagwordArgNum_1_69, STATE_VARIABLE_FirstNonTagwordArgNum_8);
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__LCMC__pred__ml_take_tagword_args__1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_79,
  MR_Word * AddrOfHeadVar__4_80,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer STATE_VARIABLE_FirstNonTagwordArgNum_0_7,
  MR_Integer * STATE_VARIABLE_FirstNonTagwordArgNum_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *AddrOfHeadVar__3_79 = (MR_Word) ((MR_Unsigned) 0U);
        *AddrOfHeadVar__4_80 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_take_tagword_args\'/8", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Repn_44 = ((MR_Word) ((MR_hl_field(0, Var_76, 1))));
        MR_Word ArgPosWidth_45 = ((MR_Word) ((MR_hl_field(0, Repn_44, 3))));

        switch (MR_tag((MR_Word) ArgPosWidth_45)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *AddrOfHeadVar__3_79 = (MR_Word) ((MR_Unsigned) 0U);
              *AddrOfHeadVar__4_80 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__5_5 = HeadVar__1_1;
              *HeadVar__6_6 = HeadVar__2_2;
              *STATE_VARIABLE_FirstNonTagwordArgNum_8 = STATE_VARIABLE_FirstNonTagwordArgNum_0_7;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_45, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *AddrOfHeadVar__3_79 = (MR_Word) ((MR_Unsigned) 0U);
                  *AddrOfHeadVar__4_80 = (MR_Word) ((MR_Unsigned) 0U);
                  *HeadVar__5_5 = HeadVar__1_1;
                  *HeadVar__6_6 = HeadVar__2_2;
                  *STATE_VARIABLE_FirstNonTagwordArgNum_8 = STATE_VARIABLE_FirstNonTagwordArgNum_0_7;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word ArgMode_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
                  MR_Word ArgModes_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
                  MR_Integer STATE_VARIABLE_FirstNonTagwordArgNum_1_69 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_FirstNonTagwordArgNum_0_7 + (MR_Unsigned) 1);
                  MR_Word * AddrTailTagwordArgModes_77;
                  MR_Word * AddrTailTagwordRHSVarRepns_78;
                  MR_Word HeadVar__3_83;
                  MR_Word HeadVar__4_84;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word * next_value_of_AddrOfHeadVar__3_79;
                  MR_Word * next_value_of_AddrOfHeadVar__4_80;
                  MR_Integer next_value_of_STATE_VARIABLE_FirstNonTagwordArgNum_0_7;

                  {
                    HeadVar__3_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__3_83, 0) = ((MR_Box) (Var_76));
                    MR_hl_field(1, HeadVar__3_83, 1) = NULL;
                  }
                  AddrTailTagwordRHSVarRepns_78 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_83, 1)));
                  *AddrOfHeadVar__3_79 = HeadVar__3_83;
                  {
                    HeadVar__4_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_84, 0) = ((MR_Box) (ArgMode_36));
                    MR_hl_field(1, HeadVar__4_84, 1) = NULL;
                  }
                  AddrTailTagwordArgModes_77 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_84, 1)));
                  *AddrOfHeadVar__4_80 = HeadVar__4_84;
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Var_75;
                  next_value_of_HeadVar__2_2 = ArgModes_37;
                  next_value_of_AddrOfHeadVar__3_79 = AddrTailTagwordRHSVarRepns_78;
                  next_value_of_AddrOfHeadVar__4_80 = AddrTailTagwordArgModes_77;
                  next_value_of_STATE_VARIABLE_FirstNonTagwordArgNum_0_7 = STATE_VARIABLE_FirstNonTagwordArgNum_1_69;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  AddrOfHeadVar__3_79 = next_value_of_AddrOfHeadVar__3_79;
                  AddrOfHeadVar__4_80 = next_value_of_AddrOfHeadVar__4_80;
                  STATE_VARIABLE_FirstNonTagwordArgNum_0_7 = next_value_of_STATE_VARIABLE_FirstNonTagwordArgNum_0_7;
                  continue;
                }
                break;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_7_p_0(
  MR_Word Info_8,
  MR_Word NonLocals_9,
  MR_Word LHSVar_10,
  MR_Word RHSVar_11,
  MR_Word ArgMode_12,
  MR_Word Context_13,
  MR_Word * Stmts_14)
{
  MR_Word VarTable_15;
  MR_Word LHSVarEntry_16;
  MR_Word RHSVarEntry_17;
  MR_Word LHSLval_18;
  MR_Word RHSLval_19;
  MR_Word LHSType_20;
  MR_Word RHSType_21;
  MR_Word ModuleInfo_22;
  MR_Word HighLevelData_23;
  MR_Word ArgPosWidth_24;
  MR_Word Dir_25;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_8, &VarTable_15);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_15, LHSVar_10, &LHSVarEntry_16);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_15, RHSVar_11, &RHSVarEntry_17);
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_8, LHSVar_10, LHSVarEntry_16, &LHSLval_18);
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_8, RHSVar_11, RHSVarEntry_17, &RHSLval_19);
  LHSType_20 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_16, 1))));
  RHSType_21 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_17, 1))));
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_8, &ModuleInfo_22);
  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_8, &HighLevelData_23);
  ArgPosWidth_24 = (MR_Word) (MR_mkword(1, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[10]));
  ml_backend__ml_unify_gen_util__ml_compute_assign_direction_7_p_0(ModuleInfo_22, NonLocals_9, RHSVar_11, RHSVarEntry_17, LHSType_20, ArgMode_12, &Dir_25);
  switch (Dir_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      *Stmts_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_22, HighLevelData_23, LHSLval_18, LHSType_20, RHSLval_19, RHSType_21, ArgPosWidth_24, Context_13, Stmts_14);
      break;
    case (MR_Integer) 1:
      {
        MR_Word _FilledBitfields_26;

        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_22, LHSLval_18, LHSType_20, RHSVar_11, RHSLval_19, RHSType_21, ArgPosWidth_24, Context_13, &_FilledBitfields_26, Stmts_14);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_8_p_0(
  MR_Word Info_9,
  MR_Word NonLocals_10,
  MR_Word Ptag_11,
  MR_Word LHSVar_12,
  MR_Word RHSVar_13,
  MR_Word ArgMode_14,
  MR_Word Context_15,
  MR_Word * Stmts_16)
{
  MR_bool succeeded;
  MR_Word VarTable_17;
  MR_Word LHSVarEntry_18;
  MR_Word RHSVarEntry_19;
  MR_Word LHSLval_20;
  MR_Word RHSLval_21;
  MR_Word LHSType_22;
  MR_Word RHSType_23;
  MR_Word ModuleInfo_24;
  MR_Word Dir_25;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_9, &VarTable_17);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_17, LHSVar_12, &LHSVarEntry_18);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_17, RHSVar_13, &RHSVarEntry_19);
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_9, LHSVar_12, LHSVarEntry_18, &LHSLval_20);
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_9, RHSVar_13, RHSVarEntry_19, &RHSLval_21);
  LHSType_22 = ((MR_Word) ((MR_hl_field(0, LHSVarEntry_18, 1))));
  RHSType_23 = ((MR_Word) ((MR_hl_field(0, RHSVarEntry_19, 1))));
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_9, &ModuleInfo_24);
  ml_backend__ml_unify_gen_util__ml_compute_assign_direction_7_p_0(ModuleInfo_24, NonLocals_10, RHSVar_13, RHSVarEntry_19, LHSType_22, ArgMode_14, &Dir_25);
  switch (Dir_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_direct_arg\'/8", (MR_String) "dummy unify");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word RHSRval_32;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word MLDS_Type_44;
        MR_Word CastRval_45;
        MR_Word Stmt_46;

        {
          Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_39, 0) = ((MR_Box) (RHSLval_21));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_24, RHSType_23, LHSType_22, Var_39, &RHSRval_32);
        MLDS_Type_44 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, LHSType_22);
        {
          Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_40, 1) = ((MR_Box) (Ptag_11));
          MR_hl_field(3, Var_40, 2) = ((MR_Box) (RHSRval_32));
        }
        {
          CastRval_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CastRval_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CastRval_45, 1) = ((MR_Box) (MLDS_Type_44));
          MR_hl_field(3, CastRval_45, 2) = ((MR_Box) (Var_40));
        }
        Stmt_46 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_20, CastRval_45, Context_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_46));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHSRval_26;
        MR_Word MLDS_Type_27;
        uint8_t PtagUint8_28;
        MR_Word CastRval_29;
        MR_Word Stmt_31;
        MR_Word Var_33;

        {
          Var_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_33, 0) = ((MR_Box) (LHSLval_20));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_24, LHSType_22, RHSType_23, Var_33, &LHSRval_26);
        MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, RHSType_23);
        PtagUint8_28 = (uint8_t) (Ptag_11);
        succeeded = (PtagUint8_28 == UINT8_C(0));
        if (succeeded)
          {
            CastRval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, CastRval_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, CastRval_29, 1) = ((MR_Box) (MLDS_Type_27));
            MR_hl_field(3, CastRval_29, 2) = ((MR_Box) (LHSRval_26));
          }
        else
        {
          MR_Integer PtagInt_30;
          MR_Word Var_34;
          MR_Word Var_36;
          MR_Word Var_37;

          PtagInt_30 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_28);
          {
            Var_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_37, 0) = ((MR_Box) (PtagInt_30));
          }
          {
            Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Var_34, 2) = ((MR_Box) (LHSRval_26));
            MR_hl_field(3, Var_34, 3) = ((MR_Box) (Var_36));
          }
          {
            CastRval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, CastRval_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, CastRval_29, 1) = ((MR_Box) (MLDS_Type_27));
            MR_hl_field(3, CastRval_29, 2) = ((MR_Box) (Var_34));
          }
        }
        Stmt_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_21, CastRval_29, Context_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_31));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_deconstruct_tagword_args__354__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_12_p_0(
  MR_Word NonLocals_13,
  MR_Word LHSTagwordLval_14,
  MR_Word CastTagwordRval_15,
  MR_Word TagwordType_16,
  MR_Word TagFilledBitfield_17,
  MR_Word RHSVarRepns_18,
  MR_Word ArgModes_19,
  MR_Word Context_20,
  MR_Word * Defns_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  MR_bool succeeded;
  MR_Word ToOrRvals_24;
  MR_Unsigned ToOrMask_25;
  MR_Word RevArgFilledBitfields_26;
  MR_Word AllPartialsRight_27;
  MR_Word RightStmts_28;

  ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_loop_15_p_0(STATE_VARIABLE_Info_0_40, NonLocals_13, CastTagwordRval_15, RHSVarRepns_18, ArgModes_19, Context_20, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_24, (MR_Unsigned) 0U, &ToOrMask_25, (MR_Word) ((MR_Unsigned) 0U), &RevArgFilledBitfields_26, (MR_Integer) 1, &AllPartialsRight_27, &RightStmts_28);
  switch (AllPartialsRight_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgFilledBitfields_29;
        MR_Word FilledBitfields_30;
        MR_Word WordVarStmts_31;
        MR_Word Var_46;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[2]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_12_p_0_1));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (ToOrRvals_24));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_46, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_args\'/12", (MR_String) "all_partials_assign_right but ToOrRvals != []");
        mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), RevArgFilledBitfields_26, &ArgFilledBitfields_29);
        {
          FilledBitfields_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FilledBitfields_30, 0) = ((MR_Box) (TagFilledBitfield_17));
          MR_hl_field(1, FilledBitfields_30, 1) = ((MR_Box) (ArgFilledBitfields_29));
        }
        ml_backend__ml_unify_gen_deconstruct__record_packed_word_7_p_0(FilledBitfields_30, CastTagwordRval_15, Context_20, Defns_21, &WordVarStmts_31, STATE_VARIABLE_Info_0_40, STATE_VARIABLE_Info_41);
        *Stmts_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), WordVarStmts_31, RightStmts_28);
      }
      break;
    case (MR_Integer) 0:
      {
        if ((ToOrRvals_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Defns_21 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_22 = RightStmts_28;
        }
        else
        {
          MR_Word HeadToOrRval_32 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_24, 0))));
          MR_Word TailToOrRvals_33 = ((MR_Word) ((MR_hl_field(1, ToOrRvals_24, 1))));
          MR_Word ToOrRval_34;
          MR_Word ComplementMask_35;
          MR_Word MaskedOldTagwordRval_36;
          MR_Word NewTagwordRval_37;
          MR_Word CastNewTagwordRval_38;
          MR_Word LeftStmt_39;
          MR_Word Var_51;
          MR_Unsigned Var_52;
          MR_Word Var_57;

          *Defns_21 = (MR_Word) ((MR_Unsigned) 0U);
          ToOrRval_34 = ml_backend__ml_unify_gen_util__ml_bitwise_or_some_rvals_2_f_0(HeadToOrRval_32, TailToOrRvals_33);
          Var_52 = ~(ToOrMask_25);
          {
            Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_51, 1) = ((MR_Box) (Var_52));
          }
          {
            ComplementMask_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ComplementMask_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, ComplementMask_35, 1) = ((MR_Box) (Var_51));
          }
          {
            MaskedOldTagwordRval_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MaskedOldTagwordRval_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, MaskedOldTagwordRval_36, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[8])));
            MR_hl_field(3, MaskedOldTagwordRval_36, 2) = ((MR_Box) (CastTagwordRval_15));
            MR_hl_field(3, MaskedOldTagwordRval_36, 3) = ((MR_Box) (ComplementMask_35));
          }
          {
            NewTagwordRval_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NewTagwordRval_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, NewTagwordRval_37, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[9])));
            MR_hl_field(3, NewTagwordRval_37, 2) = ((MR_Box) (MaskedOldTagwordRval_36));
            MR_hl_field(3, NewTagwordRval_37, 3) = ((MR_Box) (ToOrRval_34));
          }
          succeeded = ((((MR_tag((MR_Word) TagwordType_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TagwordType_16, 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Var_57 = ((MR_Unsigned) ((MR_hl_field(3, TagwordType_16, 1))) & (MR_Integer) 15);
            succeeded = (Var_57 == (MR_Integer) 1);
          }
          if (succeeded)
            CastNewTagwordRval_38 = NewTagwordRval_37;
          else
            {
              CastNewTagwordRval_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CastNewTagwordRval_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, CastNewTagwordRval_38, 1) = ((MR_Box) (TagwordType_16));
              MR_hl_field(3, CastNewTagwordRval_38, 2) = ((MR_Box) (NewTagwordRval_37));
            }
          LeftStmt_39 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSTagwordLval_14, CastNewTagwordRval_38, Context_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (LeftStmt_39));
            MR_hl_field(1, base, 1) = ((MR_Box) (RightStmts_28));
          }
        }
        *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_0_40;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_loop_15_p_0(
  MR_Word Info_1,
  MR_Word NonLocals_2,
  MR_Word WordRval_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_ToOrRvals_0_7,
  MR_Word * STATE_VARIABLE_ToOrRvals_8,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_9,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_10,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_11,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_12,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_13,
  MR_Word * STATE_VARIABLE_AllPartialsRight_14,
  MR_Word * HeadVar__15_15)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__15_15 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_AllPartialsRight_14 = STATE_VARIABLE_AllPartialsRight_0_13;
      *STATE_VARIABLE_RevFilledBitfields_12 = STATE_VARIABLE_RevFilledBitfields_0_11;
      *STATE_VARIABLE_ToOrMask_10 = STATE_VARIABLE_ToOrMask_0_9;
      *STATE_VARIABLE_ToOrRvals_8 = STATE_VARIABLE_ToOrRvals_0_7;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_args_loop\'/15", (MR_String) "length mismatch");
        return;
      }
  else
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_args_loop\'/15", (MR_String) "length mismatch");
      return;
    }
  else
  {
    MR_Word ArgMode_79 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word ArgModes_80 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word HeadStmts_87;
    MR_Word TailStmts_88;
    MR_Word STATE_VARIABLE_ToOrRvals_1_97;
    MR_Unsigned STATE_VARIABLE_ToOrMask_1_98;
    MR_Word STATE_VARIABLE_RevFilledBitfields_1_99;
    MR_Word STATE_VARIABLE_AllPartialsRight_1_100;
    MR_Word Var_102 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Var_103 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));

    ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_15_p_0(Info_1, NonLocals_2, WordRval_3, Var_103, ArgMode_79, Context_6, STATE_VARIABLE_ToOrRvals_0_7, &STATE_VARIABLE_ToOrRvals_1_97, STATE_VARIABLE_ToOrMask_0_9, &STATE_VARIABLE_ToOrMask_1_98, STATE_VARIABLE_RevFilledBitfields_0_11, &STATE_VARIABLE_RevFilledBitfields_1_99, STATE_VARIABLE_AllPartialsRight_0_13, &STATE_VARIABLE_AllPartialsRight_1_100, &HeadStmts_87);
    ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_loop_15_p_0(Info_1, NonLocals_2, WordRval_3, Var_102, ArgModes_80, Context_6, STATE_VARIABLE_ToOrRvals_1_97, STATE_VARIABLE_ToOrRvals_8, STATE_VARIABLE_ToOrMask_1_98, STATE_VARIABLE_ToOrMask_10, STATE_VARIABLE_RevFilledBitfields_1_99, STATE_VARIABLE_RevFilledBitfields_12, STATE_VARIABLE_AllPartialsRight_1_100, STATE_VARIABLE_AllPartialsRight_14, &TailStmts_88);
    *HeadVar__15_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_87, TailStmts_88);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_15_p_0(
  MR_Word Info_16,
  MR_Word NonLocals_17,
  MR_Word WordRval_18,
  MR_Word HeadVar__4_4,
  MR_Word ArgMode_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ToOrRvals_0_38,
  MR_Word * STATE_VARIABLE_ToOrRvals_39,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_40,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_41,
  MR_Word STATE_VARIABLE_RevFilledBitfields_0_42,
  MR_Word * STATE_VARIABLE_RevFilledBitfields_43,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_44,
  MR_Word * STATE_VARIABLE_AllPartialsRight_45,
  MR_Word * Stmts_27)
{
  MR_Word ArgVar_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Word CtorArgRepn_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word VarTable_28;
  MR_Word ArgVarEntry_29;
  MR_Word ArgLval_30;
  MR_Word ModuleInfo_31;
  MR_Word HighLevelData_32;
  MR_Word ArgPosWidth_33;
  MR_Word FieldWidth_34;
  MR_Word FieldRawType_35;
  MR_Word FieldType_36;
  MR_Word Dir_37;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_16, &VarTable_28);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_28, ArgVar_19, &ArgVarEntry_29);
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_16, ArgVar_19, ArgVarEntry_29, &ArgLval_30);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_16, &ModuleInfo_31);
  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_16, &HighLevelData_32);
  ArgPosWidth_33 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_20, 3))));
  FieldWidth_34 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_33);
  FieldRawType_35 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_20, 2))));
  ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_31, HighLevelData_32, FieldRawType_35, FieldWidth_34, &FieldType_36);
  ml_backend__ml_unify_gen_util__ml_compute_assign_direction_7_p_0(ModuleInfo_31, NonLocals_17, ArgVar_19, ArgVarEntry_29, FieldType_36, ArgMode_21, &Dir_37);
  switch (Dir_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_AllPartialsRight_45 = (MR_Integer) 0;
        *Stmts_27 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_ToOrRvals_39 = STATE_VARIABLE_ToOrRvals_0_38;
        *STATE_VARIABLE_ToOrMask_41 = STATE_VARIABLE_ToOrMask_0_40;
        *STATE_VARIABLE_RevFilledBitfields_43 = STATE_VARIABLE_RevFilledBitfields_0_42;
      }
      break;
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) ArgPosWidth_33)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_left\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
              return;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_33, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_left\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Shift_56 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_33, 3))));
                  MR_Word Mask_58 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_33, 5))));
                  MR_Word Fill_59 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_33, 6))) & (MR_Integer) 7);
                  MR_Integer ShiftInt_60 = (MR_Integer) (Shift_56);
                  MR_Integer MaskInt_61 = (MR_Integer) (Mask_58);
                  MR_Word LeftShiftedArgRval_62;
                  MR_Word Var_76;
                  MR_Unsigned Var_77;
                  MR_Unsigned Var_78;

                  {
                    Var_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_76, 0) = ((MR_Box) (ArgLval_30));
                  }
                  LeftShiftedArgRval_62 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(Var_76, Shift_56, Fill_59);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ToOrRvals_39 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (LeftShiftedArgRval_62));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_38));
                  }
                  Var_78 = mercury__uint__cast_from_int_1_f_0(MaskInt_61);
                  Var_77 = mercury__uint__f_60_60_2_f_0(Var_78, ShiftInt_60);
                  *STATE_VARIABLE_ToOrMask_41 = (Var_77 | STATE_VARIABLE_ToOrMask_0_40);
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_ToOrRvals_39 = STATE_VARIABLE_ToOrRvals_0_38;
                  *STATE_VARIABLE_ToOrMask_41 = STATE_VARIABLE_ToOrMask_0_40;
                }
                break;
            }
            break;
        }
        *STATE_VARIABLE_AllPartialsRight_45 = (MR_Integer) 0;
        *Stmts_27 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_RevFilledBitfields_43 = STATE_VARIABLE_RevFilledBitfields_0_42;
      }
      break;
    case (MR_Integer) 1:
      {
        ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_assign_right_8_p_0(WordRval_18, ArgPosWidth_33, ArgVar_19, ArgLval_30, Context_22, STATE_VARIABLE_RevFilledBitfields_0_42, STATE_VARIABLE_RevFilledBitfields_43, Stmts_27);
        *STATE_VARIABLE_ToOrRvals_39 = STATE_VARIABLE_ToOrRvals_0_38;
        *STATE_VARIABLE_ToOrMask_41 = STATE_VARIABLE_ToOrMask_0_40;
        *STATE_VARIABLE_AllPartialsRight_45 = STATE_VARIABLE_AllPartialsRight_0_44;
      }
      break;
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
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_right\'/8", (MR_String) "ArgPosWidth does not belong in tagword");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_deconstruct_tagword_arg_assign_right\'/8", (MR_String) "ArgPosWidth does not belong in tagword");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_18 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, 3))));
            MR_Word NumBits_19 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, 4))));
            MR_Word Mask_20 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, 5))));
            MR_Word Fill_21 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_10, 6))) & (MR_Integer) 7);
            MR_Word Bitfield_22;
            MR_Word BitfieldValue_23;
            MR_Word FilledBitfield_24;
            MR_Word ToAssignRval_25;
            MR_Word Stmt_26;
            MR_Word UnsignedWordRval_46;
            MR_Integer MaskInt_47;
            MR_Word MaskedRval_48;
            MR_Word Var_53;

            {
              Bitfield_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Bitfield_22, 0) = ((MR_Box) (Shift_18));
              MR_hl_field(0, Bitfield_22, 1) = ((MR_Box) (NumBits_19));
              MR_hl_field(0, Bitfield_22, 2) = (MR_Box) ((MR_Unsigned) (Fill_21));
            }
            {
              BitfieldValue_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, BitfieldValue_23, 0) = ((MR_Box) (ArgVar_11));
            }
            {
              FilledBitfield_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FilledBitfield_24, 0) = ((MR_Box) (Bitfield_22));
              MR_hl_field(0, FilledBitfield_24, 1) = ((MR_Box) (BitfieldValue_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevFilledBitfields_41 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (FilledBitfield_24));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevFilledBitfields_0_40));
            }
            {
              UnsignedWordRval_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, UnsignedWordRval_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, UnsignedWordRval_46, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6])));
              MR_hl_field(3, UnsignedWordRval_46, 2) = ((MR_Box) (WordRval_9));
            }
            MaskInt_47 = (MR_Integer) (Mask_20);
            Var_53 = ml_backend__ml_unify_gen_util__ml_right_shift_rval_2_f_0(UnsignedWordRval_46, Shift_18);
            MaskedRval_48 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(Var_53, MaskInt_47);
            switch (Fill_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 7:
              case (MR_Integer) 0:
                ToAssignRval_25 = MaskedRval_48;
                break;
              case (MR_Integer) 2:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[11])));
                  MR_hl_field(3, ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_48));
                }
                break;
              case (MR_Integer) 3:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[12])));
                  MR_hl_field(3, ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_48));
                }
                break;
              case (MR_Integer) 1:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[13])));
                  MR_hl_field(3, ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_48));
                }
                break;
              case (MR_Integer) 5:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[14])));
                  MR_hl_field(3, ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_48));
                }
                break;
              case (MR_Integer) 6:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[15])));
                  MR_hl_field(3, ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_48));
                }
                break;
              case (MR_Integer) 4:
                {
                  ToAssignRval_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_25, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[16])));
                  MR_hl_field(3, ToAssignRval_25, 2) = ((MR_Box) (MaskedRval_48));
                }
                break;
            }
            Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_12, ToAssignRval_25, Context_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_15 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_26));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__399__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0(
  MR_Word NonLocals_1,
  MR_Word FieldGen_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer CurArgNum_5,
  MR_Word Context_6,
  MR_Word TakeAddr_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_21;

      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[1]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (TakeAddr_7));
        MR_hl_field(0, Var_21, 4) = ((MR_Box) (*HeadVar__8_8));
      }
      mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "TakeAddr != []");
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
        return;
      }
  else
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/12", (MR_String) "length mismatch");
      return;
    }
  else
  {
    MR_Word ArgMode_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word ArgModes_60 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word ArgVar_68;
    MR_Word CtorArgRepn_69;
    MR_Integer NextArgNum_70;
    MR_Word ArgPosWidth_71;
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word CellOffset_106;
    MR_Word FieldVia_86;

    ArgVar_68 = ((MR_Word) ((MR_hl_field(0, Var_117, 0))));
    CtorArgRepn_69 = ((MR_Word) ((MR_hl_field(0, Var_117, 1))));
    NextArgNum_70 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) 1);
    ArgPosWidth_71 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_69, 3))));
    succeeded = ((((MR_tag((MR_Word) ArgPosWidth_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgPosWidth_71, 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      CellOffset_106 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_71, 2))));
      FieldVia_86 = ((MR_Word) ((MR_hl_field(0, FieldGen_2, 3))));
      succeeded = (FieldVia_86 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word LeftOverArgVarRepns_87;
      MR_Word LeftOverArgModes_88;
      MR_Integer LeftOverArgNum_89;
      MR_Word HeadDefns_90;
      MR_Word HeadStmts_91;
      MR_Word TailDefns_92;
      MR_Word TailStmts_93;
      MR_Word STATE_VARIABLE_Info_2_101;

      ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0(NonLocals_1, FieldGen_2, ArgVar_68, CtorArgRepn_69, ArgMode_59, Var_116, ArgModes_60, &LeftOverArgVarRepns_87, &LeftOverArgModes_88, CurArgNum_5, &LeftOverArgNum_89, CellOffset_106, Context_6, &HeadDefns_90, &HeadStmts_91, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_2_101);
      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0(NonLocals_1, FieldGen_2, LeftOverArgVarRepns_87, LeftOverArgModes_88, LeftOverArgNum_89, Context_6, TakeAddr_7, HeadVar__8_8, &TailDefns_92, &TailStmts_93, STATE_VARIABLE_Info_2_101, STATE_VARIABLE_Info_12);
      *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_90, TailDefns_92);
      *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_91, TailStmts_93);
    }
    else
    {
      MR_Word HeadStmts_104;
      MR_Word TailStmts_105;
      MR_Word _FilledBitfields_94;

      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_11, NonLocals_1, FieldGen_2, ArgVar_68, CtorArgRepn_69, ArgMode_59, CurArgNum_5, Context_6, &_FilledBitfields_94, &HeadStmts_104);
      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_12_p_0(NonLocals_1, FieldGen_2, Var_116, ArgModes_60, NextArgNum_70, Context_6, TakeAddr_7, HeadVar__8_8, HeadVar__9_9, &TailStmts_105, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
      *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_104, TailStmts_105);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_52_93_95_48_18_p_0(
  MR_Word NonLocals_19,
  MR_Word FieldGen_20,
  MR_Word ArgVar_21,
  MR_Word CtorArgRepn_22,
  MR_Word ArgMode_23,
  MR_Word ArgVarRepns_24,
  MR_Word ArgModes_25,
  MR_Word * LeftOverArgVarRepns_26,
  MR_Word * LeftOverArgModes_27,
  MR_Integer CurArgNum_28,
  MR_Integer * LeftOverArgNum_29,
  MR_Word CellOffset_30,
  MR_Word Context_31,
  MR_Word * Defns_33,
  MR_Word * Stmts_34,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57)
{
  MR_Word FirstFilledBitfields_36;
  MR_Word HeadStmts_37;
  MR_Word AllPartialsRight0_38;
  MR_Integer NextArgNum_41;
  MR_Word AllPartialsRight_42;
  MR_Word LaterFilledBitfields_43;
  MR_Word TailStmts_44;
  MR_Word Stmts0_45;
  MR_Word STATE_VARIABLE_Info_1_59;

  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_56, NonLocals_19, FieldGen_20, ArgVar_21, CtorArgRepn_22, ArgMode_23, CurArgNum_28, Context_31, &FirstFilledBitfields_36, &HeadStmts_37);
  if ((FirstFilledBitfields_36 == (MR_Word) ((MR_Unsigned) 0U)))
    AllPartialsRight0_38 = (MR_Integer) 0;
  else
    AllPartialsRight0_38 = (MR_Integer) 1;
  NextArgNum_41 = (MR_Integer) ((MR_Unsigned) CurArgNum_28 + (MR_Unsigned) 1);
  ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_48_93_95_48_16_p_0(NonLocals_19, FieldGen_20, ArgVarRepns_24, ArgModes_25, LeftOverArgVarRepns_26, LeftOverArgModes_27, NextArgNum_41, LeftOverArgNum_29, Context_31, AllPartialsRight0_38, &AllPartialsRight_42, &LaterFilledBitfields_43, &TailStmts_44, STATE_VARIABLE_Info_0_56, &STATE_VARIABLE_Info_1_59);
  Stmts0_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_37, TailStmts_44);
  switch (AllPartialsRight_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FilledBitfields_46;
        MR_Integer CellOffsetInt_47;
        MR_Word FieldId_48;
        MR_Word MaybePtag_49;
        MR_Word AddrRval_50;
        MR_Word AddrType_51;
        MR_Word FieldLval_53;
        MR_Word WordRval_54;
        MR_Word WordVarStmts_55;
        MR_Word Var_60;
        MR_Word Var_61;

        FilledBitfields_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), FirstFilledBitfields_36, LaterFilledBitfields_43);
        CellOffsetInt_47 = (MR_Integer) (CellOffset_30);
        {
          Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_61, 0) = ((MR_Box) (CellOffsetInt_47));
        }
        {
          Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
        }
        {
          FieldId_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FieldId_48, 0) = ((MR_Box) (Var_60));
        }
        MaybePtag_49 = ((MR_Word) ((MR_hl_field(0, FieldGen_20, 0))));
        AddrRval_50 = ((MR_Word) ((MR_hl_field(0, FieldGen_20, 1))));
        AddrType_51 = ((MR_Word) ((MR_hl_field(0, FieldGen_20, 2))));
        {
          FieldLval_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FieldLval_53, 0) = ((MR_Box) (MaybePtag_49));
          MR_hl_field(0, FieldLval_53, 1) = ((MR_Box) (AddrRval_50));
          MR_hl_field(0, FieldLval_53, 2) = ((MR_Box) (AddrType_51));
          MR_hl_field(0, FieldLval_53, 3) = ((MR_Box) (FieldId_48));
          MR_hl_field(0, FieldLval_53, 4) = ((MR_Box) ((MR_Unsigned) 20U));
        }
        {
          WordRval_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, WordRval_54, 0) = ((MR_Box) (FieldLval_53));
        }
        ml_backend__ml_unify_gen_deconstruct__record_packed_word_7_p_0(FilledBitfields_46, WordRval_54, Context_31, Defns_33, &WordVarStmts_55, STATE_VARIABLE_Info_1_59, STATE_VARIABLE_Info_57);
        *Stmts_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), WordVarStmts_55, Stmts0_45);
      }
      break;
    case (MR_Integer) 0:
      {
        *Defns_33 = (MR_Word) ((MR_Unsigned) 0U);
        *Stmts_34 = Stmts0_45;
        *STATE_VARIABLE_Info_57 = STATE_VARIABLE_Info_1_59;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_48_93_95_48_16_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__608__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_48_93_95_48_16_p_0(
  MR_Word NonLocals_1,
  MR_Word FieldGen_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Integer CurArgNum_7,
  MR_Integer * LeftOverArgNum_8,
  MR_Word HeadVar__9_9,
  MR_Word STATE_VARIABLE_AllPartialsRight_0_11,
  MR_Word * STATE_VARIABLE_AllPartialsRight_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
      *LeftOverArgNum_8 = CurArgNum_7;
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
      *STATE_VARIABLE_AllPartialsRight_12 = STATE_VARIABLE_AllPartialsRight_0_11;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/16", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_135 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_136 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/16", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ArgMode_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ArgModes_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word ArgVar_85 = ((MR_Word) ((MR_hl_field(0, Var_136, 0))));
      MR_Word CtorArgRepn_86 = ((MR_Word) ((MR_hl_field(0, Var_136, 1))));
      MR_Word ArgPosWidth_87 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_86, 3))));

      switch (MR_tag((MR_Word) ArgPosWidth_87)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__5_5 = HeadVar__3_3;
            *HeadVar__6_6 = HeadVar__4_4;
            *LeftOverArgNum_8 = CurArgNum_7;
            *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_AllPartialsRight_12 = STATE_VARIABLE_AllPartialsRight_0_11;
            *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_87, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__5_5 = HeadVar__3_3;
                *HeadVar__6_6 = HeadVar__4_4;
                *LeftOverArgNum_8 = CurArgNum_7;
                *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_AllPartialsRight_12 = STATE_VARIABLE_AllPartialsRight_0_11;
                *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HeadFilledBitfields_137;
                MR_Word HeadStmts_138;
                MR_Integer NextArgNum_139;
                MR_Word TailFilledBitfields_140;
                MR_Word TailStmts_141;
                MR_Word STATE_VARIABLE_AllPartialsRight_1_142;

                ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_15, NonLocals_1, FieldGen_2, ArgVar_85, CtorArgRepn_86, ArgMode_73, CurArgNum_7, HeadVar__9_9, &HeadFilledBitfields_137, &HeadStmts_138);
                if ((HeadFilledBitfields_137 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_AllPartialsRight_1_142 = (MR_Integer) 0;
                else
                  STATE_VARIABLE_AllPartialsRight_1_142 = STATE_VARIABLE_AllPartialsRight_0_11;
                NextArgNum_139 = (MR_Integer) ((MR_Unsigned) CurArgNum_7 + (MR_Unsigned) 1);
                ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_48_93_95_48_16_p_0(NonLocals_1, FieldGen_2, Var_135, ArgModes_74, HeadVar__5_5, HeadVar__6_6, NextArgNum_139, LeftOverArgNum_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_1_142, STATE_VARIABLE_AllPartialsRight_12, &TailFilledBitfields_140, &TailStmts_141, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
                *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), HeadFilledBitfields_137, TailFilledBitfields_140);
                *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_138, TailStmts_141);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word HeadFilledBitfields_94;
                MR_Word HeadStmts_95;
                MR_Integer NextArgNum_101;
                MR_Word TailFilledBitfields_102;
                MR_Word TailStmts_103;
                MR_Word Var_120;

                ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(STATE_VARIABLE_Info_0_15, NonLocals_1, FieldGen_2, ArgVar_85, CtorArgRepn_86, ArgMode_73, CurArgNum_7, HeadVar__9_9, &HeadFilledBitfields_94, &HeadStmts_95);
                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_120, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_3[0]));
                  MR_hl_field(0, Var_120, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_48_93_95_48_16_p_0_1));
                  MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_120, 3) = ((MR_Box) (HeadFilledBitfields_94));
                  MR_hl_field(0, Var_120, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_120, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/16", (MR_String) "HeadFilledBitfields != [] for apw_none_shifted");
                NextArgNum_101 = (MR_Integer) ((MR_Unsigned) CurArgNum_7 + (MR_Unsigned) 1);
                ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_49_48_93_95_48_16_p_0(NonLocals_1, FieldGen_2, Var_135, ArgModes_74, HeadVar__5_5, HeadVar__6_6, NextArgNum_101, LeftOverArgNum_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_0_11, STATE_VARIABLE_AllPartialsRight_12, &TailFilledBitfields_102, &TailStmts_103, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
                *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_filled_bitfield_0), HeadFilledBitfields_94, TailFilledBitfields_102);
                *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_95, TailStmts_103);
              }
              break;
          }
          break;
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
  MR_bool succeeded;

  if ((FilledBitfields_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *WordVarDefns_11 = (MR_Word) ((MR_Unsigned) 0U);
    *WordVarStmts_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
  }
  else
  {
    MR_Word HeadFilledBitfields_14 = ((MR_Word) ((MR_hl_field(1, FilledBitfields_8, 0))));
    MR_Word TailFilledBitfields_15 = ((MR_Word) ((MR_hl_field(1, FilledBitfields_8, 1))));
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
    MR_Word STATE_VARIABLE_Info_1_34;
    MR_Word Var_40;
    MR_Word OldInstances_27;
    MR_Box conv0_OldInstances_27;

    ml_backend__ml_gen_info__ml_gen_info_new_packed_word_var_3_p_0(&WordCompVar_16, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_1_34);
    {
      WordVar_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, WordVar_17, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, WordVar_17, 1) = ((MR_Box) (WordCompVar_16));
    }
    WordVarType_18 = (MR_Word) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6]));
    {
      WordVarDefn_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, WordVarDefn_19, 0) = ((MR_Box) (WordVar_17));
      MR_hl_field(0, WordVarDefn_19, 1) = ((MR_Box) (Context_10));
      MR_hl_field(0, WordVarDefn_19, 2) = ((MR_Box) (WordVarType_18));
      MR_hl_field(0, WordVarDefn_19, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, WordVarDefn_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *WordVarDefns_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (WordVarDefn_19));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      WordVarLval_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, WordVarLval_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, WordVarLval_20, 1) = ((MR_Box) (WordVar_17));
      MR_hl_field(3, WordVarLval_20, 2) = ((MR_Box) (WordVarType_18));
    }
    {
      CastWordRval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CastWordRval_21, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, CastWordRval_21, 1) = ((MR_Box) (WordVarType_18));
      MR_hl_field(3, CastWordRval_21, 2) = ((MR_Box) (WordRval_9));
    }
    WordAssignStmt_22 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_20, CastWordRval_21, Context_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *WordVarStmts_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (WordAssignStmt_22));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_gen_info__get_unfilled_filled_packed_words_4_p_0(HeadFilledBitfields_14, TailFilledBitfields_15, &PackedWord_23, &FilledPackedWord_24);
    {
      Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_40, 0) = ((MR_Box) (WordVarLval_20));
    }
    {
      Instance_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Instance_25, 0) = ((MR_Box) (FilledPackedWord_24));
      MR_hl_field(0, Instance_25, 1) = ((MR_Box) (Var_40));
    }
    ml_backend__ml_gen_info__ml_gen_info_get_packed_word_map_2_p_0(STATE_VARIABLE_Info_1_34, &PackedWordMap0_26);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4]), PackedWordMap0_26, ((MR_Box) (PackedWord_23)), &conv0_OldInstances_27);
    if (succeeded)
    {
      OldInstances_27 = ((MR_Word) (conv0_OldInstances_27));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word HeadOldInstance_28 = ((MR_Word) ((MR_hl_field(0, OldInstances_27, 0))));
      MR_Word TailOldInstances_29 = ((MR_Word) ((MR_hl_field(0, OldInstances_27, 1))));
      MR_Word NewInstances_30;
      MR_Word Var_41;

      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (HeadOldInstance_28));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (TailOldInstances_29));
      }
      {
        NewInstances_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewInstances_30, 0) = ((MR_Box) (Instance_25));
        MR_hl_field(0, NewInstances_30, 1) = ((MR_Box) (Var_41));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4]), ((MR_Box) (PackedWord_23)), ((MR_Box) (NewInstances_30)), PackedWordMap0_26, &PackedWordMap_31);
    }
    else
    {
      MR_Word Var_42;

      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = ((MR_Box) (Instance_25));
        MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4]), ((MR_Box) (PackedWord_23)), ((MR_Box) (Var_42)), PackedWordMap0_26, &PackedWordMap_31);
    }
    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(PackedWordMap_31, STATE_VARIABLE_Info_1_34, STATE_VARIABLE_Info_33);
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(
  MR_Word Info_11,
  MR_Word NonLocals_12,
  MR_Word FieldGen_13,
  MR_Word ArgVar_14,
  MR_Word CtorArgRepn_15,
  MR_Word ArgMode_16,
  MR_Integer ArgNum_17,
  MR_Word Context_18,
  MR_Word * FilledBitfields_19,
  MR_Word * Stmts_20)
{
  MR_Word MaybePrimaryTag_21 = ((MR_Word) ((MR_hl_field(0, FieldGen_13, 0))));
  MR_Word AddrRval_22 = ((MR_Word) ((MR_hl_field(0, FieldGen_13, 1))));
  MR_Word AddrType_23 = ((MR_Word) ((MR_hl_field(0, FieldGen_13, 2))));
  MR_Word FieldVia_24 = ((MR_Word) ((MR_hl_field(0, FieldGen_13, 3))));
  MR_Word ArgPosWidth_25 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_15, 3))));
  MR_Word FieldId_42;
  MR_Word ModuleInfo_52;
  MR_Word HighLevelData_53;
  MR_Word FieldWidth_54;
  MR_Word FieldRawType_55;
  MR_Word FieldType_56;
  MR_Word MLDS_FieldType_57;
  MR_Word FieldLval_58;
  MR_Word VarTable_59;
  MR_Word ArgVarEntry_60;
  MR_Word ArgLval_61;
  MR_Word ArgType_62;
  MR_Word Dir_63;
  MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_15, 0))));
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_15, 1))));

  if ((FieldVia_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CellOffsetInt_41;
    MR_Word Var_64;
    MR_Word Var_65;

    switch (MR_tag((MR_Word) ArgPosWidth_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CellOffsetInt_41 = (MR_Integer) -1;
        break;
      case (MR_Integer) 1:
        {
          MR_Word CellOffset_77 = ((MR_Word) ((MR_hl_field(1, ArgPosWidth_25, 1))));

          CellOffsetInt_41 = (MR_Integer) (CellOffset_77);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CellOffset_27 = ((MR_Word) ((MR_hl_field(2, ArgPosWidth_25, 1))));

          CellOffsetInt_41 = (MR_Integer) (CellOffset_27);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_25, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CellOffset_79 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_25, 2))));

              CellOffsetInt_41 = (MR_Integer) (CellOffset_79);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CellOffset_80 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_25, 2))));

              CellOffsetInt_41 = (MR_Integer) (CellOffset_80);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word CellOffset_78 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_25, 2))));

              CellOffsetInt_41 = (MR_Integer) (CellOffset_78);
            }
            break;
        }
        break;
    }
    {
      Var_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_65, 0) = ((MR_Box) (CellOffsetInt_41));
    }
    {
      Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
    }
    {
      FieldId_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FieldId_42, 0) = ((MR_Box) (Var_64));
    }
  }
  else
  {
    MR_Word FieldQualifier_43 = ((MR_Word) ((MR_hl_field(1, FieldVia_24, 0))));
    MR_Word ClassPtrType_44 = ((MR_Word) ((MR_hl_field(1, FieldVia_24, 1))));
    MR_Word FieldName_50;
    MR_Word QualifiedFieldName_51;

    FieldName_50 = ml_backend__ml_code_util__ml_gen_hld_field_name_3_f_0(Var_67, Var_68, ArgNum_17);
    {
      QualifiedFieldName_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, QualifiedFieldName_51, 0) = ((MR_Box) (FieldQualifier_43));
      MR_hl_field(0, QualifiedFieldName_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, QualifiedFieldName_51, 2) = ((MR_Box) (FieldName_50));
    }
    {
      FieldId_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FieldId_42, 0) = ((MR_Box) (QualifiedFieldName_51));
      MR_hl_field(1, FieldId_42, 1) = ((MR_Box) (ClassPtrType_44));
    }
  }
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_11, &ModuleInfo_52);
  ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_11, &HighLevelData_53);
  FieldWidth_54 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_25);
  FieldRawType_55 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_15, 2))));
  ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_52, HighLevelData_53, FieldRawType_55, FieldWidth_54, &FieldType_56);
  ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(Info_11, FieldType_56, &MLDS_FieldType_57);
  {
    FieldLval_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldLval_58, 0) = ((MR_Box) (MaybePrimaryTag_21));
    MR_hl_field(0, FieldLval_58, 1) = ((MR_Box) (AddrRval_22));
    MR_hl_field(0, FieldLval_58, 2) = ((MR_Box) (AddrType_23));
    MR_hl_field(0, FieldLval_58, 3) = ((MR_Box) (FieldId_42));
    MR_hl_field(0, FieldLval_58, 4) = ((MR_Box) (MLDS_FieldType_57));
  }
  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_11, &VarTable_59);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_59, ArgVar_14, &ArgVarEntry_60);
  ml_backend__ml_code_util__ml_gen_var_4_p_0(Info_11, ArgVar_14, ArgVarEntry_60, &ArgLval_61);
  ArgType_62 = ((MR_Word) ((MR_hl_field(0, ArgVarEntry_60, 1))));
  ml_backend__ml_unify_gen_util__ml_compute_assign_direction_7_p_0(ModuleInfo_52, NonLocals_12, ArgVar_14, ArgVarEntry_60, FieldType_56, ArgMode_16, &Dir_63);
  switch (Dir_63) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
      {
        *FilledBitfields_19 = (MR_Word) ((MR_Unsigned) 0U);
        *Stmts_20 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 0:
      {
        *FilledBitfields_19 = (MR_Word) ((MR_Unsigned) 0U);
        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_52, HighLevelData_53, FieldLval_58, FieldType_56, ArgLval_61, ArgType_62, ArgPosWidth_25, Context_18, Stmts_20);
      }
      break;
    case (MR_Integer) 1:
      ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_52, FieldLval_58, FieldType_56, ArgVar_14, ArgLval_61, ArgType_62, ArgPosWidth_25, Context_18, FilledBitfields_19, Stmts_20);
      break;
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
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ArgPosWidth_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_62;
        MR_Word RHSRval_72;
        MR_Word Stmt_73;

        {
          Var_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_62, 0) = ((MR_Box) (RHSLval_14));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_10, RHSType_15, LHSType_13, Var_62, &RHSRval_72);
        Stmt_73 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, RHSRval_72, Context_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_18 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_73));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RHSRval_22;
        MR_Word Var_52;
        MR_Word LHSLvalA_23;
        MR_Word LHSLvalB_24;

        {
          Var_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_52, 0) = ((MR_Box) (RHSLval_14));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_10, RHSType_15, LHSType_13, Var_52, &RHSRval_22);
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
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;

          {
            FloatWordA_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, FloatWordA_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, FloatWordA_25, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(3, FloatWordA_25, 2) = ((MR_Box) (RHSRval_22));
          }
          {
            FloatWordB_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, FloatWordB_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, FloatWordB_26, 1) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(3, FloatWordB_26, 2) = ((MR_Box) (RHSRval_22));
          }
          Var_55 = parse_tree__builtin_lib_types__int_type_0_f_0();
          ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_10, HighLevelData_11, Var_55, (MR_Integer) 2, &IntLHSType_27);
          Var_57 = parse_tree__builtin_lib_types__int_type_0_f_0();
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_10, Var_57, IntLHSType_27, FloatWordA_25, &RHSRvalA_28);
          Var_58 = parse_tree__builtin_lib_types__int_type_0_f_0();
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_10, Var_58, IntLHSType_27, FloatWordB_26, &RHSRvalB_29);
          StmtA_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLvalA_23, RHSRvalA_28, Context_17);
          StmtB_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLvalB_24, RHSRvalB_29, Context_17);
          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (StmtB_31));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (StmtA_30));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_59));
          }
        }
        else
        {
          MR_Word Stmt_32;

          Stmt_32 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, RHSRval_22, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_32));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_16, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Shift_37 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_16, 3))));
            MR_Word Mask_39 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_16, 5))));
            MR_Word Fill_40 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_16, 6))) & (MR_Integer) 7);
            MR_Integer ShiftInt_44;
            MR_Integer MaskInt_45;
            MR_Word CastLHSRVal_46;
            MR_Word OldLHSBits_47;
            MR_Word NewLHSBits_48;
            MR_Word UpdatedLHSBits_49;
            MR_Word Var_66;
            MR_Integer Var_67;
            MR_Integer Var_68;
            MR_Word Var_70;
            MR_Word RHSRval_74;
            MR_Word Stmt_75;

            {
              RHSRval_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, RHSRval_74, 0) = ((MR_Box) (RHSLval_14));
            }
            ShiftInt_44 = (MR_Integer) (Shift_37);
            MaskInt_45 = (MR_Integer) (Mask_39);
            {
              Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_66, 0) = ((MR_Box) (LHSLval_12));
            }
            {
              CastLHSRVal_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CastLHSRVal_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, CastLHSRVal_46, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6])));
              MR_hl_field(3, CastLHSRVal_46, 2) = ((MR_Box) (Var_66));
            }
            Var_68 = mercury__int__f_60_60_2_f_0(MaskInt_45, ShiftInt_44);
            Var_67 = ~(Var_68);
            OldLHSBits_47 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(CastLHSRVal_46, Var_67);
            NewLHSBits_48 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(RHSRval_74, Shift_37, Fill_40);
            Var_70 = ml_backend__ml_unify_gen_util__ml_bitwise_or_two_rvals_2_f_0(OldLHSBits_47, NewLHSBits_48);
            {
              UpdatedLHSBits_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, UpdatedLHSBits_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, UpdatedLHSBits_49, 1) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, UpdatedLHSBits_49, 2) = ((MR_Box) (Var_70));
            }
            Stmt_75 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, UpdatedLHSBits_49, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_75));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_76 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_16, 3))));
            MR_Word Mask_77 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_16, 5))));
            MR_Word Fill_78 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_16, 6))) & (MR_Integer) 7);
            MR_Integer ShiftInt_79;
            MR_Integer MaskInt_80;
            MR_Word CastLHSRVal_81;
            MR_Word OldLHSBits_82;
            MR_Word NewLHSBits_83;
            MR_Word UpdatedLHSBits_84;
            MR_Word Var_86;
            MR_Integer Var_87;
            MR_Integer Var_88;
            MR_Word Var_90;
            MR_Word RHSRval_92;
            MR_Word Stmt_93;

            {
              RHSRval_92 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, RHSRval_92, 0) = ((MR_Box) (RHSLval_14));
            }
            ShiftInt_79 = (MR_Integer) (Shift_76);
            MaskInt_80 = (MR_Integer) (Mask_77);
            {
              Var_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_86, 0) = ((MR_Box) (LHSLval_12));
            }
            {
              CastLHSRVal_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CastLHSRVal_81, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, CastLHSRVal_81, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6])));
              MR_hl_field(3, CastLHSRVal_81, 2) = ((MR_Box) (Var_86));
            }
            Var_88 = mercury__int__f_60_60_2_f_0(MaskInt_80, ShiftInt_79);
            Var_87 = ~(Var_88);
            OldLHSBits_82 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(CastLHSRVal_81, Var_87);
            NewLHSBits_83 = ml_backend__ml_unify_gen_util__ml_left_shift_rval_3_f_0(RHSRval_92, Shift_76, Fill_78);
            Var_90 = ml_backend__ml_unify_gen_util__ml_bitwise_or_two_rvals_2_f_0(OldLHSBits_82, NewLHSBits_83);
            {
              UpdatedLHSBits_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, UpdatedLHSBits_84, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, UpdatedLHSBits_84, 1) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, UpdatedLHSBits_84, 2) = ((MR_Box) (Var_90));
            }
            Stmt_93 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(LHSLval_12, UpdatedLHSBits_84, Context_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_93));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_field_offset_pair_3_p_0(
  MR_Word FieldLval_4,
  MR_Word * FieldLvalA_5,
  MR_Word * FieldLvalB_6)
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
    Ptag_7 = ((MR_Word) ((MR_hl_field(0, FieldLval_4, 0))));
    PtrRval_8 = ((MR_Word) ((MR_hl_field(0, FieldLval_4, 1))));
    PtrType_9 = ((MR_Word) ((MR_hl_field(0, FieldLval_4, 2))));
    FieldIdA_10 = ((MR_Word) ((MR_hl_field(0, FieldLval_4, 3))));
    succeeded = ((MR_tag((MR_Word) FieldIdA_10)) == (MR_Integer) 0);
    if (succeeded)
    {
      FieldOffsetA_12 = ((MR_Word) ((MR_hl_field(0, FieldIdA_10, 0))));
      succeeded = ((((MR_tag((MR_Word) FieldOffsetA_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldOffsetA_12, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(3, FieldOffsetA_12, 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
          Offset_13 = ((MR_Integer) ((MR_hl_field(2, Var_16, 0))));
      }
      if (succeeded)
      {
        MR_Word FieldIdB_14;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Offset_13 + (MR_Unsigned) 1);

        {
          Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_18, 0) = ((MR_Box) (Var_19));
        }
        {
          Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_17, 1) = ((MR_Box) (Var_18));
        }
        {
          FieldIdB_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FieldIdB_14, 0) = ((MR_Box) (Var_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *FieldLvalA_5 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Ptag_7));
          MR_hl_field(0, base, 1) = ((MR_Box) (PtrRval_8));
          MR_hl_field(0, base, 2) = ((MR_Box) (PtrType_9));
          MR_hl_field(0, base, 3) = ((MR_Box) (FieldIdA_10));
          MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 20U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *FieldLvalB_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Ptag_7));
          MR_hl_field(0, base, 1) = ((MR_Box) (PtrRval_8));
          MR_hl_field(0, base, 2) = ((MR_Box) (PtrType_9));
          MR_hl_field(0, base, 3) = ((MR_Box) (FieldIdB_14));
          MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 20U));
        }
      }
      else
        mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_field_offset_pair\'/3", (MR_String) "unexpected field offset");
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
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
        MR_Word Var_47;
        MR_Word LHSRval_54;
        MR_Word Stmt_55;

        *FilledBitfields_19 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_47, 0) = ((MR_Box) (LHSLval_12));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_11, LHSType_13, RHSType_16, Var_47, &LHSRval_54);
        Stmt_55 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, LHSRval_54, Context_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_55));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LHSRval_26;
        MR_Word Stmt_27;
        MR_Word LHSLvalA_24;
        MR_Word LHSLvalB_25;
        MR_Word Ptag_69;
        MR_Word PtrRval_70;
        MR_Word PtrType_71;
        MR_Word FieldIdA_72;
        MR_Word FieldOffsetA_74;
        MR_Integer Offset_75;
        MR_Word Var_78;

        *FilledBitfields_19 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = ((MR_tag((MR_Word) LHSLval_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Ptag_69 = ((MR_Word) ((MR_hl_field(0, LHSLval_12, 0))));
          PtrRval_70 = ((MR_Word) ((MR_hl_field(0, LHSLval_12, 1))));
          PtrType_71 = ((MR_Word) ((MR_hl_field(0, LHSLval_12, 2))));
          FieldIdA_72 = ((MR_Word) ((MR_hl_field(0, LHSLval_12, 3))));
          succeeded = ((MR_tag((MR_Word) FieldIdA_72)) == (MR_Integer) 0);
          if (succeeded)
          {
            FieldOffsetA_74 = ((MR_Word) ((MR_hl_field(0, FieldIdA_72, 0))));
            succeeded = ((((MR_tag((MR_Word) FieldOffsetA_74)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldOffsetA_74, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_78 = ((MR_Word) ((MR_hl_field(3, FieldOffsetA_74, 1))));
              succeeded = ((MR_tag((MR_Word) Var_78)) == (MR_Integer) 2);
              if (succeeded)
                Offset_75 = ((MR_Integer) ((MR_hl_field(2, Var_78, 0))));
            }
            if (succeeded)
            {
              MR_Word FieldIdB_76;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Integer Var_81 = (MR_Integer) ((MR_Unsigned) Offset_75 + (MR_Unsigned) 1);

              {
                Var_80 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_80, 0) = ((MR_Box) (Var_81));
              }
              {
                Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_79, 1) = ((MR_Box) (Var_80));
              }
              {
                FieldIdB_76 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FieldIdB_76, 0) = ((MR_Box) (Var_79));
              }
              {
                LHSLvalA_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, LHSLvalA_24, 0) = ((MR_Box) (Ptag_69));
                MR_hl_field(0, LHSLvalA_24, 1) = ((MR_Box) (PtrRval_70));
                MR_hl_field(0, LHSLvalA_24, 2) = ((MR_Box) (PtrType_71));
                MR_hl_field(0, LHSLvalA_24, 3) = ((MR_Box) (FieldIdA_72));
                MR_hl_field(0, LHSLvalA_24, 4) = ((MR_Box) ((MR_Unsigned) 20U));
              }
              {
                LHSLvalB_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, LHSLvalB_25, 0) = ((MR_Box) (Ptag_69));
                MR_hl_field(0, LHSLvalB_25, 1) = ((MR_Box) (PtrRval_70));
                MR_hl_field(0, LHSLvalB_25, 2) = ((MR_Box) (PtrType_71));
                MR_hl_field(0, LHSLvalB_25, 3) = ((MR_Box) (FieldIdB_76));
                MR_hl_field(0, LHSLvalB_25, 4) = ((MR_Box) ((MR_Unsigned) 20U));
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
          MR_Word Var_43;
          MR_Word Var_44;

          {
            Var_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_43, 0) = ((MR_Box) (LHSLvalA_24));
          }
          {
            Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_44, 0) = ((MR_Box) (LHSLvalB_25));
          }
          {
            LHSRval_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, LHSRval_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, LHSRval_26, 1) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(3, LHSRval_26, 2) = ((MR_Box) (Var_43));
            MR_hl_field(3, LHSRval_26, 3) = ((MR_Box) (Var_44));
          }
        }
        else
        {
          MR_Word Var_45;

          {
            Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_45, 0) = ((MR_Box) (LHSLval_12));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_11, LHSType_13, RHSType_16, Var_45, &LHSRval_26);
        }
        Stmt_27 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, LHSRval_26, Context_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_20 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_27));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_17, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Shift_32 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_17, 3))));
            MR_Word NumBits_33 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_17, 4))));
            MR_Word Mask_34 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_17, 5))));
            MR_Word Fill_35 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_17, 6))) & (MR_Integer) 7);
            MR_Word Bitfield_38;
            MR_Word ToAssignRval_39;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_52;
            MR_Word Stmt_56;
            MR_Word UnsignedWordRval_85;
            MR_Integer MaskInt_86;
            MR_Word MaskedRval_87;
            MR_Word Var_92;

            {
              Bitfield_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Bitfield_38, 0) = ((MR_Box) (Shift_32));
              MR_hl_field(0, Bitfield_38, 1) = ((MR_Box) (NumBits_33));
              MR_hl_field(0, Bitfield_38, 2) = (MR_Box) ((MR_Unsigned) (Fill_35));
            }
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_50, 0) = ((MR_Box) (RHSVar_14));
            }
            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_49, 0) = ((MR_Box) (Bitfield_38));
              MR_hl_field(0, Var_49, 1) = ((MR_Box) (Var_50));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *FilledBitfields_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_52, 0) = ((MR_Box) (LHSLval_12));
            }
            {
              UnsignedWordRval_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, UnsignedWordRval_85, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, UnsignedWordRval_85, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6])));
              MR_hl_field(3, UnsignedWordRval_85, 2) = ((MR_Box) (Var_52));
            }
            MaskInt_86 = (MR_Integer) (Mask_34);
            Var_92 = ml_backend__ml_unify_gen_util__ml_right_shift_rval_2_f_0(UnsignedWordRval_85, Shift_32);
            MaskedRval_87 = ml_backend__ml_unify_gen_util__ml_bitwise_mask_2_f_0(Var_92, MaskInt_86);
            switch (Fill_35) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 7:
              case (MR_Integer) 0:
                ToAssignRval_39 = MaskedRval_87;
                break;
              case (MR_Integer) 2:
                {
                  ToAssignRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_39, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[11])));
                  MR_hl_field(3, ToAssignRval_39, 2) = ((MR_Box) (MaskedRval_87));
                }
                break;
              case (MR_Integer) 3:
                {
                  ToAssignRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_39, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[12])));
                  MR_hl_field(3, ToAssignRval_39, 2) = ((MR_Box) (MaskedRval_87));
                }
                break;
              case (MR_Integer) 1:
                {
                  ToAssignRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_39, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[13])));
                  MR_hl_field(3, ToAssignRval_39, 2) = ((MR_Box) (MaskedRval_87));
                }
                break;
              case (MR_Integer) 5:
                {
                  ToAssignRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_39, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[14])));
                  MR_hl_field(3, ToAssignRval_39, 2) = ((MR_Box) (MaskedRval_87));
                }
                break;
              case (MR_Integer) 6:
                {
                  ToAssignRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_39, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[15])));
                  MR_hl_field(3, ToAssignRval_39, 2) = ((MR_Box) (MaskedRval_87));
                }
                break;
              case (MR_Integer) 4:
                {
                  ToAssignRval_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, ToAssignRval_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, ToAssignRval_39, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[16])));
                  MR_hl_field(3, ToAssignRval_39, 2) = ((MR_Box) (MaskedRval_87));
                }
                break;
            }
            Stmt_56 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, ToAssignRval_39, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_56));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_57 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_17, 3))));
            MR_Word NumBits_58 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_17, 4))));
            MR_Word Mask_59 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_17, 5))));
            MR_Word Fill_60 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_17, 6))) & (MR_Integer) 7);
            MR_Word Bitfield_61;
            MR_Word ToAssignRval_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_66;
            MR_Word Stmt_68;

            {
              Bitfield_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Bitfield_61, 0) = ((MR_Box) (Shift_57));
              MR_hl_field(0, Bitfield_61, 1) = ((MR_Box) (NumBits_58));
              MR_hl_field(0, Bitfield_61, 2) = (MR_Box) ((MR_Unsigned) (Fill_60));
            }
            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_64, 0) = ((MR_Box) (RHSVar_14));
            }
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (Bitfield_61));
              MR_hl_field(0, Var_63, 1) = ((MR_Box) (Var_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *FilledBitfields_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_63));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_66, 0) = ((MR_Box) (LHSLval_12));
            }
            ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(Var_66, Shift_57, Mask_59, Fill_60, &ToAssignRval_62);
            Stmt_68 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(RHSLval_15, ToAssignRval_62, Context_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Stmt_68));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(
  MR_Word WordRval_6,
  MR_Word Shift_7,
  MR_Word Mask_8,
  MR_Word Fill_9,
  MR_Word * Rval_10)
{
  MR_Word UnsignedWordRval_11;
  MR_Integer MaskInt_12;
  MR_Word MaskedRval_13;
  MR_Word Var_18;

  {
    UnsignedWordRval_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, UnsignedWordRval_11, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, UnsignedWordRval_11, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6])));
    MR_hl_field(3, UnsignedWordRval_11, 2) = ((MR_Box) (WordRval_6));
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
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Rval_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[11])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval_13));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Rval_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[12])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval_13));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Rval_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[13])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval_13));
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Rval_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[14])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval_13));
      }
      break;
    case (MR_Integer) 6:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Rval_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[15])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval_13));
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Rval_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[16])));
        MR_hl_field(3, base, 2) = ((MR_Box) (MaskedRval_13));
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unify_gen_deconstruct____Unify____do_all_partials_assign_right_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unify_gen_deconstruct____Compare____do_all_partials_assign_right_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_unify_gen_deconstruct____Unify____take_addr_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_unify_gen_deconstruct____Compare____take_addr_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
