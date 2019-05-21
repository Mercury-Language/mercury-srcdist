/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-03-09
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
#include "backend_libs.arg_pack.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_arg_width_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_width_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_width_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

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
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__1908__1_2_p_0(
  MR_Integer Shift_12,
  MR_Integer HeadVar__2_39);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__1688__1_2_p_0(
  MR_Word Lang_20,
  MR_Word HeadVar__2_112);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1519__1_2_p_0(
  MR_Word Lang_16,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__631__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_143);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__659__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_122);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__684__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_104);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__543__1_2_p_0(
  MR_Word Lang_31,
  MR_Word HeadVar__2_185);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__668__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_113);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__694__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_98);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__692__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_94);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__641__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_133);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__448__1_2_p_0(
  MR_Word ForeignLang_12,
  MR_Word HeadVar__2_92);

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__239__1_1_f_0(
  MR_Word LambdaHeadVar__1_21);

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
ll_backend__unify_gen__pair_with_width_3_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Width_4,
  MR_Box Arg_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__unify_gen__shift_combine_rval_type_8_p_0(
  MR_Word ArgA_9,
  MR_Integer Shift_10,
  MR_Word MaybeArgB_11,
  MR_Word * FinalArg_12);

static MR_bool MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0(
  MR_Word CI_10,
  MR_Word CellArgA_11,
  MR_Integer Shift_12,
  MR_Word MaybeCellArgB_13,
  MR_Word * FinalCellArg_14,
  MR_Word STATE_VARIABLE_Code_0_30,
  MR_Word * STATE_VARIABLE_Code_31,
  MR_Word STATE_VARIABLE_CLD_0_32,
  MR_Word * STATE_VARIABLE_CLD_33);

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
  MR_Word ConstArgsWidths_15,
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

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(
  MR_Word UnboxedFloats_6,
  MR_Word UnboxedInt64s_7,
  MR_Word ConsTag_8,
  MR_Word ArgWidth_9,
  MR_Word * TypedRval_10);

static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
  MR_Word CellArg_6,
  MR_Integer ArgOffset_7,
  MR_Integer * NextOffset_8,
  MR_Word STATE_VARIABLE_RevFieldAddrs_0_16,
  MR_Word * STATE_VARIABLE_RevFieldAddrs_17);

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
  MR_Word STATE_VARIABLE_StaticCellInfo_0_65,
  MR_Word * STATE_VARIABLE_StaticCellInfo_66,
  MR_Word STATE_VARIABLE_ActiveMap_0_67,
  MR_Word * STATE_VARIABLE_ActiveMap_68);

static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0(
  MR_Word Widths_4,
  MR_Word STATE_VARIABLE_TypedRvals_0_8,
  MR_Word * STATE_VARIABLE_TypedRvals_9);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ActiveMap_0_3,
  MR_Word * STATE_VARIABLE_ActiveMap_4);

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

static void MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word Rval_3,
  MR_Integer PrevOffset0_4,
  MR_Integer Ptag_5,
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
  MR_Word STATE_VARIABLE_CI_0_87,
  MR_Word * STATE_VARIABLE_CI_88,
  MR_Word STATE_VARIABLE_CLD_0_89,
  MR_Word * STATE_VARIABLE_CLD_90);

static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
  MR_Word ArgWidths_4,
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
ll_backend__unify_gen__pack_cell_rvals_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0(
  MR_Word ArgWidths_8,
  MR_Word CellArgs0_9,
  MR_Word * CellArgs_10,
  MR_Word * Code_11,
  MR_Word CI_12,
  MR_Word STATE_VARIABLE_CLD_0_14,
  MR_Word * STATE_VARIABLE_CLD_15);

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
  MR_Word STATE_VARIABLE_CLD_0_33,
  MR_Word * STATE_VARIABLE_CLD_34);

static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Integer Shift_5);

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_to_var_from_field_6_p_0(
  MR_Word LeftVar_7,
  MR_Word RightField_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_23,
  MR_Word * STATE_VARIABLE_CLD_24);

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

static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_9_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word STATE_VARIABLE_TakeAddr_0_5,
  MR_Word CI_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * STATE_VARIABLE_MayUseAtomic_9);

static void MR_CALL 
ll_backend__unify_gen__generate_cons_arg_10_p_0(
  MR_Word VarTypes_11,
  MR_Word HeadVar__2_2,
  MR_Word ArgMode_14,
  MR_Integer CurArgNum_15,
  MR_Word STATE_VARIABLE_TakeAddr_0_30,
  MR_Word * STATE_VARIABLE_TakeAddr_31,
  MR_Word CI_17,
  MR_Word * CellArg_18,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_32,
  MR_Word * STATE_VARIABLE_MayUseAtomic_33);

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

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word AllArgs_7,
  MR_Word * AllArgsWidths_8);

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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[9][3];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[6][5];

static /* final */ const MR_Integer ll_backend__unify_gen_scalar_common_4[1][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[1][7];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[5][1];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][8];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[1][12];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[3][6];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[2][11];




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
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[2])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[9][3] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
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
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__unify_gen__construct_cell_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[0])),
    ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[1])),
    ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_10[0])),
    ((MR_Box) (ll_backend__unify_gen__pack_ground_term_args_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_width_0))
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
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Integer ll_backend__unify_gen_scalar_common_4[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__unify_gen__pair__pti_pair_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0)),
    ((MR_Box) (&ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[3][6] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 1 */
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



static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__pseudo_1__plain_parse_tree__prog_data__type_ctor_info_arg_width_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_width_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_width_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_arg_width_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_term_size_value_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
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
  {     (MR_PseudoTypeInfo) &ll_backend__unify_gen__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_typed_rval_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_val_0,
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
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
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
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
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_uni_field_0
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
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__1908__1_2_p_0(
  MR_Integer Shift_12,
  MR_Integer HeadVar__2_39)
{
  {
    MR_bool succeeded = (Shift_12 == HeadVar__2_39);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__1688__1_2_p_0(
  MR_Word Lang_20,
  MR_Word HeadVar__2_112)
{
  {
    MR_bool succeeded = (Lang_20 == HeadVar__2_112);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1519__1_2_p_0(
  MR_Word Lang_16,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded = (Lang_16 == HeadVar__2_65);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__631__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_143)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_143)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__659__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_122)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_122)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__684__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_104)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_104)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__543__1_2_p_0(
  MR_Word Lang_31,
  MR_Word HeadVar__2_185)
{
  {
    MR_bool succeeded = (Lang_31 == HeadVar__2_185);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__668__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_113)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_113)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__694__1_2_p_0(
  MR_Word MaybeSize_20,
  MR_Word HeadVar__2_98)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[3], ((MR_Box) (MaybeSize_20)), ((MR_Box) (HeadVar__2_98)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__692__1_2_p_0(
  MR_Word TakeAddr_19,
  MR_Word HeadVar__2_94)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[2], ((MR_Box) (TakeAddr_19)), ((MR_Box) (HeadVar__2_94)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__641__1_2_p_0(
  MR_Word RHSVarsWidths_16,
  MR_Word HeadVar__2_133)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVarsWidths_16)), ((MR_Box) (HeadVar__2_133)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__448__1_2_p_0(
  MR_Word ForeignLang_12,
  MR_Word HeadVar__2_92)
{
  {
    MR_bool succeeded = (ForeignLang_12 == HeadVar__2_92);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__239__1_1_f_0(
  MR_Word LambdaHeadVar__1_21)
{
  {
    MR_Word LambdaHeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 2)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 0)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 1)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 3)));

    return LambdaHeadVar__2_22;
  }
}

void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

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
ll_backend__unify_gen____Compare____field_and_arg_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      ll_backend__unify_gen____Compare____uni_val_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
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
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_16 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ArgY1_11 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 0);

        ll_backend__unify_gen____Compare____uni_field_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
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
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
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
            parse_tree__prog_data____Compare____arg_width_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = ll_backend__unify_gen____Unify____uni_val_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
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
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word ArgX1_5 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 0);
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_6 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);
        succeeded = ll_backend__unify_gen____Unify____uni_field_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
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
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ArgX4_9, ArgY4_10);
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
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
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
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

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[3], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__pair_with_width_3_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Width_4,
  MR_Box Arg_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(0), base, 0) = Arg_5;
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Width_4));
  }
}

static void MR_CALL 
ll_backend__unify_gen__shift_combine_rval_type_8_p_0(
  MR_Word ArgA_9,
  MR_Integer Shift_10,
  MR_Word MaybeArgB_11,
  MR_Word * FinalArg_12)
{
  {
    MR_bool succeeded = (Shift_10 == (MR_Integer) 0);
    MR_Word RvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgA_9, (MR_Integer) 0)));
    MR_Word TypeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgA_9, (MR_Integer) 1)));
    MR_Word ShiftRvalA_17;
    MR_Word FinalRval_20;

    if (succeeded)
      ShiftRvalA_17 = RvalA_15;
    else
    {
      MR_Word Var_35;
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Shift_10));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Var_36));
      }
      {
        ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[10])));
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 2) = ((MR_Box) (RvalA_15));
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 3) = ((MR_Box) (Var_35));
      }
    }
    if ((MaybeArgB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      FinalRval_20 = ShiftRvalA_17;
    else
    {
      MR_Word RvalB_18;
      MR_Word TypeB_19;
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgB_11, (MR_Integer) 0)));

      RvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
      TypeB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
      succeeded = ll_backend__llds____Unify____llds_type_0_0(TypeA_16, TypeB_19);
      if (succeeded)
      {
        {
          FinalRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), FinalRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), FinalRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
          MR_hl_field(MR_mktag(3), FinalRval_20, 2) = ((MR_Box) (ShiftRvalA_17));
          MR_hl_field(MR_mktag(3), FinalRval_20, 3) = ((MR_Box) (RvalB_18));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.shift_combine_rval_type\'/8", (MR_String) "mismatched llds_types");
          return;
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *FinalArg_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FinalRval_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeA_16));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__1908__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0(
  MR_Word CI_10,
  MR_Word CellArgA_11,
  MR_Integer Shift_12,
  MR_Word MaybeCellArgB_13,
  MR_Word * FinalCellArg_14,
  MR_Word STATE_VARIABLE_Code_0_30,
  MR_Word * STATE_VARIABLE_Code_31,
  MR_Word STATE_VARIABLE_CLD_0_32,
  MR_Word * STATE_VARIABLE_CLD_33)
{
  {
    MR_bool succeeded = (Shift_12 == (MR_Integer) 0);

    if (succeeded)
      succeeded = (MaybeCellArgB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      *FinalCellArg_14 = CellArgA_11;
      *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
      *STATE_VARIABLE_Code_31 = STATE_VARIABLE_Code_0_30;
    }
    else
    {
      MR_Word ShiftCellArgA_21;

      switch (MR_tag((MR_Word) CellArgA_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *STATE_VARIABLE_Code_31 = STATE_VARIABLE_Code_0_30;
            *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RvalA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgA_11, (MR_Integer) 0)));
            MR_Word Completeness_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgA_11, (MR_Integer) 1)));
            MR_Word Var_19;

            succeeded = ((MR_tag((MR_Word) RvalA_17)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), RvalA_17, (MR_Integer) 0)));
              {
                MR_Word IsDummy_20;

                IsDummy_20 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_10, Var_19);
                switch (IsDummy_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      *STATE_VARIABLE_Code_31 = STATE_VARIABLE_Code_0_30;
                      *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word VarCode_22;
                      MR_Word VarRval_23;
                      MR_Word Var_46;

                      ll_backend__code_loc_dep__produce_variable_6_p_0(Var_19, &VarCode_22, &VarRval_23, CI_10, STATE_VARIABLE_CLD_0_32, STATE_VARIABLE_CLD_33);
                      succeeded = (Shift_12 == (MR_Integer) 0);
                      if (succeeded)
                        Var_46 = VarRval_23;
                      else
                      {
                        MR_Word Var_69;
                        MR_Word Var_70;

                        {
                          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Shift_12));
                        }
                        {
                          Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
                        }
                        {
                          Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[10])));
                          MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (VarRval_23));
                          MR_hl_field(MR_mktag(3), Var_46, 3) = ((MR_Box) (Var_69));
                        }
                      }
                      {
                        ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ShiftCellArgA_21, 0) = ((MR_Box) (Var_46));
                        MR_hl_field(MR_mktag(1), ShiftCellArgA_21, 1) = ((MR_Box) (Completeness_18));
                      }
                      *STATE_VARIABLE_Code_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, STATE_VARIABLE_Code_0_30, VarCode_22);
                    }
                    break;
                }
              }
            }
            else
            {
              MR_Integer Int_24;
              MR_Word Var_48;

              succeeded = ((((MR_tag((MR_Word) RvalA_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_17, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0)));
              }
              if (succeeded)
              {
                MR_Integer NewInt_25;
                MR_Word Var_49;
                MR_Word Var_50;

                succeeded = (Shift_12 == (MR_Integer) 0);
                if (succeeded)
                  NewInt_25 = Int_24;
                else
                  NewInt_25 = mercury__int__f_60_60_2_f_0(Int_24, Shift_12);
                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (NewInt_25));
                }
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
                }
                {
                  ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ShiftCellArgA_21, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(MR_mktag(1), ShiftCellArgA_21, 1) = ((MR_Box) (Completeness_18));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "non-var or int argument");
                  return;
                }
              }
              *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
              *STATE_VARIABLE_Code_31 = STATE_VARIABLE_Code_0_30;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_36;
            MR_Word RvalA_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), CellArgA_11, (MR_Integer) 0)));
            MR_Word Var_55;

            {
              Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
              MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ll_backend__unify_gen__shift_combine_arg_9_p_0_1));
              MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Shift_12));
              MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "double word rval cannot be shifted");
            succeeded = ((MR_tag((MR_Word) RvalA_58)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), RvalA_58, (MR_Integer) 0)));
              {
                MR_Word VarCode_53;
                MR_Word VarRval_54;

                ll_backend__code_loc_dep__produce_variable_6_p_0(Var_55, &VarCode_53, &VarRval_54, CI_10, STATE_VARIABLE_CLD_0_32, STATE_VARIABLE_CLD_33);
                {
                  ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ShiftCellArgA_21, 0) = ((MR_Box) (VarRval_54));
                }
                *STATE_VARIABLE_Code_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, STATE_VARIABLE_Code_0_30, VarCode_53);
              }
            }
            else
            {
              MR_Word Var_42;
              MR_Float Var_26;

              succeeded = ((((MR_tag((MR_Word) RvalA_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_58, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_58, (MR_Integer) 1)));
                succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                  Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_42, (MR_Integer) 1)));
              }
              if (succeeded)
                ShiftCellArgA_21 = CellArgA_11;
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "non-var or float argument");
                  return;
                }
              }
              *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
              *STATE_VARIABLE_Code_31 = STATE_VARIABLE_Code_0_30;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "cell_arg_take_addr");
              return;
            }
          }
          break;
      }
      if ((MaybeCellArgB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *FinalCellArg_14 = ShiftCellArgA_21;
      else
      {
        MR_Word CellArgB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCellArgB_13, (MR_Integer) 0)));
        MR_Word CellArgPrime_76;

        if ((ShiftCellArgA_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((CellArgB_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            CellArgPrime_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            succeeded = MR_TRUE;
          }
          else
          if (((MR_tag((MR_Word) CellArgB_29)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word Rval_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgB_29, (MR_Integer) 0)));
            MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgB_29, (MR_Integer) 1)));

            {
              CellArgPrime_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CellArgPrime_76, 0) = ((MR_Box) (Rval_95));
              MR_hl_field(MR_mktag(1), CellArgPrime_76, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        else
        if (((MR_tag((MR_Word) ShiftCellArgA_21)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShiftCellArgA_21, (MR_Integer) 1)));
          MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShiftCellArgA_21, (MR_Integer) 0)));

          if ((CellArgB_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              CellArgPrime_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CellArgPrime_76, 0) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(1), CellArgPrime_76, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            succeeded = MR_TRUE;
          }
          else
          if (((MR_tag((MR_Word) CellArgB_29)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word RvalB_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgB_29, (MR_Integer) 0)));
            MR_Word CompletenessB_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgB_29, (MR_Integer) 1)));
            MR_Word Expr_86;
            MR_Word Completeness_87;

            {
              Expr_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Expr_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), Expr_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
              MR_hl_field(MR_mktag(3), Expr_86, 2) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(3), Expr_86, 3) = ((MR_Box) (RvalB_84));
            }
            switch (Var_96) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (CompletenessB_85) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Completeness_87 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Completeness_87 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (CompletenessB_85) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Completeness_87 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Completeness_87 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            {
              CellArgPrime_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CellArgPrime_76, 0) = ((MR_Box) (Expr_86));
              MR_hl_field(MR_mktag(1), CellArgPrime_76, 1) = ((MR_Box) (Completeness_87));
            }
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
          *FinalCellArg_14 = CellArgPrime_76;
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.unify_gen.bitwise_or_cell_arg\'/2", (MR_String) "invalid combination");
            return;
          }
        }
      }
    }
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
    MR_Integer ConstNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0)));
    MR_Word ConstStruct_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1)));
    MR_Word ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 0)));
    MR_Word ConstArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 1)));
    MR_Word ConsTag_20;
    MR_Word ConsArgsWidths_21;
    MR_Word Rval_22;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 3)));

    ConsTag_20 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_9, ConsId_16);
    ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ModuleInfo_9, ConsId_16, ConstArgs_17, &ConsArgsWidths_21);
    ll_backend__unify_gen__generate_const_struct_rval_9_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_23, ConsTag_20, ConsArgsWidths_21, &Rval_22, STATE_VARIABLE_StaticCellInfo_0_25, STATE_VARIABLE_StaticCellInfo_26);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstNum_12, ((MR_Box) (Rval_22)), STATE_VARIABLE_ConstStructMap_0_23, STATE_VARIABLE_ConstStructMap_24);
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_rval_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word UnboxedFloats_11,
  MR_Word UnboxedInt64s_12,
  MR_Word ConstStructMap_13,
  MR_Word ConsTag_14,
  MR_Word ConstArgsWidths_15,
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
            MR_Word ArgTypedRvals_107;
            MR_Word ConsArgWidths_108;
            MR_Word AllTypedRvals_110;
            MR_Word DataAddr_111;
            MR_Word CellPtrConst_113;
            MR_Word Var_114;
            MR_Word Rval_117;

            ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsWidths_15, &ArgTypedRvals_107);
            mercury__assoc_list__values_2_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ConstArgsWidths_15, &ConsArgWidths_108);
            ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_108, ArgTypedRvals_107, &AllTypedRvals_110);
            ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_110, &DataAddr_111, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (DataAddr_111));
              MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              CellPtrConst_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellPtrConst_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), CellPtrConst_113, 1) = ((MR_Box) (Var_114));
            }
            {
              Rval_117 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_117, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Rval_117, 1) = ((MR_Box) (CellPtrConst_113));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypedRval_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_117));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            if ((ConstArgsWidths_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgsWidths_15, (MR_Integer) 1)));
              MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgsWidths_15, (MR_Integer) 0)));

              if ((Var_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, Var_136, TypedRval_16);
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
            MR_Word ArgTypedRvals_120;
            MR_Word ConsArgWidths_121;
            MR_Word AllTypedRvals_123;
            MR_Word DataAddr_124;
            MR_Word CellPtrConst_126;
            MR_Word Var_127;
            MR_Integer Ptag_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1)));
            MR_Word Rval_130;

            ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsWidths_15, &ArgTypedRvals_120);
            mercury__assoc_list__values_2_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ConstArgsWidths_15, &ConsArgWidths_121);
            ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_121, ArgTypedRvals_120, &AllTypedRvals_123);
            ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_123, &DataAddr_124, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (DataAddr_124));
              MR_hl_field(MR_mktag(3), Var_127, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              CellPtrConst_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellPtrConst_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), CellPtrConst_126, 1) = ((MR_Box) (Var_127));
            }
            {
              Rval_130 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_130, 0) = ((MR_Box) (Ptag_129));
              MR_hl_field(MR_mktag(2), Rval_130, 1) = ((MR_Box) (CellPtrConst_126));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypedRval_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_130));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer Ptag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1)));

            if ((ConstArgsWidths_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/9", (MR_String) "direct_arg_tag: arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgsWidths_15, (MR_Integer) 1)));
              MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgsWidths_15, (MR_Integer) 0)));

              if ((Var_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRval_24;
                MR_Word Rval_26;
                MR_Word ArgTypedRval_88;
                MR_Word _RvalType_25;

                ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, Var_134, &ArgTypedRval_88);
                ArgRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypedRval_88, (MR_Integer) 0)));
                _RvalType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypedRval_88, (MR_Integer) 1)));
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
            MR_Word ArgTypedRvals_31;
            MR_Word ConsArgWidths_32;
            MR_Word PackArgTypedRvals_33;
            MR_Word AllTypedRvals_35;
            MR_Integer Stag_36;
            MR_Word StagTypedRval_37;
            MR_Word DataAddr_38;
            MR_Word CellPtrConst_40;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_76;
            MR_Integer Ptag_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1)));
            MR_Word Rval_96;
            MR_Integer _Stag_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 2)));
            MR_Integer _Ptag_93;

            ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_10, UnboxedFloats_11, UnboxedInt64s_12, ConstStructMap_13, ConstArgsWidths_15, &ArgTypedRvals_31);
            mercury__assoc_list__values_2_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ConstArgsWidths_15, &ConsArgWidths_32);
            ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_32, ArgTypedRvals_31, &PackArgTypedRvals_33);
            _Ptag_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 1)));
            Stag_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_14, (MR_Integer) 2)));
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Stag_36));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
            }
            {
              StagTypedRval_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StagTypedRval_37, 0) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), StagTypedRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_6[3])));
            }
            {
              AllTypedRvals_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), AllTypedRvals_35, 0) = ((MR_Box) (StagTypedRval_37));
              MR_hl_field(MR_mktag(1), AllTypedRvals_35, 1) = ((MR_Box) (PackArgTypedRvals_33));
            }
            ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_35, &DataAddr_38, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
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
    MR_Word ConstArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 0)));
    MR_Word ArgWidth_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__5_5, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) ConstArg_11)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer ConstNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConstArg_11, (MR_Integer) 0)));
      MR_Box conv0_TypedRval_13;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_10, ConstNum_14, &conv0_TypedRval_13);
      *TypedRval_13 = ((MR_Word) conv0_TypedRval_13);
    }
    else
    {
      MR_Word ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_11, (MR_Integer) 0)));
      MR_Word ConsTag_17;
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_11, (MR_Integer) 1)));

      ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_7, ConsId_15);
      ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_8, UnboxedInt64s_9, ConsTag_17, ArgWidth_12, TypedRval_13);
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
  if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word ConstArgWidth_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
    MR_Word ConstArgsWidths_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
    MR_Word TypedRval_17;
    MR_Word TypedRvals_18;
    MR_Word ConstArg_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstArgWidth_15, (MR_Integer) 0)));
    MR_Word ArgWidth_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstArgWidth_15, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) ConstArg_24)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer ConstNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConstArg_24, (MR_Integer) 0)));
      MR_Box conv0_TypedRval_17;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_4, ConstNum_26, &conv0_TypedRval_17);
      TypedRval_17 = ((MR_Word) conv0_TypedRval_17);
    }
    else
    {
      MR_Word ConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_24, (MR_Integer) 0)));
      MR_Word ConsTag_29;
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_24, (MR_Integer) 1)));

      ConsTag_29 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_1, ConsId_27);
      ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_2, UnboxedInt64s_3, ConsTag_29, ArgWidth_25, &TypedRval_17);
    }
    ll_backend__unify_gen__generate_const_struct_args_6_p_0(ModuleInfo_1, UnboxedFloats_2, UnboxedInt64s_3, ConstStructMap_4, ConstArgsWidths_16, &TypedRvals_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypedRval_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypedRvals_18));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1519__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(
  MR_Word UnboxedFloats_6,
  MR_Word UnboxedInt64s_7,
  MR_Word ConsTag_8,
  MR_Word ArgWidth_9,
  MR_Word * TypedRval_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/5", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_8, (MR_Integer) 0)));
          MR_Word Const_85;
          MR_Word Var_87;

          {
            Const_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_85, 1) = ((MR_Box) (String_11));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Const_85));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Const_12;
          MR_Word Type_13;
          MR_Float Float_18 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_8, (MR_Integer) 0)));
          MR_Word Var_71;

          {
            Const_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_12, 1) = MR_box_float(Float_18);
          }
          switch (UnboxedFloats_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                succeeded = (ArgWidth_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                if (succeeded)
                  Type_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                else
                  Type_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              }
              break;
            case (MR_Integer) 0:
              Type_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Const_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_13));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1)));
              MR_Word IntType_15;
              MR_Word Const_82;
              MR_Word Type_83;
              MR_Word Var_84;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_14, &Const_82, &IntType_15);
              switch (IntType_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 4:
                case (MR_Integer) 6:
                case (MR_Integer) 2:
                  {
                    Type_83 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_6[3]);
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  switch (UnboxedInt64s_7) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Type_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                      break;
                    case (MR_Integer) 0:
                      {
                        Type_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Type_83, 0) = ((MR_Box) (IntType_15));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 3:
                  {
                    Type_83 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_6[4]);
                  }
                  break;
              }
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (Const_82));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_83));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1)));
              MR_String Val_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2)));
              MR_Word Var_62;
              MR_Word Const_79;
              MR_Word Type_80;
              MR_Word Var_81;

              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[4]));
                MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Lang_16));
                MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/5", (MR_String) "foreign_tag for language other than C");
              Type_80 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_6[3]);
              {
                Const_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_79, 1) = ((MR_Box) (Val_17));
                MR_hl_field(MR_mktag(3), Const_79, 2) = ((MR_Box) (Type_80));
              }
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Const_79));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_81));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_80));
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
              MR_Word ModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1)));
              MR_String TypeName_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2)));
              MR_Integer TypeArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 3)));
              MR_Word RttiTypeCtor_25;
              MR_Word DataId_26;
              MR_Word Var_53;
              MR_Word Var_55;
              MR_Word Rval_73;

              {
                RttiTypeCtor_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_25, 0) = ((MR_Box) (ModuleName_22));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_25, 1) = ((MR_Box) (TypeName_23));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_25, 2) = ((MR_Box) (TypeArity_24));
              }
              {
                Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (RttiTypeCtor_25));
                MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              {
                DataId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_26, 0) = ((MR_Box) (Var_53));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (DataId_26));
                MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Rval_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_73, 1) = ((MR_Box) (Var_55));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_73));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2)));
              MR_String Instance_28 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 3)));
              MR_Word TCName_29;
              MR_Word Var_49;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Rval_75;
              MR_Word ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1)));
              MR_Word DataId_77;

              TCName_29 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_27);
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ModuleName_76));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Instance_28));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (TCName_29));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
              }
              {
                DataId_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_77, 0) = ((MR_Box) (Var_49));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (DataId_77));
                MR_hl_field(MR_mktag(3), Var_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Rval_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_75, 1) = ((MR_Box) (Var_51));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_75));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1)));
              MR_Integer Stag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 2)));
              MR_Word Rval_21;
              MR_Word Var_57;
              MR_Word Var_59;
              MR_Word Var_60;

              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Stag_20));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_57, 2) = ((MR_Box) (Var_59));
              }
              {
                Rval_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_21, 0) = ((MR_Box) (Ptag_19));
                MR_hl_field(MR_mktag(2), Rval_21, 1) = ((MR_Box) (Var_57));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_21));
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
  MR_Word STATE_VARIABLE_RevFieldAddrs_0_16,
  MR_Word * STATE_VARIABLE_RevFieldAddrs_17)
{
  switch (MR_tag((MR_Word) CellArg_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *NextOffset_8 = (ArgOffset_7 + (MR_Integer) 1);
        *STATE_VARIABLE_RevFieldAddrs_17 = STATE_VARIABLE_RevFieldAddrs_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        *NextOffset_8 = (ArgOffset_7 + (MR_Integer) 1);
        *STATE_VARIABLE_RevFieldAddrs_17 = STATE_VARIABLE_RevFieldAddrs_0_16;
      }
      break;
    case (MR_Integer) 2:
      {
        *NextOffset_8 = (ArgOffset_7 + (MR_Integer) 2);
        *STATE_VARIABLE_RevFieldAddrs_17 = STATE_VARIABLE_RevFieldAddrs_0_16;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 0)));
        MR_Word FieldAddr_15;
        MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), CellArg_6, (MR_Integer) 1)));

        *NextOffset_8 = (ArgOffset_7 + (MR_Integer) 1);
        {
          FieldAddr_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldAddr_15, 0) = ((MR_Box) (ArgOffset_7));
          MR_hl_field(MR_mktag(0), FieldAddr_15, 1) = ((MR_Box) (Var_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevFieldAddrs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAddr_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevFieldAddrs_0_16));
        }
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

    ll_backend__unify_gen__generate_const_struct_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_ConstStructMap_24, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_StaticCellInfo_26);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 256, &OptUnboxedFloats_9);
    switch (OptUnboxedFloats_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedFloats_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedFloats_10 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 257, &OptUnboxedInt64s_11);
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
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_structs_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (UnboxedFloats_10));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (UnboxedInt64s_12));
    }
    Var_22 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0);
    mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[0], (MR_Word) &ll_backend__unify_gen_scalar_common_2[1], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, Var_21, ConstStructs_14, ((MR_Box) (Var_22)), &conv3_ConstStructMap_6, ((MR_Box) (StaticCellInfo0_15)), &conv2_StaticCellInfo_16);
    *ConstStructMap_6 = ((MR_Word) conv3_ConstStructMap_6);
    StaticCellInfo_16 = ((MR_Word) conv2_StaticCellInfo_16);
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
    MR_Word GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0)));
    MR_Word GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1)));
    MR_Word NonLocals_13;
    MR_Word NonLocalList_14;

    NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_12);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_13, &NonLocalList_14);
    if ((NonLocalList_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_CI_32 = STATE_VARIABLE_CI_0_31;
      *STATE_VARIABLE_CLD_34 = STATE_VARIABLE_CLD_0_33;
    }
    else
    {
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonLocalList_14, (MR_Integer) 1)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonLocalList_14, (MR_Integer) 0)));

      if ((Var_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ((MR_Box) (Var_56)), ((MR_Box) (TermVar_7)));
        if (succeeded)
        {
          MR_Word Conjuncts_16;
          MR_Word Var_39;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1)));
            Conjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2)));
            succeeded = (Var_39 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_52_52;
            MR_Word TypeCtorInfo_53_53;
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
            TypeInfo_52_52 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
            TypeCtorInfo_53_53 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
            mercury__map__init_1_p_0(TypeInfo_52_52, TypeCtorInfo_53_53, &ActiveMap0_21);
            ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(ModuleInfo_17, Conjuncts_16, UnboxedFloats_19, StaticCellInfo0_20, &StaticCellInfo_22, ActiveMap0_21, &ActiveMap_23);
            mercury__map__to_assoc_list_2_p_0(TypeInfo_52_52, TypeCtorInfo_53_53, ActiveMap_23, &ActivePairs_24);
            succeeded = ((MR_tag((MR_Word) ActivePairs_24)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ActivePairs_24, (MR_Integer) 0)));
              Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ActivePairs_24, (MR_Integer) 1)));
              Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0)));
              GroundTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1)));
              TypeInfo_58_58 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (TermVar_7)), ((MR_Box) (Var_54)));
              if (succeeded)
                succeeded = (Var_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Rval_26;
              MR_Word STATE_VARIABLE_CLD_42_42;
              MR_Word Var_27;

              ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(NonLocals_13, STATE_VARIABLE_CLD_0_33, &STATE_VARIABLE_CLD_42_42);
              ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_22, STATE_VARIABLE_CI_0_31, STATE_VARIABLE_CI_32);
              Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_25, (MR_Integer) 0)));
              Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_25, (MR_Integer) 1)));
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
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ActiveMap_7 = STATE_VARIABLE_ActiveMap_0_6;
      *STATE_VARIABLE_StaticCellInfo_5 = STATE_VARIABLE_StaticCellInfo_0_4;
    }
    else
    {
      MR_Word Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_StaticCellInfo_26_26;
      MR_Word STATE_VARIABLE_ActiveMap_27_27;
      MR_Word GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 0)));
      MR_Word _GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_17, (MR_Integer) 1)));
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
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 0)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 1)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 2)));
        Unify_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 3)));
        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_39, (MR_Integer) 4)));
        succeeded = ((MR_tag((MR_Word) Unify_44)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 0)));
          ConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 1)));
          ArgVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 2)));
          Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 3)));
          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 4)));
          Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 5)));
          SubInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 6)));
          succeeded = (SubInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Word ConsTag_53;
        MR_Word ArgVarsWidths_54;

        ConsTag_53 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(HeadVar__1_1, ConsId_47);
        ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], HeadVar__1_1, ConsId_47, ArgVars_48, &ArgVarsWidths_54);
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__1688__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_8_p_0(
  MR_Word Var_9,
  MR_Word ConsTag_10,
  MR_Word ArgVarsWidths_11,
  MR_Word UnboxedFloats_12,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_65,
  MR_Word * STATE_VARIABLE_StaticCellInfo_66,
  MR_Word STATE_VARIABLE_ActiveMap_0_67,
  MR_Word * STATE_VARIABLE_ActiveMap_68)
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
              MR_Word TypeInfo_153_153;
              MR_Word ArgTypedRvals_33;
              MR_Word ConsArgWidths_34;
              MR_Word PackArgTypedRvals_35;
              MR_Word DataAddr_36;
              MR_Word CellPtrConst_38;
              MR_Word STATE_VARIABLE_ActiveMap_89_89;
              MR_Word Var_91;
              MR_Word ActiveGroundTerm_119;
              MR_Word Rval_121;

              ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &ArgTypedRvals_33, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_89_89);
              TypeInfo_153_153 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
              mercury__assoc_list__values_2_p_0(TypeInfo_153_153, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ArgVarsWidths_11, &ConsArgWidths_34);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_34, ArgTypedRvals_33, &PackArgTypedRvals_35);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_35, &DataAddr_36, STATE_VARIABLE_StaticCellInfo_0_65, STATE_VARIABLE_StaticCellInfo_66);
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (DataAddr_36));
                MR_hl_field(MR_mktag(3), Var_91, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_38, 1) = ((MR_Box) (Var_91));
              }
              {
                Rval_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_121, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Rval_121, 1) = ((MR_Box) (CellPtrConst_38));
              }
              {
                ActiveGroundTerm_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_119, 0) = ((MR_Box) (Rval_121));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0(TypeInfo_153_153, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_119)), STATE_VARIABLE_ActiveMap_89_89, STATE_VARIABLE_ActiveMap_68);
            }
            break;
          case (MR_Integer) 1:
            {
              if ((ArgVarsWidths_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1)));
                MR_Word Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0)));

                if ((Var_200 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word TypeInfo_151_151 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                  MR_Word TypeCtorInfo_152_152 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                  MR_Word ArgVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_201, (MR_Integer) 0)));
                  MR_Word RvalType_29;
                  MR_Word STATE_VARIABLE_ActiveMap_99_99;
                  MR_Word _ArgWidth_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_201, (MR_Integer) 1)));
                  MR_Box conv1_RvalType_29;

                  mercury__map__det_remove_4_p_0(TypeInfo_151_151, TypeCtorInfo_152_152, ((MR_Box) (ArgVar_27)), &conv1_RvalType_29, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_99_99);
                  RvalType_29 = ((MR_Word) conv1_RvalType_29);
                  mercury__map__det_insert_4_p_0(TypeInfo_151_151, TypeCtorInfo_152_152, ((MR_Box) (Var_9)), ((MR_Box) (RvalType_29)), STATE_VARIABLE_ActiveMap_99_99, STATE_VARIABLE_ActiveMap_68);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "no_tag arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_10, (MR_Integer) 0)));
          MR_Word Const_177;
          MR_Word ActiveGroundTerm_179;
          MR_Word Var_180;

          {
            Const_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_177, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_177, 1) = ((MR_Box) (String_15));
          }
          {
            Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (Const_177));
          }
          {
            ActiveGroundTerm_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_179, 0) = ((MR_Box) (Var_180));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_179)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
          *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Const_16;
          MR_Word Type_17;
          MR_Float Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_10, (MR_Integer) 0)));
          MR_Word ActiveGroundTerm_23;
          MR_Word Var_116;

          {
            Const_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_16, 1) = MR_box_float(Float_22);
          }
          switch (UnboxedFloats_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Type_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              break;
            case (MR_Integer) 0:
              Type_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Const_16));
          }
          {
            ActiveGroundTerm_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_23, 0) = ((MR_Box) (Var_116));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_23, 1) = ((MR_Box) (Type_17));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_23)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
          *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1)));
              MR_Word IntType_19;
              MR_Word Const_171;
              MR_Word Type_172;
              MR_Word ActiveGroundTerm_173;
              MR_Word Var_174;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_18, &Const_171, &IntType_19);
              {
                Type_172 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Type_172, 0) = ((MR_Box) (IntType_19));
              }
              {
                Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (Const_171));
              }
              {
                ActiveGroundTerm_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_173, 0) = ((MR_Box) (Var_174));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_173, 1) = ((MR_Box) (Type_172));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_173)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
              *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1)));
              MR_String Val_21 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2)));
              MR_Word Var_109;
              MR_Word Const_165;
              MR_Word Type_166;
              MR_Word ActiveGroundTerm_167;
              MR_Word Var_168;

              {
                Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[4]));
                MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (ll_backend__unify_gen__generate_ground_term_conjunct_tag_8_p_0_1));
                MR_hl_field(MR_mktag(0), Var_109, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_109, 3) = ((MR_Box) (Lang_20));
                MR_hl_field(MR_mktag(0), Var_109, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_109, (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "foreign_tag for language other than C");
              Type_166 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_6[3]);
              {
                Const_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_165, 1) = ((MR_Box) (Val_21));
                MR_hl_field(MR_mktag(3), Const_165, 2) = ((MR_Box) (Type_166));
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
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_167)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
              *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
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
              MR_Word TypeInfo_153_195;
              MR_Word ArgTypedRvals_183;
              MR_Word ConsArgWidths_184;
              MR_Word PackArgTypedRvals_185;
              MR_Word DataAddr_186;
              MR_Word CellPtrConst_188;
              MR_Word STATE_VARIABLE_ActiveMap_89_189;
              MR_Word Var_190;
              MR_Word ActiveGroundTerm_192;
              MR_Integer Ptag_193 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1)));
              MR_Word Rval_194;

              ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &ArgTypedRvals_183, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_89_189);
              TypeInfo_153_195 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
              mercury__assoc_list__values_2_p_0(TypeInfo_153_195, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ArgVarsWidths_11, &ConsArgWidths_184);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_184, ArgTypedRvals_183, &PackArgTypedRvals_185);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_185, &DataAddr_186, STATE_VARIABLE_StaticCellInfo_0_65, STATE_VARIABLE_StaticCellInfo_66);
              {
                Var_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_190, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_190, 1) = ((MR_Box) (DataAddr_186));
                MR_hl_field(MR_mktag(3), Var_190, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_188, 1) = ((MR_Box) (Var_190));
              }
              {
                Rval_194 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_194, 0) = ((MR_Box) (Ptag_193));
                MR_hl_field(MR_mktag(2), Rval_194, 1) = ((MR_Box) (CellPtrConst_188));
              }
              {
                ActiveGroundTerm_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_192, 0) = ((MR_Box) (Rval_194));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0(TypeInfo_153_195, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_192)), STATE_VARIABLE_ActiveMap_89_189, STATE_VARIABLE_ActiveMap_68);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1)));

              if ((ArgVarsWidths_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1)));
                MR_Word Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0)));

                if ((Var_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word TypeInfo_156_156 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                  MR_Word TypeCtorInfo_157_157 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                  MR_Word ArgRval_39;
                  MR_Word Var_85;
                  MR_Word STATE_VARIABLE_ActiveMap_86_86;
                  MR_Word ActiveGroundTerm_123;
                  MR_Word Rval_124;
                  MR_Word ArgVar_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_199, (MR_Integer) 0)));
                  MR_Word _ArgWidth_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_199, (MR_Integer) 1)));
                  MR_Box conv0_Var_85;
                  MR_Word _RvalType_40;

                  mercury__map__det_remove_4_p_0(TypeInfo_156_156, TypeCtorInfo_157_157, ((MR_Box) (ArgVar_125)), &conv0_Var_85, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_86_86);
                  Var_85 = ((MR_Word) conv0_Var_85);
                  ArgRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0)));
                  _RvalType_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 1)));
                  {
                    Rval_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Rval_124, 0) = ((MR_Box) (Ptag_132));
                    MR_hl_field(MR_mktag(2), Rval_124, 1) = ((MR_Box) (ArgRval_39));
                  }
                  {
                    ActiveGroundTerm_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_123, 0) = ((MR_Box) (Rval_124));
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  }
                  mercury__map__det_insert_4_p_0(TypeInfo_156_156, TypeCtorInfo_157_157, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_123)), STATE_VARIABLE_ActiveMap_86_86, STATE_VARIABLE_ActiveMap_68);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/8", (MR_String) "direct_arg_tag: arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word TypeInfo_158_158;
              MR_Word StagTypedRval_44;
              MR_Word AllTypedRvals_45;
              MR_Word STATE_VARIABLE_ActiveMap_71_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_77;
              MR_Word ActiveGroundTerm_136;
              MR_Integer Ptag_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1)));
              MR_Integer Stag_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2)));
              MR_Word Rval_139;
              MR_Word ArgTypedRvals_140;
              MR_Word ConsArgWidths_141;
              MR_Word PackArgTypedRvals_142;
              MR_Word DataAddr_143;
              MR_Word CellPtrConst_145;

              ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_11, &ArgTypedRvals_140, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_71_71);
              TypeInfo_158_158 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
              mercury__assoc_list__values_2_p_0(TypeInfo_158_158, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ArgVarsWidths_11, &ConsArgWidths_141);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_141, ArgTypedRvals_140, &PackArgTypedRvals_142);
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Stag_138));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
              }
              {
                StagTypedRval_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagTypedRval_44, 0) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(0), StagTypedRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_6[3])));
              }
              {
                AllTypedRvals_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllTypedRvals_45, 0) = ((MR_Box) (StagTypedRval_44));
                MR_hl_field(MR_mktag(1), AllTypedRvals_45, 1) = ((MR_Box) (PackArgTypedRvals_142));
              }
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_45, &DataAddr_143, STATE_VARIABLE_StaticCellInfo_0_65, STATE_VARIABLE_StaticCellInfo_66);
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (DataAddr_143));
                MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_145, 1) = ((MR_Box) (Var_77));
              }
              {
                Rval_139 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_139, 0) = ((MR_Box) (Ptag_137));
                MR_hl_field(MR_mktag(2), Rval_139, 1) = ((MR_Box) (CellPtrConst_145));
              }
              {
                ActiveGroundTerm_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_136, 0) = ((MR_Box) (Rval_139));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0(TypeInfo_158_158, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_136)), STATE_VARIABLE_ActiveMap_71_71, STATE_VARIABLE_ActiveMap_68);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 1)));
              MR_Integer Stag_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_10, (MR_Integer) 2)));
              MR_Word Rval_26;
              MR_Word Var_103;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word ActiveGroundTerm_118;

              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Stag_25));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (Var_106));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_103, 2) = ((MR_Box) (Var_105));
              }
              {
                Rval_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_26, 0) = ((MR_Box) (Ptag_24));
                MR_hl_field(MR_mktag(2), Rval_26, 1) = ((MR_Box) (Var_103));
              }
              {
                ActiveGroundTerm_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_118, 0) = ((MR_Box) (Rval_26));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_9)), ((MR_Box) (ActiveGroundTerm_118)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
              *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_FinalArg_12;

    ll_backend__unify_gen__shift_combine_rval_type_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_FinalArg_12);
    *wrapper_arg_4 = ((MR_Box) (conv0_FinalArg_12));
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0(
  MR_Word Widths_4,
  MR_Word STATE_VARIABLE_TypedRvals_0_8,
  MR_Word * STATE_VARIABLE_TypedRvals_9)
{
  {
    MR_Word TypeCtorInfo_23_23;
    MR_Box conv2_Var_6;
    MR_Box conv1_Var_7;

    TypeCtorInfo_23_23 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, TypeCtorInfo_23_23, TypeCtorInfo_23_23, (MR_Word) &ll_backend__unify_gen_scalar_common_2[8], Widths_4, STATE_VARIABLE_TypedRvals_0_8, STATE_VARIABLE_TypedRvals_9, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_6, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_7);
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ActiveMap_4 = STATE_VARIABLE_ActiveMap_0_3;
    }
    else
    {
      MR_Word ArgVarWidth_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgVarsWidths_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word TypedRval_10;
      MR_Word TypedRvals_11;
      MR_Word STATE_VARIABLE_ActiveMap_15_15;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarWidth_8, (MR_Integer) 0)));
      MR_Word ConsArgWidth_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgVarWidth_8, (MR_Integer) 1)));
      MR_Word TypedRval0_23;
      MR_Box conv0_TypedRval0_23;
      MR_Word Rval_24;
      MR_Word Var_26;

      mercury__map__det_remove_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_20)), &conv0_TypedRval0_23, STATE_VARIABLE_ActiveMap_0_3, &STATE_VARIABLE_ActiveMap_15_15);
      TypedRval0_23 = ((MR_Word) conv0_TypedRval0_23);
      succeeded = (ConsArgWidth_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      if (succeeded)
      {
        Rval_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedRval0_23, (MR_Integer) 0)));
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedRval0_23, (MR_Integer) 1)));
        succeeded = (Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
      if (succeeded)
      {
        {
          TypedRval_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (Rval_24));
          MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        }
      }
      else
        TypedRval_10 = TypedRval0_23;
      ll_backend__unify_gen__generate_ground_term_args_4_p_0(ArgVarsWidths_9, &TypedRvals_11, STATE_VARIABLE_ActiveMap_15_15, STATE_VARIABLE_ActiveMap_4);
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

    ll_backend__unify_gen__raw_tag_test_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_TestRval_6);
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

    hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) wrapper_arg_1), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
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
  if ((OtherTaggedConsIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainTaggedConsId_15, (MR_Integer) 0)));
    MR_Word MainConsTag_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), MainTaggedConsId_15, (MR_Integer) 1)));
    MR_Word Var_44;

    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MainConsTag_23));
    }
    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(VarRval_12, VarName_14, MainConsId_22, Var_44, CheaperTagTest_17, Sense_18, ElseLabel_19, Code_20, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
  }
  else
  {
    MR_Word TypeCtorInfo_52_52;
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
    TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
    mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_52_52, (MR_Word) &ll_backend__unify_gen_scalar_common_2[7], OtherTaggedConsIds_16, &OtherConsNames_27, &OtherConsTags_28);
    Var_38 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(VarName_14, MainConsName_26, OtherConsNames_27);
    ll_backend__unify_gen__raw_tag_test_3_p_0(VarRval_12, MainConsTag_46, &MainTagTestRval_30);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (VarRval_12));
    }
    mercury__list__map_3_p_0(TypeCtorInfo_52_52, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, Var_39, OtherConsTags_28, &OtherTagTestRvals_31);
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
    *Code_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_41)));
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
      ExpensiveConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 0)));
      _ExpensiveConsTag_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 1)));
      _CheapConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 2)));
      CheapConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_17, (MR_Integer) 3)));
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
      if ((MaybeConsTag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ModuleInfo_31;

        ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_33, &ModuleInfo_31);
        ConsTag_30 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_31, ConsId_15);
      }
      else
        ConsTag_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeConsTag_16, (MR_Integer) 0)));
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
    *Code_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_46)));
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
    if ((OtherTestRvals_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *TestRval_6 = CurTestRval_4;
    else
    {
      MR_Word HeadTestRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherTestRvals_5, (MR_Integer) 0)));
      MR_Word TailTestRvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherTestRvals_5, (MR_Integer) 1)));
      MR_Word NextTestRval_9;
      MR_Word next_value_of_CurTestRval_4;
      MR_Word next_value_of_OtherTestRvals_5;

      {
        NextTestRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), NextTestRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
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

    ll_backend__code_loc_dep__release_reg_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_3);
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

    switch (CodeModel_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "nondet unification");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    switch (MR_tag((MR_Word) Uni_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 1)));
          MR_Word RHSVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 2)));
          MR_Word ArgModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 3)));
          MR_Word HowToConstruct_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 4)));
          MR_Word SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 6)));
          MR_Word MaybeTakeAddr_23;
          MR_Word MaybeSize_24;
          MR_Word LHSVar_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 0)));
          MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 5)));

          if ((SubInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MaybeTakeAddr_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            MaybeSize_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MaybeTakeAddr_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_22, (MR_Integer) 0)));
            MaybeSize_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_22, (MR_Integer) 1)));
          }
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_45, LHSVar_73);
          if (!(succeeded))
          {
            MR_Word Var_25;

            succeeded = ((MR_tag((MR_Word) MaybeTakeAddr_23)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTakeAddr_23, (MR_Integer) 0)));
          }
          if (succeeded)
          {
            MR_Word TakeAddr_26;
            MR_Word ModuleInfo_27;
            MR_Word RHSVarsWidths_28;

            if ((MaybeTakeAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              TakeAddr_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              TakeAddr_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTakeAddr_23, (MR_Integer) 0)));
            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_27);
            ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ModuleInfo_27, ConsId_17, RHSVars_18, &RHSVarsWidths_28);
            ll_backend__unify_gen__generate_construction_13_p_0(LHSVar_73, ConsId_17, RHSVarsWidths_28, ArgModes_19, HowToConstruct_20, TakeAddr_26, MaybeSize_24, GoalInfo_11, Code_12, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
          }
          else
          {
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_0_45;
            *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanCGC_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 5)));
          MR_Word Code0_31;
          MR_Word STATE_VARIABLE_CLD_57_57;
          MR_Word LHSVar_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 0)));
          MR_Word ConsId_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 1)));
          MR_Word RHSVars_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 2)));
          MR_Word ArgModes_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 3)));
          MR_Word ModuleInfo_78;
          MR_Word RHSVarsWidths_79;
          MR_Word _CanFail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 4)));

          ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_78);
          ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ModuleInfo_78, ConsId_75, RHSVars_76, &RHSVarsWidths_79);
          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__unify_gen__generate_det_deconstruction_8_p_0(LHSVar_74, ConsId_75, RHSVarsWidths_79, ArgModes_77, &Code0_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_57_57);
                *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
              }
              break;
            case (MR_Integer) 1:
              ll_backend__unify_gen__generate_semi_deconstruction_9_p_0(LHSVar_74, ConsId_75, RHSVarsWidths_79, ArgModes_77, &Code0_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_57_57);
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

                LHSVarName_32 = ll_backend__code_info__variable_name_2_f_0(*STATE_VARIABLE_CI_44, LHSVar_74);
                ll_backend__code_loc_dep__produce_variable_6_p_0(LHSVar_74, &ProduceVar_33, &VarRval_34, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_57_57, &STATE_VARIABLE_CLD_58_58);
                succeeded = ((MR_tag((MR_Word) VarRval_34)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  VarLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarRval_34, (MR_Integer) 0)));
                  {
                    MR_Word TypeCtorInfo_91_91;
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

                    ll_backend__code_loc_dep__save_reused_cell_fields_7_p_0(LHSVar_74, VarLval_35, &SaveArgs_36, &Regs_37, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_58_58, &STATE_VARIABLE_CLD_59_59);
                    mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[6], Regs_37, ((MR_Box) (STATE_VARIABLE_CLD_59_59)), &conv1_STATE_VARIABLE_CLD_46);
                    *STATE_VARIABLE_CLD_46 = ((MR_Word) conv1_STATE_VARIABLE_CLD_46);
                    TypeCtorInfo_91_91 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    {
                      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
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
                    FreeVar_38 = mercury__cord__singleton_1_f_0(TypeCtorInfo_91_91, ((MR_Box) (Var_62)));
                    Var_69 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_91_91, SaveArgs_36, FreeVar_38);
                    Var_68 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_91_91, ProduceVar_33, Var_69);
                    *Code_12 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_91_91, Code0_31, Var_68);
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
          MR_Word LHSVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Uni_10, (MR_Integer) 0)));
          MR_Word RHSVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Uni_10, (MR_Integer) 1)));

          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_45, LHSVar_15);
          if (succeeded)
            ll_backend__unify_gen__generate_assignment_5_p_0(LHSVar_15, RHSVar_16, Code_12, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
          else
          {
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
              MR_Word VarA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uni_10, (MR_Integer) 1)));
              MR_Word VarB_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uni_10, (MR_Integer) 2)));

              switch (CodeModel_9) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "det simple_test");
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
    MR_Word TypeCtorInfo_40_40;
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
    TypeCtorInfo_40_40 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
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
    SuccessLabelCode_24 = mercury__cord__singleton_1_f_0(TypeCtorInfo_40_40, ((MR_Box) (Var_35)));
    Var_39 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_40_40, SuccessLabelCode_24, DeconsCode_23);
    Var_38 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_40_40, FailCode_22, Var_39);
    *Code_14 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_40_40, TagTestCode_20, Var_38);
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
      ExpensiveConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 0)));
      _ExpensiveConsTag_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 1)));
      _CheapConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 2)));
      CheapConsTag_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), CheaperTagTest_13, (MR_Integer) 3)));
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
    TestCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_66)));
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, VarCode_19, TestCode_23);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__448__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
              *TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13]);
            }
            break;
          case (MR_Integer) 1:
            {
              *TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_5, (MR_Integer) 0)));
          MR_Word Var_105;
          MR_Word Var_106;

          {
            Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (String_7));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (Var_106));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_105));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_5, (MR_Integer) 0)));
          MR_Word Var_102;
          MR_Word Var_103;

          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_103, 1) = MR_box_float(Float_8);
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Var_103));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_102));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word Const_10;
              MR_Word IntType_11;
              MR_Word Var_99;
              MR_Word Var_100;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_9, &Const_10, &IntType_11);
              {
                Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (IntType_11));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (Const_10));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_99));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_100));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_String ForeignVal_13 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Word Var_89;
              MR_Word Var_95;
              MR_Word Var_96;

              {
                Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[4]));
                MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_89, 3) = ((MR_Box) (ForeignLang_12));
                MR_hl_field(MR_mktag(0), Var_89, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_89, (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "foreign tag for language other than C");
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (ForeignVal_13));
                MR_hl_field(MR_mktag(3), Var_96, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_6[3])));
              }
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (Var_96));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_95));
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
              MR_Integer UnsharedTag_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word VarPtag_114;
              MR_Word ConstPtag_115;
              MR_Word Var_118;
              MR_Word Var_119;

              {
                VarPtag_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), VarPtag_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_114, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (UnsharedTag_113));
              }
              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) (Var_119));
              }
              {
                ConstPtag_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstPtag_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_115, 2) = ((MR_Box) (Var_118));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_114));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPtag_115));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer UnsharedTag_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word VarPtag_34;
              MR_Word ConstPtag_35;
              MR_Word Var_65;
              MR_Word Var_66;

              {
                VarPtag_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), VarPtag_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_34, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (UnsharedTag_33));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
              }
              {
                ConstPtag_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 2) = ((MR_Box) (Var_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_34));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPtag_35));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Bits_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Integer Num_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Word PtagTestRval_38;
              MR_Word VarStag_39;
              MR_Word ConstStag_40;
              MR_Word StagTestRval_41;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_59;
              MR_Word VarPtag_107;
              MR_Word ConstPtag_108;

              {
                VarPtag_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), VarPtag_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_107, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Bits_36));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Var_51));
              }
              {
                ConstPtag_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstPtag_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_108, 2) = ((MR_Box) (Var_50));
              }
              Var_52 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6]);
              {
                PtagTestRval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagTestRval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), PtagTestRval_38, 1) = ((MR_Box) (Var_52));
                MR_hl_field(MR_mktag(3), PtagTestRval_38, 2) = ((MR_Box) (VarPtag_107));
                MR_hl_field(MR_mktag(3), PtagTestRval_38, 3) = ((MR_Box) (ConstPtag_108));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Bits_36));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(3), Var_54, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), Var_54, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
              }
              {
                VarStag_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), VarStag_39, 0) = ((MR_Box) (Var_54));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Num_37));
              }
              {
                ConstStag_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstStag_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstStag_40, 1) = ((MR_Box) (Var_59));
              }
              {
                StagTestRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), StagTestRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), StagTestRval_41, 1) = ((MR_Box) (Var_52));
                MR_hl_field(MR_mktag(3), StagTestRval_41, 2) = ((MR_Box) (VarStag_39));
                MR_hl_field(MR_mktag(3), StagTestRval_41, 3) = ((MR_Box) (ConstStag_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PtagTestRval_38));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (StagTestRval_41));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_42;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Integer Bits_109 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Integer Num_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Word ConstStag_111;

              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Num_110));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
              }
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (Var_44));
              }
              {
                ConstStag_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ConstStag_111, 0) = ((MR_Box) (Bits_109));
                MR_hl_field(MR_mktag(2), ConstStag_111, 1) = ((MR_Box) (Var_42));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstStag_111));
              }
            }
            break;
        }
        break;
    }
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
              MR_Word Rval_100;
              MR_Word ProcInfo_101;
              MR_Word VarTypes_102;
              MR_Word FieldsAndArgVars_103;

              {
                Rval_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_100, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_proc_info_2_p_0(CI_14, &ProcInfo_101);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_101, &VarTypes_102);
              ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(VarTypes_102, ArgVarsWidths_11, Rval_100, (MR_Integer) -1, (MR_Integer) 0, &FieldsAndArgVars_103);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_103, Modes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgVar_44;
              MR_Word Mode_46;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word _Width_45;

              succeeded = ((MR_tag((MR_Word) ArgVarsWidths_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0)));
                Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1)));
                succeeded = (Var_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  ArgVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0)));
                  _Width_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0)));
                    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1)));
                    succeeded = (Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                        ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ArgVar_44, (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]), CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
                      }
                      else
                        *STATE_VARIABLE_CLD_60 = STATE_VARIABLE_CLD_0_59;
                      *Code_13 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgType_49;
                      MR_Word FieldAndArgVar_50;
                      MR_Word Var_71;

                      ArgType_49 = ll_backend__code_info__variable_type_2_f_0(CI_14, ArgVar_44);
                      {
                        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_9));
                      }
                      {
                        FieldAndArgVar_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_50, 0) = ((MR_Box) (Var_71));
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
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
              MR_Integer Ptag_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
              MR_Word Rval_106;
              MR_Word ProcInfo_107;
              MR_Word VarTypes_108;
              MR_Word FieldsAndArgVars_109;

              {
                Rval_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_106, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_proc_info_2_p_0(CI_14, &ProcInfo_107);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_107, &VarTypes_108);
              ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(VarTypes_108, ArgVarsWidths_11, Rval_106, (MR_Integer) -1, Ptag_104, &FieldsAndArgVars_109);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_109, Modes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
              MR_Word ArgVar_89;
              MR_Word Mode_91;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word _Width_87;

              succeeded = ((MR_tag((MR_Word) ArgVarsWidths_11)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 0)));
                Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgVarsWidths_11, (MR_Integer) 1)));
                succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  ArgVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0)));
                  _Width_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Modes_12)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 0)));
                    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_12, (MR_Integer) 1)));
                    succeeded = (Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
              {
                MR_Word Type_58;

                Type_58 = ll_backend__code_info__variable_type_2_f_0(CI_14, ArgVar_89);
                ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(Var_9, ArgVar_89, Ptag_95, Mode_91, Type_58, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
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
              MR_Integer Ptag_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
              MR_Word Rval_54;
              MR_Word ProcInfo_55;
              MR_Word VarTypes_56;
              MR_Word FieldsAndArgVars_57;
              MR_Integer _Sectag1_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2)));

              {
                Rval_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_54, 0) = ((MR_Box) (Var_9));
              }
              ll_backend__code_info__get_proc_info_2_p_0(CI_14, &ProcInfo_55);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_55, &VarTypes_56);
              ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(VarTypes_56, ArgVarsWidths_11, Rval_54, (MR_Integer) 0, Ptag_51, &FieldsAndArgVars_57);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_57, Modes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_59, STATE_VARIABLE_CLD_60);
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
    LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_13, (MR_Integer) 0)));
    RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_13, (MR_Integer) 1)));
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
                  MR_hl_field(MR_mktag(3), BodyRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), BodyRval_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  MR_hl_field(MR_mktag(3), BodyRval_23, 2) = ((MR_Box) (Var_35));
                  MR_hl_field(MR_mktag(3), BodyRval_23, 3) = ((MR_Box) (Var_36));
                }
                ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ArgVar_11, BodyRval_23, Code_15, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
              }
              else
              {
                *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
                *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_unify_args\'/6", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Modes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word CodeA_36;
      MR_Word CodeB_37;
      MR_Word STATE_VARIABLE_CLD_40_40;

      ll_backend__unify_gen__generate_sub_unify_6_p_0(Var_45, Mode_31, &CodeA_36, HeadVar__4_4, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_40_40);
      ll_backend__unify_gen__generate_unify_args_6_p_0(Var_44, Modes_32, &CodeB_37, HeadVar__4_4, STATE_VARIABLE_CLD_40_40, STATE_VARIABLE_CLD_6);
      *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, CodeA_36, CodeB_37);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word Rval_3,
  MR_Integer PrevOffset0_4,
  MR_Integer Ptag_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word VarWidth_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word VarsWidths_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word FieldAndArgVar_17;
    MR_Word FieldsAndArgVars_18;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarWidth_12, (MR_Integer) 0)));
    MR_Word Width_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarWidth_12, (MR_Integer) 1)));
    MR_Integer Offset_22;
    MR_Integer PrevOffset_23;
    MR_Word Field_25;
    MR_Word Type_26;
    MR_Word Var_30;

    switch (MR_tag((MR_Word) Width_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Width_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Offset_22 = (PrevOffset0_4 + (MR_Integer) 1);
              PrevOffset_23 = Offset_22;
            }
            break;
          case (MR_Integer) 1:
            {
              Offset_22 = (PrevOffset0_4 + (MR_Integer) 1);
              PrevOffset_23 = (Offset_22 + (MR_Integer) 1);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          Offset_22 = (PrevOffset0_4 + (MR_Integer) 1);
          PrevOffset_23 = Offset_22;
        }
        break;
      case (MR_Integer) 2:
        {
          Offset_22 = PrevOffset0_4;
          PrevOffset_23 = Offset_22;
        }
        break;
    }
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Ptag_5));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Rval_3));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (Offset_22));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Width_20));
    }
    Field_25 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_30);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, Var_19, &Type_26);
    {
      FieldAndArgVar_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldAndArgVar_17, 0) = ((MR_Box) (Field_25));
      MR_hl_field(MR_mktag(0), FieldAndArgVar_17, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), FieldAndArgVar_17, 2) = ((MR_Box) (Type_26));
    }
    ll_backend__unify_gen__make_fields_and_arg_vars_6_p_0(VarTypes_1, VarsWidths_13, Rval_3, PrevOffset_23, Ptag_5, &FieldsAndArgVars_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAndArgVar_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldsAndArgVars_18));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__631__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__659__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__684__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__543__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__668__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__694__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__692__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__641__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
  MR_Word STATE_VARIABLE_CI_0_87,
  MR_Word * STATE_VARIABLE_CI_88,
  MR_Word STATE_VARIABLE_CLD_0_89,
  MR_Word * STATE_VARIABLE_CLD_90)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_25;
    MR_Word ConsTag_26;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_87, &ModuleInfo_25);
    ConsTag_26 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_25, ConsId_15);
    switch (MR_tag((MR_Word) ConsTag_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ProcInfo_264;
              MR_Word VarTypes_265;
              MR_Word MayUseAtomic0_266;
              MR_Word CellArgs0_268;
              MR_Word MayUseAtomic_269;
              MR_Word ArgWidths_270;
              MR_Word PackCode_272;
              MR_Word HowToConstruct_273;
              MR_Word CellArgs_274;
              MR_Word Context_275;
              MR_Word ConstructCode_276;
              MR_Word STATE_VARIABLE_CLD_164_277;

              ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_87, &ProcInfo_264);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_264, &VarTypes_265);
              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_87, &MayUseAtomic0_266);
              ll_backend__unify_gen__generate_cons_args_9_p_0(VarTypes_265, RHSVarsWidths_16, ArgModes_17, (MR_Integer) 1, TakeAddr_19, STATE_VARIABLE_CI_0_87, &CellArgs0_268, MayUseAtomic0_266, &MayUseAtomic_269);
              mercury__assoc_list__values_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, RHSVarsWidths_16, &ArgWidths_270);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_270, CellArgs0_268, &CellArgs_274, &PackCode_272, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, &STATE_VARIABLE_CLD_164_277);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_270, HowToConstruct0_18, &HowToConstruct_273);
              Context_275 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_14, (MR_Integer) 0, CellArgs_274, HowToConstruct_273, MaybeSize_20, Context_275, MayUseAtomic_269, &ConstructCode_276, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CI_88, STATE_VARIABLE_CLD_164_277, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_272, ConstructCode_276);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_35;
              MR_Word ArgMode_37;
              MR_Word Var_170;
              MR_Word Var_171;
              MR_Word Var_172;
              MR_Word _Width_36;

              succeeded = ((MR_tag((MR_Word) RHSVarsWidths_16)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVarsWidths_16, (MR_Integer) 0)));
                Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVarsWidths_16, (MR_Integer) 1)));
                succeeded = (Var_171 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  RHSVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_170, (MR_Integer) 0)));
                  _Width_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_170, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) ArgModes_17)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 0)));
                    Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 1)));
                    succeeded = (Var_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
                if ((TakeAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word Type_38;
                  MR_Word FieldAndArgVar_39;
                  MR_Word Var_175;

                  Type_38 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_87, RHSVar_35);
                  {
                    Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (LHSVar_14));
                  }
                  {
                    FieldAndArgVar_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_39, 0) = ((MR_Box) (Var_175));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_39, 1) = ((MR_Box) (RHSVar_35));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_39, 2) = ((MR_Box) (Type_38));
                  }
                  ll_backend__unify_gen__generate_sub_unify_6_p_0(FieldAndArgVar_39, ArgMode_37, Code_22, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
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
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_26, (MR_Integer) 0)));
          MR_Word Var_192;
          MR_Word Var_194;

          {
            Var_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_194, 1) = ((MR_Box) (String_27));
          }
          {
            Var_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_192, 1) = ((MR_Box) (Var_194));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_192, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
          *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_34 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_26, (MR_Integer) 0)));
          MR_Word Var_179;
          MR_Word Var_181;

          {
            Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_181, 1) = MR_box_float(Float_34);
          }
          {
            Var_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_179, 1) = ((MR_Box) (Var_181));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_179, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
          *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Word Const_29;
              MR_Word Var_190;
              MR_Word Var_30;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_28, &Const_29, &Var_30);
              {
                Var_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_190, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_190, 1) = ((MR_Box) (Const_29));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_190, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_String Val_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
              MR_Word ForeignConst_33;
              MR_Word Var_182;
              MR_Word Var_186;

              {
                Var_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_182, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[4]));
                MR_hl_field(MR_mktag(0), Var_182, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_5));
                MR_hl_field(MR_mktag(0), Var_182, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_182, 3) = ((MR_Box) (Lang_31));
                MR_hl_field(MR_mktag(0), Var_182, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_182, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "foreign_tag for language other than C");
              {
                Var_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_186, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_186, 1) = ((MR_Box) (Val_32));
                MR_hl_field(MR_mktag(3), Var_186, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_6[3])));
              }
              {
                ForeignConst_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ForeignConst_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ForeignConst_33, 1) = ((MR_Box) (Var_186));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, ForeignConst_33, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word RHSVars_86;
              MR_Word Var_91;
              MR_Word Var_95;
              MR_Word PredId_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Integer ProcId_222 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));

              {
                Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_2));
                MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (TakeAddr_19));
                MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_91, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "closure_tag has take_addr");
              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_3));
                MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (MaybeSize_20));
                MR_hl_field(MR_mktag(0), Var_95, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_95, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "closure_tag has size");
              mercury__assoc_list__keys_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, RHSVarsWidths_16, &RHSVars_86);
              ll_backend__closure_gen__generate_closure_11_p_0(PredId_221, ProcId_222, LHSVar_14, RHSVars_86, GoalInfo_21, Code_22, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CI_88, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_String TypeName_63 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
              MR_Integer TypeArity_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3)));
              MR_Word RttiTypeCtor_65;
              MR_Word DataId_66;
              MR_Word Var_140;
              MR_Word Var_144;
              MR_Word Var_146;
              MR_Word Var_148;

              {
                Var_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_140, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_8));
                MR_hl_field(MR_mktag(0), Var_140, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_140, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_140, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_140, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "type_ctor_info constant has args");
              {
                RttiTypeCtor_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_65, 0) = ((MR_Box) (ModuleName_62));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_65, 1) = ((MR_Box) (TypeName_63));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_65, 2) = ((MR_Box) (TypeArity_64));
              }
              {
                Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_144, 0) = ((MR_Box) (RttiTypeCtor_65));
                MR_hl_field(MR_mktag(0), Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              {
                DataId_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_66, 0) = ((MR_Box) (Var_144));
              }
              {
                Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (DataId_66));
                MR_hl_field(MR_mktag(3), Var_148, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_146, 1) = ((MR_Box) (Var_148));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_146, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
              MR_String Instance_68 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 3)));
              MR_Word TCName_69;
              MR_Word Var_130;
              MR_Word Var_134;
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_138;
              MR_Word ModuleName_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Word DataId_213;

              {
                Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_130, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_130, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_130, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_130, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "base_typeclass_info constant has args");
              TCName_69 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_67);
              {
                Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (ModuleName_212));
                MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Instance_68));
              }
              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (TCName_69));
                MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
              }
              {
                DataId_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_213, 0) = ((MR_Box) (Var_134));
              }
              {
                Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) (DataId_213));
                MR_hl_field(MR_mktag(3), Var_138, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (Var_138));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_136, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_282 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Word ConstStructMap_283;
              MR_Word Rval_284;
              MR_Word Var_286;
              MR_Box conv1_Var_286;
              MR_Word _Type_281;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_87, &ConstStructMap_283);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_283, ConstNum_282, &conv1_Var_286);
              Var_286 = ((MR_Word) conv1_Var_286);
              Rval_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_286, (MR_Integer) 0)));
              _Type_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_286, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_14, Rval_284, Code_22, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_290 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Word ConstStructMap_291;
              MR_Word Rval_292;
              MR_Word Var_294;
              MR_Box conv2_Var_294;
              MR_Word _Type_289;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_87, &ConstStructMap_291);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_291, ConstNum_290, &conv2_Var_294);
              Var_294 = ((MR_Word) conv2_Var_294);
              Rval_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_294, (MR_Integer) 0)));
              _Type_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_294, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_14, Rval_292, Code_22, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Word ConstStructMap_72;
              MR_Word Rval_73;
              MR_Word Var_128;
              MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
              MR_Box conv0_Var_128;
              MR_Word _Type_74;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_87, &ConstStructMap_72);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_72, ConstNum_70, &conv0_Var_128);
              Var_128 = ((MR_Word) conv0_Var_128);
              Rval_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_128, (MR_Integer) 0)));
              _Type_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_128, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_14, Rval_73, Code_22, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredId_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Integer ProcId_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
              MR_Word ProcLabel_77;
              MR_Word Var_119;
              MR_Word Var_124;
              MR_Word Var_126;
              MR_Word DataId_214;

              {
                Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_7));
                MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_119, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "tabling_info constant has args");
              ProcLabel_77 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_25, PredId_75, ProcId_76);
              {
                DataId_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DataId_214, 0) = ((MR_Box) (ProcLabel_77));
                MR_hl_field(MR_mktag(1), DataId_214, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (DataId_214));
                MR_hl_field(MR_mktag(3), Var_126, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (Var_126));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_124, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RttiProcLabel_78;
              MR_Word Origin_79;
              MR_Word UserOrUCI_82;
              MR_Word ProcKind_83;
              MR_Word Var_110;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_117;
              MR_Word DataId_215;
              MR_Word PredId_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Integer ProcId_217 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
              MR_Word Var_223;
              MR_Word Var_224;
              MR_Word Var_225;
              MR_String Var_226;
              MR_Integer Var_227;
              MR_Word Var_228;
              MR_Word Var_229;
              MR_Integer Var_230;
              MR_Word Var_231;
              MR_Word Var_232;
              MR_Word Var_233;
              MR_Word Var_234;
              MR_Word Var_235;
              MR_Word Var_236;
              MR_Word Var_237;
              MR_Word Var_80;
              MR_Word Var_81;

              {
                Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_4));
                MR_hl_field(MR_mktag(0), Var_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_110, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_110, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_110, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "deep_profiling_proc_static has args");
              RttiProcLabel_78 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_25, PredId_216, ProcId_217);
              Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 0)));
              Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 1)));
              Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 2)));
              Var_226 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 3)));
              Var_227 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 4)));
              Var_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 5)));
              Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 6)));
              Var_230 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 7)));
              Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 8)));
              Var_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 9)));
              Var_233 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 10)))) & (MR_Integer) 7);
              Var_234 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_235 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Origin_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 11)));
              Var_236 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 12)))) & (MR_Integer) 1);
              Var_237 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_78, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              succeeded = ((MR_tag((MR_Word) Origin_79)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_79, (MR_Integer) 0)));
                Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_79, (MR_Integer) 1)));
                UserOrUCI_82 = (MR_Integer) 1;
              }
              else
                UserOrUCI_82 = (MR_Integer) 0;
              {
                ProcKind_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ProcKind_83, 0) = ((MR_Box) (UserOrUCI_82));
              }
              {
                Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (RttiProcLabel_78));
                MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (ProcKind_83));
              }
              {
                DataId_215 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DataId_215, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), DataId_215, 1) = ((MR_Box) (Var_114));
              }
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (DataId_215));
                MR_hl_field(MR_mktag(3), Var_117, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Var_117));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_115, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PredProcId_84;
              MR_Word Var_101;
              MR_Word Var_106;
              MR_Word Var_108;
              MR_Word DataId_218;
              MR_Word PredId_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Integer ProcId_220 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));

              {
                Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_13_p_0_6));
                MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (RHSVarsWidths_16));
                MR_hl_field(MR_mktag(0), Var_101, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_101, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/13", (MR_String) "table_io_entry has args");
              {
                PredProcId_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredProcId_84, 0) = ((MR_Box) (PredId_219));
                MR_hl_field(MR_mktag(0), PredProcId_84, 1) = ((MR_Box) (ProcId_220));
              }
              {
                DataId_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DataId_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), DataId_218, 1) = NULL;
                MR_hl_field(MR_mktag(3), DataId_218, 2) = ((MR_Box) (PredProcId_84));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (DataId_218));
                MR_hl_field(MR_mktag(3), Var_108, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (Var_108));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_106, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_297 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Word ProcInfo_298;
              MR_Word VarTypes_299;
              MR_Word MayUseAtomic0_300;
              MR_Word CellArgs0_302;
              MR_Word MayUseAtomic_303;
              MR_Word ArgWidths_304;
              MR_Word PackCode_306;
              MR_Word HowToConstruct_307;
              MR_Word CellArgs_308;
              MR_Word Context_309;
              MR_Word ConstructCode_310;
              MR_Word STATE_VARIABLE_CLD_164_311;

              ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_87, &ProcInfo_298);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_298, &VarTypes_299);
              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_87, &MayUseAtomic0_300);
              ll_backend__unify_gen__generate_cons_args_9_p_0(VarTypes_299, RHSVarsWidths_16, ArgModes_17, (MR_Integer) 1, TakeAddr_19, STATE_VARIABLE_CI_0_87, &CellArgs0_302, MayUseAtomic0_300, &MayUseAtomic_303);
              mercury__assoc_list__values_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, RHSVarsWidths_16, &ArgWidths_304);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_304, CellArgs0_302, &CellArgs_308, &PackCode_306, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, &STATE_VARIABLE_CLD_164_311);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_304, HowToConstruct0_18, &HowToConstruct_307);
              Context_309 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_14, Ptag_297, CellArgs_308, HowToConstruct_307, MaybeSize_20, Context_309, MayUseAtomic_303, &ConstructCode_310, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CI_88, STATE_VARIABLE_CLD_164_311, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_306, ConstructCode_310);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_209 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Word RHSVar_201;
              MR_Word ArgMode_203;
              MR_Word Var_156;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word _Width_197;

              succeeded = ((MR_tag((MR_Word) RHSVarsWidths_16)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVarsWidths_16, (MR_Integer) 0)));
                Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVarsWidths_16, (MR_Integer) 1)));
                succeeded = (Var_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  RHSVar_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 0)));
                  _Width_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) ArgModes_17)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 0)));
                    Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_17, (MR_Integer) 1)));
                    succeeded = (Var_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
                if ((TakeAddr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word Type_199;

                  Type_199 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_87, RHSVar_201);
                  ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(LHSVar_14, RHSVar_201, Ptag_209, ArgMode_203, Type_199, Code_22, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
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
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Ptag_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Word ProcInfo_44;
              MR_Word VarTypes_45;
              MR_Word MayUseAtomic0_46;
              MR_Word CellArgs0_48;
              MR_Word MayUseAtomic_49;
              MR_Word ArgWidths_50;
              MR_Word CellArgs1_51;
              MR_Word PackCode_52;
              MR_Word HowToConstruct_53;
              MR_Word CellArgs_55;
              MR_Integer Sectag_56;
              MR_Word TagArg_57;
              MR_Word Context_58;
              MR_Word ConstructCode_59;
              MR_Word STATE_VARIABLE_CLD_164_164;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Integer _Sectag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
              MR_Integer _Ptag_195;

              ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_87, &ProcInfo_44);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_44, &VarTypes_45);
              ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_0_87, &MayUseAtomic0_46);
              ll_backend__unify_gen__generate_cons_args_9_p_0(VarTypes_45, RHSVarsWidths_16, ArgModes_17, (MR_Integer) 1, TakeAddr_19, STATE_VARIABLE_CI_0_87, &CellArgs0_48, MayUseAtomic0_46, &MayUseAtomic_49);
              mercury__assoc_list__values_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, RHSVarsWidths_16, &ArgWidths_50);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_50, CellArgs0_48, &CellArgs1_51, &PackCode_52, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, &STATE_VARIABLE_CLD_164_164);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_50, HowToConstruct0_18, &HowToConstruct_53);
              _Ptag_195 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              Sectag_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
              {
                Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Sectag_56));
              }
              {
                Var_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_165, 1) = ((MR_Box) (Var_166));
              }
              {
                TagArg_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), TagArg_57, 0) = ((MR_Box) (Var_165));
                MR_hl_field(MR_mktag(1), TagArg_57, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                CellArgs_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CellArgs_55, 0) = ((MR_Box) (TagArg_57));
                MR_hl_field(MR_mktag(1), CellArgs_55, 1) = ((MR_Box) (CellArgs1_51));
              }
              Context_58 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_14, Ptag_42, CellArgs_55, HowToConstruct_53, MaybeSize_20, Context_58, MayUseAtomic_49, &ConstructCode_59, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CI_88, STATE_VARIABLE_CLD_164_164, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_52, ConstructCode_59);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_150;
              MR_Word Var_152;
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Integer Ptag_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
              MR_Integer Sectag_211 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));

              {
                Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Sectag_211));
              }
              {
                Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) (Var_155));
              }
              {
                Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_152, 2) = ((MR_Box) (Var_154));
              }
              {
                Var_150 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_150, 0) = ((MR_Box) (Ptag_210));
                MR_hl_field(MR_mktag(2), Var_150, 1) = ((MR_Box) (Var_152));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_14, Var_150, STATE_VARIABLE_CI_0_87, STATE_VARIABLE_CLD_0_89, STATE_VARIABLE_CLD_90);
              *Code_22 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_88 = STATE_VARIABLE_CI_0_87;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
  MR_Word ArgWidths_4,
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
        MR_Word CellToReuse0_7 = (MR_Word) MR_body(((MR_Word) STATE_VARIABLE_HowToConstruct_0_13), (MR_Integer) 1);
        MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 0)));
        MR_Word ConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 1)));
        MR_Word NeedsUpdates0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 2)));
        MR_Word NeedsUpdates_11;
        MR_Word CellToReuse_12;

        ll_backend__unify_gen__needs_update_args_to_words_3_p_0(ArgWidths_4, NeedsUpdates0_10, &NeedsUpdates_11);
        {
          CellToReuse_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CellToReuse_12, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(0), CellToReuse_12, 1) = ((MR_Box) (ConsIds_9));
          MR_hl_field(MR_mktag(0), CellToReuse_12, 2) = ((MR_Box) (NeedsUpdates_11));
        }
        *STATE_VARIABLE_HowToConstruct_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) CellToReuse_12);
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
        return;
      }
    }
  else
  {
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.needs_update_args_to_words\'/3", (MR_String) "mismatched lists");
        return;
      }
    }
    else
    {
      MR_Word ArgNU_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgNUs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word WordNU_19;
      MR_Word WordNUs_20;

      switch (MR_tag((MR_Word) Var_29)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            WordNU_19 = ArgNU_17;
            ll_backend__unify_gen__needs_update_args_to_words_3_p_0(Var_28, ArgNUs_18, &WordNUs_20);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LaterWordWidths_22;
            MR_Word LaterWordArgNUs_23;

            ll_backend__unify_gen__does_any_arg_in_word_need_update_6_p_0(Var_28, ArgNUs_18, ArgNU_17, &WordNU_19, &LaterWordWidths_22, &LaterWordArgNUs_23);
            ll_backend__unify_gen__needs_update_args_to_words_3_p_0(LaterWordWidths_22, LaterWordArgNUs_23, &WordNUs_20);
          }
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.needs_update_args_to_words\'/3", (MR_String) "partial_word_shifted");
              return;
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WordNU_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (WordNUs_20));
      }
    }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.does_any_arg_in_word_need_update\'/6", (MR_String) "mismatched lists");
          return;
        }
      }
      else
      {
        MR_Word ArgNU_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ArgNUs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) Var_45)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__5_5 = HeadVar__1_1;
              *HeadVar__6_6 = HeadVar__2_2;
              *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              *HeadVar__5_5 = HeadVar__1_1;
              *HeadVar__6_6 = HeadVar__2_2;
              *STATE_VARIABLE_NU_4 = STATE_VARIABLE_NU_0_3;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_NU_42_42;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_STATE_VARIABLE_NU_0_3;

              switch (ArgNU_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  STATE_VARIABLE_NU_42_42 = STATE_VARIABLE_NU_0_3;
                  break;
                case (MR_Integer) 0:
                  STATE_VARIABLE_NU_42_42 = (MR_Integer) 0;
                  break;
              }
              // direct tailcall eliminated
              next_value_of_HeadVar__1_1 = Var_44;
              next_value_of_HeadVar__2_2 = ArgNUs_33;
              next_value_of_STATE_VARIABLE_NU_0_3 = STATE_VARIABLE_NU_42_42;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_NU_0_3 = next_value_of_STATE_VARIABLE_NU_0_3;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_FinalCellArg_14;
    MR_Word conv1_STATE_VARIABLE_Code_31;
    MR_Word conv0_STATE_VARIABLE_CLD_33;

    ll_backend__unify_gen__shift_combine_arg_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv2_FinalCellArg_14, ((MR_Word) wrapper_arg_5), &conv1_STATE_VARIABLE_Code_31, ((MR_Word) wrapper_arg_7), &conv0_STATE_VARIABLE_CLD_33);
    *wrapper_arg_4 = ((MR_Box) (conv2_FinalCellArg_14));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Code_31));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_CLD_33));
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0(
  MR_Word ArgWidths_8,
  MR_Word CellArgs0_9,
  MR_Word * CellArgs_10,
  MR_Word * Code_11,
  MR_Word CI_12,
  MR_Word STATE_VARIABLE_CLD_0_14,
  MR_Word * STATE_VARIABLE_CLD_15)
{
  {
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Box conv4_Code_11;
    MR_Box conv3_STATE_VARIABLE_CLD_15;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ll_backend__unify_gen__pack_cell_rvals_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (CI_12));
    }
    Var_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[5], (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, Var_16, ArgWidths_8, CellArgs0_9, CellArgs_10, ((MR_Box) (Var_17)), &conv4_Code_11, ((MR_Box) (STATE_VARIABLE_CLD_0_14)), &conv3_STATE_VARIABLE_CLD_15);
    *Code_11 = ((MR_Word) conv4_Code_11);
    *STATE_VARIABLE_CLD_15 = ((MR_Word) conv3_STATE_VARIABLE_CLD_15);
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
        MR_Integer Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_4, (MR_Integer) 0)));

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
        MR_Unsigned UInt_8 = ((MR_Unsigned) (MR_hl_field(MR_mktag(1), IntTag_4, (MR_Integer) 0)));

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
    LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_13, (MR_Integer) 0)));
    RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_13, (MR_Integer) 1)));
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
              *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
    MR_Word LeftUniVal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 0)));
    MR_Word RightVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 1)));
    MR_Word Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldAndArgVar_7, (MR_Integer) 2)));
    MR_Word ModuleInfo_15;
    MR_Word LeftFromToInsts_16;
    MR_Word RightFromToInsts_17;
    MR_Word LeftTopFunctorMode_18;
    MR_Word RightTopFunctorMode_19;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_15);
    LeftFromToInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_8, (MR_Integer) 0)));
    RightFromToInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_8, (MR_Integer) 1)));
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
                  MR_Word LeftField_21 = (MR_Word) MR_body(((MR_Word) LeftUniVal_12), (MR_Integer) 0);

                  ll_backend__unify_gen__generate_sub_assign_to_var_from_field_6_p_0(RightVar_13, LeftField_21, Code_9, CI_10, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                }
                else
                {
                  MR_Word LeftVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), LeftUniVal_12, (MR_Integer) 0)));

                  ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RightVar_13, LeftVar_20, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                  *Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
              else
              {
                *Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
              MR_Word LeftField_35 = (MR_Word) MR_body(((MR_Word) LeftUniVal_12), (MR_Integer) 0);

              ll_backend__unify_gen__generate_sub_assign_to_field_from_var_6_p_0(LeftField_35, RightVar_13, Code_9, CI_10, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
            }
            else
            {
              MR_Word LeftVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), LeftUniVal_12, (MR_Integer) 0)));

              succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_22, LeftVar_34);
              if (succeeded)
              {
                ll_backend__code_loc_dep__assign_var_to_var_4_p_0(LeftVar_34, RightVar_13, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                *Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              else
              {
                *Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
                *Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
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
  MR_Word STATE_VARIABLE_CLD_0_33,
  MR_Word * STATE_VARIABLE_CLD_34)
{
  {
    MR_Word TypeCtorInfo_85_85;
    MR_Integer LeftPtag_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 0)));
    MR_Word LeftBaseRval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 1)));
    MR_Integer LeftOffset_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 2)));
    MR_Word LeftWidth_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), LeftField_7, (MR_Integer) 3)));
    MR_Word ProduceRightVarCode_16;
    MR_Word RightRval_17;
    MR_Word LeftBaseRval_18;
    MR_Word MaterializeLeftBaseCode_19;
    MR_Word AssignCode_21;
    MR_Word STATE_VARIABLE_CLD_35_35;
    MR_Word Var_80;

    ll_backend__code_loc_dep__produce_variable_6_p_0(RightVar_8, &ProduceRightVarCode_16, &RightRval_17, CI_10, STATE_VARIABLE_CLD_0_33, &STATE_VARIABLE_CLD_35_35);
    ll_backend__code_loc_dep__materialize_vars_in_rval_6_p_0(LeftBaseRval0_13, &LeftBaseRval_18, &MaterializeLeftBaseCode_19, CI_10, STATE_VARIABLE_CLD_35_35, STATE_VARIABLE_CLD_34);
    switch (MR_tag((MR_Word) LeftWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(LeftWidth_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LeftLval_20;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;

              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (LeftPtag_12));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (LeftOffset_14));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
              }
              {
                LeftLval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LeftLval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), LeftLval_20, 1) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(3), LeftLval_20, 2) = ((MR_Box) (LeftBaseRval_18));
                MR_hl_field(MR_mktag(3), LeftLval_20, 3) = ((MR_Box) (Var_75));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (LeftLval_20));
                MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) (RightRval_17));
              }
              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) ((MR_String) "Copy value"));
              }
              AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_77)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word LeftLvalA_28;
              MR_Word LeftLvalB_29;
              MR_Word SrcA_30;
              MR_Word SrcB_31;
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_41;
              MR_Word Var_42;
              MR_Integer Var_43;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_58;

              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (LeftPtag_12));
              }
              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (LeftOffset_14));
              }
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
              }
              {
                LeftLvalA_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LeftLvalA_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), LeftLvalA_28, 1) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(3), LeftLvalA_28, 2) = ((MR_Box) (LeftBaseRval_18));
                MR_hl_field(MR_mktag(3), LeftLvalA_28, 3) = ((MR_Box) (Var_38));
              }
              Var_43 = (LeftOffset_14 + (MR_Integer) 1);
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
              }
              {
                LeftLvalB_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LeftLvalB_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), LeftLvalB_29, 1) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(3), LeftLvalB_29, 2) = ((MR_Box) (LeftBaseRval_18));
                MR_hl_field(MR_mktag(3), LeftLvalB_29, 3) = ((MR_Box) (Var_41));
              }
              {
                SrcA_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SrcA_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), SrcA_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                MR_hl_field(MR_mktag(3), SrcA_30, 2) = ((MR_Box) (RightRval_17));
                MR_hl_field(MR_mktag(3), SrcA_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
              }
              {
                SrcB_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SrcB_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), SrcB_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                MR_hl_field(MR_mktag(3), SrcB_31, 2) = ((MR_Box) (RightRval_17));
                MR_hl_field(MR_mktag(3), SrcB_31, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (LeftLvalA_28));
                MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (SrcA_30));
              }
              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) ((MR_String) "Update double word"));
              }
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (LeftLvalB_29));
                MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (SrcB_31));
              }
              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) ((MR_String) "Update double word"));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
              }
              AssignCode_21 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, Var_53);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Mask_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LeftWidth_15, (MR_Integer) 0)));
          MR_Word ComplementMask_24;
          MR_Word MaskOld_25;
          MR_Word ShiftNew_26;
          MR_Word Combined_27;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Integer Var_64;
          MR_Integer Var_65;
          MR_Word Var_68;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word LeftLval_81;

          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (LeftPtag_12));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (LeftOffset_14));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
          }
          {
            LeftLval_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LeftLval_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), LeftLval_81, 1) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(3), LeftLval_81, 2) = ((MR_Box) (LeftBaseRval_18));
            MR_hl_field(MR_mktag(3), LeftLval_81, 3) = ((MR_Box) (Var_61));
          }
          Var_65 = mercury__int__f_60_60_2_f_0(Mask_22, (MR_Integer) 0);
          Var_64 = ~(Var_65);
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          }
          {
            ComplementMask_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ComplementMask_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ComplementMask_24, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (LeftLval_81));
          }
          {
            MaskOld_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MaskOld_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), MaskOld_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), MaskOld_25, 2) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(3), MaskOld_25, 3) = ((MR_Box) (ComplementMask_24));
          }
          ShiftNew_26 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(RightRval_17, (MR_Integer) 0);
          {
            Combined_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Combined_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Combined_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
            MR_hl_field(MR_mktag(3), Combined_27, 2) = ((MR_Box) (MaskOld_25));
            MR_hl_field(MR_mktag(3), Combined_27, 3) = ((MR_Box) (ShiftNew_26));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (LeftLval_81));
            MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Combined_27));
          }
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) ((MR_String) "Update part of word"));
          }
          AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_71)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Mask_86 = ((MR_Integer) (MR_hl_field(MR_mktag(2), LeftWidth_15, (MR_Integer) 1)));
          MR_Integer Shift_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), LeftWidth_15, (MR_Integer) 0)));
          MR_Word ComplementMask_88;
          MR_Word MaskOld_89;
          MR_Word ShiftNew_90;
          MR_Word Combined_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Integer Var_96;
          MR_Integer Var_97;
          MR_Word Var_100;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word LeftLval_106;

          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (LeftPtag_12));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (LeftOffset_14));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Var_94));
          }
          {
            LeftLval_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LeftLval_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), LeftLval_106, 1) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(3), LeftLval_106, 2) = ((MR_Box) (LeftBaseRval_18));
            MR_hl_field(MR_mktag(3), LeftLval_106, 3) = ((MR_Box) (Var_93));
          }
          Var_97 = mercury__int__f_60_60_2_f_0(Mask_86, Shift_87);
          Var_96 = ~(Var_97);
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
          }
          {
            ComplementMask_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ComplementMask_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ComplementMask_88, 1) = ((MR_Box) (Var_95));
          }
          {
            Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (LeftLval_106));
          }
          {
            MaskOld_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MaskOld_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), MaskOld_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), MaskOld_89, 2) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(3), MaskOld_89, 3) = ((MR_Box) (ComplementMask_88));
          }
          ShiftNew_90 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(RightRval_17, Shift_87);
          {
            Combined_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Combined_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Combined_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
            MR_hl_field(MR_mktag(3), Combined_91, 2) = ((MR_Box) (MaskOld_89));
            MR_hl_field(MR_mktag(3), Combined_91, 3) = ((MR_Box) (ShiftNew_90));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (LeftLval_106));
            MR_hl_field(MR_mktag(3), Var_104, 2) = ((MR_Box) (Combined_91));
          }
          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) ((MR_String) "Update part of word"));
          }
          AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_103)));
        }
        break;
    }
    TypeCtorInfo_85_85 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    Var_80 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_85_85, MaterializeLeftBaseCode_19, AssignCode_21);
    *Code_9 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_85_85, ProduceRightVarCode_16, Var_80);
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Integer Shift_5)
{
  {
    MR_bool succeeded = (Shift_5 == (MR_Integer) 0);
    MR_Word HeadVar__3_3;

    if (succeeded)
      HeadVar__3_3 = Rval_4;
    else
    {
      MR_Word Var_8;
      MR_Word Var_9;

      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Shift_5));
      }
      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (Var_9));
      }
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[10])));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Rval_4));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
      }
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_to_var_from_field_6_p_0(
  MR_Word LeftVar_7,
  MR_Word RightField_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_23,
  MR_Word * STATE_VARIABLE_CLD_24)
{
  {
    MR_Integer RightPtag_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RightField_8, (MR_Integer) 0)));
    MR_Word RightBaseRval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), RightField_8, (MR_Integer) 1)));
    MR_Integer RightOffset_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RightField_8, (MR_Integer) 2)));
    MR_Word RightWidth_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), RightField_8, (MR_Integer) 3)));

    switch (MR_tag((MR_Word) RightWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(RightWidth_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word RightLval_16;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;

              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (RightPtag_12));
              }
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (RightOffset_14));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
              }
              {
                RightLval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), RightLval_16, 1) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(3), RightLval_16, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLval_16, 3) = ((MR_Box) (Var_55));
              }
              ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(LeftVar_7, RightLval_16, Code_9, CI_10, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RightLvalA_21;
              MR_Word RightLvalB_22;
              MR_Word Var_25;
              MR_Word Var_26;
              MR_Word Var_27;
              MR_Word Var_29;
              MR_Word Var_30;
              MR_Integer Var_31;
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_38;
              MR_Word RightRval_59;

              {
                Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (RightPtag_12));
              }
              {
                Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (RightOffset_14));
              }
              {
                Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_27));
              }
              {
                RightLvalA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLvalA_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), RightLvalA_21, 1) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(3), RightLvalA_21, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLvalA_21, 3) = ((MR_Box) (Var_26));
              }
              Var_31 = (RightOffset_14 + (MR_Integer) 1);
              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
              }
              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
              }
              {
                RightLvalB_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLvalB_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), RightLvalB_22, 1) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(3), RightLvalB_22, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLvalB_22, 3) = ((MR_Box) (Var_29));
              }
              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (RightLvalA_21));
              }
              {
                Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (RightLvalB_22));
              }
              {
                RightRval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightRval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), RightRval_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
                MR_hl_field(MR_mktag(3), RightRval_59, 2) = ((MR_Box) (Var_34));
                MR_hl_field(MR_mktag(3), RightRval_59, 3) = ((MR_Box) (Var_35));
              }
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (RightLvalB_22));
                MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (RightLvalA_21));
                MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
              }
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_7, Var_36, RightRval_59, Code_9, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Mask_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RightWidth_15, (MR_Integer) 0)));
          MR_Word RightRval0_18;
          MR_Word RightRval_20;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word RightLval_58;

          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (RightPtag_12));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (RightOffset_14));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
          }
          {
            RightLval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), RightLval_58, 1) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(3), RightLval_58, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLval_58, 3) = ((MR_Box) (Var_45));
          }
          {
            RightRval0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RightRval0_18, 0) = ((MR_Box) (RightLval_58));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Mask_17));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
          }
          {
            RightRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), RightRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), RightRval_20, 2) = ((MR_Box) (RightRval0_18));
            MR_hl_field(MR_mktag(3), RightRval_20, 3) = ((MR_Box) (Var_49));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (RightLval_58));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_7, Var_51, RightRval_20, Code_9, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Shift_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RightWidth_15, (MR_Integer) 0)));
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Integer Mask_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RightWidth_15, (MR_Integer) 1)));
          MR_Word RightRval0_61;
          MR_Word RightRval_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word RightLval_69;
          MR_Word Var_74;
          MR_Word Var_75;

          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (RightPtag_12));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (RightOffset_14));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
          }
          {
            RightLval_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLval_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), RightLval_69, 1) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(3), RightLval_69, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLval_69, 3) = ((MR_Box) (Var_41));
          }
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (RightLval_69));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Shift_19));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (Var_75));
          }
          {
            RightRval0_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightRval0_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), RightRval0_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
            MR_hl_field(MR_mktag(3), RightRval0_61, 2) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(3), RightRval0_61, 3) = ((MR_Box) (Var_74));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Mask_60));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (Var_66));
          }
          {
            RightRval_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightRval_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), RightRval_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
            MR_hl_field(MR_mktag(3), RightRval_62, 2) = ((MR_Box) (RightRval0_61));
            MR_hl_field(MR_mktag(3), RightRval_62, 3) = ((MR_Box) (Var_65));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (RightLval_69));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_7, Var_67, RightRval_62, Code_9, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
        }
        break;
    }
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
    MR_Word conv0_STATE_VARIABLE_RevFieldAddrs_17;

    ll_backend__unify_gen__generate_field_addr_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_NextOffset_8, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_RevFieldAddrs_17);
    *wrapper_arg_3 = ((MR_Box) (conv1_NextOffset_8));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_RevFieldAddrs_17));
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
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word RevFieldAddrs_58;
    MR_Integer Var_57;
    MR_Box conv3_Var_57;
    MR_Box conv2_RevFieldAddrs_58;

    VarType_23 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_34, Var_13);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_23, &TypeCtor_45);
    TypeSym_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_45, (MR_Integer) 0)));
    TypeArity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_45, (MR_Integer) 1)));
    TypeSymStr_48 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSym_46);
    mercury__string__int_to_string_2_p_0(TypeArity_47, &TypeArityStr_49);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (TypeArityStr_49));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "/"));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (TypeSymStr_48));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
    }
    mercury__string__append_list_2_p_0(Var_50, &VarTypeMsg_24);
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
    mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[4], (MR_Word) &ll_backend__unify_gen_scalar_common_2[5], CellArgs_15, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_57, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv2_RevFieldAddrs_58);
    Var_57 = ((MR_Integer) conv3_Var_57);
    RevFieldAddrs_58 = ((MR_Word) conv2_RevFieldAddrs_58);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0, RevFieldAddrs_58, &FieldAddrs_30);
    if ((FieldAddrs_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Code_20 = CellCode_29;
      *STATE_VARIABLE_CLD_37 = STATE_VARIABLE_CLD_40_40;
    }
    else
    {
      MR_Word FieldCode_33;

      ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(FieldAddrs_30, Var_13, Ptag_14, &FieldCode_33, STATE_VARIABLE_CLD_40_40, STATE_VARIABLE_CLD_37);
      *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, CellCode_29, FieldCode_33);
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
  }
  else
  {
    MR_Word FieldAddr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word FieldAddrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ThisCode_16;
    MR_Word RestCode_17;
    MR_Integer FieldNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FieldAddr_12, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldAddr_12, (MR_Integer) 1)));
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
      MR_hl_field(MR_mktag(3), Addr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Addr_22, 1) = ((MR_Box) (Var_26));
    }
    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(Var_20, Addr_22, &ThisCode_16, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_29_29);
    ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(FieldAddrs_13, CellVar_2, CellPtag_3, &RestCode_17, STATE_VARIABLE_CLD_29_29, STATE_VARIABLE_CLD_6);
    *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ThisCode_16, RestCode_17);
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_9_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer CurArgNum_4,
  MR_Word STATE_VARIABLE_TakeAddr_0_5,
  MR_Word CI_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_8,
  MR_Word * STATE_VARIABLE_MayUseAtomic_9)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_MayUseAtomic_9 = STATE_VARIABLE_MayUseAtomic_0_8;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_cons_args\'/9", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_cons_args\'/9", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgModes_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word CellArg_49;
      MR_Word CellArgs_50;
      MR_Word STATE_VARIABLE_TakeAddr_55_55;
      MR_Word STATE_VARIABLE_MayUseAtomic_56_56;
      MR_Integer Var_57;

      ll_backend__unify_gen__generate_cons_arg_10_p_0(VarTypes_1, Var_61, ArgMode_44, CurArgNum_4, STATE_VARIABLE_TakeAddr_0_5, &STATE_VARIABLE_TakeAddr_55_55, CI_6, &CellArg_49, STATE_VARIABLE_MayUseAtomic_0_8, &STATE_VARIABLE_MayUseAtomic_56_56);
      Var_57 = (CurArgNum_4 + (MR_Integer) 1);
      ll_backend__unify_gen__generate_cons_args_9_p_0(VarTypes_1, Var_60, ArgModes_45, Var_57, STATE_VARIABLE_TakeAddr_55_55, CI_6, &CellArgs_50, STATE_VARIABLE_MayUseAtomic_56_56, STATE_VARIABLE_MayUseAtomic_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CellArg_49));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellArgs_50));
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_cons_arg_10_p_0(
  MR_Word VarTypes_11,
  MR_Word HeadVar__2_2,
  MR_Word ArgMode_14,
  MR_Integer CurArgNum_15,
  MR_Word STATE_VARIABLE_TakeAddr_0_30,
  MR_Word * STATE_VARIABLE_TakeAddr_31,
  MR_Word CI_17,
  MR_Word * CellArg_18,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_32,
  MR_Word * STATE_VARIABLE_MayUseAtomic_33)
{
  {
    MR_bool succeeded;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Width_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Type_20;
    MR_Word ModuleInfo_21;
    MR_Word STATE_VARIABLE_MayUseAtomic_34_34;
    MR_Word STATE_VARIABLE_TakeAddr_35_35;
    MR_Integer Var_44;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_11, Var_12, &Type_20);
    ll_backend__code_info__get_module_info_2_p_0(CI_17, &ModuleInfo_21);
    check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_21, Type_20, STATE_VARIABLE_MayUseAtomic_0_32, &STATE_VARIABLE_MayUseAtomic_34_34);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_TakeAddr_0_30)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_30, (MR_Integer) 0)));
      STATE_VARIABLE_TakeAddr_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_TakeAddr_0_30, (MR_Integer) 1)));
      succeeded = (CurArgNum_15 == Var_44);
    }
    if (succeeded)
    {
      MR_Word LCMCNull_22;
      MR_Word MaybeNull_23;

      *STATE_VARIABLE_TakeAddr_31 = STATE_VARIABLE_TakeAddr_35_35;
      ll_backend__code_info__get_lcmc_null_2_p_0(CI_17, &LCMCNull_22);
      switch (LCMCNull_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeNull_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          {
            MaybeNull_23 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[1]);
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *CellArg_18 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MaybeNull_23));
      }
      *STATE_VARIABLE_MayUseAtomic_33 = (MR_Integer) 1;
    }
    else
    {
      MR_Word RHSInsts_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 1)));
      MR_Word RHSTopFunctorMode_26;
      MR_Word _LHSMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_14, (MR_Integer) 0)));

      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_21, RHSInsts_25, Type_20, &RHSTopFunctorMode_26);
      switch (RHSTopFunctorMode_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) Width_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Width_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_41;

                    {
                      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_12));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *CellArg_18 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_40;

                    {
                      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_12));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *CellArg_18 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_40));
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word Var_41;

                {
                  Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *CellArg_18 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *CellArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
      *STATE_VARIABLE_MayUseAtomic_33 = STATE_VARIABLE_MayUseAtomic_34_34;
      *STATE_VARIABLE_TakeAddr_31 = STATE_VARIABLE_TakeAddr_0_30;
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
          *Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CI_24 = STATE_VARIABLE_CI_0_23;
          *STATE_VARIABLE_CLD_26 = STATE_VARIABLE_CLD_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_36_36;
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
            BuiltinType_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), Type_18, (MR_Integer) 0)));
            switch (MR_tag((MR_Word) BuiltinType_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(BuiltinType_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Op_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
                    break;
                  case (MR_Integer) 1:
                    Op_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                    break;
                  case (MR_Integer) 2:
                    {
                      Op_20 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6]);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), BuiltinType_19, (MR_Integer) 0)));

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
            Op_20 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[6]);
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Op_20));
            MR_hl_field(MR_mktag(3), Var_31, 2) = ((MR_Box) (ValA_15));
            MR_hl_field(MR_mktag(3), Var_31, 3) = ((MR_Box) (ValB_17));
          }
          ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(Var_31, &FailCode_22, STATE_VARIABLE_CI_0_23, STATE_VARIABLE_CI_24, STATE_VARIABLE_CLD_28_28, STATE_VARIABLE_CLD_26);
          TypeCtorInfo_36_36 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          Var_34 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_36_36, CodeB_16, FailCode_22);
          *Code_10 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_36_36, CodeA_14, Var_34);
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

    *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_9, VarA_6);
    if (succeeded)
      ll_backend__code_loc_dep__assign_var_to_var_4_p_0(VarA_6, VarB_7, STATE_VARIABLE_CLD_0_9, STATE_VARIABLE_CLD_10);
    else
      *STATE_VARIABLE_CLD_10 = STATE_VARIABLE_CLD_0_9;
  }
}

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    ll_backend__unify_gen__pair_with_width_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), wrapper_arg_1, &conv3_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    ll_backend__unify_gen__pair_with_width_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), wrapper_arg_1, &conv1_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
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
    MR_Word conv0_LambdaHeadVar__2_22;

    conv0_LambdaHeadVar__2_22 = ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__239__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word TypeInfo_for_T_39,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word AllArgs_7,
  MR_Word * AllArgsWidths_8)
{
  {
    MR_bool succeeded;
    MR_Word ConsRepnDefn_9;

    succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_5, ConsId_6, &ConsRepnDefn_9);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0;
      MR_Word TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
      MR_Word ConsArgRepns_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 3)));
      MR_Word ArgWidths_11;
      MR_Integer NumAllArgs_13;
      MR_Integer NumConsArgs_14;
      MR_Integer NumExtraArgs_15;
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 0)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 1)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 2)));
      MR_Integer Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 4)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 5)));

      ArgWidths_11 = mercury__list__map_2_f_0(TypeCtorInfo_40_40, TypeCtorInfo_41_41, (MR_Word) &ll_backend__unify_gen_scalar_common_2[4], ConsArgRepns_10);
      mercury__list__length_2_p_0(TypeInfo_for_T_39, AllArgs_7, &NumAllArgs_13);
      mercury__list__length_2_p_0(TypeCtorInfo_40_40, ConsArgRepns_10, &NumConsArgs_14);
      NumExtraArgs_15 = (NumAllArgs_13 - NumConsArgs_14);
      succeeded = (NumExtraArgs_15 == (MR_Integer) 0);
      if (succeeded)
        mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_39, TypeCtorInfo_41_41, AllArgs_7, ArgWidths_11, AllArgsWidths_8);
      else
      {
        succeeded = (NumExtraArgs_15 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word TypeInfo_45_45;
          MR_Word ExtraArgs_16;
          MR_Word ConsArgs_17;
          MR_Word ConsArgsWidths_18;
          MR_Word ExtraArgsWidths_19;
          MR_Word Var_24;
          MR_Word conv2_AllArgsWidths_8;

          mercury__list__det_split_list_4_p_0(TypeInfo_for_T_39, NumExtraArgs_15, AllArgs_7, &ExtraArgs_16, &ConsArgs_17);
          mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_for_T_39, TypeCtorInfo_41_41, ConsArgs_17, ArgWidths_11, &ConsArgsWidths_18);
          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ll_backend__unify_gen__get_cons_arg_widths_4_p_0_2));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeInfo_for_T_39));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            TypeInfo_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_45_45, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
            MR_hl_field(MR_mktag(0), TypeInfo_45_45, 1) = ((MR_Box) (TypeInfo_for_T_39));
            MR_hl_field(MR_mktag(0), TypeInfo_45_45, 2) = ((MR_Box) (TypeCtorInfo_41_41));
          }
          mercury__list__map_3_p_0(TypeInfo_for_T_39, TypeInfo_45_45, Var_24, ExtraArgs_16, &ExtraArgsWidths_19);
          conv2_AllArgsWidths_8 = mercury__list__f_43_43_2_f_0(TypeInfo_45_45, (MR_Word) ExtraArgsWidths_19, (MR_Word) ConsArgsWidths_18);
          *AllArgsWidths_8 = (MR_Word) conv2_AllArgsWidths_8;
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
      MR_Word TypeInfo_50_50;
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ll_backend__unify_gen__get_cons_arg_widths_4_p_0_3));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (TypeInfo_for_T_39));
        MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_for_T_39));
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 2) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0));
      }
      mercury__list__map_3_p_0(TypeInfo_for_T_39, TypeInfo_50_50, Var_28, AllArgs_7, AllArgsWidths_8);
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

    succeeded = ll_backend__unify_gen____Unify____active_ground_term_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    ll_backend__unify_gen____Compare____active_ground_term_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = ll_backend__unify_gen____Unify____field_addr_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    ll_backend__unify_gen____Compare____field_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = ll_backend__unify_gen____Unify____field_and_arg_var_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    ll_backend__unify_gen____Compare____field_and_arg_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = ll_backend__unify_gen____Unify____test_sense_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    ll_backend__unify_gen____Compare____test_sense_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = ll_backend__unify_gen____Unify____uni_field_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    ll_backend__unify_gen____Compare____uni_field_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = ll_backend__unify_gen____Unify____uni_val_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    ll_backend__unify_gen____Compare____uni_val_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
