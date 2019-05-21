/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version 2018-03-05
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
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2265__1_2_p_0(
  MR_Integer Shift_12,
  MR_Integer HeadVar__2_39);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2057__1_2_p_0(
  MR_Word Lang_22,
  MR_Word HeadVar__2_110);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1889__1_2_p_0(
  MR_Word Lang_16,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__626__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_140);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__654__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_119);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__679__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_101);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__542__1_2_p_0(
  MR_Word Lang_33,
  MR_Word HeadVar__2_180);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__663__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_110);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__689__1_2_p_0(
  MR_Word MaybeSize_22,
  MR_Word HeadVar__2_95);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__687__1_2_p_0(
  MR_Word TakeAddr_21,
  MR_Word HeadVar__2_91);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__636__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_130);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__447__1_2_p_0(
  MR_Word ForeignLang_12,
  MR_Word HeadVar__2_92);

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__242__1_1_f_0(
  MR_Word LambdaHeadVar__1_18);

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
ll_backend__unify_gen__generate_const_struct_rval_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word UnboxedFloats_12,
  MR_Word UnboxedInt64s_13,
  MR_Word ConstStructMap_14,
  MR_Word ConsTag_15,
  MR_Word ConstArgs_16,
  MR_Word ConsArgWidths_17,
  MR_Word * TypedRval_18,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_67,
  MR_Word * STATE_VARIABLE_StaticCellInfo_68);

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
  MR_Word ConsId_11,
  MR_Word Args_12,
  MR_Word Modes_13,
  MR_Word ArgWidths_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_62,
  MR_Word * STATE_VARIABLE_CLD_63);

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
ll_backend__unify_gen__make_fields_and_arg_vars_7_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Rval_4,
  MR_Integer PrevOffset0_5,
  MR_Integer Ptag_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0(
  MR_Word LHSVar_15,
  MR_Word ConsId_16,
  MR_Word RHSVars_17,
  MR_Word ArgModes_18,
  MR_Word ArgWidths_19,
  MR_Word HowToConstruct0_20,
  MR_Word TakeAddr_21,
  MR_Word MaybeSize_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_84,
  MR_Word * STATE_VARIABLE_CI_85,
  MR_Word STATE_VARIABLE_CLD_0_86,
  MR_Word * STATE_VARIABLE_CLD_87);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Var_15,
  MR_Word Args_16,
  MR_Word GoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_46,
  MR_Word * STATE_VARIABLE_CI_47,
  MR_Word STATE_VARIABLE_CLD_0_48,
  MR_Word * STATE_VARIABLE_CLD_49);

static void MR_CALL 
ll_backend__unify_gen__generate_closure_from_scratch_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word Var_19,
  MR_Word Args_20,
  MR_Word GoalInfo_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60,
  MR_Word STATE_VARIABLE_CLD_0_61,
  MR_Word * STATE_VARIABLE_CLD_62);

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
ll_backend__unify_gen__generate_new_closure_from_old_9_p_0(
  MR_Word Var_10,
  MR_Word CallPred_11,
  MR_Word CallArgs_12,
  MR_Word GoalInfo_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41);

static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
  MR_Word Context_7,
  MR_String VarTypeMsg_8,
  MR_Integer Size_9,
  MR_Word * MaybeAllocId_10,
  MR_Word STATE_VARIABLE_CI_0_14,
  MR_Word * STATE_VARIABLE_CI_15);

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
  MR_Word VarTypes_9,
  MR_Word Vars_10,
  MR_Word Modes_11,
  MR_Word Widths_12,
  MR_Word TakeAddr_13,
  MR_Word CI_14,
  MR_Word * STATE_VARIABLE_Args_18,
  MR_Word * STATE_VARIABLE_MayUseAtomic_19);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_loop_10_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_9,
  MR_Word * STATE_VARIABLE_MayUseAtomic_10);

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
  MR_Word TypeInfo_for_T_35,
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


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[19][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[10][3];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[7][5];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[8][1];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[1][12];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[2][8];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[3][6];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[2][11];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[1][10];




static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[19][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[2])))
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
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[0])),
    ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[1])),
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
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[0])),
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[8][1] = {
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
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 1))
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[3][6] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[2][11] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[1][10] = {
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
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2265__1_2_p_0(
  MR_Integer Shift_12,
  MR_Integer HeadVar__2_39)
{
  {
    MR_bool succeeded = (Shift_12 == HeadVar__2_39);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2057__1_2_p_0(
  MR_Word Lang_22,
  MR_Word HeadVar__2_110)
{
  {
    MR_bool succeeded = (Lang_22 == HeadVar__2_110);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1889__1_2_p_0(
  MR_Word Lang_16,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded = (Lang_16 == HeadVar__2_65);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__626__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_140)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_140)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__654__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_119)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_119)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__679__1_2_p_0(
  MR_Word RHSVars_17,
  MR_Word HeadVar__2_101)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (RHSVars_17)), ((MR_Box) (HeadVar__2_101)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__542__1_2_p_0(
  MR_Word Lang_33,
  MR_Word HeadVar__2_180)
{
  {
    MR_bool succeeded = (Lang_33 == HeadVar__2_180);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__663__1_2_p_0(
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
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__689__1_2_p_0(
  MR_Word MaybeSize_22,
  MR_Word HeadVar__2_95)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[3], ((MR_Box) (MaybeSize_22)), ((MR_Box) (HeadVar__2_95)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__687__1_2_p_0(
  MR_Word TakeAddr_21,
  MR_Word HeadVar__2_91)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[2], ((MR_Box) (TakeAddr_21)), ((MR_Box) (HeadVar__2_91)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__636__1_2_p_0(
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
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__447__1_2_p_0(
  MR_Word ForeignLang_12,
  MR_Word HeadVar__2_92)
{
  {
    MR_bool succeeded = (ForeignLang_12 == HeadVar__2_92);

    return succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__242__1_1_f_0(
  MR_Word LambdaHeadVar__1_18)
{
  {
    MR_Word LambdaHeadVar__2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 2)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 0)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 1)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_18, (MR_Integer) 3)));

    return LambdaHeadVar__2_19;
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
        MR_hl_field(MR_mktag(3), ShiftRvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
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
          MR_hl_field(MR_mktag(3), FinalRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13])));
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

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2265__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
                          MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
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
              MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[6]));
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
              MR_hl_field(MR_mktag(3), Expr_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13])));
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
      succeeded = (Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *TypedRval_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
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
    ll_backend__unify_gen__generate_const_struct_rval_10_p_0(ModuleInfo_9, UnboxedFloats_10, UnboxedInt64s_11, STATE_VARIABLE_ConstStructMap_0_23, ConsTag_20, ConstArgs_17, ConsArgWidths_21, &Rval_22, STATE_VARIABLE_StaticCellInfo_0_25, STATE_VARIABLE_StaticCellInfo_26);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstNum_12, ((MR_Box) (Rval_22)), STATE_VARIABLE_ConstStructMap_0_23, STATE_VARIABLE_ConstStructMap_24);
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_rval_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word UnboxedFloats_12,
  MR_Word UnboxedInt64s_13,
  MR_Word ConstStructMap_14,
  MR_Word ConsTag_15,
  MR_Word ConstArgs_16,
  MR_Word ConsArgWidths_17,
  MR_Word * TypedRval_18,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_67,
  MR_Word * STATE_VARIABLE_StaticCellInfo_68)
{
  switch (MR_tag((MR_Word) ConsTag_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgTypedRvals_33;
            MR_Word PackArgTypedRvals_34;
            MR_Word DataAddr_35;
            MR_Word CellPtrConst_37;
            MR_Word Var_79;
            MR_Word Rval_100;

            ll_backend__unify_gen__generate_const_struct_args_7_p_0(ModuleInfo_11, UnboxedFloats_12, UnboxedInt64s_13, ConstStructMap_14, ConstArgs_16, ConsArgWidths_17, &ArgTypedRvals_33);
            ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_17, ArgTypedRvals_33, &PackArgTypedRvals_34);
            ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_34, &DataAddr_35, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (DataAddr_35));
              MR_hl_field(MR_mktag(3), Var_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              CellPtrConst_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellPtrConst_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), CellPtrConst_37, 1) = ((MR_Box) (Var_79));
            }
            {
              Rval_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_100, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Rval_100, 1) = ((MR_Box) (CellPtrConst_37));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypedRval_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_100));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            if ((ConstArgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "no_tag arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_16, (MR_Integer) 1)));
              MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_16, (MR_Integer) 0)));

              if ((Var_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ConsArgWidth_21;

                ll_backend__unify_gen__det_single_arg_width_2_p_0(ConsArgWidths_17, &ConsArgWidth_21);
                ll_backend__unify_gen__generate_const_struct_arg_7_p_0(ModuleInfo_11, UnboxedFloats_12, UnboxedInt64s_13, ConstStructMap_14, Var_128, ConsArgWidth_21, TypedRval_18);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "no_tag arity != 1");
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "unexpected tag");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 0)))) {
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "unexpected tag");
              return;
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ArgTypedRvals_116;
            MR_Word PackArgTypedRvals_117;
            MR_Word DataAddr_118;
            MR_Word CellPtrConst_120;
            MR_Word Var_121;
            MR_Integer Ptag_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
            MR_Word Rval_124;

            ll_backend__unify_gen__generate_const_struct_args_7_p_0(ModuleInfo_11, UnboxedFloats_12, UnboxedInt64s_13, ConstStructMap_14, ConstArgs_16, ConsArgWidths_17, &ArgTypedRvals_116);
            ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_17, ArgTypedRvals_116, &PackArgTypedRvals_117);
            ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_117, &DataAddr_118, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
            {
              Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (DataAddr_118));
              MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              CellPtrConst_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellPtrConst_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), CellPtrConst_120, 1) = ((MR_Box) (Var_121));
            }
            {
              Rval_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_124, 0) = ((MR_Box) (Ptag_123));
              MR_hl_field(MR_mktag(2), Rval_124, 1) = ((MR_Box) (CellPtrConst_120));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypedRval_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_124));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Integer Ptag_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));

            if ((ConstArgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "direct_arg_tag: arity != 1");
                return;
              }
            }
            else
            {
              MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_16, (MR_Integer) 1)));
              MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConstArgs_16, (MR_Integer) 0)));

              if ((Var_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ArgRval_27;
                MR_Word Rval_29;
                MR_Word ConsArgWidth_91;
                MR_Word ArgTypedRval_92;
                MR_Word _RvalType_28;

                ll_backend__unify_gen__det_single_arg_width_2_p_0(ConsArgWidths_17, &ConsArgWidth_91);
                ll_backend__unify_gen__generate_const_struct_arg_7_p_0(ModuleInfo_11, UnboxedFloats_12, UnboxedInt64s_13, ConstStructMap_14, Var_126, ConsArgWidth_91, &ArgTypedRval_92);
                ArgRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypedRval_92, (MR_Integer) 0)));
                _RvalType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgTypedRval_92, (MR_Integer) 1)));
                {
                  Rval_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Rval_29, 0) = ((MR_Box) (Ptag_26));
                  MR_hl_field(MR_mktag(2), Rval_29, 1) = ((MR_Box) (ArgRval_27));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *TypedRval_18 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_29));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            *STATE_VARIABLE_StaticCellInfo_68 = STATE_VARIABLE_StaticCellInfo_0_67;
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Integer Stag_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 2)));
            MR_Word StagTypedRval_39;
            MR_Word AllTypedRvals_40;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_76;
            MR_Integer Ptag_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_15, (MR_Integer) 1)));
            MR_Word Rval_102;
            MR_Word ArgTypedRvals_103;
            MR_Word PackArgTypedRvals_104;
            MR_Word DataAddr_105;
            MR_Word CellPtrConst_107;

            ll_backend__unify_gen__generate_const_struct_args_7_p_0(ModuleInfo_11, UnboxedFloats_12, UnboxedInt64s_13, ConstStructMap_14, ConstArgs_16, ConsArgWidths_17, &ArgTypedRvals_103);
            ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_17, ArgTypedRvals_103, &PackArgTypedRvals_104);
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Stag_38));
            }
            {
              Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
            }
            {
              StagTypedRval_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StagTypedRval_39, 0) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), StagTypedRval_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
            }
            {
              AllTypedRvals_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), AllTypedRvals_40, 0) = ((MR_Box) (StagTypedRval_39));
              MR_hl_field(MR_mktag(1), AllTypedRvals_40, 1) = ((MR_Box) (PackArgTypedRvals_104));
            }
            ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_40, &DataAddr_105, STATE_VARIABLE_StaticCellInfo_0_67, STATE_VARIABLE_StaticCellInfo_68);
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (DataAddr_105));
              MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              CellPtrConst_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellPtrConst_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), CellPtrConst_107, 1) = ((MR_Box) (Var_76));
            }
            {
              Rval_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_102, 0) = ((MR_Box) (Ptag_101));
              MR_hl_field(MR_mktag(2), Rval_102, 1) = ((MR_Box) (CellPtrConst_107));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypedRval_18 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_102));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            }
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
      return;
    }
  }
  else
  {
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_3, (MR_Integer) 1)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_3, (MR_Integer) 0)));

    if ((Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ArgWidth_4 = Var_17;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
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
    ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0(UnboxedFloats_9, UnboxedInt64s_10, ConsTag_18, ArgWidth_13, TypedRval_14);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1889__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
                    Type_83 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3]);
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
                    Type_83 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[7]);
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
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_struct_arg_tag_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Lang_16));
                MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/5", (MR_String) "foreign_tag for language other than C");
              Type_80 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3]);
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
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[0]));
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
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[1]));
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
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2057__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
  MR_Word STATE_VARIABLE_StaticCellInfo_0_65,
  MR_Word * STATE_VARIABLE_StaticCellInfo_66,
  MR_Word STATE_VARIABLE_ActiveMap_0_67,
  MR_Word * STATE_VARIABLE_ActiveMap_68)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ConsTag_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypedRvals_34;
              MR_Word PackArgTypedRvals_35;
              MR_Word DataAddr_36;
              MR_Word CellPtrConst_38;
              MR_Word STATE_VARIABLE_ActiveMap_88_88;
              MR_Word Var_90;
              MR_Word ActiveGroundTerm_117;
              MR_Word Rval_119;

              ll_backend__unify_gen__generate_ground_term_args_5_p_0(Args_12, ConsArgWidths_13, &ArgTypedRvals_34, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_88_88);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_13, ArgTypedRvals_34, &PackArgTypedRvals_35);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_35, &DataAddr_36, STATE_VARIABLE_StaticCellInfo_0_65, STATE_VARIABLE_StaticCellInfo_66);
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (DataAddr_36));
                MR_hl_field(MR_mktag(3), Var_90, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_38, 1) = ((MR_Box) (Var_90));
              }
              {
                Rval_119 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_119, 0) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(2), Rval_119, 1) = ((MR_Box) (CellPtrConst_38));
              }
              {
                ActiveGroundTerm_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_117, 0) = ((MR_Box) (Rval_119));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_117)), STATE_VARIABLE_ActiveMap_88_88, STATE_VARIABLE_ActiveMap_68);
            }
            break;
          case (MR_Integer) 1:
            {
              if ((Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1)));
                MR_Word Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0)));

                if ((Var_189 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word TypeInfo_144_144 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                  MR_Word TypeCtorInfo_145_145 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                  MR_Word RvalType_30;
                  MR_Word STATE_VARIABLE_ActiveMap_97_97;
                  MR_Box conv1_RvalType_30;

                  mercury__map__det_remove_4_p_0(TypeInfo_144_144, TypeCtorInfo_145_145, ((MR_Box) (Var_190)), &conv1_RvalType_30, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_97_97);
                  RvalType_30 = ((MR_Word) conv1_RvalType_30);
                  mercury__map__det_insert_4_p_0(TypeInfo_144_144, TypeCtorInfo_145_145, ((MR_Box) (Var_10)), ((MR_Box) (RvalType_30)), STATE_VARIABLE_ActiveMap_97_97, STATE_VARIABLE_ActiveMap_68);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
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
          MR_String String_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_11, (MR_Integer) 0)));
          MR_Word Const_168;
          MR_Word ActiveGroundTerm_170;
          MR_Word Var_171;

          {
            Const_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Const_168, 1) = ((MR_Box) (String_17));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_171, 1) = ((MR_Box) (Const_168));
          }
          {
            ActiveGroundTerm_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_170, 0) = ((MR_Box) (Var_171));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_170)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
          *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Const_18;
          MR_Word Type_19;
          MR_Float Float_24 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_11, (MR_Integer) 0)));
          MR_Word ActiveGroundTerm_25;
          MR_Word Var_114;

          {
            Const_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Const_18, 1) = MR_box_float(Float_24);
          }
          switch (UnboxedFloats_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Type_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              break;
            case (MR_Integer) 0:
              Type_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              break;
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (Const_18));
          }
          {
            ActiveGroundTerm_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_25, 0) = ((MR_Box) (Var_114));
            MR_hl_field(MR_mktag(0), ActiveGroundTerm_25, 1) = ((MR_Box) (Type_19));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_25)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
          *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Word IntType_21;
              MR_Word Const_162;
              MR_Word Type_163;
              MR_Word ActiveGroundTerm_164;
              MR_Word Var_165;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_20, &Const_162, &IntType_21);
              {
                Type_163 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Type_163, 0) = ((MR_Box) (IntType_21));
              }
              {
                Var_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_165, 1) = ((MR_Box) (Const_162));
              }
              {
                ActiveGroundTerm_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_164, 0) = ((MR_Box) (Var_165));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_164, 1) = ((MR_Box) (Type_163));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_164)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
              *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_String Val_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2)));
              MR_Word Var_107;
              MR_Word Const_156;
              MR_Word Type_157;
              MR_Word ActiveGroundTerm_158;
              MR_Word Var_159;

              {
                Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1));
                MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (Lang_22));
                MR_hl_field(MR_mktag(0), Var_107, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_107, (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "foreign_tag for language other than C");
              Type_157 = (MR_Word) MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3]);
              {
                Const_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Const_156, 1) = ((MR_Box) (Val_23));
                MR_hl_field(MR_mktag(3), Const_156, 2) = ((MR_Box) (Type_157));
              }
              {
                Var_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_159, 1) = ((MR_Box) (Const_156));
              }
              {
                ActiveGroundTerm_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_158, 0) = ((MR_Box) (Var_159));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_158, 1) = ((MR_Box) (Type_157));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_158)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgTypedRvals_174;
              MR_Word PackArgTypedRvals_175;
              MR_Word DataAddr_176;
              MR_Word CellPtrConst_178;
              MR_Word STATE_VARIABLE_ActiveMap_88_179;
              MR_Word Var_180;
              MR_Word ActiveGroundTerm_182;
              MR_Integer Ptag_183 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Word Rval_184;

              ll_backend__unify_gen__generate_ground_term_args_5_p_0(Args_12, ConsArgWidths_13, &ArgTypedRvals_174, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_88_179);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_13, ArgTypedRvals_174, &PackArgTypedRvals_175);
              ll_backend__global_data__add_scalar_static_cell_4_p_0(PackArgTypedRvals_175, &DataAddr_176, STATE_VARIABLE_StaticCellInfo_0_65, STATE_VARIABLE_StaticCellInfo_66);
              {
                Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_180, 1) = ((MR_Box) (DataAddr_176));
                MR_hl_field(MR_mktag(3), Var_180, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_178, 1) = ((MR_Box) (Var_180));
              }
              {
                Rval_184 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_184, 0) = ((MR_Box) (Ptag_183));
                MR_hl_field(MR_mktag(2), Rval_184, 1) = ((MR_Box) (CellPtrConst_178));
              }
              {
                ActiveGroundTerm_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_182, 0) = ((MR_Box) (Rval_184));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_182)), STATE_VARIABLE_ActiveMap_88_179, STATE_VARIABLE_ActiveMap_68);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));

              if ((Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              else
              {
                MR_Word Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1)));
                MR_Word Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0)));

                if ((Var_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word TypeInfo_148_148 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                  MR_Word TypeCtorInfo_149_149 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                  MR_Word ArgRval_39;
                  MR_Word Var_84;
                  MR_Word STATE_VARIABLE_ActiveMap_85_85;
                  MR_Word ActiveGroundTerm_120;
                  MR_Word Rval_121;
                  MR_Box conv0_Var_84;
                  MR_Word _RvalType_40;

                  mercury__map__det_remove_4_p_0(TypeInfo_148_148, TypeCtorInfo_149_149, ((MR_Box) (Var_188)), &conv0_Var_84, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_85_85);
                  Var_84 = ((MR_Word) conv0_Var_84);
                  ArgRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 0)));
                  _RvalType_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 1)));
                  {
                    Rval_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Rval_121, 0) = ((MR_Box) (Ptag_127));
                    MR_hl_field(MR_mktag(2), Rval_121, 1) = ((MR_Box) (ArgRval_39));
                  }
                  {
                    ActiveGroundTerm_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_120, 0) = ((MR_Box) (Rval_121));
                    MR_hl_field(MR_mktag(0), ActiveGroundTerm_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  }
                  mercury__map__det_insert_4_p_0(TypeInfo_148_148, TypeCtorInfo_149_149, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_120)), STATE_VARIABLE_ActiveMap_85_85, STATE_VARIABLE_ActiveMap_68);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
                    return;
                  }
                }
              }
              *STATE_VARIABLE_StaticCellInfo_66 = STATE_VARIABLE_StaticCellInfo_0_65;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word StagTypedRval_44;
              MR_Word AllTypedRvals_45;
              MR_Word STATE_VARIABLE_ActiveMap_71_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_77;
              MR_Word ActiveGroundTerm_130;
              MR_Integer Ptag_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Integer Stag_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2)));
              MR_Word Rval_133;
              MR_Word ArgTypedRvals_134;
              MR_Word PackArgTypedRvals_135;
              MR_Word DataAddr_136;
              MR_Word CellPtrConst_138;

              ll_backend__unify_gen__generate_ground_term_args_5_p_0(Args_12, ConsArgWidths_13, &ArgTypedRvals_134, STATE_VARIABLE_ActiveMap_0_67, &STATE_VARIABLE_ActiveMap_71_71);
              ll_backend__unify_gen__pack_ground_term_args_3_p_0(ConsArgWidths_13, ArgTypedRvals_134, &PackArgTypedRvals_135);
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Stag_132));
              }
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
              }
              {
                StagTypedRval_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StagTypedRval_44, 0) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(0), StagTypedRval_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
              }
              {
                AllTypedRvals_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AllTypedRvals_45, 0) = ((MR_Box) (StagTypedRval_44));
                MR_hl_field(MR_mktag(1), AllTypedRvals_45, 1) = ((MR_Box) (PackArgTypedRvals_135));
              }
              ll_backend__global_data__add_scalar_static_cell_4_p_0(AllTypedRvals_45, &DataAddr_136, STATE_VARIABLE_StaticCellInfo_0_65, STATE_VARIABLE_StaticCellInfo_66);
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (DataAddr_136));
                MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                CellPtrConst_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CellPtrConst_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), CellPtrConst_138, 1) = ((MR_Box) (Var_77));
              }
              {
                Rval_133 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_133, 0) = ((MR_Box) (Ptag_131));
                MR_hl_field(MR_mktag(2), Rval_133, 1) = ((MR_Box) (CellPtrConst_138));
              }
              {
                ActiveGroundTerm_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_130, 0) = ((MR_Box) (Rval_133));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_130)), STATE_VARIABLE_ActiveMap_71_71, STATE_VARIABLE_ActiveMap_68);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer Ptag_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 1)));
              MR_Integer Stag_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_11, (MR_Integer) 2)));
              MR_Word Rval_28;
              MR_Word Var_101;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word ActiveGroundTerm_116;

              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Stag_27));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (Var_104));
              }
              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_101, 2) = ((MR_Box) (Var_103));
              }
              {
                Rval_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Rval_28, 0) = ((MR_Box) (Ptag_26));
                MR_hl_field(MR_mktag(2), Rval_28, 1) = ((MR_Box) (Var_101));
              }
              {
                ActiveGroundTerm_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_116, 0) = ((MR_Box) (Rval_28));
                MR_hl_field(MR_mktag(0), ActiveGroundTerm_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (Var_10)), ((MR_Box) (ActiveGroundTerm_116)), STATE_VARIABLE_ActiveMap_0_67, STATE_VARIABLE_ActiveMap_68);
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
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[2]));
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
            MR_Word ConsArgWidths_28;

            if ((MaybeTakeAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              TakeAddr_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              TakeAddr_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTakeAddr_23, (MR_Integer) 0)));
            ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_27);
            ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ModuleInfo_27, ConsId_17, RHSVars_18, &ConsArgWidths_28);
            ll_backend__unify_gen__generate_construction_14_p_0(LHSVar_73, ConsId_17, RHSVars_18, ArgModes_19, ConsArgWidths_28, HowToConstruct_20, TakeAddr_26, MaybeSize_24, GoalInfo_11, Code_12, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, STATE_VARIABLE_CLD_46);
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
          MR_Word ConsArgWidths_79;
          MR_Word _CanFail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Uni_10, (MR_Integer) 4)));

          ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_43, &ModuleInfo_78);
          ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ModuleInfo_78, ConsId_75, RHSVars_76, &ConsArgWidths_79);
          switch (CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ll_backend__unify_gen__generate_det_deconstruction_9_p_0(LHSVar_74, ConsId_75, RHSVars_76, ArgModes_77, ConsArgWidths_79, &Code0_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_57_57);
                *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
              }
              break;
            case (MR_Integer) 1:
              ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(LHSVar_74, ConsId_75, RHSVars_76, ArgModes_77, ConsArgWidths_79, &Code0_31, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_57_57);
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

    VarType_19 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_27, Var_11);
    CheaperTagTest_20 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_27, VarType_19);
    ll_backend__unify_gen__generate_tag_test_10_p_0(Var_11, Tag_12, CheaperTagTest_20, (MR_Integer) 0, &SuccLabel_21, &TagTestCode_22, STATE_VARIABLE_CI_0_27, &STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CLD_0_29, &STATE_VARIABLE_CLD_33_33);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_33_33, &AfterUnify_23);
    ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_24, STATE_VARIABLE_CI_32_32, STATE_VARIABLE_CI_28, STATE_VARIABLE_CLD_33_33);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterUnify_23, *STATE_VARIABLE_CI_28, &STATE_VARIABLE_CLD_35_35);
    ll_backend__unify_gen__generate_det_deconstruction_9_p_0(Var_11, Tag_12, Args_13, Modes_14, ArgWidths_15, &DeconsCode_25, *STATE_VARIABLE_CI_28, STATE_VARIABLE_CLD_35_35, STATE_VARIABLE_CLD_30);
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

static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__447__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
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
              *TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[18]);
            }
            break;
          case (MR_Integer) 1:
            {
              *TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[18]);
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
                MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
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
                MR_hl_field(MR_mktag(3), Var_96, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
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
              Var_52 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
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
                MR_hl_field(MR_mktag(3), Var_54, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7])));
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
ll_backend__unify_gen__generate_det_deconstruction_9_p_0(
  MR_Word Var_10,
  MR_Word ConsId_11,
  MR_Word Args_12,
  MR_Word Modes_13,
  MR_Word ArgWidths_14,
  MR_Word * Code_15,
  MR_Word CI_16,
  MR_Word STATE_VARIABLE_CLD_0_62,
  MR_Word * STATE_VARIABLE_CLD_63)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_18;
    MR_Word ConsTag_19;

    ll_backend__code_info__get_module_info_2_p_0(CI_16, &ModuleInfo_18);
    ConsTag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_18, ConsId_11);
    switch (MR_tag((MR_Word) ConsTag_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Rval_99;
              MR_Word ProcInfo_100;
              MR_Word VarTypes_101;
              MR_Word FieldsAndArgVars_102;

              {
                Rval_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_99, 0) = ((MR_Box) (Var_10));
              }
              ll_backend__code_info__get_proc_info_2_p_0(CI_16, &ProcInfo_100);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_100, &VarTypes_101);
              ll_backend__unify_gen__make_fields_and_arg_vars_7_p_0(VarTypes_101, Args_12, ArgWidths_14, Rval_99, (MR_Integer) -1, (MR_Integer) 0, &FieldsAndArgVars_102);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_102, Modes_13, Code_15, CI_16, STATE_VARIABLE_CLD_0_62, STATE_VARIABLE_CLD_63);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Arg_46;
              MR_Word Mode_47;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word _ArgWidth_48;

              succeeded = ((MR_tag((MR_Word) Args_12)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Arg_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0)));
                Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1)));
                succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_13)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0)));
                    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1)));
                    succeeded = (Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) ArgWidths_14)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        _ArgWidth_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_14, (MR_Integer) 0)));
                        Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_14, (MR_Integer) 1)));
                        succeeded = (Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word VarType_49;
                MR_Word IsDummy_50;

                VarType_49 = ll_backend__code_info__variable_type_2_f_0(CI_16, Var_10);
                IsDummy_50 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_18, VarType_49);
                switch (IsDummy_50) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_62, Arg_46);
                      if (succeeded)
                      {
                        ll_backend__code_loc_dep__assign_const_to_var_5_p_0(Arg_46, (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]), CI_16, STATE_VARIABLE_CLD_0_62, STATE_VARIABLE_CLD_63);
                      }
                      else
                        *STATE_VARIABLE_CLD_63 = STATE_VARIABLE_CLD_0_62;
                      *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgType_51;
                      MR_Word FieldAndArgVar_52;
                      MR_Word Var_74;

                      ArgType_51 = ll_backend__code_info__variable_type_2_f_0(CI_16, Arg_46);
                      {
                        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_10));
                      }
                      {
                        FieldAndArgVar_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_52, 0) = ((MR_Box) (Var_74));
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_52, 1) = ((MR_Box) (Arg_46));
                        MR_hl_field(MR_mktag(0), FieldAndArgVar_52, 2) = ((MR_Box) (ArgType_51));
                      }
                      ll_backend__unify_gen__generate_sub_unify_6_p_0(FieldAndArgVar_52, Mode_47, Code_15, CI_16, STATE_VARIABLE_CLD_0_62, STATE_VARIABLE_CLD_63);
                    }
                    break;
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/9", (MR_String) "no_tag: arity != 1");
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
          *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CLD_63 = STATE_VARIABLE_CLD_0_62;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_19, (MR_Integer) 0)))) {
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
              *Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CLD_63 = STATE_VARIABLE_CLD_0_62;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/9", (MR_String) "type_info_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/9", (MR_String) "typeclass_info_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/9", (MR_String) "ground_term_const_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/9", (MR_String) "table_io_entry_tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_19, (MR_Integer) 1)));
              MR_Word Rval_105;
              MR_Word ProcInfo_106;
              MR_Word VarTypes_107;
              MR_Word FieldsAndArgVars_108;

              {
                Rval_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_105, 0) = ((MR_Box) (Var_10));
              }
              ll_backend__code_info__get_proc_info_2_p_0(CI_16, &ProcInfo_106);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_106, &VarTypes_107);
              ll_backend__unify_gen__make_fields_and_arg_vars_7_p_0(VarTypes_107, Args_12, ArgWidths_14, Rval_105, (MR_Integer) -1, Ptag_103, &FieldsAndArgVars_108);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_108, Modes_13, Code_15, CI_16, STATE_VARIABLE_CLD_0_62, STATE_VARIABLE_CLD_63);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_19, (MR_Integer) 1)));
              MR_Word Arg_90;
              MR_Word Mode_91;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_60;

              succeeded = ((MR_tag((MR_Word) Args_12)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Arg_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 0)));
                Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_12, (MR_Integer) 1)));
                succeeded = (Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Modes_13)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Mode_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 0)));
                    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_13, (MR_Integer) 1)));
                    succeeded = (Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) ArgWidths_14)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_14, (MR_Integer) 0)));
                        Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgWidths_14, (MR_Integer) 1)));
                        succeeded = (Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word Type_61;

                Type_61 = ll_backend__code_info__variable_type_2_f_0(CI_16, Arg_90);
                ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(Var_10, Arg_90, Ptag_94, Mode_91, Type_61, Code_15, CI_16, STATE_VARIABLE_CLD_0_62, STATE_VARIABLE_CLD_63);
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction\'/9", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Ptag_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_19, (MR_Integer) 1)));
              MR_Word Rval_56;
              MR_Word ProcInfo_57;
              MR_Word VarTypes_58;
              MR_Word FieldsAndArgVars_59;
              MR_Integer _Sectag1_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_19, (MR_Integer) 2)));

              {
                Rval_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Rval_56, 0) = ((MR_Box) (Var_10));
              }
              ll_backend__code_info__get_proc_info_2_p_0(CI_16, &ProcInfo_57);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_57, &VarTypes_58);
              ll_backend__unify_gen__make_fields_and_arg_vars_7_p_0(VarTypes_58, Args_12, ArgWidths_14, Rval_56, (MR_Integer) 0, Ptag_53, &FieldsAndArgVars_59);
              ll_backend__unify_gen__generate_unify_args_6_p_0(FieldsAndArgVars_59, Modes_13, Code_15, CI_16, STATE_VARIABLE_CLD_0_62, STATE_VARIABLE_CLD_63);
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
ll_backend__unify_gen__make_fields_and_arg_vars_7_p_0(
  MR_Word VarTypes_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word Rval_4,
  MR_Integer PrevOffset0_5,
  MR_Integer Ptag_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_arg_vars\'/7", (MR_String) "mismatched lists");
        return;
      }
    }
  else
  {
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_arg_vars\'/7", (MR_String) "mismatched lists");
        return;
      }
    }
    else
    {
      MR_Word Width_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Widths_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word FieldAndArgVar_38;
      MR_Word FieldsAndArgVars_39;
      MR_Integer Offset_41;
      MR_Integer PrevOffset_42;
      MR_Word Field_44;
      MR_Word Type_45;
      MR_Word Var_49;

      switch (MR_tag((MR_Word) Width_33)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Width_33)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Offset_41 = (PrevOffset0_5 + (MR_Integer) 1);
                PrevOffset_42 = Offset_41;
              }
              break;
            case (MR_Integer) 1:
              {
                Offset_41 = (PrevOffset0_5 + (MR_Integer) 1);
                PrevOffset_42 = (Offset_41 + (MR_Integer) 1);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            Offset_41 = (PrevOffset0_5 + (MR_Integer) 1);
            PrevOffset_42 = Offset_41;
          }
          break;
        case (MR_Integer) 2:
          {
            Offset_41 = PrevOffset0_5;
            PrevOffset_42 = Offset_41;
          }
          break;
      }
      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Ptag_6));
        MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Rval_4));
        MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (Offset_41));
        MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (Width_33));
      }
      Field_44 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_49);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, Var_53, &Type_45);
      {
        FieldAndArgVar_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldAndArgVar_38, 0) = ((MR_Box) (Field_44));
        MR_hl_field(MR_mktag(0), FieldAndArgVar_38, 1) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), FieldAndArgVar_38, 2) = ((MR_Box) (Type_45));
      }
      ll_backend__unify_gen__make_fields_and_arg_vars_7_p_0(VarTypes_1, Var_52, Widths_34, Rval_4, PrevOffset_42, Ptag_6, &FieldsAndArgVars_39);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FieldAndArgVar_38));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FieldsAndArgVars_39));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__626__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__654__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__679__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__542__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__663__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__689__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__687__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction__636__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0(
  MR_Word LHSVar_15,
  MR_Word ConsId_16,
  MR_Word RHSVars_17,
  MR_Word ArgModes_18,
  MR_Word ArgWidths_19,
  MR_Word HowToConstruct0_20,
  MR_Word TakeAddr_21,
  MR_Word MaybeSize_22,
  MR_Word GoalInfo_23,
  MR_Word * Code_24,
  MR_Word STATE_VARIABLE_CI_0_84,
  MR_Word * STATE_VARIABLE_CI_85,
  MR_Word STATE_VARIABLE_CLD_0_86,
  MR_Word * STATE_VARIABLE_CLD_87)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_27;
    MR_Word ConsTag_28;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_84, &ModuleInfo_27);
    ConsTag_28 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_27, ConsId_16);
    switch (MR_tag((MR_Word) ConsTag_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ProcInfo_251;
              MR_Word VarTypes_252;
              MR_Word CellArgs0_253;
              MR_Word MayUseAtomic_254;
              MR_Word PackCode_256;
              MR_Word HowToConstruct_257;
              MR_Word CellArgs_258;
              MR_Word Context_259;
              MR_Word ConstructCode_260;
              MR_Word STATE_VARIABLE_CLD_160_261;

              ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_84, &ProcInfo_251);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_251, &VarTypes_252);
              ll_backend__unify_gen__generate_cons_args_8_p_0(VarTypes_252, RHSVars_17, ArgModes_18, ArgWidths_19, TakeAddr_21, STATE_VARIABLE_CI_0_84, &CellArgs0_253, &MayUseAtomic_254);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_19, CellArgs0_253, &CellArgs_258, &PackCode_256, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, &STATE_VARIABLE_CLD_160_261);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_19, HowToConstruct0_20, &HowToConstruct_257);
              Context_259 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_15, (MR_Integer) 0, CellArgs_258, HowToConstruct_257, MaybeSize_22, Context_259, MayUseAtomic_254, &ConstructCode_260, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CI_85, STATE_VARIABLE_CLD_160_261, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_256, ConstructCode_260);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_37;
              MR_Word ArgMode_38;
              MR_Word Var_166;
              MR_Word Var_167;

              succeeded = ((MR_tag((MR_Word) RHSVars_17)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                RHSVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVars_17, (MR_Integer) 0)));
                Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVars_17, (MR_Integer) 1)));
                succeeded = (Var_166 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 0)));
                    Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 1)));
                    succeeded = (Var_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
                if ((TakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word Type_39;
                  MR_Word FieldAndArgVar_40;
                  MR_Word Var_170;

                  Type_39 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_84, RHSVar_37);
                  {
                    Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (LHSVar_15));
                  }
                  {
                    FieldAndArgVar_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_40, 0) = ((MR_Box) (Var_170));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_40, 1) = ((MR_Box) (RHSVar_37));
                    MR_hl_field(MR_mktag(0), FieldAndArgVar_40, 2) = ((MR_Box) (Type_39));
                  }
                  ll_backend__unify_gen__generate_sub_unify_6_p_0(FieldAndArgVar_40, ArgMode_38, Code_24, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "notag: take_addr");
                    return;
                  }
                }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "no_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String String_29 = ((MR_String) (MR_hl_field(MR_mktag(1), ConsTag_28, (MR_Integer) 0)));
          MR_Word Var_187;
          MR_Word Var_189;

          {
            Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_189, 1) = ((MR_Box) (String_29));
          }
          {
            Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_187, 1) = ((MR_Box) (Var_189));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_187, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
          *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float Float_36 = MR_unbox_float((MR_hl_field(MR_mktag(2), ConsTag_28, (MR_Integer) 0)));
          MR_Word Var_174;
          MR_Word Var_176;

          {
            Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_176, 1) = MR_box_float(Float_36);
          }
          {
            Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (Var_176));
          }
          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_174, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
          *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Word Const_31;
              MR_Word Var_185;
              MR_Word Var_32;

              ll_backend__unify_gen__int_tag_to_const_and_int_type_3_p_0(IntTag_30, &Const_31, &Var_32);
              {
                Var_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_185, 1) = ((MR_Box) (Const_31));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_185, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_String Val_34 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));
              MR_Word ForeignConst_35;
              MR_Word Var_177;
              MR_Word Var_181;

              {
                Var_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_14_p_0_5));
                MR_hl_field(MR_mktag(0), Var_177, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_177, 3) = ((MR_Box) (Lang_33));
                MR_hl_field(MR_mktag(0), Var_177, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_177, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "foreign_tag for language other than C");
              {
                Var_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_181, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), Var_181, 1) = ((MR_Box) (Val_34));
                MR_hl_field(MR_mktag(3), Var_181, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__unify_gen_scalar_common_4[3])));
              }
              {
                ForeignConst_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ForeignConst_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ForeignConst_35, 1) = ((MR_Box) (Var_181));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, ForeignConst_35, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_88;
              MR_Word Var_92;
              MR_Word PredId_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Integer ProcId_213 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));

              {
                Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[3]));
                MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_14_p_0_2));
                MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (TakeAddr_21));
                MR_hl_field(MR_mktag(0), Var_88, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "closure_tag has take_addr");
              {
                Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[4]));
                MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_14_p_0_3));
                MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (MaybeSize_22));
                MR_hl_field(MR_mktag(0), Var_92, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_92, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "closure_tag has size");
              ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(PredId_212, ProcId_213, LHSVar_15, RHSVars_17, GoalInfo_23, Code_24, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CI_85, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_String TypeName_61 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));
              MR_Integer TypeArity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 3)));
              MR_Word RttiTypeCtor_63;
              MR_Word DataId_64;
              MR_Word Var_137;
              MR_Word Var_141;
              MR_Word Var_143;
              MR_Word Var_145;

              {
                Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_14_p_0_8));
                MR_hl_field(MR_mktag(0), Var_137, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_137, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_137, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_137, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "type_ctor_info constant has args");
              {
                RttiTypeCtor_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RttiTypeCtor_63, 0) = ((MR_Box) (ModuleName_60));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_63, 1) = ((MR_Box) (TypeName_61));
                MR_hl_field(MR_mktag(0), RttiTypeCtor_63, 2) = ((MR_Box) (TypeArity_62));
              }
              {
                Var_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (RttiTypeCtor_63));
                MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              }
              {
                DataId_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_64, 0) = ((MR_Box) (Var_141));
              }
              {
                Var_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_145, 1) = ((MR_Box) (DataId_64));
                MR_hl_field(MR_mktag(3), Var_145, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) (Var_145));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_143, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ClassId_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));
              MR_String Instance_66 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 3)));
              MR_Word TCName_67;
              MR_Word Var_127;
              MR_Word Var_131;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_135;
              MR_Word ModuleName_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Word DataId_204;

              {
                Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_14_p_0_1));
                MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_127, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_127, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "base_typeclass_info constant has args");
              TCName_67 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_65);
              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (ModuleName_203));
                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Instance_66));
              }
              {
                Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (TCName_67));
                MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
              }
              {
                DataId_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DataId_204, 0) = ((MR_Box) (Var_131));
              }
              {
                Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (DataId_204));
                MR_hl_field(MR_mktag(3), Var_135, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (Var_135));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_133, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ConstNum_264 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Word ConstStructMap_265;
              MR_Word Rval_266;
              MR_Word Var_268;
              MR_Box conv1_Var_268;
              MR_Word _Type_263;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_84, &ConstStructMap_265);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_265, ConstNum_264, &conv1_Var_268);
              Var_268 = ((MR_Word) conv1_Var_268);
              Rval_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_268, (MR_Integer) 0)));
              _Type_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_268, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_15, Rval_266, Code_24, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ConstNum_272 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Word ConstStructMap_273;
              MR_Word Rval_274;
              MR_Word Var_276;
              MR_Box conv2_Var_276;
              MR_Word _Type_271;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_84, &ConstStructMap_273);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_273, ConstNum_272, &conv2_Var_276);
              Var_276 = ((MR_Word) conv2_Var_276);
              Rval_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_276, (MR_Integer) 0)));
              _Type_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_276, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_15, Rval_274, Code_24, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ConstNum_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Word ConstStructMap_70;
              MR_Word Rval_71;
              MR_Word Var_125;
              MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));
              MR_Box conv0_Var_125;
              MR_Word _Type_72;

              ll_backend__code_info__get_const_struct_map_2_p_0(STATE_VARIABLE_CI_0_84, &ConstStructMap_70);
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ConstStructMap_70, ConstNum_68, &conv0_Var_125);
              Var_125 = ((MR_Word) conv0_Var_125);
              Rval_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_125, (MR_Integer) 0)));
              _Type_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_125, (MR_Integer) 1)));
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(LHSVar_15, Rval_71, Code_24, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word PredId_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Integer ProcId_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));
              MR_Word ProcLabel_75;
              MR_Word Var_116;
              MR_Word Var_121;
              MR_Word Var_123;
              MR_Word DataId_205;

              {
                Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_14_p_0_7));
                MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_116, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "tabling_info constant has args");
              ProcLabel_75 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_27, PredId_73, ProcId_74);
              {
                DataId_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DataId_205, 0) = ((MR_Box) (ProcLabel_75));
                MR_hl_field(MR_mktag(1), DataId_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (DataId_205));
                MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (Var_123));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_121, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word RttiProcLabel_76;
              MR_Word Origin_77;
              MR_Word UserOrUCI_80;
              MR_Word ProcKind_81;
              MR_Word Var_107;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_114;
              MR_Word DataId_206;
              MR_Word PredId_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Integer ProcId_208 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));
              MR_Word Var_214;
              MR_Word Var_215;
              MR_Word Var_216;
              MR_String Var_217;
              MR_Integer Var_218;
              MR_Word Var_219;
              MR_Word Var_220;
              MR_Integer Var_221;
              MR_Word Var_222;
              MR_Word Var_223;
              MR_Word Var_224;
              MR_Word Var_225;
              MR_Word Var_226;
              MR_Word Var_227;
              MR_Word Var_228;
              MR_Word Var_78;
              MR_Word Var_79;

              {
                Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_14_p_0_4));
                MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_107, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_107, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "deep_profiling_proc_static has args");
              RttiProcLabel_76 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_27, PredId_207, ProcId_208);
              Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 0)));
              Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 1)));
              Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 2)));
              Var_217 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 3)));
              Var_218 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 4)));
              Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 5)));
              Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 6)));
              Var_221 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 7)));
              Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 8)));
              Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 9)));
              Var_224 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 10)))) & (MR_Integer) 7);
              Var_225 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              Var_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              Origin_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 11)));
              Var_227 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 12)))) & (MR_Integer) 1);
              Var_228 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_76, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              succeeded = ((MR_tag((MR_Word) Origin_77)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_77, (MR_Integer) 0)));
                Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_77, (MR_Integer) 1)));
                UserOrUCI_80 = (MR_Integer) 1;
              }
              else
                UserOrUCI_80 = (MR_Integer) 0;
              {
                ProcKind_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ProcKind_81, 0) = ((MR_Box) (UserOrUCI_80));
              }
              {
                Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (RttiProcLabel_76));
                MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (ProcKind_81));
              }
              {
                DataId_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DataId_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), DataId_206, 1) = ((MR_Box) (Var_111));
              }
              {
                Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (DataId_206));
                MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (Var_114));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_112, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word PredProcId_82;
              MR_Word Var_98;
              MR_Word Var_103;
              MR_Word Var_105;
              MR_Word DataId_209;
              MR_Word PredId_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Integer ProcId_211 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));

              {
                Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_14_p_0_6));
                MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_98, 3) = ((MR_Box) (RHSVars_17));
                MR_hl_field(MR_mktag(0), Var_98, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__require__expect_3_p_0(Var_98, (MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "table_io_entry has args");
              {
                PredProcId_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredProcId_82, 0) = ((MR_Box) (PredId_210));
                MR_hl_field(MR_mktag(0), PredProcId_82, 1) = ((MR_Box) (ProcId_211));
              }
              {
                DataId_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DataId_209, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), DataId_209, 1) = NULL;
                MR_hl_field(MR_mktag(3), DataId_209, 2) = ((MR_Box) (PredProcId_82));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (DataId_209));
                MR_hl_field(MR_mktag(3), Var_105, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (Var_105));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_103, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer Ptag_279 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Word ProcInfo_280;
              MR_Word VarTypes_281;
              MR_Word CellArgs0_282;
              MR_Word MayUseAtomic_283;
              MR_Word PackCode_285;
              MR_Word HowToConstruct_286;
              MR_Word CellArgs_287;
              MR_Word Context_288;
              MR_Word ConstructCode_289;
              MR_Word STATE_VARIABLE_CLD_160_290;

              ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_84, &ProcInfo_280);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_280, &VarTypes_281);
              ll_backend__unify_gen__generate_cons_args_8_p_0(VarTypes_281, RHSVars_17, ArgModes_18, ArgWidths_19, TakeAddr_21, STATE_VARIABLE_CI_0_84, &CellArgs0_282, &MayUseAtomic_283);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_19, CellArgs0_282, &CellArgs_287, &PackCode_285, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, &STATE_VARIABLE_CLD_160_290);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_19, HowToConstruct0_20, &HowToConstruct_286);
              Context_288 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_15, Ptag_279, CellArgs_287, HowToConstruct_286, MaybeSize_22, Context_288, MayUseAtomic_283, &ConstructCode_289, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CI_85, STATE_VARIABLE_CLD_160_290, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_285, ConstructCode_289);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer Ptag_200 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Word RHSVar_194;
              MR_Word ArgMode_195;
              MR_Word Var_153;
              MR_Word Var_154;

              succeeded = ((MR_tag((MR_Word) RHSVars_17)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                RHSVar_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVars_17, (MR_Integer) 0)));
                Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHSVars_17, (MR_Integer) 1)));
                succeeded = (Var_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgMode_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 0)));
                    Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgModes_18, (MR_Integer) 1)));
                    succeeded = (Var_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
              if (succeeded)
                if ((TakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word Type_192;

                  Type_192 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_84, RHSVar_194);
                  ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(LHSVar_15, RHSVar_194, Ptag_200, ArgMode_195, Type_192, Code_24, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
                }
                else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "direct_arg_tag: take_addr");
                    return;
                  }
                }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_construction\'/14", (MR_String) "direct_arg_tag: arity != 1");
                  return;
                }
              }
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer Ptag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Word ProcInfo_45;
              MR_Word VarTypes_46;
              MR_Word CellArgs0_47;
              MR_Word MayUseAtomic_48;
              MR_Word CellArgs1_49;
              MR_Word PackCode_50;
              MR_Word HowToConstruct_51;
              MR_Word CellArgs_53;
              MR_Integer Sectag_54;
              MR_Word TagArg_55;
              MR_Word Context_56;
              MR_Word ConstructCode_57;
              MR_Word STATE_VARIABLE_CLD_160_160;
              MR_Word Var_161;
              MR_Word Var_162;
              MR_Integer _Sectag_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));
              MR_Integer _Ptag_190;

              ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_84, &ProcInfo_45);
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_45, &VarTypes_46);
              ll_backend__unify_gen__generate_cons_args_8_p_0(VarTypes_46, RHSVars_17, ArgModes_18, ArgWidths_19, TakeAddr_21, STATE_VARIABLE_CI_0_84, &CellArgs0_47, &MayUseAtomic_48);
              ll_backend__unify_gen__pack_cell_rvals_7_p_0(ArgWidths_19, CellArgs0_47, &CellArgs1_49, &PackCode_50, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, &STATE_VARIABLE_CLD_160_160);
              ll_backend__unify_gen__pack_how_to_construct_3_p_0(ArgWidths_19, HowToConstruct0_20, &HowToConstruct_51);
              _Ptag_190 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              Sectag_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));
              {
                Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Sectag_54));
              }
              {
                Var_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_161, 1) = ((MR_Box) (Var_162));
              }
              {
                TagArg_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), TagArg_55, 0) = ((MR_Box) (Var_161));
                MR_hl_field(MR_mktag(1), TagArg_55, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                CellArgs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CellArgs_53, 0) = ((MR_Box) (TagArg_55));
                MR_hl_field(MR_mktag(1), CellArgs_53, 1) = ((MR_Box) (CellArgs1_49));
              }
              Context_56 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
              ll_backend__unify_gen__construct_cell_12_p_0(LHSVar_15, Ptag_43, CellArgs_53, HowToConstruct_51, MaybeSize_22, Context_56, MayUseAtomic_48, &ConstructCode_57, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CI_85, STATE_VARIABLE_CLD_160_160, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, PackCode_50, ConstructCode_57);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_147;
              MR_Word Var_149;
              MR_Word Var_151;
              MR_Word Var_152;
              MR_Integer Ptag_201 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 1)));
              MR_Integer Sectag_202 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_28, (MR_Integer) 2)));

              {
                Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (Sectag_202));
              }
              {
                Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_151, 1) = ((MR_Box) (Var_152));
              }
              {
                Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(3), Var_149, 2) = ((MR_Box) (Var_151));
              }
              {
                Var_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_147, 0) = ((MR_Box) (Ptag_201));
                MR_hl_field(MR_mktag(2), Var_147, 1) = ((MR_Box) (Var_149));
              }
              ll_backend__code_loc_dep__assign_const_to_var_5_p_0(LHSVar_15, Var_147, STATE_VARIABLE_CI_0_84, STATE_VARIABLE_CLD_0_86, STATE_VARIABLE_CLD_87);
              *Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              *STATE_VARIABLE_CI_85 = STATE_VARIABLE_CI_0_84;
            }
            break;
        }
        break;
    }
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
  MR_Word STATE_VARIABLE_CI_0_46,
  MR_Word * STATE_VARIABLE_CI_47,
  MR_Word STATE_VARIABLE_CLD_0_48,
  MR_Word * STATE_VARIABLE_CLD_49)
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
    MR_Word TypeInfo_66_66;
    MR_Word TypeInfo_67_67;
    MR_Word ProcPred_31;
    MR_Word ProcArgs_32;
    MR_Word CallDeterminism_38;
    MR_Word CallCodeModel_40;
    MR_Word Globals_41;
    MR_Word Deep_42;
    MR_Word UseFloatRegs_43;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word _GoalInfo_39;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Integer Var_35;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_46, &ModuleInfo_21);
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
        Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcInfoGoal_26, (MR_Integer) 0)));
        _GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcInfoGoal_26, (MR_Integer) 1)));
        succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1)));
          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 2)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 3)));
          Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 4)));
          CallDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 5)));
          TypeInfo_66_66 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[1];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_66, ((MR_Box) (ProcArgs_32)), ((MR_Box) (Var_64)));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
              Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
              Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 2)));
              Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 3)));
              TypeInfo_67_67 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ProcPred_31)), ((MR_Box) (Var_65)));
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
                  Var_52 = (MR_Integer) 210;
                  libs__globals__lookup_bool_option_3_p_0(Globals_41, Var_52, &Deep_42);
                  succeeded = (Deep_42 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_53 = (MR_Integer) 265;
                    libs__globals__lookup_bool_option_3_p_0(Globals_41, Var_53, &UseFloatRegs_43);
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
        ll_backend__code_loc_dep__assign_var_to_var_4_p_0(Var_15, CallPred_29, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
        *Code_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        *STATE_VARIABLE_CI_47 = STATE_VARIABLE_CI_0_46;
      }
      else
        ll_backend__unify_gen__generate_new_closure_from_old_9_p_0(Var_15, CallPred_29, CallArgs_30, GoalInfo_17, Code_18, STATE_VARIABLE_CI_0_46, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
    else
      ll_backend__unify_gen__generate_closure_from_scratch_13_p_0(ModuleInfo_21, PredId_12, ProcId_13, PredInfo_23, ProcInfo_25, Var_15, Args_16, GoalInfo_17, Code_18, STATE_VARIABLE_CI_0_46, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_closure_from_scratch_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word Var_19,
  MR_Word Args_20,
  MR_Word GoalInfo_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60,
  MR_Word STATE_VARIABLE_CLD_0_61,
  MR_Word * STATE_VARIABLE_CLD_62)
{
  {
    MR_Word TypeCtorInfo_88_88;
    MR_Word CodeAddr_25;
    MR_Word ProcLabel_26;
    MR_Word CodeAddrRval_27;
    MR_Word ClosureInfo_28;
    MR_Word ModuleName_29;
    MR_Word Context_30;
    MR_String FileName_31;
    MR_Integer LineNumber_32;
    MR_Word GoalId_33;
    MR_Integer GoalIdNum_34;
    MR_String GoalIdStr_35;
    MR_Word CallerProcLabel_36;
    MR_Integer SeqNo_37;
    MR_Word StaticCellInfo0_38;
    MR_Word PredOrigin_39;
    MR_Word StaticCellInfo_40;
    MR_Word ClosureLayoutTypedRvals_41;
    MR_Word Data_42;
    MR_Word ClosureDataAddr_43;
    MR_Word ClosureLayoutRval_44;
    MR_Word ArgInfo_45;
    MR_Word VarTypes_46;
    MR_Word MayUseAtomic0_47;
    MR_Word ArgsR_48;
    MR_Word ArgsF_49;
    MR_Word MayUseAtomic_50;
    MR_Integer NumArgsR_51;
    MR_Integer NumArgsF_52;
    MR_Integer NumArgsRF_53;
    MR_Word ArgsRF_54;
    MR_Word Vector_55;
    MR_Word MaybeAllocId_58;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_CI_65_65;
    MR_Word STATE_VARIABLE_CI_66_66;
    MR_Word STATE_VARIABLE_CI_67_67;
    MR_Word STATE_VARIABLE_CI_68_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Integer Var_82;
    MR_Word STATE_VARIABLE_CI_83_83;

    CodeAddr_25 = ll_backend__code_info__make_proc_entry_label_5_f_0(STATE_VARIABLE_CI_0_59, ModuleInfo_14, PredId_15, ProcId_16, (MR_Integer) 0);
    ProcLabel_26 = ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(CodeAddr_25);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (CodeAddr_25));
    }
    {
      CodeAddrRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CodeAddrRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), CodeAddrRval_27, 1) = ((MR_Box) (Var_64));
    }
    ll_backend__continuation_info__generate_closure_layout_4_p_0(ModuleInfo_14, PredId_15, ProcId_16, &ClosureInfo_28);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_14, &ModuleName_29);
    Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
    mercury__term__context_file_2_p_0(Context_30, &FileName_31);
    mercury__term__context_line_2_p_0(Context_30, &LineNumber_32);
    GoalId_33 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_21);
    GoalIdNum_34 = (MR_Integer) GoalId_33;
    GoalIdStr_35 = mercury__string__int_to_string_1_f_0(GoalIdNum_34);
    ll_backend__code_info__get_proc_label_2_p_0(STATE_VARIABLE_CI_0_59, &CallerProcLabel_36);
    ll_backend__code_info__get_next_closure_seq_no_3_p_0(&SeqNo_37, STATE_VARIABLE_CI_0_59, &STATE_VARIABLE_CI_65_65);
    ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_65_65, &StaticCellInfo0_38);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_17, &PredOrigin_39);
    ll_backend__stack_layout__construct_closure_layout_13_p_0(CallerProcLabel_36, SeqNo_37, ClosureInfo_28, ProcLabel_26, ModuleName_29, FileName_31, LineNumber_32, PredOrigin_39, GoalIdStr_35, StaticCellInfo0_38, &StaticCellInfo_40, &ClosureLayoutTypedRvals_41, &Data_42);
    ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_40, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_66_66);
    ll_backend__code_info__add_closure_layout_3_p_0(Data_42, STATE_VARIABLE_CI_66_66, &STATE_VARIABLE_CI_67_67);
    ll_backend__code_info__add_scalar_static_cell_4_p_0(ClosureLayoutTypedRvals_41, &ClosureDataAddr_43, STATE_VARIABLE_CI_67_67, &STATE_VARIABLE_CI_68_68);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (ClosureDataAddr_43));
      MR_hl_field(MR_mktag(3), Var_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ClosureLayoutRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureLayoutRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ClosureLayoutRval_44, 1) = ((MR_Box) (Var_69));
    }
    hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_18, &ArgInfo_45);
    ll_backend__code_info__get_vartypes_2_p_0(STATE_VARIABLE_CI_68_68, &VarTypes_46);
    ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_68_68, &MayUseAtomic0_47);
    ll_backend__unify_gen__generate_pred_args_8_p_0(STATE_VARIABLE_CI_68_68, VarTypes_46, Args_20, ArgInfo_45, &ArgsR_48, &ArgsF_49, MayUseAtomic0_47, &MayUseAtomic_50);
    TypeCtorInfo_88_88 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0;
    mercury__list__length_2_p_0(TypeCtorInfo_88_88, ArgsR_48, &NumArgsR_51);
    mercury__list__length_2_p_0(TypeCtorInfo_88_88, ArgsF_49, &NumArgsF_52);
    NumArgsRF_53 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumArgsR_51, NumArgsF_52);
    mercury__list__append_3_p_1(TypeCtorInfo_88_88, ArgsR_48, ArgsF_49, &ArgsRF_54);
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ClosureLayoutRval_44));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (CodeAddrRval_27));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (NumArgsRF_53));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (ArgsRF_54));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Vector_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Vector_55, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Vector_55, 1) = ((MR_Box) (Var_73));
    }
    Var_82 = mercury__list__length_1_f_0(TypeCtorInfo_88_88, Vector_55);
    ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(Context_30, (MR_String) "closure", Var_82, &MaybeAllocId_58, STATE_VARIABLE_CI_68_68, &STATE_VARIABLE_CI_83_83);
    ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_19, (MR_Integer) 0, (MR_Integer) 0, Vector_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MaybeAllocId_58, MayUseAtomic_50, Code_22, STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CI_60, STATE_VARIABLE_CLD_0_61, STATE_VARIABLE_CLD_62);
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
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_pred_args\'/8", (MR_String) "insufficient args");
        return;
      }
    }
    else
    {
      MR_Word ArgInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word ArgInfos_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word RegType_35;
      MR_Word ArgMode_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_30, (MR_Integer) 1)));
      MR_Word CellArg_40;
      MR_Word Type_41;
      MR_Word ModuleInfo_42;
      MR_Word ArgsR0_43;
      MR_Word ArgsF0_44;
      MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgInfo_30, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_MayUseAtomic_51_51;
      MR_Integer Var_36;

      RegType_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0)));
      Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1)));
      switch (ArgMode_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IsDummy_38;
            MR_Word Rval_39;

            IsDummy_38 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_1, Var_54);
            switch (IsDummy_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Rval_39 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
                }
                break;
              case (MR_Integer) 1:
                {
                  Rval_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Rval_39, 0) = ((MR_Box) (Var_54));
                }
                break;
            }
            {
              CellArg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CellArg_40, 0) = ((MR_Box) (Rval_39));
              MR_hl_field(MR_mktag(1), CellArg_40, 1) = ((MR_Box) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          CellArg_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_2, Var_54, &Type_41);
      ll_backend__code_info__get_module_info_2_p_0(CI_1, &ModuleInfo_42);
      check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_42, Type_41, STATE_VARIABLE_MayUseAtomic_0_7, &STATE_VARIABLE_MayUseAtomic_51_51);
      ll_backend__unify_gen__generate_pred_args_8_p_0(CI_1, VarTypes_2, Var_53, ArgInfos_31, &ArgsR0_43, &ArgsF0_44, STATE_VARIABLE_MayUseAtomic_51_51, STATE_VARIABLE_MayUseAtomic_8);
      switch (RegType_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *HeadVar__5_5 = ArgsR0_43;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CellArg_40));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsF0_44));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CellArg_40));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsR0_43));
            }
            *HeadVar__6_6 = ArgsF0_44;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_new_closure_from_old_9_p_0(
  MR_Word Var_10,
  MR_Word CallPred_11,
  MR_Word CallArgs_12,
  MR_Word GoalInfo_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41)
{
  {
    MR_Word TypeCtorInfo_191_191;
    MR_Word LoopStart_17;
    MR_Word LoopTest_18;
    MR_Word LoopCounter_19;
    MR_Word NumOldArgs_20;
    MR_Word NewClosure_21;
    MR_Word Zero_22;
    MR_Word One_23;
    MR_Word Two_24;
    MR_Word Three_25;
    MR_Integer NumNewArgs_26;
    MR_Word NumNewArgs_Rval_27;
    MR_Integer NumNewArgsPlusThree_28;
    MR_Word NumNewArgsPlusThree_Rval_29;
    MR_Word OldClosureCode_30;
    MR_Word OldClosure_31;
    MR_Word Context_32;
    MR_Word MaybeAllocId_33;
    MR_Word NewClosureCode_35;
    MR_Word ExtraArgsCode_36;
    MR_Word AssignCode_37;
    MR_Word STATE_VARIABLE_CI_42_42;
    MR_Word STATE_VARIABLE_CI_43_43;
    MR_Word STATE_VARIABLE_CLD_45_45;
    MR_Word STATE_VARIABLE_CLD_47_47;
    MR_Word STATE_VARIABLE_CLD_49_49;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_CLD_61_61;
    MR_Word Var_64;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_120;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_180;
    MR_Word STATE_VARIABLE_CLD_183_183;
    MR_Word STATE_VARIABLE_CLD_184_184;
    MR_Word STATE_VARIABLE_CLD_185_185;
    MR_Word STATE_VARIABLE_CLD_186_186;
    MR_Word Var_188;
    MR_Word Var_189;

    ll_backend__code_info__get_next_label_3_p_0(&LoopStart_17, STATE_VARIABLE_CI_0_38, &STATE_VARIABLE_CI_42_42);
    ll_backend__code_info__get_next_label_3_p_0(&LoopTest_18, STATE_VARIABLE_CI_42_42, &STATE_VARIABLE_CI_43_43);
    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &LoopCounter_19, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_45_45);
    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NumOldArgs_20, STATE_VARIABLE_CLD_45_45, &STATE_VARIABLE_CLD_47_47);
    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NewClosure_21, STATE_VARIABLE_CLD_47_47, &STATE_VARIABLE_CLD_49_49);
    Zero_22 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
    One_23 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12]);
    Two_24 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[14]);
    Three_25 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[15]);
    mercury__list__length_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], CallArgs_12, &NumNewArgs_26);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (NumNewArgs_26));
    }
    {
      NumNewArgs_Rval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), NumNewArgs_Rval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), NumNewArgs_Rval_27, 1) = ((MR_Box) (Var_58));
    }
    NumNewArgsPlusThree_28 = (NumNewArgs_26 + (MR_Integer) 3);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (NumNewArgsPlusThree_28));
    }
    {
      NumNewArgsPlusThree_Rval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), NumNewArgsPlusThree_Rval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), NumNewArgsPlusThree_Rval_29, 1) = ((MR_Box) (Var_60));
    }
    ll_backend__code_loc_dep__produce_variable_6_p_0(CallPred_11, &OldClosureCode_30, &OldClosure_31, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CLD_49_49, &STATE_VARIABLE_CLD_61_61);
    Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
    ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(Context_32, (MR_String) "closure", NumNewArgsPlusThree_28, &MaybeAllocId_33, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CI_39);
    TypeCtorInfo_191_191 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    Var_74 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[0]);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_73, 2) = ((MR_Box) (OldClosure_31));
      MR_hl_field(MR_mktag(3), Var_73, 3) = ((MR_Box) (Two_24));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (NumOldArgs_20));
      MR_hl_field(MR_mktag(3), Var_71, 2) = ((MR_Box) (Var_72));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) ((MR_String) "get number of arguments"));
    }
    Var_83 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[3]);
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (NumOldArgs_20));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (NumNewArgsPlusThree_Rval_29));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (NewClosure_21));
      MR_hl_field(MR_mktag(3), Var_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_79, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_79, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(3), Var_79, 5) = ((MR_Box) (MaybeAllocId_33));
      MR_hl_field(MR_mktag(3), Var_79, 6) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_79, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_79, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) ((MR_String) "allocate new closure"));
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (NewClosure_21));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_92, 3) = ((MR_Box) (Zero_22));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_97, 2) = ((MR_Box) (OldClosure_31));
      MR_hl_field(MR_mktag(3), Var_97, 3) = ((MR_Box) (Zero_22));
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Var_97));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(3), Var_91, 2) = ((MR_Box) (Var_96));
    }
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) ((MR_String) "set closure layout structure"));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_104, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_104, 3) = ((MR_Box) (One_23));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_109, 2) = ((MR_Box) (OldClosure_31));
      MR_hl_field(MR_mktag(3), Var_109, 3) = ((MR_Box) (One_23));
    }
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Var_109));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(3), Var_103, 2) = ((MR_Box) (Var_108));
    }
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) ((MR_String) "set closure code pointer"));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_116, 3) = ((MR_Box) (Two_24));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(3), Var_120, 2) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(3), Var_120, 3) = ((MR_Box) (NumNewArgs_Rval_27));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (Var_120));
    }
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) ((MR_String) "set new number of arguments"));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(3), Var_128, 2) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(3), Var_128, 3) = ((MR_Box) (Three_25));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (NumOldArgs_20));
      MR_hl_field(MR_mktag(3), Var_127, 2) = ((MR_Box) (Var_128));
    }
    {
      Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) ((MR_String) "set up loop limit"));
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (LoopCounter_19));
      MR_hl_field(MR_mktag(3), Var_135, 2) = ((MR_Box) (Three_25));
    }
    {
      Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (Var_135));
      MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) ((MR_String) "initialize loop counter"));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (LoopTest_18));
    }
    {
      Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) ((MR_String) "enter the copy loop at the conceptual top"));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (LoopStart_17));
    }
    {
      Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (Var_144));
      MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) ((MR_String) "start of loop, nofulljump"));
    }
    {
      Var_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (LoopCounter_19));
    }
    {
      Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_149, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_149, 3) = ((MR_Box) (Var_153));
    }
    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_155, 2) = ((MR_Box) (OldClosure_31));
      MR_hl_field(MR_mktag(3), Var_155, 3) = ((MR_Box) (Var_153));
    }
    {
      Var_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (Var_155));
    }
    {
      Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(3), Var_148, 2) = ((MR_Box) (Var_154));
    }
    {
      Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (Var_148));
      MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) ((MR_String) "copy old hidden argument"));
    }
    {
      Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(3), Var_163, 2) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(3), Var_163, 3) = ((MR_Box) (One_23));
    }
    {
      Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (LoopCounter_19));
      MR_hl_field(MR_mktag(3), Var_162, 2) = ((MR_Box) (Var_163));
    }
    {
      Var_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (Var_162));
      MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
    }
    {
      Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_170, 1) = ((MR_Box) (LoopTest_18));
    }
    {
      Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (Var_170));
      MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) ((MR_String) "do we have more old arguments to copy\? nofulljump"));
    }
    {
      Var_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[17])));
      MR_hl_field(MR_mktag(3), Var_175, 2) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(3), Var_175, 3) = ((MR_Box) (Var_85));
    }
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (LoopStart_17));
    }
    {
      Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (Var_175));
      MR_hl_field(MR_mktag(3), Var_174, 2) = ((MR_Box) (Var_180));
    }
    {
      Var_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) (Var_174));
      MR_hl_field(MR_mktag(0), Var_173, 1) = ((MR_Box) ((MR_String) "repeat the loop\?"));
    }
    {
      Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Var_173));
      MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
      MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_172));
    }
    {
      Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
      MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_168));
    }
    {
      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_160));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_137));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_133));
    }
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_113));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[16]));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_69));
    }
    NewClosureCode_35 = mercury__cord__from_list_1_f_0(TypeCtorInfo_191_191, Var_64);
    ll_backend__unify_gen__generate_extra_closure_args_7_p_0(CallArgs_12, LoopCounter_19, NewClosure_21, &ExtraArgsCode_36, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_61_61, &STATE_VARIABLE_CLD_183_183);
    ll_backend__code_loc_dep__release_reg_3_p_0(LoopCounter_19, STATE_VARIABLE_CLD_183_183, &STATE_VARIABLE_CLD_184_184);
    ll_backend__code_loc_dep__release_reg_3_p_0(NumOldArgs_20, STATE_VARIABLE_CLD_184_184, &STATE_VARIABLE_CLD_185_185);
    ll_backend__code_loc_dep__release_reg_3_p_0(NewClosure_21, STATE_VARIABLE_CLD_185_185, &STATE_VARIABLE_CLD_186_186);
    ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(Var_10, NewClosure_21, &AssignCode_37, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_186_186, STATE_VARIABLE_CLD_41);
    Var_189 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_191_191, ExtraArgsCode_36, AssignCode_37);
    Var_188 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_191_191, NewClosureCode_35, Var_189);
    *Code_14 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_191_191, OldClosureCode_30, Var_188);
  }
}

static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
  MR_Word Context_7,
  MR_String VarTypeMsg_8,
  MR_Integer Size_9,
  MR_Word * MaybeAllocId_10,
  MR_Word STATE_VARIABLE_CI_0_14,
  MR_Word * STATE_VARIABLE_CI_15)
{
  {
    MR_Word ProfileMemory_12;

    ll_backend__code_info__get_profile_memory_2_p_0(STATE_VARIABLE_CI_0_14, &ProfileMemory_12);
    switch (ProfileMemory_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeAllocId_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_CI_15 = STATE_VARIABLE_CI_0_14;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllocId_13;

          ll_backend__code_info__add_alloc_site_info_6_p_0(Context_7, VarTypeMsg_8, Size_9, &AllocId_13, STATE_VARIABLE_CI_0_14, STATE_VARIABLE_CI_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeAllocId_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AllocId_13));
          }
        }
        break;
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
      MR_hl_field(MR_mktag(3), Var_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
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
                MR_hl_field(MR_mktag(3), SrcA_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
              }
              {
                SrcB_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), SrcB_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), SrcB_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
                MR_hl_field(MR_mktag(3), SrcB_31, 2) = ((MR_Box) (RightRval_17));
                MR_hl_field(MR_mktag(3), SrcB_31, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[12])));
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
            MR_hl_field(MR_mktag(3), MaskOld_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
            MR_hl_field(MR_mktag(3), MaskOld_25, 2) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(3), MaskOld_25, 3) = ((MR_Box) (ComplementMask_24));
          }
          ShiftNew_26 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(RightRval_17, (MR_Integer) 0);
          {
            Combined_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Combined_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Combined_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13])));
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
            MR_hl_field(MR_mktag(3), MaskOld_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
            MR_hl_field(MR_mktag(3), MaskOld_89, 2) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(3), MaskOld_89, 3) = ((MR_Box) (ComplementMask_88));
          }
          ShiftNew_90 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(RightRval_17, Shift_87);
          {
            Combined_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Combined_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Combined_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13])));
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
        MR_hl_field(MR_mktag(3), HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11])));
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
            MR_hl_field(MR_mktag(3), RightRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
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
            MR_hl_field(MR_mktag(3), RightRval0_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[10])));
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
            MR_hl_field(MR_mktag(3), RightRval_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
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
    MR_Word ProfileMemory_62;
    MR_Word RevFieldAddrs_68;
    MR_Integer Var_67;
    MR_Box conv3_Var_67;
    MR_Box conv2_RevFieldAddrs_68;

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
    ll_backend__code_info__get_profile_memory_2_p_0(STATE_VARIABLE_CI_0_34, &ProfileMemory_62);
    switch (ProfileMemory_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAllocId_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          STATE_VARIABLE_CI_38_38 = STATE_VARIABLE_CI_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllocId_63;

          ll_backend__code_info__add_alloc_site_info_6_p_0(Context_18, VarTypeMsg_24, Size_27, &AllocId_63, STATE_VARIABLE_CI_0_34, &STATE_VARIABLE_CI_38_38);
          {
            MaybeAllocId_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAllocId_28, 0) = ((MR_Box) (AllocId_63));
          }
        }
        break;
    }
    ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_13, ReserveWordAtStart_26, Ptag_14, CellArgs_15, HowToConstruct_16, MaybeSize_17, MaybeAllocId_28, MayUseAtomic_19, &CellCode_29, STATE_VARIABLE_CI_38_38, STATE_VARIABLE_CI_35, STATE_VARIABLE_CLD_0_36, &STATE_VARIABLE_CLD_40_40);
    mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[6], (MR_Word) &ll_backend__unify_gen_scalar_common_2[5], CellArgs_15, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_67, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv2_RevFieldAddrs_68);
    Var_67 = ((MR_Integer) conv3_Var_67);
    RevFieldAddrs_68 = ((MR_Word) conv2_RevFieldAddrs_68);
    mercury__list__reverse_2_p_0((MR_Word) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0, RevFieldAddrs_68, &FieldAddrs_30);
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
  MR_Word VarTypes_9,
  MR_Word Vars_10,
  MR_Word Modes_11,
  MR_Word Widths_12,
  MR_Word TakeAddr_13,
  MR_Word CI_14,
  MR_Word * STATE_VARIABLE_Args_18,
  MR_Word * STATE_VARIABLE_MayUseAtomic_19)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_MayUseAtomic_20_20;
    MR_Word STATE_VARIABLE_Args_21_21;
    MR_Word STATE_VARIABLE_MayUseAtomic_22_22;

    ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(CI_14, &STATE_VARIABLE_MayUseAtomic_20_20);
    succeeded = ll_backend__unify_gen__generate_cons_args_loop_10_p_0(VarTypes_9, Vars_10, Modes_11, Widths_12, (MR_Integer) 1, TakeAddr_13, CI_14, &STATE_VARIABLE_Args_21_21, STATE_VARIABLE_MayUseAtomic_20_20, &STATE_VARIABLE_MayUseAtomic_22_22);
    if (succeeded)
    {
      *STATE_VARIABLE_MayUseAtomic_19 = STATE_VARIABLE_MayUseAtomic_22_22;
      *STATE_VARIABLE_Args_18 = STATE_VARIABLE_Args_21_21;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen.generate_cons_args\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_loop_10_p_0(
  MR_Word VarTypes_1,
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

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    else
    {
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgMode_21;
      MR_Word ArgModes_22;
      MR_Word Width_23;
      MR_Word Widths_24;
      MR_Word CellArg_28;
      MR_Word CellArgs_29;
      MR_Word STATE_VARIABLE_MayUseAtomic_34_34;
      MR_Integer Var_35;
      MR_Integer Var_37;
      MR_Word Type_50;
      MR_Word ModuleInfo_51;
      MR_Word STATE_VARIABLE_MayUseAtomic_33_60;
      MR_Integer Var_72;
      MR_Word STATE_VARIABLE_TakeAddr_34_61;

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
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, Var_19, &Type_50);
          ll_backend__code_info__get_module_info_2_p_0(HeadVar__7_7, &ModuleInfo_51);
          check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_51, Type_50, STATE_VARIABLE_MayUseAtomic_0_9, &STATE_VARIABLE_MayUseAtomic_33_60);
          succeeded = ((MR_tag((MR_Word) HeadVar__6_6)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0)));
            STATE_VARIABLE_TakeAddr_34_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1)));
            succeeded = (HeadVar__5_5 == Var_72);
          }
          if (succeeded)
          {
            MR_Word LCMCNull_52;
            MR_Word MaybeNull_53;

            ll_backend__code_info__get_lcmc_null_2_p_0(HeadVar__7_7, &LCMCNull_52);
            switch (LCMCNull_52) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeNull_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  MaybeNull_53 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_4[1]);
                }
                break;
            }
            {
              CellArg_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CellArg_28, 0) = ((MR_Box) (Var_19));
              MR_hl_field(MR_mktag(3), CellArg_28, 1) = ((MR_Box) (MaybeNull_53));
            }
            STATE_VARIABLE_MayUseAtomic_34_34 = (MR_Integer) 1;
          }
          else
          {
            MR_Word RHSInsts_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_21, (MR_Integer) 1)));
            MR_Word RHSTopFunctorMode_56;
            MR_Word _LHSMode_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgMode_21, (MR_Integer) 0)));

            check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ModuleInfo_51, RHSInsts_55, Type_50, &RHSTopFunctorMode_56);
            switch (RHSTopFunctorMode_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) Width_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Width_23)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_67;

                          {
                            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_19));
                          }
                          {
                            CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), CellArg_28, 0) = ((MR_Box) (Var_67));
                            MR_hl_field(MR_mktag(1), CellArg_28, 1) = ((MR_Box) ((MR_Integer) 0));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_66;

                          {
                            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_19));
                          }
                          {
                            CellArg_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), CellArg_28, 0) = ((MR_Box) (Var_66));
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_67;

                      {
                        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_19));
                      }
                      {
                        CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), CellArg_28, 0) = ((MR_Box) (Var_67));
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
            STATE_VARIABLE_MayUseAtomic_34_34 = STATE_VARIABLE_MayUseAtomic_33_60;
          }
          Var_37 = (MR_Integer) 1;
          Var_35 = (HeadVar__5_5 + Var_37);
          succeeded = ll_backend__unify_gen__generate_cons_args_loop_10_p_0(VarTypes_1, Vars_20, ArgModes_22, Widths_24, Var_35, HeadVar__6_6, HeadVar__7_7, &CellArgs_29, STATE_VARIABLE_MayUseAtomic_34_34, STATE_VARIABLE_MayUseAtomic_10);
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
    return succeeded;
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
    MR_Word conv0_LambdaHeadVar__2_19;

    conv0_LambdaHeadVar__2_19 = ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__242__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word ModuleInfo_5,
  MR_Word ConsId_6,
  MR_Word Args_7,
  MR_Word * AllArgWidths_8)
{
  {
    MR_bool succeeded;
    MR_Word ConsRepnDefn_9;

    succeeded = check_hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_5, ConsId_6, &ConsRepnDefn_9);
    if (succeeded)
    {
      MR_Word TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0;
      MR_Word TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
      MR_Word ConsArgRepns_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 3)));
      MR_Word ArgWidths_11;
      MR_Integer NumArgs_13;
      MR_Integer NumConsArgs_14;
      MR_Integer NumExtraArgs_15;
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 0)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 2)));
      MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 4)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRepnDefn_9, (MR_Integer) 5)));

      ArgWidths_11 = mercury__list__map_2_f_0(TypeCtorInfo_36_36, TypeCtorInfo_37_37, (MR_Word) &ll_backend__unify_gen_scalar_common_2[3], ConsArgRepns_10);
      mercury__list__length_2_p_0(TypeInfo_for_T_35, Args_7, &NumArgs_13);
      mercury__list__length_2_p_0(TypeCtorInfo_36_36, ConsArgRepns_10, &NumConsArgs_14);
      NumExtraArgs_15 = (NumArgs_13 - NumConsArgs_14);
      succeeded = (NumExtraArgs_15 == (MR_Integer) 0);
      if (succeeded)
        *AllArgWidths_8 = ArgWidths_11;
      else
      {
        succeeded = (NumExtraArgs_15 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word ExtraArgWidths_16;

          ExtraArgWidths_16 = mercury__list__duplicate_2_f_0(TypeCtorInfo_37_37, NumExtraArgs_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          *AllArgWidths_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_37_37, ExtraArgWidths_16, ArgWidths_11);
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
      MR_Integer Var_24;

      Var_24 = mercury__list__length_1_f_0(TypeInfo_for_T_35, Args_7);
      *AllArgWidths_8 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, Var_24, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
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
