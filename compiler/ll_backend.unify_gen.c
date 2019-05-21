/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-05-28
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


// :- module ll_backend.unify_gen.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen__init
ENDINIT
*/

#include "ll_backend.unify_gen.mih"


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
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "ll_backend.closure_gen.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_pos_width_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_pos_width_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0[2];

static const MR_ConstString ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0[2];

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0;

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0[1];

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0[1];

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0[1];

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_and_arg_var_0_0[3];

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_and_arg_var_0_0;

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_and_arg_var_0_0[1];

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_and_arg_var_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_and_arg_var_0[1];

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_and_arg_var_0[1];

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_maybe_real_input_arg_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_maybe_real_input_arg_0_1;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_maybe_real_input_arg_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_maybe_real_input_arg_0[2];

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_maybe_real_input_arg_0[2];

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0[2];

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0[2];

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_field_0_0[4];

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_field_0_0;

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_field_0_0[1];

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_field_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_field_0[1];

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_field_0[1];

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0[1];

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0;

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[1];

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1;

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[1];

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0[2];

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0[2];

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0[2];

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2104__1_2_p_0(
  MR_Word Lang_20,
  MR_Word HeadVar__2_107);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1941__1_2_p_0(
  MR_Word Lang_19,
  MR_Word HeadVar__2_72);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_det_deconstruction__1270__1_2_p_0(
  MR_Word AddedBy_55,
  MR_Word HeadVar__2_64);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1155__2_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_75);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1141__2_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_63);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1155__1_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_56);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1141__1_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_29);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1147__1_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_54);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_and_pack_cons_args__755__1_2_p_0(
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__670__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_141);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__699__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_120);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__724__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__580__1_2_p_0(
  MR_Word Lang_31,
  MR_Word HeadVar__2_188);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__708__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_111);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__734__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_96);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__732__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_92);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__680__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_131);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__481__1_2_p_0(
  MR_Word ForeignLang_12,
  MR_Word HeadVar__2_94);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__get_cons_arg_widths__261__1_2_p_0(
  MR_Word AddedBy_21,
  MR_Word HeadVar__2_32);

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__251__1_1_f_0(
  MR_Word LambdaHeadVar__1_26);

static void MR_CALL 
ll_backend__unify_gen____Compare____maybe_real_input_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____maybe_real_input_arg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____field_and_arg_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_field_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_and_arg_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_field_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word UnboxedFloats_10,
  MR_Word UnboxedInt64s_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ConstStructMap_0_23,
  MR_Word * STATE_VARIABLE_ConstStructMap_24,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_25,
  MR_Word * STATE_VARIABLE_StaticCellInfo_26);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_rval_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word UnboxedFloats_11,
  MR_Word UnboxedInt64s_12,
  MR_Word ConstStructMap_13,
  MR_Word ConsTag_14,
  MR_Word ConstArgsPosWidths_15,
  MR_Word * TypedRval_16,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_67,
  MR_Word * STATE_VARIABLE_StaticCellInfo_68);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnboxedFloats_8,
  MR_Word UnboxedInt64s_9,
  MR_Word ConstStructMap_10,
  MR_Word HeadVar__5_5,
  MR_Word * TypedRval_13);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnboxedFloats_2,
  MR_Word UnboxedInt64s_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_for_one_word_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnboxedFloats_2,
  MR_Word UnboxedInt64s_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(
  MR_Word UnboxedFloats_6,
  MR_Word UnboxedInt64s_7,
  MR_Word ConsTag_8,
  MR_Word ArgPosWidth_9,
  MR_Word * TypedRval_10);

static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
  MR_Word CellArg_6,
  MR_Integer ArgOffset_7,
  MR_Integer * NextOffset_8,
  MR_Word STATE_VARIABLE_RevFieldAddrs_0_17,
  MR_Word * STATE_VARIABLE_RevFieldAddrs_18);

static void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_4,
  MR_Word * STATE_VARIABLE_StaticCellInfo_5,
  MR_Word STATE_VARIABLE_ActiveMap_0_6,
  MR_Word * STATE_VARIABLE_ActiveMap_7);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_8_p_0(
  MR_Word Var_9,
  MR_Word ConsTag_10,
  MR_Word ArgVarsWidths_11,
  MR_Word UnboxedFloats_12,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_67,
  MR_Word * STATE_VARIABLE_StaticCellInfo_68,
  MR_Word STATE_VARIABLE_ActiveMap_0_69,
  MR_Word * STATE_VARIABLE_ActiveMap_70);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ActiveMap_0_3,
  MR_Word * STATE_VARIABLE_ActiveMap_4);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_for_one_word_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word CurRval_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ActiveMap_0_5,
  MR_Word * STATE_VARIABLE_ActiveMap_6);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
  MR_Word VarRval_12,
  MR_String VarName_14,
  MR_Word ConsId_15,
  MR_Word MaybeConsTag_16,
  MR_Word CheaperTagTest_17,
  MR_Word Sense_18,
  MR_Word * ElseLabel_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_33,
  MR_Word * STATE_VARIABLE_CI_34);

static void MR_CALL 
ll_backend__unify_gen__disjoin_tag_tests_3_p_0(
  MR_Word CurTestRval_4,
  MR_Word OtherTestRvals_5,
  MR_Word * TestRval_6);

static void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen__generate_semi_deconstruction_9_p_0(
  MR_Word Var_10,
  MR_Word Tag_11,
  MR_Word ArgVarsWidths_12,
  MR_Word Modes_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26,
  MR_Word STATE_VARIABLE_CLD_0_27,
  MR_Word * STATE_VARIABLE_CLD_28);

static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
  MR_Word Rval_4,
  MR_Word ConsTag_5,
  MR_Word * TestRval_6);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word ArgVarsWidths_11,
  MR_Word Modes_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_59,
  MR_Word * STATE_VARIABLE_CLD_60);

static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(
  MR_Word Var_10,
  MR_Word ArgVar_11,
  MR_Integer Ptag_12,
  MR_Word ArgMode_13,
  MR_Word Type_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_24,
  MR_Word * STATE_VARIABLE_CLD_25);

static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6);

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(
  MR_Word VarTypes_1,
  MR_Word Rval_2,
  MR_Integer Ptag_3,
  MR_Word HeadVar__4_4,
  MR_Integer PrevOffset0_5,
  MR_Word * HeadVar__6_6);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0(
  MR_Word LHSVar_14,
  MR_Word ConsId_15,
  MR_Word RHSVarsWidths_16,
  MR_Word ArgModes_17,
  MR_Word HowToConstruct0_18,
  MR_Word TakeAddr_19,
  MR_Word MaybeSize_20,
  MR_Word GoalInfo_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_85,
  MR_Word * STATE_VARIABLE_CI_86,
  MR_Word STATE_VARIABLE_CLD_0_87,
  MR_Word * STATE_VARIABLE_CLD_88);

static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
  MR_Word ArgVarsWidths_4,
  MR_Word STATE_VARIABLE_HowToConstruct_0_13,
  MR_Word * STATE_VARIABLE_HowToConstruct_14);

static void MR_CALL 
ll_backend__unify_gen__needs_update_args_to_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__unify_gen__does_any_arg_in_word_need_update_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NU_0_3,
  MR_Word * STATE_VARIABLE_NU_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(
  MR_Word IntTag_4,
  MR_Word * Const_5,
  MR_Word * Type_6);

static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(
  MR_Word Var_10,
  MR_Word Arg_11,
  MR_Integer Ptag_12,
  MR_Word ArgMode_13,
  MR_Word Type_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_23,
  MR_Word * STATE_VARIABLE_CLD_24);

static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_6_p_0(
  MR_Word FieldAndArgVar_7,
  MR_Word ArgMode_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23);

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_to_field_from_var_6_p_0(
  MR_Word LeftField_7,
  MR_Word RightVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_49,
  MR_Word * STATE_VARIABLE_CLD_50);

static MR_Word MR_CALL 
ll_backend__unify_gen__or_two_rvals_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5);

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_to_var_from_field_6_p_0(
  MR_Word LeftVar_7,
  MR_Word RightField_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41);

static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Word Shift_5);

static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0(
  MR_Word Var_13,
  MR_Integer Ptag_14,
  MR_Word CellArgs_15,
  MR_Word HowToConstruct_16,
  MR_Word MaybeSize_17,
  MR_Word Context_18,
  MR_Word MayUseAtomic_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37);

static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellVar_2,
  MR_Integer CellPtag_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurArgNum_0_3,
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_6,
  MR_Word * STATE_VARIABLE_MayUseAtomic_7,
  MR_Word STATE_VARIABLE_Code_0_8,
  MR_Word * STATE_VARIABLE_Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12);

static void MR_CALL 
ll_backend__unify_gen__generate_and_pack_cons_word_19_p_0(
  MR_Word Var_20,
  MR_Word Width_21,
  MR_Word VarsWidths_22,
  MR_Word ArgMode_23,
  MR_Word ArgModes_24,
  MR_Word * LeftOverVarsWidths_25,
  MR_Word * LeftOverArgModes_26,
  MR_Integer CurArgNum_27,
  MR_Integer * LeftOverArgNum_28,
  MR_Word STATE_VARIABLE_TakeAddr_0_88,
  MR_Word * STATE_VARIABLE_TakeAddr_89,
  MR_Word * CellArg_30,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_90,
  MR_Word * STATE_VARIABLE_MayUseAtomic_91,
  MR_Word STATE_VARIABLE_Code_0_92,
  MR_Word * STATE_VARIABLE_Code_93,
  MR_Word CI_33,
  MR_Word STATE_VARIABLE_CLD_0_94,
  MR_Word * STATE_VARIABLE_CLD_95);

static void MR_CALL 
ll_backend__unify_gen__cast_away_any_sign_extend_bits_3_p_0(
  MR_Word Fill_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6);

static void MR_CALL 
ll_backend__unify_gen__or_packed_rvals_2_p_0(
  MR_Word Rvals_3,
  MR_Word * OrAllRval_4);

static void MR_CALL 
ll_backend__unify_gen__or_packed_rvals_lag_3_p_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5,
  MR_Word * OrAllRval_6);

static void MR_CALL 
ll_backend__unify_gen__generate_and_pack_one_cons_word_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer CurArgNum_5,
  MR_Integer * LeftOverArgNum_6,
  MR_Word STATE_VARIABLE_TakeAddr_0_7,
  MR_Word * STATE_VARIABLE_TakeAddr_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_9,
  MR_Word * STATE_VARIABLE_RevToOrRvals_10,
  MR_Word STATE_VARIABLE_Completeness_0_11,
  MR_Word * STATE_VARIABLE_Completeness_12,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_13,
  MR_Word * STATE_VARIABLE_MayUseAtomic_14,
  MR_Word STATE_VARIABLE_Code_0_15,
  MR_Word * STATE_VARIABLE_Code_16,
  MR_Word CI_17,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19);

static MR_Word MR_CALL 
ll_backend__unify_gen__left_shift_rval_3_f_0(
  MR_Word Rval_5,
  MR_Word Shift_6,
  MR_Word Fill_7);

static void MR_CALL 
ll_backend__unify_gen__generate_cons_arg_rval_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Var_13,
  MR_Word Type_14,
  MR_Word ArgMode_15,
  MR_Word * IsReal_16,
  MR_Word * Rval_17,
  MR_Word STATE_VARIABLE_Code_0_26,
  MR_Word * STATE_VARIABLE_Code_27,
  MR_Word CI_19,
  MR_Word STATE_VARIABLE_CLD_0_28,
  MR_Word * STATE_VARIABLE_CLD_29);

static void MR_CALL 
ll_backend__unify_gen__generate_test_7_p_0(
  MR_Word VarA_8,
  MR_Word VarB_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_23,
  MR_Word * STATE_VARIABLE_CI_24,
  MR_Word STATE_VARIABLE_CLD_0_25,
  MR_Word * STATE_VARIABLE_CLD_26);

static void MR_CALL 
ll_backend__unify_gen__generate_assignment_5_p_0(
  MR_Word VarA_6,
  MR_Word VarB_7,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10);

static MR_bool MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word AllArgs_7,
  MR_Word * AllArgsPosWidths_8);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_and_arg_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____field_and_arg_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____maybe_real_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____maybe_real_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_field_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_field_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[14][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[8][3];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[7][5];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[13][1];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[1][8];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[3][6];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][11];




static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_2[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[0])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[9])))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[0])),
    ((MR_Box) (ll_backend__unify_gen__construct_cell_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_6[0])),
    ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_6[1])),
    ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_sectag_added_by_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_pos_width_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_pos_width_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[13][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[9]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_int64s_0)),
    ((MR_Box) (&ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_pos_width_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_pos_width_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__unify_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_active_ground_term_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "active_ground_term_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0[2] = {
  (MR_String) "fa_offset",
  (MR_String) "fa_var"
};

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0 = {
  (MR_String) "field_addr",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0
};

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen____Unify____field_addr_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____field_addr_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "field_addr",
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_addr_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_addr_0
};

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_and_arg_var_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_val_0),
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_and_arg_var_0_0 = {
  (MR_String) "field_and_arg_var",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_and_arg_var_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_and_arg_var_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_and_arg_var_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_and_arg_var_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_and_arg_var_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_and_arg_var_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_and_arg_var_0_0
};

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_and_arg_var_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_and_arg_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen____Unify____field_and_arg_var_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____field_and_arg_var_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "field_and_arg_var",
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_field_and_arg_var_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_and_arg_var_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_field_and_arg_var_0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_maybe_real_input_arg_0_0 = {
  (MR_String) "not_real_input_arg",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_maybe_real_input_arg_0_1 = {
  (MR_String) "real_input_arg",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_maybe_real_input_arg_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_maybe_real_input_arg_0_0,
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_maybe_real_input_arg_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_maybe_real_input_arg_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_maybe_real_input_arg_0_0,
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_maybe_real_input_arg_0_1
};

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_maybe_real_input_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_maybe_real_input_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen____Unify____maybe_real_input_arg_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____maybe_real_input_arg_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "maybe_real_input_arg",
  {     ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_maybe_real_input_arg_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_maybe_real_input_arg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_maybe_real_input_arg_0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0 = {
  (MR_String) "branch_on_success",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1 = {
  (MR_String) "branch_on_failure",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0,
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1,
  &ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0
};

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_test_sense_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__unify_gen____Unify____test_sense_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____test_sense_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "test_sense",
  {     ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0
};

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_field_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_field_0_0 = {
  (MR_String) "uni_field",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_field_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_field_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_field_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_field_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_field_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_field_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_field_0_0
};

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_field_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_field_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen____Unify____uni_field_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____uni_field_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "uni_field",
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_field_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_field_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_field_0
};

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0 = {
  (MR_String) "uv_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_field_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1 = {
  (MR_String) "uv_field",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0[2] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1,
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0
};

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_val_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen____Unify____uni_val_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen____Compare____uni_val_0_0_10001)),
  (MR_String) "ll_backend.unify_gen",
  (MR_String) "uni_val",
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0 },
  {     ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0
};

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2104__1_2_p_0(
  MR_Word Lang_20,
  MR_Word HeadVar__2_107)
{
  {
    MR_bool succeeded = (Lang_20 == HeadVar__2_107);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1941__1_2_p_0(
  MR_Word Lang_19,
  MR_Word HeadVar__2_72)
{
  {
    MR_bool succeeded = (Lang_19 == HeadVar__2_72);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_det_deconstruction__1270__1_2_p_0(
  MR_Word AddedBy_55,
  MR_Word HeadVar__2_64)
{
  {
    MR_bool succeeded = (AddedBy_55 == HeadVar__2_64);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1155__2_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_75)
{
  {
    MR_bool succeeded = (Offset_27 == CellOffsetInt_75);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1141__2_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_63)
{
  {
    MR_bool succeeded = (Offset_27 == CellOffsetInt_63);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1155__1_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_56)
{
  {
    MR_bool succeeded = (Offset_27 == CellOffsetInt_56);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1141__1_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_29)
{
  {
    MR_bool succeeded = (Offset_27 == CellOffsetInt_29);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1147__1_2_p_0(
  MR_Integer Offset_27,
  MR_Integer CellOffsetInt_54)
{
  {
    MR_bool succeeded = (Offset_27 == CellOffsetInt_54);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_and_pack_cons_args__755__1_2_p_0(
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[2]), ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4)), ((MR_Box) (HeadVar__2_29)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__670__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_141)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[1]), ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_141)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__699__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_120)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[1]), ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_120)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__724__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_102)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[1]), ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_102)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__580__1_2_p_0(
  MR_Word Lang_31,
  MR_Word HeadVar__2_188)
{
  {
    MR_bool succeeded = (Lang_31 == HeadVar__2_188);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__708__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_111)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[1]), ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_111)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__734__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_96)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[3]), ((MR_Box) (MaybeSize_20)), ((MR_Box) (HeadVar__2_96)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__732__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_92)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[2]), ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_92)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__680__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_131)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[1]), ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_131)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__481__1_2_p_0(
  MR_Word ForeignLang_12,
  MR_Word HeadVar__2_94)
{
  {
    MR_bool succeeded = (ForeignLang_12 == HeadVar__2_94);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__get_cons_arg_widths__261__1_2_p_0(
  MR_Word AddedBy_21,
  MR_Word HeadVar__2_32)
{
  {
    MR_bool succeeded = (AddedBy_21 == HeadVar__2_32);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__251__1_1_f_0(
  MR_Word LambdaHeadVar__1_26)
{
  {
    MR_Word LambdaHeadVar__2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 2))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 0))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 1))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 3))));

    return LambdaHeadVar__2_27;
  }
}

void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0(
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

MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____maybe_real_input_arg_0_0(
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
ll_backend__unify_gen____Unify____maybe_real_input_arg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____field_and_arg_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word Var_10;

      ll_backend__unify_gen____Compare____uni_val_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_16 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ArgY1_11 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));

        ll_backend__unify_gen____Compare____uni_field_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_field_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        ll_backend__llds____Compare____rval_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_and_arg_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = ll_backend__unify_gen____Unify____uni_val_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
        succeeded = ll_backend__unify_gen____Unify____uni_field_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_field_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word UnboxedFloats_10,
  MR_Word UnboxedInt64s_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ConstStructMap_0_23,
  MR_Word * STATE_VARIABLE_ConstStructMap_24,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_25,
  MR_Word * STATE_VARIABLE_StaticCellInfo_26)
{
  {
    MR_Integer ConstNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word ConstStruct_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 0))));
    MR_Word ConstArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 1))));
    MR_Word ConsTag_20;
    MR_Word ConsArgsPosWidths_21;
    MR_Word Rval_22;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 3))));

    ConsTag_20 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_9, ConsId_16);
    ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ModuleInfo_9, ConsId_16, ConstArgs_17, &ConsArgsPosWidths_21);
    ll_backend__unify_gen__generate_const_struct_rval_9_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_23, ConsTag_20, ConsArgsPosWidths_21, &Rval_22, STATE_VARIABLE_StaticCellInfo_0_25, STATE_VARIABLE_StaticCellInfo_26);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstNum_12, ((MR_Box) (Rval_22)), STATE_VARIABLE_ConstStructMap_0_23, STATE_VARIABLE_ConstStructMap_24);
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_rval_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word UnboxedFloats_11,
  MR_Word UnboxedInt64s_12,
  MR_Word ConstStructMap_13,
  MR_Word ConsTag_14,
  MR_Word ConstArgsPosWidths_15,
  MR_Word * TypedRval_16,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_67,
  MR_Word * STATE_VARIABLE_StaticCellInfo_68)
{
  switch (MR_tag((MR_Word) ConsTag_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word AllTypedRvals_106;
            MR_Word DataAddr_107;
            MR_Word CellPtrConst_109;
            MR_Word Var_110;
            MR_Word Rval_113;

            ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &AllTypedRvals_106);
            ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_106, &DataAddr_107, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
            {
              Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (DataAddr_107));
              MR_hl_field(MR_mktag(3), Var_110, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              CellPtrConst_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellPtrConst_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), CellPtrConst_109, 1) = ((MR_Box) (Var_110));
            }
            {
              Rval_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_113, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Rval_113, 1) = ((MR_Box) (CellPtrConst_109));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypedRval_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_113));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            if ((ConstArgsPosWidths_15 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgsPosWidths_15, (MR_Integer) 1))));
              MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgsPosWidths_15, (MR_Integer) 0))));

              if ((Var_125 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, Var_126, TypedRval_16);
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
            }
            *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "unexpected tag");
              return;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word AllTypedRvals_115;
            MR_Word DataAddr_116;
            MR_Word CellPtrConst_118;
            MR_Word Var_119;
            MR_Integer Ptag_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));
            MR_Word Rval_122;

            ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &AllTypedRvals_115);
            ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_115, &DataAddr_116, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
            {
              Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (DataAddr_116));
              MR_hl_field(MR_mktag(3), Var_119, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              CellPtrConst_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellPtrConst_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), CellPtrConst_118, 1) = ((MR_Box) (Var_119));
            }
            {
              Rval_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_122, 0) = ((MR_Box) (Ptag_121));
              MR_hl_field(MR_mktag(2), Rval_122, 1) = ((MR_Box) (CellPtrConst_118));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypedRval_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_122));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer Ptag_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));

            if ((ConstArgsPosWidths_15 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "direct_arg_tag: arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgsPosWidths_15, (MR_Integer) 1))));
              MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArgsPosWidths_15, (MR_Integer) 0))));

              if ((Var_123 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRval_24;
                MR_Word Rval_26;
                MR_Word ArgTypedRval_88;
                MR_Word _RvalType_25;

                ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, Var_124, &ArgTypedRval_88);
                ArgRval_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_88, (MR_Integer) 0))));
                _RvalType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_88, (MR_Integer) 1))));
                {
                  Rval_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Rval_26, 0) = ((MR_Box) (Ptag_23));
                  MR_hl_field(MR_mktag(2), Rval_26, 1) = ((MR_Box) (ArgRval_24));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *TypedRval_16 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_26));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word PackedArgTypedRvals_32;
            MR_Word AllTypedRvals_34;
            MR_Integer Stag_35;
            MR_Word StagTypedRval_37;
            MR_Word DataAddr_38;
            MR_Word CellPtrConst_40;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_76;
            MR_Integer Ptag_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));
            MR_Word Rval_96;
            MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 2))));
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 3))));
            MR_Word _AddedBy_36;
            MR_Integer _Ptag_93;

            ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsPosWidths_15, &PackedArgTypedRvals_32);
            _Ptag_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1))));
            Stag_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 2))));
            _AddedBy_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 3))));
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Stag_35));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
            }
            {
              StagTypedRval_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StagTypedRval_37, 0) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), StagTypedRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[9])));
            }
            {
              AllTypedRvals_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), AllTypedRvals_34, 0) = ((MR_Box) (StagTypedRval_37));
              MR_hl_field(MR_mktag(1), AllTypedRvals_34, 1) = ((MR_Box) (PackedArgTypedRvals_32));
            }
            ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_34, &DataAddr_38, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (DataAddr_38));
              MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              CellPtrConst_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellPtrConst_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), CellPtrConst_40, 1) = ((MR_Box) (Var_76));
            }
            {
              Rval_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_96, 0) = ((MR_Box) (Ptag_95));
              MR_hl_field(MR_mktag(2), Rval_96, 1) = ((MR_Box) (CellPtrConst_40));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypedRval_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_96));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word UnboxedFloats_8,
  MR_Word UnboxedInt64s_9,
  MR_Word ConstStructMap_10,
  MR_Word HeadVar__5_5,
  MR_Word * TypedRval_13)
{
  {
    MR_Word ConstArg_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ArgPosWidth_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) ConstArg_11)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer ConstNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConstArg_11, (MR_Integer) 0))));
      MR_Box conv0_TypedRval_13;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_10, ConstNum_14, &conv0_TypedRval_13);
      *TypedRval_13 = ((MR_Word) (conv0_TypedRval_13));
    }
    else
    {
      MR_Word ConsId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_11, (MR_Integer) 0))));
      MR_Word ConsTag_17;
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConstArg_11, (MR_Integer) 1))));

      ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_15);
      ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_8, UnboxedInt64s_9, ConsTag_17, ArgPosWidth_12, TypedRval_13);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnboxedFloats_2,
  MR_Word UnboxedInt64s_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__5_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__6_6 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      MR_Word ConstArgPosWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ConstArgsPosWidths_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word _ConstArg_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_15, (MR_Integer) 0))));
      MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_15, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__5_5 = ConstArgsPosWidths_16;

            // direct tailcall eliminated
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word HeadTypedRval_25;
            MR_Word TailTypedRvals_26;

            if (((MR_tag((MR_Word) _ConstArg_18)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Integer ConstNum_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_18, (MR_Integer) 0))));
              MR_Box conv0_HeadTypedRval_25;

              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_61, &conv0_HeadTypedRval_25);
              HeadTypedRval_25 = ((MR_Word) (conv0_HeadTypedRval_25));
            }
            else
            {
              MR_Word ConsId_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_18, (MR_Integer) 0))));
              MR_Word ConsTag_64;
              MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_18, (MR_Integer) 1))));

              ConsTag_64 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_62);
              ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_64, ArgPosWidth_19, &HeadTypedRval_25);
            }
            ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsPosWidths_16, &TailTypedRvals_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTypedRval_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTypedRvals_26));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgFill_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 5))));
                MR_Word FirstTypedRval_32;
                MR_Word FirstRval_33;
                MR_Word CastFirstRval_35;
                MR_Word LeftOverConstArgsPosWidths_36;
                MR_Word HeadRval_37;
                MR_Word HeadTypedRval_52;
                MR_Word TailTypedRvals_53;
                MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 1))));
                MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 2))));
                MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 3))));
                MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 4))));
                MR_Word _FirstRvalType_34;

                if (((MR_tag((MR_Word) _ConstArg_18)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Integer ConstNum_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_18, (MR_Integer) 0))));
                  MR_Box conv1_FirstTypedRval_32;

                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_74, &conv1_FirstTypedRval_32);
                  FirstTypedRval_32 = ((MR_Word) (conv1_FirstTypedRval_32));
                }
                else
                {
                  MR_Word ConsId_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_18, (MR_Integer) 0))));
                  MR_Word ConsTag_77;
                  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_18, (MR_Integer) 1))));

                  ConsTag_77 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_75);
                  ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_77, ArgPosWidth_19, &FirstTypedRval_32);
                }
                FirstRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstTypedRval_32, (MR_Integer) 0))));
                _FirstRvalType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstTypedRval_32, (MR_Integer) 1))));
                switch (ArgFill_31) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 4:
                    CastFirstRval_35 = FirstRval_33;
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        CastFirstRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[1])));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 2) = ((MR_Box) (FirstRval_33));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      {
                        CastFirstRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[2])));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 2) = ((MR_Box) (FirstRval_33));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        CastFirstRval_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
                        MR_hl_field(MR_mktag(3), CastFirstRval_35, 2) = ((MR_Box) (FirstRval_33));
                      }
                    }
                    break;
                }
                ll_backend__unify_gen__generate_const_struct_args_for_one_word_8_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsPosWidths_16, &LeftOverConstArgsPosWidths_36, CastFirstRval_35, &HeadRval_37);
                {
                  HeadTypedRval_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HeadTypedRval_52, 0) = ((MR_Box) (HeadRval_37));
                  MR_hl_field(MR_mktag(0), HeadTypedRval_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[12])));
                }
                ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, LeftOverConstArgsPosWidths_36, &TailTypedRvals_53);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTypedRval_52));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTypedRvals_53));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_args\'/6", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_args\'/6", (MR_String) "apw_none_shifted");
                  return;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_for_one_word_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word UnboxedFloats_2,
  MR_Word UnboxedInt64s_3,
  MR_Word ConstStructMap_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__5_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__6_6 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *HeadVar__8_8 = HeadVar__7_7;
    }
    else
    {
      MR_Word ConstArgPosWidth_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ConstArgsPosWidths_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word _ConstArg_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_18, (MR_Integer) 0))));
      MR_Word ArgPosWidth_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstArgPosWidth_18, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__6_6 = HeadVar__5_5;
                *HeadVar__8_8 = HeadVar__7_7;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgShift_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 3))));
                MR_Word Fill_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 6))));
                MR_Word ArgTypedRval_41;
                MR_Word ArgRval_42;
                MR_Word NextRval_47;
                MR_Integer ArgShiftInt_66;
                MR_Word CastArgRval_67;
                MR_Word ShiftedArgRval_68;
                MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 1))));
                MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 2))));
                MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 4))));
                MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_24, (MR_Integer) 5))));
                MR_Word _ArgRvalType_43;
                MR_Word Var_87;
                MR_Integer Var_88;
                MR_Word next_value_of_HeadVar__5_5;
                MR_Word next_value_of_HeadVar__7_7;

                if (((MR_tag((MR_Word) _ConstArg_23)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Integer ConstNum_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), _ConstArg_23, (MR_Integer) 0))));
                  MR_Box conv0_ArgTypedRval_41;

                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_4, ConstNum_55, &conv0_ArgTypedRval_41);
                  ArgTypedRval_41 = ((MR_Word) (conv0_ArgTypedRval_41));
                }
                else
                {
                  MR_Word ConsId_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_23, (MR_Integer) 0))));
                  MR_Word ConsTag_58;
                  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), _ConstArg_23, (MR_Integer) 1))));

                  ConsTag_58 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_56);
                  ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_58, ArgPosWidth_24, &ArgTypedRval_41);
                }
                ArgRval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_41, (MR_Integer) 0))));
                _ArgRvalType_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_41, (MR_Integer) 1))));
                ArgShiftInt_66 = (MR_Integer) (ArgShift_37);
                switch (Fill_40) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 4:
                    CastArgRval_67 = ArgRval_42;
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        CastArgRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[1])));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 2) = ((MR_Box) (ArgRval_42));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      {
                        CastArgRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[2])));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 2) = ((MR_Box) (ArgRval_42));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        CastArgRval_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
                        MR_hl_field(MR_mktag(3), CastArgRval_67, 2) = ((MR_Box) (ArgRval_42));
                      }
                    }
                    break;
                }
                succeeded = (ArgShiftInt_66 == (MR_Integer) 0);
                if (succeeded)
                  ShiftedArgRval_68 = CastArgRval_67;
                else
                {
                  MR_Word Var_69;
                  MR_Integer Var_70;

                  succeeded = ((((MR_tag((MR_Word) ArgRval_42)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgRval_42, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_42, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))));
                      succeeded = (Var_70 == (MR_Integer) 0);
                    }
                  }
                  if (succeeded)
                    ShiftedArgRval_68 = CastArgRval_67;
                  else
                  {
                    MR_Word Var_73;
                    MR_Word Var_74;

                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (ArgShiftInt_66));
                    }
                    {
                      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
                    }
                    {
                      ShiftedArgRval_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_68, 2) = ((MR_Box) (CastArgRval_67));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_68, 3) = ((MR_Box) (Var_73));
                    }
                  }
                }
                succeeded = ((((MR_tag((MR_Word) HeadVar__7_7)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__7_7, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__7_7, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_87)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_88 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_87, (MR_Integer) 0))));
                    succeeded = (Var_88 == (MR_Integer) 0);
                  }
                }
                if (succeeded)
                  NextRval_47 = ShiftedArgRval_68;
                else
                {
                  MR_Word Var_89;
                  MR_Integer Var_90;

                  succeeded = ((((MR_tag((MR_Word) ShiftedArgRval_68)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ShiftedArgRval_68, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ShiftedArgRval_68, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 0))));
                      succeeded = (Var_90 == (MR_Integer) 0);
                    }
                  }
                  if (succeeded)
                    NextRval_47 = HeadVar__7_7;
                  else
                  {
                    {
                      NextRval_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), NextRval_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), NextRval_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
                      MR_hl_field(MR_mktag(3), NextRval_47, 2) = ((MR_Box) (HeadVar__7_7));
                      MR_hl_field(MR_mktag(3), NextRval_47, 3) = ((MR_Box) (ShiftedArgRval_68));
                    }
                  }
                }
                // direct tailcall eliminated
                next_value_of_HeadVar__5_5 = ConstArgsPosWidths_19;
                next_value_of_HeadVar__7_7 = NextRval_47;
                HeadVar__5_5 = next_value_of_HeadVar__5_5;
                HeadVar__7_7 = next_value_of_HeadVar__7_7;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__5_5 = ConstArgsPosWidths_19;

                // direct tailcall eliminated
                HeadVar__5_5 = next_value_of_HeadVar__5_5;
                continue;
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1941__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(
  MR_Word UnboxedFloats_6,
  MR_Word UnboxedInt64s_7,
  MR_Word ConsTag_8,
  MR_Word ArgPosWidth_9,
  MR_Word * TypedRval_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/5", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *TypedRval_10 = (MR_Word) (&ll_backend__unify_gen_scalar_common_1[13]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_8, (MR_Integer) 0))));
          MR_Word Const_97;
          MR_Word Var_99;

          {
            Const_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_97, 1) = ((MR_Box) (String_11));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (Const_97));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_99));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_21 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_8, (MR_Integer) 0)));
          MR_Word Const_88;
          MR_Word Type_89;
          MR_Word Var_90;

          {
            Const_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_88, 1) = MR_box_float(Float_21);
          }
          switch (UnboxedFloats_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_22;
                MR_Word Var_23;
                MR_Word Var_24;

                succeeded = ((MR_tag((MR_Word) ArgPosWidth_9)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_9, (MR_Integer) 0))));
                  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_9, (MR_Integer) 1))));
                  Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_9, (MR_Integer) 2))));
                  Type_89 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
                }
                else
                  Type_89 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              }
              break;
            case (MR_Integer) 0:
              Type_89 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
              break;
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Const_88));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_89));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_Word IntType_15;
              MR_Word Const_94;
              MR_Word Type_95;
              MR_Word Var_96;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_14, &Const_94, &IntType_15);
              switch (IntType_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 4:
                case (MR_Integer) 6:
                case (MR_Integer) 2:
                  {
                    Type_95 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[9]));
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  switch (UnboxedInt64s_7) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_16;
                        MR_Word Var_17;
                        MR_Word Var_18;

                        succeeded = ((MR_tag((MR_Word) ArgPosWidth_9)) == (MR_mktag((MR_Integer) 2)));
                        if (succeeded)
                        {
                          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_9, (MR_Integer) 0))));
                          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_9, (MR_Integer) 1))));
                          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_9, (MR_Integer) 2))));
                          {
                            Type_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Type_95, 0) = ((MR_Box) (IntType_15));
                          }
                        }
                        else
                          Type_95 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        Type_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Type_95, 0) = ((MR_Box) (IntType_15));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 3:
                  {
                    Type_95 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[12]));
                  }
                  break;
              }
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (Const_94));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_95));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_String Val_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Word Var_69;
              MR_Word Const_91;
              MR_Word Type_92;
              MR_Word Var_93;

              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Lang_19));
                MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_69, (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/5", (MR_String) "foreign_tag for language other than C");
              Type_92 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[9]));
              {
                Const_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_91, 1) = ((MR_Box) (Val_20));
                MR_hl_field(MR_mktag(3), Const_91, 2) = ((MR_Box) (Type_92));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Const_91));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_92));
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/5", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_String TypeName_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Integer TypeArity_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 3))));
              MR_Word RttiTypeCtor_31;
              MR_Word DataId_32;
              MR_Word Var_60;
              MR_Word Var_62;
              MR_Word Rval_82;

              {
                RttiTypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_31, 0) = ((MR_Box) (ModuleName_28));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_31, 1) = ((MR_Box) (TypeName_29));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_31, 2) = ((MR_Box) (TypeArity_30));
              }
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (RttiTypeCtor_31));
                MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              {
                DataId_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_32, 0) = ((MR_Box) (Var_60));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (DataId_32));
                MR_hl_field(MR_mktag(3), Var_62, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Rval_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_82, 1) = ((MR_Box) (Var_62));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_82));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_String Instance_34 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 3))));
              MR_Word TCName_35;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Rval_84;
              MR_Word ModuleName_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_Word DataId_86;

              TCName_35 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_33);
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ModuleName_85));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Instance_34));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (TCName_35));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
              }
              {
                DataId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_86, 0) = ((MR_Box) (Var_56));
              }
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (DataId_86));
                MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Rval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_84, 1) = ((MR_Box) (Var_58));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_84));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
              MR_Integer Stag_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2))));
              MR_Word Rval_27;
              MR_Word Var_64;
              MR_Word Var_66;
              MR_Word Var_67;

              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Stag_26));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (Var_66));
              }
              {
                Rval_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_27, 0) = ((MR_Box) (Ptag_25));
                MR_hl_field(MR_mktag(2), Rval_27, 1) = ((MR_Box) (Var_64));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_27));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
  MR_Word CellArg_6,
  MR_Integer ArgOffset_7,
  MR_Integer * NextOffset_8,
  MR_Word STATE_VARIABLE_RevFieldAddrs_0_17,
  MR_Word * STATE_VARIABLE_RevFieldAddrs_18)
{
  switch (MR_tag((MR_Word) CellArg_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CellArg_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 1);
            *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
          }
          break;
        case (MR_Integer) 1:
          {
            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 2);
            *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 1);
        *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
      }
      break;
    case (MR_Integer) 2:
      {
        *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 2);
        *STATE_VARIABLE_RevFieldAddrs_18 = STATE_VARIABLE_RevFieldAddrs_0_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 1))));
            MR_Word FieldAddr_16;
            MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 2))));

            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 1);
            {
              FieldAddr_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldAddr_16, 0) = ((MR_Box) (ArgOffset_7));
              MR_hl_field(MR_mktag(0), FieldAddr_16, 1) = ((MR_Box) (Var_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevFieldAddrs_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAddr_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevFieldAddrs_0_17));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 1))));
            MR_Word FieldAddr_25;
            MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 2))));

            *NextOffset_8 = (MR_Integer) ((MR_Unsigned) ArgOffset_7 + (MR_Unsigned) (MR_Integer) 2);
            {
              FieldAddr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FieldAddr_25, 0) = ((MR_Box) (ArgOffset_7));
              MR_hl_field(MR_mktag(0), FieldAddr_25, 1) = ((MR_Box) (Var_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevFieldAddrs_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAddr_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevFieldAddrs_0_17));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConstStructMap_24;
    MR_Word conv0_STATE_VARIABLE_StaticCellInfo_26;

    ll_backend__unify_gen__generate_const_struct_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstStructMap_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_StaticCellInfo_26);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstStructMap_24));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_StaticCellInfo_26));
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ConstStructMap_6,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18)
{
  {
    MR_Word Globals_8;
    MR_Word OptUnboxedFloats_9;
    MR_Word UnboxedFloats_10;
    MR_Word OptUnboxedInt64s_11;
    MR_Word UnboxedInt64s_12;
    MR_Word ConstStructDb_13;
    MR_Word ConstStructs_14;
    MR_Word StaticCellInfo0_15;
    MR_Word StaticCellInfo_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Box conv3_ConstStructMap_6;
    MR_Box conv2_StaticCellInfo_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 257, &OptUnboxedFloats_9);
    switch (OptUnboxedFloats_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedFloats_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedFloats_10 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 258, &OptUnboxedInt64s_11);
    switch (OptUnboxedInt64s_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedInt64s_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedInt64s_12 = (MR_Integer) 0;
        break;
    }
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_5, &ConstStructDb_13);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_13, &ConstStructs_14);
    ll_backend__global_data__global_data_get_static_cell_info_2_p_0(STATE_VARIABLE_GlobalData_0_17, &StaticCellInfo0_15);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_structs_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (UnboxedFloats_10));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (UnboxedInt64s_12));
    }
    Var_22 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_2[0]), (MR_Word) (&ll_backend__unify_gen_scalar_common_2[1]), (MR_Word) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0), Var_21, ConstStructs_14, ((MR_Box) (Var_22)), &conv3_ConstStructMap_6, ((MR_Box) (StaticCellInfo0_15)), &conv2_StaticCellInfo_16);
    *ConstStructMap_6 = ((MR_Word) (conv3_ConstStructMap_6));
    StaticCellInfo_16 = ((MR_Word) (conv2_StaticCellInfo_16));
    ll_backend__global_data__global_data_set_static_cell_info_3_p_0(StaticCellInfo_16, STATE_VARIABLE_GlobalData_0_17, STATE_VARIABLE_GlobalData_18);
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_ground_term_6_p_0(
  MR_Word TermVar_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_CI_0_31,
  MR_Word * STATE_VARIABLE_CI_32,
  MR_Word STATE_VARIABLE_CLD_0_33,
  MR_Word * STATE_VARIABLE_CLD_34)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
    MR_Word NonLocals_13;
    MR_Word NonLocalList_14;

    NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_12);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, &NonLocalList_14);
    if ((NonLocalList_14 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_CI_32 = STATE_VARIABLE_CI_0_31;
      *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_0_33;
    }
    else
    {
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_14, (MR_Integer) 1))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonLocalList_14, (MR_Integer) 0))));

      if ((Var_55 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), ((MR_Box) (Var_56)), ((MR_Box) (TermVar_7)));
        if (succeeded)
        {
          MR_Word Conjuncts_16;
          MR_Word Var_39;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
            Conjuncts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
            succeeded = (Var_39 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Word ModuleInfo_17;
            MR_Word ExprnOpts_18;
            MR_Word UnboxedFloats_19;
            MR_Word StaticCellInfo0_20;
            MR_Word ActiveMap0_21;
            MR_Word StaticCellInfo_22;
            MR_Word ActiveMap_23;
            MR_Word ActivePairs_24;
            MR_Word GroundTerm_25;
            MR_Word TypeInfo_58_58;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_54;

            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_31, &ModuleInfo_17);
            ll_backend__code_info__get_exprn_opts_2_p_0(STATE_VARIABLE_CI_0_31, &ExprnOpts_18);
            UnboxedFloats_19 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_18);
            ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_0_31, &StaticCellInfo0_20);
            mercury__map__init_1_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), &ActiveMap0_21);
            ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(ModuleInfo_17, Conjuncts_16, UnboxedFloats_19, StaticCellInfo0_20, &StaticCellInfo_22, ActiveMap0_21, &ActiveMap_23);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ActiveMap_23, &ActivePairs_24);
            succeeded = ((MR_tag((MR_Word) ActivePairs_24)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActivePairs_24, (MR_Integer) 0))));
              Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ActivePairs_24, (MR_Integer) 1))));
              Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
              GroundTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1))));
              TypeInfo_58_58 = (MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (TermVar_7)), ((MR_Box) (Var_54)));
              if (succeeded)
                succeeded = (Var_41 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Rval_26;
              MR_Word STATE_VARIABLE_CLD_42_42;
              MR_Word Var_27;

              ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(NonLocals_13, STATE_VARIABLE_CLD_0_33, &STATE_VARIABLE_CLD_42_42);
              ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_22, STATE_VARIABLE_CI_0_31, STATE_VARIABLE_CI_32);
              Rval_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_25, (MR_Integer) 0))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_25, (MR_Integer) 1))));
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(TermVar_7, Rval_26, *STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_42_42, STATE_VARIABLE_CLD_34);
            }
            else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "no active pairs");
                return;
              }
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "malformed goal");
              return;
            }
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "unexpected nonlocal");
            return;
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "unexpected nonlocals");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_4,
  MR_Word * STATE_VARIABLE_StaticCellInfo_5,
  MR_Word STATE_VARIABLE_ActiveMap_0_6,
  MR_Word * STATE_VARIABLE_ActiveMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ActiveMap_7 = STATE_VARIABLE_ActiveMap_0_6;
      *STATE_VARIABLE_StaticCellInfo_5 = STATE_VARIABLE_StaticCellInfo_0_4;
    }
    else
    {
      MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_StaticCellInfo_26_26;
      MR_Word STATE_VARIABLE_ActiveMap_27_27;
      MR_Word GoalExpr_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0))));
      MR_Word _GoalInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 1))));
      MR_Word Var_46;
      MR_Word ConsId_47;
      MR_Word ArgVars_48;
      MR_Word Unify_44;
      MR_Word SubInfo_52;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_StaticCellInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_6;

      succeeded = ((MR_tag((MR_Word) GoalExpr_39)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 0))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 1))));
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 2))));
        Unify_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 3))));
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) Unify_44)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 0))));
          ConsId_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 1))));
          ArgVars_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 2))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 3))));
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 4))));
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 5))));
          SubInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 6))));
          succeeded = (SubInfo_52 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word ConsTag_53;
        MR_Word ArgVarsWidths_54;

        ConsTag_53 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(HeadVar__1_1, ConsId_47);
        ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), HeadVar__1_1, ConsId_47, ArgVars_48, &ArgVarsWidths_54);
        ll_backend__unify_gen__generate_ground_term_conjunct_tag_8_p_0(Var_46, ConsTag_53, ArgVarsWidths_54, HeadVar__3_3, STATE_VARIABLE_StaticCellInfo_0_4, &STATE_VARIABLE_StaticCellInfo_26_26, STATE_VARIABLE_ActiveMap_0_6, &STATE_VARIABLE_ActiveMap_27_27);
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct\'/7", (MR_String) "malformed goal");
          return;
        }
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Goals_18;
      next_value_of_STATE_VARIABLE_StaticCellInfo_0_4 = STATE_VARIABLE_StaticCellInfo_26_26;
      next_value_of_STATE_VARIABLE_ActiveMap_0_6 = STATE_VARIABLE_ActiveMap_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_StaticCellInfo_0_4 = next_value_of_STATE_VARIABLE_StaticCellInfo_0_4;
      STATE_VARIABLE_ActiveMap_0_6 = next_value_of_STATE_VARIABLE_ActiveMap_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2104__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_8_p_0(
  MR_Word Var_9,
  MR_Word ConsTag_10,
  MR_Word ArgVarsWidths_11,
  MR_Word UnboxedFloats_12,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_67,
  MR_Word * STATE_VARIABLE_StaticCellInfo_68,
  MR_Word STATE_VARIABLE_ActiveMap_0_69,
  MR_Word * STATE_VARIABLE_ActiveMap_70)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word AllTypedRvals_176;
              MR_Word DataAddr_177;
              MR_Word CellPtrConst_179;
              MR_Word STATE_VARIABLE_ActiveMap_73_180;
              MR_Word Var_181;
              MR_Word ActiveGroundTerm_183;
              MR_Word Rval_185;

              ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &AllTypedRvals_176, STATE_VARIABLE_ActiveMap_0_69, &STATE_VARIABLE_ActiveMap_73_180);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_176, &DataAddr_177, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
              {
                Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_181, 1) = ((MR_Box) (DataAddr_177));
                MR_hl_field(MR_mktag(3), Var_181, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_179, 1) = ((MR_Box) (Var_181));
              }
              {
                Rval_185 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_185, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Rval_185, 1) = ((MR_Box) (CellPtrConst_179));
              }
              {
                ActiveGroundTerm_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_183, 0) = ((MR_Box) (Rval_185));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_183)), STATE_VARIABLE_ActiveMap_73_180, STATE_VARIABLE_ActiveMap_70);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[13])), STATE_VARIABLE_ActiveMap_0_69, STATE_VARIABLE_ActiveMap_70);
              *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
            }
            break;
          case (MR_Integer) 2:
            {
              if ((ArgVarsWidths_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1))));
                MR_Word Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0))));

                if ((Var_209 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ArgVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_210, (MR_Integer) 0))));
                  MR_Word RvalType_29;
                  MR_Word STATE_VARIABLE_ActiveMap_96_96;
                  MR_Word _ArgPosWidth_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_210, (MR_Integer) 1))));
                  MR_Box conv1_RvalType_29;

                  mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_27)), &conv1_RvalType_29, STATE_VARIABLE_ActiveMap_0_69, &STATE_VARIABLE_ActiveMap_96_96);
                  RvalType_29 = ((MR_Word) (conv1_RvalType_29));
                  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (RvalType_29)), STATE_VARIABLE_ActiveMap_96_96, STATE_VARIABLE_ActiveMap_70);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "no_tag arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_10, (MR_Integer) 0))));
          MR_Word Const_188;
          MR_Word ActiveGroundTerm_190;
          MR_Word Var_191;

          {
            Const_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_188, 1) = ((MR_Box) (String_15));
          }
          {
            Var_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_191, 1) = ((MR_Box) (Const_188));
          }
          {
            ActiveGroundTerm_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_190, 0) = ((MR_Box) (Var_191));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_190)), STATE_VARIABLE_ActiveMap_0_69, STATE_VARIABLE_ActiveMap_70);
          *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_10, (MR_Integer) 0)));
          MR_Word Const_153;
          MR_Word Type_154;
          MR_Word ActiveGroundTerm_155;
          MR_Word Var_156;

          {
            Const_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_153, 1) = MR_box_float(Float_22);
          }
          switch (UnboxedFloats_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Type_154 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              break;
            case (MR_Integer) 0:
              Type_154 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
              break;
          }
          {
            Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_156, 1) = ((MR_Box) (Const_153));
          }
          {
            ActiveGroundTerm_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_155, 0) = ((MR_Box) (Var_156));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_155, 1) = ((MR_Box) (Type_154));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_155)), STATE_VARIABLE_ActiveMap_0_69, STATE_VARIABLE_ActiveMap_70);
          *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
              MR_Word IntType_19;
              MR_Word Const_165;
              MR_Word Type_166;
              MR_Word ActiveGroundTerm_167;
              MR_Word Var_168;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_18, &Const_165, &IntType_19);
              {
                Type_166 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Type_166, 0) = ((MR_Box) (IntType_19));
              }
              {
                Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_168, 1) = ((MR_Box) (Const_165));
              }
              {
                ActiveGroundTerm_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_167, 0) = ((MR_Box) (Var_168));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_167, 1) = ((MR_Box) (Type_166));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_167)), STATE_VARIABLE_ActiveMap_0_69, STATE_VARIABLE_ActiveMap_70);
              *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
              MR_String Val_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2))));
              MR_Word Var_104;
              MR_Word Const_159;
              MR_Word Type_160;
              MR_Word ActiveGroundTerm_161;
              MR_Word Var_162;

              {
                Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (ll_backend__unify_gen__generate_ground_term_conjunct_tag_8_p_0_1));
                MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (Lang_20));
                MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_104, (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "foreign_tag for language other than C");
              Type_160 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[9]));
              {
                Const_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_159, 1) = ((MR_Box) (Val_21));
                MR_hl_field(MR_mktag(3), Const_159, 2) = ((MR_Box) (Type_160));
              }
              {
                Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (Const_159));
              }
              {
                ActiveGroundTerm_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_161, 0) = ((MR_Box) (Var_162));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_161, 1) = ((MR_Box) (Type_160));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_161)), STATE_VARIABLE_ActiveMap_0_69, STATE_VARIABLE_ActiveMap_70);
              *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word AllTypedRvals_195;
              MR_Word DataAddr_196;
              MR_Word CellPtrConst_198;
              MR_Word STATE_VARIABLE_ActiveMap_73_199;
              MR_Word Var_200;
              MR_Word ActiveGroundTerm_202;
              MR_Integer Ptag_203 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
              MR_Word Rval_204;

              ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &AllTypedRvals_195, STATE_VARIABLE_ActiveMap_0_69, &STATE_VARIABLE_ActiveMap_73_199);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_195, &DataAddr_196, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
              {
                Var_200 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_200, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_200, 1) = ((MR_Box) (DataAddr_196));
                MR_hl_field(MR_mktag(3), Var_200, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_198, 1) = ((MR_Box) (Var_200));
              }
              {
                Rval_204 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_204, 0) = ((MR_Box) (Ptag_203));
                MR_hl_field(MR_mktag(2), Rval_204, 1) = ((MR_Box) (CellPtrConst_198));
              }
              {
                ActiveGroundTerm_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_202, 0) = ((MR_Box) (Rval_204));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_202)), STATE_VARIABLE_ActiveMap_73_199, STATE_VARIABLE_ActiveMap_70);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_126 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));

              if ((ArgVarsWidths_11 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "direct_arg_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1))));
                MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0))));

                if ((Var_207 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ArgRval_33;
                  MR_Word Var_87;
                  MR_Word STATE_VARIABLE_ActiveMap_88_88;
                  MR_Word ActiveGroundTerm_117;
                  MR_Word Rval_118;
                  MR_Word ArgVar_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_208, (MR_Integer) 0))));
                  MR_Word _ArgPosWidth_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_208, (MR_Integer) 1))));
                  MR_Box conv0_Var_87;
                  MR_Word _RvalType_34;

                  mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_119)), &conv0_Var_87, STATE_VARIABLE_ActiveMap_0_69, &STATE_VARIABLE_ActiveMap_88_88);
                  Var_87 = ((MR_Word) (conv0_Var_87));
                  ArgRval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 0))));
                  _RvalType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_87, (MR_Integer) 1))));
                  {
                    Rval_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Rval_118, 0) = ((MR_Box) (Ptag_126));
                    MR_hl_field(MR_mktag(2), Rval_118, 1) = ((MR_Box) (ArgRval_33));
                  }
                  {
                    ActiveGroundTerm_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_117, 0) = ((MR_Box) (Rval_118));
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_117)), STATE_VARIABLE_ActiveMap_88_88, STATE_VARIABLE_ActiveMap_70);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "direct_arg_tag arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word PackedArgTypedRvals_40;
              MR_Word AllTypedRvals_42;
              MR_Word StagTypedRval_44;
              MR_Word DataAddr_45;
              MR_Word CellPtrConst_47;
              MR_Word STATE_VARIABLE_ActiveMap_73_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_79;
              MR_Integer Stag_131;
              MR_Word ActiveGroundTerm_134;
              MR_Integer Ptag_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
              MR_Word Rval_137;
              MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2))));
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 3))));
              MR_Word _AddedBy_43;
              MR_Integer _Ptag_130;

              ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &PackedArgTypedRvals_40, STATE_VARIABLE_ActiveMap_0_69, &STATE_VARIABLE_ActiveMap_73_73);
              _Ptag_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
              Stag_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2))));
              _AddedBy_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 3))));
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Stag_131));
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (Var_75));
              }
              {
                StagTypedRval_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagTypedRval_44, 0) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(0), StagTypedRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[9])));
              }
              {
                AllTypedRvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllTypedRvals_42, 0) = ((MR_Box) (StagTypedRval_44));
                MR_hl_field(MR_mktag(1), AllTypedRvals_42, 1) = ((MR_Box) (PackedArgTypedRvals_40));
              }
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_42, &DataAddr_45, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (DataAddr_45));
                MR_hl_field(MR_mktag(3), Var_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_47, 1) = ((MR_Box) (Var_79));
              }
              {
                Rval_137 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_137, 0) = ((MR_Box) (Ptag_135));
                MR_hl_field(MR_mktag(2), Rval_137, 1) = ((MR_Box) (CellPtrConst_47));
              }
              {
                ActiveGroundTerm_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_134, 0) = ((MR_Box) (Rval_137));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_134)), STATE_VARIABLE_ActiveMap_73_73, STATE_VARIABLE_ActiveMap_70);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1))));
              MR_Integer Stag_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2))));
              MR_Word Rval_26;
              MR_Word Var_98;
              MR_Word Var_100;
              MR_Word Var_101;
              MR_Word ActiveGroundTerm_115;

              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Stag_25));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (Var_101));
              }
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_98, 2) = ((MR_Box) (Var_100));
              }
              {
                Rval_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_26, 0) = ((MR_Box) (Ptag_24));
                MR_hl_field(MR_mktag(2), Rval_26, 1) = ((MR_Box) (Var_98));
              }
              {
                ActiveGroundTerm_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_115, 0) = ((MR_Box) (Rval_26));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_115)), STATE_VARIABLE_ActiveMap_0_69, STATE_VARIABLE_ActiveMap_70);
              *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ActiveMap_0_3,
  MR_Word * STATE_VARIABLE_ActiveMap_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *STATE_VARIABLE_ActiveMap_4 = STATE_VARIABLE_ActiveMap_0_3;
    }
    else
    {
      MR_Word ArgVarWidth_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVarsWidths_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypedRval_10;
      MR_Word TypedRvals_11;
      MR_Word ArgVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_8, (MR_Integer) 0))));
      MR_Word ArgPosWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_8, (MR_Integer) 1))));
      MR_Word ArgTypedRval_15;
      MR_Word STATE_VARIABLE_ActiveMap_40_40;
      MR_Box conv0_ArgTypedRval_15;

      mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_13)), &conv0_ArgTypedRval_15, STATE_VARIABLE_ActiveMap_0_3, &STATE_VARIABLE_ActiveMap_40_40);
      ArgTypedRval_15 = ((MR_Word) (conv0_ArgTypedRval_15));
      switch (MR_tag((MR_Word) ArgPosWidth_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_args\'/4", (MR_String) "apw_none_nowhere");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            TypedRval_10 = ArgTypedRval_15;
            ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_9, &TypedRvals_11, STATE_VARIABLE_ActiveMap_40_40, STATE_VARIABLE_ActiveMap_4);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DoubleWordKind_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_14, (MR_Integer) 2))));
            MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_14, (MR_Integer) 0))));
            MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_14, (MR_Integer) 1))));
            MR_Word ArgRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 0))));
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 1))));

            succeeded = (Var_51 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            if (succeeded)
              switch (DoubleWordKind_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                      MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                      MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[10])));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (ArgRval_21));
                      MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[11])));
                    }
                  }
                  break;
              }
            else
              TypedRval_10 = ArgTypedRval_15;
            ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_9, &TypedRvals_11, STATE_VARIABLE_ActiveMap_40_40, STATE_VARIABLE_ActiveMap_4);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LeftOverArgVarsWidths_28;
                MR_Word WordRval_29;
                MR_Word STATE_VARIABLE_ActiveMap_47_47;
                MR_Word ArgRval_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 0))));
                MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_15, (MR_Integer) 1))));

                ll_backend__unify_gen__generate_ground_term_args_for_one_word_6_p_0(ArgVarsWidths_9, &LeftOverArgVarsWidths_28, ArgRval_59, &WordRval_29, STATE_VARIABLE_ActiveMap_40_40, &STATE_VARIABLE_ActiveMap_47_47);
                {
                  TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (WordRval_29));
                  MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[12])));
                }
                ll_backend__unify_gen__generate_ground_term_args_4_p_0(LeftOverArgVarsWidths_28, &TypedRvals_11, STATE_VARIABLE_ActiveMap_47_47, STATE_VARIABLE_ActiveMap_4);
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_args\'/4", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_args\'/4", (MR_String) "apw_none_shifted");
                  return;
                }
              }
              break;
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypedRval_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypedRvals_11));
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_for_one_word_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word CurRval_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ActiveMap_0_5,
  MR_Word * STATE_VARIABLE_ActiveMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      *HeadVar__4_4 = CurRval_3;
      *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
    }
    else
    {
      MR_Word ArgVarWidth_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgVarsWidths_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_11, (MR_Integer) 0))));
      MR_Word ArgPosWidth_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgVarWidth_11, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *HeadVar__4_4 = CurRval_3;
            *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = HeadVar__1_1;
            *HeadVar__4_4 = CurRval_3;
            *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__2_2 = HeadVar__1_1;
                *HeadVar__4_4 = CurRval_3;
                *STATE_VARIABLE_ActiveMap_6 = STATE_VARIABLE_ActiveMap_0_5;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgShift_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 3))));
                MR_Word Fill_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 6))));
                MR_Word ArgTypedRval_35;
                MR_Word ArgRval_36;
                MR_Word NextRval_51;
                MR_Word STATE_VARIABLE_ActiveMap_45_52;
                MR_Integer ArgShiftInt_58;
                MR_Word CastArgRval_59;
                MR_Word ShiftedArgRval_60;
                MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 1))));
                MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 2))));
                MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 4))));
                MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_18, (MR_Integer) 5))));
                MR_Box conv1_ArgTypedRval_35;
                MR_Word _ArgRvalType_37;
                MR_Word Var_79;
                MR_Integer Var_80;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_CurRval_3;
                MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_5;

                mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_17)), &conv1_ArgTypedRval_35, STATE_VARIABLE_ActiveMap_0_5, &STATE_VARIABLE_ActiveMap_45_52);
                ArgTypedRval_35 = ((MR_Word) (conv1_ArgTypedRval_35));
                ArgRval_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_35, (MR_Integer) 0))));
                _ArgRvalType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypedRval_35, (MR_Integer) 1))));
                ArgShiftInt_58 = (MR_Integer) (ArgShift_31);
                switch (Fill_34) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 4:
                    CastArgRval_59 = ArgRval_36;
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        CastArgRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[1])));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 2) = ((MR_Box) (ArgRval_36));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      {
                        CastArgRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[2])));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 2) = ((MR_Box) (ArgRval_36));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        CastArgRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
                        MR_hl_field(MR_mktag(3), CastArgRval_59, 2) = ((MR_Box) (ArgRval_36));
                      }
                    }
                    break;
                }
                succeeded = (ArgShiftInt_58 == (MR_Integer) 0);
                if (succeeded)
                  ShiftedArgRval_60 = CastArgRval_59;
                else
                {
                  MR_Word Var_61;
                  MR_Integer Var_62;

                  succeeded = ((((MR_tag((MR_Word) ArgRval_36)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgRval_36, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgRval_36, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0))));
                      succeeded = (Var_62 == (MR_Integer) 0);
                    }
                  }
                  if (succeeded)
                    ShiftedArgRval_60 = CastArgRval_59;
                  else
                  {
                    MR_Word Var_65;
                    MR_Word Var_66;

                    {
                      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ArgShiftInt_58));
                    }
                    {
                      Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
                    }
                    {
                      ShiftedArgRval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_60, 2) = ((MR_Box) (CastArgRval_59));
                      MR_hl_field(MR_mktag(3), ShiftedArgRval_60, 3) = ((MR_Box) (Var_65));
                    }
                  }
                }
                succeeded = ((((MR_tag((MR_Word) CurRval_3)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CurRval_3, (MR_Integer) 0))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CurRval_3, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 0))));
                    succeeded = (Var_80 == (MR_Integer) 0);
                  }
                }
                if (succeeded)
                  NextRval_51 = ShiftedArgRval_60;
                else
                {
                  MR_Word Var_81;
                  MR_Integer Var_82;

                  succeeded = ((((MR_tag((MR_Word) ShiftedArgRval_60)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ShiftedArgRval_60, (MR_Integer) 0))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ShiftedArgRval_60, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_81, (MR_Integer) 0))));
                      succeeded = (Var_82 == (MR_Integer) 0);
                    }
                  }
                  if (succeeded)
                    NextRval_51 = CurRval_3;
                  else
                  {
                    {
                      NextRval_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), NextRval_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), NextRval_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
                      MR_hl_field(MR_mktag(3), NextRval_51, 2) = ((MR_Box) (CurRval_3));
                      MR_hl_field(MR_mktag(3), NextRval_51, 3) = ((MR_Box) (ShiftedArgRval_60));
                    }
                  }
                }
                // direct tailcall eliminated
                next_value_of_HeadVar__1_1 = ArgVarsWidths_12;
                next_value_of_CurRval_3 = NextRval_51;
                next_value_of_STATE_VARIABLE_ActiveMap_0_5 = STATE_VARIABLE_ActiveMap_45_52;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                CurRval_3 = next_value_of_CurRval_3;
                STATE_VARIABLE_ActiveMap_0_5 = next_value_of_STATE_VARIABLE_ActiveMap_0_5;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word STATE_VARIABLE_ActiveMap_45_45;
                MR_Word _ArgTypedRval_41;
                MR_Box conv0__ArgTypedRval_41;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_STATE_VARIABLE_ActiveMap_0_5;

                mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ((MR_Box) (ArgVar_17)), &conv0__ArgTypedRval_41, STATE_VARIABLE_ActiveMap_0_5, &STATE_VARIABLE_ActiveMap_45_45);
                _ArgTypedRval_41 = ((MR_Word) (conv0__ArgTypedRval_41));
                // direct tailcall eliminated
                next_value_of_HeadVar__1_1 = ArgVarsWidths_12;
                next_value_of_STATE_VARIABLE_ActiveMap_0_5 = STATE_VARIABLE_ActiveMap_45_45;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                STATE_VARIABLE_ActiveMap_0_5 = next_value_of_STATE_VARIABLE_ActiveMap_0_5;
                continue;
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(
  MR_Word VarRval_12,
  MR_Word VarType_13,
  MR_String VarName_14,
  MR_Word MainTaggedConsId_15,
  MR_Word OtherTaggedConsIds_16,
  MR_Word CheaperTagTest_17,
  MR_Word Sense_18,
  MR_Word * ElseLabel_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35)
{
  ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(VarRval_12, VarName_14, MainTaggedConsId_15, OtherTaggedConsIds_16, CheaperTagTest_17, Sense_18, ElseLabel_19, Code_20, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_TestRval_6;

    ll_backend__unify_gen__raw_tag_test_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_TestRval_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_TestRval_6));
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(
  MR_Word VarRval_12,
  MR_String VarName_14,
  MR_Word MainTaggedConsId_15,
  MR_Word OtherTaggedConsIds_16,
  MR_Word CheaperTagTest_17,
  MR_Word Sense_18,
  MR_Word * ElseLabel_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35)
{
  if ((OtherTaggedConsIds_16 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_15, (MR_Integer) 0))));
    MR_Word MainConsTag_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainTaggedConsId_15, (MR_Integer) 1))));
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MainConsTag_23));
    }
    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(VarRval_12, VarName_14, MainConsId_22, Var_44, CheaperTagTest_17, Sense_18, ElseLabel_19, Code_20, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
  }
  else
  {
    MR_String MainConsName_26;
    MR_Word OtherConsNames_27;
    MR_Word OtherConsTags_28;
    MR_String Comment_29;
    MR_Word MainTagTestRval_30;
    MR_Word OtherTagTestRvals_31;
    MR_Word TestRval_32;
    MR_Word TheRval_33;
    MR_String Var_37;
    MR_String Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word MainConsTag_46;

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(MainTaggedConsId_15, &MainConsName_26, &MainConsTag_46);
    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__unify_gen_scalar_common_2[7]), OtherTaggedConsIds_16, &OtherConsNames_27, &OtherConsTags_28);
    Var_38 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(VarName_14, MainConsName_26, OtherConsNames_27);
    ll_backend__unify_gen__raw_tag_test_3_p_0(VarRval_12, MainConsTag_46, &MainTagTestRval_30);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (VarRval_12));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_39, OtherConsTags_28, &OtherTagTestRvals_31);
    ll_backend__unify_gen__disjoin_tag_tests_3_p_0(MainTagTestRval_30, OtherTagTestRvals_31, &TestRval_32);
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_19, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
    switch (Sense_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Var_37 = (MR_String) "branch away unless ";
          ll_backend__code_util__neg_rval_2_p_0(TestRval_32, &TheRval_33);
        }
        break;
      case (MR_Integer) 0:
        {
          Var_37 = (MR_String) "branch away if ";
          TheRval_33 = TestRval_32;
        }
        break;
    }
    Comment_29 = mercury__string__f_43_43_2_f_0(Var_37, Var_38);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (*ElseLabel_19));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (TheRval_33));
      MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Comment_29));
    }
    *Code_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_41)));
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
  MR_Word VarRval_12,
  MR_String VarName_14,
  MR_Word ConsId_15,
  MR_Word MaybeConsTag_16,
  MR_Word CheaperTagTest_17,
  MR_Word Sense_18,
  MR_Word * ElseLabel_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_33,
  MR_Word * STATE_VARIABLE_CI_34)
{
  {
    MR_bool succeeded;
    MR_String ConsIdName_22;
    MR_String Comment_27;
    MR_Word TestRval_29;
    MR_Word TheRval_32;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word CheapConsTag_26;
    MR_Word ExpensiveConsId_23;
    MR_Word _ExpensiveConsTag_24;
    MR_Word _CheapConsId_25;

    ConsIdName_22 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_15);
    succeeded = ((MR_tag((MR_Word) CheaperTagTest_17)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      ExpensiveConsId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 0))));
      _ExpensiveConsTag_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 1))));
      _CheapConsId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 2))));
      CheapConsTag_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 3))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_15, ExpensiveConsId_23);
    }
    if (succeeded)
    {
      MR_Word NegTestRval_28;
      MR_String Var_35;
      MR_String Var_36;
      MR_String Var_37;
      MR_String Var_39;

      switch (Sense_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_35 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_35 = (MR_String) "branch away if ";
          break;
      }
      Var_39 = mercury__string__f_43_43_2_f_0(ConsIdName_22, (MR_String) " (inverted test)");
      Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", Var_39);
      Var_36 = mercury__string__f_43_43_2_f_0(VarName_14, Var_37);
      Comment_27 = mercury__string__f_43_43_2_f_0(Var_35, Var_36);
      ll_backend__unify_gen__raw_tag_test_3_p_0(VarRval_12, CheapConsTag_26, &NegTestRval_28);
      ll_backend__code_util__neg_rval_2_p_0(NegTestRval_28, &TestRval_29);
    }
    else
    {
      MR_Word ConsTag_30;
      MR_String Var_41;
      MR_String Var_42;
      MR_String Var_43;

      switch (Sense_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_41 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_41 = (MR_String) "branch away if ";
          break;
      }
      Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ConsIdName_22);
      Var_42 = mercury__string__f_43_43_2_f_0(VarName_14, Var_43);
      Comment_27 = mercury__string__f_43_43_2_f_0(Var_41, Var_42);
      if ((MaybeConsTag_16 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ModuleInfo_31;

        ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_33, &ModuleInfo_31);
        ConsTag_30 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_31, ConsId_15);
      }
      else
        ConsTag_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsTag_16, (MR_Integer) 0))));
      ll_backend__unify_gen__raw_tag_test_3_p_0(VarRval_12, ConsTag_30, &TestRval_29);
    }
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_19, STATE_VARIABLE_CI_0_33, STATE_VARIABLE_CI_34);
    switch (Sense_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__code_util__neg_rval_2_p_0(TestRval_29, &TheRval_32);
        break;
      case (MR_Integer) 0:
        TheRval_32 = TestRval_29;
        break;
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (*ElseLabel_19));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (TheRval_32));
      MR_hl_field(MR_mktag(3), Var_47, 2) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (Comment_27));
    }
    *Code_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_46)));
  }
}

static void MR_CALL 
ll_backend__unify_gen__disjoin_tag_tests_3_p_0(
  MR_Word CurTestRval_4,
  MR_Word OtherTestRvals_5,
  MR_Word * TestRval_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((OtherTestRvals_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *TestRval_6 = CurTestRval_4;
    else
    {
      MR_Word HeadTestRval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherTestRvals_5, (MR_Integer) 0))));
      MR_Word TailTestRvals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherTestRvals_5, (MR_Integer) 1))));
      MR_Word NextTestRval_9;
      MR_Word next_value_of_CurTestRval_4;
      MR_Word next_value_of_OtherTestRvals_5;

      {
        NextTestRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 2) = ((MR_Box) (CurTestRval_4));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 3) = ((MR_Box) (HeadTestRval_7));
      }
      // direct tailcall eliminated
      next_value_of_CurTestRval_4 = NextTestRval_9;
      next_value_of_OtherTestRvals_5 = TailTestRvals_8;
      CurTestRval_4 = next_value_of_CurTestRval_4;
      OtherTestRvals_5 = next_value_of_OtherTestRvals_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ll_backend__code_loc_dep__release_reg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0(
  MR_Word CodeModel_9,
  MR_Word Uni_10,
  MR_Word GoalInfo_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_43,
  MR_Word * STATE_VARIABLE_CI_44,
  MR_Word STATE_VARIABLE_CLD_0_45,
  MR_Word * STATE_VARIABLE_CLD_46)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Uni_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 1))));
          MR_Word RHSVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 2))));
          MR_Word ArgModes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 3))));
          MR_Word HowToConstruct_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 4))));
          MR_Word SubInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 6))));
          MR_Word MaybeTakeAddr_23;
          MR_Word MaybeSize_24;
          MR_Word LHSVar_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 0))));
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 5))));

          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "construct is not model_det");
                  return;
                }
              }
              break;
          }
          if ((SubInfo_22 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MaybeTakeAddr_23 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            MaybeSize_24 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          else
          {
            MaybeTakeAddr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_22, (MR_Integer) 0))));
            MaybeSize_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_22, (MR_Integer) 1))));
          }
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_45, LHSVar_77);
          if (!(succeeded))
          {
            MR_Word Var_25;

            succeeded = ((MR_tag((MR_Word) MaybeTakeAddr_23)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_23, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word TakeAddr_26;
            MR_Word ModuleInfo_27;
            MR_Word RHSVarsWidths_28;

            if ((MaybeTakeAddr_23 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              TakeAddr_26 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
            else
              TakeAddr_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_23, (MR_Integer) 0))));
            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_27);
            ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), ModuleInfo_27, ConsId_17, RHSVars_18, &RHSVarsWidths_28);
            ll_backend__unify_gen__generate_construction_13_p_0(LHSVar_77, ConsId_17, RHSVarsWidths_28, ArgModes_19, HowToConstruct_20, TakeAddr_26, MaybeSize_24, GoalInfo_11, Code_12, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
          }
          else
          {
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_0_45;
            *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanCGC_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 5))));
          MR_Word Code0_31;
          MR_Word STATE_VARIABLE_CLD_57_57;
          MR_Word LHSVar_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 0))));
          MR_Word ConsId_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 1))));
          MR_Word RHSVars_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 2))));
          MR_Word ArgModes_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 3))));
          MR_Word ModuleInfo_82;
          MR_Word RHSVarsWidths_83;
          MR_Word _CanFail_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 4))));

          ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_82);
          ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), ModuleInfo_82, ConsId_79, RHSVars_80, &RHSVarsWidths_83);
          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__unify_gen__generate_det_deconstruction_8_p_0(LHSVar_78, ConsId_79, RHSVarsWidths_83, ArgModes_81, &Code0_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_57_57);
                *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "deconstruct is model_non");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              ll_backend__unify_gen__generate_semi_deconstruction_9_p_0(LHSVar_78, ConsId_79, RHSVarsWidths_83, ArgModes_81, &Code0_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_57_57);
              break;
          }
          switch (CanCGC_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String LHSVarName_32;
                MR_Word ProduceVar_33;
                MR_Word VarRval_34;
                MR_Word STATE_VARIABLE_CLD_58_58;
                MR_Word VarLval_35;

                LHSVarName_32 = ll_backend__code_info__variable_name_2_f_0(*STATE_VARIABLE_CI_44, LHSVar_78);
                ll_backend__code_loc_dep__produce_variable_6_p_0(LHSVar_78, &ProduceVar_33, &VarRval_34, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_57_57, &STATE_VARIABLE_CLD_58_58);
                succeeded = ((MR_tag((MR_Word) VarRval_34)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  VarLval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarRval_34, (MR_Integer) 0))));
                  {
                    MR_Word SaveArgs_36;
                    MR_Word Regs_37;
                    MR_Word FreeVar_38;
                    MR_Word STATE_VARIABLE_CLD_59_59;
                    MR_Word Var_62;
                    MR_Word Var_63;
                    MR_Word Var_64;
                    MR_String Var_66;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Box conv1_STATE_VARIABLE_CLD_46;

                    ll_backend__code_loc_dep__save_reused_cell_fields_7_p_0(LHSVar_78, VarLval_35, &SaveArgs_36, &Regs_37, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_58_58, &STATE_VARIABLE_CLD_59_59);
                    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0), (MR_Word) (&ll_backend__unify_gen_scalar_common_2[6]), Regs_37, ((MR_Box) (STATE_VARIABLE_CLD_59_59)), &conv1_STATE_VARIABLE_CLD_46);
                    *STATE_VARIABLE_CLD_46 = ((MR_Word) (conv1_STATE_VARIABLE_CLD_46));
                    {
                      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (VarRval_34));
                    }
                    {
                      Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                      MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
                    }
                    Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", LHSVarName_32);
                    {
                      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
                      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Var_66));
                    }
                    FreeVar_38 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_62)));
                    Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveArgs_36, FreeVar_38);
                    Var_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVar_33, Var_69);
                    *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code0_31, Var_68);
                  }
                }
                else
                {
                  *Code_12 = Code0_31;
                  *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_58_58;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                *Code_12 = Code0_31;
                *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_57_57;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LHSVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uni_10, (MR_Integer) 0))));
          MR_Word RHSVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uni_10, (MR_Integer) 1))));

          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "assign is not model_det");
                  return;
                }
              }
              break;
          }
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_45, LHSVar_15);
          if (succeeded)
            ll_backend__unify_gen__generate_assignment_5_p_0(LHSVar_15, RHSVar_16, Code_12, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
          else
          {
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_0_45;
          }
          *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uni_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarA_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni_10, (MR_Integer) 1))));
              MR_Word VarB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uni_10, (MR_Integer) 2))));

              switch (CodeModel_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "simple_test is not model_semi");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  ll_backend__unify_gen__generate_test_7_p_0(VarA_39, VarB_40, Code_12, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "complicated unify");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_semi_deconstruction_9_p_0(
  MR_Word Var_10,
  MR_Word Tag_11,
  MR_Word ArgVarsWidths_12,
  MR_Word Modes_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_25,
  MR_Word * STATE_VARIABLE_CI_26,
  MR_Word STATE_VARIABLE_CLD_0_27,
  MR_Word * STATE_VARIABLE_CLD_28)
{
  {
    MR_Word VarType_17;
    MR_Word CheaperTagTest_18;
    MR_Word SuccLabel_19;
    MR_Word TagTestCode_20;
    MR_Word AfterUnify_21;
    MR_Word FailCode_22;
    MR_Word DeconsCode_23;
    MR_Word SuccessLabelCode_24;
    MR_Word STATE_VARIABLE_CI_30_30;
    MR_Word STATE_VARIABLE_CLD_31_31;
    MR_Word STATE_VARIABLE_CLD_33_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;

    VarType_17 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_25, Var_10);
    CheaperTagTest_18 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_25, VarType_17);
    ll_backend__unify_gen__generate_tag_test_10_p_0(Var_10, Tag_11, CheaperTagTest_18, (MR_Integer) 0, &SuccLabel_19, &TagTestCode_20, STATE_VARIABLE_CI_0_25, &STATE_VARIABLE_CI_30_30, STATE_VARIABLE_CLD_0_27, &STATE_VARIABLE_CLD_31_31);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_31_31, &AfterUnify_21);
    ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_22, STATE_VARIABLE_CI_30_30, STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_31_31);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterUnify_21, *STATE_VARIABLE_CI_26, &STATE_VARIABLE_CLD_33_33);
    ll_backend__unify_gen__generate_det_deconstruction_8_p_0(Var_10, Tag_11, ArgVarsWidths_12, Modes_13, &DeconsCode_23, *STATE_VARIABLE_CI_26, STATE_VARIABLE_CLD_33_33, STATE_VARIABLE_CLD_28);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (SuccLabel_19));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_String) ""));
    }
    SuccessLabelCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_35)));
    Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessLabelCode_24, DeconsCode_23);
    Var_38 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_22, Var_39);
    *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagTestCode_20, Var_38);
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_tag_test_10_p_0(
  MR_Word Var_11,
  MR_Word ConsId_12,
  MR_Word CheaperTagTest_13,
  MR_Word Sense_14,
  MR_Word * ElseLabel_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25,
  MR_Word STATE_VARIABLE_CLD_0_26,
  MR_Word * STATE_VARIABLE_CLD_27)
{
  {
    MR_bool succeeded;
    MR_Word VarCode_19;
    MR_Word VarRval_20;
    MR_String VarName_22;
    MR_Word TestCode_23;
    MR_String ConsIdName_44;
    MR_String Comment_49;
    MR_Word TestRval_51;
    MR_Word TheRval_54;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word VarType_21;
    MR_Word CheapConsTag_48;
    MR_Word ExpensiveConsId_45;
    MR_Word _ExpensiveConsTag_46;
    MR_Word _CheapConsId_47;

    ll_backend__code_loc_dep__produce_variable_6_p_0(Var_11, &VarCode_19, &VarRval_20, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CLD_0_26, STATE_VARIABLE_CLD_27);
    VarType_21 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_24, Var_11);
    VarName_22 = ll_backend__code_info__variable_name_2_f_0(STATE_VARIABLE_CI_0_24, Var_11);
    ConsIdName_44 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_12);
    succeeded = ((MR_tag((MR_Word) CheaperTagTest_13)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      ExpensiveConsId_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 0))));
      _ExpensiveConsTag_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 1))));
      _CheapConsId_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 2))));
      CheapConsTag_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 3))));
      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_12, ExpensiveConsId_45);
    }
    if (succeeded)
    {
      MR_Word NegTestRval_50;
      MR_String Var_55;
      MR_String Var_56;
      MR_String Var_57;
      MR_String Var_59;

      switch (Sense_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_55 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_55 = (MR_String) "branch away if ";
          break;
      }
      Var_59 = mercury__string__f_43_43_2_f_0(ConsIdName_44, (MR_String) " (inverted test)");
      Var_57 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", Var_59);
      Var_56 = mercury__string__f_43_43_2_f_0(VarName_22, Var_57);
      Comment_49 = mercury__string__f_43_43_2_f_0(Var_55, Var_56);
      ll_backend__unify_gen__raw_tag_test_3_p_0(VarRval_20, CheapConsTag_48, &NegTestRval_50);
      ll_backend__code_util__neg_rval_2_p_0(NegTestRval_50, &TestRval_51);
    }
    else
    {
      MR_Word ConsTag_52;
      MR_Word ModuleInfo_53;
      MR_String Var_61;
      MR_String Var_62;
      MR_String Var_63;

      switch (Sense_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Var_61 = (MR_String) "branch away unless ";
          break;
        case (MR_Integer) 0:
          Var_61 = (MR_String) "branch away if ";
          break;
      }
      Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ConsIdName_44);
      Var_62 = mercury__string__f_43_43_2_f_0(VarName_22, Var_63);
      Comment_49 = mercury__string__f_43_43_2_f_0(Var_61, Var_62);
      ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_24, &ModuleInfo_53);
      ConsTag_52 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_53, ConsId_12);
      ll_backend__unify_gen__raw_tag_test_3_p_0(VarRval_20, ConsTag_52, &TestRval_51);
    }
    ll_backend__code_info__get_next_label_3_p_0(ElseLabel_15, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25);
    switch (Sense_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__code_util__neg_rval_2_p_0(TestRval_51, &TheRval_54);
        break;
      case (MR_Integer) 0:
        TheRval_54 = TestRval_51;
        break;
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (*ElseLabel_15));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (TheRval_54));
      MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) (Var_68));
    }
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Comment_49));
    }
    TestCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_66)));
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCode_19, TestCode_23);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__481__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
  MR_Word Rval_4,
  MR_Word ConsTag_5,
  MR_Word * TestRval_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *TestRval_6 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12]));
            }
            break;
          case (MR_Integer) 1:
            {
              *TestRval_6 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12]));
            }
            break;
          case (MR_Integer) 2:
            {
              *TestRval_6 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12]));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_5, (MR_Integer) 0))));
          MR_Word Var_107;
          MR_Word Var_108;

          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (String_7));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (Var_108));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_107));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_5, (MR_Integer) 0)));
          MR_Word Var_104;
          MR_Word Var_105;

          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_105, 1) = MR_box_float(Float_8);
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Var_105));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_104));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              MR_Word Const_10;
              MR_Word IntType_11;
              MR_Word Var_101;
              MR_Word Var_102;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_9, &Const_10, &IntType_11);
              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (IntType_11));
              }
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Const_10));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_101));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_102));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              MR_String ForeignVal_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
              MR_Word Var_91;
              MR_Word Var_97;
              MR_Word Var_98;

              {
                Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (ForeignLang_12));
                MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_91, (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "foreign tag for language other than C");
              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (ForeignVal_13));
                MR_hl_field(MR_mktag(3), Var_98, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[9])));
              }
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (Var_98));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[5])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_97));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted higher-order unification");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_ctor_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted base_typeclass_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_info_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted typeclass_info_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted ground_term_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted tabling_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted deep_profiling_proc_layout_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted table_io_entry_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer UnsharedTag_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              MR_Word VarPtag_116;
              MR_Word ConstPtag_117;
              MR_Word Var_120;
              MR_Word Var_121;

              {
                VarPtag_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_116, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (UnsharedTag_115));
              }
              {
                Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Var_121));
              }
              {
                ConstPtag_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ConstPtag_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_117, 2) = ((MR_Box) (Var_120));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[5])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_116));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPtag_117));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer UnsharedTag_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              MR_Word VarPtag_34;
              MR_Word ConstPtag_35;
              MR_Word Var_66;
              MR_Word Var_67;

              {
                VarPtag_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_34, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (UnsharedTag_33));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
              }
              {
                ConstPtag_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 2) = ((MR_Box) (Var_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[5])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_34));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPtag_35));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Ptag_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              MR_Integer Stag_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
              MR_Word PtagTestRval_39;
              MR_Word VarStag_40;
              MR_Word ConstStag_41;
              MR_Word StagTestRval_42;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_60;
              MR_Word VarPtag_109;
              MR_Word ConstPtag_110;
              MR_Word _AddedBy_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 3))));

              {
                VarPtag_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), VarPtag_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_109, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Ptag_36));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
              }
              {
                ConstPtag_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ConstPtag_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_110, 2) = ((MR_Box) (Var_51));
              }
              Var_53 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[5]));
              {
                PtagTestRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagTestRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), PtagTestRval_39, 1) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(3), PtagTestRval_39, 2) = ((MR_Box) (VarPtag_109));
                MR_hl_field(MR_mktag(3), PtagTestRval_39, 3) = ((MR_Box) (ConstPtag_110));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Ptag_36));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), Var_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])));
              }
              {
                VarStag_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), VarStag_40, 0) = ((MR_Box) (Var_55));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Stag_37));
              }
              {
                ConstStag_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstStag_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstStag_41, 1) = ((MR_Box) (Var_60));
              }
              {
                StagTestRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), StagTestRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), StagTestRval_42, 1) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(3), StagTestRval_42, 2) = ((MR_Box) (VarStag_40));
                MR_hl_field(MR_mktag(3), StagTestRval_42, 3) = ((MR_Box) (ConstStag_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PtagTestRval_39));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (StagTestRval_42));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_43;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Integer Ptag_111 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1))));
              MR_Integer Stag_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2))));
              MR_Word ConstStag_113;

              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Stag_112));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
              }
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_43, 2) = ((MR_Box) (Var_45));
              }
              {
                ConstStag_113 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ConstStag_113, 0) = ((MR_Box) (Ptag_111));
                MR_hl_field(MR_mktag(2), ConstStag_113, 1) = ((MR_Box) (Var_43));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[5])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstStag_113));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_det_deconstruction__1270__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_8_p_0(
  MR_Word Var_9,
  MR_Word ConsId_10,
  MR_Word ArgVarsWidths_11,
  MR_Word Modes_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_59,
  MR_Word * STATE_VARIABLE_CLD_60)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word ConsTag_17;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_16, ConsId_10);
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Rval_104;
              MR_Word VarTypes_105;
              MR_Word FieldsAndArgVars_106;

              {
                Rval_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_104, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_vartypes_2_p_0(CI_14, &VarTypes_105);
              ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(VarTypes_105, Rval_104, (MR_Integer) 0, ArgVarsWidths_11, (MR_Integer) -1, &FieldsAndArgVars_106);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_106, Modes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
            }
            break;
          case (MR_Integer) 1:
            {
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_60 = STATE_VARIABLE_CLD_0_59;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgVar_44;
              MR_Word Mode_46;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word _Width_45;

              succeeded = ((MR_tag((MR_Word) ArgVarsWidths_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0))));
                Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1))));
                succeeded = (Var_73 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  ArgVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 0))));
                  _Width_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0))));
                    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1))));
                    succeeded = (Var_74 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarType_47;
                MR_Word IsDummy_48;

                VarType_47 = ll_backend__code_info__variable_type_2_f_0(CI_14, Var_9);
                IsDummy_48 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, VarType_47);
                switch (IsDummy_48) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_59, ArgVar_44);
                      if (succeeded)
                      {
                        ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ArgVar_44, (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])), CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
                      }
                      else
                        *STATE_VARIABLE_CLD_60 = STATE_VARIABLE_CLD_0_59;
                      *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgType_49;
                      MR_Word FieldAndArgVar_50;
                      MR_Word Var_75;

                      ArgType_49 = ll_backend__code_info__variable_type_2_f_0(CI_14, ArgVar_44);
                      {
                        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_9));
                      }
                      {
                        FieldAndArgVar_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_50, 0) = ((MR_Box) (Var_75));
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_50, 1) = ((MR_Box) (ArgVar_44));
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_50, 2) = ((MR_Box) (ArgType_49));
                      }
                      ll_backend__unify_gen__generate_sub_unify_6_p_0(FieldAndArgVar_50, Mode_46, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
                    }
                    break;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/8", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_60 = STATE_VARIABLE_CLD_0_59;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 14:
            {
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_60 = STATE_VARIABLE_CLD_0_59;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/8", (MR_String) "type_info_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/8", (MR_String) "typeclass_info_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/8", (MR_String) "ground_term_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/8", (MR_String) "table_io_entry_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Rval_109;
              MR_Word VarTypes_110;
              MR_Word FieldsAndArgVars_111;
              MR_Integer Ptag_112 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));

              {
                Rval_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_109, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_vartypes_2_p_0(CI_14, &VarTypes_110);
              ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(VarTypes_110, Rval_109, Ptag_112, ArgVarsWidths_11, (MR_Integer) -1, &FieldsAndArgVars_111);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_111, Modes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word ArgVar_93;
              MR_Word Mode_95;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word _Width_91;

              succeeded = ((MR_tag((MR_Word) ArgVarsWidths_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0))));
                Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1))));
                succeeded = (Var_67 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  ArgVar_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0))));
                  _Width_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0))));
                    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1))));
                    succeeded = (Var_68 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word Type_52;

                Type_52 = ll_backend__code_info__variable_type_2_f_0(CI_14, ArgVar_93);
                ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(Var_9, ArgVar_93, Ptag_51, Mode_95, Type_52, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/8", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word AddedBy_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 3))));
              MR_Word Rval_56;
              MR_Word VarTypes_57;
              MR_Word FieldsAndArgVars_58;
              MR_Word Var_61;
              MR_Integer Ptag_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Integer _Sectag1_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2))));

              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ll_backend__unify_gen__generate_det_deconstruction_8_p_0_1));
                MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (AddedBy_55));
                MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/8", (MR_String) "AddedBy != sectag_added_by_unify");
              {
                Rval_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_56, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_vartypes_2_p_0(CI_14, &VarTypes_57);
              ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(VarTypes_57, Rval_56, Ptag_99, ArgVarsWidths_11, (MR_Integer) 0, &FieldsAndArgVars_58);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_58, Modes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(
  MR_Word Var_10,
  MR_Word ArgVar_11,
  MR_Integer Ptag_12,
  MR_Word ArgMode_13,
  MR_Word Type_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_24,
  MR_Word * STATE_VARIABLE_CLD_25)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18;
    MR_Word LeftFromToInsts_19;
    MR_Word RightFromToInsts_20;
    MR_Word LeftTopFunctorMode_21;
    MR_Word RightTopFunctorMode_22;

    ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
    LeftFromToInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_13, (MR_Integer) 0))));
    RightFromToInsts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_13, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_18, LeftFromToInsts_19, Type_14, &LeftTopFunctorMode_21);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_18, RightFromToInsts_20, Type_14, &RightTopFunctorMode_22);
    switch (LeftTopFunctorMode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (RightTopFunctorMode_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/9", (MR_String) "unexpected right arg in deconstruction");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_24, ArgVar_11);
              if (succeeded)
              {
                MR_Word BodyRval_23;
                MR_Word Var_35;
                MR_Word Var_36;
                MR_Word Var_37;

                {
                  Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_10));
                }
                {
                  Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Ptag_12));
                }
                {
                  Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
                }
                {
                  BodyRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), BodyRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), BodyRval_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  MR_hl_field(MR_mktag(3), BodyRval_23, 2) = ((MR_Box) (Var_35));
                  MR_hl_field(MR_mktag(3), BodyRval_23, 3) = ((MR_Box) (Var_36));
                }
                ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ArgVar_11, BodyRval_23, Code_15, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
              }
              else
              {
                *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                *STATE_VARIABLE_CLD_25 = STATE_VARIABLE_CLD_0_24;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (RightTopFunctorMode_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (ArgVar_11));
              }
              ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(Var_10, Ptag_12, Var_30, Code_15, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/9", (MR_String) "unexpected right arg in reverse deconstruction");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          switch (RightTopFunctorMode_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/9", (MR_String) "unexpected right arg in unused deconstruction");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              }
              break;
          }
          *STATE_VARIABLE_CLD_25 = STATE_VARIABLE_CLD_0_24;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unify_args\'/6", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unify_args\'/6", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CodeA_36;
      MR_Word CodeB_37;
      MR_Word STATE_VARIABLE_CLD_40_40;

      ll_backend__unify_gen__generate_sub_unify_6_p_0(Var_45, Mode_31, &CodeA_36, HeadVar__4_4, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_40_40);
      ll_backend__unify_gen__generate_unify_args_6_p_0(Var_44, Modes_32, &CodeB_37, HeadVar__4_4, STATE_VARIABLE_CLD_40_40, STATE_VARIABLE_CLD_6);
      *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeA_36, CodeB_37);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1155__2_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1141__2_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1155__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1141__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__make_fields_and_arg_vars__1147__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(
  MR_Word VarTypes_1,
  MR_Word Rval_2,
  MR_Integer Ptag_3,
  MR_Word HeadVar__4_4,
  MR_Integer PrevOffset0_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__6_6 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    else
    {
      MR_Word VarPosWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word VarsPosWidths_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word FieldAndArgVar_17;
      MR_Word FieldsAndArgVars_18;
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarPosWidth_14, (MR_Integer) 0))));
      MR_Word PosWidth_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarPosWidth_14, (MR_Integer) 1))));
      MR_Integer Offset_27;
      MR_Integer PrevOffset_28;
      MR_Word Field_38;
      MR_Word Type_39;
      MR_Word Var_52;

      switch (MR_tag((MR_Word) PosWidth_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Offset_27 = (MR_Integer) -1;
            PrevOffset_28 = PrevOffset0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CellOffset_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PosWidth_20, (MR_Integer) 1))));
            MR_Integer CellOffsetInt_29;
            MR_Word Var_49;
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PosWidth_20, (MR_Integer) 0))));

            Offset_27 = (MR_Integer) ((MR_Unsigned) PrevOffset0_5 + (MR_Unsigned) (MR_Integer) 1);
            PrevOffset_28 = Offset_27;
            CellOffsetInt_29 = (MR_Integer) (CellOffset_22);
            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[6]));
              MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_2));
              MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Offset_27));
              MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (CellOffsetInt_29));
            }
            mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_arg_vars\'/6", (MR_String) "full or first");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_45;
            MR_Word CellOffset_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_20, (MR_Integer) 1))));
            MR_Integer CellOffsetInt_54;
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_20, (MR_Integer) 0))));
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PosWidth_20, (MR_Integer) 2))));

            Offset_27 = (MR_Integer) ((MR_Unsigned) PrevOffset0_5 + (MR_Unsigned) (MR_Integer) 1);
            PrevOffset_28 = (MR_Integer) ((MR_Unsigned) Offset_27 + (MR_Unsigned) (MR_Integer) 1);
            CellOffsetInt_54 = (MR_Integer) (CellOffset_53);
            {
              Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[6]));
              MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Offset_27));
              MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (CellOffsetInt_54));
            }
            mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_arg_vars\'/6", (MR_String) "double");
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellOffset_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 2))));
                MR_Integer CellOffsetInt_63;
                MR_Word Var_65;
                MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 1))));
                MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 3))));
                MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 4))));
                MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 5))));

                Offset_27 = (MR_Integer) ((MR_Unsigned) PrevOffset0_5 + (MR_Unsigned) (MR_Integer) 1);
                PrevOffset_28 = Offset_27;
                CellOffsetInt_63 = (MR_Integer) (CellOffset_62);
                {
                  Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[6]));
                  MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Offset_27));
                  MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (CellOffsetInt_63));
                }
                mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_arg_vars\'/6", (MR_String) "full or first");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_71;
                MR_Word CellOffset_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 2))));
                MR_Integer CellOffsetInt_75;
                MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 1))));
                MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 3))));
                MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 4))));
                MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 5))));
                MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 6))));

                Offset_27 = PrevOffset0_5;
                PrevOffset_28 = Offset_27;
                CellOffsetInt_75 = (MR_Integer) (CellOffset_74);
                {
                  Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[6]));
                  MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_5));
                  MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Offset_27));
                  MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (CellOffsetInt_75));
                }
                mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_arg_vars\'/6", (MR_String) "shifted");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_40;
                MR_Word CellOffset_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 2))));
                MR_Integer CellOffsetInt_56;
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_20, (MR_Integer) 1))));

                Offset_27 = PrevOffset0_5;
                PrevOffset_28 = Offset_27;
                CellOffsetInt_56 = (MR_Integer) (CellOffset_55);
                {
                  Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[6]));
                  MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Offset_27));
                  MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (CellOffsetInt_56));
                }
                mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_arg_vars\'/6", (MR_String) "shifted");
              }
              break;
          }
          break;
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Ptag_3));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Rval_2));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (Offset_27));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (PosWidth_20));
      }
      Field_38 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Var_52)));
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, Var_19, &Type_39);
      {
        FieldAndArgVar_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldAndArgVar_17, 0) = ((MR_Box) (Field_38));
        MR_hl_field(MR_mktag(0), FieldAndArgVar_17, 1) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), FieldAndArgVar_17, 2) = ((MR_Box) (Type_39));
      }
      ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(VarTypes_1, Rval_2, Ptag_3, VarsPosWidths_15, PrevOffset_28, &FieldsAndArgVars_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAndArgVar_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldsAndArgVars_18));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__670__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__699__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__724__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__580__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__708__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__734__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__732__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__680__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_construction_13_p_0(
  MR_Word LHSVar_14,
  MR_Word ConsId_15,
  MR_Word RHSVarsWidths_16,
  MR_Word ArgModes_17,
  MR_Word HowToConstruct0_18,
  MR_Word TakeAddr_19,
  MR_Word MaybeSize_20,
  MR_Word GoalInfo_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_85,
  MR_Word * STATE_VARIABLE_CI_86,
  MR_Word STATE_VARIABLE_CLD_0_87,
  MR_Word * STATE_VARIABLE_CLD_88)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_25;
    MR_Word ConsTag_26;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_85, &ModuleInfo_25);
    ConsTag_26 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_25, ConsId_15);
    switch (MR_tag((MR_Word) ConsTag_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MayUseAtomic0_267;
              MR_Word MayUseAtomic_270;
              MR_Word PackCode_271;
              MR_Word HowToConstruct_272;
              MR_Word CellArgs_273;
              MR_Word Context_274;
              MR_Word ConstructCode_275;
              MR_Word Var_276;
              MR_Word STATE_VARIABLE_CLD_163_277;

              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_85, &MayUseAtomic0_267);
              Var_276 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0(RHSVarsWidths_16, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs_273, MayUseAtomic0_267, &MayUseAtomic_270, Var_276, &PackCode_271, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, &STATE_VARIABLE_CLD_163_277);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(RHSVarsWidths_16, HowToConstruct0_18, &HowToConstruct_272);
              Context_274 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_14, (MR_Integer) 0, CellArgs_273, HowToConstruct_272, MaybeSize_20, Context_274, MayUseAtomic_270, &ConstructCode_275, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CI_86, STATE_VARIABLE_CLD_163_277, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PackCode_271, ConstructCode_275);
            }
            break;
          case (MR_Integer) 1:
            {
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])), STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word RHSVar_35;
              MR_Word ArgMode_37;
              MR_Word Var_169;
              MR_Word Var_170;
              MR_Word Var_171;
              MR_Word _Width_36;

              succeeded = ((MR_tag((MR_Word) RHSVarsWidths_16)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVarsWidths_16, (MR_Integer) 0))));
                Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVarsWidths_16, (MR_Integer) 1))));
                succeeded = (Var_170 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  RHSVar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_169, (MR_Integer) 0))));
                  _Width_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_169, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) ArgModes_17)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 0))));
                    Var_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 1))));
                    succeeded = (Var_171 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
                if ((TakeAddr_19 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word Type_38;
                  MR_Word FieldAndArgVar_39;
                  MR_Word Var_174;

                  Type_38 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_85, RHSVar_35);
                  {
                    Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (LHSVar_14));
                  }
                  {
                    FieldAndArgVar_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_39, 0) = ((MR_Box) (Var_174));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_39, 1) = ((MR_Box) (RHSVar_35));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_39, 2) = ((MR_Box) (Type_38));
                  }
                  ll_backend__unify_gen__generate_sub_unify_6_p_0(FieldAndArgVar_39, ArgMode_37, Code_22, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "notag: take_addr");
                    return;
                  }
                }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsTag_26, (MR_Integer) 0))));
          MR_Word Var_195;
          MR_Word Var_197;

          {
            Var_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_197, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_197, 1) = ((MR_Box) (String_27));
          }
          {
            Var_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_195, 1) = ((MR_Box) (Var_197));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_195, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
          *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_34 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_26, (MR_Integer) 0)));
          MR_Word Var_182;
          MR_Word Var_184;

          {
            Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_184, 1) = MR_box_float(Float_34);
          }
          {
            Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_182, 1) = ((MR_Box) (Var_184));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_182, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
          *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word Const_29;
              MR_Word Var_193;
              MR_Word Var_30;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_28, &Const_29, &Var_30);
              {
                Var_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_193, 1) = ((MR_Box) (Const_29));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_193, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_String Val_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              MR_Word ForeignConst_33;
              MR_Word Var_185;
              MR_Word Var_189;

              {
                Var_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_5));
                MR_hl_field(MR_mktag(0), Var_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_185, 3) = ((MR_Box) (Lang_31));
                MR_hl_field(MR_mktag(0), Var_185, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_185, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "foreign_tag for language other than C");
              {
                Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_189, 1) = ((MR_Box) (Val_32));
                MR_hl_field(MR_mktag(3), Var_189, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[9])));
              }
              {
                ForeignConst_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ForeignConst_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ForeignConst_33, 1) = ((MR_Box) (Var_189));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ForeignConst_33, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word RHSVars_84;
              MR_Word Var_89;
              MR_Word Var_93;
              MR_Word PredId_224 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Integer ProcId_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

              {
                Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_2));
                MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_89, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "closure_tag has take_addr");
              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[4]));
                MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_3));
                MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (MaybeSize_20));
                MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_93, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "closure_tag has size");
              mercury__assoc_list__keys_2_p_0((MR_Word) (&ll_backend__unify_gen_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0), RHSVarsWidths_16, &RHSVars_84);
              ll_backend__closure_gen__generate_closure_11_p_0(PredId_224, ProcId_225, LHSVar_14, RHSVars_84, GoalInfo_21, Code_22, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CI_86, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_String TypeName_61 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              MR_Integer TypeArity_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
              MR_Word RttiTypeCtor_63;
              MR_Word DataId_64;
              MR_Word Var_138;
              MR_Word Var_142;
              MR_Word Var_144;
              MR_Word Var_146;

              {
                Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_8));
                MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_138, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_138, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "type_ctor_info constant has args");
              {
                RttiTypeCtor_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_63, 0) = ((MR_Box) (ModuleName_60));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_63, 1) = ((MR_Box) (TypeName_61));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_63, 2) = ((MR_Box) (TypeArity_62));
              }
              {
                Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (RttiTypeCtor_63));
                MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              {
                DataId_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_64, 0) = ((MR_Box) (Var_142));
              }
              {
                Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_146, 1) = ((MR_Box) (DataId_64));
                MR_hl_field(MR_mktag(3), Var_146, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (Var_146));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_144, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              MR_String Instance_66 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
              MR_Word TCName_67;
              MR_Word Var_128;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Var_136;
              MR_Word ModuleName_215 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word DataId_216;

              {
                Var_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_128, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_128, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_128, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "base_typeclass_info constant has args");
              TCName_67 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_65);
              {
                Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (ModuleName_215));
                MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Instance_66));
              }
              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (TCName_67));
                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_133));
              }
              {
                DataId_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_216, 0) = ((MR_Box) (Var_132));
              }
              {
                Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (DataId_216));
                MR_hl_field(MR_mktag(3), Var_136, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (Var_136));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_134, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_280 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word ConstStructMap_281;
              MR_Word Rval_282;
              MR_Word Var_284;
              MR_Box conv1_Var_284;
              MR_Word _Type_279;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_85, &ConstStructMap_281);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_281, ConstNum_280, &conv1_Var_284);
              Var_284 = ((MR_Word) (conv1_Var_284));
              Rval_282 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_284, (MR_Integer) 0))));
              _Type_279 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_284, (MR_Integer) 1))));
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Rval_282, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_289 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word ConstStructMap_290;
              MR_Word Rval_291;
              MR_Word Var_293;
              MR_Box conv2_Var_293;
              MR_Word _Type_288;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_85, &ConstStructMap_290);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_290, ConstNum_289, &conv2_Var_293);
              Var_293 = ((MR_Word) (conv2_Var_293));
              Rval_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_293, (MR_Integer) 0))));
              _Type_288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_293, (MR_Integer) 1))));
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Rval_291, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word ConstStructMap_70;
              MR_Word Rval_71;
              MR_Word Var_126;
              MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              MR_Box conv0_Var_126;
              MR_Word _Type_72;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_85, &ConstStructMap_70);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0), ConstStructMap_70, ConstNum_68, &conv0_Var_126);
              Var_126 = ((MR_Word) (conv0_Var_126));
              Rval_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_126, (MR_Integer) 0))));
              _Type_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_126, (MR_Integer) 1))));
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Rval_71, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredId_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Integer ProcId_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              MR_Word ProcLabel_75;
              MR_Word Var_117;
              MR_Word Var_122;
              MR_Word Var_124;
              MR_Word DataId_217;

              {
                Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_7));
                MR_hl_field(MR_mktag(0), Var_117, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_117, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_117, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_117, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "tabling_info constant has args");
              ProcLabel_75 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_73, ProcId_74);
              {
                DataId_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DataId_217, 0) = ((MR_Box) (ProcLabel_75));
                MR_hl_field(MR_mktag(1), DataId_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (DataId_217));
                MR_hl_field(MR_mktag(3), Var_124, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (Var_124));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_122, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RttiProcLabel_76;
              MR_Word Origin_77;
              MR_Word UserOrUCI_80;
              MR_Word ProcKind_81;
              MR_Word Var_108;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_115;
              MR_Word DataId_218;
              MR_Word PredId_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Integer ProcId_220 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              MR_Word Var_226;
              MR_Word Var_227;
              MR_Word Var_228;
              MR_String Var_229;
              MR_Integer Var_230;
              MR_Word Var_231;
              MR_Word Var_232;
              MR_Integer Var_233;
              MR_Word Var_234;
              MR_Word Var_235;
              MR_Word Var_236;
              MR_Word Var_237;
              MR_Word Var_238;
              MR_Word Var_239;
              MR_Word Var_240;
              MR_Word Var_78;
              MR_Word Var_79;

              {
                Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_4));
                MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_108, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "deep_profiling_proc_static has args");
              RttiProcLabel_76 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_219, ProcId_220);
              Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 0))));
              Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 1))));
              Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 2))));
              Var_229 = ((MR_String) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 3))));
              Var_230 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 4))));
              Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 5))));
              Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 6))));
              Var_233 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 7))));
              Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 8))));
              Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 9))));
              Var_236 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 10))) & (MR_Integer) 7);
              Var_237 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 10))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_238 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 10))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Origin_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 11))));
              Var_239 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 12))) & (MR_Integer) 1);
              Var_240 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 12))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              succeeded = ((MR_tag((MR_Word) Origin_77)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin_77, (MR_Integer) 0))));
                Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin_77, (MR_Integer) 1))));
                UserOrUCI_80 = (MR_Integer) 1;
              }
              else
                UserOrUCI_80 = (MR_Integer) 0;
              {
                ProcKind_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ProcKind_81, 0) = ((MR_Box) (UserOrUCI_80));
              }
              {
                Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (RttiProcLabel_76));
                MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (ProcKind_81));
              }
              {
                DataId_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DataId_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), DataId_218, 1) = ((MR_Box) (Var_112));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (DataId_218));
                MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Var_115));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_113, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PredProcId_82;
              MR_Word Var_99;
              MR_Word Var_104;
              MR_Word Var_106;
              MR_Word DataId_221;
              MR_Word PredId_222 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Integer ProcId_223 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

              {
                Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_6));
                MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "table_io_entry has args");
              {
                PredProcId_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredProcId_82, 0) = ((MR_Box) (PredId_222));
                MR_hl_field(MR_mktag(0), PredProcId_82, 1) = ((MR_Box) (ProcId_223));
              }
              {
                DataId_221 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DataId_221, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), DataId_221, 1) = NULL;
                MR_hl_field(MR_mktag(3), DataId_221, 2) = ((MR_Box) (PredProcId_82));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (DataId_221));
                MR_hl_field(MR_mktag(3), Var_106, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Var_106));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_104, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_297 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word MayUseAtomic0_298;
              MR_Word MayUseAtomic_301;
              MR_Word PackCode_302;
              MR_Word HowToConstruct_303;
              MR_Word CellArgs_304;
              MR_Word Context_305;
              MR_Word ConstructCode_306;
              MR_Word Var_307;
              MR_Word STATE_VARIABLE_CLD_163_308;

              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_85, &MayUseAtomic0_298);
              Var_307 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0(RHSVarsWidths_16, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs_304, MayUseAtomic0_298, &MayUseAtomic_301, Var_307, &PackCode_302, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, &STATE_VARIABLE_CLD_163_308);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(RHSVarsWidths_16, HowToConstruct0_18, &HowToConstruct_303);
              Context_305 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_14, Ptag_297, CellArgs_304, HowToConstruct_303, MaybeSize_20, Context_305, MayUseAtomic_301, &ConstructCode_306, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CI_86, STATE_VARIABLE_CLD_163_308, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PackCode_302, ConstructCode_306);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_212 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word RHSVar_204;
              MR_Word ArgMode_206;
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word _Width_200;

              succeeded = ((MR_tag((MR_Word) RHSVarsWidths_16)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVarsWidths_16, (MR_Integer) 0))));
                Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHSVarsWidths_16, (MR_Integer) 1))));
                succeeded = (Var_155 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  RHSVar_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_154, (MR_Integer) 0))));
                  _Width_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_154, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) ArgModes_17)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_206 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 0))));
                    Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 1))));
                    succeeded = (Var_156 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
                if ((TakeAddr_19 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word Type_202;

                  Type_202 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_85, RHSVar_204);
                  ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(LHSVar_14, RHSVar_204, Ptag_212, ArgMode_206, Type_202, Code_22, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "direct_arg_tag: take_addr");
                    return;
                  }
                }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Ptag_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Word MayUseAtomic0_45;
              MR_Word CellArgs0_47;
              MR_Word MayUseAtomic_48;
              MR_Word PackCode_49;
              MR_Word HowToConstruct_50;
              MR_Word CellArgs_52;
              MR_Integer Sectag_53;
              MR_Word TagArg_55;
              MR_Word Context_56;
              MR_Word ConstructCode_57;
              MR_Word Var_162;
              MR_Word STATE_VARIABLE_CLD_163_163;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Integer Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
              MR_Word _AddedBy_54;
              MR_Integer _Ptag_198;

              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_85, &MayUseAtomic0_45);
              Var_162 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0(RHSVarsWidths_16, ArgModes_17, (MR_Integer) 1, TakeAddr_19, &CellArgs0_47, MayUseAtomic0_45, &MayUseAtomic_48, Var_162, &PackCode_49, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, &STATE_VARIABLE_CLD_163_163);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(RHSVarsWidths_16, HowToConstruct0_18, &HowToConstruct_50);
              _Ptag_198 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              Sectag_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));
              _AddedBy_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3))));
              {
                Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Sectag_53));
              }
              {
                Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_164, 1) = ((MR_Box) (Var_165));
              }
              {
                TagArg_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), TagArg_55, 0) = ((MR_Box) (Var_164));
                MR_hl_field(MR_mktag(1), TagArg_55, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                CellArgs_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CellArgs_52, 0) = ((MR_Box) (TagArg_55));
                MR_hl_field(MR_mktag(1), CellArgs_52, 1) = ((MR_Box) (CellArgs0_47));
              }
              Context_56 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_14, Ptag_42, CellArgs_52, HowToConstruct_50, MaybeSize_20, Context_56, MayUseAtomic_48, &ConstructCode_57, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CI_86, STATE_VARIABLE_CLD_163_163, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PackCode_49, ConstructCode_57);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_148;
              MR_Word Var_150;
              MR_Word Var_152;
              MR_Word Var_153;
              MR_Integer Ptag_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1))));
              MR_Integer Sectag_214 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2))));

              {
                Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Sectag_214));
              }
              {
                Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (Var_153));
              }
              {
                Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_150, 2) = ((MR_Box) (Var_152));
              }
              {
                Var_148 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_148, 0) = ((MR_Box) (Ptag_213));
                MR_hl_field(MR_mktag(2), Var_148, 1) = ((MR_Box) (Var_150));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_148, STATE_VARIABLE_CI_0_85, STATE_VARIABLE_CLD_0_87, STATE_VARIABLE_CLD_88);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_86 = STATE_VARIABLE_CI_0_85;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
  MR_Word ArgVarsWidths_4,
  MR_Word STATE_VARIABLE_HowToConstruct_0_13,
  MR_Word * STATE_VARIABLE_HowToConstruct_14)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_HowToConstruct_0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_HowToConstruct_0_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_HowToConstruct_14 = STATE_VARIABLE_HowToConstruct_0_13;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_HowToConstruct_14 = STATE_VARIABLE_HowToConstruct_0_13;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CellToReuse0_7 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_HowToConstruct_0_13), (MR_Integer) 1));
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 0))));
        MR_Word ConsIds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 1))));
        MR_Word NeedsUpdates0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 2))));
        MR_Word NeedsUpdates_11;
        MR_Word CellToReuse_12;

        ll_backend__unify_gen__needs_update_args_to_words_3_p_0(ArgVarsWidths_4, NeedsUpdates0_10, &NeedsUpdates_11);
        {
          CellToReuse_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CellToReuse_12, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(0), CellToReuse_12, 1) = ((MR_Box) (ConsIds_9));
          MR_hl_field(MR_mktag(0), CellToReuse_12, 2) = ((MR_Box) (NeedsUpdates_11));
        }
        *STATE_VARIABLE_HowToConstruct_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (CellToReuse_12)));
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_HowToConstruct_14 = STATE_VARIABLE_HowToConstruct_0_13;
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__needs_update_args_to_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
          return;
        }
      }
    else
    {
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Word ArgNU_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgNUs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Width_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
        MR_Word _Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Width_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_HeadVar__1_1 = Var_49;
              MR_Word next_value_of_HeadVar__2_2 = ArgNUs_18;

              // direct tailcall eliminated
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word TailWordNUs_27;

              ll_backend__unify_gen__needs_update_args_to_words_3_p_0(Var_49, ArgNUs_18, &TailWordNUs_27);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgNU_17));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailWordNUs_27));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Width_21, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word WordNU_33;
                  MR_Word LaterWordVarsWidths_34;
                  MR_Word LaterWordArgNUs_35;
                  MR_Word TailWordNUs_48;

                  ll_backend__unify_gen__does_any_arg_in_word_need_update_6_p_0(Var_49, ArgNUs_18, ArgNU_17, &WordNU_33, &LaterWordVarsWidths_34, &LaterWordArgNUs_35);
                  ll_backend__unify_gen__needs_update_args_to_words_3_p_0(LaterWordVarsWidths_34, LaterWordArgNUs_35, &TailWordNUs_48);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordNU_33));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailWordNUs_48));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.needs_update_args_to_words\'/3", (MR_String) "apw_partial_shifted");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.needs_update_args_to_words\'/3", (MR_String) "none_shifted");
                    return;
                  }
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
ll_backend__unify_gen__does_any_arg_in_word_need_update_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NU_0_3,
  MR_Word * STATE_VARIABLE_NU_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__6_6 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.does_any_arg_in_word_need_update\'/6", (MR_String) "mismatched lists");
          return;
        }
      }
    else
    {
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.does_any_arg_in_word_need_update\'/6", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Word ArgNU_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgNUs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Width_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 1))));
        MR_Word _Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Width_38)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__5_5 = HeadVar__1_1;
              *HeadVar__6_6 = HeadVar__2_2;
              *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__5_5 = HeadVar__1_1;
              *HeadVar__6_6 = HeadVar__2_2;
              *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Width_38, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__5_5 = HeadVar__1_1;
                  *HeadVar__6_6 = HeadVar__2_2;
                  *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word STATE_VARIABLE_NU_59_59;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_STATE_VARIABLE_NU_0_3;

                  switch (ArgNU_32) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      STATE_VARIABLE_NU_59_59 = STATE_VARIABLE_NU_0_3;
                      break;
                    case (MR_Integer) 0:
                      STATE_VARIABLE_NU_59_59 = (MR_Integer) 0;
                      break;
                  }
                  // direct tailcall eliminated
                  next_value_of_HeadVar__1_1 = Var_61;
                  next_value_of_HeadVar__2_2 = ArgNUs_33;
                  next_value_of_STATE_VARIABLE_NU_0_3 = STATE_VARIABLE_NU_59_59;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_NU_0_3 = next_value_of_STATE_VARIABLE_NU_0_3;
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
ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(
  MR_Word IntTag_4,
  MR_Word * Const_5,
  MR_Word * Type_6)
{
  switch (MR_tag((MR_Word) IntTag_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_4, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Int_7));
        }
        *Type_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntTag_4, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (UInt_8));
        }
        *Type_6 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_9 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_4, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Const_5 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int8_9));
        }
        *Type_6 = (MR_Integer) 2;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_10 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt8_10));
            }
            *Type_6 = (MR_Integer) 3;
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_11 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int16_11));
            }
            *Type_6 = (MR_Integer) 4;
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_12 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt16_12));
            }
            *Type_6 = (MR_Integer) 5;
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_13 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (Int32_13));
            }
            *Type_6 = (MR_Integer) 6;
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_Word) (UInt32_14));
            }
            *Type_6 = (MR_Integer) 7;
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_15 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = MR_box_int64(Int64_15);
            }
            *Type_6 = (MR_Integer) 8;
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_16 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = MR_box_uint64(UInt64_16);
            }
            *Type_6 = (MR_Integer) 9;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(
  MR_Word Var_10,
  MR_Word Arg_11,
  MR_Integer Ptag_12,
  MR_Word ArgMode_13,
  MR_Word Type_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_23,
  MR_Word * STATE_VARIABLE_CLD_24)
{
  {
    MR_Word ModuleInfo_18;
    MR_Word LeftFromToInsts_19;
    MR_Word RightFromToInsts_20;
    MR_Word LeftTopFunctorMode_21;
    MR_Word RightTopFunctorMode_22;

    ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
    LeftFromToInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_13, (MR_Integer) 0))));
    RightFromToInsts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_13, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_18, LeftFromToInsts_19, Type_14, &LeftTopFunctorMode_21);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_18, RightFromToInsts_20, Type_14, &RightTopFunctorMode_22);
    switch (LeftTopFunctorMode_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "left arg input in construction");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        switch (RightTopFunctorMode_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_31;
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Arg_11));
              }
              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (Ptag_12));
                MR_hl_field(MR_mktag(2), Var_31, 1) = ((MR_Box) (Var_33));
              }
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(Var_10, Var_31, Code_15, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "unexpected right arg in construction");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (RightTopFunctorMode_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "unexpected right arg in unused construction");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_27;

              {
                Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Ptag_12));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(Var_10, Var_27, CI_16, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
              *Code_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_6_p_0(
  MR_Word FieldAndArgVar_7,
  MR_Word ArgMode_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23)
{
  {
    MR_bool succeeded;
    MR_Word LeftUniVal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 0))));
    MR_Word RightVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 1))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 2))));
    MR_Word ModuleInfo_15;
    MR_Word LeftFromToInsts_16;
    MR_Word RightFromToInsts_17;
    MR_Word LeftTopFunctorMode_18;
    MR_Word RightTopFunctorMode_19;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_15);
    LeftFromToInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_8, (MR_Integer) 0))));
    RightFromToInsts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_8, (MR_Integer) 1))));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_15, LeftFromToInsts_16, Type_14, &LeftTopFunctorMode_18);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_15, RightFromToInsts_17, Type_14, &RightTopFunctorMode_19);
    switch (LeftTopFunctorMode_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (RightTopFunctorMode_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/6", (MR_String) "unexpected right arg in left-in sub_unify");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_22, RightVar_13);
              if (succeeded)
                if (((MR_tag((MR_Word) LeftUniVal_12)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Word LeftField_21 = (MR_Word) (MR_body((MR_Word) (LeftUniVal_12), (MR_Integer) 0));

                  ll_backend__unify_gen__generate_sub_assign_to_var_from_field_6_p_0(RightVar_13, LeftField_21, Code_9, CI_10, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                }
                else
                {
                  MR_Word LeftVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LeftUniVal_12, (MR_Integer) 0))));

                  ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RightVar_13, LeftVar_20, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                  *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                }
              else
              {
                *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (RightTopFunctorMode_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if (((MR_tag((MR_Word) LeftUniVal_12)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Word LeftField_35 = (MR_Word) (MR_body((MR_Word) (LeftUniVal_12), (MR_Integer) 0));

              ll_backend__unify_gen__generate_sub_assign_to_field_from_var_6_p_0(LeftField_35, RightVar_13, Code_9, CI_10, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
            }
            else
            {
              MR_Word LeftVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LeftUniVal_12, (MR_Integer) 0))));

              succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_22, LeftVar_34);
              if (succeeded)
              {
                ll_backend__code_loc_dep__assign_var_to_var_4_p_0(LeftVar_34, RightVar_13, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              }
              else
              {
                *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/6", (MR_String) "unexpected right arg in left-out sub_unify");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          switch (RightTopFunctorMode_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/6", (MR_String) "unexpected right arg in left-ununsed sub_unify");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              }
              break;
          }
          *STATE_VARIABLE_CLD_23 = STATE_VARIABLE_CLD_0_22;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_to_field_from_var_6_p_0(
  MR_Word LeftField_7,
  MR_Word RightVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_49,
  MR_Word * STATE_VARIABLE_CLD_50)
{
  {
    MR_Integer LeftPtag_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 0))));
    MR_Word LeftBaseRval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 1))));
    MR_Integer LeftOffset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 2))));
    MR_Word LeftWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 3))));
    MR_Word ProduceRightVarCode_16;
    MR_Word RightRval_17;
    MR_Word LeftBaseRval_18;
    MR_Word MaterializeLeftBaseCode_19;
    MR_Word AssignCode_23;
    MR_Word STATE_VARIABLE_CLD_51_51;
    MR_Word Var_89;

    ll_backend__code_loc_dep__produce_variable_6_p_0(RightVar_8, &ProduceRightVarCode_16, &RightRval_17, CI_10, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_51_51);
    ll_backend__code_loc_dep__materialize_vars_in_rval_6_p_0(LeftBaseRval0_13, &LeftBaseRval_18, &MaterializeLeftBaseCode_19, CI_10, STATE_VARIABLE_CLD_51_51, STATE_VARIABLE_CLD_50);
    switch (MR_tag((MR_Word) LeftWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          AssignCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LeftLval_22;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;

          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (LeftPtag_12));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (LeftOffset_14));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            LeftLval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LeftLval_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), LeftLval_22, 1) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(3), LeftLval_22, 2) = ((MR_Box) (LeftBaseRval_18));
            MR_hl_field(MR_mktag(3), LeftLval_22, 3) = ((MR_Box) (Var_84));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (LeftLval_22));
            MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (RightRval_17));
          }
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) ((MR_String) "Copy value"));
          }
          AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_86)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LeftLvalA_27;
          MR_Word LeftLvalB_28;
          MR_Word SrcA_29;
          MR_Word SrcB_30;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Integer Var_72;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;

          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (LeftPtag_12));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (LeftOffset_14));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
          }
          {
            LeftLvalA_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LeftLvalA_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), LeftLvalA_27, 1) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(3), LeftLvalA_27, 2) = ((MR_Box) (LeftBaseRval_18));
            MR_hl_field(MR_mktag(3), LeftLvalA_27, 3) = ((MR_Box) (Var_67));
          }
          Var_72 = (MR_Integer) ((MR_Unsigned) LeftOffset_14 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            LeftLvalB_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LeftLvalB_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), LeftLvalB_28, 1) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(3), LeftLvalB_28, 2) = ((MR_Box) (LeftBaseRval_18));
            MR_hl_field(MR_mktag(3), LeftLvalB_28, 3) = ((MR_Box) (Var_70));
          }
          {
            SrcA_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SrcA_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), SrcA_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
            MR_hl_field(MR_mktag(3), SrcA_29, 2) = ((MR_Box) (RightRval_17));
          }
          {
            SrcB_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SrcB_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), SrcB_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
            MR_hl_field(MR_mktag(3), SrcB_30, 2) = ((MR_Box) (RightRval_17));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (LeftLvalA_27));
            MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) (SrcA_29));
          }
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) ((MR_String) "Update double word"));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (LeftLvalB_28));
            MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (SrcB_30));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_String) "Update double word"));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
          }
          AssignCode_23 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_76);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Mask_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 4))));
              MR_Word Fill_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 5))));
              MR_Integer MaskInt_42 = (MR_Integer) (Mask_35);
              MR_Word ComplementMask_43;
              MR_Word MaskOld_44;
              MR_Word ShiftedRightRval_45;
              MR_Word CombinedRval_46;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Integer Var_58;
              MR_Integer Var_59;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word LeftLval_90;
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 1))));
              MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 2))));
              MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 3))));

              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LeftPtag_12));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (LeftOffset_14));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
              }
              {
                LeftLval_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LeftLval_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), LeftLval_90, 1) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(3), LeftLval_90, 2) = ((MR_Box) (LeftBaseRval_18));
                MR_hl_field(MR_mktag(3), LeftLval_90, 3) = ((MR_Box) (Var_55));
              }
              Var_59 = mercury__int__f_60_60_2_f_0(MaskInt_42, (MR_Integer) 0);
              Var_58 = ~(Var_59);
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
              }
              {
                ComplementMask_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ComplementMask_43, 1) = ((MR_Box) (Var_57));
              }
              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (LeftLval_90));
              }
              {
                MaskOld_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskOld_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
                MR_hl_field(MR_mktag(3), MaskOld_44, 2) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(3), MaskOld_44, 3) = ((MR_Box) (ComplementMask_43));
              }
              ShiftedRightRval_45 = ll_backend__unify_gen__left_shift_rval_3_f_0(RightRval_17, (MR_Word) (((MR_Box) ((MR_Integer) 0))), Fill_36);
              CombinedRval_46 = ll_backend__unify_gen__or_two_rvals_2_f_0(MaskOld_44, ShiftedRightRval_45);
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (LeftLval_90));
                MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (CombinedRval_46));
              }
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Var_64));
                MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_63)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Mask_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 5))));
              MR_Word Fill_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 6))));
              MR_Word Shift_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 3))));
              MR_Integer ShiftInt_99 = (MR_Integer) (Shift_98);
              MR_Integer MaskInt_100 = (MR_Integer) (Mask_96);
              MR_Word ComplementMask_101;
              MR_Word MaskOld_102;
              MR_Word ShiftedRightRval_103;
              MR_Word CombinedRval_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Integer Var_109;
              MR_Integer Var_110;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word LeftLval_117;
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 1))));
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 2))));
              MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LeftWidth_15, (MR_Integer) 4))));

              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (LeftPtag_12));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (LeftOffset_14));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (Var_107));
              }
              {
                LeftLval_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LeftLval_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), LeftLval_117, 1) = ((MR_Box) (Var_105));
                MR_hl_field(MR_mktag(3), LeftLval_117, 2) = ((MR_Box) (LeftBaseRval_18));
                MR_hl_field(MR_mktag(3), LeftLval_117, 3) = ((MR_Box) (Var_106));
              }
              Var_110 = mercury__int__f_60_60_2_f_0(MaskInt_100, ShiftInt_99);
              Var_109 = ~(Var_110);
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
              }
              {
                ComplementMask_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ComplementMask_101, 1) = ((MR_Box) (Var_108));
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (LeftLval_117));
              }
              {
                MaskOld_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskOld_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
                MR_hl_field(MR_mktag(3), MaskOld_102, 2) = ((MR_Box) (Var_113));
                MR_hl_field(MR_mktag(3), MaskOld_102, 3) = ((MR_Box) (ComplementMask_101));
              }
              ShiftedRightRval_103 = ll_backend__unify_gen__left_shift_rval_3_f_0(RightRval_17, Shift_98, Fill_97);
              CombinedRval_104 = ll_backend__unify_gen__or_two_rvals_2_f_0(MaskOld_102, ShiftedRightRval_103);
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (LeftLval_117));
                MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (CombinedRval_104));
              }
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Var_115));
                MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_114)));
            }
            break;
          case (MR_Integer) 2:
            {
              AssignCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            break;
        }
        break;
    }
    Var_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeLeftBaseCode_19, AssignCode_23);
    *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceRightVarCode_16, Var_89);
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__or_two_rvals_2_f_0(
  MR_Word RvalA_4,
  MR_Word RvalB_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) RvalA_4)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 0))) == (MR_Integer) 1)));
    MR_Word OrRval_6;
    MR_Word Var_7;
    MR_Integer Var_8;

    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalA_4, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
        succeeded = (Var_8 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      OrRval_6 = RvalB_5;
    else
    {
      MR_Word Var_9;
      MR_Integer Var_10;

      succeeded = ((((MR_tag((MR_Word) RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalB_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0))));
          succeeded = (Var_10 == (MR_Integer) 0);
        }
      }
      if (succeeded)
        OrRval_6 = RvalA_4;
      else
      {
        {
          OrRval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), OrRval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), OrRval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
          MR_hl_field(MR_mktag(3), OrRval_6, 2) = ((MR_Box) (RvalA_4));
          MR_hl_field(MR_mktag(3), OrRval_6, 3) = ((MR_Box) (RvalB_5));
        }
      }
    }
    return OrRval_6;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_to_var_from_field_6_p_0(
  MR_Word LeftVar_7,
  MR_Word RightField_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41)
{
  {
    MR_Integer RightPtag_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RightField_8, (MR_Integer) 0))));
    MR_Word RightBaseRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RightField_8, (MR_Integer) 1))));
    MR_Integer RightOffset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RightField_8, (MR_Integer) 2))));
    MR_Word RightWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RightField_8, (MR_Integer) 3))));

    switch (MR_tag((MR_Word) RightWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_41 = STATE_VARIABLE_CLD_0_40;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RightLval_18;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;

          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (RightPtag_12));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (RightOffset_14));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            RightLval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), RightLval_18, 1) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(3), RightLval_18, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLval_18, 3) = ((MR_Box) (Var_84));
          }
          ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(LeftVar_7, RightLval_18, Code_9, CI_10, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RightLvalA_22;
          MR_Word RightLvalB_23;
          MR_Word RightRval_24;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Integer Var_74;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_81;

          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (RightPtag_12));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (RightOffset_14));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
          }
          {
            RightLvalA_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 1) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 3) = ((MR_Box) (Var_69));
          }
          Var_74 = (MR_Integer) ((MR_Unsigned) RightOffset_14 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
          }
          {
            RightLvalB_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 1) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 3) = ((MR_Box) (Var_72));
          }
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (RightLvalA_22));
          }
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (RightLvalB_23));
          }
          {
            RightRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightRval_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), RightRval_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
            MR_hl_field(MR_mktag(3), RightRval_24, 2) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(3), RightRval_24, 3) = ((MR_Box) (Var_78));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (RightLvalB_23));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (RightLvalA_22));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
          }
          ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_7, Var_79, RightRval_24, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Mask_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 4))));
              MR_Word Fill_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 5))));
              MR_Word RightRval0_30;
              MR_Integer MaskInt_35;
              MR_Word MaskedRightRval0_36;
              MR_Word MaskedRightRval_37;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_65;
              MR_Word RightLval_87;
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 1))));
              MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 2))));
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 3))));

              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (RightPtag_12));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (RightOffset_14));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
              }
              {
                RightLval_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLval_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), RightLval_87, 1) = ((MR_Box) (Var_46));
                MR_hl_field(MR_mktag(3), RightLval_87, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLval_87, 3) = ((MR_Box) (Var_47));
              }
              {
                RightRval0_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RightRval0_30, 0) = ((MR_Box) (RightLval_87));
              }
              MaskInt_35 = (MR_Integer) (Mask_28);
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MaskInt_35));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
              }
              {
                MaskedRightRval0_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 2) = ((MR_Box) (RightRval0_30));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 3) = ((MR_Box) (Var_51));
              }
              switch (Fill_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MaskedRightRval_37 = MaskedRightRval0_36;
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      MaskedRightRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[6])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 2) = ((MR_Box) (MaskedRightRval0_36));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      MaskedRightRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[7])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 2) = ((MR_Box) (MaskedRightRval0_36));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      MaskedRightRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[8])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 2) = ((MR_Box) (MaskedRightRval0_36));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    {
                      MaskedRightRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[1])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 2) = ((MR_Box) (MaskedRightRval0_36));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    {
                      MaskedRightRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[2])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 2) = ((MR_Box) (MaskedRightRval0_36));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    {
                      MaskedRightRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_37, 2) = ((MR_Box) (MaskedRightRval0_36));
                    }
                  }
                  break;
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (RightLval_87));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_7, Var_65, MaskedRightRval_37, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 3))));
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Mask_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 5))));
              MR_Word Fill_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 6))));
              MR_Word RightRval0_115;
              MR_Integer MaskInt_116;
              MR_Word MaskedRightRval0_117;
              MR_Word MaskedRightRval_118;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_135;
              MR_Word RightLval_137;
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 1))));
              MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 2))));
              MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RightWidth_15, (MR_Integer) 4))));

              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (RightPtag_12));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (RightOffset_14));
              }
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
              }
              {
                RightLval_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLval_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), RightLval_137, 1) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(3), RightLval_137, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLval_137, 3) = ((MR_Box) (Var_43));
              }
              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (RightLval_137));
              }
              RightRval0_115 = ll_backend__unify_gen__right_shift_rval_2_f_0(Var_45, Shift_33);
              MaskInt_116 = (MR_Integer) (Mask_113);
              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (MaskInt_116));
              }
              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_122));
              }
              {
                MaskedRightRval0_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_117, 2) = ((MR_Box) (RightRval0_115));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_117, 3) = ((MR_Box) (Var_121));
              }
              switch (Fill_114) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MaskedRightRval_118 = MaskedRightRval0_117;
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      MaskedRightRval_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[6])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 2) = ((MR_Box) (MaskedRightRval0_117));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      MaskedRightRval_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[7])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 2) = ((MR_Box) (MaskedRightRval0_117));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      MaskedRightRval_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[8])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 2) = ((MR_Box) (MaskedRightRval0_117));
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    {
                      MaskedRightRval_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[1])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 2) = ((MR_Box) (MaskedRightRval0_117));
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    {
                      MaskedRightRval_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[2])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 2) = ((MR_Box) (MaskedRightRval0_117));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    {
                      MaskedRightRval_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
                      MR_hl_field(MR_mktag(3), MaskedRightRval_118, 2) = ((MR_Box) (MaskedRightRval0_117));
                    }
                  }
                  break;
              }
              {
                Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (RightLval_137));
                MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_7, Var_135, MaskedRightRval_118, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
            }
            break;
          case (MR_Integer) 2:
            {
              *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_41 = STATE_VARIABLE_CLD_0_40;
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Word Shift_5)
{
  {
    MR_Word ShiftedRval_6;
    MR_Integer ShiftInt_7 = (MR_Integer) (Shift_5);
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (ShiftInt_7));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (Var_11));
    }
    {
      ShiftedRval_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ShiftedRval_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ShiftedRval_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[10])));
      MR_hl_field(MR_mktag(3), ShiftedRval_6, 2) = ((MR_Box) (Rval_4));
      MR_hl_field(MR_mktag(3), ShiftedRval_6, 3) = ((MR_Box) (Var_10));
    }
    return ShiftedRval_6;
  }
}

static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_NextOffset_8;
    MR_Word conv0_STATE_VARIABLE_RevFieldAddrs_18;

    ll_backend__unify_gen__generate_field_addr_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_NextOffset_8, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_RevFieldAddrs_18);
    *wrapper_arg_3 = ((MR_Box) (conv1_NextOffset_8));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_RevFieldAddrs_18));
  }
}

static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0(
  MR_Word Var_13,
  MR_Integer Ptag_14,
  MR_Word CellArgs_15,
  MR_Word HowToConstruct_16,
  MR_Word MaybeSize_17,
  MR_Word Context_18,
  MR_Word MayUseAtomic_19,
  MR_Word * Code_20,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37)
{
  {
    MR_bool succeeded;
    MR_Word VarType_23;
    MR_String VarTypeMsg_24;
    MR_Word GCMethod_25;
    MR_Word ReserveWordAtStart_26;
    MR_Integer Size_27;
    MR_Word MaybeAllocId_28;
    MR_Word CellCode_29;
    MR_Word FieldAddrs_30;
    MR_Word STATE_VARIABLE_CI_38_38;
    MR_Word STATE_VARIABLE_CLD_40_40;
    MR_Word TypeCtor_45;
    MR_Word TypeSym_46;
    MR_Integer TypeArity_47;
    MR_String TypeSymStr_48;
    MR_String TypeArityStr_49;
    MR_String Var_50;
    MR_Word RevFieldAddrs_55;
    MR_Integer Var_54;
    MR_Box conv3_Var_54;
    MR_Box conv2_RevFieldAddrs_55;

    VarType_23 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_34, Var_13);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_23, &TypeCtor_45);
    TypeSym_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_45, (MR_Integer) 0))));
    TypeArity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_45, (MR_Integer) 1))));
    TypeSymStr_48 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSym_46);
    mercury__string__int_to_string_2_p_0(TypeArity_47, &TypeArityStr_49);
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "/", TypeArityStr_49);
    VarTypeMsg_24 = mercury__string__f_43_43_2_f_0(TypeSymStr_48, Var_50);
    ll_backend__code_info__get_gc_method_2_p_0(STATE_VARIABLE_CI_0_34, &GCMethod_25);
    succeeded = (GCMethod_25 == (MR_Integer) 5);
    if (succeeded)
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_23);
    if (succeeded)
      ReserveWordAtStart_26 = (MR_Integer) 1;
    else
      ReserveWordAtStart_26 = (MR_Integer) 0;
    Size_27 = ll_backend__code_util__size_of_cell_args_1_f_0(CellArgs_15);
    ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_18, VarTypeMsg_24, Size_27, &MaybeAllocId_28, STATE_VARIABLE_CI_0_34, &STATE_VARIABLE_CI_38_38);
    ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_13, ReserveWordAtStart_26, Ptag_14, CellArgs_15, HowToConstruct_16, MaybeSize_17, MaybeAllocId_28, MayUseAtomic_19, &CellCode_29, STATE_VARIABLE_CI_38_38, STATE_VARIABLE_CI_35, STATE_VARIABLE_CLD_0_36, &STATE_VARIABLE_CLD_40_40);
    mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__unify_gen_scalar_common_1[4]), (MR_Word) (&ll_backend__unify_gen_scalar_common_2[5]), CellArgs_15, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_54, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv2_RevFieldAddrs_55);
    Var_54 = ((MR_Integer) (conv3_Var_54));
    RevFieldAddrs_55 = ((MR_Word) (conv2_RevFieldAddrs_55));
    mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0), RevFieldAddrs_55, &FieldAddrs_30);
    if ((FieldAddrs_30 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Code_20 = CellCode_29;
      *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_40_40;
    }
    else
    {
      MR_Word FieldCode_33;

      ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(FieldAddrs_30, Var_13, Ptag_14, &FieldCode_33, STATE_VARIABLE_CLD_40_40, STATE_VARIABLE_CLD_37);
      *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CellCode_29, FieldCode_33);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellVar_2,
  MR_Integer CellPtag_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
  }
  else
  {
    MR_Word FieldAddr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word FieldAddrs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ThisCode_16;
    MR_Word RestCode_17;
    MR_Integer FieldNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FieldAddr_12, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldAddr_12, (MR_Integer) 1))));
    MR_Word FieldNumRval_21;
    MR_Word Addr_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_CLD_29_29;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (FieldNum_19));
    }
    {
      FieldNumRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FieldNumRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), FieldNumRval_21, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (CellVar_2));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (CellPtag_3));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(2), Var_26, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(2), Var_26, 2) = ((MR_Box) (FieldNumRval_21));
    }
    {
      Addr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Addr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Addr_22, 1) = ((MR_Box) (Var_26));
    }
    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(Var_20, Addr_22, &ThisCode_16, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_29_29);
    ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(FieldAddrs_13, CellVar_2, CellPtag_3, &RestCode_17, STATE_VARIABLE_CLD_29_29, STATE_VARIABLE_CLD_6);
    *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_16, RestCode_17);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_and_pack_cons_args__755__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurArgNum_0_3,
  MR_Word STATE_VARIABLE_TakeAddr_0_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_6,
  MR_Word * STATE_VARIABLE_MayUseAtomic_7,
  MR_Word STATE_VARIABLE_Code_0_8,
  MR_Word * STATE_VARIABLE_Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_26;

        *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0_1));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (STATE_VARIABLE_TakeAddr_0_4));
          MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_cons_args\'/12", (MR_String) "TakeAddr != [] at end");
        *STATE_VARIABLE_CLD_12 = STATE_VARIABLE_CLD_0_11;
        *STATE_VARIABLE_Code_9 = STATE_VARIABLE_Code_0_8;
        *STATE_VARIABLE_MayUseAtomic_7 = STATE_VARIABLE_MayUseAtomic_0_6;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_cons_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_cons_args\'/12", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_129, (MR_Integer) 0))));
        MR_Word Width_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_129, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) Width_76)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_127;
              MR_Word Var_99;

              succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_4)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 0))));
                Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_4, (MR_Integer) 1))));
                succeeded = (STATE_VARIABLE_CurArgNum_0_3 == Var_127);
              }
              if (succeeded)
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_cons_args\'/12", (MR_String) "taking address of dummy");
                  return;
                }
              }
              else
              {
                MR_Integer STATE_VARIABLE_CurArgNum_115_123 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurArgNum_0_3 + (MR_Unsigned) (MR_Integer) 1);
                MR_Word next_value_of_HeadVar__1_1 = Var_128;
                MR_Word next_value_of_HeadVar__2_2 = ArgModes_67;
                MR_Integer next_value_of_STATE_VARIABLE_CurArgNum_0_3 = STATE_VARIABLE_CurArgNum_115_123;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                STATE_VARIABLE_CurArgNum_0_3 = next_value_of_STATE_VARIABLE_CurArgNum_0_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word LeftOverVarsWidths_95;
              MR_Word LeftOverArgModes_96;
              MR_Word HeadCellArg_97;
              MR_Word TailCellArgs_98;
              MR_Integer STATE_VARIABLE_CurArgNum_115_115;
              MR_Word STATE_VARIABLE_TakeAddr_116_116;
              MR_Word STATE_VARIABLE_MayUseAtomic_117_117;
              MR_Word STATE_VARIABLE_Code_118_118;
              MR_Word STATE_VARIABLE_CLD_119_119;

              ll_backend__unify_gen__generate_and_pack_cons_word_19_p_0(Var_75, Width_76, Var_128, ArgMode_66, ArgModes_67, &LeftOverVarsWidths_95, &LeftOverArgModes_96, STATE_VARIABLE_CurArgNum_0_3, &STATE_VARIABLE_CurArgNum_115_115, STATE_VARIABLE_TakeAddr_0_4, &STATE_VARIABLE_TakeAddr_116_116, &HeadCellArg_97, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_117_117, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_118_118, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_119_119);
              ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0(LeftOverVarsWidths_95, LeftOverArgModes_96, STATE_VARIABLE_CurArgNum_115_115, STATE_VARIABLE_TakeAddr_116_116, &TailCellArgs_98, STATE_VARIABLE_MayUseAtomic_117_117, STATE_VARIABLE_MayUseAtomic_7, STATE_VARIABLE_Code_118_118, STATE_VARIABLE_Code_9, CI_10, STATE_VARIABLE_CLD_119_119, STATE_VARIABLE_CLD_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCellArg_97));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCellArgs_98));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word LeftOverVarsWidths_95;
              MR_Word LeftOverArgModes_96;
              MR_Word HeadCellArg_97;
              MR_Word TailCellArgs_98;
              MR_Integer STATE_VARIABLE_CurArgNum_115_115;
              MR_Word STATE_VARIABLE_TakeAddr_116_116;
              MR_Word STATE_VARIABLE_MayUseAtomic_117_117;
              MR_Word STATE_VARIABLE_Code_118_118;
              MR_Word STATE_VARIABLE_CLD_119_119;

              ll_backend__unify_gen__generate_and_pack_cons_word_19_p_0(Var_75, Width_76, Var_128, ArgMode_66, ArgModes_67, &LeftOverVarsWidths_95, &LeftOverArgModes_96, STATE_VARIABLE_CurArgNum_0_3, &STATE_VARIABLE_CurArgNum_115_115, STATE_VARIABLE_TakeAddr_0_4, &STATE_VARIABLE_TakeAddr_116_116, &HeadCellArg_97, STATE_VARIABLE_MayUseAtomic_0_6, &STATE_VARIABLE_MayUseAtomic_117_117, STATE_VARIABLE_Code_0_8, &STATE_VARIABLE_Code_118_118, CI_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_119_119);
              ll_backend__unify_gen__generate_and_pack_cons_args_12_p_0(LeftOverVarsWidths_95, LeftOverArgModes_96, STATE_VARIABLE_CurArgNum_115_115, STATE_VARIABLE_TakeAddr_116_116, &TailCellArgs_98, STATE_VARIABLE_MayUseAtomic_117_117, STATE_VARIABLE_MayUseAtomic_7, STATE_VARIABLE_Code_118_118, STATE_VARIABLE_Code_9, CI_10, STATE_VARIABLE_CLD_119_119, STATE_VARIABLE_CLD_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCellArg_97));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCellArgs_98));
              }
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_and_pack_cons_word_19_p_0(
  MR_Word Var_20,
  MR_Word Width_21,
  MR_Word VarsWidths_22,
  MR_Word ArgMode_23,
  MR_Word ArgModes_24,
  MR_Word * LeftOverVarsWidths_25,
  MR_Word * LeftOverArgModes_26,
  MR_Integer CurArgNum_27,
  MR_Integer * LeftOverArgNum_28,
  MR_Word STATE_VARIABLE_TakeAddr_0_88,
  MR_Word * STATE_VARIABLE_TakeAddr_89,
  MR_Word * CellArg_30,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_90,
  MR_Word * STATE_VARIABLE_MayUseAtomic_91,
  MR_Word STATE_VARIABLE_Code_0_92,
  MR_Word * STATE_VARIABLE_Code_93,
  MR_Word CI_33,
  MR_Word STATE_VARIABLE_CLD_0_94,
  MR_Word * STATE_VARIABLE_CLD_95)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_35;
    MR_Word Type_36;
    MR_Word ModuleInfo_37;
    MR_Word STATE_VARIABLE_MayUseAtomic_96_96;
    MR_Word STATE_VARIABLE_TakeAddr_97_97;
    MR_Integer Var_126;

    ll_backend__code_info__get_vartypes_2_p_0(CI_33, &VarTypes_35);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_35, Var_20, &Type_36);
    ll_backend__code_info__get_module_info_2_p_0(CI_33, &ModuleInfo_37);
    check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_37, Type_36, STATE_VARIABLE_MayUseAtomic_0_90, &STATE_VARIABLE_MayUseAtomic_96_96);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_88)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_126 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_88, (MR_Integer) 0))));
      STATE_VARIABLE_TakeAddr_97_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_88, (MR_Integer) 1))));
      succeeded = (CurArgNum_27 == Var_126);
    }
    if (succeeded)
    {
      MR_Word LCMCNull_38;

      *STATE_VARIABLE_TakeAddr_89 = STATE_VARIABLE_TakeAddr_97_97;
      *LeftOverVarsWidths_25 = VarsWidths_22;
      *LeftOverArgModes_26 = ArgModes_24;
      *LeftOverArgNum_28 = (MR_Integer) ((MR_Unsigned) CurArgNum_27 + (MR_Unsigned) (MR_Integer) 1);
      ll_backend__code_info__get_lcmc_null_2_p_0(CI_33, &LCMCNull_38);
      switch (MR_tag((MR_Word) Width_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word MaybeNull_41;

            switch (LCMCNull_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeNull_41 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                break;
              case (MR_Integer) 1:
                {
                  MaybeNull_41 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[5]));
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *CellArg_30 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeNull_41));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeNulls_45;

            switch (LCMCNull_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeNulls_45 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                break;
              case (MR_Integer) 1:
                {
                  MaybeNulls_45 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[4]));
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *CellArg_30 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeNulls_45));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Width_21, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_cons_word\'/19", (MR_String) "taking address of partial word");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_cons_word\'/19", (MR_String) "taking address of dummy");
                  return;
                }
              }
              break;
          }
          break;
      }
      *STATE_VARIABLE_MayUseAtomic_91 = (MR_Integer) 1;
      *STATE_VARIABLE_CLD_95 = STATE_VARIABLE_CLD_0_94;
      *STATE_VARIABLE_Code_93 = STATE_VARIABLE_Code_0_92;
    }
    else
    {
      MR_Word IsReal_60;
      MR_Word Rval_61;
      MR_Word STATE_VARIABLE_Code_111_111;
      MR_Word STATE_VARIABLE_CLD_112_112;

      ll_backend__unify_gen__generate_cons_arg_rval_11_p_0(ModuleInfo_37, Var_20, Type_36, ArgMode_23, &IsReal_60, &Rval_61, STATE_VARIABLE_Code_0_92, &STATE_VARIABLE_Code_111_111, CI_33, STATE_VARIABLE_CLD_0_94, &STATE_VARIABLE_CLD_112_112);
      switch (MR_tag((MR_Word) Width_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            switch (IsReal_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *CellArg_30 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *CellArg_30 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_61));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
                break;
            }
            *LeftOverVarsWidths_25 = VarsWidths_22;
            *LeftOverArgModes_26 = ArgModes_24;
            *LeftOverArgNum_28 = (MR_Integer) ((MR_Unsigned) CurArgNum_27 + (MR_Unsigned) (MR_Integer) 1);
            *STATE_VARIABLE_TakeAddr_89 = STATE_VARIABLE_TakeAddr_0_88;
            *STATE_VARIABLE_MayUseAtomic_91 = STATE_VARIABLE_MayUseAtomic_96_96;
            *STATE_VARIABLE_Code_93 = STATE_VARIABLE_Code_111_111;
            *STATE_VARIABLE_CLD_95 = STATE_VARIABLE_CLD_112_112;
          }
          break;
        case (MR_Integer) 2:
          {
            switch (IsReal_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *CellArg_30 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
                break;
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *CellArg_30 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Rval_61));
                }
                break;
            }
            *LeftOverVarsWidths_25 = VarsWidths_22;
            *LeftOverArgModes_26 = ArgModes_24;
            *LeftOverArgNum_28 = (MR_Integer) ((MR_Unsigned) CurArgNum_27 + (MR_Unsigned) (MR_Integer) 1);
            *STATE_VARIABLE_TakeAddr_89 = STATE_VARIABLE_TakeAddr_0_88;
            *STATE_VARIABLE_MayUseAtomic_91 = STATE_VARIABLE_MayUseAtomic_96_96;
            *STATE_VARIABLE_Code_93 = STATE_VARIABLE_Code_111_111;
            *STATE_VARIABLE_CLD_95 = STATE_VARIABLE_CLD_112_112;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Width_21, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Fill_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_21, (MR_Integer) 5))));
                MR_Word Completeness0_72;
                MR_Word RevToOrRvals0_73;
                MR_Integer NextArgNum_75;
                MR_Word RevToOrRvals_76;
                MR_Word Completeness_77;
                MR_Word ToOrRvals_78;
                MR_Word PackedRval_79;
                MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_21, (MR_Integer) 1))));
                MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_21, (MR_Integer) 2))));
                MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_21, (MR_Integer) 3))));
                MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_21, (MR_Integer) 4))));

                switch (IsReal_60) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Completeness0_72 = (MR_Integer) 1;
                      RevToOrRvals0_73 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word CastRval_74;

                      Completeness0_72 = (MR_Integer) 0;
                      ll_backend__unify_gen__cast_away_any_sign_extend_bits_3_p_0(Fill_71, Rval_61, &CastRval_74);
                      {
                        RevToOrRvals0_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), RevToOrRvals0_73, 0) = ((MR_Box) (CastRval_74));
                        MR_hl_field(MR_mktag(1), RevToOrRvals0_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                    break;
                }
                NextArgNum_75 = (MR_Integer) ((MR_Unsigned) CurArgNum_27 + (MR_Unsigned) (MR_Integer) 1);
                ll_backend__unify_gen__generate_and_pack_one_cons_word_19_p_0(VarsWidths_22, ArgModes_24, LeftOverVarsWidths_25, LeftOverArgModes_26, NextArgNum_75, LeftOverArgNum_28, STATE_VARIABLE_TakeAddr_0_88, STATE_VARIABLE_TakeAddr_89, RevToOrRvals0_73, &RevToOrRvals_76, Completeness0_72, &Completeness_77, STATE_VARIABLE_MayUseAtomic_96_96, STATE_VARIABLE_MayUseAtomic_91, STATE_VARIABLE_Code_111_111, STATE_VARIABLE_Code_93, CI_33, STATE_VARIABLE_CLD_112_112, STATE_VARIABLE_CLD_95);
                mercury__list__reverse_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RevToOrRvals_76, &ToOrRvals_78);
                ll_backend__unify_gen__or_packed_rvals_2_p_0(ToOrRvals_78, &PackedRval_79);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *CellArg_30 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackedRval_79));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Completeness_77));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_cons_word\'/19", (MR_String) "apw_partial_shifted");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_cons_word\'/19", (MR_String) "apw_none_shifted");
                  return;
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
ll_backend__unify_gen__cast_away_any_sign_extend_bits_3_p_0(
  MR_Word Fill_4,
  MR_Word Rval0_5,
  MR_Word * Rval_6)
{
  switch (Fill_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 5:
    case (MR_Integer) 6:
    case (MR_Integer) 4:
      *Rval_6 = Rval0_5;
      break;
    case (MR_Integer) 2:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[1])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[2])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *Rval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval0_5));
        }
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__or_packed_rvals_2_p_0(
  MR_Word Rvals_3,
  MR_Word * OrAllRval_4)
{
  if ((Rvals_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *OrAllRval_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6]));
  }
  else
  {
    MR_Word HeadRval_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rvals_3, (MR_Integer) 0))));
    MR_Word TailRvals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rvals_3, (MR_Integer) 1))));

    ll_backend__unify_gen__or_packed_rvals_lag_3_p_0(HeadRval_5, TailRvals_6, OrAllRval_4);
  }
}

static void MR_CALL 
ll_backend__unify_gen__or_packed_rvals_lag_3_p_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5,
  MR_Word * OrAllRval_6)
{
  {
    MR_bool succeeded;

    if ((TailRvals_5 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *OrAllRval_6 = HeadRval_4;
    else
    {
      MR_Word HeadTailRval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailRvals_5, (MR_Integer) 0))));
      MR_Word TailTailRvals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailRvals_5, (MR_Integer) 1))));
      MR_Word TailOrAllRval_9;
      MR_Word Var_13;
      MR_Integer Var_14;

      ll_backend__unify_gen__or_packed_rvals_lag_3_p_0(HeadTailRval_7, TailTailRvals_8, &TailOrAllRval_9);
      succeeded = ((((MR_tag((MR_Word) HeadRval_4)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadRval_4, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))));
          succeeded = (Var_14 == (MR_Integer) 0);
        }
      }
      if (succeeded)
        *OrAllRval_6 = TailOrAllRval_9;
      else
      {
        MR_Word Var_15;
        MR_Integer Var_16;

        succeeded = ((((MR_tag((MR_Word) TailOrAllRval_9)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 0))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TailOrAllRval_9, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
            succeeded = (Var_16 == (MR_Integer) 0);
          }
        }
        if (succeeded)
          *OrAllRval_6 = HeadRval_4;
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *OrAllRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (HeadRval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TailOrAllRval_9));
          }
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_and_pack_one_cons_word_19_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer CurArgNum_5,
  MR_Integer * LeftOverArgNum_6,
  MR_Word STATE_VARIABLE_TakeAddr_0_7,
  MR_Word * STATE_VARIABLE_TakeAddr_8,
  MR_Word STATE_VARIABLE_RevToOrRvals_0_9,
  MR_Word * STATE_VARIABLE_RevToOrRvals_10,
  MR_Word STATE_VARIABLE_Completeness_0_11,
  MR_Word * STATE_VARIABLE_Completeness_12,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_13,
  MR_Word * STATE_VARIABLE_MayUseAtomic_14,
  MR_Word STATE_VARIABLE_Code_0_15,
  MR_Word * STATE_VARIABLE_Code_16,
  MR_Word CI_17,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *HeadVar__4_4 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        *LeftOverArgNum_6 = CurArgNum_5;
        *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
        *STATE_VARIABLE_Code_16 = STATE_VARIABLE_Code_0_15;
        *STATE_VARIABLE_MayUseAtomic_14 = STATE_VARIABLE_MayUseAtomic_0_13;
        *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
        *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
        *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_one_cons_word\'/19", (MR_String) "length misnatch");
          return;
        }
      }
    else
    {
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_one_cons_word\'/19", (MR_String) "length misnatch");
          return;
        }
      }
      else
      {
        MR_Word ArgMode_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgModes_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_175, (MR_Integer) 0))));
        MR_Word Width_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_175, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) Width_111)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = HeadVar__1_1;
              *HeadVar__4_4 = HeadVar__2_2;
              *LeftOverArgNum_6 = CurArgNum_5;
              *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
              *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
              *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
              *STATE_VARIABLE_MayUseAtomic_14 = STATE_VARIABLE_MayUseAtomic_0_13;
              *STATE_VARIABLE_Code_16 = STATE_VARIABLE_Code_0_15;
              *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *HeadVar__3_3 = HeadVar__1_1;
              *HeadVar__4_4 = HeadVar__2_2;
              *LeftOverArgNum_6 = CurArgNum_5;
              *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
              *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
              *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
              *STATE_VARIABLE_MayUseAtomic_14 = STATE_VARIABLE_MayUseAtomic_0_13;
              *STATE_VARIABLE_Code_16 = STATE_VARIABLE_Code_0_15;
              *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Width_111, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *HeadVar__3_3 = HeadVar__1_1;
                  *HeadVar__4_4 = HeadVar__2_2;
                  *LeftOverArgNum_6 = CurArgNum_5;
                  *STATE_VARIABLE_TakeAddr_8 = STATE_VARIABLE_TakeAddr_0_7;
                  *STATE_VARIABLE_RevToOrRvals_10 = STATE_VARIABLE_RevToOrRvals_0_9;
                  *STATE_VARIABLE_Completeness_12 = STATE_VARIABLE_Completeness_0_11;
                  *STATE_VARIABLE_MayUseAtomic_14 = STATE_VARIABLE_MayUseAtomic_0_13;
                  *STATE_VARIABLE_Code_16 = STATE_VARIABLE_Code_0_15;
                  *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word VarTypes_130;
                  MR_Word Type_131;
                  MR_Word ModuleInfo_132;
                  MR_Word IsReal_133;
                  MR_Word ArgRval_134;
                  MR_Integer NextArgNum_144;
                  MR_Word STATE_VARIABLE_MayUseAtomic_157_157;
                  MR_Word STATE_VARIABLE_TakeAddr_161_161;
                  MR_Word STATE_VARIABLE_Code_162_162;
                  MR_Word STATE_VARIABLE_CLD_163_163;
                  MR_Word STATE_VARIABLE_RevToOrRvals_164_164;
                  MR_Word STATE_VARIABLE_Completeness_165_165;
                  MR_Word STATE_VARIABLE_TakeAddr_158_158;
                  MR_Integer Var_173;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Integer next_value_of_CurArgNum_5;
                  MR_Word next_value_of_STATE_VARIABLE_TakeAddr_0_7;
                  MR_Word next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  MR_Word next_value_of_STATE_VARIABLE_Completeness_0_11;
                  MR_Word next_value_of_STATE_VARIABLE_MayUseAtomic_0_13;
                  MR_Word next_value_of_STATE_VARIABLE_Code_0_15;
                  MR_Word next_value_of_STATE_VARIABLE_CLD_0_18;

                  ll_backend__code_info__get_vartypes_2_p_0(CI_17, &VarTypes_130);
                  hlds__vartypes__lookup_var_type_3_p_0(VarTypes_130, Var_110, &Type_131);
                  ll_backend__code_info__get_module_info_2_p_0(CI_17, &ModuleInfo_132);
                  check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_132, Type_131, STATE_VARIABLE_MayUseAtomic_0_13, &STATE_VARIABLE_MayUseAtomic_157_157);
                  succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_7)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_173 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_7, (MR_Integer) 0))));
                    STATE_VARIABLE_TakeAddr_158_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_7, (MR_Integer) 1))));
                    succeeded = (CurArgNum_5 == Var_173);
                  }
                  if (succeeded)
                  {
                    STATE_VARIABLE_TakeAddr_161_161 = STATE_VARIABLE_TakeAddr_158_158;
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_and_pack_one_cons_word\'/19", (MR_String) "taking address of partial word");
                      return;
                    }
                  }
                  else
                    STATE_VARIABLE_TakeAddr_161_161 = STATE_VARIABLE_TakeAddr_0_7;
                  ll_backend__unify_gen__generate_cons_arg_rval_11_p_0(ModuleInfo_132, Var_110, Type_131, ArgMode_97, &IsReal_133, &ArgRval_134, STATE_VARIABLE_Code_0_15, &STATE_VARIABLE_Code_162_162, CI_17, STATE_VARIABLE_CLD_0_18, &STATE_VARIABLE_CLD_163_163);
                  if (((((MR_tag((MR_Word) Width_111)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Width_111, (MR_Integer) 0))) == (MR_Integer) 2))))
                  {
                    STATE_VARIABLE_RevToOrRvals_164_164 = STATE_VARIABLE_RevToOrRvals_0_9;
                    STATE_VARIABLE_Completeness_165_165 = STATE_VARIABLE_Completeness_0_11;
                  }
                  else
                  {
                    MR_Word Shift_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_111, (MR_Integer) 3))));
                    MR_Word Fill_140 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_111, (MR_Integer) 6))));
                    MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_111, (MR_Integer) 1))));
                    MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_111, (MR_Integer) 2))));
                    MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_111, (MR_Integer) 4))));
                    MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Width_111, (MR_Integer) 5))));

                    switch (IsReal_133) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_Completeness_165_165 = (MR_Integer) 1;
                          STATE_VARIABLE_RevToOrRvals_164_164 = STATE_VARIABLE_RevToOrRvals_0_9;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ShiftedArgRval_141;

                          ShiftedArgRval_141 = ll_backend__unify_gen__left_shift_rval_3_f_0(ArgRval_134, Shift_137, Fill_140);
                          {
                            STATE_VARIABLE_RevToOrRvals_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_164_164, 0) = ((MR_Box) (ShiftedArgRval_141));
                            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevToOrRvals_164_164, 1) = ((MR_Box) (STATE_VARIABLE_RevToOrRvals_0_9));
                          }
                          STATE_VARIABLE_Completeness_165_165 = STATE_VARIABLE_Completeness_0_11;
                        }
                        break;
                    }
                  }
                  NextArgNum_144 = (MR_Integer) ((MR_Unsigned) CurArgNum_5 + (MR_Unsigned) (MR_Integer) 1);
                  // direct tailcall eliminated
                  next_value_of_HeadVar__1_1 = Var_174;
                  next_value_of_HeadVar__2_2 = ArgModes_98;
                  next_value_of_CurArgNum_5 = NextArgNum_144;
                  next_value_of_STATE_VARIABLE_TakeAddr_0_7 = STATE_VARIABLE_TakeAddr_161_161;
                  next_value_of_STATE_VARIABLE_RevToOrRvals_0_9 = STATE_VARIABLE_RevToOrRvals_164_164;
                  next_value_of_STATE_VARIABLE_Completeness_0_11 = STATE_VARIABLE_Completeness_165_165;
                  next_value_of_STATE_VARIABLE_MayUseAtomic_0_13 = STATE_VARIABLE_MayUseAtomic_157_157;
                  next_value_of_STATE_VARIABLE_Code_0_15 = STATE_VARIABLE_Code_162_162;
                  next_value_of_STATE_VARIABLE_CLD_0_18 = STATE_VARIABLE_CLD_163_163;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  CurArgNum_5 = next_value_of_CurArgNum_5;
                  STATE_VARIABLE_TakeAddr_0_7 = next_value_of_STATE_VARIABLE_TakeAddr_0_7;
                  STATE_VARIABLE_RevToOrRvals_0_9 = next_value_of_STATE_VARIABLE_RevToOrRvals_0_9;
                  STATE_VARIABLE_Completeness_0_11 = next_value_of_STATE_VARIABLE_Completeness_0_11;
                  STATE_VARIABLE_MayUseAtomic_0_13 = next_value_of_STATE_VARIABLE_MayUseAtomic_0_13;
                  STATE_VARIABLE_Code_0_15 = next_value_of_STATE_VARIABLE_Code_0_15;
                  STATE_VARIABLE_CLD_0_18 = next_value_of_STATE_VARIABLE_CLD_0_18;
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

static MR_Word MR_CALL 
ll_backend__unify_gen__left_shift_rval_3_f_0(
  MR_Word Rval_5,
  MR_Word Shift_6,
  MR_Word Fill_7)
{
  {
    MR_bool succeeded;
    MR_Word ShiftedRval_8;
    MR_Integer ShiftInt_9 = (MR_Integer) (Shift_6);
    MR_Word CastRval_10;

    switch (Fill_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 5:
      case (MR_Integer) 6:
      case (MR_Integer) 4:
        CastRval_10 = Rval_5;
        break;
      case (MR_Integer) 2:
        {
          {
            CastRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CastRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[1])));
            MR_hl_field(MR_mktag(3), CastRval_10, 2) = ((MR_Box) (Rval_5));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            CastRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CastRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[2])));
            MR_hl_field(MR_mktag(3), CastRval_10, 2) = ((MR_Box) (Rval_5));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            CastRval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CastRval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), CastRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
            MR_hl_field(MR_mktag(3), CastRval_10, 2) = ((MR_Box) (Rval_5));
          }
        }
        break;
    }
    succeeded = (ShiftInt_9 == (MR_Integer) 0);
    if (succeeded)
      ShiftedRval_8 = CastRval_10;
    else
    {
      MR_Word Var_11;
      MR_Integer Var_12;

      succeeded = ((((MR_tag((MR_Word) Rval_5)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
          succeeded = (Var_12 == (MR_Integer) 0);
        }
      }
      if (succeeded)
        ShiftedRval_8 = CastRval_10;
      else
      {
        MR_Word Var_15;
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (ShiftInt_9));
        }
        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (Var_16));
        }
        {
          ShiftedRval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 2) = ((MR_Box) (CastRval_10));
          MR_hl_field(MR_mktag(3), ShiftedRval_8, 3) = ((MR_Box) (Var_15));
        }
      }
    }
    return ShiftedRval_8;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_cons_arg_rval_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Var_13,
  MR_Word Type_14,
  MR_Word ArgMode_15,
  MR_Word * IsReal_16,
  MR_Word * Rval_17,
  MR_Word STATE_VARIABLE_Code_0_26,
  MR_Word * STATE_VARIABLE_Code_27,
  MR_Word CI_19,
  MR_Word STATE_VARIABLE_CLD_0_28,
  MR_Word * STATE_VARIABLE_CLD_29)
{
  {
    MR_Word RHSInsts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_15, (MR_Integer) 1))));
    MR_Word RHSTopFunctorMode_23;
    MR_Word _LHSMode_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgMode_15, (MR_Integer) 0))));

    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_12, RHSInsts_22, Type_14, &RHSTopFunctorMode_23);
    switch (RHSTopFunctorMode_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IsDummy_24;

          IsDummy_24 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_19, Var_13);
          switch (IsDummy_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *IsReal_16 = (MR_Integer) 0;
                *Rval_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6]));
                *STATE_VARIABLE_Code_27 = STATE_VARIABLE_Code_0_26;
                *STATE_VARIABLE_CLD_29 = STATE_VARIABLE_CLD_0_28;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word VarCode_25;

                *IsReal_16 = (MR_Integer) 1;
                ll_backend__code_loc_dep__produce_variable_6_p_0(Var_13, &VarCode_25, Rval_17, CI_19, STATE_VARIABLE_CLD_0_28, STATE_VARIABLE_CLD_29);
                *STATE_VARIABLE_Code_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), STATE_VARIABLE_Code_0_26, VarCode_25);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *IsReal_16 = (MR_Integer) 0;
          *Rval_17 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6]));
          *STATE_VARIABLE_Code_27 = STATE_VARIABLE_Code_0_26;
          *STATE_VARIABLE_CLD_29 = STATE_VARIABLE_CLD_0_28;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_test_7_p_0(
  MR_Word VarA_8,
  MR_Word VarB_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_23,
  MR_Word * STATE_VARIABLE_CI_24,
  MR_Word STATE_VARIABLE_CLD_0_25,
  MR_Word * STATE_VARIABLE_CLD_26)
{
  {
    MR_bool succeeded;
    MR_Word IsDummy_13;

    IsDummy_13 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(STATE_VARIABLE_CI_0_23, VarA_8);
    switch (IsDummy_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CI_24 = STATE_VARIABLE_CI_0_23;
          *STATE_VARIABLE_CLD_26 = STATE_VARIABLE_CLD_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeA_14;
          MR_Word ValA_15;
          MR_Word CodeB_16;
          MR_Word ValB_17;
          MR_Word Type_18;
          MR_Word Op_20;
          MR_Word FailCode_22;
          MR_Word STATE_VARIABLE_CLD_27_27;
          MR_Word STATE_VARIABLE_CLD_28_28;
          MR_Word Var_31;
          MR_Word Var_34;
          MR_Word BuiltinType_19;

          ll_backend__code_loc_dep__produce_variable_6_p_0(VarA_8, &CodeA_14, &ValA_15, STATE_VARIABLE_CI_0_23, STATE_VARIABLE_CLD_0_25, &STATE_VARIABLE_CLD_27_27);
          ll_backend__code_loc_dep__produce_variable_6_p_0(VarB_9, &CodeB_16, &ValB_17, STATE_VARIABLE_CI_0_23, STATE_VARIABLE_CLD_27_27, &STATE_VARIABLE_CLD_28_28);
          Type_18 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_23, VarA_8);
          succeeded = ((MR_tag((MR_Word) Type_18)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            BuiltinType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type_18, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) BuiltinType_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(BuiltinType_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Op_20 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
                    break;
                  case (MR_Integer) 1:
                    Op_20 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
                    break;
                  case (MR_Integer) 2:
                    {
                      Op_20 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[5]));
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuiltinType_19, (MR_Integer) 0))));

                  {
                    Op_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Op_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), Op_20, 1) = ((MR_Box) (IntType_21));
                  }
                }
                break;
            }
          }
          else
          {
            Op_20 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[5]));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Op_20));
            MR_hl_field(MR_mktag(3), Var_31, 2) = ((MR_Box) (ValA_15));
            MR_hl_field(MR_mktag(3), Var_31, 3) = ((MR_Box) (ValB_17));
          }
          ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(Var_31, &FailCode_22, STATE_VARIABLE_CI_0_23, STATE_VARIABLE_CI_24, STATE_VARIABLE_CLD_28_28, STATE_VARIABLE_CLD_26);
          Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeB_16, FailCode_22);
          *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeA_14, Var_34);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_assignment_5_p_0(
  MR_Word VarA_6,
  MR_Word VarB_7,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10)
{
  {
    MR_bool succeeded;

    *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_9, VarA_6);
    if (succeeded)
      ll_backend__code_loc_dep__assign_var_to_var_4_p_0(VarA_6, VarB_7, STATE_VARIABLE_CLD_0_9, STATE_VARIABLE_CLD_10);
    else
      *STATE_VARIABLE_CLD_10 = STATE_VARIABLE_CLD_0_9;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__get_cons_arg_widths__261__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_27;

    conv0_LambdaHeadVar__2_27 = ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__251__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word AllArgs_7,
  MR_Word * AllArgsPosWidths_8)
{
  {
    MR_bool succeeded;
    MR_Word ConsRepnDefn_9;

    succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_5, ConsId_6, &ConsRepnDefn_9);
    if (succeeded)
    {
      MR_Word ConsArgRepns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 3))));
      MR_Word ConsTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 2))));
      MR_Word ArgPosWidths_12;
      MR_Integer NumAllArgs_14;
      MR_Integer NumConsArgs_15;
      MR_Integer NumExtraArgs_16;
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 0))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 1))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 4))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 5))));

      ArgPosWidths_12 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0), (MR_Word) (&ll_backend__unify_gen_scalar_common_2[4]), ConsArgRepns_10);
      mercury__list__length_2_p_0(TypeInfo_for_T_50, AllArgs_7, &NumAllArgs_14);
      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ConsArgRepns_10, &NumConsArgs_15);
      NumExtraArgs_16 = (MR_Integer) ((MR_Unsigned) NumAllArgs_14 - (MR_Unsigned) NumConsArgs_15);
      succeeded = (NumExtraArgs_16 == (MR_Integer) 0);
      if (succeeded)
        mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_50, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0), AllArgs_7, ArgPosWidths_12, AllArgsPosWidths_8);
      else
      {
        succeeded = (NumExtraArgs_16 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word TypeInfo_55_55;
          MR_Word ExtraArgs_17;
          MR_Word ConsArgs_18;
          MR_Integer InitOffset_22;
          MR_Word ExtraArgsPosWidths_23;
          MR_Word ConsArgsPosWidths_24;
          MR_Word AddedBy_21;
          MR_Integer Var_19;
          MR_Integer Var_20;
          MR_Word conv1_AllArgsPosWidths_8;

          mercury__list__det_split_list_4_p_0(TypeInfo_for_T_50, NumExtraArgs_16, AllArgs_7, &ExtraArgs_17, &ConsArgs_18);
          succeeded = ((((MR_tag((MR_Word) ConsTag_11)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 0))) == (MR_Integer) 13)));
          if (succeeded)
          {
            Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1))));
            Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2))));
            AddedBy_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 3))));
            {
              MR_Word Var_29;

              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ll_backend__unify_gen__get_cons_arg_widths_4_p_0_2));
                MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (AddedBy_21));
                MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140ll_backend.unify_gen.get_cons_arg_widths\'/4", (MR_String) "AddedBy != sectag_added_by_unify");
              InitOffset_22 = (MR_Integer) 1;
            }
          }
          else
            InitOffset_22 = (MR_Integer) 0;
          ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(InitOffset_22, ExtraArgs_17, &ExtraArgsPosWidths_23);
          mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_50, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0), ConsArgs_18, ArgPosWidths_12, &ConsArgsPosWidths_24);
          {
            TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_55_55, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
            MR_hl_field(MR_mktag(0), TypeInfo_55_55, 1) = ((MR_Box) (TypeInfo_for_T_50));
            MR_hl_field(MR_mktag(0), TypeInfo_55_55, 2) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0));
          }
          conv1_AllArgsPosWidths_8 = mercury__list__f_43_43_2_f_0(TypeInfo_55_55, (MR_Word) (ExtraArgsPosWidths_23), (MR_Word) (ConsArgsPosWidths_24));
          *AllArgsPosWidths_8 = (MR_Word) (conv1_AllArgsPosWidths_8);
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.get_cons_arg_widths\'/4", (MR_String) "too few arguments");
            return;
          }
        }
      }
    }
    else
    {
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0((MR_Integer) 0, AllArgs_7, AllArgsPosWidths_8);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(
  MR_Integer CurOffset_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
  else
  {
    MR_Box Arg_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Word Args_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgPosWidth_8;
    MR_Word ArgsPosWidths_9;
    MR_Word PosWidth_10;
    MR_Word Var_11 = (MR_Word) (CurOffset_1);
    MR_Word Var_12 = (MR_Word) (CurOffset_1);
    MR_Integer Var_13;

    {
      PosWidth_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PosWidth_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), PosWidth_10, 1) = ((MR_Box) (Var_12));
    }
    {
      ArgPosWidth_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgPosWidth_8, 0) = Arg_6;
      MR_hl_field(MR_mktag(0), ArgPosWidth_8, 1) = ((MR_Box) (PosWidth_10));
    }
    Var_13 = (MR_Integer) ((MR_Unsigned) CurOffset_1 + (MR_Unsigned) (MR_Integer) 1);
    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_108_108_111_99_97_116_101_95_99_111_110_115_101_99_117_116_105_118_101_95_102_117_108_108_95_119_111_114_100_115_95_95_91_49_93_95_48_3_p_0(Var_13, Args_7, &ArgsPosWidths_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgPosWidth_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsPosWidths_9));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen____Unify____active_ground_term_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen____Compare____active_ground_term_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen____Unify____field_addr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen____Compare____field_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_and_arg_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen____Unify____field_and_arg_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____field_and_arg_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen____Compare____field_and_arg_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____maybe_real_input_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen____Unify____maybe_real_input_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____maybe_real_input_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen____Compare____maybe_real_input_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen____Unify____test_sense_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen____Compare____test_sense_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_field_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen____Unify____uni_field_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_field_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen____Compare____uni_field_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen____Unify____uni_val_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen____Compare____uni_val_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__unify_gen__init(void)
{
}

void mercury__ll_backend__unify_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_active_ground_term_map_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_and_arg_var_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_maybe_real_input_arg_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_test_sense_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_field_0);
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_val_0);
}

void mercury__ll_backend__unify_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen.
