/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version rotd-2018-01-26
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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.stack_layout.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

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

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_0;

static const MR_EnumFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__enum_functor_desc_test_sense_0_1;

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_value_ordered_test_sense_0[2];

static const MR_EnumFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__enum_name_ordered_test_sense_0[2];

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_test_sense_0[2];

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0[1];

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0;

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[2];

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1;

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[1];

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0[2];

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_name_ordered_uni_val_0[2];

static const MR_Integer ll_backend__unify_gen__ll_backend__unify_gen__functor_number_map_uni_val_0[2];

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2316__1_2_p_0(
  MR_Integer Shift_12,
  MR_Integer HeadVar__2_41);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2098__1_2_p_0(
  MR_Word Lang_22,
  MR_Word HeadVar__2_121);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1921__1_2_p_0(
  MR_Word Lang_20,
  MR_Word HeadVar__2_74);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__652__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_153);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__680__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_130);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__707__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_110);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__715__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_103);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__569__1_2_p_0(
  MR_Word Lang_31,
  MR_Word HeadVar__2_203);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__690__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_120);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__730__1_2_p_0(
  MR_Word MaybeSize_22,
  MR_Word HeadVar__2_94);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__728__1_2_p_0(
  MR_Word TakeAddr_21,
  MR_Word HeadVar__2_89);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__662__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_142);

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__506__1_3_f_0(
  MR_Word Rval_4,
  MR_Word LambdaHeadVar__1_50,
  MR_Word LambdaHeadVar__2_51);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__437__1_2_p_0(
  MR_Word ForeignLang_12,
  MR_Word HeadVar__2_120);

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__232__1_1_f_0(
  MR_Word LambdaHeadVar__1_21);

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
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

static MR_Word MR_CALL 
ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(
  MR_Word CellArgA_4,
  MR_Word CellArgB_5);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_arg_5_p_0(
  MR_Word Var_6,
  MR_Word ConsArgWidth_7,
  MR_Word * TypedRval_8,
  MR_Word STATE_VARIABLE_ActiveMap_0_12,
  MR_Word * STATE_VARIABLE_ActiveMap_13);

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
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_53_93_95_48_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word UnboxedFloats_13,
  MR_Word UnboxedInt64s_14,
  MR_Word ConstStructMap_15,
  MR_Word ConsTag_17,
  MR_Word ConstArgs_18,
  MR_Word ConsArgWidths_19,
  MR_Word * TypedRval_20,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_72,
  MR_Word * STATE_VARIABLE_StaticCellInfo_73);

static void MR_CALL 
ll_backend__unify_gen__det_single_arg_width_2_p_0(
  MR_Word ArgWidths_3,
  MR_Word * ArgWidth_4);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UnboxedFloats_9,
  MR_Word UnboxedInt64s_10,
  MR_Word ConstStructMap_11,
  MR_Word ConstArg_12,
  MR_Word ArgWidth_13,
  MR_Word * TypedRval_14);

static MR_bool MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_52_93_95_48_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_52_93_95_48_7_p_0(
  MR_Word UnboxedFloats_9,
  MR_Word UnboxedInt64s_10,
  MR_Word ConsTag_12,
  MR_Word ArgWidth_13,
  MR_Word * TypedRval_14);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UnboxedFloats_9,
  MR_Word UnboxedInt64s_10,
  MR_Word ConstStructMap_11,
  MR_Word ConstArgs_12,
  MR_Word ArgWidths_13,
  MR_Word * TypedRvals_14);

static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
  MR_Word CellArg_6,
  MR_Integer ArgOffset_7,
  MR_Integer * NextOffset_8,
  MR_Word STATE_VARIABLE_RevFieldAddrs_0_16,
  MR_Word * STATE_VARIABLE_RevFieldAddrs_17);

static MR_Word MR_CALL 
ll_backend__unify_gen__condense_needs_updates_1_f_0(
  MR_Word NeedsUpdatess_3);

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
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(
  MR_Word Var_10,
  MR_Word ConsTag_11,
  MR_Word Args_12,
  MR_Word ConsArgWidths_13,
  MR_Word UnboxedFloats_14,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_68,
  MR_Word * STATE_VARIABLE_StaticCellInfo_69,
  MR_Word STATE_VARIABLE_ActiveMap_0_70,
  MR_Word * STATE_VARIABLE_ActiveMap_71);

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
ll_backend__unify_gen__generate_ground_term_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0(
  MR_Word Vars_6,
  MR_Word ConsArgWidths_7,
  MR_Word * TypedRvals_8,
  MR_Word STATE_VARIABLE_ActiveMap_0_10,
  MR_Word * STATE_VARIABLE_ActiveMap_11);

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
ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(
  MR_Word Var_11,
  MR_Word Tag_12,
  MR_Word Args_13,
  MR_Word Modes_14,
  MR_Word ArgWidths_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_27,
  MR_Word * STATE_VARIABLE_CI_28,
  MR_Word STATE_VARIABLE_CLD_0_29,
  MR_Word * STATE_VARIABLE_CLD_30);

static MR_Box MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
  MR_Word Rval_4,
  MR_Word ConsTag_5,
  MR_Word * TestRval_6);

static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_9_p_0(
  MR_Word Var_10,
  MR_Word Cons_11,
  MR_Word Args_12,
  MR_Word Modes_13,
  MR_Word ArgWidths_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word Var_11,
  MR_Word Args_13,
  MR_Word Modes_14,
  MR_Word ArgWidths_15,
  MR_Word Tag_16,
  MR_Word * Code_17,
  MR_Word CI_18,
  MR_Word STATE_VARIABLE_CLD_0_64,
  MR_Word * STATE_VARIABLE_CLD_65);

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
ll_backend__unify_gen__generate_unify_args_8_p_0(
  MR_Word Ls_9,
  MR_Word Rs_10,
  MR_Word Ms_11,
  MR_Word Ts_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_17,
  MR_Word * STATE_VARIABLE_CLD_18);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unify_args_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8);

static void MR_CALL 
ll_backend__unify_gen__make_fields_and_argvars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Rval_3,
  MR_Integer PrevOffset0_4,
  MR_Integer TagNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0(
  MR_Word LHSVar_15,
  MR_Word ConsId_16,
  MR_Word RHSVars_17,
  MR_Word ArgModes_18,
  MR_Word ArgWidths_19,
  MR_Word HowToConstruct_20,
  MR_Word TakeAddr_21,
  MR_Word MaybeSize_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30,
  MR_Word STATE_VARIABLE_CLD_0_31,
  MR_Word * STATE_VARIABLE_CLD_32);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_9(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0(
  MR_Word ConsTag_15,
  MR_Word LHSVar_16,
  MR_Word RHSVars_17,
  MR_Word ArgModes_18,
  MR_Word ArgWidths_19,
  MR_Word HowToConstruct0_20,
  MR_Word TakeAddr_21,
  MR_Word MaybeSize_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_81,
  MR_Word * STATE_VARIABLE_CI_82,
  MR_Word STATE_VARIABLE_CLD_0_83,
  MR_Word * STATE_VARIABLE_CLD_84);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Var_15,
  MR_Word Args_16,
  MR_Word GoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_99,
  MR_Word * STATE_VARIABLE_CI_100,
  MR_Word STATE_VARIABLE_CLD_0_101,
  MR_Word * STATE_VARIABLE_CLD_102);

static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
  MR_Word Context_7,
  MR_String VarTypeMsg_8,
  MR_Integer Size_9,
  MR_Word * MaybeAllocId_10,
  MR_Word STATE_VARIABLE_CI_0_15,
  MR_Word * STATE_VARIABLE_CI_16);

static MR_Word MR_CALL 
ll_backend__unify_gen__initial_may_use_atomic_1_f_0(
  MR_Word ModuleInfo_3);

static void MR_CALL 
ll_backend__unify_gen__generate_pred_args_8_p_0(
  MR_Word CI_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_7,
  MR_Word * STATE_VARIABLE_MayUseAtomic_8);

static void MR_CALL 
ll_backend__unify_gen__generate_extra_closure_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LoopCounter_2,
  MR_Word NewClosure_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

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
ll_backend__unify_gen__generate_sub_unify_8_p_0(
  MR_Word L_9,
  MR_Word R_10,
  MR_Word ArgMode_11,
  MR_Word Type_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22);

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_6_p_0(
  MR_Word Left_7,
  MR_Word Right_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41);

static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Integer Shift_5);

static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Integer Shift_5);

static MR_bool MR_CALL 
ll_backend__unify_gen__field_offset_pair_3_p_0(
  MR_Word LvalA_4,
  MR_Word * LvalA_2,
  MR_Word * LvalB_5);

static void MR_CALL 
ll_backend__unify_gen__var_types_3_p_0(
  MR_Word CI_4,
  MR_Word Vars_5,
  MR_Word * Types_6);

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
  MR_Word STATE_VARIABLE_CI_0_35,
  MR_Word * STATE_VARIABLE_CI_36,
  MR_Word STATE_VARIABLE_CLD_0_37,
  MR_Word * STATE_VARIABLE_CLD_38);

static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CellVar_2,
  MR_Integer CellPtag_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6);

static MR_Box MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
  MR_Word ArgWidths_4,
  MR_Word STATE_VARIABLE_HowToConstruct_0_14,
  MR_Word * STATE_VARIABLE_HowToConstruct_15);

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
ll_backend__unify_gen__generate_cons_args_8_p_0(
  MR_Word Vars_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word Widths_12,
  MR_Word TakeAddr_13,
  MR_Word CI_14,
  MR_Word * STATE_VARIABLE_Args_19,
  MR_Word * STATE_VARIABLE_MayUseAtomic_20);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_9,
  MR_Word * STATE_VARIABLE_MayUseAtomic_10);

static MR_Word MR_CALL 
ll_backend__unify_gen__generate_reserved_address_1_f_0(
  MR_Word HeadVar__1_1);

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

static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word Args_7,
  MR_Word * AllArgWidths_8);

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
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
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


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[20][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[10][3];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[7][5];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[7][1];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[1][12];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[2][8];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][7];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[3][6];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[2][11];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[1][10];




static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[20][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[0]))
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
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[0])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[2])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[5])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[6]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[10][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[0])),
    ((MR_Box) (ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1])),
    ((MR_Box) (ll_backend__unify_gen__pack_how_to_construct_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_6[0])),
    ((MR_Box) (ll_backend__unify_gen__construct_cell_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[0])),
    ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[1])),
    ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_6[1])),
    ((MR_Box) (ll_backend__unify_gen__generate_ground_term_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[0])),
    ((MR_Box) (ll_backend__unify_gen__pack_ground_term_args_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])))
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
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "build new closure from old closure"))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[1][12] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[2][8] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[3][6] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[2][11] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_int64s_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0
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

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0 = {
  (MR_String) "ref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
};

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1 = {
  (MR_String) "lval",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_0
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_1[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1
};

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_uni_val_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2316__1_2_p_0(
  MR_Integer Shift_12,
  MR_Integer HeadVar__2_41)
{
  {
    MR_bool succeeded = (Shift_12 == HeadVar__2_41);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2098__1_2_p_0(
  MR_Word Lang_22,
  MR_Word HeadVar__2_121)
{
  {
    MR_bool succeeded = (Lang_22 == HeadVar__2_121);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1921__1_2_p_0(
  MR_Word Lang_20,
  MR_Word HeadVar__2_74)
{
  {
    MR_bool succeeded = (Lang_20 == HeadVar__2_74);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__652__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_153)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_153)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__680__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_130)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_130)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__707__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_110)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_110)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__715__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_103)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_103)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__569__1_2_p_0(
  MR_Word Lang_31,
  MR_Word HeadVar__2_203)
{
  {
    MR_bool succeeded = (Lang_31 == HeadVar__2_203);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__690__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_120)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_120)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__730__1_2_p_0(
  MR_Word MaybeSize_22,
  MR_Word HeadVar__2_94)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[3], ((MR_Box) (MaybeSize_22)), ((MR_Box) (HeadVar__2_94)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__728__1_2_p_0(
  MR_Word TakeAddr_21,
  MR_Word HeadVar__2_89)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[2], ((MR_Box) (TakeAddr_21)), ((MR_Box) (HeadVar__2_89)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__662__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_142)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_142)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__506__1_3_f_0(
  MR_Word Rval_4,
  MR_Word LambdaHeadVar__1_50,
  MR_Word LambdaHeadVar__2_51)
{
  {
    MR_Word LambdaHeadVar__3_52;
    MR_Word EqualRA_48;
    MR_Word Var_53;
    MR_Word Var_55;

    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (LambdaHeadVar__1_50));
    }
    ll_backend__unify_gen__raw_tag_test_3_p_0(Rval_4, Var_53, &EqualRA_48);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(3), Var_55, 2) = ((MR_Box) (EqualRA_48));
    }
    {
      LambdaHeadVar__3_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__3_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__3_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__3_52, 2) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__3_52, 3) = ((MR_Box) (LambdaHeadVar__2_51));
    }
    return LambdaHeadVar__3_52;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__437__1_2_p_0(
  MR_Word ForeignLang_12,
  MR_Word HeadVar__2_120)
{
  {
    MR_bool succeeded = (ForeignLang_12 == HeadVar__2_120);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__232__1_1_f_0(
  MR_Word LambdaHeadVar__1_21)
{
  {
    MR_Word LambdaHeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 2)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 0)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 1)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_21, (MR_Integer) 3)));

    return LambdaHeadVar__2_22;
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
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_16;

        ll_backend__llds____Compare____lval_0_0(&Var_16, Var_23, ArgY1_13);
        succeeded = (Var_16 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_16;
        else
          parse_tree__prog_data____Compare____arg_width_0_0(HeadVar__1_1, Var_22, ArgY2_15);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ArgX2_7, ArgY2_8);
      }
    }
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_13_13 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
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

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[2], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[2], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
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
      MR_Word Var_36;
      MR_Word Var_37;

      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Shift_10));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 2) = ((MR_Box) (RvalA_15));
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 3) = ((MR_Box) (Var_36));
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
          MR_hl_field(MR_mktag(3), FinalRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13])));
          MR_hl_field(MR_mktag(3), FinalRval_20, 2) = ((MR_Box) (ShiftRvalA_17));
          MR_hl_field(MR_mktag(3), FinalRval_20, 3) = ((MR_Box) (RvalB_18));
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_rval_type\'/8", (MR_String) "mismatched llds_types");
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2316__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
                      MR_Word Var_49;

                      ll_backend__code_loc_dep__produce_variable_6_p_0(Var_19, &VarCode_22, &VarRval_23, CI_10, STATE_VARIABLE_CLD_0_32, STATE_VARIABLE_CLD_33);
                      succeeded = (Shift_12 == (MR_Integer) 0);
                      if (succeeded)
                        Var_49 = VarRval_23;
                      else
                      {
                        MR_Word Var_73;
                        MR_Word Var_74;

                        {
                          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Shift_12));
                        }
                        {
                          Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
                        }
                        {
                          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
                          MR_hl_field(MR_mktag(3), Var_49, 2) = ((MR_Box) (VarRval_23));
                          MR_hl_field(MR_mktag(3), Var_49, 3) = ((MR_Box) (Var_73));
                        }
                      }
                      {
                        ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ShiftCellArgA_21, 0) = ((MR_Box) (Var_49));
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
              MR_Word Var_51;

              succeeded = ((((MR_tag((MR_Word) RvalA_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_17, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0)));
              }
              if (succeeded)
              {
                MR_Integer NewInt_25;
                MR_Word Var_52;
                MR_Word Var_53;

                succeeded = (Shift_12 == (MR_Integer) 0);
                if (succeeded)
                  NewInt_25 = Int_24;
                else
                  NewInt_25 = mercury__int__f_60_60_2_f_0(Int_24, Shift_12);
                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (NewInt_25));
                }
                {
                  Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
                }
                {
                  ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ShiftCellArgA_21, 0) = ((MR_Box) (Var_52));
                  MR_hl_field(MR_mktag(1), ShiftCellArgA_21, 1) = ((MR_Box) (Completeness_18));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "non-var or int argument");
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
            MR_Word Var_37;
            MR_Word RvalA_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), CellArgA_11, (MR_Integer) 0)));
            MR_Word Var_59;

            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[6]));
              MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ll_backend__unify_gen__shift_combine_arg_9_p_0_1));
              MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Shift_12));
              MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_4_p_0(Var_37, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "double word rval cannot be shifted");
            succeeded = ((MR_tag((MR_Word) RvalA_62)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), RvalA_62, (MR_Integer) 0)));
              {
                MR_Word VarCode_57;
                MR_Word VarRval_58;

                ll_backend__code_loc_dep__produce_variable_6_p_0(Var_59, &VarCode_57, &VarRval_58, CI_10, STATE_VARIABLE_CLD_0_32, STATE_VARIABLE_CLD_33);
                {
                  ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ShiftCellArgA_21, 0) = ((MR_Box) (VarRval_58));
                }
                *STATE_VARIABLE_Code_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, STATE_VARIABLE_Code_0_30, VarCode_57);
              }
            }
            else
            {
              MR_Word Var_44;
              MR_Float Var_26;

              succeeded = ((((MR_tag((MR_Word) RvalA_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RvalA_62, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), RvalA_62, (MR_Integer) 1)));
                succeeded = ((((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                  Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 1)));
              }
              if (succeeded)
                ShiftCellArgA_21 = CellArgA_11;
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "non-var or float argument");
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
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "cell_arg_take_addr");
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

        *FinalCellArg_14 = ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(ShiftCellArgA_21, CellArgB_29);
      }
    }
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(
  MR_Word CellArgA_4,
  MR_Word CellArgB_5)
{
  {
    MR_bool succeeded;
    MR_Word CellArg_6;
    MR_Word CellArgPrime_7;

    if ((CellArgA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((CellArgB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) CellArgB_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word Rval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgB_5, (MR_Integer) 0)));
        MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgB_5, (MR_Integer) 1)));

        {
          CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CellArgPrime_7, 0) = ((MR_Box) (Rval_27));
          MR_hl_field(MR_mktag(1), CellArgPrime_7, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    else
    if (((MR_tag((MR_Word) CellArgA_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgA_4, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgA_4, (MR_Integer) 0)));

      if ((CellArgB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CellArgPrime_7, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), CellArgPrime_7, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) CellArgB_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word RvalB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgB_5, (MR_Integer) 0)));
        MR_Word CompletenessB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), CellArgB_5, (MR_Integer) 1)));
        MR_Word Expr_18;
        MR_Word Completeness_19;

        {
          Expr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Expr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Expr_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13])));
          MR_hl_field(MR_mktag(3), Expr_18, 2) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(3), Expr_18, 3) = ((MR_Box) (RvalB_16));
        }
        switch (Var_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (CompletenessB_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Completeness_19 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                Completeness_19 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (CompletenessB_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Completeness_19 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                Completeness_19 = (MR_Integer) 1;
                break;
            }
            break;
        }
        {
          CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CellArgPrime_7, 0) = ((MR_Box) (Expr_18));
          MR_hl_field(MR_mktag(1), CellArgPrime_7, 1) = ((MR_Box) (Completeness_19));
        }
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      CellArg_6 = CellArgPrime_7;
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "function \140ll_backend.unify_gen.bitwise_or_cell_arg\'/2", (MR_String) "invalid combination");
    }
    return CellArg_6;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_arg_5_p_0(
  MR_Word Var_6,
  MR_Word ConsArgWidth_7,
  MR_Word * TypedRval_8,
  MR_Word STATE_VARIABLE_ActiveMap_0_12,
  MR_Word * STATE_VARIABLE_ActiveMap_13)
{
  {
    MR_bool succeeded;
    MR_Word TypedRval0_10;
    MR_Box conv0_TypedRval0_10;
    MR_Word Rval_11;
    MR_Word Var_15;

    mercury__map__det_remove_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_6)), &conv0_TypedRval0_10, STATE_VARIABLE_ActiveMap_0_12, STATE_VARIABLE_ActiveMap_13);
    TypedRval0_10 = ((MR_Word) conv0_TypedRval0_10);
    succeeded = (ConsArgWidth_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    if (succeeded)
    {
      Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedRval0_10, (MR_Integer) 0)));
      Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypedRval0_10, (MR_Integer) 1)));
      succeeded = (Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *TypedRval_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      }
    }
    else
      *TypedRval_8 = TypedRval0_10;
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
    MR_Word ConsArgWidths_21;
    MR_Word Rval_22;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 2)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstStruct_13, (MR_Integer) 3)));

    ConsTag_20 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_9, ConsId_16);
    ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ModuleInfo_9, ConsId_16, ConstArgs_17, &ConsArgWidths_21);
    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_53_93_95_48_11_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_23, ConsTag_20, ConstArgs_17, ConsArgWidths_21, &Rval_22, STATE_VARIABLE_StaticCellInfo_0_25, STATE_VARIABLE_StaticCellInfo_26);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstNum_12, ((MR_Box) (Rval_22)), STATE_VARIABLE_ConstStructMap_0_23, STATE_VARIABLE_ConstStructMap_24);
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_53_93_95_48_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word UnboxedFloats_13,
  MR_Word UnboxedInt64s_14,
  MR_Word ConstStructMap_15,
  MR_Word ConsTag_17,
  MR_Word ConstArgs_18,
  MR_Word ConsArgWidths_19,
  MR_Word * TypedRval_20,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_72,
  MR_Word * STATE_VARIABLE_StaticCellInfo_73)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypedRvals_37;
              MR_Word PackArgTypedRvals_38;
              MR_Word DataAddr_39;
              MR_Word CellPtrConst_41;
              MR_Word Var_85;
              MR_Word Rval_109;

              ll_backend__unify_gen__generate_const_struct_args_7_p_0(ModuleInfo_12, UnboxedFloats_13, UnboxedInt64s_14, ConstStructMap_15, ConstArgs_18, ConsArgWidths_19, &ArgTypedRvals_37);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_19, ArgTypedRvals_37, &PackArgTypedRvals_38);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_38, &DataAddr_39, STATE_VARIABLE_StaticCellInfo_0_72, STATE_VARIABLE_StaticCellInfo_73);
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (DataAddr_39));
                MR_hl_field(MR_mktag(3), Var_85, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_41, 1) = ((MR_Box) (Var_85));
              }
              {
                Rval_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_109, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Rval_109, 1) = ((MR_Box) (CellPtrConst_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_109));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              if ((ConstArgs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/11", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_18, (MR_Integer) 1)));
                MR_Word Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_18, (MR_Integer) 0)));

                if ((Var_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ConsArgWidth_25;

                  ll_backend__unify_gen__det_single_arg_width_2_p_0(ConsArgWidths_19, &ConsArgWidth_25);
                  ll_backend__unify_gen__generate_const_struct_arg_7_p_0(ModuleInfo_12, UnboxedFloats_13, UnboxedInt64s_14, ConstStructMap_15, Var_141, ConsArgWidth_25, TypedRval_20);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/11", (MR_String) "no_tag arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_73 = STATE_VARIABLE_StaticCellInfo_0_72;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/11", (MR_String) "unexpected tag");
            return;
          }
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
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/11", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgTypedRvals_129;
              MR_Word PackArgTypedRvals_130;
              MR_Word DataAddr_131;
              MR_Word CellPtrConst_133;
              MR_Word Var_134;
              MR_Integer Ptag_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
              MR_Word Rval_137;

              ll_backend__unify_gen__generate_const_struct_args_7_p_0(ModuleInfo_12, UnboxedFloats_13, UnboxedInt64s_14, ConstStructMap_15, ConstArgs_18, ConsArgWidths_19, &ArgTypedRvals_129);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_19, ArgTypedRvals_129, &PackArgTypedRvals_130);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_130, &DataAddr_131, STATE_VARIABLE_StaticCellInfo_0_72, STATE_VARIABLE_StaticCellInfo_73);
              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (DataAddr_131));
                MR_hl_field(MR_mktag(3), Var_134, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_133, 1) = ((MR_Box) (Var_134));
              }
              {
                Rval_137 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_137, 0) = ((MR_Box) (Ptag_136));
                MR_hl_field(MR_mktag(2), Rval_137, 1) = ((MR_Box) (CellPtrConst_133));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_137));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));

              if ((ConstArgs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/11", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_18, (MR_Integer) 1)));
                MR_Word Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_18, (MR_Integer) 0)));

                if ((Var_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ArgRval_31;
                  MR_Word Rval_33;
                  MR_Word ConsArgWidth_100;
                  MR_Word ArgTypedRval_101;
                  MR_Word _RvalType_32;

                  ll_backend__unify_gen__det_single_arg_width_2_p_0(ConsArgWidths_19, &ConsArgWidth_100);
                  ll_backend__unify_gen__generate_const_struct_arg_7_p_0(ModuleInfo_12, UnboxedFloats_13, UnboxedInt64s_14, ConstStructMap_15, Var_139, ConsArgWidth_100, &ArgTypedRval_101);
                  ArgRval_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypedRval_101, (MR_Integer) 0)));
                  _RvalType_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypedRval_101, (MR_Integer) 1)));
                  {
                    Rval_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Rval_33, 0) = ((MR_Box) (Ptag_30));
                    MR_hl_field(MR_mktag(2), Rval_33, 1) = ((MR_Box) (ArgRval_31));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *TypedRval_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_33));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                  }
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/11", (MR_String) "direct_arg_tag: arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_73 = STATE_VARIABLE_StaticCellInfo_0_72;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Stag_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2)));
              MR_Word StagTypedRval_43;
              MR_Word AllTypedRvals_44;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_82;
              MR_Integer Ptag_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
              MR_Word Rval_111;
              MR_Word ArgTypedRvals_112;
              MR_Word PackArgTypedRvals_113;
              MR_Word DataAddr_114;
              MR_Word CellPtrConst_116;

              ll_backend__unify_gen__generate_const_struct_args_7_p_0(ModuleInfo_12, UnboxedFloats_13, UnboxedInt64s_14, ConstStructMap_15, ConstArgs_18, ConsArgWidths_19, &ArgTypedRvals_112);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_19, ArgTypedRvals_112, &PackArgTypedRvals_113);
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Stag_42));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
              }
              {
                StagTypedRval_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagTypedRval_43, 0) = ((MR_Box) (Var_77));
                MR_hl_field(MR_mktag(0), StagTypedRval_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3])));
              }
              {
                AllTypedRvals_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllTypedRvals_44, 0) = ((MR_Box) (StagTypedRval_43));
                MR_hl_field(MR_mktag(1), AllTypedRvals_44, 1) = ((MR_Box) (PackArgTypedRvals_113));
              }
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_44, &DataAddr_114, STATE_VARIABLE_StaticCellInfo_0_72, STATE_VARIABLE_StaticCellInfo_73);
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (DataAddr_114));
                MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_116, 1) = ((MR_Box) (Var_82));
              }
              {
                Rval_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_111, 0) = ((MR_Box) (Ptag_110));
                MR_hl_field(MR_mktag(2), Rval_111, 1) = ((MR_Box) (CellPtrConst_116));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_111));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ActualConsTag_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2)));
              MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_17 = ActualConsTag_23;

              // direct tailcall eliminated
              ConsTag_17 = next_value_of_ConsTag_17;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__det_single_arg_width_2_p_0(
  MR_Word ArgWidths_3,
  MR_Word * ArgWidth_4)
{
  if ((ArgWidths_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
      return;
    }
  }
  else
  {
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_3, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_3, (MR_Integer) 0)));

    if ((Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ArgWidth_4 = Var_20;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
        return;
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UnboxedFloats_9,
  MR_Word UnboxedInt64s_10,
  MR_Word ConstStructMap_11,
  MR_Word ConstArg_12,
  MR_Word ArgWidth_13,
  MR_Word * TypedRval_14)
{
  if (((MR_tag((MR_Word) ConstArg_12)) == (MR_mktag((MR_Integer) 0))))
  {
    MR_Integer ConstNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConstArg_12, (MR_Integer) 0)));
    MR_Box conv0_TypedRval_14;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_11, ConstNum_15, &conv0_TypedRval_14);
    *TypedRval_14 = ((MR_Word) conv0_TypedRval_14);
  }
  else
  {
    MR_Word ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_12, (MR_Integer) 0)));
    MR_Word ConsTag_18;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArg_12, (MR_Integer) 1)));

    ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_8, ConsId_16);
    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_52_93_95_48_7_p_0(UnboxedFloats_9, UnboxedInt64s_10, ConsTag_18, ArgWidth_13, TypedRval_14);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_52_93_95_48_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1921__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_52_93_95_48_7_p_0(
  MR_Word UnboxedFloats_9,
  MR_Word UnboxedInt64s_10,
  MR_Word ConsTag_12,
  MR_Word ArgWidth_13,
  MR_Word * TypedRval_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/7", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_12, (MR_Integer) 0)));
          MR_Word Const_94;
          MR_Word Var_96;

          {
            Const_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_94, 1) = ((MR_Box) (String_15));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (Const_94));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Const_16;
          MR_Word Type_17;
          MR_Float Float_22 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_12, (MR_Integer) 0)));
          MR_Word Var_78;

          {
            Const_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_16, 1) = MR_box_float(Float_22);
          }
          switch (UnboxedFloats_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                succeeded = (ArgWidth_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                if (succeeded)
                  Type_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                else
                  Type_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              }
              break;
            case (MR_Integer) 0:
              Type_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              break;
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Const_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *TypedRval_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_17));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 1)));
              MR_Word IntType_19;
              MR_Word Const_91;
              MR_Word Type_92;
              MR_Word Var_93;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_18, &Const_91, &IntType_19);
              switch (IntType_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 4:
                case (MR_Integer) 6:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                case (MR_Integer) 5:
                case (MR_Integer) 7:
                case (MR_Integer) 3:
                  {
                    Type_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Type_92, 0) = ((MR_Box) (IntType_19));
                  }
                  break;
                case (MR_Integer) 8:
                case (MR_Integer) 9:
                  switch (UnboxedInt64s_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Type_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
                      break;
                    case (MR_Integer) 0:
                      {
                        Type_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Type_92, 0) = ((MR_Box) (IntType_19));
                      }
                      break;
                  }
                  break;
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Const_91));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_92));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 1)));
              MR_String Val_21 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 2)));
              MR_Word Var_70;
              MR_Word Const_88;
              MR_Word Type_89;
              MR_Word Var_90;

              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_52_93_95_48_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (Lang_20));
                MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_70, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/7", (MR_String) "foreign_tag for language other than C");
              Type_89 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3]);
              {
                Const_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_88, 1) = ((MR_Box) (Val_21));
                MR_hl_field(MR_mktag(3), Const_88, 2) = ((MR_Box) (Type_89));
              }
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Const_88));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_90));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_89));
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
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/7", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 1)));
              MR_String TypeName_30 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 2)));
              MR_Integer TypeArity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 3)));
              MR_Word RttiTypeCtor_32;
              MR_Word DataId_33;
              MR_Word Var_61;
              MR_Word Var_63;
              MR_Word Rval_82;

              {
                RttiTypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_32, 0) = ((MR_Box) (ModuleName_29));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_32, 1) = ((MR_Box) (TypeName_30));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_32, 2) = ((MR_Box) (TypeArity_31));
              }
              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (RttiTypeCtor_32));
                MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
              }
              {
                DataId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_33, 0) = ((MR_Box) (Var_61));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (DataId_33));
                MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Rval_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_82, 1) = ((MR_Box) (Var_63));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_82));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 2)));
              MR_String Instance_35 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 3)));
              MR_Word TCName_36;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Rval_84;
              MR_Word ModuleName_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 1)));
              MR_Word DataId_86;

              TCName_36 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_34);
              {
                Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ModuleName_85));
                MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Instance_35));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (TCName_36));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
              }
              {
                DataId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_86, 0) = ((MR_Box) (Var_57));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (DataId_86));
                MR_hl_field(MR_mktag(3), Var_59, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Rval_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Rval_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Rval_84, 1) = ((MR_Box) (Var_59));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_84));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 1)));
              MR_Integer Stag_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 2)));
              MR_Word Rval_25;
              MR_Word Var_65;
              MR_Word Var_67;
              MR_Word Var_68;

              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Stag_24));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_65, 2) = ((MR_Box) (Var_67));
              }
              {
                Rval_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_25, 0) = ((MR_Box) (Ptag_23));
                MR_hl_field(MR_mktag(2), Rval_25, 1) = ((MR_Box) (Var_65));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_25));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word RA_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 1)));
              MR_Word Type_79;
              MR_Word Rval_80;

              Rval_80 = ll_backend__unify_gen__generate_reserved_address_1_f_0(RA_26);
              ll_backend__llds__rval_type_2_p_0(Rval_80, &Type_79);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *TypedRval_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_80));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_79));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ActualConsTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 2)));
              MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_12, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_12 = ActualConsTag_28;

              // direct tailcall eliminated
              ConsTag_12 = next_value_of_ConsTag_12;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TypedRval_14;

    ll_backend__unify_gen__generate_const_struct_arg_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_TypedRval_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_TypedRval_14));
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word UnboxedFloats_9,
  MR_Word UnboxedInt64s_10,
  MR_Word ConstStructMap_11,
  MR_Word ConstArgs_12,
  MR_Word ArgWidths_13,
  MR_Word * TypedRvals_14)
{
  {
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_struct_args_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (UnboxedFloats_9));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (UnboxedInt64s_10));
      MR_hl_field(MR_mktag(0), Var_15, 6) = ((MR_Box) (ConstStructMap_11));
    }
    mercury__list__map_corresponding_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, Var_15, ConstArgs_12, ArgWidths_13, TypedRvals_14);
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

static MR_Word MR_CALL 
ll_backend__unify_gen__condense_needs_updates_1_f_0(
  MR_Word NeedsUpdatess_3)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0, ((MR_Box) ((MR_Integer) 0)), NeedsUpdatess_3);
    if (succeeded)
      HeadVar__2_2 = (MR_Integer) 0;
    else
      HeadVar__2_2 = (MR_Integer) 1;
    return HeadVar__2_2;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 258, &OptUnboxedFloats_9);
    switch (OptUnboxedFloats_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedFloats_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxedFloats_10 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 259, &OptUnboxedInt64s_11);
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
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[1]));
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
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonLocalList_14, (MR_Integer) 1)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), NonLocalList_14, (MR_Integer) 0)));

      if ((Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ((MR_Box) (Var_60)), ((MR_Box) (TermVar_7)));
        if (succeeded)
        {
          MR_Word Conjuncts_16;
          MR_Word Var_40;

          succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1)));
            Conjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2)));
            succeeded = (Var_40 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_56_56;
            MR_Word TypeCtorInfo_57_57;
            MR_Word ModuleInfo_17;
            MR_Word ExprnOpts_18;
            MR_Word UnboxedFloats_19;
            MR_Word StaticCellInfo0_20;
            MR_Word ActiveMap0_21;
            MR_Word StaticCellInfo_22;
            MR_Word ActiveMap_23;
            MR_Word ActivePairs_24;
            MR_Word GroundTerm_25;
            MR_Word TypeInfo_62_62;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_58;

            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_31, &ModuleInfo_17);
            ll_backend__code_info__get_exprn_opts_2_p_0(STATE_VARIABLE_CI_0_31, &ExprnOpts_18);
            UnboxedFloats_19 = ll_backend__llds__get_unboxed_floats_1_f_0(ExprnOpts_18);
            ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_0_31, &StaticCellInfo0_20);
            TypeInfo_56_56 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
            TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
            mercury__map__init_1_p_0(TypeInfo_56_56, TypeCtorInfo_57_57, &ActiveMap0_21);
            ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(ModuleInfo_17, Conjuncts_16, UnboxedFloats_19, StaticCellInfo0_20, &StaticCellInfo_22, ActiveMap0_21, &ActiveMap_23);
            mercury__map__to_assoc_list_2_p_0(TypeInfo_56_56, TypeCtorInfo_57_57, ActiveMap_23, &ActivePairs_24);
            succeeded = ((MR_tag((MR_Word) ActivePairs_24)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ActivePairs_24, (MR_Integer) 0)));
              Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ActivePairs_24, (MR_Integer) 1)));
              Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0)));
              GroundTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1)));
              TypeInfo_62_62 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_62, ((MR_Box) (TermVar_7)), ((MR_Box) (Var_58)));
              if (succeeded)
                succeeded = (Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Rval_26;
              MR_Word STATE_VARIABLE_CLD_43_43;
              MR_Word Var_27;

              ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(NonLocals_13, STATE_VARIABLE_CLD_0_33, &STATE_VARIABLE_CLD_43_43);
              ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_22, STATE_VARIABLE_CI_0_31, STATE_VARIABLE_CI_32);
              Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_25, (MR_Integer) 0)));
              Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), GroundTerm_25, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(TermVar_7, Rval_26, *STATE_VARIABLE_CI_32, STATE_VARIABLE_CLD_43_43, STATE_VARIABLE_CLD_34);
            }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "no active pairs");
                return;
              }
            }
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "malformed goal");
              return;
            }
          }
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "unexpected nonlocal");
            return;
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term\'/6", (MR_String) "unexpected nonlocals");
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
      MR_Word Args_48;
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
          Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unify_44, (MR_Integer) 2)));
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
        MR_Word ConsArgWidths_54;

        ConsTag_53 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(HeadVar__1_1, ConsId_47);
        ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], HeadVar__1_1, ConsId_47, Args_48, &ConsArgWidths_54);
        ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(Var_46, ConsTag_53, Args_48, ConsArgWidths_54, HeadVar__3_3, STATE_VARIABLE_StaticCellInfo_0_4, &STATE_VARIABLE_StaticCellInfo_26_26, STATE_VARIABLE_ActiveMap_0_6, &STATE_VARIABLE_ActiveMap_27_27);
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct\'/7", (MR_String) "malformed goal");
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
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2098__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(
  MR_Word Var_10,
  MR_Word ConsTag_11,
  MR_Word Args_12,
  MR_Word ConsArgWidths_13,
  MR_Word UnboxedFloats_14,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_68,
  MR_Word * STATE_VARIABLE_StaticCellInfo_69,
  MR_Word STATE_VARIABLE_ActiveMap_0_70,
  MR_Word * STATE_VARIABLE_ActiveMap_71)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypedRvals_37;
              MR_Word PackArgTypedRvals_38;
              MR_Word DataAddr_39;
              MR_Word CellPtrConst_41;
              MR_Word STATE_VARIABLE_ActiveMap_93_93;
              MR_Word Var_95;
              MR_Word ActiveGroundTerm_133;
              MR_Word Rval_135;

              ll_backend__unify_gen__generate_ground_term_args_5_p_0(Args_12, ConsArgWidths_13, &ArgTypedRvals_37, STATE_VARIABLE_ActiveMap_0_70, &STATE_VARIABLE_ActiveMap_93_93);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_13, ArgTypedRvals_37, &PackArgTypedRvals_38);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_38, &DataAddr_39, STATE_VARIABLE_StaticCellInfo_0_68, STATE_VARIABLE_StaticCellInfo_69);
              {
                Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (DataAddr_39));
                MR_hl_field(MR_mktag(3), Var_95, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_41, 1) = ((MR_Box) (Var_95));
              }
              {
                Rval_135 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_135, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Rval_135, 1) = ((MR_Box) (CellPtrConst_41));
              }
              {
                ActiveGroundTerm_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_133, 0) = ((MR_Box) (Rval_135));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_133)), STATE_VARIABLE_ActiveMap_93_93, STATE_VARIABLE_ActiveMap_71);
            }
            break;
          case (MR_Integer) 1:
            {
              if ((Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1)));
                MR_Word Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0)));

                if ((Var_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word TypeInfo_162_162 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                  MR_Word TypeCtorInfo_163_163 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                  MR_Word STATE_VARIABLE_ActiveMap_103_103;
                  MR_Word RvalType_130;
                  MR_Box conv1_RvalType_130;

                  mercury__map__det_remove_4_p_0(TypeInfo_162_162, TypeCtorInfo_163_163, ((MR_Box) (Var_210)), &conv1_RvalType_130, STATE_VARIABLE_ActiveMap_0_70, &STATE_VARIABLE_ActiveMap_103_103);
                  RvalType_130 = ((MR_Word) conv1_RvalType_130);
                  mercury__map__det_insert_4_p_0(TypeInfo_162_162, TypeCtorInfo_163_163, ((MR_Box) (Var_10)), ((MR_Box) (RvalType_130)), STATE_VARIABLE_ActiveMap_103_103, STATE_VARIABLE_ActiveMap_71);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_69 = STATE_VARIABLE_StaticCellInfo_0_68;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_11, (MR_Integer) 0)));
          MR_Word Const_188;
          MR_Word ActiveGroundTerm_190;
          MR_Word Var_191;

          {
            Const_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_188, 1) = ((MR_Box) (String_17));
          }
          {
            Var_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_191, 1) = ((MR_Box) (Const_188));
          }
          {
            ActiveGroundTerm_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_190, 0) = ((MR_Box) (Var_191));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_190)), STATE_VARIABLE_ActiveMap_0_70, STATE_VARIABLE_ActiveMap_71);
          *STATE_VARIABLE_StaticCellInfo_69 = STATE_VARIABLE_StaticCellInfo_0_68;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Const_18;
          MR_Word Type_19;
          MR_Float Float_24 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_11, (MR_Integer) 0)));
          MR_Word ActiveGroundTerm_25;
          MR_Word Var_125;

          {
            Const_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_18, 1) = MR_box_float(Float_24);
          }
          switch (UnboxedFloats_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Type_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              break;
            case (MR_Integer) 0:
              Type_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              break;
          }
          {
            Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Const_18));
          }
          {
            ActiveGroundTerm_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_25, 0) = ((MR_Box) (Var_125));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_25, 1) = ((MR_Box) (Type_19));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_25)), STATE_VARIABLE_ActiveMap_0_70, STATE_VARIABLE_ActiveMap_71);
          *STATE_VARIABLE_StaticCellInfo_69 = STATE_VARIABLE_StaticCellInfo_0_68;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Word IntType_21;
              MR_Word Const_182;
              MR_Word Type_183;
              MR_Word ActiveGroundTerm_184;
              MR_Word Var_185;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_20, &Const_182, &IntType_21);
              {
                Type_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Type_183, 0) = ((MR_Box) (IntType_21));
              }
              {
                Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_185, 1) = ((MR_Box) (Const_182));
              }
              {
                ActiveGroundTerm_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_184, 0) = ((MR_Box) (Var_185));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_184, 1) = ((MR_Box) (Type_183));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_184)), STATE_VARIABLE_ActiveMap_0_70, STATE_VARIABLE_ActiveMap_71);
              *STATE_VARIABLE_StaticCellInfo_69 = STATE_VARIABLE_StaticCellInfo_0_68;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_String Val_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2)));
              MR_Word Var_117;
              MR_Word Const_176;
              MR_Word Type_177;
              MR_Word ActiveGroundTerm_178;
              MR_Word Var_179;

              {
                Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1));
                MR_hl_field(MR_mktag(0), Var_117, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_117, 3) = ((MR_Box) (Lang_22));
                MR_hl_field(MR_mktag(0), Var_117, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_117, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "foreign_tag for language other than C");
              Type_177 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3]);
              {
                Const_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_176, 1) = ((MR_Box) (Val_23));
                MR_hl_field(MR_mktag(3), Const_176, 2) = ((MR_Box) (Type_177));
              }
              {
                Var_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_179, 1) = ((MR_Box) (Const_176));
              }
              {
                ActiveGroundTerm_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_178, 0) = ((MR_Box) (Var_179));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_178, 1) = ((MR_Box) (Type_177));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_178)), STATE_VARIABLE_ActiveMap_0_70, STATE_VARIABLE_ActiveMap_71);
              *STATE_VARIABLE_StaticCellInfo_69 = STATE_VARIABLE_StaticCellInfo_0_68;
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
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgTypedRvals_194;
              MR_Word PackArgTypedRvals_195;
              MR_Word DataAddr_196;
              MR_Word CellPtrConst_198;
              MR_Word STATE_VARIABLE_ActiveMap_93_199;
              MR_Word Var_200;
              MR_Word ActiveGroundTerm_202;
              MR_Integer Ptag_203 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Word Rval_204;

              ll_backend__unify_gen__generate_ground_term_args_5_p_0(Args_12, ConsArgWidths_13, &ArgTypedRvals_194, STATE_VARIABLE_ActiveMap_0_70, &STATE_VARIABLE_ActiveMap_93_199);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_13, ArgTypedRvals_194, &PackArgTypedRvals_195);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_195, &DataAddr_196, STATE_VARIABLE_StaticCellInfo_0_68, STATE_VARIABLE_StaticCellInfo_69);
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
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_202)), STATE_VARIABLE_ActiveMap_93_199, STATE_VARIABLE_ActiveMap_71);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));

              if ((Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1)));
                MR_Word Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0)));

                if ((Var_207 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word TypeInfo_166_166 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                  MR_Word TypeCtorInfo_167_167 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                  MR_Word ArgRval_42;
                  MR_Word Var_89;
                  MR_Word STATE_VARIABLE_ActiveMap_90_90;
                  MR_Word ActiveGroundTerm_136;
                  MR_Word Rval_137;
                  MR_Box conv0_Var_89;
                  MR_Word _RvalType_43;

                  mercury__map__det_remove_4_p_0(TypeInfo_166_166, TypeCtorInfo_167_167, ((MR_Box) (Var_208)), &conv0_Var_89, STATE_VARIABLE_ActiveMap_0_70, &STATE_VARIABLE_ActiveMap_90_90);
                  Var_89 = ((MR_Word) conv0_Var_89);
                  ArgRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 0)));
                  _RvalType_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 1)));
                  {
                    Rval_137 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Rval_137, 0) = ((MR_Box) (Ptag_143));
                    MR_hl_field(MR_mktag(2), Rval_137, 1) = ((MR_Box) (ArgRval_42));
                  }
                  {
                    ActiveGroundTerm_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_136, 0) = ((MR_Box) (Rval_137));
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                  }
                  mercury__map__det_insert_4_p_0(TypeInfo_166_166, TypeCtorInfo_167_167, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_136)), STATE_VARIABLE_ActiveMap_90_90, STATE_VARIABLE_ActiveMap_71);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_69 = STATE_VARIABLE_StaticCellInfo_0_68;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word StagTypedRval_47;
              MR_Word AllTypedRvals_48;
              MR_Word STATE_VARIABLE_ActiveMap_75_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_81;
              MR_Word ActiveGroundTerm_146;
              MR_Integer Ptag_147 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Integer Stag_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2)));
              MR_Word Rval_149;
              MR_Word ArgTypedRvals_150;
              MR_Word PackArgTypedRvals_151;
              MR_Word DataAddr_152;
              MR_Word CellPtrConst_154;

              ll_backend__unify_gen__generate_ground_term_args_5_p_0(Args_12, ConsArgWidths_13, &ArgTypedRvals_150, STATE_VARIABLE_ActiveMap_0_70, &STATE_VARIABLE_ActiveMap_75_75);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_13, ArgTypedRvals_150, &PackArgTypedRvals_151);
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Stag_148));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
              }
              {
                StagTypedRval_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagTypedRval_47, 0) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(0), StagTypedRval_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3])));
              }
              {
                AllTypedRvals_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllTypedRvals_48, 0) = ((MR_Box) (StagTypedRval_47));
                MR_hl_field(MR_mktag(1), AllTypedRvals_48, 1) = ((MR_Box) (PackArgTypedRvals_151));
              }
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_48, &DataAddr_152, STATE_VARIABLE_StaticCellInfo_0_68, STATE_VARIABLE_StaticCellInfo_69);
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (DataAddr_152));
                MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_154, 1) = ((MR_Box) (Var_81));
              }
              {
                Rval_149 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_149, 0) = ((MR_Box) (Ptag_147));
                MR_hl_field(MR_mktag(2), Rval_149, 1) = ((MR_Box) (CellPtrConst_154));
              }
              {
                ActiveGroundTerm_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_146, 0) = ((MR_Box) (Rval_149));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_146)), STATE_VARIABLE_ActiveMap_75_75, STATE_VARIABLE_ActiveMap_71);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Integer Stag_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2)));
              MR_Word Rval_28;
              MR_Word Var_111;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word ActiveGroundTerm_127;

              {
                Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Stag_27));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Var_114));
              }
              {
                Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_111, 2) = ((MR_Box) (Var_113));
              }
              {
                Rval_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_28, 0) = ((MR_Box) (Ptag_26));
                MR_hl_field(MR_mktag(2), Rval_28, 1) = ((MR_Box) (Var_111));
              }
              {
                ActiveGroundTerm_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_127, 0) = ((MR_Box) (Rval_28));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_127)), STATE_VARIABLE_ActiveMap_0_70, STATE_VARIABLE_ActiveMap_71);
              *STATE_VARIABLE_StaticCellInfo_69 = STATE_VARIABLE_StaticCellInfo_0_68;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word RA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Word RvalType_30;
              MR_Word ActiveGroundTerm_128;
              MR_Word Rval_129;

              Rval_129 = ll_backend__unify_gen__generate_reserved_address_1_f_0(RA_29);
              ll_backend__llds__rval_type_2_p_0(Rval_129, &RvalType_30);
              {
                ActiveGroundTerm_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_128, 0) = ((MR_Box) (Rval_129));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_128, 1) = ((MR_Box) (RvalType_30));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_128)), STATE_VARIABLE_ActiveMap_0_70, STATE_VARIABLE_ActiveMap_71);
              *STATE_VARIABLE_StaticCellInfo_69 = STATE_VARIABLE_StaticCellInfo_0_68;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ActualConsTag_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2)));
              MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_11 = ActualConsTag_32;

              // direct tailcall eliminated
              ConsTag_11 = next_value_of_ConsTag_11;
              continue;
            }
            break;
        }
        break;
    }
    break;
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
    backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, TypeCtorInfo_23_23, TypeCtorInfo_23_23, (MR_Word) &ll_backend__unify_gen_scalar_common_2[9], Widths_4, STATE_VARIABLE_TypedRvals_0_8, STATE_VARIABLE_TypedRvals_9, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_6, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_7);
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypedRval_8;
    MR_Word conv0_STATE_VARIABLE_ActiveMap_13;

    ll_backend__unify_gen__generate_ground_term_arg_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_TypedRval_8, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_ActiveMap_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_TypedRval_8));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ActiveMap_13));
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0(
  MR_Word Vars_6,
  MR_Word ConsArgWidths_7,
  MR_Word * TypedRvals_8,
  MR_Word STATE_VARIABLE_ActiveMap_0_10,
  MR_Word * STATE_VARIABLE_ActiveMap_11)
{
  {
    MR_Box conv2_STATE_VARIABLE_ActiveMap_11;

    mercury__list__map_corresponding_foldl_6_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[2], (MR_Word) &ll_backend__unify_gen_scalar_common_2[8], Vars_6, ConsArgWidths_7, TypedRvals_8, ((MR_Box) (STATE_VARIABLE_ActiveMap_0_10)), &conv2_STATE_VARIABLE_ActiveMap_11);
    *STATE_VARIABLE_ActiveMap_11 = ((MR_Word) conv2_STATE_VARIABLE_ActiveMap_11);
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
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[2]));
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
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "nondet unification");
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
          MR_Word LHSVar_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_10, (MR_Integer) 0)));
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
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_45, LHSVar_76);
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
            MR_Word ConsArgWidths_28;

            if ((MaybeTakeAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              TakeAddr_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              TakeAddr_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTakeAddr_23, (MR_Integer) 0)));
            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_27);
            ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ModuleInfo_27, ConsId_17, RHSVars_18, &ConsArgWidths_28);
            ll_backend__unify_gen__generate_construction_14_p_0(LHSVar_76, ConsId_17, RHSVars_18, ArgModes_19, ConsArgWidths_28, HowToConstruct_20, TakeAddr_26, MaybeSize_24, GoalInfo_11, Code_12, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
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
          MR_Word STATE_VARIABLE_CLD_60_60;
          MR_Word LHSVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 0)));
          MR_Word ConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 1)));
          MR_Word RHSVars_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 2)));
          MR_Word ArgModes_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 3)));
          MR_Word ModuleInfo_81;
          MR_Word ConsArgWidths_82;
          MR_Word _CanFail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 4)));

          ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_81);
          ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ModuleInfo_81, ConsId_78, RHSVars_79, &ConsArgWidths_82);
          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__unify_gen__generate_det_deconstruction_9_p_0(LHSVar_77, ConsId_78, RHSVars_79, ArgModes_80, ConsArgWidths_82, &Code0_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_60_60);
                *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
              }
              break;
            case (MR_Integer) 1:
              ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(LHSVar_77, ConsId_78, RHSVars_79, ArgModes_80, ConsArgWidths_82, &Code0_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_60_60);
              break;
          }
          switch (CanCGC_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String LHSVarName_32;
                MR_Word ProduceVar_33;
                MR_Word VarRval_34;
                MR_Word STATE_VARIABLE_CLD_61_61;
                MR_Word VarLval_35;

                LHSVarName_32 = ll_backend__code_info__variable_name_2_f_0(*STATE_VARIABLE_CI_44, LHSVar_77);
                ll_backend__code_loc_dep__produce_variable_6_p_0(LHSVar_77, &ProduceVar_33, &VarRval_34, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_60_60, &STATE_VARIABLE_CLD_61_61);
                succeeded = ((MR_tag((MR_Word) VarRval_34)) == (MR_mktag((MR_Integer) 0)));
                if (succeeded)
                {
                  VarLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), VarRval_34, (MR_Integer) 0)));
                  {
                    MR_Word TypeCtorInfo_94_94;
                    MR_Word SaveArgs_36;
                    MR_Word Regs_37;
                    MR_Word FreeVar_38;
                    MR_Word STATE_VARIABLE_CLD_62_62;
                    MR_Word Var_65;
                    MR_Word Var_66;
                    MR_Word Var_67;
                    MR_String Var_69;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Box conv1_STATE_VARIABLE_CLD_46;

                    ll_backend__code_loc_dep__save_reused_cell_fields_7_p_0(LHSVar_77, VarLval_35, &SaveArgs_36, &Regs_37, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_61_61, &STATE_VARIABLE_CLD_62_62);
                    mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[6], Regs_37, ((MR_Box) (STATE_VARIABLE_CLD_62_62)), &conv1_STATE_VARIABLE_CLD_46);
                    *STATE_VARIABLE_CLD_46 = ((MR_Word) conv1_STATE_VARIABLE_CLD_46);
                    TypeCtorInfo_94_94 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    {
                      Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) (VarRval_34));
                    }
                    {
                      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
                    }
                    Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", LHSVarName_32);
                    {
                      Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Var_66));
                      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Var_69));
                    }
                    FreeVar_38 = mercury__cord__singleton_1_f_0(TypeCtorInfo_94_94, ((MR_Box) (Var_65)));
                    Var_72 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_94_94, SaveArgs_36, FreeVar_38);
                    Var_71 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_94_94, ProduceVar_33, Var_72);
                    *Code_12 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_94_94, Code0_31, Var_71);
                  }
                }
                else
                {
                  *Code_12 = Code0_31;
                  *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_61_61;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                *Code_12 = Code0_31;
                *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_60_60;
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
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "det simple_test");
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
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unification\'/8", (MR_String) "complicated unify");
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
ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(
  MR_Word Var_11,
  MR_Word Tag_12,
  MR_Word Args_13,
  MR_Word Modes_14,
  MR_Word ArgWidths_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_27,
  MR_Word * STATE_VARIABLE_CI_28,
  MR_Word STATE_VARIABLE_CLD_0_29,
  MR_Word * STATE_VARIABLE_CLD_30)
{
  {
    MR_Word TypeCtorInfo_42_42;
    MR_Word VarType_19;
    MR_Word CheaperTagTest_20;
    MR_Word SuccLabel_21;
    MR_Word TagTestCode_22;
    MR_Word AfterUnify_23;
    MR_Word FailCode_24;
    MR_Word DeconsCode_25;
    MR_Word SuccessLabelCode_26;
    MR_Word STATE_VARIABLE_CI_32_32;
    MR_Word STATE_VARIABLE_CLD_33_33;
    MR_Word STATE_VARIABLE_CLD_35_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word ModuleInfo_53;
    MR_Word Tag_54;

    VarType_19 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_27, Var_11);
    CheaperTagTest_20 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_27, VarType_19);
    ll_backend__unify_gen__generate_tag_test_10_p_0(Var_11, Tag_12, CheaperTagTest_20, (MR_Integer) 0, &SuccLabel_21, &TagTestCode_22, STATE_VARIABLE_CI_0_27, &STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CLD_0_29, &STATE_VARIABLE_CLD_33_33);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_33_33, &AfterUnify_23);
    ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_24, STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CI_28, STATE_VARIABLE_CLD_33_33);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterUnify_23, *STATE_VARIABLE_CI_28, &STATE_VARIABLE_CLD_35_35);
    ll_backend__code_info__get_module_info_2_p_0(*STATE_VARIABLE_CI_28, &ModuleInfo_53);
    Tag_54 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_53, Tag_12);
    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(Var_11, Args_13, Modes_14, ArgWidths_15, Tag_54, &DeconsCode_25, *STATE_VARIABLE_CI_28, STATE_VARIABLE_CLD_35_35, STATE_VARIABLE_CLD_30);
    TypeCtorInfo_42_42 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (SuccLabel_21));
    }
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) ((MR_String) ""));
    }
    SuccessLabelCode_26 = mercury__cord__singleton_1_f_0(TypeCtorInfo_42_42, ((MR_Box) (Var_37)));
    Var_41 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_42_42, SuccessLabelCode_26, DeconsCode_25);
    Var_40 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_42_42, FailCode_24, Var_41);
    *Code_16 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_42_42, TagTestCode_22, Var_40);
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

static MR_Box MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_52;

    conv0_LambdaHeadVar__3_52 = ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__506__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_52));
    return wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__437__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
              *TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[19]);
            }
            break;
          case (MR_Integer) 1:
            {
              *TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[19]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_5, (MR_Integer) 0)));
          MR_Word Var_133;
          MR_Word Var_134;

          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (String_7));
          }
          {
            Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (Var_134));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_133));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_5, (MR_Integer) 0)));
          MR_Word Var_130;
          MR_Word Var_131;

          {
            Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_131, 1) = MR_box_float(Float_8);
          }
          {
            Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (Var_131));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *TestRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_130));
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
              MR_Word Var_127;
              MR_Word Var_128;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_9, &Const_10, &IntType_11);
              {
                Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (IntType_11));
              }
              {
                Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (Const_10));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_127));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_128));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_String ForeignVal_13 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Word Var_116;
              MR_Word Var_123;
              MR_Word Var_124;

              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (ForeignLang_12));
                MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_116, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "foreign tag for language other than C");
              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (ForeignVal_13));
                MR_hl_field(MR_mktag(3), Var_124, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3])));
              }
              {
                Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (Var_124));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_123));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted higher-order unification");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_ctor_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted base_typeclass_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_info_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted typeclass_info_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted ground_term_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted tabling_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted deep_profiling_proc_layout_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted table_io_entry_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer UnsharedTag_145 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word VarPtag_146;
              MR_Word ConstPtag_147;
              MR_Word Var_150;
              MR_Word Var_151;

              {
                VarPtag_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), VarPtag_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_146, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (UnsharedTag_145));
              }
              {
                Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (Var_151));
              }
              {
                ConstPtag_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstPtag_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_147, 2) = ((MR_Box) (Var_150));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarPtag_146));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstPtag_147));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer UnsharedTag_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word VarPtag_34;
              MR_Word ConstPtag_35;
              MR_Word Var_83;
              MR_Word Var_84;

              {
                VarPtag_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), VarPtag_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_34, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (UnsharedTag_33));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
              }
              {
                ConstPtag_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_35, 2) = ((MR_Box) (Var_83));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
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
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_77;
              MR_Word VarPtag_135;
              MR_Word ConstPtag_136;

              {
                VarPtag_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), VarPtag_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), VarPtag_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(3), VarPtag_135, 2) = ((MR_Box) (Rval_4));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Bits_36));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
              }
              {
                ConstPtag_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstPtag_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ConstPtag_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ConstPtag_136, 2) = ((MR_Box) (Var_68));
              }
              Var_70 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
              {
                PtagTestRval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), PtagTestRval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), PtagTestRval_38, 1) = ((MR_Box) (Var_70));
                MR_hl_field(MR_mktag(3), PtagTestRval_38, 2) = ((MR_Box) (VarPtag_135));
                MR_hl_field(MR_mktag(3), PtagTestRval_38, 3) = ((MR_Box) (ConstPtag_136));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Bits_36));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), Var_72, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
              }
              {
                VarStag_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), VarStag_39, 0) = ((MR_Box) (Var_72));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Num_37));
              }
              {
                ConstStag_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstStag_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstStag_40, 1) = ((MR_Box) (Var_77));
              }
              {
                StagTestRval_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), StagTestRval_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), StagTestRval_41, 1) = ((MR_Box) (Var_70));
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
              MR_Word Var_60;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Integer Bits_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Integer Num_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Word ConstStag_139;

              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Num_138));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_60, 2) = ((MR_Box) (Var_62));
              }
              {
                ConstStag_139 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ConstStag_139, 0) = ((MR_Box) (Bits_137));
                MR_hl_field(MR_mktag(2), ConstStag_139, 1) = ((MR_Box) (Var_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ConstStag_139));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word RA_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word Var_59;

              Var_59 = ll_backend__unify_gen__generate_reserved_address_1_f_0(RA_42);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_59));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ReservedAddrs_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 1)));
              MR_Word ThisTag_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_5, (MR_Integer) 2)));
              MR_Word CheckReservedAddrs_45;
              MR_Word MatchesThisTag_49;
              MR_Box conv1_TestRval_6;

              {
                CheckReservedAddrs_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_45, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_45, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_2));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), CheckReservedAddrs_45, 3) = ((MR_Box) (Rval_4));
              }
              ll_backend__unify_gen__raw_tag_test_3_p_0(Rval_4, ThisTag_44, &MatchesThisTag_49);
              conv1_TestRval_6 = mercury__list__foldr_3_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, CheckReservedAddrs_45, ReservedAddrs_43, ((MR_Box) (MatchesThisTag_49)));
              *TestRval_6 = ((MR_Word) conv1_TestRval_6);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_9_p_0(
  MR_Word Var_10,
  MR_Word Cons_11,
  MR_Word Args_12,
  MR_Word Modes_13,
  MR_Word ArgWidths_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  {
    MR_Word ModuleInfo_18;
    MR_Word Tag_19;

    ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
    Tag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_18, Cons_11);
    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(Var_10, Args_12, Modes_13, ArgWidths_14, Tag_19, Code_15, CI_16, STATE_VARIABLE_CLD_0_20, STATE_VARIABLE_CLD_21);
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word Var_11,
  MR_Word Args_13,
  MR_Word Modes_14,
  MR_Word ArgWidths_15,
  MR_Word Tag_16,
  MR_Word * Code_17,
  MR_Word CI_18,
  MR_Word STATE_VARIABLE_CLD_0_64,
  MR_Word * STATE_VARIABLE_CLD_65)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Tag_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // direct tailcall eliminated
              Tag_16 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[18]);
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Arg_47;
              MR_Word Mode_48;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word _ArgWidth_49;

              succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Arg_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
                Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
                succeeded = (Var_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_14)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 0)));
                    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 1)));
                    succeeded = (Var_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) ArgWidths_15)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        _ArgWidth_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_15, (MR_Integer) 0)));
                        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_15, (MR_Integer) 1)));
                        succeeded = (Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarType_50;
                MR_Word ModuleInfo_51;
                MR_Word IsDummy_52;

                VarType_50 = ll_backend__code_info__variable_type_2_f_0(CI_18, Var_11);
                ll_backend__code_info__get_module_info_2_p_0(CI_18, &ModuleInfo_51);
                IsDummy_52 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_51, VarType_50);
                switch (IsDummy_52) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_64, Arg_47);
                      if (succeeded)
                      {
                        ll_backend__code_loc_dep__assign_const_to_var_5_p_0(Arg_47, (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]), CI_18, STATE_VARIABLE_CLD_0_64, STATE_VARIABLE_CLD_65);
                      }
                      else
                        *STATE_VARIABLE_CLD_65 = STATE_VARIABLE_CLD_0_64;
                      *Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgType_53;
                      MR_Word Var_84;
                      MR_Word Var_85;

                      ArgType_53 = ll_backend__code_info__variable_type_2_f_0(CI_18, Arg_47);
                      {
                        Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Var_11));
                      }
                      {
                        Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Arg_47));
                      }
                      ll_backend__unify_gen__generate_sub_unify_8_p_0(Var_84, Var_85, Mode_48, ArgType_53, Code_17, CI_18, STATE_VARIABLE_CLD_0_64, STATE_VARIABLE_CLD_65);
                    }
                    break;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "no_tag: arity != 1");
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
          *Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CLD_65 = STATE_VARIABLE_CLD_0_64;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            {
              *Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CLD_65 = STATE_VARIABLE_CLD_0_64;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "type_info_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "typeclass_info_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "ground_term_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "table_io_entry_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_16, (MR_Integer) 1)));
              MR_Word Rval_55;
              MR_Word Fields_56;
              MR_Word ArgVars_57;
              MR_Word ArgTypes_58;

              {
                Rval_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_55, 0) = ((MR_Box) (Var_11));
              }
              ll_backend__unify_gen__make_fields_and_argvars_7_p_0(Args_13, ArgWidths_15, Rval_55, (MR_Integer) -1, Ptag_54, &Fields_56, &ArgVars_57);
              ll_backend__unify_gen__var_types_3_p_0(CI_18, Args_13, &ArgTypes_58);
              ll_backend__unify_gen__generate_unify_args_8_p_0(Fields_56, ArgVars_57, Modes_14, ArgTypes_58, Code_17, CI_18, STATE_VARIABLE_CLD_0_64, STATE_VARIABLE_CLD_65);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_16, (MR_Integer) 1)));
              MR_Word Arg_106;
              MR_Word Mode_107;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_59;

              succeeded = ((MR_tag((MR_Word) Args_13)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Arg_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 0)));
                Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_13, (MR_Integer) 1)));
                succeeded = (Var_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_14)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 0)));
                    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_14, (MR_Integer) 1)));
                    succeeded = (Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) ArgWidths_15)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_15, (MR_Integer) 0)));
                        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_15, (MR_Integer) 1)));
                        succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word Type_60;

                Type_60 = ll_backend__code_info__variable_type_2_f_0(CI_18, Arg_106);
                ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(Var_11, Arg_106, Ptag_110, Mode_107, Type_60, Code_17, CI_18, STATE_VARIABLE_CLD_0_64, STATE_VARIABLE_CLD_65);
              }
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Ptag_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_16, (MR_Integer) 1)));
              MR_Word Rval_112;
              MR_Word Fields_113;
              MR_Word ArgVars_114;
              MR_Word ArgTypes_115;
              MR_Integer _Sectag1_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_16, (MR_Integer) 2)));

              {
                Rval_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_112, 0) = ((MR_Box) (Var_11));
              }
              ll_backend__unify_gen__make_fields_and_argvars_7_p_0(Args_13, ArgWidths_15, Rval_112, (MR_Integer) 0, Ptag_111, &Fields_113, &ArgVars_114);
              ll_backend__unify_gen__var_types_3_p_0(CI_18, Args_13, &ArgTypes_115);
              ll_backend__unify_gen__generate_unify_args_8_p_0(Fields_113, ArgVars_114, Modes_14, ArgTypes_115, Code_17, CI_18, STATE_VARIABLE_CLD_0_64, STATE_VARIABLE_CLD_65);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_16, (MR_Integer) 2)));
              MR_Word _RAs_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_16, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_16 = ThisTag_63;

              // direct tailcall eliminated
              Tag_16 = next_value_of_Tag_16;
              continue;
            }
            break;
        }
        break;
    }
    break;
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
    succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (RightTopFunctorMode_22 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_24, ArgVar_11);
      if (succeeded)
      {
        MR_Word BodyRval_23;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_10));
        }
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Ptag_12));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
        }
        {
          BodyRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), BodyRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), BodyRval_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(3), BodyRval_23, 2) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(3), BodyRval_23, 3) = ((MR_Box) (Var_28));
        }
        ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ArgVar_11, BodyRval_23, Code_15, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
      }
      else
      {
        *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        *STATE_VARIABLE_CLD_25 = STATE_VARIABLE_CLD_0_24;
      }
    }
    else
    {
      succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (RightTopFunctorMode_22 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ArgVar_11));
        }
        ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(Var_10, Ptag_12, Var_31, Code_15, STATE_VARIABLE_CLD_0_24, STATE_VARIABLE_CLD_25);
      }
      else
      {
        succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 2);
        if (succeeded)
          succeeded = (RightTopFunctorMode_22 == (MR_Integer) 2);
        if (succeeded)
        {
          *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        else
        {
          succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (RightTopFunctorMode_22 == (MR_Integer) 0);
          if (succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/9", (MR_String) "test in arg of [de]construction");
              return;
            }
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_deconstruct\'/9", (MR_String) "some strange unify");
              return;
            }
          }
        }
        *STATE_VARIABLE_CLD_25 = STATE_VARIABLE_CLD_0_24;
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_8_p_0(
  MR_Word Ls_9,
  MR_Word Rs_10,
  MR_Word Ms_11,
  MR_Word Ts_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_17,
  MR_Word * STATE_VARIABLE_CLD_18)
{
  {
    MR_bool succeeded;
    MR_Word Code0_16;
    MR_Word STATE_VARIABLE_CLD_19_19;

    succeeded = ll_backend__unify_gen__generate_unify_args_2_8_p_0(Ls_9, Rs_10, Ms_11, Ts_12, &Code0_16, CI_14, STATE_VARIABLE_CLD_0_17, &STATE_VARIABLE_CLD_19_19);
    if (succeeded)
    {
      *STATE_VARIABLE_CLD_18 = STATE_VARIABLE_CLD_19_19;
      *Code_13 = Code0_16;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_unify_args\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unify_args_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_30_30;

      succeeded = (HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
            *HeadVar__5_5 = mercury__cord__empty_0_f_0(TypeCtorInfo_30_30);
            *STATE_VARIABLE_CLD_8 = STATE_VARIABLE_CLD_0_7;
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
    {
      MR_Word TypeCtorInfo_31_31;
      MR_Word L_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Ls_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word R_15;
      MR_Word Rs_16;
      MR_Word M_17;
      MR_Word Ms_18;
      MR_Word T_19;
      MR_Word Ts_20;
      MR_Word CodeA_24;
      MR_Word CodeB_25;
      MR_Word STATE_VARIABLE_CLD_28_28;
      MR_Word ModuleInfo_41;
      MR_Word LeftFromToInsts_42;
      MR_Word RightFromToInsts_43;
      MR_Word LeftTopFunctorMode_44;
      MR_Word RightTopFunctorMode_45;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        Rs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          M_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
          Ms_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
            Ts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
            ll_backend__code_info__get_module_info_2_p_0(HeadVar__6_6, &ModuleInfo_41);
            LeftFromToInsts_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), M_17, (MR_Integer) 0)));
            RightFromToInsts_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), M_17, (MR_Integer) 1)));
            check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_41, LeftFromToInsts_42, T_19, &LeftTopFunctorMode_44);
            check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_41, RightFromToInsts_43, T_19, &RightTopFunctorMode_45);
            succeeded = (LeftTopFunctorMode_44 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (RightTopFunctorMode_45 == (MR_Integer) 0);
            if (succeeded)
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "test in arg of [de]construction");
            }
            else
            {
              succeeded = (LeftTopFunctorMode_44 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (RightTopFunctorMode_45 == (MR_Integer) 1);
              if (succeeded)
                ll_backend__unify_gen__generate_sub_assign_6_p_0(R_15, L_13, &CodeA_24, HeadVar__6_6, STATE_VARIABLE_CLD_0_7, &STATE_VARIABLE_CLD_28_28);
              else
              {
                succeeded = (LeftTopFunctorMode_44 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = (RightTopFunctorMode_45 == (MR_Integer) 0);
                if (succeeded)
                  ll_backend__unify_gen__generate_sub_assign_6_p_0(L_13, R_15, &CodeA_24, HeadVar__6_6, STATE_VARIABLE_CLD_0_7, &STATE_VARIABLE_CLD_28_28);
                else
                {
                  succeeded = (LeftTopFunctorMode_44 == (MR_Integer) 2);
                  if (succeeded)
                    succeeded = (RightTopFunctorMode_45 == (MR_Integer) 2);
                  if (succeeded)
                  {
                    CodeA_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  else
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "some strange unify");
                  }
                  STATE_VARIABLE_CLD_28_28 = STATE_VARIABLE_CLD_0_7;
                }
              }
            }
            succeeded = ll_backend__unify_gen__generate_unify_args_2_8_p_0(Ls_14, Rs_16, Ms_18, Ts_20, &CodeB_25, HeadVar__6_6, STATE_VARIABLE_CLD_28_28, STATE_VARIABLE_CLD_8);
            if (succeeded)
            {
              TypeCtorInfo_31_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_31_31, CodeA_24, CodeB_25);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__make_fields_and_argvars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Rval_3,
  MR_Integer PrevOffset0_4,
  MR_Integer TagNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_argvars\'/7", (MR_String) "mismatched lists");
        return;
      }
    }
  else
  {
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_argvars\'/7", (MR_String) "mismatched lists");
        return;
      }
    }
    else
    {
      MR_Word Width_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Widths_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word F_18;
      MR_Word Fs_19;
      MR_Word A_20;
      MR_Word As_21;
      MR_Integer Offset_23;
      MR_Integer PrevOffset_24;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;

      switch (MR_tag((MR_Word) Width_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Width_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Offset_23 = (PrevOffset0_4 + (MR_Integer) 1);
                PrevOffset_24 = Offset_23;
              }
              break;
            case (MR_Integer) 1:
              {
                Offset_23 = (PrevOffset0_4 + (MR_Integer) 1);
                PrevOffset_24 = (Offset_23 + (MR_Integer) 1);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            Offset_23 = (PrevOffset0_4 + (MR_Integer) 1);
            PrevOffset_24 = Offset_23;
          }
          break;
        case (MR_Integer) 2:
          {
            Offset_23 = PrevOffset0_4;
            PrevOffset_24 = Offset_23;
          }
          break;
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (TagNum_5));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Offset_23));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(3), Var_29, 2) = ((MR_Box) (Rval_3));
        MR_hl_field(MR_mktag(3), Var_29, 3) = ((MR_Box) (Var_31));
      }
      {
        F_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), F_18, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), F_18, 1) = ((MR_Box) (Width_13));
      }
      {
        A_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), A_20, 0) = ((MR_Box) (Var_56));
      }
      ll_backend__unify_gen__make_fields_and_argvars_7_p_0(Var_55, Widths_14, Rval_3, PrevOffset_24, TagNum_5, &Fs_19, &As_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (F_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Fs_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (A_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (As_21));
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0(
  MR_Word LHSVar_15,
  MR_Word ConsId_16,
  MR_Word RHSVars_17,
  MR_Word ArgModes_18,
  MR_Word ArgWidths_19,
  MR_Word HowToConstruct_20,
  MR_Word TakeAddr_21,
  MR_Word MaybeSize_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30,
  MR_Word STATE_VARIABLE_CLD_0_31,
  MR_Word * STATE_VARIABLE_CLD_32)
{
  {
    MR_Word ModuleInfo_27;
    MR_Word Tag_28;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_29, &ModuleInfo_27);
    Tag_28 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_27, ConsId_16);
    ll_backend__unify_gen__generate_construction_2_14_p_0(Tag_28, LHSVar_15, RHSVars_17, ArgModes_18, ArgWidths_19, HowToConstruct_20, TakeAddr_21, MaybeSize_22, GoalInfo_23, Code_24, STATE_VARIABLE_CI_0_29, STATE_VARIABLE_CI_30, STATE_VARIABLE_CLD_0_31, STATE_VARIABLE_CLD_32);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_9(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__652__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__680__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__707__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__715__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__569__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__690__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__730__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__728__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__662__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0(
  MR_Word ConsTag_15,
  MR_Word LHSVar_16,
  MR_Word RHSVars_17,
  MR_Word ArgModes_18,
  MR_Word ArgWidths_19,
  MR_Word HowToConstruct0_20,
  MR_Word TakeAddr_21,
  MR_Word MaybeSize_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_81,
  MR_Word * STATE_VARIABLE_CI_82,
  MR_Word STATE_VARIABLE_CLD_0_83,
  MR_Word * STATE_VARIABLE_CLD_84)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_41;
              MR_Word CellArgs0_42;
              MR_Word MayUseAtomic_43;
              MR_Word CellArgs_44;
              MR_Word PackCode_45;
              MR_Word HowToConstruct_46;
              MR_Word Context_47;
              MR_Word ConstructCode_48;
              MR_Word STATE_VARIABLE_CLD_182_182;

              ll_backend__unify_gen__var_types_3_p_0(STATE_VARIABLE_CI_0_81, RHSVars_17, &ArgTypes_41);
              ll_backend__unify_gen__generate_cons_args_8_p_0(RHSVars_17, ArgTypes_41, ArgModes_18, ArgWidths_19, TakeAddr_21, STATE_VARIABLE_CI_0_81, &CellArgs0_42, &MayUseAtomic_43);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_19, CellArgs0_42, &CellArgs_44, &PackCode_45, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, &STATE_VARIABLE_CLD_182_182);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_19, HowToConstruct0_20, &HowToConstruct_46);
              Context_47 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_16, (MR_Integer) 0, CellArgs_44, HowToConstruct_46, MaybeSize_22, Context_47, MayUseAtomic_43, &ConstructCode_48, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CI_82, STATE_VARIABLE_CLD_182_182, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_45, ConstructCode_48);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_35;
              MR_Word ArgMode_36;
              MR_Word Var_185;
              MR_Word Var_186;

              succeeded = ((MR_tag((MR_Word) RHSVars_17)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                RHSVar_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVars_17, (MR_Integer) 0)));
                Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVars_17, (MR_Integer) 1)));
                succeeded = (Var_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 0)));
                    Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 1)));
                    succeeded = (Var_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
                if ((TakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word Type_37;
                  MR_Word Var_190;
                  MR_Word Var_191;

                  Type_37 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_81, RHSVar_35);
                  {
                    Var_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_190, 0) = ((MR_Box) (LHSVar_16));
                  }
                  {
                    Var_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_191, 0) = ((MR_Box) (RHSVar_35));
                  }
                  ll_backend__unify_gen__generate_sub_unify_8_p_0(Var_190, Var_191, ArgMode_36, Type_37, Code_24, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "notag: take_addr");
                    return;
                  }
                }
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_15, (MR_Integer) 0)));
          MR_Word Var_210;
          MR_Word Var_212;

          {
            Var_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_212, 1) = ((MR_Box) (String_27));
          }
          {
            Var_210 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_210, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_210, 1) = ((MR_Box) (Var_212));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_210, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
          *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_34 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_15, (MR_Integer) 0)));
          MR_Word Var_196;
          MR_Word Var_198;

          {
            Var_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_198, 1) = MR_box_float(Float_34);
          }
          {
            Var_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_196, 1) = ((MR_Box) (Var_198));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_196, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
          *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word Const_29;
              MR_Word Var_208;
              MR_Word Var_30;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_28, &Const_29, &Var_30);
              {
                Var_208 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_208, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_208, 1) = ((MR_Box) (Const_29));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_208, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_String Val_32 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
              MR_Word ForeignConst_33;
              MR_Word Var_199;
              MR_Word Var_204;

              {
                Var_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_199, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_199, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_5));
                MR_hl_field(MR_mktag(0), Var_199, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_199, 3) = ((MR_Box) (Lang_31));
                MR_hl_field(MR_mktag(0), Var_199, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_4_p_0(Var_199, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "foreign_tag for language other than C");
              {
                Var_204 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_204, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_204, 1) = ((MR_Box) (Val_32));
                MR_hl_field(MR_mktag(3), Var_204, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3])));
              }
              {
                ForeignConst_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ForeignConst_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ForeignConst_33, 1) = ((MR_Box) (Var_204));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, ForeignConst_33, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_85;
              MR_Word Var_90;
              MR_Word PredId_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Integer ProcId_244 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));

              {
                Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_2));
                MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (TakeAddr_21));
                MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_85, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "closure_tag has take_addr");
              {
                Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[4]));
                MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_3));
                MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (MaybeSize_22));
                MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_90, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "closure_tag has size");
              ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(PredId_243, ProcId_244, LHSVar_16, RHSVars_17, GoalInfo_23, Code_24, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CI_82, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_String TypeName_54 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
              MR_Integer TypeArity_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 3)));
              MR_Word RttiTypeCtor_56;
              MR_Word DataId_57;
              MR_Word Var_149;
              MR_Word Var_154;
              MR_Word Var_156;
              MR_Word Var_158;

              {
                Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_149, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_149, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_9));
                MR_hl_field(MR_mktag(0), Var_149, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_149, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_149, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_149, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "type_ctor_info constant has args");
              {
                RttiTypeCtor_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_56, 0) = ((MR_Box) (ModuleName_53));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_56, 1) = ((MR_Box) (TypeName_54));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_56, 2) = ((MR_Box) (TypeArity_55));
              }
              {
                Var_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (RttiTypeCtor_56));
                MR_hl_field(MR_mktag(0), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
              }
              {
                DataId_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_57, 0) = ((MR_Box) (Var_154));
              }
              {
                Var_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_158, 1) = ((MR_Box) (DataId_57));
                MR_hl_field(MR_mktag(3), Var_158, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_156, 1) = ((MR_Box) (Var_158));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_156, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
              MR_String Instance_59 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 3)));
              MR_Word TCName_60;
              MR_Word Var_138;
              MR_Word Var_143;
              MR_Word Var_144;
              MR_Word Var_145;
              MR_Word Var_147;
              MR_Word ModuleName_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word DataId_234;

              {
                Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_1));
                MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_138, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_138, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "base_typeclass_info constant has args");
              TCName_60 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_58);
              {
                Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (ModuleName_233));
                MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Instance_59));
              }
              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (TCName_60));
                MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_144));
              }
              {
                DataId_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_234, 0) = ((MR_Box) (Var_143));
              }
              {
                Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (DataId_234));
                MR_hl_field(MR_mktag(3), Var_147, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (Var_147));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_145, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_285 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word ConstStructMap_286;
              MR_Word Rval_287;
              MR_Word Var_289;
              MR_Box conv1_Var_289;
              MR_Word _Type_284;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_81, &ConstStructMap_286);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_286, ConstNum_285, &conv1_Var_289);
              Var_289 = ((MR_Word) conv1_Var_289);
              Rval_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_289, (MR_Integer) 0)));
              _Type_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_289, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_16, Rval_287, Code_24, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_293 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word ConstStructMap_294;
              MR_Word Rval_295;
              MR_Word Var_297;
              MR_Box conv2_Var_297;
              MR_Word _Type_292;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_81, &ConstStructMap_294);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_294, ConstNum_293, &conv2_Var_297);
              Var_297 = ((MR_Word) conv2_Var_297);
              Rval_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_297, (MR_Integer) 0)));
              _Type_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_297, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_16, Rval_295, Code_24, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word ConstStructMap_63;
              MR_Word Rval_64;
              MR_Word Var_136;
              MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
              MR_Box conv0_Var_136;
              MR_Word _Type_65;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_81, &ConstStructMap_63);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_63, ConstNum_61, &conv0_Var_136);
              Var_136 = ((MR_Word) conv0_Var_136);
              Rval_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_136, (MR_Integer) 0)));
              _Type_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_136, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_16, Rval_64, Code_24, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Integer ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
              MR_Word ModuleInfo_68;
              MR_Word ProcLabel_69;
              MR_Word Var_126;
              MR_Word Var_132;
              MR_Word Var_134;
              MR_Word DataId_235;

              {
                Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_8));
                MR_hl_field(MR_mktag(0), Var_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_126, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_126, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_126, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "tabling_info constant has args");
              ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_81, &ModuleInfo_68);
              ProcLabel_69 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_68, PredId_66, ProcId_67);
              {
                DataId_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DataId_235, 0) = ((MR_Box) (ProcLabel_69));
                MR_hl_field(MR_mktag(1), DataId_235, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (DataId_235));
                MR_hl_field(MR_mktag(3), Var_134, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (Var_134));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_132, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RttiProcLabel_70;
              MR_Word Origin_71;
              MR_Word UserOrUCI_74;
              MR_Word ProcKind_75;
              MR_Word Var_116;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_124;
              MR_Word DataId_236;
              MR_Word PredId_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Integer ProcId_238 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
              MR_Word ModuleInfo_239;
              MR_Word Var_245;
              MR_Word Var_246;
              MR_Word Var_247;
              MR_String Var_248;
              MR_Integer Var_249;
              MR_Word Var_250;
              MR_Word Var_251;
              MR_Integer Var_252;
              MR_Word Var_253;
              MR_Word Var_254;
              MR_Word Var_255;
              MR_Word Var_256;
              MR_Word Var_257;
              MR_Word Var_258;
              MR_Word Var_259;
              MR_Word Var_72;
              MR_Word Var_73;

              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_4));
                MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_116, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "deep_profiling_proc_static has args");
              ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_81, &ModuleInfo_239);
              RttiProcLabel_70 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_239, PredId_237, ProcId_238);
              Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 0)));
              Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 1)));
              Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 2)));
              Var_248 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 3)));
              Var_249 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 4)));
              Var_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 5)));
              Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 6)));
              Var_252 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 7)));
              Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 8)));
              Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 9)));
              Var_255 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 10)))) & (MR_Integer) 7);
              Var_256 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_257 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Origin_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 11)));
              Var_258 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 12)))) & (MR_Integer) 1);
              Var_259 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_70, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              succeeded = ((MR_tag((MR_Word) Origin_71)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_71, (MR_Integer) 0)));
                Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_71, (MR_Integer) 1)));
                UserOrUCI_74 = (MR_Integer) 1;
              }
              else
                UserOrUCI_74 = (MR_Integer) 0;
              {
                ProcKind_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ProcKind_75, 0) = ((MR_Box) (UserOrUCI_74));
              }
              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (RttiProcLabel_70));
                MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (ProcKind_75));
              }
              {
                DataId_236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DataId_236, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), DataId_236, 1) = ((MR_Box) (Var_121));
              }
              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_124, 1) = ((MR_Box) (DataId_236));
                MR_hl_field(MR_mktag(3), Var_124, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) (Var_124));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_122, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PredProcId_76;
              MR_Word Var_106;
              MR_Word Var_112;
              MR_Word Var_114;
              MR_Word DataId_240;
              MR_Word PredId_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Integer ProcId_242 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));

              {
                Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_7));
                MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_106, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "table_io_entry has args");
              {
                PredProcId_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredProcId_76, 0) = ((MR_Box) (PredId_241));
                MR_hl_field(MR_mktag(0), PredProcId_76, 1) = ((MR_Box) (ProcId_242));
              }
              {
                DataId_240 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DataId_240, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), DataId_240, 1) = NULL;
                MR_hl_field(MR_mktag(3), DataId_240, 2) = ((MR_Box) (PredProcId_76));
              }
              {
                Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (DataId_240));
                MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (Var_114));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_112, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_300 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word ArgTypes_301;
              MR_Word CellArgs0_302;
              MR_Word MayUseAtomic_303;
              MR_Word CellArgs_304;
              MR_Word PackCode_305;
              MR_Word HowToConstruct_306;
              MR_Word Context_307;
              MR_Word ConstructCode_308;
              MR_Word STATE_VARIABLE_CLD_182_309;

              ll_backend__unify_gen__var_types_3_p_0(STATE_VARIABLE_CI_0_81, RHSVars_17, &ArgTypes_301);
              ll_backend__unify_gen__generate_cons_args_8_p_0(RHSVars_17, ArgTypes_301, ArgModes_18, ArgWidths_19, TakeAddr_21, STATE_VARIABLE_CI_0_81, &CellArgs0_302, &MayUseAtomic_303);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_19, CellArgs0_302, &CellArgs_304, &PackCode_305, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, &STATE_VARIABLE_CLD_182_309);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_19, HowToConstruct0_20, &HowToConstruct_306);
              Context_307 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_16, Ptag_300, CellArgs_304, HowToConstruct_306, MaybeSize_22, Context_307, MayUseAtomic_303, &ConstructCode_308, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CI_82, STATE_VARIABLE_CLD_182_309, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_305, ConstructCode_308);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_221 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word RHSVar_215;
              MR_Word ArgMode_216;
              MR_Word Var_173;
              MR_Word Var_174;

              succeeded = ((MR_tag((MR_Word) RHSVars_17)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                RHSVar_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVars_17, (MR_Integer) 0)));
                Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVars_17, (MR_Integer) 1)));
                succeeded = (Var_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_216 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 0)));
                    Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 1)));
                    succeeded = (Var_174 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
                if ((TakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word Type_213;

                  Type_213 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_81, RHSVar_215);
                  ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(LHSVar_16, RHSVar_215, Ptag_221, ArgMode_216, Type_213, Code_24, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
                }
                else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "direct_arg_tag: take_addr");
                    return;
                  }
                }
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Sectag_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
              MR_Word CellArgs1_52;
              MR_Word STATE_VARIABLE_CLD_166_166;
              MR_Word Var_167;
              MR_Word Var_168;
              MR_Word Var_169;
              MR_Integer Ptag_222 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word ArgTypes_223;
              MR_Word CellArgs0_224;
              MR_Word MayUseAtomic_225;
              MR_Word CellArgs_226;
              MR_Word PackCode_227;
              MR_Word HowToConstruct_228;
              MR_Word Context_229;
              MR_Word ConstructCode_230;

              ll_backend__unify_gen__var_types_3_p_0(STATE_VARIABLE_CI_0_81, RHSVars_17, &ArgTypes_223);
              ll_backend__unify_gen__generate_cons_args_8_p_0(RHSVars_17, ArgTypes_223, ArgModes_18, ArgWidths_19, TakeAddr_21, STATE_VARIABLE_CI_0_81, &CellArgs0_224, &MayUseAtomic_225);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_19, CellArgs0_224, &CellArgs1_52, &PackCode_227, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, &STATE_VARIABLE_CLD_166_166);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_19, HowToConstruct0_20, &HowToConstruct_228);
              {
                Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Sectag_51));
              }
              {
                Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_168, 1) = ((MR_Box) (Var_169));
              }
              {
                Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (Var_168));
                MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                CellArgs_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CellArgs_226, 0) = ((MR_Box) (Var_167));
                MR_hl_field(MR_mktag(1), CellArgs_226, 1) = ((MR_Box) (CellArgs1_52));
              }
              Context_229 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_16, Ptag_222, CellArgs_226, HowToConstruct_228, MaybeSize_22, Context_229, MayUseAtomic_225, &ConstructCode_230, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CI_82, STATE_VARIABLE_CLD_166_166, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_227, ConstructCode_230);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_160;
              MR_Word Var_162;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Integer Ptag_231 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Integer Sectag_232 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));

              {
                Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Sectag_232));
              }
              {
                Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_164, 1) = ((MR_Box) (Var_165));
              }
              {
                Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_162, 2) = ((MR_Box) (Var_164));
              }
              {
                Var_160 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_160, 0) = ((MR_Box) (Ptag_231));
                MR_hl_field(MR_mktag(2), Var_160, 1) = ((MR_Box) (Var_162));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_160, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word RA_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word Var_99;
              MR_Word Var_104;

              {
                Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_6));
                MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_4_p_0(Var_99, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "reserved_address constant has args");
              Var_104 = ll_backend__unify_gen__generate_reserved_address_1_f_0(RA_77);
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_16, Var_104, STATE_VARIABLE_CI_0_81, STATE_VARIABLE_CLD_0_83, STATE_VARIABLE_CLD_84);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_82 = STATE_VARIABLE_CI_0_81;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
              MR_Word _RAs_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_15 = ThisTag_79;

              // direct tailcall eliminated
              ConsTag_15 = next_value_of_ConsTag_15;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Var_15,
  MR_Word Args_16,
  MR_Word GoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_99,
  MR_Word * STATE_VARIABLE_CI_100,
  MR_Word STATE_VARIABLE_CLD_0_101,
  MR_Word * STATE_VARIABLE_CLD_102)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_21;
    MR_Word Preds_22;
    MR_Word PredInfo_23;
    MR_Word Procs_24;
    MR_Word ProcInfo_25;
    MR_Word ProcInfoGoal_26;
    MR_Word CodeModel_27;
    MR_Word ProcHeadVars_28;
    MR_Box conv0_PredInfo_23;
    MR_Box conv1_ProcInfo_25;
    MR_Word CallPred_29;
    MR_Word CallArgs_30;
    MR_Word TypeInfo_293_293;
    MR_Word TypeInfo_294_294;
    MR_Word ProcPred_31;
    MR_Word ProcArgs_32;
    MR_Word CallDeterminism_38;
    MR_Word CallCodeModel_40;
    MR_Word Globals_41;
    MR_Word Deep_42;
    MR_Word UseFloatRegs_43;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_291;
    MR_Word Var_292;
    MR_Word _GoalInfo_39;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Integer Var_35;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_99, &ModuleInfo_21);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_21, &Preds_22);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, Preds_22, ((MR_Box) (PredId_12)), &conv0_PredInfo_23);
    PredInfo_23 = ((MR_Word) conv0_PredInfo_23);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_23, &Procs_24);
    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, Procs_24, ((MR_Box) (ProcId_13)), &conv1_ProcInfo_25);
    ProcInfo_25 = ((MR_Word) conv1_ProcInfo_25);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_25, &ProcInfoGoal_26);
    CodeModel_27 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_25);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_25, &ProcHeadVars_28);
    succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      CallPred_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0)));
      CallArgs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) ProcHeadVars_28)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ProcPred_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcHeadVars_28, (MR_Integer) 0)));
        ProcArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcHeadVars_28, (MR_Integer) 1)));
        Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcInfoGoal_26, (MR_Integer) 0)));
        _GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcInfoGoal_26, (MR_Integer) 1)));
        succeeded = ((((MR_tag((MR_Word) Var_103)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 1)));
          Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 2)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 3)));
          Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 4)));
          CallDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 5)));
          TypeInfo_293_293 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[1];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_293_293, ((MR_Box) (ProcArgs_32)), ((MR_Box) (Var_291)));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_104)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_104, (MR_Integer) 0)));
              Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_104, (MR_Integer) 1)));
              Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_104, (MR_Integer) 2)));
              Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_104, (MR_Integer) 3)));
              TypeInfo_294_294 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_294_294, ((MR_Box) (ProcPred_31)), ((MR_Box) (Var_292)));
              if (succeeded)
              {
                hlds__code_model__determinism_to_code_model_2_p_0(CallDeterminism_38, &CallCodeModel_40);
                succeeded = (CodeModel_27 == CallCodeModel_40);
                if (!(succeeded))
                {
                  succeeded = (CodeModel_27 == (MR_Integer) 2);
                  if (succeeded)
                    succeeded = (CallCodeModel_40 == (MR_Integer) 0);
                }
                if (succeeded)
                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_41);
                  Var_105 = (MR_Integer) 210;
                  libs__globals__lookup_bool_option_3_p_0(Globals_41, Var_105, &Deep_42);
                  succeeded = (Deep_42 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_106 = (MR_Integer) 268;
                    libs__globals__lookup_bool_option_3_p_0(Globals_41, Var_106, &UseFloatRegs_43);
                    succeeded = (UseFloatRegs_43 == (MR_Integer) 0);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      if ((CallArgs_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__code_loc_dep__assign_var_to_var_4_p_0(Var_15, CallPred_29, STATE_VARIABLE_CLD_0_101, STATE_VARIABLE_CLD_102);
        *Code_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        *STATE_VARIABLE_CI_100 = STATE_VARIABLE_CI_0_99;
      }
      else
      {
        MR_Word TypeCtorInfo_289_289;
        MR_Word LoopStart_46;
        MR_Word LoopTest_47;
        MR_Word LoopCounter_48;
        MR_Word NumOldArgs_49;
        MR_Word NewClosure_50;
        MR_Word Zero_51;
        MR_Word One_52;
        MR_Word Two_53;
        MR_Word Three_54;
        MR_Integer NumNewArgs_55;
        MR_Word NumNewArgs_Rval_56;
        MR_Integer NumNewArgsPlusThree_57;
        MR_Word NumNewArgsPlusThree_Rval_58;
        MR_Word OldClosureCode_59;
        MR_Word OldClosure_60;
        MR_Word Context_61;
        MR_Word MaybeAllocId_62;
        MR_Word NewClosureCode_64;
        MR_Word ExtraArgsCode_65;
        MR_Word AssignCode_66;
        MR_Word STATE_VARIABLE_CI_107_107;
        MR_Word STATE_VARIABLE_CI_108_108;
        MR_Word STATE_VARIABLE_CLD_110_110;
        MR_Word STATE_VARIABLE_CLD_112_112;
        MR_Word STATE_VARIABLE_CLD_114_114;
        MR_Word Var_123;
        MR_Word Var_125;
        MR_Word STATE_VARIABLE_CLD_126_126;
        MR_Word Var_129;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_138;
        MR_Word Var_139;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_147;
        MR_Word Var_148;
        MR_Word Var_150;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_157;
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_185;
        MR_Word Var_190;
        MR_Word Var_191;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_198;
        MR_Word Var_199;
        MR_Word Var_200;
        MR_Word Var_202;
        MR_Word Var_203;
        MR_Word Var_204;
        MR_Word Var_205;
        MR_Word Var_207;
        MR_Word Var_208;
        MR_Word Var_209;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_Word Var_213;
        MR_Word Var_214;
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_233;
        MR_Word Var_234;
        MR_Word Var_235;
        MR_Word Var_237;
        MR_Word Var_238;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word Var_245;
        MR_Word STATE_VARIABLE_CLD_248_248;
        MR_Word STATE_VARIABLE_CLD_249_249;
        MR_Word STATE_VARIABLE_CLD_250_250;
        MR_Word STATE_VARIABLE_CLD_251_251;
        MR_Word Var_253;
        MR_Word Var_254;

        ll_backend__code_info__get_next_label_3_p_0(&LoopStart_46, STATE_VARIABLE_CI_0_99, &STATE_VARIABLE_CI_107_107);
        ll_backend__code_info__get_next_label_3_p_0(&LoopTest_47, STATE_VARIABLE_CI_107_107, &STATE_VARIABLE_CI_108_108);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &LoopCounter_48, STATE_VARIABLE_CLD_0_101, &STATE_VARIABLE_CLD_110_110);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NumOldArgs_49, STATE_VARIABLE_CLD_110_110, &STATE_VARIABLE_CLD_112_112);
        ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NewClosure_50, STATE_VARIABLE_CLD_112_112, &STATE_VARIABLE_CLD_114_114);
        Zero_51 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
        One_52 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11]);
        Two_53 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[14]);
        Three_54 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[15]);
        mercury__list__length_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], CallArgs_30, &NumNewArgs_55);
        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (NumNewArgs_55));
        }
        {
          NumNewArgs_Rval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), NumNewArgs_Rval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), NumNewArgs_Rval_56, 1) = ((MR_Box) (Var_123));
        }
        NumNewArgsPlusThree_57 = (NumNewArgs_55 + (MR_Integer) 3);
        {
          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (NumNewArgsPlusThree_57));
        }
        {
          NumNewArgsPlusThree_Rval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), NumNewArgsPlusThree_Rval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), NumNewArgsPlusThree_Rval_58, 1) = ((MR_Box) (Var_125));
        }
        ll_backend__code_loc_dep__produce_variable_6_p_0(CallPred_29, &OldClosureCode_59, &OldClosure_60, STATE_VARIABLE_CI_108_108, STATE_VARIABLE_CLD_114_114, &STATE_VARIABLE_CLD_126_126);
        Context_61 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
        ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(Context_61, (MR_String) "closure", NumNewArgsPlusThree_57, &MaybeAllocId_62, STATE_VARIABLE_CI_108_108, STATE_VARIABLE_CI_100);
        TypeCtorInfo_289_289 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        Var_139 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[0]);
        {
          Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(3), Var_138, 2) = ((MR_Box) (OldClosure_60));
          MR_hl_field(MR_mktag(3), Var_138, 3) = ((MR_Box) (Two_53));
        }
        {
          Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (Var_138));
        }
        {
          Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (NumOldArgs_49));
          MR_hl_field(MR_mktag(3), Var_136, 2) = ((MR_Box) (Var_137));
        }
        {
          Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (Var_136));
          MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) ((MR_String) "get number of arguments"));
        }
        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3]);
        {
          Var_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (NumOldArgs_49));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(3), Var_147, 2) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(3), Var_147, 3) = ((MR_Box) (NumNewArgsPlusThree_Rval_58));
        }
        {
          Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (NewClosure_50));
          MR_hl_field(MR_mktag(3), Var_144, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), Var_144, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), Var_144, 4) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(3), Var_144, 5) = ((MR_Box) (MaybeAllocId_62));
          MR_hl_field(MR_mktag(3), Var_144, 6) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_144, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), Var_144, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) ((MR_String) "allocate new closure"));
        }
        {
          Var_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (NewClosure_50));
        }
        {
          Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_157, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(3), Var_157, 2) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(3), Var_157, 3) = ((MR_Box) (Zero_51));
        }
        {
          Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(3), Var_162, 2) = ((MR_Box) (OldClosure_60));
          MR_hl_field(MR_mktag(3), Var_162, 3) = ((MR_Box) (Zero_51));
        }
        {
          Var_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (Var_162));
        }
        {
          Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_156, 1) = ((MR_Box) (Var_157));
          MR_hl_field(MR_mktag(3), Var_156, 2) = ((MR_Box) (Var_161));
        }
        {
          Var_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_155, 0) = ((MR_Box) (Var_156));
          MR_hl_field(MR_mktag(0), Var_155, 1) = ((MR_Box) ((MR_String) "set closure layout structure"));
        }
        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(3), Var_169, 2) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(3), Var_169, 3) = ((MR_Box) (One_52));
        }
        {
          Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(3), Var_174, 2) = ((MR_Box) (OldClosure_60));
          MR_hl_field(MR_mktag(3), Var_174, 3) = ((MR_Box) (One_52));
        }
        {
          Var_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) (Var_174));
        }
        {
          Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_168, 1) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(3), Var_168, 2) = ((MR_Box) (Var_173));
        }
        {
          Var_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) ((MR_String) "set closure code pointer"));
        }
        {
          Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_181, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(3), Var_181, 2) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(3), Var_181, 3) = ((MR_Box) (Two_53));
        }
        {
          Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_185, 1) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(3), Var_185, 2) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(3), Var_185, 3) = ((MR_Box) (NumNewArgs_Rval_56));
        }
        {
          Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (Var_181));
          MR_hl_field(MR_mktag(3), Var_180, 2) = ((MR_Box) (Var_185));
        }
        {
          Var_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(0), Var_179, 1) = ((MR_Box) ((MR_String) "set new number of arguments"));
        }
        {
          Var_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_193, 1) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(3), Var_193, 2) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(3), Var_193, 3) = ((MR_Box) (Three_54));
        }
        {
          Var_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_192, 1) = ((MR_Box) (NumOldArgs_49));
          MR_hl_field(MR_mktag(3), Var_192, 2) = ((MR_Box) (Var_193));
        }
        {
          Var_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_191, 0) = ((MR_Box) (Var_192));
          MR_hl_field(MR_mktag(0), Var_191, 1) = ((MR_Box) ((MR_String) "set up loop limit"));
        }
        {
          Var_200 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_200, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_200, 1) = ((MR_Box) (LoopCounter_48));
          MR_hl_field(MR_mktag(3), Var_200, 2) = ((MR_Box) (Three_54));
        }
        {
          Var_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_199, 0) = ((MR_Box) (Var_200));
          MR_hl_field(MR_mktag(0), Var_199, 1) = ((MR_Box) ((MR_String) "initialize loop counter"));
        }
        {
          Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (LoopTest_47));
        }
        {
          Var_204 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_204, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), Var_204, 1) = ((MR_Box) (Var_205));
        }
        {
          Var_203 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_203, 0) = ((MR_Box) (Var_204));
          MR_hl_field(MR_mktag(0), Var_203, 1) = ((MR_Box) ((MR_String) "enter the copy loop at the conceptual top"));
        }
        {
          Var_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_209, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_209, 1) = ((MR_Box) (LoopStart_46));
        }
        {
          Var_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_208, 0) = ((MR_Box) (Var_209));
          MR_hl_field(MR_mktag(0), Var_208, 1) = ((MR_Box) ((MR_String) "start of loop, nofulljump"));
        }
        {
          Var_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (LoopCounter_48));
        }
        {
          Var_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_214, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_214, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(3), Var_214, 2) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(3), Var_214, 3) = ((MR_Box) (Var_218));
        }
        {
          Var_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_220, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_220, 1) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(3), Var_220, 2) = ((MR_Box) (OldClosure_60));
          MR_hl_field(MR_mktag(3), Var_220, 3) = ((MR_Box) (Var_218));
        }
        {
          Var_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_219, 0) = ((MR_Box) (Var_220));
        }
        {
          Var_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_213, 1) = ((MR_Box) (Var_214));
          MR_hl_field(MR_mktag(3), Var_213, 2) = ((MR_Box) (Var_219));
        }
        {
          Var_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_212, 0) = ((MR_Box) (Var_213));
          MR_hl_field(MR_mktag(0), Var_212, 1) = ((MR_Box) ((MR_String) "copy old hidden argument"));
        }
        {
          Var_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_228, 1) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(3), Var_228, 2) = ((MR_Box) (Var_218));
          MR_hl_field(MR_mktag(3), Var_228, 3) = ((MR_Box) (One_52));
        }
        {
          Var_227 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_227, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_227, 1) = ((MR_Box) (LoopCounter_48));
          MR_hl_field(MR_mktag(3), Var_227, 2) = ((MR_Box) (Var_228));
        }
        {
          Var_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_226, 0) = ((MR_Box) (Var_227));
          MR_hl_field(MR_mktag(0), Var_226, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
        }
        {
          Var_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_235, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_235, 1) = ((MR_Box) (LoopTest_47));
        }
        {
          Var_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_234, 0) = ((MR_Box) (Var_235));
          MR_hl_field(MR_mktag(0), Var_234, 1) = ((MR_Box) ((MR_String) "do we have more old arguments to copy\? nofulljump"));
        }
        {
          Var_240 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_240, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_240, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[17])));
          MR_hl_field(MR_mktag(3), Var_240, 2) = ((MR_Box) (Var_218));
          MR_hl_field(MR_mktag(3), Var_240, 3) = ((MR_Box) (Var_150));
        }
        {
          Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_245, 0) = ((MR_Box) (LoopStart_46));
        }
        {
          Var_239 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_239, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_239, 1) = ((MR_Box) (Var_240));
          MR_hl_field(MR_mktag(3), Var_239, 2) = ((MR_Box) (Var_245));
        }
        {
          Var_238 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_238, 0) = ((MR_Box) (Var_239));
          MR_hl_field(MR_mktag(0), Var_238, 1) = ((MR_Box) ((MR_String) "repeat the loop\?"));
        }
        {
          Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (Var_238));
          MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (Var_234));
          MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) (Var_237));
        }
        {
          Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (Var_226));
          MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) (Var_233));
        }
        {
          Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (Var_212));
          MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_225));
        }
        {
          Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (Var_208));
          MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_211));
        }
        {
          Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Var_203));
          MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_207));
        }
        {
          Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (Var_199));
          MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_202));
        }
        {
          Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (Var_191));
          MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_198));
        }
        {
          Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (Var_179));
          MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_190));
        }
        {
          Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_178));
        }
        {
          Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
          MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_166));
        }
        {
          Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_154));
        }
        {
          Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_142));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[16]));
          MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_134));
        }
        NewClosureCode_64 = mercury__cord__from_list_1_f_0(TypeCtorInfo_289_289, Var_129);
        ll_backend__unify_gen__generate_extra_closure_args_7_p_0(CallArgs_30, LoopCounter_48, NewClosure_50, &ExtraArgsCode_65, *STATE_VARIABLE_CI_100, STATE_VARIABLE_CLD_126_126, &STATE_VARIABLE_CLD_248_248);
        ll_backend__code_loc_dep__release_reg_3_p_0(LoopCounter_48, STATE_VARIABLE_CLD_248_248, &STATE_VARIABLE_CLD_249_249);
        ll_backend__code_loc_dep__release_reg_3_p_0(NumOldArgs_49, STATE_VARIABLE_CLD_249_249, &STATE_VARIABLE_CLD_250_250);
        ll_backend__code_loc_dep__release_reg_3_p_0(NewClosure_50, STATE_VARIABLE_CLD_250_250, &STATE_VARIABLE_CLD_251_251);
        ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(Var_15, NewClosure_50, &AssignCode_66, *STATE_VARIABLE_CI_100, STATE_VARIABLE_CLD_251_251, STATE_VARIABLE_CLD_102);
        Var_254 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_289_289, ExtraArgsCode_65, AssignCode_66);
        Var_253 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_289_289, NewClosureCode_64, Var_254);
        *Code_18 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_289_289, OldClosureCode_59, Var_253);
      }
    else
    {
      MR_Word TypeCtorInfo_290_290;
      MR_Word CodeAddr_67;
      MR_Word ProcLabel_68;
      MR_Word CodeAddrRval_69;
      MR_Word ClosureInfo_70;
      MR_Word ModuleName_71;
      MR_String FileName_72;
      MR_Integer LineNumber_73;
      MR_Word GoalId_74;
      MR_Integer GoalIdNum_75;
      MR_String GoalIdStr_76;
      MR_Word CallerProcLabel_77;
      MR_Integer SeqNo_78;
      MR_Word StaticCellInfo0_79;
      MR_Word PredOrigin_80;
      MR_Word StaticCellInfo_81;
      MR_Word ClosureLayoutTypedRvals_82;
      MR_Word Data_83;
      MR_Word ClosureDataAddr_84;
      MR_Word ClosureLayoutRval_85;
      MR_Word ArgInfo_86;
      MR_Word VarTypes_87;
      MR_Word MayUseAtomic0_88;
      MR_Word ArgsR_89;
      MR_Word ArgsF_90;
      MR_Word MayUseAtomic_91;
      MR_Integer NumArgsR_92;
      MR_Integer NumArgsF_93;
      MR_Integer NumArgsRF_94;
      MR_Word ArgsRF_95;
      MR_Word Vector_96;
      MR_Word Var_257;
      MR_Word STATE_VARIABLE_CI_258_258;
      MR_Word STATE_VARIABLE_CI_259_259;
      MR_Word STATE_VARIABLE_CI_260_260;
      MR_Word STATE_VARIABLE_CI_261_261;
      MR_Word Var_262;
      MR_Word Var_264;
      MR_Word Var_266;
      MR_Word Var_267;
      MR_Word Var_269;
      MR_Word Var_270;
      MR_Word Var_271;
      MR_Word Var_272;
      MR_Integer Var_275;
      MR_Word STATE_VARIABLE_CI_276_276;
      MR_Word Context_281;
      MR_Word MaybeAllocId_282;

      CodeAddr_67 = ll_backend__code_info__make_proc_entry_label_5_f_0(STATE_VARIABLE_CI_0_99, ModuleInfo_21, PredId_12, ProcId_13, (MR_Integer) 0);
      ProcLabel_68 = ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(CodeAddr_67);
      {
        Var_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
        MR_hl_field(MR_mktag(3), Var_257, 1) = ((MR_Box) (CodeAddr_67));
      }
      {
        CodeAddrRval_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CodeAddrRval_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), CodeAddrRval_69, 1) = ((MR_Box) (Var_257));
      }
      ll_backend__continuation_info__generate_closure_layout_4_p_0(ModuleInfo_21, PredId_12, ProcId_13, &ClosureInfo_70);
      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_21, &ModuleName_71);
      Context_281 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
      mercury__term__context_file_2_p_0(Context_281, &FileName_72);
      mercury__term__context_line_2_p_0(Context_281, &LineNumber_73);
      GoalId_74 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_17);
      GoalIdNum_75 = (MR_Integer) GoalId_74;
      GoalIdStr_76 = mercury__string__int_to_string_1_f_0(GoalIdNum_75);
      ll_backend__code_info__get_proc_label_2_p_0(STATE_VARIABLE_CI_0_99, &CallerProcLabel_77);
      ll_backend__code_info__get_next_closure_seq_no_3_p_0(&SeqNo_78, STATE_VARIABLE_CI_0_99, &STATE_VARIABLE_CI_258_258);
      ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_258_258, &StaticCellInfo0_79);
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_23, &PredOrigin_80);
      ll_backend__stack_layout__construct_closure_layout_13_p_0(CallerProcLabel_77, SeqNo_78, ClosureInfo_70, ProcLabel_68, ModuleName_71, FileName_72, LineNumber_73, PredOrigin_80, GoalIdStr_76, StaticCellInfo0_79, &StaticCellInfo_81, &ClosureLayoutTypedRvals_82, &Data_83);
      ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_81, STATE_VARIABLE_CI_258_258, &STATE_VARIABLE_CI_259_259);
      ll_backend__code_info__add_closure_layout_3_p_0(Data_83, STATE_VARIABLE_CI_259_259, &STATE_VARIABLE_CI_260_260);
      ll_backend__code_info__add_scalar_static_cell_4_p_0(ClosureLayoutTypedRvals_82, &ClosureDataAddr_84, STATE_VARIABLE_CI_260_260, &STATE_VARIABLE_CI_261_261);
      {
        Var_262 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_262, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
        MR_hl_field(MR_mktag(3), Var_262, 1) = ((MR_Box) (ClosureDataAddr_84));
        MR_hl_field(MR_mktag(3), Var_262, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ClosureLayoutRval_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ClosureLayoutRval_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ClosureLayoutRval_85, 1) = ((MR_Box) (Var_262));
      }
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_25, &ArgInfo_86);
      ll_backend__code_info__get_vartypes_2_p_0(STATE_VARIABLE_CI_261_261, &VarTypes_87);
      MayUseAtomic0_88 = ll_backend__unify_gen__initial_may_use_atomic_1_f_0(ModuleInfo_21);
      ll_backend__unify_gen__generate_pred_args_8_p_0(STATE_VARIABLE_CI_261_261, VarTypes_87, Args_16, ArgInfo_86, &ArgsR_89, &ArgsF_90, MayUseAtomic0_88, &MayUseAtomic_91);
      TypeCtorInfo_290_290 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0;
      mercury__list__length_2_p_0(TypeCtorInfo_290_290, ArgsR_89, &NumArgsR_92);
      mercury__list__length_2_p_0(TypeCtorInfo_290_290, ArgsF_90, &NumArgsF_93);
      NumArgsRF_94 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumArgsR_92, NumArgsF_93);
      mercury__list__append_3_p_1(TypeCtorInfo_290_290, ArgsR_89, ArgsF_90, &ArgsRF_95);
      {
        Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_264, 0) = ((MR_Box) (ClosureLayoutRval_85));
        MR_hl_field(MR_mktag(1), Var_264, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        Var_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_267, 0) = ((MR_Box) (CodeAddrRval_69));
        MR_hl_field(MR_mktag(1), Var_267, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_272, 0) = ((MR_Box) (NumArgsRF_94));
      }
      {
        Var_271 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_271, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_271, 1) = ((MR_Box) (Var_272));
      }
      {
        Var_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_270, 0) = ((MR_Box) (Var_271));
        MR_hl_field(MR_mktag(1), Var_270, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        Var_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_269, 0) = ((MR_Box) (Var_270));
        MR_hl_field(MR_mktag(1), Var_269, 1) = ((MR_Box) (ArgsRF_95));
      }
      {
        Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_266, 0) = ((MR_Box) (Var_267));
        MR_hl_field(MR_mktag(1), Var_266, 1) = ((MR_Box) (Var_269));
      }
      {
        Vector_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Vector_96, 0) = ((MR_Box) (Var_264));
        MR_hl_field(MR_mktag(1), Vector_96, 1) = ((MR_Box) (Var_266));
      }
      Var_275 = mercury__list__length_1_f_0(TypeCtorInfo_290_290, Vector_96);
      ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(Context_281, (MR_String) "closure", Var_275, &MaybeAllocId_282, STATE_VARIABLE_CI_261_261, &STATE_VARIABLE_CI_276_276);
      ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_15, (MR_Integer) 0, (MR_Integer) 0, Vector_96, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MaybeAllocId_282, MayUseAtomic_91, Code_18, STATE_VARIABLE_CI_276_276, STATE_VARIABLE_CI_100, STATE_VARIABLE_CLD_0_101, STATE_VARIABLE_CLD_102);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
  MR_Word Context_7,
  MR_String VarTypeMsg_8,
  MR_Integer Size_9,
  MR_Word * MaybeAllocId_10,
  MR_Word STATE_VARIABLE_CI_0_15,
  MR_Word * STATE_VARIABLE_CI_16)
{
  {
    MR_Word Globals_12;
    MR_Word ProfileMemory_13;

    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_15, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 209, &ProfileMemory_13);
    switch (ProfileMemory_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeAllocId_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_CI_16 = STATE_VARIABLE_CI_0_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllocId_14;

          ll_backend__code_info__add_alloc_site_info_6_p_0(Context_7, VarTypeMsg_8, Size_9, &AllocId_14, STATE_VARIABLE_CI_0_15, STATE_VARIABLE_CI_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeAllocId_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AllocId_14));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__initial_may_use_atomic_1_f_0(
  MR_Word ModuleInfo_3)
{
  {
    MR_Word InitMayUseAtomic_4;
    MR_Word Globals_5;
    MR_Word UseAtomicCells_6;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 465, &UseAtomicCells_6);
    switch (UseAtomicCells_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InitMayUseAtomic_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        InitMayUseAtomic_4 = (MR_Integer) 0;
        break;
    }
    return InitMayUseAtomic_4;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_pred_args_8_p_0(
  MR_Word CI_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_7,
  MR_Word * STATE_VARIABLE_MayUseAtomic_8)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_MayUseAtomic_8 = STATE_VARIABLE_MayUseAtomic_0_7;
  }
  else
  {
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_pred_args\'/8", (MR_String) "insufficient args");
        return;
      }
    }
    else
    {
      MR_Word ArgInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word ArgInfos_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word RegType_36;
      MR_Word ArgMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_31, (MR_Integer) 1)));
      MR_Word CellArg_41;
      MR_Word Type_42;
      MR_Word ModuleInfo_43;
      MR_Word ArgsR0_44;
      MR_Word ArgsF0_45;
      MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_31, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_MayUseAtomic_52_52;
      MR_Integer Var_37;

      RegType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 0)));
      Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_48, (MR_Integer) 1)));
      switch (ArgMode_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IsDummy_39;
            MR_Word Rval_40;

            IsDummy_39 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_1, Var_55);
            switch (IsDummy_39) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Rval_40 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
                }
                break;
              case (MR_Integer) 1:
                {
                  Rval_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Rval_40, 0) = ((MR_Box) (Var_55));
                }
                break;
            }
            {
              CellArg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CellArg_41, 0) = ((MR_Box) (Rval_40));
              MR_hl_field(MR_mktag(1), CellArg_41, 1) = ((MR_Box) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          CellArg_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_2, Var_55, &Type_42);
      ll_backend__code_info__get_module_info_2_p_0(CI_1, &ModuleInfo_43);
      check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_43, Type_42, STATE_VARIABLE_MayUseAtomic_0_7, &STATE_VARIABLE_MayUseAtomic_52_52);
      ll_backend__unify_gen__generate_pred_args_8_p_0(CI_1, VarTypes_2, Var_54, ArgInfos_32, &ArgsR0_44, &ArgsF0_45, STATE_VARIABLE_MayUseAtomic_52_52, STATE_VARIABLE_MayUseAtomic_8);
      switch (RegType_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *HeadVar__5_5 = ArgsR0_44;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CellArg_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsF0_45));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CellArg_41));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsR0_44));
            }
            *HeadVar__6_6 = ArgsF0_45;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_extra_closure_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LoopCounter_2,
  MR_Word NewClosure_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
  }
  else
  {
    MR_Word TypeCtorInfo_60_60;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word FieldLval_21;
    MR_Word IsDummy_22;
    MR_Word ProduceCode_23;
    MR_Word AssignCode_24;
    MR_Word IncrCode_26;
    MR_Word VarsCode_27;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_CLD_34_34;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_55;
    MR_Word Var_56;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (NewClosure_3));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (LoopCounter_2));
    }
    {
      FieldLval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FieldLval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), FieldLval_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[0])));
      MR_hl_field(MR_mktag(3), FieldLval_21, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(3), FieldLval_21, 3) = ((MR_Box) (Var_33));
    }
    IsDummy_22 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(HeadVar__5_5, Var_14);
    switch (IsDummy_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_58_58 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          MR_Word Var_38;
          MR_Word Var_39;

          ProduceCode_23 = mercury__cord__empty_0_f_0(TypeCtorInfo_58_58);
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (FieldLval_21));
            MR_hl_field(MR_mktag(3), Var_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) ((MR_String) "set new argument field (dummy type)"));
          }
          AssignCode_24 = mercury__cord__singleton_1_f_0(TypeCtorInfo_58_58, ((MR_Box) (Var_38)));
          STATE_VARIABLE_CLD_34_34 = STATE_VARIABLE_CLD_0_6;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Value_25;
          MR_Word Var_35;
          MR_Word Var_36;

          ll_backend__code_loc_dep__produce_variable_6_p_0(Var_14, &ProduceCode_23, &Value_25, HeadVar__5_5, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_34_34);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (FieldLval_21));
            MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (Value_25));
          }
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_String) "set new argument field"));
          }
          AssignCode_24 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_35)));
        }
        break;
    }
    TypeCtorInfo_60_60 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3])));
      MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(3), Var_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (LoopCounter_2));
      MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) ((MR_String) "increment argument counter"));
    }
    IncrCode_26 = mercury__cord__singleton_1_f_0(TypeCtorInfo_60_60, ((MR_Box) (Var_44)));
    ll_backend__unify_gen__generate_extra_closure_args_7_p_0(Vars_15, LoopCounter_2, NewClosure_3, &VarsCode_27, HeadVar__5_5, STATE_VARIABLE_CLD_34_34, STATE_VARIABLE_CLD_7);
    Var_56 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_60_60, IncrCode_26, VarsCode_27);
    Var_55 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_60_60, AssignCode_24, Var_56);
    *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_60_60, ProduceCode_23, Var_55);
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
            MR_Integer Int64_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Int64_15));
            }
            *Type_6 = (MR_Integer) 8;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer UInt64_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), IntTag_4, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *Const_5 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (UInt64_16));
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
    succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (RightTopFunctorMode_22 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "test in arg of [de]construction");
        return;
      }
    }
    else
    {
      succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (RightTopFunctorMode_22 == (MR_Integer) 1);
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "left-to-right data flow in construction");
          return;
        }
      }
      else
      {
        succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (RightTopFunctorMode_22 == (MR_Integer) 0);
        if (succeeded)
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
        else
        {
          succeeded = (LeftTopFunctorMode_21 == (MR_Integer) 2);
          if (succeeded)
            succeeded = (RightTopFunctorMode_22 == (MR_Integer) 2);
          if (succeeded)
          {
            MR_Word Var_34;

            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Ptag_12));
            }
            ll_backend__code_loc_dep__assign_const_to_var_5_p_0(Var_10, Var_34, CI_16, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
            *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "some strange unify");
              return;
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_8_p_0(
  MR_Word L_9,
  MR_Word R_10,
  MR_Word ArgMode_11,
  MR_Word Type_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word LeftFromToInsts_17;
    MR_Word RightFromToInsts_18;
    MR_Word LeftTopFunctorMode_19;
    MR_Word RightTopFunctorMode_20;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    LeftFromToInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 0)));
    RightFromToInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_11, (MR_Integer) 1)));
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_16, LeftFromToInsts_17, Type_12, &LeftTopFunctorMode_19);
    check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_16, RightFromToInsts_18, Type_12, &RightTopFunctorMode_20);
    succeeded = (LeftTopFunctorMode_19 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (RightTopFunctorMode_20 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "test in arg of [de]construction");
        return;
      }
    }
    else
    {
      succeeded = (LeftTopFunctorMode_19 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (RightTopFunctorMode_20 == (MR_Integer) 1);
      if (succeeded)
        ll_backend__unify_gen__generate_sub_assign_6_p_0(R_10, L_9, Code_13, CI_14, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
      else
      {
        succeeded = (LeftTopFunctorMode_19 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (RightTopFunctorMode_20 == (MR_Integer) 0);
        if (succeeded)
          ll_backend__unify_gen__generate_sub_assign_6_p_0(L_9, R_10, Code_13, CI_14, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
        else
        {
          succeeded = (LeftTopFunctorMode_19 == (MR_Integer) 2);
          if (succeeded)
            succeeded = (RightTopFunctorMode_20 == (MR_Integer) 2);
          if (succeeded)
          {
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "some strange unify");
              return;
            }
          }
          *STATE_VARIABLE_CLD_22 = STATE_VARIABLE_CLD_0_21;
        }
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_6_p_0(
  MR_Word Left_7,
  MR_Word Right_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Left_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), Left_7, (MR_Integer) 1)));
      MR_Word Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), Left_7, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) Right_8)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/6", (MR_String) "lval/lval");
          return;
        }
      }
      else
      {
        MR_Word TypeCtorInfo_138_138;
        MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Right_8, (MR_Integer) 0)));
        MR_Word SourceCode_19;
        MR_Word Source_20;
        MR_Word Lval_21;
        MR_Word MaterializeCode_22;
        MR_Word AssignCode_23;
        MR_Word STATE_VARIABLE_CLD_62_62;
        MR_Word Var_96;

        ll_backend__code_loc_dep__produce_variable_6_p_0(Var_18, &SourceCode_19, &Source_20, CI_10, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_62_62);
        ll_backend__code_loc_dep__materialize_vars_in_lval_6_p_0(Var_169, &Lval_21, &MaterializeCode_22, CI_10, STATE_VARIABLE_CLD_62_62, STATE_VARIABLE_CLD_41);
        switch (MR_tag((MR_Word) Var_168)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_168)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_93;
                  MR_Word Var_94;

                  {
                    Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Lval_21));
                    MR_hl_field(MR_mktag(3), Var_94, 2) = ((MR_Box) (Source_20));
                  }
                  {
                    Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (Var_94));
                    MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) ((MR_String) "Copy value"));
                  }
                  AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_93)));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word LvalA_30;
                  MR_Word LvalB_31;

                  succeeded = ll_backend__unify_gen__field_offset_pair_3_p_0(Lval_21, &LvalA_30, &LvalB_31);
                  if (succeeded)
                  {
                    MR_Word SrcA_32;
                    MR_Word SrcB_33;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_74;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Var_77;

                    {
                      SrcA_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SrcA_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), SrcA_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                      MR_hl_field(MR_mktag(3), SrcA_32, 2) = ((MR_Box) (Source_20));
                      MR_hl_field(MR_mktag(3), SrcA_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
                    }
                    {
                      SrcB_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SrcB_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), SrcB_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                      MR_hl_field(MR_mktag(3), SrcB_33, 2) = ((MR_Box) (Source_20));
                      MR_hl_field(MR_mktag(3), SrcB_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
                    }
                    {
                      Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (LvalA_30));
                      MR_hl_field(MR_mktag(3), Var_74, 2) = ((MR_Box) (SrcA_32));
                    }
                    {
                      Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Var_74));
                      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) ((MR_String) "Update double word"));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (LvalB_31));
                      MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) (SrcB_33));
                    }
                    {
                      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_77));
                      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) ((MR_String) "Update double word"));
                    }
                    {
                      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
                      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
                      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
                    }
                    AssignCode_23 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, Var_72);
                  }
                  else
                  {
                    {
                      mercury__require__sorry_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/6", (MR_String) "double_word: non-field lval");
                      return;
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Mask_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_168, (MR_Integer) 0)));
              MR_Word ComplementMask_26;
              MR_Word MaskOld_27;
              MR_Word ShiftNew_28;
              MR_Word Combined_29;
              MR_Word Var_82;
              MR_Integer Var_83;
              MR_Integer Var_84;
              MR_Word Var_87;
              MR_Word Var_90;
              MR_Word Var_91;

              Var_84 = mercury__int__f_60_60_2_f_0(Mask_24, (MR_Integer) 0);
              Var_83 = ~(Var_84);
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
              }
              {
                ComplementMask_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ComplementMask_26, 1) = ((MR_Box) (Var_82));
              }
              {
                Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Lval_21));
              }
              {
                MaskOld_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), MaskOld_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
                MR_hl_field(MR_mktag(3), MaskOld_27, 2) = ((MR_Box) (Var_87));
                MR_hl_field(MR_mktag(3), MaskOld_27, 3) = ((MR_Box) (ComplementMask_26));
              }
              ShiftNew_28 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(Source_20, (MR_Integer) 0);
              {
                Combined_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Combined_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Combined_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13])));
                MR_hl_field(MR_mktag(3), Combined_29, 2) = ((MR_Box) (MaskOld_27));
                MR_hl_field(MR_mktag(3), Combined_29, 3) = ((MR_Box) (ShiftNew_28));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (Lval_21));
                MR_hl_field(MR_mktag(3), Var_91, 2) = ((MR_Box) (Combined_29));
              }
              {
                Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Var_91));
                MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_90)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Mask_141 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_168, (MR_Integer) 1)));
              MR_Integer Shift_142 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_168, (MR_Integer) 0)));
              MR_Word ComplementMask_143;
              MR_Word MaskOld_144;
              MR_Word ShiftNew_145;
              MR_Word Combined_146;
              MR_Word Var_147;
              MR_Integer Var_148;
              MR_Integer Var_149;
              MR_Word Var_152;
              MR_Word Var_155;
              MR_Word Var_156;

              Var_149 = mercury__int__f_60_60_2_f_0(Mask_141, Shift_142);
              Var_148 = ~(Var_149);
              {
                Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
              }
              {
                ComplementMask_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ComplementMask_143, 1) = ((MR_Box) (Var_147));
              }
              {
                Var_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_152, 0) = ((MR_Box) (Lval_21));
              }
              {
                MaskOld_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), MaskOld_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
                MR_hl_field(MR_mktag(3), MaskOld_144, 2) = ((MR_Box) (Var_152));
                MR_hl_field(MR_mktag(3), MaskOld_144, 3) = ((MR_Box) (ComplementMask_143));
              }
              ShiftNew_145 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(Source_20, Shift_142);
              {
                Combined_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Combined_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), Combined_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13])));
                MR_hl_field(MR_mktag(3), Combined_146, 2) = ((MR_Box) (MaskOld_144));
                MR_hl_field(MR_mktag(3), Combined_146, 3) = ((MR_Box) (ShiftNew_145));
              }
              {
                Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_156, 1) = ((MR_Box) (Lval_21));
                MR_hl_field(MR_mktag(3), Var_156, 2) = ((MR_Box) (Combined_146));
              }
              {
                Var_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_155, 0) = ((MR_Box) (Var_156));
                MR_hl_field(MR_mktag(0), Var_155, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (Var_155)));
            }
            break;
        }
        TypeCtorInfo_138_138 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        Var_96 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_138_138, MaterializeCode_22, AssignCode_23);
        *Code_9 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_138_138, SourceCode_19, Var_96);
      }
    }
    else
    {
      MR_Word Lvar_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Left_7, (MR_Integer) 0)));

      succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_40, Lvar_35);
      if (succeeded)
        if (((MR_tag((MR_Word) Right_8)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word RightWidth_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Right_8, (MR_Integer) 1)));
          MR_Word Lval_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), Right_8, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) RightWidth_36)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(RightWidth_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(Lvar_35, Lval_115, Code_9, CI_10, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word LvalA_105;
                    MR_Word LvalB_106;

                    succeeded = ll_backend__unify_gen__field_offset_pair_3_p_0(Lval_115, &LvalA_105, &LvalB_106);
                    if (succeeded)
                    {
                      MR_Word Var_44;
                      MR_Word Var_45;
                      MR_Word Var_46;
                      MR_Word Var_48;
                      MR_Word Rval_104;

                      {
                        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (LvalA_105));
                      }
                      {
                        Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (LvalB_106));
                      }
                      {
                        Rval_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Rval_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), Rval_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
                        MR_hl_field(MR_mktag(3), Rval_104, 2) = ((MR_Box) (Var_44));
                        MR_hl_field(MR_mktag(3), Rval_104, 3) = ((MR_Box) (Var_45));
                      }
                      {
                        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (LvalB_106));
                        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (LvalA_105));
                        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
                      }
                      ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(Lvar_35, Var_46, Rval_104, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
                    }
                    else
                    {
                      {
                        mercury__require__sorry_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/6", (MR_String) "double_word: non-field lval");
                        return;
                      }
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Rval0_37;
                MR_Word Rval_38;
                MR_Word Var_56;
                MR_Word Var_57;
                MR_Word Var_58;
                MR_Integer Mask_102 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RightWidth_36, (MR_Integer) 0)));

                {
                  Rval0_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Rval0_37, 0) = ((MR_Box) (Lval_115));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Mask_102));
                }
                {
                  Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
                }
                {
                  Rval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), Rval_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
                  MR_hl_field(MR_mktag(3), Rval_38, 2) = ((MR_Box) (Rval0_37));
                  MR_hl_field(MR_mktag(3), Rval_38, 3) = ((MR_Box) (Var_56));
                }
                {
                  Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Lval_115));
                  MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(Lvar_35, Var_58, Rval_38, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_53;
                MR_Integer Shift_100 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RightWidth_36, (MR_Integer) 0)));
                MR_Word Rval0_159;
                MR_Word Rval_160;
                MR_Word Var_163;
                MR_Word Var_164;
                MR_Word Var_165;
                MR_Integer Mask_167 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RightWidth_36, (MR_Integer) 1)));

                {
                  Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Lval_115));
                }
                Rval0_159 = ll_backend__unify_gen__right_shift_rval_2_f_0(Var_53, Shift_100);
                {
                  Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Mask_167));
                }
                {
                  Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (Var_164));
                }
                {
                  Rval_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), Rval_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
                  MR_hl_field(MR_mktag(3), Rval_160, 2) = ((MR_Box) (Rval0_159));
                  MR_hl_field(MR_mktag(3), Rval_160, 3) = ((MR_Box) (Var_163));
                }
                {
                  Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Lval_115));
                  MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(Lvar_35, Var_165, Rval_160, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
              }
              break;
          }
        }
        else
        {
          MR_Word Rvar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Right_8, (MR_Integer) 0)));

          ll_backend__code_loc_dep__assign_var_to_var_4_p_0(Lvar_35, Rvar_39, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
          *Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
      else
      {
        *Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        *STATE_VARIABLE_CLD_41 = STATE_VARIABLE_CLD_0_40;
      }
    }
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
  MR_Word Rval_4,
  MR_Integer Shift_5)
{
  {
    MR_Word HeadVar__3_3;
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
    return HeadVar__3_3;
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
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 2) = ((MR_Box) (Rval_4));
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__field_offset_pair_3_p_0(
  MR_Word LvalA_4,
  MR_Word * LvalA_2,
  MR_Word * LvalB_5)
{
  {
    MR_bool succeeded;
    MR_Word Ptag_6;
    MR_Word Address_7;
    MR_Integer Offset_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Integer Var_13;
    MR_Integer Var_14;

    *LvalA_2 = LvalA_4;
    succeeded = ((((MR_tag((MR_Word) LvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
    if (succeeded)
    {
      Ptag_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 1)));
      Address_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 2)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 3)));
      succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Offset_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0)));
          Var_14 = (MR_Integer) 1;
          Var_13 = (Offset_8 + Var_14);
          {
            Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
          }
          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_11, 1) = ((MR_Box) (Var_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *LvalB_5 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ptag_6));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Address_7));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Var_11));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__var_types_3_p_0(
  MR_Word CI_4,
  MR_Word Vars_5,
  MR_Word * Types_6)
{
  {
    MR_Word ProcInfo_7;
    MR_Word VarTypes_8;

    ll_backend__code_info__get_proc_info_2_p_0(CI_4, &ProcInfo_7);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_7, &VarTypes_8);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_8, Vars_5, Types_6);
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
  MR_Word STATE_VARIABLE_CI_0_35,
  MR_Word * STATE_VARIABLE_CI_36,
  MR_Word STATE_VARIABLE_CLD_0_37,
  MR_Word * STATE_VARIABLE_CLD_38)
{
  {
    MR_bool succeeded;
    MR_Word VarType_23;
    MR_String VarTypeMsg_24;
    MR_Word ReserveWordAtStart_27;
    MR_Integer Size_28;
    MR_Word MaybeAllocId_29;
    MR_Word CellCode_30;
    MR_Word FieldAddrs_31;
    MR_Word STATE_VARIABLE_CI_39_39;
    MR_Word STATE_VARIABLE_CLD_41_41;
    MR_Word TypeCtor_46;
    MR_Word TypeSym_47;
    MR_Integer TypeArity_48;
    MR_String TypeSymStr_49;
    MR_String TypeArityStr_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Globals_63;
    MR_Word ProfileMemory_64;
    MR_Word RevFieldAddrs_71;
    MR_Word Globals_25;
    MR_Word GCMethod_26;
    MR_Integer Var_70;
    MR_Box conv3_Var_70;
    MR_Box conv2_RevFieldAddrs_71;

    VarType_23 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_35, Var_13);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_23, &TypeCtor_46);
    TypeSym_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_46, (MR_Integer) 0)));
    TypeArity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_46, (MR_Integer) 1)));
    TypeSymStr_49 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSym_47);
    mercury__string__int_to_string_2_p_0(TypeArity_48, &TypeArityStr_50);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (TypeArityStr_50));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) ((MR_String) "/"));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (TypeSymStr_49));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
    }
    mercury__string__append_list_2_p_0(Var_51, &VarTypeMsg_24);
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_35, &Globals_25);
    libs__globals__get_gc_method_2_p_0(Globals_25, &GCMethod_26);
    succeeded = (GCMethod_26 == (MR_Integer) 5);
    if (succeeded)
      succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(VarType_23);
    if (succeeded)
      ReserveWordAtStart_27 = (MR_Integer) 1;
    else
      ReserveWordAtStart_27 = (MR_Integer) 0;
    Size_28 = ll_backend__code_util__size_of_cell_args_1_f_0(CellArgs_15);
    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_35, &Globals_63);
    libs__globals__lookup_bool_option_3_p_0(Globals_63, (MR_Integer) 209, &ProfileMemory_64);
    switch (ProfileMemory_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          STATE_VARIABLE_CI_39_39 = STATE_VARIABLE_CI_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllocId_65;

          ll_backend__code_info__add_alloc_site_info_6_p_0(Context_18, VarTypeMsg_24, Size_28, &AllocId_65, STATE_VARIABLE_CI_0_35, &STATE_VARIABLE_CI_39_39);
          {
            MaybeAllocId_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_29, 0) = ((MR_Box) (AllocId_65));
          }
        }
        break;
    }
    ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_13, ReserveWordAtStart_27, Ptag_14, CellArgs_15, HowToConstruct_16, MaybeSize_17, MaybeAllocId_29, MayUseAtomic_19, &CellCode_30, STATE_VARIABLE_CI_39_39, STATE_VARIABLE_CI_36, STATE_VARIABLE_CLD_0_37, &STATE_VARIABLE_CLD_41_41);
    mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[6], (MR_Word) &ll_backend__unify_gen_scalar_common_2[5], CellArgs_15, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_70, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv2_RevFieldAddrs_71);
    Var_70 = ((MR_Integer) conv3_Var_70);
    RevFieldAddrs_71 = ((MR_Word) conv2_RevFieldAddrs_71);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0, RevFieldAddrs_71, &FieldAddrs_31);
    if ((FieldAddrs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Code_20 = CellCode_30;
      *STATE_VARIABLE_CLD_38 = STATE_VARIABLE_CLD_41_41;
    }
    else
    {
      MR_Word FieldCode_34;

      ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(FieldAddrs_31, Var_13, Ptag_14, &FieldCode_34, STATE_VARIABLE_CLD_41_41, STATE_VARIABLE_CLD_38);
      *Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, CellCode_30, FieldCode_34);
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

static MR_Box MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__unify_gen__condense_needs_updates_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
  MR_Word ArgWidths_4,
  MR_Word STATE_VARIABLE_HowToConstruct_0_14,
  MR_Word * STATE_VARIABLE_HowToConstruct_15)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_HowToConstruct_0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_HowToConstruct_0_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_HowToConstruct_15 = STATE_VARIABLE_HowToConstruct_0_14;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_HowToConstruct_15 = STATE_VARIABLE_HowToConstruct_0_14;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
        MR_Word CellToReuse0_7 = (MR_Word) MR_body(((MR_Word) STATE_VARIABLE_HowToConstruct_0_14), (MR_Integer) 1);
        MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 0)));
        MR_Word ConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 1)));
        MR_Word NeedsUpdates0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CellToReuse0_7, (MR_Integer) 2)));
        MR_Word NeedsUpdates1_11;
        MR_Word NeedsUpdates_12;
        MR_Word CellToReuse_13;

        backend_libs__arg_pack__group_same_word_elements_3_p_0(TypeCtorInfo_18_18, ArgWidths_4, NeedsUpdates0_10, &NeedsUpdates1_11);
        NeedsUpdates_12 = mercury__list__map_2_f_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[5], TypeCtorInfo_18_18, (MR_Word) &ll_backend__unify_gen_scalar_common_2[4], NeedsUpdates1_11);
        {
          CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CellToReuse_13, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(0), CellToReuse_13, 1) = ((MR_Box) (ConsIds_9));
          MR_hl_field(MR_mktag(0), CellToReuse_13, 2) = ((MR_Box) (NeedsUpdates_12));
        }
        *STATE_VARIABLE_HowToConstruct_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) CellToReuse_13);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_HowToConstruct_15 = STATE_VARIABLE_HowToConstruct_0_14;
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
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ll_backend__unify_gen__pack_cell_rvals_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (CI_12));
    }
    Var_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[4], (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, Var_16, ArgWidths_8, CellArgs0_9, CellArgs_10, ((MR_Box) (Var_17)), &conv4_Code_11, ((MR_Box) (STATE_VARIABLE_CLD_0_14)), &conv3_STATE_VARIABLE_CLD_15);
    *Code_11 = ((MR_Word) conv4_Code_11);
    *STATE_VARIABLE_CLD_15 = ((MR_Word) conv3_STATE_VARIABLE_CLD_15);
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_8_p_0(
  MR_Word Vars_9,
  MR_Word Types_10,
  MR_Word Modes_11,
  MR_Word Widths_12,
  MR_Word TakeAddr_13,
  MR_Word CI_14,
  MR_Word * STATE_VARIABLE_Args_19,
  MR_Word * STATE_VARIABLE_MayUseAtomic_20)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_17;
    MR_Word STATE_VARIABLE_MayUseAtomic_21_21;
    MR_Word Globals_31;
    MR_Word UseAtomicCells_32;
    MR_Word STATE_VARIABLE_Args_22_22;
    MR_Word STATE_VARIABLE_MayUseAtomic_23_23;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_17);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_17, &Globals_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 465, &UseAtomicCells_32);
    switch (UseAtomicCells_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MayUseAtomic_21_21 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_MayUseAtomic_21_21 = (MR_Integer) 0;
        break;
    }
    succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(Vars_9, Types_10, Modes_11, Widths_12, (MR_Integer) 1, TakeAddr_13, CI_14, &STATE_VARIABLE_Args_22_22, STATE_VARIABLE_MayUseAtomic_21_21, &STATE_VARIABLE_MayUseAtomic_23_23);
    if (succeeded)
    {
      *STATE_VARIABLE_MayUseAtomic_20 = STATE_VARIABLE_MayUseAtomic_23_23;
      *STATE_VARIABLE_Args_19 = STATE_VARIABLE_Args_22_22;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_cons_args\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_2_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_9,
  MR_Word * STATE_VARIABLE_MayUseAtomic_10)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      succeeded = (HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = (HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          succeeded = (HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            *HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *STATE_VARIABLE_MayUseAtomic_10 = STATE_VARIABLE_MayUseAtomic_0_9;
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Type_19;
      MR_Word Types_20;
      MR_Word ArgMode_21;
      MR_Word ArgModes_22;
      MR_Word Width_23;
      MR_Word Widths_24;
      MR_Word CellArg_28;
      MR_Word CellArgs_29;
      MR_Word ModuleInfo_31;
      MR_Word STATE_VARIABLE_MayUseAtomic_43_43;
      MR_Word STATE_VARIABLE_TakeAddr_44_44;
      MR_Integer Var_61;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ArgMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
          ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Width_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
            Widths_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
            ll_backend__code_info__get_module_info_2_p_0(HeadVar__7_7, &ModuleInfo_31);
            check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_31, Type_19, STATE_VARIABLE_MayUseAtomic_0_9, &STATE_VARIABLE_MayUseAtomic_43_43);
            succeeded = ((MR_tag((MR_Word) HeadVar__6_6)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0)));
              STATE_VARIABLE_TakeAddr_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1)));
              succeeded = (HeadVar__5_5 == Var_61);
            }
            if (succeeded)
            {
              MR_Word LCMCNull_32;
              MR_Word MaybeNull_33;
              MR_Integer Var_49;

              ll_backend__code_info__get_lcmc_null_2_p_0(HeadVar__7_7, &LCMCNull_32);
              switch (LCMCNull_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MaybeNull_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  {
                    MaybeNull_33 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[1]);
                  }
                  break;
              }
              Var_49 = (HeadVar__5_5 + (MR_Integer) 1);
              {
                CellArg_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellArg_28, 0) = ((MR_Box) (Var_17));
                MR_hl_field(MR_mktag(3), CellArg_28, 1) = ((MR_Box) (MaybeNull_33));
              }
              succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(Vars_18, Types_20, ArgModes_22, Widths_24, Var_49, STATE_VARIABLE_TakeAddr_44_44, HeadVar__7_7, &CellArgs_29, (MR_Integer) 1, STATE_VARIABLE_MayUseAtomic_10);
            }
            else
            {
              MR_Word RHSInsts_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_21, (MR_Integer) 1)));
              MR_Word RHSTopFunctorMode_36;
              MR_Integer Var_55;
              MR_Word _LHSMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_21, (MR_Integer) 0)));

              check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_31, RHSInsts_35, Type_19, &RHSTopFunctorMode_36);
              switch (RHSTopFunctorMode_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_tag((MR_Word) Width_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(Width_23)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Var_53;

                            {
                              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_17));
                            }
                            {
                              CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), CellArg_28, 0) = ((MR_Box) (Var_53));
                              MR_hl_field(MR_mktag(1), CellArg_28, 1) = ((MR_Box) ((MR_Integer) 0));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Var_52;

                            {
                              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_17));
                            }
                            {
                              CellArg_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), CellArg_28, 0) = ((MR_Box) (Var_52));
                            }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_53;

                        {
                          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_17));
                        }
                        {
                          CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), CellArg_28, 0) = ((MR_Box) (Var_53));
                          MR_hl_field(MR_mktag(1), CellArg_28, 1) = ((MR_Box) ((MR_Integer) 0));
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  CellArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
              }
              Var_55 = (HeadVar__5_5 + (MR_Integer) 1);
              succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(Vars_18, Types_20, ArgModes_22, Widths_24, Var_55, HeadVar__6_6, HeadVar__7_7, &CellArgs_29, STATE_VARIABLE_MayUseAtomic_43_43, STATE_VARIABLE_MayUseAtomic_10);
            }
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__8_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CellArg_28));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellArgs_29));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__generate_reserved_address_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
          MR_Word Var_6;

          {
            Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (N_5));
          }
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "function \140ll_backend.unify_gen.generate_reserved_address\'/1", (MR_String) "reserved_object");
        }
        break;
    }
    return HeadVar__2_2;
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
                      Op_20 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
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
            Op_20 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
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

static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_22;

    conv0_LambdaHeadVar__2_22 = ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__232__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_22));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word TypeInfo_for_T_41,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word Args_7,
  MR_Word * AllArgWidths_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word ConsDefn_12;
    MR_Word TypeCtor_11;
    MR_Word Var_9;
    MR_Integer Var_10;

    if (succeeded)
    {
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1)));
      Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 2)));
      TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 3)));
      succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ModuleInfo_5, TypeCtor_11, ConsId_6, &ConsDefn_12);
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
      MR_Word TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
      MR_Word ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 6)));
      MR_Word ArgWidths_14;
      MR_Integer NumArgs_16;
      MR_Integer NumConsArgs_17;
      MR_Integer NumExtraArgs_18;
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 0)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 1)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 2)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 3)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 4)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 5)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsDefn_12, (MR_Integer) 7)));

      ArgWidths_14 = mercury__list__map_2_f_0(TypeCtorInfo_42_42, TypeCtorInfo_43_43, (MR_Word) &ll_backend__unify_gen_scalar_common_2[3], ConsArgs_13);
      mercury__list__length_2_p_0(TypeInfo_for_T_41, Args_7, &NumArgs_16);
      mercury__list__length_2_p_0(TypeCtorInfo_42_42, ConsArgs_13, &NumConsArgs_17);
      NumExtraArgs_18 = (NumArgs_16 - NumConsArgs_17);
      succeeded = (NumExtraArgs_18 == (MR_Integer) 0);
      if (succeeded)
        *AllArgWidths_8 = ArgWidths_14;
      else
      {
        succeeded = (NumExtraArgs_18 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word ExtraArgWidths_19;

          ExtraArgWidths_19 = mercury__list__duplicate_2_f_0(TypeCtorInfo_43_43, NumExtraArgs_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          *AllArgWidths_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_43_43, ExtraArgWidths_19, ArgWidths_14);
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.get_cons_arg_widths\'/4", (MR_String) "too few arguments");
            return;
          }
        }
      }
    }
    else
    {
      MR_Integer Var_28;

      Var_28 = mercury__list__length_1_f_0(TypeInfo_for_T_41, Args_7);
      *AllArgWidths_8 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Var_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
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
	MR_register_type_ctor_info(&ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_test_sense_0);
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
