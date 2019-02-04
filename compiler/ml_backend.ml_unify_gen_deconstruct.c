/*
** Automatically generated from `ml_unify_gen_deconstruct.m'
** by the Mercury compiler,
** version rotd-2018-07-10
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
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__416__2_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_117);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__416__1_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_117);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__243__2_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__243__1_2_p_0(
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
  MR_Word Mode_20,
  MR_Word ArgVarRepns_21,
  MR_Word Modes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word TakeAddr_28,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65);

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

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_6_p_0(
  MR_Word Info_7,
  MR_Word Mode_8,
  MR_Word ArgVar_9,
  MR_Word Var_10,
  MR_Word Context_11,
  MR_Word * Stmts_12);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word Ptag_9,
  MR_Word Mode_10,
  MR_Word ArgVar_11,
  MR_Word Var_12,
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
  MR_Word Mode_15,
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
  MR_Word Mode_20,
  MR_Word ArgVarRepns_21,
  MR_Word Modes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65);

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
  MR_Word Mode_14,
  MR_Integer ArgNum_15,
  MR_Word Context_16,
  MR_Word * PackedArgVars_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57);

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word HighLevelData_11,
  MR_Word FieldLval_12,
  MR_Word FieldType_13,
  MR_Word ArgPosWidth_14,
  MR_Word ArgLval_15,
  MR_Word ArgType_16,
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
  MR_Word FieldLval_12,
  MR_Word FieldType_13,
  MR_Word ArgPosWidth_14,
  MR_Word ArgVar_15,
  MR_Word ArgLval_16,
  MR_Word ArgType_17,
  MR_Word Context_18,
  MR_Word * PackedArgVars_19,
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


static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6][2];

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_2[2][5];




static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ml_backend__ml_unify_gen_deconstruct_scalar_common_2[2][5] = {
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
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__416__2_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_117)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), ((MR_Box) (HeadPackedArgVars_89)), ((MR_Box) (HeadVar__2_117)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__416__1_2_p_0(
  MR_Word HeadPackedArgVars_89,
  MR_Word HeadVar__2_117)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), ((MR_Box) (HeadPackedArgVars_89)), ((MR_Box) (HeadVar__2_117)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__243__2_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), ((MR_Box) (TakeAddr_6)), ((MR_Box) (HeadVar__2_22)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__243__1_2_p_0(
  MR_Word TakeAddr_6,
  MR_Word HeadVar__2_22)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[1]), ((MR_Box) (TakeAddr_6)), ((MR_Box) (HeadVar__2_22)));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[0]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__243__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 0))));
        MR_Word CtorArgRepn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 1))));
        MR_Integer NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word ArgPosWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_64, (MR_Integer) 2))));
        MR_Word TailTakeAddr_67;
        MR_Integer Var_109;

        succeeded = ((MR_tag((MR_Word) TakeAddr_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_109 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TakeAddr_6, (MR_Integer) 0))));
          TailTakeAddr_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TakeAddr_6, (MR_Integer) 1))));
          succeeded = (CurArgNum_4 == Var_109);
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
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, Var_110, Modes_55, NextArgNum_65, Context_5, TailTakeAddr_67, &TakeAddrInfosTail_72, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
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
          MR_Word FieldVia_81;

          succeeded = ((((MR_tag((MR_Word) ArgPosWidth_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 0))) == (MR_Integer) 0)));
          if (succeeded)
          {
            FieldVia_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
            succeeded = (FieldVia_81 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            MR_Word LeftOverArgVarRepns_82;
            MR_Word LeftOverModes_83;
            MR_Integer LeftOverArgNum_84;
            MR_Word HeadDefns_85;
            MR_Word HeadStmts_86;
            MR_Word TailDefns_87;
            MR_Word TailStmts_88;
            MR_Word STATE_VARIABLE_Info_96_96;

            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_16_p_1(FieldGen_1, ArgVar_63, CtorArgRepn_64, Mode_54, Var_110, Modes_55, &LeftOverArgVarRepns_82, &LeftOverModes_83, CurArgNum_4, &LeftOverArgNum_84, Context_5, TakeAddr_6, &HeadDefns_85, &HeadStmts_86, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_96_96);
            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, LeftOverArgVarRepns_82, LeftOverModes_83, LeftOverArgNum_84, Context_5, TakeAddr_6, HeadVar__7_7, &TailDefns_87, &TailStmts_88, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_11);
            *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_85, TailDefns_87);
            *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_86, TailStmts_88);
          }
          else
          {
            MR_Word STATE_VARIABLE_Info_98_98;
            MR_Word HeadStmts_100;
            MR_Word TailStmts_101;
            MR_Word _PackedArgVars_89;

            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, Mode_54, CurArgNum_4, Context_5, &_PackedArgVars_89, &HeadStmts_100, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_98_98);
            ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_1(FieldGen_1, Var_110, Modes_55, NextArgNum_65, Context_5, TakeAddr_6, HeadVar__7_7, HeadVar__8_8, &TailStmts_101, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_11);
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
  MR_Word Mode_20,
  MR_Word ArgVarRepns_21,
  MR_Word Modes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word TakeAddr_28,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65)
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
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_68_68;

    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_17, ArgVar_18, CtorArgRepn_19, Mode_20, CurArgNum_25, Context_27, &HeadPackedArgVars_32, &HeadStmts_33, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_66_66);
    if ((HeadPackedArgVars_32 == (MR_Word) ((MR_Unsigned) 0U)))
      AllPartialsRight0_34 = (MR_Integer) 0;
    else
      AllPartialsRight0_34 = (MR_Integer) 1;
    NextArgNum_37 = (MR_Integer) ((MR_Unsigned) CurArgNum_25 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(FieldGen_17, ArgVarRepns_21, Modes_22, LeftOverArgVarRepns_23, LeftOverModes_24, NextArgNum_37, LeftOverArgNum_26, Context_27, TakeAddr_28, AllPartialsRight0_34, &AllPartialsRight_38, &TailPackedArgVars_39, &TailStmts_40, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_68_68);
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
          MR_Integer CellOffsetInt_52;
          MR_Word FieldId_53;
          MR_Word MaybePtag_54;
          MR_Word AddrRval_55;
          MR_Word AddrType_56;
          MR_Word FieldLval_58;
          MR_Word CastFieldRval_59;
          MR_Word WordVarLval_60;
          MR_Word WordAssignStmt_61;
          MR_Word PackedArgsMap0_62;
          MR_Word PackedArgsMap_63;
          MR_Word STATE_VARIABLE_Info_69_69;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word CellOffset_48;

          PackedArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_32, TailPackedArgVars_39);
          ml_backend__ml_gen_info__ml_gen_info_new_packed_args_var_3_p_0(&WordCompVar_42, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_69_69);
          {
            WordVar_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVar_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
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
            CellOffsetInt_52 = (MR_Integer) (CellOffset_48);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word\'/16", (MR_String) "no apw_partial_first");
              return;
            }
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (CellOffsetInt_52));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
          }
          {
            FieldId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_53, 0) = ((MR_Box) (Var_75));
          }
          MaybePtag_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 0))));
          AddrRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 1))));
          AddrType_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 2))));
          {
            FieldLval_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_58, 0) = ((MR_Box) (MaybePtag_54));
            MR_hl_field(MR_mktag(0), FieldLval_58, 1) = ((MR_Box) (AddrRval_55));
            MR_hl_field(MR_mktag(0), FieldLval_58, 2) = ((MR_Box) (AddrType_56));
            MR_hl_field(MR_mktag(0), FieldLval_58, 3) = ((MR_Box) (FieldId_53));
            MR_hl_field(MR_mktag(0), FieldLval_58, 4) = ((MR_Box) ((MR_Unsigned) 24U));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (FieldLval_58));
          }
          {
            CastFieldRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 1) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 2) = ((MR_Box) (Var_78));
          }
          {
            WordVarLval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 1) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 2) = ((MR_Box) (UnsignedType_44));
          }
          WordAssignStmt_61 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_60, CastFieldRval_59, Context_27);
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (WordAssignStmt_61));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (HeadStmts_33));
          }
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_79, TailStmts_40);
          ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(STATE_VARIABLE_Info_69_69, &PackedArgsMap0_62);
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (WordVarLval_60));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (PackedArgVars_41)), ((MR_Box) (Var_80)), PackedArgsMap0_62, &PackedArgsMap_63);
          ml_backend__ml_gen_info__ml_gen_info_set_packed_args_map_3_p_0(PackedArgsMap_63, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_65);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_29 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_33, TailStmts_40);
          *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_68_68;
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__416__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 0))));
        MR_Word CtorArgRepn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 1))));
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
                  MR_Word HeadPackedArgVars_141;
                  MR_Word HeadStmts_142;
                  MR_Integer NextArgNum_144;
                  MR_Word TailPackedArgVars_145;
                  MR_Word TailStmts_146;
                  MR_Word STATE_VARIABLE_Info_118_147;
                  MR_Word STATE_VARIABLE_AllPartialsRight_119_148;
                  MR_Integer Var_134;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, Mode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_141, &HeadStmts_142, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_118_147);
                  if ((HeadPackedArgVars_141 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AllPartialsRight_119_148 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_119_148 = STATE_VARIABLE_AllPartialsRight_0_10;
                  succeeded = ((MR_tag((MR_Word) HeadVar__9_9)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
                    succeeded = (CurArgNum_6 == Var_134);
                  }
                  if (succeeded)
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  }
                  NextArgNum_144 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(HeadVar__1_1, Var_155, Modes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_144, LeftOverArgNum_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_119_148, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_145, &TailStmts_146, STATE_VARIABLE_Info_118_147, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_141, TailPackedArgVars_145);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_142, TailStmts_146);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadPackedArgVars_89;
                  MR_Word HeadStmts_90;
                  MR_Integer NextArgNum_96;
                  MR_Word TailPackedArgVars_97;
                  MR_Word TailStmts_98;
                  MR_Word Var_114;
                  MR_Word STATE_VARIABLE_Info_118_118;
                  MR_Integer Var_131;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, Mode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_89, &HeadStmts_90, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_118_118);
                  {
                    Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1_1));
                    MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (HeadPackedArgVars_89));
                    MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "HeadPackedArgVars != [] for apw_none_shifted");
                  succeeded = ((MR_tag((MR_Word) HeadVar__9_9)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
                    succeeded = (CurArgNum_6 == Var_131);
                  }
                  if (succeeded)
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "taking address of something other than a full word");
                      return;
                    }
                  }
                  NextArgNum_96 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_in_word_loop_15_p_1(HeadVar__1_1, Var_155, Modes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_96, LeftOverArgNum_7, HeadVar__8_8, HeadVar__9_9, STATE_VARIABLE_AllPartialsRight_0_10, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_97, &TailStmts_98, STATE_VARIABLE_Info_118_118, STATE_VARIABLE_Info_15);
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
ml_backend__ml_unify_gen_deconstruct__ml_gen_semi_deconstruct_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word ArgVars_12,
  MR_Word ArgModes_13,
  MR_Word Context_14,
  MR_Word * Defns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_Word TagTestRval_18;
    MR_Word SetTagTestResult_19;
    MR_Word SucceededRval_20;
    MR_Word GetArgsStmts_21;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_30_30;

    ml_backend__ml_unify_gen_test__ml_gen_tag_test_5_p_0(Var_10, ConsId_11, &TagTestRval_18, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_28_28);
    ml_backend__ml_code_util__ml_gen_set_success_5_p_0(TagTestRval_18, Context_14, &SetTagTestResult_19, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_29_29);
    ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&SucceededRval_20, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_30_30);
    ml_backend__ml_unify_gen_deconstruct__ml_gen_det_deconstruct_9_p_0(Var_10, ConsId_11, ArgVars_12, ArgModes_13, Context_14, Defns_15, &GetArgsStmts_21, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_27);
    if ((GetArgsStmts_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word GetArgs_24;
      MR_Word IfStmt_25;
      MR_Word Var_35;

      GetArgs_24 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), GetArgsStmts_21, Context_14);
      {
        IfStmt_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), IfStmt_25, 0) = ((MR_Box) (SucceededRval_20));
        MR_hl_field(MR_mktag(2), IfStmt_25, 1) = ((MR_Box) (GetArgs_24));
        MR_hl_field(MR_mktag(2), IfStmt_25, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), IfStmt_25, 3) = ((MR_Box) (Context_14));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (IfStmt_25));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetTagTestResult_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_35));
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_det_deconstruct_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word ArgVars_12,
  MR_Word Modes_13,
  MR_Word Context_14,
  MR_Word * Defns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_74,
  MR_Word * STATE_VARIABLE_Info_75)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_18;

    ml_backend__ml_unify_gen_util__ml_cons_id_to_tag_3_p_0(STATE_VARIABLE_Info_0_74, ConsId_11, &ConsTag_18);
    switch (MR_tag((MR_Word) ConsTag_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarType_51;
              MR_Word VarLval_52;
              MR_Word FieldGen_53;
              MR_Word InitOffSet_55;
              MR_Integer ArgNum_56;
              MR_Word ArgVarRepns_57;
              MR_Word Var_54;
              MR_Word Var_58;

              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_74, Var_10, &VarType_51);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_74, Var_10, &VarLval_52);
              ml_backend__ml_unify_gen_util__decide_field_gen_6_p_0(STATE_VARIABLE_Info_0_74, VarLval_52, VarType_51, ConsId_11, ConsTag_18, &FieldGen_53);
              ml_backend__ml_unify_gen_util__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_18, &Var_54, &InitOffSet_55, &ArgNum_56);
              ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_74, VarType_51, ConsId_11, InitOffSet_55, ArgVars_12, &ArgVarRepns_57);
              ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_53, ArgVarRepns_57, Modes_13, ArgNum_56, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_58, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_74, STATE_VARIABLE_Info_75);
            }
            break;
          case (MR_Integer) 1:
            {
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_75 = STATE_VARIABLE_Info_0_74;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_46;
              MR_Word Mode_47;
              MR_Word Var_92;
              MR_Word Var_93;

              succeeded = ((MR_tag((MR_Word) ArgVars_12)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgVar_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 0))));
                Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 1))));
                succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_13)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Mode_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0))));
                    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1))));
                    succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
              {
                ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_6_p_0(STATE_VARIABLE_Info_0_74, Mode_47, ArgVar_46, Var_10, Context_14, Stmts_16);
                *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_det_deconstruct\'/9", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_75 = STATE_VARIABLE_Info_0_74;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_75 = STATE_VARIABLE_Info_0_74;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 13:
            {
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *Stmts_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_75 = STATE_VARIABLE_Info_0_74;
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_det_deconstruct\'/9", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
          case (MR_Integer) 15:
            {
              MR_Word VarType_51;
              MR_Word VarLval_52;
              MR_Word FieldGen_53;
              MR_Word InitOffSet_55;
              MR_Integer ArgNum_56;
              MR_Word ArgVarRepns_57;
              MR_Word Var_54;
              MR_Word Var_58;

              ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_74, Var_10, &VarType_51);
              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_74, Var_10, &VarLval_52);
              ml_backend__ml_unify_gen_util__decide_field_gen_6_p_0(STATE_VARIABLE_Info_0_74, VarLval_52, VarType_51, ConsId_11, ConsTag_18, &FieldGen_53);
              ml_backend__ml_unify_gen_util__ml_tag_initial_offset_and_argnum_4_p_0(ConsTag_18, &Var_54, &InitOffSet_55, &ArgNum_56);
              ml_backend__ml_unify_gen_util__ml_field_names_and_types_6_p_0(STATE_VARIABLE_Info_0_74, VarType_51, ConsId_11, InitOffSet_55, ArgVars_12, &ArgVarRepns_57);
              ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_53, ArgVarRepns_57, Modes_13, ArgNum_56, Context_14, (MR_Word) ((MR_Unsigned) 0U), &Var_58, Defns_15, Stmts_16, STATE_VARIABLE_Info_0_74, STATE_VARIABLE_Info_75);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Ptag_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_18, (MR_Integer) 1))));
              MR_Word ArgVar_98;
              MR_Word Mode_99;
              MR_Word Var_88;
              MR_Word Var_89;

              succeeded = ((MR_tag((MR_Word) ArgVars_12)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgVar_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 0))));
                Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_12, (MR_Integer) 1))));
                succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_13)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Mode_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0))));
                    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1))));
                    succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
              {
                ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(STATE_VARIABLE_Info_0_74, Ptag_48, Mode_99, ArgVar_98, Var_10, Context_14, Stmts_16);
                *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_det_deconstruct\'/9", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_Info_75 = STATE_VARIABLE_Info_0_74;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ModuleInfo_61;
              MR_Word ConsRepnDefn_62;
              MR_Word CtorArgRepns_63;
              MR_Word ToOrRvals_64;
              MR_Unsigned ToOrMask_65;
              MR_Word RightStmts_66;
              MR_Word Var_76;
              MR_Word VarLval_103;
              MR_Word ArgVarRepns_104;

              ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_74, Var_10, &VarLval_103);
              ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_74, &ModuleInfo_61);
              check_hlds__type_util__get_cons_repn_defn_det_3_p_0(ModuleInfo_61, ConsId_11, &ConsRepnDefn_62);
              CtorArgRepns_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_62, (MR_Integer) 4))));
              mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgVars_12, CtorArgRepns_63, &ArgVarRepns_104);
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (VarLval_103));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_10_p_0(STATE_VARIABLE_Info_0_74, Var_76, ArgVarRepns_104, Modes_13, Context_14, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_64, (MR_Unsigned) 0U, &ToOrMask_65, &RightStmts_66);
              if ((ToOrRvals_64 == (MR_Word) ((MR_Unsigned) 0U)))
                *Stmts_16 = RightStmts_66;
              else
              {
                MR_Word HeadToOrRval_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_64, (MR_Integer) 0))));
                MR_Word TailToOrRvals_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_64, (MR_Integer) 1))));
                MR_Word ComplementMask_69;
                MR_Word MaskedOldVarRval_70;
                MR_Word ToOrRval_71;
                MR_Word NewVarRval_72;
                MR_Word LeftStmt_73;
                MR_Word Var_79;
                MR_Unsigned Var_80 = ~(ToOrMask_65);

                {
                  Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Var_80));
                }
                {
                  ComplementMask_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ComplementMask_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ComplementMask_69, 1) = ((MR_Box) (Var_79));
                }
                {
                  MaskedOldVarRval_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), MaskedOldVarRval_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), MaskedOldVarRval_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[4])));
                  MR_hl_field(MR_mktag(3), MaskedOldVarRval_70, 2) = ((MR_Box) (Var_76));
                  MR_hl_field(MR_mktag(3), MaskedOldVarRval_70, 3) = ((MR_Box) (ComplementMask_69));
                }
                ml_backend__ml_unify_gen_util__or_rvals_3_p_0(HeadToOrRval_67, TailToOrRvals_68, &ToOrRval_71);
                {
                  NewVarRval_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), NewVarRval_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), NewVarRval_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[5])));
                  MR_hl_field(MR_mktag(3), NewVarRval_72, 2) = ((MR_Box) (MaskedOldVarRval_70));
                  MR_hl_field(MR_mktag(3), NewVarRval_72, 3) = ((MR_Box) (ToOrRval_71));
                }
                LeftStmt_73 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_103, NewVarRval_72, Context_14);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftStmt_73));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RightStmts_66));
                }
              }
              *Defns_15 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_75 = STATE_VARIABLE_Info_0_74;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_no_tag_6_p_0(
  MR_Word Info_7,
  MR_Word Mode_8,
  MR_Word ArgVar_9,
  MR_Word Var_10,
  MR_Word Context_11,
  MR_Word * Stmts_12)
{
  {
    MR_Word ArgType_13;
    MR_Word VarType_14;
    MR_Word ArgLval_15;
    MR_Word VarLval_16;
    MR_Word ModuleInfo_17;
    MR_Word HighLevelData_18;
    MR_Word ArgPosWidth_19;
    MR_Word Dir_20;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_7, ArgVar_9, &ArgType_13);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_7, Var_10, &VarType_14);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_7, ArgVar_9, &ArgLval_15);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_7, Var_10, &VarLval_16);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_7, &ModuleInfo_17);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(Info_7, &HighLevelData_18);
    ArgPosWidth_19 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_unify_gen_deconstruct_scalar_common_1[3]));
    ml_backend__ml_unify_gen_util__compute_assign_direction_5_p_0(ModuleInfo_17, Mode_8, ArgType_13, VarType_14, &Dir_20);
    switch (Dir_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        *Stmts_12 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_17, HighLevelData_18, VarLval_16, VarType_14, ArgPosWidth_19, ArgLval_15, ArgType_13, Context_11, Stmts_12);
        break;
      case (MR_Integer) 1:
        {
          MR_Word _PackedArgVars_21;

          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_17, VarLval_16, VarType_14, ArgPosWidth_19, ArgVar_9, ArgLval_15, ArgType_13, Context_11, &_PackedArgVars_21, Stmts_12);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_direct_arg_7_p_0(
  MR_Word Info_8,
  MR_Word Ptag_9,
  MR_Word Mode_10,
  MR_Word ArgVar_11,
  MR_Word Var_12,
  MR_Word Context_13,
  MR_Word * Stmts_14)
{
  {
    MR_Word ArgType_15;
    MR_Word VarType_16;
    MR_Word ArgLval_17;
    MR_Word VarLval_18;
    MR_Word ModuleInfo_19;
    MR_Word Dir_20;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_8, ArgVar_11, &ArgType_15);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(Info_8, Var_12, &VarType_16);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_8, ArgVar_11, &ArgLval_17);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(Info_8, Var_12, &VarLval_18);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_8, &ModuleInfo_19);
    ml_backend__ml_unify_gen_util__compute_assign_direction_5_p_0(ModuleInfo_19, Mode_10, ArgType_15, VarType_16, &Dir_20);
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
          MR_Word ArgRval_27;
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word MLDS_Type_41;
          MR_Word CastRval_42;
          MR_Word Stmt_43;

          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (ArgLval_17));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, ArgType_15, VarType_16, (MR_Integer) 0, Var_31, &ArgRval_27);
          MLDS_Type_41 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, VarType_16);
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Ptag_9));
            MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (ArgRval_27));
          }
          {
            CastRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastRval_42, 1) = ((MR_Box) (MLDS_Type_41));
            MR_hl_field(MR_mktag(3), CastRval_42, 2) = ((MR_Box) (Var_32));
          }
          Stmt_43 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(VarLval_18, CastRval_42, Context_13);
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
          MR_Word VarRval_21;
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
            MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (VarLval_18));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_19, VarType_16, ArgType_15, (MR_Integer) 0, Var_35, &VarRval_21);
          MLDS_Type_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, ArgType_15);
          PtagUint8_23 = (uint8_t) (Ptag_9);
          PtagInt_24 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_23);
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (PtagInt_24));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (VarRval_21));
            MR_hl_field(MR_mktag(3), Var_36, 3) = ((MR_Box) (Var_38));
          }
          {
            CastRval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastRval_25, 1) = ((MR_Box) (MLDS_Type_22));
            MR_hl_field(MR_mktag(3), CastRval_25, 2) = ((MR_Box) (Var_36));
          }
          Stmt_26 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_17, CastRval_25, Context_13);
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
      MR_Word Mode_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Modes_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word HeadStmts_58;
      MR_Word TailStmts_59;
      MR_Word STATE_VARIABLE_ToOrRvals_64_64;
      MR_Unsigned STATE_VARIABLE_ToOrMask_65_65;

      ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_10_p_0(Info_1, WordRval_2, Var_70, Mode_52, Context_5, STATE_VARIABLE_ToOrRvals_0_6, &STATE_VARIABLE_ToOrRvals_64_64, STATE_VARIABLE_ToOrMask_0_8, &STATE_VARIABLE_ToOrMask_65_65, &HeadStmts_58);
      ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_args_10_p_0(Info_1, WordRval_2, Var_69, Modes_53, Context_5, STATE_VARIABLE_ToOrRvals_64_64, STATE_VARIABLE_ToOrRvals_7, STATE_VARIABLE_ToOrMask_65_65, STATE_VARIABLE_ToOrMask_9, &TailStmts_59);
      *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_58, TailStmts_59);
    }
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_deconstruct_tagword_arg_10_p_0(
  MR_Word Info_11,
  MR_Word WordRval_12,
  MR_Word HeadVar__3_3,
  MR_Word Mode_15,
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
    ml_backend__ml_unify_gen_util__compute_assign_direction_5_p_0(ModuleInfo_22, Mode_15, ArgType_21, FieldType_27, &Dir_28);
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
                    MR_Word Fill_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 6))));
                    MR_Integer ShiftInt_56 = (MR_Integer) (Shift_52);
                    MR_Integer MaskInt_57 = (MR_Integer) (Mask_54);
                    MR_Word LeftShiftedArgRval_58;
                    MR_Word Var_73;
                    MR_Unsigned Var_76;
                    MR_Unsigned Var_77;

                    {
                      Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (ArgLval_20));
                    }
                    LeftShiftedArgRval_58 = ml_backend__ml_unify_gen_util__ml_lshift_3_f_0(Var_73, Shift_52, Fill_55);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_ToOrRvals_30 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftShiftedArgRval_58));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_29));
                    }
                    Var_77 = mercury__uint__cast_from_int_1_f_0(MaskInt_57);
                    Var_76 = mercury__uint__f_60_60_2_f_0(Var_77, ShiftInt_56);
                    *STATE_VARIABLE_ToOrMask_32 = (Var_76 | STATE_VARIABLE_ToOrMask_0_31);
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
            MR_Word Fill_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_7, (MR_Integer) 6))));
            MR_Word ToAssignRval_17;
            MR_Word Stmt_18;
            MR_Word UnsignedWordRval_39;
            MR_Integer MaskInt_40;
            MR_Word MaskedRval_41;
            MR_Word Var_43;
            MR_Word Var_44;

            Var_43 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
            {
              UnsignedWordRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_39, 1) = ((MR_Box) (Var_43));
              MR_hl_field(MR_mktag(3), UnsignedWordRval_39, 2) = ((MR_Box) (WordRval_6));
            }
            MaskInt_40 = (MR_Integer) (Mask_15);
            Var_44 = ml_backend__ml_unify_gen_util__ml_rshift_2_f_0(UnsignedWordRval_39, Shift_13);
            MaskedRval_41 = ml_backend__ml_unify_gen_util__ml_bitwise_and_2_f_0(Var_44, MaskInt_40);
            switch (Fill_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ToAssignRval_17 = MaskedRval_41;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CastMLDSType_42;

                  CastMLDSType_42 = ml_backend__ml_util__mlds_int_type_int16_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_42));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_41));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastMLDSType_45;

                  CastMLDSType_45 = ml_backend__ml_util__mlds_int_type_int32_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_45));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_41));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CastMLDSType_46;

                  CastMLDSType_46 = ml_backend__ml_util__mlds_int_type_int8_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_46));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_41));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word CastMLDSType_47;

                  CastMLDSType_47 = ml_backend__ml_util__mlds_int_type_uint16_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_47));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_41));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word CastMLDSType_48;

                  CastMLDSType_48 = ml_backend__ml_util__mlds_int_type_uint32_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_48));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_41));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word CastMLDSType_49;

                  CastMLDSType_49 = ml_backend__ml_util__mlds_int_type_uint8_0_f_0();
                  {
                    ToAssignRval_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 1) = ((MR_Box) (CastMLDSType_49));
                    MR_hl_field(MR_mktag(3), ToAssignRval_17, 2) = ((MR_Box) (MaskedRval_41));
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args__243__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args\'/11", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 0))));
        MR_Word CtorArgRepn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_111, (MR_Integer) 1))));
        MR_Integer NextArgNum_65 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
        MR_Word ArgPosWidth_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_64, (MR_Integer) 2))));
        MR_Word FieldVia_81;

        succeeded = ((((MR_tag((MR_Word) ArgPosWidth_66)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_66, (MR_Integer) 0))) == (MR_Integer) 0)));
        if (succeeded)
        {
          FieldVia_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_1, (MR_Integer) 3))));
          succeeded = (FieldVia_81 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_Word LeftOverArgVarRepns_82;
          MR_Word LeftOverModes_83;
          MR_Integer LeftOverArgNum_84;
          MR_Word HeadDefns_85;
          MR_Word HeadStmts_86;
          MR_Word TailDefns_87;
          MR_Word TailStmts_88;
          MR_Word STATE_VARIABLE_Info_96_96;

          ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_95_91_49_50_93_95_48_16_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, Mode_54, Var_110, Modes_55, &LeftOverArgVarRepns_82, &LeftOverModes_83, CurArgNum_4, &LeftOverArgNum_84, Context_5, &HeadDefns_85, &HeadStmts_86, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_96_96);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_1, LeftOverArgVarRepns_82, LeftOverModes_83, LeftOverArgNum_84, Context_5, TakeAddr_6, HeadVar__7_7, &TailDefns_87, &TailStmts_88, STATE_VARIABLE_Info_96_96, STATE_VARIABLE_Info_11);
          *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), HeadDefns_85, TailDefns_87);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_86, TailStmts_88);
        }
        else
        {
          MR_Word STATE_VARIABLE_Info_98_98;
          MR_Word HeadStmts_100;
          MR_Word TailStmts_101;
          MR_Word _PackedArgVars_89;

          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_1, ArgVar_63, CtorArgRepn_64, Mode_54, CurArgNum_4, Context_5, &_PackedArgVars_89, &HeadStmts_100, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_98_98);
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_args_11_p_0(FieldGen_1, Var_110, Modes_55, NextArgNum_65, Context_5, TakeAddr_6, HeadVar__7_7, HeadVar__8_8, &TailStmts_101, STATE_VARIABLE_Info_98_98, STATE_VARIABLE_Info_11);
          *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_100, TailStmts_101);
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
  MR_Word Mode_20,
  MR_Word ArgVarRepns_21,
  MR_Word Modes_22,
  MR_Word * LeftOverArgVarRepns_23,
  MR_Word * LeftOverModes_24,
  MR_Integer CurArgNum_25,
  MR_Integer * LeftOverArgNum_26,
  MR_Word Context_27,
  MR_Word * Defns_29,
  MR_Word * Stmts_30,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65)
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
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word STATE_VARIABLE_Info_68_68;

    ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(FieldGen_17, ArgVar_18, CtorArgRepn_19, Mode_20, CurArgNum_25, Context_27, &HeadPackedArgVars_32, &HeadStmts_33, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_66_66);
    if ((HeadPackedArgVars_32 == (MR_Word) ((MR_Unsigned) 0U)))
      AllPartialsRight0_34 = (MR_Integer) 0;
    else
      AllPartialsRight0_34 = (MR_Integer) 1;
    NextArgNum_37 = (MR_Integer) ((MR_Unsigned) CurArgNum_25 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(FieldGen_17, ArgVarRepns_21, Modes_22, LeftOverArgVarRepns_23, LeftOverModes_24, NextArgNum_37, LeftOverArgNum_26, Context_27, AllPartialsRight0_34, &AllPartialsRight_38, &TailPackedArgVars_39, &TailStmts_40, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_68_68);
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
          MR_Integer CellOffsetInt_52;
          MR_Word FieldId_53;
          MR_Word MaybePtag_54;
          MR_Word AddrRval_55;
          MR_Word AddrType_56;
          MR_Word FieldLval_58;
          MR_Word CastFieldRval_59;
          MR_Word WordVarLval_60;
          MR_Word WordAssignStmt_61;
          MR_Word PackedArgsMap0_62;
          MR_Word PackedArgsMap_63;
          MR_Word STATE_VARIABLE_Info_69_69;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word CellOffset_48;

          PackedArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_32, TailPackedArgVars_39);
          ml_backend__ml_gen_info__ml_gen_info_new_packed_args_var_3_p_0(&WordCompVar_42, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_69_69);
          {
            WordVar_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVar_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
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
            CellOffsetInt_52 = (MR_Integer) (CellOffset_48);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word\'/16", (MR_String) "no apw_partial_first");
              return;
            }
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (CellOffsetInt_52));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
          }
          {
            FieldId_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_53, 0) = ((MR_Box) (Var_75));
          }
          MaybePtag_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 0))));
          AddrRval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 1))));
          AddrType_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_17, (MR_Integer) 2))));
          {
            FieldLval_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldLval_58, 0) = ((MR_Box) (MaybePtag_54));
            MR_hl_field(MR_mktag(0), FieldLval_58, 1) = ((MR_Box) (AddrRval_55));
            MR_hl_field(MR_mktag(0), FieldLval_58, 2) = ((MR_Box) (AddrType_56));
            MR_hl_field(MR_mktag(0), FieldLval_58, 3) = ((MR_Box) (FieldId_53));
            MR_hl_field(MR_mktag(0), FieldLval_58, 4) = ((MR_Box) ((MR_Unsigned) 24U));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_78, 0) = ((MR_Box) (FieldLval_58));
          }
          {
            CastFieldRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 1) = ((MR_Box) (UnsignedType_44));
            MR_hl_field(MR_mktag(3), CastFieldRval_59, 2) = ((MR_Box) (Var_78));
          }
          {
            WordVarLval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 1) = ((MR_Box) (WordVar_43));
            MR_hl_field(MR_mktag(3), WordVarLval_60, 2) = ((MR_Box) (UnsignedType_44));
          }
          WordAssignStmt_61 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(WordVarLval_60, CastFieldRval_59, Context_27);
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (WordAssignStmt_61));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (HeadStmts_33));
          }
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_79, TailStmts_40);
          ml_backend__ml_gen_info__ml_gen_info_get_packed_args_map_2_p_0(STATE_VARIABLE_Info_69_69, &PackedArgsMap0_62);
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (WordVarLval_60));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_1[2]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ((MR_Box) (PackedArgVars_41)), ((MR_Box) (Var_80)), PackedArgsMap0_62, &PackedArgsMap_63);
          ml_backend__ml_gen_info__ml_gen_info_set_packed_args_map_3_p_0(PackedArgsMap_63, STATE_VARIABLE_Info_69_69, STATE_VARIABLE_Info_65);
        }
        break;
      case (MR_Integer) 0:
        {
          *Defns_29 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_33, TailStmts_40);
          *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_68_68;
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

    succeeded = ml_backend__ml_unify_gen_deconstruct__IntroducedFrom__pred__ml_gen_dynamic_deconstruct_args_in_word_loop__416__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Mode_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Modes_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgVar_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 0))));
        MR_Word CtorArgRepn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_143, (MR_Integer) 1))));
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
                  MR_Word HeadPackedArgVars_132;
                  MR_Word HeadStmts_133;
                  MR_Integer NextArgNum_134;
                  MR_Word TailPackedArgVars_135;
                  MR_Word TailStmts_136;
                  MR_Word STATE_VARIABLE_Info_118_137;
                  MR_Word STATE_VARIABLE_AllPartialsRight_119_138;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, Mode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_132, &HeadStmts_133, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_118_137);
                  if ((HeadPackedArgVars_132 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AllPartialsRight_119_138 = (MR_Integer) 0;
                  else
                    STATE_VARIABLE_AllPartialsRight_119_138 = STATE_VARIABLE_AllPartialsRight_0_10;
                  NextArgNum_134 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(HeadVar__1_1, Var_142, Modes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_134, LeftOverArgNum_7, HeadVar__8_8, STATE_VARIABLE_AllPartialsRight_119_138, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_135, &TailStmts_136, STATE_VARIABLE_Info_118_137, STATE_VARIABLE_Info_15);
                  *HeadVar__12_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_arg_var_0), HeadPackedArgVars_132, TailPackedArgVars_135);
                  *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), HeadStmts_133, TailStmts_136);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadPackedArgVars_89;
                  MR_Word HeadStmts_90;
                  MR_Integer NextArgNum_96;
                  MR_Word TailPackedArgVars_97;
                  MR_Word TailStmts_98;
                  MR_Word Var_114;
                  MR_Word STATE_VARIABLE_Info_118_118;

                  ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_10_p_0(HeadVar__1_1, ArgVar_80, CtorArgRepn_81, Mode_68, CurArgNum_6, HeadVar__8_8, &HeadPackedArgVars_89, &HeadStmts_90, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_118_118);
                  {
                    Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&ml_backend__ml_unify_gen_deconstruct_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (HeadPackedArgVars_89));
                    MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140ml_backend.ml_unify_gen_deconstruct.ml_gen_dynamic_deconstruct_args_in_word_loop\'/15", (MR_String) "HeadPackedArgVars != [] for apw_none_shifted");
                  NextArgNum_96 = (MR_Integer) ((MR_Unsigned) CurArgNum_6 + (MR_Unsigned) (MR_Integer) 1);
                  ml_backend__ml_unify_gen_deconstruct__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_100_121_110_97_109_105_99_95_100_101_99_111_110_115_116_114_117_99_116_95_97_114_103_115_95_105_110_95_119_111_114_100_95_108_111_111_112_95_95_91_57_93_95_48_15_p_0(HeadVar__1_1, Var_142, Modes_69, HeadVar__4_4, HeadVar__5_5, NextArgNum_96, LeftOverArgNum_7, HeadVar__8_8, STATE_VARIABLE_AllPartialsRight_0_10, STATE_VARIABLE_AllPartialsRight_11, &TailPackedArgVars_97, &TailStmts_98, STATE_VARIABLE_Info_118_118, STATE_VARIABLE_Info_15);
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
  MR_Word Mode_14,
  MR_Integer ArgNum_15,
  MR_Word Context_16,
  MR_Word * PackedArgVars_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57)
{
  {
    MR_Word MaybePrimaryTag_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 0))));
    MR_Word AddrRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 1))));
    MR_Word AddrType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 2))));
    MR_Word FieldVia_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldGen_11, (MR_Integer) 3))));
    MR_Word ArgPosWidth_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 2))));
    MR_Word FieldId_40;
    MR_Word ModuleInfo_46;
    MR_Word HighLevelData_47;
    MR_Word FieldWidth_48;
    MR_Word FieldRawType_49;
    MR_Word FieldType_50;
    MR_Word MLDS_FieldType_51;
    MR_Word FieldLval_52;
    MR_Word ArgLval_53;
    MR_Word ArgType_54;
    MR_Word Dir_55;
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 0))));

    if ((FieldVia_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CellOffsetInt_39;
      MR_Word Var_59;
      MR_Word Var_60;

      switch (MR_tag((MR_Word) ArgPosWidth_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CellOffsetInt_39 = (MR_Integer) -1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word CellOffset_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_24, (MR_Integer) 1))));

            CellOffsetInt_39 = (MR_Integer) (CellOffset_70);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CellOffset_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_24, (MR_Integer) 1))));

            CellOffsetInt_39 = (MR_Integer) (CellOffset_26);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellOffset_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));

                CellOffsetInt_39 = (MR_Integer) (CellOffset_72);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellOffset_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));

                CellOffsetInt_39 = (MR_Integer) (CellOffset_73);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word CellOffset_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));

                CellOffsetInt_39 = (MR_Integer) (CellOffset_71);
              }
              break;
          }
          break;
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (CellOffsetInt_39));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        FieldId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldId_40, 0) = ((MR_Box) (Var_59));
      }
    }
    else
    {
      MR_Word FieldQualifier_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_23, (MR_Integer) 0))));
      MR_Word ClassPtrType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldVia_23, (MR_Integer) 1))));
      MR_Word FieldName_44;
      MR_Word QualifiedFieldName_45;

      FieldName_44 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(Var_61, ArgNum_15);
      {
        QualifiedFieldName_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), QualifiedFieldName_45, 0) = ((MR_Box) (FieldQualifier_41));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_45, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), QualifiedFieldName_45, 2) = ((MR_Box) (FieldName_44));
      }
      {
        FieldId_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FieldId_40, 0) = ((MR_Box) (QualifiedFieldName_45));
        MR_hl_field(MR_mktag(1), FieldId_40, 1) = ((MR_Box) (ClassPtrType_42));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_56, &ModuleInfo_46);
    ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_56, &HighLevelData_47);
    FieldWidth_48 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(ArgPosWidth_24);
    FieldRawType_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_13, (MR_Integer) 1))));
    ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_46, HighLevelData_47, FieldRawType_49, FieldWidth_48, &FieldType_50);
    ml_backend__ml_code_util__ml_gen_type_3_p_0(STATE_VARIABLE_Info_0_56, FieldType_50, &MLDS_FieldType_51);
    {
      FieldLval_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_52, 0) = ((MR_Box) (MaybePrimaryTag_20));
      MR_hl_field(MR_mktag(0), FieldLval_52, 1) = ((MR_Box) (AddrRval_21));
      MR_hl_field(MR_mktag(0), FieldLval_52, 2) = ((MR_Box) (AddrType_22));
      MR_hl_field(MR_mktag(0), FieldLval_52, 3) = ((MR_Box) (FieldId_40));
      MR_hl_field(MR_mktag(0), FieldLval_52, 4) = ((MR_Box) (MLDS_FieldType_51));
    }
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_56, ArgVar_12, &ArgLval_53);
    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_56, ArgVar_12, &ArgType_54);
    ml_backend__ml_unify_gen_util__compute_assign_direction_5_p_0(ModuleInfo_46, Mode_14, ArgType_54, FieldType_50, &Dir_55);
    switch (Dir_55) {
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
          ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(ModuleInfo_46, HighLevelData_47, FieldLval_52, FieldType_50, ArgPosWidth_24, ArgLval_53, ArgType_54, Context_16, Stmts_18);
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_right_10_p_0(ModuleInfo_46, FieldLval_52, FieldType_50, ArgPosWidth_24, ArgVar_12, ArgLval_53, ArgType_54, Context_16, PackedArgVars_17, Stmts_18);
        break;
    }
    *STATE_VARIABLE_Info_57 = STATE_VARIABLE_Info_0_56;
  }
}

static void MR_CALL 
ml_backend__ml_unify_gen_deconstruct__ml_gen_dynamic_deconstruct_arg_unify_assign_left_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word HighLevelData_11,
  MR_Word FieldLval_12,
  MR_Word FieldType_13,
  MR_Word ArgPosWidth_14,
  MR_Word ArgLval_15,
  MR_Word ArgType_16,
  MR_Word Context_17,
  MR_Word * Stmts_18)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ArgPosWidth_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_61;
          MR_Word ArgRval_76;
          MR_Word Stmt_77;

          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (ArgLval_15));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_16, FieldType_13, (MR_Integer) 0, Var_61, &ArgRval_76);
          Stmt_77 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, ArgRval_76, Context_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_77));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgRval_22;
          MR_Word Var_64;
          MR_Word FieldLvalA_23;
          MR_Word FieldLvalB_24;

          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (ArgLval_15));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, ArgType_16, FieldType_13, (MR_Integer) 0, Var_64, &ArgRval_22);
          succeeded = ml_backend__ml_unify_gen_deconstruct__ml_field_offset_pair_3_p_0(FieldLval_12, &FieldLvalA_23, &FieldLvalB_24);
          if (succeeded)
          {
            MR_Word FloatWordA_25;
            MR_Word FloatWordB_26;
            MR_Word IntFieldType_27;
            MR_Word ArgRvalA_28;
            MR_Word ArgRvalB_29;
            MR_Word StmtA_30;
            MR_Word StmtB_31;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word Var_71;
            MR_Word Var_73;

            {
              FloatWordA_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(MR_mktag(3), FloatWordA_25, 2) = ((MR_Box) (ArgRval_22));
            }
            {
              FloatWordB_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 1) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(MR_mktag(3), FloatWordB_26, 2) = ((MR_Box) (ArgRval_22));
            }
            Var_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_unify_gen_util__ml_type_as_field_5_p_0(ModuleInfo_10, HighLevelData_11, Var_67, (MR_Integer) 2, &IntFieldType_27);
            Var_69 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, Var_69, IntFieldType_27, (MR_Integer) 0, FloatWordA_25, &ArgRvalA_28);
            Var_71 = parse_tree__builtin_lib_types__int_type_0_f_0();
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_10, Var_71, IntFieldType_27, (MR_Integer) 0, FloatWordB_26, &ArgRvalB_29);
            StmtA_30 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalA_23, ArgRvalA_28, Context_17);
            StmtB_31 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLvalB_24, ArgRvalB_29, Context_17);
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (StmtB_31));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StmtA_30));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_73));
            }
          }
          else
          {
            MR_Word Stmt_32;

            Stmt_32 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, ArgRval_22, Context_17);
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Mask_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 4))));
              MR_Word Fill_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 5))));
              MR_Integer MaskInt_45;
              MR_Word CastFieldRVal_46;
              MR_Word OldFieldBits_47;
              MR_Word NewFieldBits_48;
              MR_Word UpdatedFieldBits_49;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Integer Var_55;
              MR_Integer Var_56;
              MR_Word Var_58;
              MR_Word ArgRval_78;
              MR_Word Stmt_79;

              {
                ArgRval_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ArgRval_78, 0) = ((MR_Box) (ArgLval_15));
              }
              MaskInt_45 = (MR_Integer) (Mask_38);
              Var_53 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (FieldLval_12));
              }
              {
                CastFieldRVal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastFieldRVal_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), CastFieldRVal_46, 1) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(3), CastFieldRVal_46, 2) = ((MR_Box) (Var_54));
              }
              Var_56 = mercury__int__f_60_60_2_f_0(MaskInt_45, (MR_Integer) 0);
              Var_55 = ~(Var_56);
              OldFieldBits_47 = ml_backend__ml_unify_gen_util__ml_bitwise_and_2_f_0(CastFieldRVal_46, Var_55);
              NewFieldBits_48 = ml_backend__ml_unify_gen_util__ml_lshift_3_f_0(ArgRval_78, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_39);
              Var_58 = ml_backend__ml_unify_gen_util__ml_bitwise_or_2_f_0(OldFieldBits_47, NewFieldBits_48);
              {
                UpdatedFieldBits_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_49, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_49, 2) = ((MR_Box) (Var_58));
              }
              Stmt_79 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, UpdatedFieldBits_49, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_79));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Mask_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 5))));
              MR_Word Fill_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 6))));
              MR_Word Shift_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 3))));
              MR_Integer ShiftInt_83;
              MR_Integer MaskInt_84;
              MR_Word CastFieldRVal_85;
              MR_Word OldFieldBits_86;
              MR_Word NewFieldBits_87;
              MR_Word UpdatedFieldBits_88;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Integer Var_91;
              MR_Integer Var_92;
              MR_Word Var_94;
              MR_Word ArgRval_96;
              MR_Word Stmt_97;

              {
                ArgRval_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ArgRval_96, 0) = ((MR_Box) (ArgLval_15));
              }
              ShiftInt_83 = (MR_Integer) (Shift_82);
              MaskInt_84 = (MR_Integer) (Mask_80);
              Var_89 = ml_backend__ml_util__mlds_int_type_uint_0_f_0();
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (FieldLval_12));
              }
              {
                CastFieldRVal_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CastFieldRVal_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), CastFieldRVal_85, 1) = ((MR_Box) (Var_89));
                MR_hl_field(MR_mktag(3), CastFieldRVal_85, 2) = ((MR_Box) (Var_90));
              }
              Var_92 = mercury__int__f_60_60_2_f_0(MaskInt_84, ShiftInt_83);
              Var_91 = ~(Var_92);
              OldFieldBits_86 = ml_backend__ml_unify_gen_util__ml_bitwise_and_2_f_0(CastFieldRVal_85, Var_91);
              NewFieldBits_87 = ml_backend__ml_unify_gen_util__ml_lshift_3_f_0(ArgRval_96, Shift_82, Fill_81);
              Var_94 = ml_backend__ml_unify_gen_util__ml_bitwise_or_2_f_0(OldFieldBits_86, NewFieldBits_87);
              {
                UpdatedFieldBits_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_88, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                MR_hl_field(MR_mktag(3), UpdatedFieldBits_88, 2) = ((MR_Box) (Var_94));
              }
              Stmt_97 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(FieldLval_12, UpdatedFieldBits_88, Context_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_97));
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
            MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
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
  MR_Word FieldLval_12,
  MR_Word FieldType_13,
  MR_Word ArgPosWidth_14,
  MR_Word ArgVar_15,
  MR_Word ArgLval_16,
  MR_Word ArgType_17,
  MR_Word Context_18,
  MR_Word * PackedArgVars_19,
  MR_Word * Stmts_20)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ArgPosWidth_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *PackedArgVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          *Stmts_20 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_47;
          MR_Word FieldRval_55;
          MR_Word Stmt_56;

          *PackedArgVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (FieldLval_12));
          }
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, FieldType_13, ArgType_17, (MR_Integer) 0, Var_47, &FieldRval_55);
          Stmt_56 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_16, FieldRval_55, Context_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Stmts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_56));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word FieldRval_26;
          MR_Word Stmt_27;
          MR_Word FieldLvalA_24;
          MR_Word FieldLvalB_25;
          MR_Word Ptag_71;
          MR_Word PtrRval_72;
          MR_Word PtrType_73;
          MR_Word FieldIdA_74;
          MR_Word FieldOffsetA_76;
          MR_Integer Offset_77;
          MR_Word Var_80;

          *PackedArgVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = ((MR_tag((MR_Word) FieldLval_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            Ptag_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_12, (MR_Integer) 0))));
            PtrRval_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_12, (MR_Integer) 1))));
            PtrType_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_12, (MR_Integer) 2))));
            FieldIdA_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldLval_12, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) FieldIdA_74)) == (MR_Integer) 0);
            if (succeeded)
            {
              FieldOffsetA_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldIdA_74, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) FieldOffsetA_76)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldOffsetA_76, (MR_Integer) 0))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldOffsetA_76, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_80)) == (MR_Integer) 2);
                if (succeeded)
                  Offset_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_80, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word FieldIdB_78;
                MR_Word Var_81;
                MR_Word Var_82;
                MR_Integer Var_83 = (MR_Integer) ((MR_Unsigned) Offset_77 + (MR_Unsigned) (MR_Integer) 1);

                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_82, 0) = ((MR_Box) (Var_83));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
                }
                {
                  FieldIdB_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FieldIdB_78, 0) = ((MR_Box) (Var_81));
                }
                {
                  FieldLvalA_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FieldLvalA_24, 0) = ((MR_Box) (Ptag_71));
                  MR_hl_field(MR_mktag(0), FieldLvalA_24, 1) = ((MR_Box) (PtrRval_72));
                  MR_hl_field(MR_mktag(0), FieldLvalA_24, 2) = ((MR_Box) (PtrType_73));
                  MR_hl_field(MR_mktag(0), FieldLvalA_24, 3) = ((MR_Box) (FieldIdA_74));
                  MR_hl_field(MR_mktag(0), FieldLvalA_24, 4) = ((MR_Box) ((MR_Unsigned) 24U));
                }
                {
                  FieldLvalB_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), FieldLvalB_25, 0) = ((MR_Box) (Ptag_71));
                  MR_hl_field(MR_mktag(0), FieldLvalB_25, 1) = ((MR_Box) (PtrRval_72));
                  MR_hl_field(MR_mktag(0), FieldLvalB_25, 2) = ((MR_Box) (PtrType_73));
                  MR_hl_field(MR_mktag(0), FieldLvalB_25, 3) = ((MR_Box) (FieldIdB_78));
                  MR_hl_field(MR_mktag(0), FieldLvalB_25, 4) = ((MR_Box) ((MR_Unsigned) 24U));
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
            MR_Word Var_50;
            MR_Word Var_51;

            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (FieldLvalA_24));
            }
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (FieldLvalB_25));
            }
            {
              FieldRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), FieldRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), FieldRval_26, 1) = ((MR_Box) ((MR_Unsigned) 88U));
              MR_hl_field(MR_mktag(3), FieldRval_26, 2) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(3), FieldRval_26, 3) = ((MR_Box) (Var_51));
            }
          }
          else
          {
            MR_Word Var_53;

            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (FieldLval_12));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_11, FieldType_13, ArgType_17, (MR_Integer) 0, Var_53, &FieldRval_26);
          }
          Stmt_27 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_16, FieldRval_26, Context_18);
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word NumBits_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 3))));
              MR_Word Mask_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 4))));
              MR_Word Fill_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 5))));
              MR_Word Shift_35 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
              MR_Word PackedArgVar_38;
              MR_Word ToAssignRval_39;
              MR_Word Var_44;
              MR_Word Stmt_57;

              {
                PackedArgVar_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PackedArgVar_38, 0) = ((MR_Box) (ArgVar_15));
                MR_hl_field(MR_mktag(0), PackedArgVar_38, 1) = ((MR_Box) (Shift_35));
                MR_hl_field(MR_mktag(0), PackedArgVar_38, 2) = ((MR_Box) (NumBits_32));
                MR_hl_field(MR_mktag(0), PackedArgVar_38, 3) = ((MR_Box) (Fill_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PackedArgVars_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedArgVar_38));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (FieldLval_12));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(Var_44, Shift_35, Mask_33, Fill_34, &ToAssignRval_39);
              Stmt_57 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_16, ToAssignRval_39, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_57));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NumBits_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 4))));
              MR_Word Mask_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 5))));
              MR_Word Fill_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 6))));
              MR_Word Shift_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 3))));
              MR_Word PackedArgVar_62;
              MR_Word ToAssignRval_63;
              MR_Word Var_65;
              MR_Word Stmt_67;

              {
                PackedArgVar_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PackedArgVar_62, 0) = ((MR_Box) (ArgVar_15));
                MR_hl_field(MR_mktag(0), PackedArgVar_62, 1) = ((MR_Box) (Shift_61));
                MR_hl_field(MR_mktag(0), PackedArgVar_62, 2) = ((MR_Box) (NumBits_58));
                MR_hl_field(MR_mktag(0), PackedArgVar_62, 3) = ((MR_Box) (Fill_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PackedArgVars_19 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedArgVar_62));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (FieldLval_12));
              }
              ml_backend__ml_unify_gen_deconstruct__ml_extract_subword_value_5_p_0(Var_65, Shift_61, Mask_59, Fill_60, &ToAssignRval_63);
              Stmt_67 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_16, ToAssignRval_63, Context_18);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *Stmts_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_67));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *PackedArgVars_19 = (MR_Word) ((MR_Unsigned) 0U);
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
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(3), UnsignedWordRval_11, 2) = ((MR_Box) (WordRval_6));
    }
    MaskInt_12 = (MR_Integer) (Mask_8);
    Var_16 = ml_backend__ml_unify_gen_util__ml_rshift_2_f_0(UnsignedWordRval_11, Shift_7);
    MaskedRval_13 = ml_backend__ml_unify_gen_util__ml_bitwise_and_2_f_0(Var_16, MaskInt_12);
    switch (Fill_9) {
      default: /*NOTREACHED*/ MR_assert(0);
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
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
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
