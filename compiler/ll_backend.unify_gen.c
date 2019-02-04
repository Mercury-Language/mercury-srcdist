/*
** Automatically generated from `unify_gen.m'
** by the Mercury compiler,
** version rotd-2017-06-13
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module ll_backend.unify_gen. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__unify_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_hlds__hlds_goal__type_ctor_info_term_size_value_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_cell_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__list__pti_list_1__plain_ll_backend__unify_gen__type_ctor_info_field_addr_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__unify_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__unify_gen__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_typed_rval_0;

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
ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001(
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001(
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0_10001(
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0_10001(
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0_10001(
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0_10001(
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
  MR_Word ll_backend__unify_gen__ConsTag_10,
  MR_Word ll_backend__unify_gen__ArgWidth_11,
  MR_Word * ll_backend__unify_gen__TypedRval_12);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_11,
  MR_Word ll_backend__unify_gen__UnboxedFloats_12,
  MR_Word ll_backend__unify_gen__ConstStructMap_13,
  MR_Word ll_backend__unify_gen__ConsTag_15,
  MR_Word ll_backend__unify_gen__ConstArgs_16,
  MR_Word ll_backend__unify_gen__ConsArgWidths_17,
  MR_Word * ll_backend__unify_gen__TypedRval_18,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_71,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_72);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word ll_backend__unify_gen__Var_11,
  MR_Word ll_backend__unify_gen__Args_13,
  MR_Word ll_backend__unify_gen__Modes_14,
  MR_Word ll_backend__unify_gen__ArgWidths_15,
  MR_Word ll_backend__unify_gen__Tag_16,
  MR_Word * ll_backend__unify_gen__Code_17,
  MR_Word ll_backend__unify_gen__CI_18,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_66);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
  MR_Word ll_backend__unify_gen__PredId_12,
  MR_Integer ll_backend__unify_gen__ProcId_13,
  MR_Word ll_backend__unify_gen__Var_15,
  MR_Word ll_backend__unify_gen__Args_16,
  MR_Word ll_backend__unify_gen__GoalInfo_17,
  MR_Word * ll_backend__unify_gen__Code_18,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_99,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_100,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_102);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
  MR_Word ll_backend__unify_gen__VarRval_12,
  MR_String ll_backend__unify_gen__VarName_14,
  MR_Word ll_backend__unify_gen__ConsId_15,
  MR_Word ll_backend__unify_gen__MaybeConsTag_16,
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
  MR_Word ll_backend__unify_gen__Sense_18,
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
  MR_Word * ll_backend__unify_gen__Code_20,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_33,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_34);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box * ll_backend__unify_gen__wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box * ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2225__1_2_p_0(
  MR_Integer ll_backend__unify_gen__Shift_12,
  MR_Integer ll_backend__unify_gen__HeadVar__2_41);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2054__1_2_p_0(
  MR_Word ll_backend__unify_gen__Lang_22,
  MR_Word ll_backend__unify_gen__HeadVar__2_120);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1873__1_2_p_0(
  MR_Word ll_backend__unify_gen__Lang_18,
  MR_Word ll_backend__unify_gen__HeadVar__2_72);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__645__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_152);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__673__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_129);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__700__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_109);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__708__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_102);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__562__1_2_p_0(
  MR_Word ll_backend__unify_gen__Lang_30,
  MR_Word ll_backend__unify_gen__HeadVar__2_202);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__683__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_119);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__723__1_2_p_0(
  MR_Word ll_backend__unify_gen__MaybeSize_22,
  MR_Word ll_backend__unify_gen__HeadVar__2_93);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__721__1_2_p_0(
  MR_Word ll_backend__unify_gen__TakeAddr_21,
  MR_Word ll_backend__unify_gen__HeadVar__2_88);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__655__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_141);

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__496__1_3_f_0(
  MR_Word ll_backend__unify_gen__Rval_4,
  MR_Word ll_backend__unify_gen__LambdaHeadVar__1_49,
  MR_Word ll_backend__unify_gen__LambdaHeadVar__2_50);

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__427__1_2_p_0(
  MR_Word ll_backend__unify_gen__ForeignLang_11,
  MR_Word ll_backend__unify_gen__HeadVar__2_114);

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__231__1_1_f_0(
  MR_Word ll_backend__unify_gen__LambdaHeadVar__1_21);

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0(
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0(
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2);

static MR_Word MR_CALL 
ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(
  MR_Word ll_backend__unify_gen__CellArgA_4,
  MR_Word ll_backend__unify_gen__CellArgB_5);

static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
  MR_Word ll_backend__unify_gen__Rval_4,
  MR_Integer ll_backend__unify_gen__Shift_5);

static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
  MR_Word ll_backend__unify_gen__Rval_4,
  MR_Integer ll_backend__unify_gen__Shift_5);

static void MR_CALL 
ll_backend__unify_gen__shift_combine_rval_type_8_p_0(
  MR_Word ll_backend__unify_gen__ArgA_9,
  MR_Integer ll_backend__unify_gen__Shift_10,
  MR_Word ll_backend__unify_gen__MaybeArgB_11,
  MR_Word * ll_backend__unify_gen__FinalArg_12);

static MR_bool MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg);

static void MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0(
  MR_Word ll_backend__unify_gen__CI_10,
  MR_Word ll_backend__unify_gen__CellArgA_11,
  MR_Integer ll_backend__unify_gen__Shift_12,
  MR_Word ll_backend__unify_gen__MaybeCellArgB_13,
  MR_Word * ll_backend__unify_gen__FinalCellArg_14,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_Code_0_30,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Code_31,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_33);

static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
  MR_Box * ll_backend__unify_gen__wrapper_arg_8);

static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0(
  MR_Word ll_backend__unify_gen__Widths_4,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_arg_5_p_0(
  MR_Word ll_backend__unify_gen__Var_6,
  MR_Word ll_backend__unify_gen__ConsArgWidth_7,
  MR_Word * ll_backend__unify_gen__TypedRval_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0(
  MR_Word ll_backend__unify_gen__Vars_6,
  MR_Word ll_backend__unify_gen__ConsArgWidths_7,
  MR_Word * ll_backend__unify_gen__TypedRvals_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(
  MR_Word ll_backend__unify_gen__Var_10,
  MR_Word ll_backend__unify_gen__ConsTag_11,
  MR_Word ll_backend__unify_gen__Args_12,
  MR_Word ll_backend__unify_gen__ConsArgWidths_13,
  MR_Word ll_backend__unify_gen__UnboxedFloats_14,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7);

static void MR_CALL 
ll_backend__unify_gen__det_single_arg_width_2_p_0(
  MR_Word ll_backend__unify_gen__ArgWidths_3,
  MR_Word * ll_backend__unify_gen__ArgWidth_4);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_6_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
  MR_Word ll_backend__unify_gen__ConstArg_10,
  MR_Word ll_backend__unify_gen__ArgWidth_11,
  MR_Word * ll_backend__unify_gen__TypedRval_12);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
  MR_Word ll_backend__unify_gen__ConstArgs_10,
  MR_Word ll_backend__unify_gen__ArgWidths_11,
  MR_Word * ll_backend__unify_gen__TypedRvals_12);

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_7_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_8,
  MR_Word ll_backend__unify_gen__UnboxedFloats_9,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24);

static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(
  MR_Word ll_backend__unify_gen__Var_10,
  MR_Word ll_backend__unify_gen__ArgVar_11,
  MR_Integer ll_backend__unify_gen__Ptag_12,
  MR_Word ll_backend__unify_gen__ArgMode_13,
  MR_Word ll_backend__unify_gen__Type_14,
  MR_Word * ll_backend__unify_gen__Code_15,
  MR_Word ll_backend__unify_gen__CI_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_24,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_25);

static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(
  MR_Word ll_backend__unify_gen__Var_10,
  MR_Word ll_backend__unify_gen__Arg_11,
  MR_Integer ll_backend__unify_gen__Ptag_12,
  MR_Word ll_backend__unify_gen__ArgMode_13,
  MR_Word ll_backend__unify_gen__Type_14,
  MR_Word * ll_backend__unify_gen__Code_15,
  MR_Word ll_backend__unify_gen__CI_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_24);

static MR_bool MR_CALL 
ll_backend__unify_gen__field_offset_pair_3_p_0(
  MR_Word ll_backend__unify_gen__LvalA_4,
  MR_Word * ll_backend__unify_gen__LvalA_2,
  MR_Word * ll_backend__unify_gen__LvalB_5);

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_6_p_0(
  MR_Word ll_backend__unify_gen__Left_7,
  MR_Word ll_backend__unify_gen__Right_8,
  MR_Word * ll_backend__unify_gen__Code_9,
  MR_Word ll_backend__unify_gen__CI_10,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_41);

static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_8_p_0(
  MR_Word ll_backend__unify_gen__L_9,
  MR_Word ll_backend__unify_gen__R_10,
  MR_Word ll_backend__unify_gen__ArgMode_11,
  MR_Word ll_backend__unify_gen__Type_12,
  MR_Word * ll_backend__unify_gen__Code_13,
  MR_Word ll_backend__unify_gen__CI_14,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_21,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_22);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unify_args_2_8_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_8);

static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_8_p_0(
  MR_Word ll_backend__unify_gen__Ls_9,
  MR_Word ll_backend__unify_gen__Rs_10,
  MR_Word ll_backend__unify_gen__Ms_11,
  MR_Word ll_backend__unify_gen__Ts_12,
  MR_Word * ll_backend__unify_gen__Code_13,
  MR_Word ll_backend__unify_gen__CI_14,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_17,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_18);

static void MR_CALL 
ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(
  MR_Word ll_backend__unify_gen__Var_11,
  MR_Word ll_backend__unify_gen__Tag_12,
  MR_Word ll_backend__unify_gen__Args_13,
  MR_Word ll_backend__unify_gen__Modes_14,
  MR_Word ll_backend__unify_gen__ArgWidths_15,
  MR_Word * ll_backend__unify_gen__Code_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_27,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_28,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_29,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_30);

static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_9_p_0(
  MR_Word ll_backend__unify_gen__Var_10,
  MR_Word ll_backend__unify_gen__Cons_11,
  MR_Word ll_backend__unify_gen__Args_12,
  MR_Word ll_backend__unify_gen__Modes_13,
  MR_Word ll_backend__unify_gen__ArgWidths_14,
  MR_Word * ll_backend__unify_gen__Code_15,
  MR_Word ll_backend__unify_gen__CI_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_20,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_21);

static void MR_CALL 
ll_backend__unify_gen__make_fields_and_argvars_7_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__Rval_3,
  MR_Integer ll_backend__unify_gen__PrevOffset0_4,
  MR_Integer ll_backend__unify_gen__TagNum_5,
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
  MR_Word * ll_backend__unify_gen__HeadVar__7_7);

static void MR_CALL 
ll_backend__unify_gen__var_types_3_p_0(
  MR_Word ll_backend__unify_gen__CI_4,
  MR_Word ll_backend__unify_gen__Vars_5,
  MR_Word * ll_backend__unify_gen__Types_6);

static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__CellVar_2,
  MR_Integer ll_backend__unify_gen__CellPtag_3,
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_5,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_6);

static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
  MR_Word ll_backend__unify_gen__CellArg_6,
  MR_Integer ll_backend__unify_gen__ArgOffset_7,
  MR_Integer * ll_backend__unify_gen__NextOffset_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17);

static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
  MR_Word ll_backend__unify_gen__Context_7,
  MR_String ll_backend__unify_gen__VarTypeMsg_8,
  MR_Integer ll_backend__unify_gen__Size_9,
  MR_Word * ll_backend__unify_gen__MaybeAllocId_10,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_15,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_16);

static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0(
  MR_Word ll_backend__unify_gen__Var_13,
  MR_Integer ll_backend__unify_gen__Ptag_14,
  MR_Word ll_backend__unify_gen__CellArgs_15,
  MR_Word ll_backend__unify_gen__HowToConstruct_16,
  MR_Word ll_backend__unify_gen__MaybeSize_17,
  MR_Word ll_backend__unify_gen__Context_18,
  MR_Word ll_backend__unify_gen__MayUseAtomic_19,
  MR_Word * ll_backend__unify_gen__Code_20,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_35,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_36,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_37,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_38);

static MR_Word MR_CALL 
ll_backend__unify_gen__condense_needs_updates_1_f_0(
  MR_Word ll_backend__unify_gen__NeedsUpdatess_3);

static MR_Box MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1);

static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
  MR_Word ll_backend__unify_gen__ArgWidths_4,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15);

static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
  MR_Box * ll_backend__unify_gen__wrapper_arg_8);

static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0(
  MR_Word ll_backend__unify_gen__ArgWidths_8,
  MR_Word ll_backend__unify_gen__CellArgs0_9,
  MR_Word * ll_backend__unify_gen__CellArgs_10,
  MR_Word * ll_backend__unify_gen__Code_11,
  MR_Word ll_backend__unify_gen__CI_12,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_14,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_15);

static MR_Word MR_CALL 
ll_backend__unify_gen__initial_may_use_atomic_1_f_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_3);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_2_10_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
  MR_Integer ll_backend__unify_gen__HeadVar__5_5,
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
  MR_Word ll_backend__unify_gen__HeadVar__7_7,
  MR_Word * ll_backend__unify_gen__HeadVar__8_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);

static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_8_p_0(
  MR_Word ll_backend__unify_gen__Vars_9,
  MR_Word ll_backend__unify_gen__Types_10,
  MR_Word ll_backend__unify_gen__Modes_11,
  MR_Word ll_backend__unify_gen__Widths_12,
  MR_Word ll_backend__unify_gen__TakeAddr_13,
  MR_Word ll_backend__unify_gen__CI_14,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Args_19,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20);

static void MR_CALL 
ll_backend__unify_gen__generate_pred_args_8_p_0(
  MR_Word ll_backend__unify_gen__CI_1,
  MR_Word ll_backend__unify_gen__VarTypes_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8);

static void MR_CALL 
ll_backend__unify_gen__generate_extra_closure_args_7_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__LoopCounter_2,
  MR_Word ll_backend__unify_gen__NewClosure_3,
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
  MR_Word ll_backend__unify_gen__HeadVar__5_5,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_7);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_9(
  MR_Box ll_backend__unify_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_8(
  MR_Box ll_backend__unify_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_7(
  MR_Box ll_backend__unify_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_6(
  MR_Box ll_backend__unify_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_5(
  MR_Box ll_backend__unify_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_4(
  MR_Box ll_backend__unify_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_3(
  MR_Box ll_backend__unify_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_2(
  MR_Box ll_backend__unify_gen__closure_arg);

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg);

static void MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0(
  MR_Word ll_backend__unify_gen__ConsTag_15,
  MR_Word ll_backend__unify_gen__LHSVar_16,
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__ArgModes_18,
  MR_Word ll_backend__unify_gen__ArgWidths_19,
  MR_Word ll_backend__unify_gen__HowToConstruct0_20,
  MR_Word ll_backend__unify_gen__TakeAddr_21,
  MR_Word ll_backend__unify_gen__MaybeSize_22,
  MR_Word ll_backend__unify_gen__GoalInfo_23,
  MR_Word * ll_backend__unify_gen__Code_24,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_80,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_81,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_83);

static void MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0(
  MR_Word ll_backend__unify_gen__LHSVar_15,
  MR_Word ll_backend__unify_gen__ConsId_16,
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__ArgModes_18,
  MR_Word ll_backend__unify_gen__ArgWidths_19,
  MR_Word ll_backend__unify_gen__HowToConstruct_20,
  MR_Word ll_backend__unify_gen__TakeAddr_21,
  MR_Word ll_backend__unify_gen__MaybeSize_22,
  MR_Word ll_backend__unify_gen__GoalInfo_23,
  MR_Word * ll_backend__unify_gen__Code_24,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_29,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_30,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_31,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_32);

static MR_Word MR_CALL 
ll_backend__unify_gen__generate_reserved_address_1_f_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1);

static MR_Box MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_2(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg);

static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
  MR_Word ll_backend__unify_gen__Rval_4,
  MR_Word ll_backend__unify_gen__ConsTag_5,
  MR_Word * ll_backend__unify_gen__TestRval_6);

static void MR_CALL 
ll_backend__unify_gen__disjoin_tag_tests_3_p_0(
  MR_Word ll_backend__unify_gen__CurTestRval_4,
  MR_Word ll_backend__unify_gen__OtherTestRvals_5,
  MR_Word * ll_backend__unify_gen__TestRval_6);

static void MR_CALL 
ll_backend__unify_gen__generate_test_7_p_0(
  MR_Word ll_backend__unify_gen__VarA_8,
  MR_Word ll_backend__unify_gen__VarB_9,
  MR_Word * ll_backend__unify_gen__Code_10,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_21,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_22,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_24);

static void MR_CALL 
ll_backend__unify_gen__generate_assignment_5_p_0(
  MR_Word ll_backend__unify_gen__VarA_6,
  MR_Word ll_backend__unify_gen__VarB_7,
  MR_Word * ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_10);

static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1);

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word ll_backend__unify_gen__TypeInfo_for_T_41,
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
  MR_Word ll_backend__unify_gen__ConsId_6,
  MR_Word ll_backend__unify_gen__Args_7,
  MR_Word * ll_backend__unify_gen__AllArgWidths_8);

static void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
  MR_Box * ll_backend__unify_gen__wrapper_arg_5);

static void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[14][2];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_2[10][3];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[3][6];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[1][10];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[7][5];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[6][1];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_7[1][7];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_8[1][12];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[2][8];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[1][9];

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_11[1][11];




static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_1[14][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[1])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[3])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[4])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[5]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (ll_backend__unify_gen__generate_unification_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[0])),
    ((MR_Box) (ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[5])),
    ((MR_Box) (ll_backend__unify_gen__pack_how_to_construct_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[0])),
    ((MR_Box) (ll_backend__unify_gen__construct_cell_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_9[1])),
    ((MR_Box) (ll_backend__unify_gen__generate_ground_term_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_11[0])),
    ((MR_Box) (ll_backend__unify_gen__pack_ground_term_args_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[1])),
    ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_3[3][6] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__unify_gen__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_5[7][5] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
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
    ((MR_Box) (&ll_backend__unify_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_6[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "build new closure from old closure"))
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_9[2][8] = {
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

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_10[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&ll_backend__unify_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_scalar_common_11[1][11] = {
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
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_field_addr_0_0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_names_field_addr_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_field_addr_0_0[1] = {
  &ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_field_addr_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen__ll_backend__unify_gen__du_ptag_ordered_field_addr_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0
};

static const MR_DuFunctorDesc ll_backend__unify_gen__ll_backend__unify_gen__du_functor_desc_uni_val_0_1 = {
  (MR_String) "lval",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__unify_gen__ll_backend__unify_gen__field_types_uni_val_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__unify_gen__ll_backend__unify_gen__du_stag_ordered_uni_val_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
ll_backend__unify_gen____Unify____active_ground_term_map_0_0_10001(
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____active_ground_term_map_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0_10001(
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

    {
      ll_backend__unify_gen____Compare____active_ground_term_map_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0_10001(
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____field_addr_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0_10001(
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

    {
      ll_backend__unify_gen____Compare____field_addr_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0_10001(
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____test_sense_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0_10001(
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

    {
      ll_backend__unify_gen____Compare____test_sense_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0_10001(
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen____Unify____uni_val_0_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0_10001(
  MR_Box * ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3)
{
  {
    MR_Word ll_backend__unify_gen__conv0_HeadVar__1_1;

    {
      ll_backend__unify_gen____Compare____uni_val_0_0(&ll_backend__unify_gen__conv0_HeadVar__1_1, ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3));
    }
    *ll_backend__unify_gen__wrapper_arg_1 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1873__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
  MR_Word ll_backend__unify_gen__ConsTag_10,
  MR_Word ll_backend__unify_gen__ArgWidth_11,
  MR_Word * ll_backend__unify_gen__TypedRval_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__unify_gen__succeeded;

        switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__unify_gen__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)));
              MR_Word ll_backend__unify_gen__Const_90;
              MR_Word ll_backend__unify_gen__Var_92;

              {
                ll_backend__unify_gen__Const_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_90, 1) = ((MR_Box) (ll_backend__unify_gen__String_13));
              }
              {
                ll_backend__unify_gen__Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_92, 1) = ((MR_Box) (ll_backend__unify_gen__Const_90));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__unify_gen__TypedRval_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Var_92));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 10));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__unify_gen__Const_14;
              MR_Word ll_backend__unify_gen__Type_15;
              MR_Float ll_backend__unify_gen__Float_20 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)));
              MR_Word ll_backend__unify_gen__Var_74;

              {
                ll_backend__unify_gen__Const_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_14, 1) = MR_box_float(ll_backend__unify_gen__Float_20);
              }
              switch (ll_backend__unify_gen__UnboxedFloats_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ArgWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    if (ll_backend__unify_gen__succeeded)
                      ll_backend__unify_gen__Type_15 = (MR_Integer) 9;
                    else
                      ll_backend__unify_gen__Type_15 = (MR_Integer) 11;
                  }
                  break;
                case (MR_Integer) 0:
                  ll_backend__unify_gen__Type_15 = (MR_Integer) 9;
                  break;
              }
              {
                ll_backend__unify_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_74, 1) = ((MR_Box) (ll_backend__unify_gen__Const_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__unify_gen__TypedRval_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Var_74));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__Type_15));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ll_backend__unify_gen__Int_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Const_87;
                  MR_Word ll_backend__unify_gen__Var_89;

                  {
                    ll_backend__unify_gen__Const_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Const_87, 0) = ((MR_Box) (ll_backend__unify_gen__Int_16));
                  }
                  {
                    ll_backend__unify_gen__Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_89, 1) = ((MR_Box) (ll_backend__unify_gen__Const_87));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Var_89));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 7));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned ll_backend__unify_gen__UInt_17 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Const_93;
                  MR_Word ll_backend__unify_gen__Var_95;

                  {
                    ll_backend__unify_gen__Const_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_93, 0) = ((MR_Box) (ll_backend__unify_gen__UInt_17));
                  }
                  {
                    ll_backend__unify_gen__Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_95, 1) = ((MR_Box) (ll_backend__unify_gen__Const_93));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Var_95));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 8));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__unify_gen__Lang_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
                  MR_String ll_backend__unify_gen__Val_19 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__Var_68;
                  MR_Word ll_backend__unify_gen__Const_84;
                  MR_Word ll_backend__unify_gen__Var_86;

                  {
                    ll_backend__unify_gen__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_68, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_68, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0_1));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_68, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_18));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_68, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_68, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/6", (MR_String) "foreign_tag for language other than C");
                  }
                  {
                    ll_backend__unify_gen__Const_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_84, 1) = ((MR_Box) (ll_backend__unify_gen__Val_19));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_84, 2) = ((MR_Box) ((MR_Integer) 7));
                  }
                  {
                    ll_backend__unify_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_86, 1) = ((MR_Box) (ll_backend__unify_gen__Const_84));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Var_86));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 7));
                  }
                }
                break;
              case (MR_Integer) 3:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 12:
              case (MR_Integer) 13:
              case (MR_Integer) 14:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_arg_tag\'/6", (MR_String) "unexpected tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__unify_gen__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
                  MR_String ll_backend__unify_gen__TypeName_28 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
                  MR_Integer ll_backend__unify_gen__TypeArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 3)));
                  MR_Word ll_backend__unify_gen__RttiTypeCtor_30;
                  MR_Word ll_backend__unify_gen__DataId_31;
                  MR_Word ll_backend__unify_gen__Var_59;
                  MR_Word ll_backend__unify_gen__Var_61;
                  MR_Word ll_backend__unify_gen__Rval_78;

                  {
                    ll_backend__unify_gen__RttiTypeCtor_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_30, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_27));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_30, 1) = ((MR_Box) (ll_backend__unify_gen__TypeName_28));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_30, 2) = ((MR_Box) (ll_backend__unify_gen__TypeArity_29));
                  }
                  {
                    ll_backend__unify_gen__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_59, 0) = ((MR_Box) (ll_backend__unify_gen__RttiTypeCtor_30));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
                  }
                  {
                    ll_backend__unify_gen__DataId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_31, 0) = ((MR_Box) (ll_backend__unify_gen__Var_59));
                  }
                  {
                    ll_backend__unify_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_61, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_31));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_61, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__Rval_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_78, 1) = ((MR_Box) (ll_backend__unify_gen__Var_61));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_78));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ll_backend__unify_gen__ClassId_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
                  MR_String ll_backend__unify_gen__Instance_33 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 3)));
                  MR_Word ll_backend__unify_gen__TCName_34;
                  MR_Word ll_backend__unify_gen__Var_55;
                  MR_Word ll_backend__unify_gen__Var_56;
                  MR_Word ll_backend__unify_gen__Var_57;
                  MR_Word ll_backend__unify_gen__Rval_80;
                  MR_Word ll_backend__unify_gen__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__DataId_82;

                  {
                    ll_backend__unify_gen__TCName_34 = backend_libs__type_class_info__generate_class_name_1_f_0(ll_backend__unify_gen__ClassId_32);
                  }
                  {
                    ll_backend__unify_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_56, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_81));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_56, 1) = ((MR_Box) (ll_backend__unify_gen__Instance_33));
                  }
                  {
                    ll_backend__unify_gen__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_55, 0) = ((MR_Box) (ll_backend__unify_gen__TCName_34));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_55, 1) = ((MR_Box) (ll_backend__unify_gen__Var_56));
                  }
                  {
                    ll_backend__unify_gen__DataId_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_82, 0) = ((MR_Box) (ll_backend__unify_gen__Var_55));
                  }
                  {
                    ll_backend__unify_gen__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_57, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_82));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_57, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__Rval_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_80, 1) = ((MR_Box) (ll_backend__unify_gen__Var_57));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_80));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__Stag_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__Rval_23;
                  MR_Word ll_backend__unify_gen__Var_63;
                  MR_Word ll_backend__unify_gen__Var_65;
                  MR_Word ll_backend__unify_gen__Var_66;

                  {
                    ll_backend__unify_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_66, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_22));
                  }
                  {
                    ll_backend__unify_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_65, 1) = ((MR_Box) (ll_backend__unify_gen__Var_66));
                  }
                  {
                    ll_backend__unify_gen__Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_63, 1) = ((MR_Box) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_63, 2) = ((MR_Box) (ll_backend__unify_gen__Var_65));
                  }
                  {
                    ll_backend__unify_gen__Rval_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_23, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_21));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_23, 1) = ((MR_Box) (ll_backend__unify_gen__Var_63));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_23));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ll_backend__unify_gen__RA_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Type_75;
                  MR_Word ll_backend__unify_gen__Rval_76;

                  {
                    ll_backend__unify_gen__Rval_76 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_24);
                  }
                  {
                    ll_backend__llds__rval_type_2_p_0(ll_backend__unify_gen__Rval_76, &ll_backend__unify_gen__Type_75);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_76));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__Type_75));
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ll_backend__unify_gen__ActualConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_10, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__unify_gen__next_value_of_ConsTag_10 = ll_backend__unify_gen__ActualConsTag_26;

                    ll_backend__unify_gen__ConsTag_10 = ll_backend__unify_gen__next_value_of_ConsTag_10;
                  }
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

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_11,
  MR_Word ll_backend__unify_gen__UnboxedFloats_12,
  MR_Word ll_backend__unify_gen__ConstStructMap_13,
  MR_Word ll_backend__unify_gen__ConsTag_15,
  MR_Word ll_backend__unify_gen__ConstArgs_16,
  MR_Word ll_backend__unify_gen__ConsArgWidths_17,
  MR_Word * ll_backend__unify_gen__TypedRval_18,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_71,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_72)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__unify_gen__succeeded;

        switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ll_backend__unify_gen__ConsTag_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_35;
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_36;
                  MR_Word ll_backend__unify_gen__DataAddr_37;
                  MR_Word ll_backend__unify_gen__CellPtrConst_39;
                  MR_Word ll_backend__unify_gen__Var_83;
                  MR_Word ll_backend__unify_gen__Rval_107;

                  {
                    ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_35);
                  }
                  {
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_35, &ll_backend__unify_gen__PackArgTypedRvals_36);
                  }
                  {
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_36, &ll_backend__unify_gen__DataAddr_37, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_71, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_72);
                  }
                  {
                    ll_backend__unify_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_83, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_37));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_83, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__CellPtrConst_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_39, 1) = ((MR_Box) (ll_backend__unify_gen__Var_83));
                  }
                  {
                    ll_backend__unify_gen__Rval_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_107, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_107, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_39));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_18 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_107));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  if ((ll_backend__unify_gen__ConstArgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "no_tag arity != 1");
                        return;
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__unify_gen__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 1)));
                      MR_Word ll_backend__unify_gen__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 0)));

                      if ((ll_backend__unify_gen__Var_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word ll_backend__unify_gen__ConsArgWidth_23;

                          {
                            ll_backend__unify_gen__det_single_arg_width_2_p_0(ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ConsArgWidth_23);
                          }
                          {
                            ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__Var_139, ll_backend__unify_gen__ConsArgWidth_23, ll_backend__unify_gen__TypedRval_18);
                          }
                        }
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "no_tag arity != 1");
                            return;
                          }
                        }
                    }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_72 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_71;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)))) {
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
              case (MR_Integer) 11:
              case (MR_Integer) 15:
              case (MR_Integer) 16:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "unexpected tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_127;
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_128;
                  MR_Word ll_backend__unify_gen__DataAddr_129;
                  MR_Word ll_backend__unify_gen__CellPtrConst_131;
                  MR_Word ll_backend__unify_gen__Var_132;
                  MR_Integer ll_backend__unify_gen__Ptag_134 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Rval_135;

                  {
                    ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_127);
                  }
                  {
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_127, &ll_backend__unify_gen__PackArgTypedRvals_128);
                  }
                  {
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_128, &ll_backend__unify_gen__DataAddr_129, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_71, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_72);
                  }
                  {
                    ll_backend__unify_gen__Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_132, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_129));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_132, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__CellPtrConst_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_131, 1) = ((MR_Box) (ll_backend__unify_gen__Var_132));
                  }
                  {
                    ll_backend__unify_gen__Rval_135 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_135, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_134));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_135, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_131));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_18 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_135));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));

                  if ((ll_backend__unify_gen__ConstArgs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "direct_arg_tag: arity != 1");
                        return;
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__unify_gen__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 1)));
                      MR_Word ll_backend__unify_gen__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArgs_16, (MR_Integer) 0)));

                      if ((ll_backend__unify_gen__Var_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word ll_backend__unify_gen__ArgRval_29;
                          MR_Word ll_backend__unify_gen__Rval_31;
                          MR_Word ll_backend__unify_gen__ConsArgWidth_98;
                          MR_Word ll_backend__unify_gen__ArgTypedRval_99;
                          MR_Word ll_backend__unify_gen___RvalType_30;

                          {
                            ll_backend__unify_gen__det_single_arg_width_2_p_0(ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ConsArgWidth_98);
                          }
                          {
                            ll_backend__unify_gen__generate_const_struct_arg_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__Var_137, ll_backend__unify_gen__ConsArgWidth_98, &ll_backend__unify_gen__ArgTypedRval_99);
                          }
                          ll_backend__unify_gen__ArgRval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgTypedRval_99, (MR_Integer) 0)));
                          ll_backend__unify_gen___RvalType_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgTypedRval_99, (MR_Integer) 1)));
                          {
                            ll_backend__unify_gen__Rval_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_31, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_28));
                            MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_31, 1) = ((MR_Box) (ll_backend__unify_gen__ArgRval_29));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *ll_backend__unify_gen__TypedRval_18 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_31));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
                          }
                        }
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_const_struct_rval\'/10", (MR_String) "direct_arg_tag: arity != 1");
                            return;
                          }
                        }
                    }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_72 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_71;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Integer ll_backend__unify_gen__Stag_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__StagTypedRval_41;
                  MR_Word ll_backend__unify_gen__AllTypedRvals_42;
                  MR_Word ll_backend__unify_gen__Var_76;
                  MR_Word ll_backend__unify_gen__Var_77;
                  MR_Word ll_backend__unify_gen__Var_80;
                  MR_Integer ll_backend__unify_gen__Ptag_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Rval_109;
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_110;
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_111;
                  MR_Word ll_backend__unify_gen__DataAddr_112;
                  MR_Word ll_backend__unify_gen__CellPtrConst_114;

                  {
                    ll_backend__unify_gen__generate_const_struct_args_6_p_0(ll_backend__unify_gen__ModuleInfo_11, ll_backend__unify_gen__UnboxedFloats_12, ll_backend__unify_gen__ConstStructMap_13, ll_backend__unify_gen__ConstArgs_16, ll_backend__unify_gen__ConsArgWidths_17, &ll_backend__unify_gen__ArgTypedRvals_110);
                  }
                  {
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_17, ll_backend__unify_gen__ArgTypedRvals_110, &ll_backend__unify_gen__PackArgTypedRvals_111);
                  }
                  {
                    ll_backend__unify_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_77, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_40));
                  }
                  {
                    ll_backend__unify_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_76, 1) = ((MR_Box) (ll_backend__unify_gen__Var_77));
                  }
                  {
                    ll_backend__unify_gen__StagTypedRval_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_41, 0) = ((MR_Box) (ll_backend__unify_gen__Var_76));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_41, 1) = ((MR_Box) ((MR_Integer) 7));
                  }
                  {
                    ll_backend__unify_gen__AllTypedRvals_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_42, 0) = ((MR_Box) (ll_backend__unify_gen__StagTypedRval_41));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_42, 1) = ((MR_Box) (ll_backend__unify_gen__PackArgTypedRvals_111));
                  }
                  {
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__AllTypedRvals_42, &ll_backend__unify_gen__DataAddr_112, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_71, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_72);
                  }
                  {
                    ll_backend__unify_gen__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_80, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_112));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_80, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__CellPtrConst_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_114, 1) = ((MR_Box) (ll_backend__unify_gen__Var_80));
                  }
                  {
                    ll_backend__unify_gen__Rval_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_109, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_108));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_109, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_114));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__unify_gen__TypedRval_18 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_109));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ll_backend__unify_gen__ActualConsTag_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__unify_gen__next_value_of_ConsTag_15 = ll_backend__unify_gen__ActualConsTag_21;

                    ll_backend__unify_gen__ConsTag_15 = ll_backend__unify_gen__next_value_of_ConsTag_15;
                  }
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

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(
  MR_Word ll_backend__unify_gen__Var_11,
  MR_Word ll_backend__unify_gen__Args_13,
  MR_Word ll_backend__unify_gen__Modes_14,
  MR_Word ll_backend__unify_gen__ArgWidths_15,
  MR_Word ll_backend__unify_gen__Tag_16,
  MR_Word * ll_backend__unify_gen__Code_17,
  MR_Word ll_backend__unify_gen__CI_18,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_66)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__unify_gen__succeeded;

        switch (MR_tag((MR_Word) ll_backend__unify_gen__Tag_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ll_backend__unify_gen__Tag_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    ll_backend__unify_gen__Tag_16 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[13]);
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__unify_gen__Arg_48;
                  MR_Word ll_backend__unify_gen__Mode_49;
                  MR_Word ll_backend__unify_gen__Var_82;
                  MR_Word ll_backend__unify_gen__Var_83;
                  MR_Word ll_backend__unify_gen__Var_84;
                  MR_Word ll_backend__unify_gen___ArgWidth_50;

                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_13)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__unify_gen__succeeded)
                    {
                      ll_backend__unify_gen__Arg_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_13, (MR_Integer) 0)));
                      ll_backend__unify_gen__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_13, (MR_Integer) 1)));
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ll_backend__unify_gen__succeeded)
                        {
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_14)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__unify_gen__succeeded)
                            {
                              ll_backend__unify_gen__Mode_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_14, (MR_Integer) 0)));
                              ll_backend__unify_gen__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_14, (MR_Integer) 1)));
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (ll_backend__unify_gen__succeeded)
                                {
                                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ArgWidths_15)) == (MR_mktag((MR_Integer) 1)));
                                  if (ll_backend__unify_gen__succeeded)
                                    {
                                      ll_backend__unify_gen___ArgWidth_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_15, (MR_Integer) 0)));
                                      ll_backend__unify_gen__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_15, (MR_Integer) 1)));
                                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                }
                            }
                        }
                    }
                  if (ll_backend__unify_gen__succeeded)
                    {
                      MR_Word ll_backend__unify_gen__VarType_51;
                      MR_Word ll_backend__unify_gen__ModuleInfo_52;
                      MR_Word ll_backend__unify_gen__IsDummy_53;

                      {
                        ll_backend__unify_gen__VarType_51 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Var_11);
                      }
                      {
                        ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_18, &ll_backend__unify_gen__ModuleInfo_52);
                      }
                      {
                        ll_backend__unify_gen__IsDummy_53 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__unify_gen__ModuleInfo_52, ll_backend__unify_gen__VarType_51);
                      }
                      switch (ll_backend__unify_gen__IsDummy_53) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            {
                              ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65, ll_backend__unify_gen__Arg_48);
                            }
                            if (ll_backend__unify_gen__succeeded)
                              {
                                {
                                  ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Arg_48, (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]), ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65, ll_backend__unify_gen__STATE_VARIABLE_CLD_66);
                                }
                              }
                            else
                              *ll_backend__unify_gen__STATE_VARIABLE_CLD_66 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65;
                            {
                              *ll_backend__unify_gen__Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ll_backend__unify_gen__ArgType_54;
                            MR_Word ll_backend__unify_gen__Var_85;
                            MR_Word ll_backend__unify_gen__Var_86;

                            {
                              ll_backend__unify_gen__ArgType_54 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Arg_48);
                            }
                            {
                              ll_backend__unify_gen__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_85, 0) = ((MR_Box) (ll_backend__unify_gen__Var_11));
                            }
                            {
                              ll_backend__unify_gen__Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_86, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_48));
                            }
                            {
                              ll_backend__unify_gen__generate_sub_unify_8_p_0(ll_backend__unify_gen__Var_85, ll_backend__unify_gen__Var_86, ll_backend__unify_gen__Mode_49, ll_backend__unify_gen__ArgType_54, ll_backend__unify_gen__Code_17, ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65, ll_backend__unify_gen__STATE_VARIABLE_CLD_66);
                            }
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
              {
                *ll_backend__unify_gen__Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__unify_gen__STATE_VARIABLE_CLD_66 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 15:
              case (MR_Integer) 16:
                {
                  {
                    *ll_backend__unify_gen__Code_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CLD_66 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65;
                }
                break;
              case (MR_Integer) 6:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "type_info_const_tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "typeclass_info_const_tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "ground_term_const_tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_det_deconstruction_2\'/10", (MR_String) "table_io_entry_tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Rval_56;
                  MR_Word ll_backend__unify_gen__Fields_57;
                  MR_Word ll_backend__unify_gen__ArgVars_58;
                  MR_Word ll_backend__unify_gen__ArgTypes_59;

                  {
                    ll_backend__unify_gen__Rval_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_56, 0) = ((MR_Box) (ll_backend__unify_gen__Var_11));
                  }
                  {
                    ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__Args_13, ll_backend__unify_gen__ArgWidths_15, ll_backend__unify_gen__Rval_56, (MR_Integer) -1, ll_backend__unify_gen__Ptag_55, &ll_backend__unify_gen__Fields_57, &ll_backend__unify_gen__ArgVars_58);
                  }
                  {
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Args_13, &ll_backend__unify_gen__ArgTypes_59);
                  }
                  {
                    ll_backend__unify_gen__generate_unify_args_8_p_0(ll_backend__unify_gen__Fields_57, ll_backend__unify_gen__ArgVars_58, ll_backend__unify_gen__Modes_14, ll_backend__unify_gen__ArgTypes_59, ll_backend__unify_gen__Code_17, ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65, ll_backend__unify_gen__STATE_VARIABLE_CLD_66);
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_111 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Arg_107;
                  MR_Word ll_backend__unify_gen__Mode_108;
                  MR_Word ll_backend__unify_gen__Var_70;
                  MR_Word ll_backend__unify_gen__Var_71;
                  MR_Word ll_backend__unify_gen__Var_72;
                  MR_Word ll_backend__unify_gen__Var_60;

                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_13)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__unify_gen__succeeded)
                    {
                      ll_backend__unify_gen__Arg_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_13, (MR_Integer) 0)));
                      ll_backend__unify_gen__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_13, (MR_Integer) 1)));
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ll_backend__unify_gen__succeeded)
                        {
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Modes_14)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__unify_gen__succeeded)
                            {
                              ll_backend__unify_gen__Mode_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_14, (MR_Integer) 0)));
                              ll_backend__unify_gen__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Modes_14, (MR_Integer) 1)));
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (ll_backend__unify_gen__succeeded)
                                {
                                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ArgWidths_15)) == (MR_mktag((MR_Integer) 1)));
                                  if (ll_backend__unify_gen__succeeded)
                                    {
                                      ll_backend__unify_gen__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_15, (MR_Integer) 0)));
                                      ll_backend__unify_gen__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_15, (MR_Integer) 1)));
                                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    }
                                }
                            }
                        }
                    }
                  if (ll_backend__unify_gen__succeeded)
                    {
                      MR_Word ll_backend__unify_gen__Type_61;

                      {
                        ll_backend__unify_gen__Type_61 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Arg_107);
                      }
                      {
                        ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(ll_backend__unify_gen__Var_11, ll_backend__unify_gen__Arg_107, ll_backend__unify_gen__Ptag_111, ll_backend__unify_gen__Mode_108, ll_backend__unify_gen__Type_61, ll_backend__unify_gen__Code_17, ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65, ll_backend__unify_gen__STATE_VARIABLE_CLD_66);
                      }
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
              case (MR_Integer) 14:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Rval_113;
                  MR_Word ll_backend__unify_gen__Fields_114;
                  MR_Word ll_backend__unify_gen__ArgVars_115;
                  MR_Word ll_backend__unify_gen__ArgTypes_116;
                  MR_Integer ll_backend__unify_gen___Sectag1_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 2)));

                  {
                    ll_backend__unify_gen__Rval_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_113, 0) = ((MR_Box) (ll_backend__unify_gen__Var_11));
                  }
                  {
                    ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__Args_13, ll_backend__unify_gen__ArgWidths_15, ll_backend__unify_gen__Rval_113, (MR_Integer) 0, ll_backend__unify_gen__Ptag_112, &ll_backend__unify_gen__Fields_114, &ll_backend__unify_gen__ArgVars_115);
                  }
                  {
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__CI_18, ll_backend__unify_gen__Args_13, &ll_backend__unify_gen__ArgTypes_116);
                  }
                  {
                    ll_backend__unify_gen__generate_unify_args_8_p_0(ll_backend__unify_gen__Fields_114, ll_backend__unify_gen__ArgVars_115, ll_backend__unify_gen__Modes_14, ll_backend__unify_gen__ArgTypes_116, ll_backend__unify_gen__Code_17, ll_backend__unify_gen__CI_18, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_65, ll_backend__unify_gen__STATE_VARIABLE_CLD_66);
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ll_backend__unify_gen__ThisTag_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen___RAs_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Tag_16, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__unify_gen__next_value_of_Tag_16 = ll_backend__unify_gen__ThisTag_64;

                    ll_backend__unify_gen__Tag_16 = ll_backend__unify_gen__next_value_of_Tag_16;
                  }
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

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
  MR_Word ll_backend__unify_gen__PredId_12,
  MR_Integer ll_backend__unify_gen__ProcId_13,
  MR_Word ll_backend__unify_gen__Var_15,
  MR_Word ll_backend__unify_gen__Args_16,
  MR_Word ll_backend__unify_gen__GoalInfo_17,
  MR_Word * ll_backend__unify_gen__Code_18,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_99,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_100,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_102)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__ModuleInfo_21;
    MR_Word ll_backend__unify_gen__Preds_22;
    MR_Word ll_backend__unify_gen__PredInfo_23;
    MR_Word ll_backend__unify_gen__Procs_24;
    MR_Word ll_backend__unify_gen__ProcInfo_25;
    MR_Word ll_backend__unify_gen__ProcInfoGoal_26;
    MR_Word ll_backend__unify_gen__CodeModel_27;
    MR_Word ll_backend__unify_gen__ProcHeadVars_28;
    MR_Box ll_backend__unify_gen__conv0_PredInfo_23;
    MR_Box ll_backend__unify_gen__conv1_ProcInfo_25;
    MR_Word ll_backend__unify_gen__CallPred_29;
    MR_Word ll_backend__unify_gen__CallArgs_30;
    MR_Word ll_backend__unify_gen__TypeInfo_288_288;
    MR_Word ll_backend__unify_gen__TypeInfo_289_289;
    MR_Word ll_backend__unify_gen__ProcPred_31;
    MR_Word ll_backend__unify_gen__ProcArgs_32;
    MR_Word ll_backend__unify_gen__CallDeterminism_38;
    MR_Word ll_backend__unify_gen__CallCodeModel_40;
    MR_Word ll_backend__unify_gen__Globals_41;
    MR_Word ll_backend__unify_gen__Deep_42;
    MR_Word ll_backend__unify_gen__UseFloatRegs_43;
    MR_Word ll_backend__unify_gen__Var_103;
    MR_Word ll_backend__unify_gen__Var_104;
    MR_Word ll_backend__unify_gen__Var_105;
    MR_Word ll_backend__unify_gen__Var_106;
    MR_Word ll_backend__unify_gen__Var_286;
    MR_Word ll_backend__unify_gen__Var_287;
    MR_Word ll_backend__unify_gen___GoalInfo_39;
    MR_Word ll_backend__unify_gen__Var_36;
    MR_Word ll_backend__unify_gen__Var_37;
    MR_Word ll_backend__unify_gen__Var_33;
    MR_Word ll_backend__unify_gen__Var_34;
    MR_Integer ll_backend__unify_gen__Var_35;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, &ll_backend__unify_gen__ModuleInfo_21);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(ll_backend__unify_gen__ModuleInfo_21, &ll_backend__unify_gen__Preds_22);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, ll_backend__unify_gen__Preds_22, ((MR_Box) (ll_backend__unify_gen__PredId_12)), &ll_backend__unify_gen__conv0_PredInfo_23);
    }
    ll_backend__unify_gen__PredInfo_23 = ((MR_Word) ll_backend__unify_gen__conv0_PredInfo_23);
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(ll_backend__unify_gen__PredInfo_23, &ll_backend__unify_gen__Procs_24);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ll_backend__unify_gen__Procs_24, ll_backend__unify_gen__ProcId_13, &ll_backend__unify_gen__conv1_ProcInfo_25);
    }
    ll_backend__unify_gen__ProcInfo_25 = ((MR_Word) ll_backend__unify_gen__conv1_ProcInfo_25);
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__unify_gen__ProcInfo_25, &ll_backend__unify_gen__ProcInfoGoal_26);
    }
    {
      ll_backend__unify_gen__CodeModel_27 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__unify_gen__ProcInfo_25);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__unify_gen__ProcInfo_25, &ll_backend__unify_gen__ProcHeadVars_28);
    }
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Args_16)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__unify_gen__succeeded)
      {
        ll_backend__unify_gen__CallPred_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_16, (MR_Integer) 0)));
        ll_backend__unify_gen__CallArgs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_16, (MR_Integer) 1)));
        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ProcHeadVars_28)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__ProcPred_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcHeadVars_28, (MR_Integer) 0)));
            ll_backend__unify_gen__ProcArgs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcHeadVars_28, (MR_Integer) 1)));
            ll_backend__unify_gen__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ProcInfoGoal_26, (MR_Integer) 0)));
            ll_backend__unify_gen___GoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ProcInfoGoal_26, (MR_Integer) 1)));
            ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__Var_103)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_103, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_103, (MR_Integer) 1)));
                ll_backend__unify_gen__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_103, (MR_Integer) 2)));
                ll_backend__unify_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_103, (MR_Integer) 3)));
                ll_backend__unify_gen__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_103, (MR_Integer) 4)));
                ll_backend__unify_gen__CallDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_103, (MR_Integer) 5)));
                ll_backend__unify_gen__TypeInfo_288_288 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[1];
                {
                  ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_288_288, ((MR_Box) (ll_backend__unify_gen__ProcArgs_32)), ((MR_Box) (ll_backend__unify_gen__Var_286)));
                }
                if (ll_backend__unify_gen__succeeded)
                  {
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Var_104)) == (MR_mktag((MR_Integer) 0)));
                    if (ll_backend__unify_gen__succeeded)
                      {
                        ll_backend__unify_gen__Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_104, (MR_Integer) 0)));
                        ll_backend__unify_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_104, (MR_Integer) 1)));
                        ll_backend__unify_gen__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_104, (MR_Integer) 2)));
                        ll_backend__unify_gen__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_104, (MR_Integer) 3)));
                        ll_backend__unify_gen__TypeInfo_289_289 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                        {
                          ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_289_289, ((MR_Box) (ll_backend__unify_gen__ProcPred_31)), ((MR_Box) (ll_backend__unify_gen__Var_287)));
                        }
                        if (ll_backend__unify_gen__succeeded)
                          {
                            {
                              hlds__code_model__determinism_to_code_model_2_p_0(ll_backend__unify_gen__CallDeterminism_38, &ll_backend__unify_gen__CallCodeModel_40);
                            }
                            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CodeModel_27 == ll_backend__unify_gen__CallCodeModel_40);
                            if (!(ll_backend__unify_gen__succeeded))
                              {
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CodeModel_27 == (MR_Integer) 2);
                                if (ll_backend__unify_gen__succeeded)
                                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CallCodeModel_40 == (MR_Integer) 0);
                              }
                            if (ll_backend__unify_gen__succeeded)
                              {
                                {
                                  hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_21, &ll_backend__unify_gen__Globals_41);
                                }
                                ll_backend__unify_gen__Var_105 = (MR_Integer) 204;
                                {
                                  libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_41, ll_backend__unify_gen__Var_105, &ll_backend__unify_gen__Deep_42);
                                }
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Deep_42 == (MR_Integer) 0);
                                if (ll_backend__unify_gen__succeeded)
                                  {
                                    ll_backend__unify_gen__Var_106 = (MR_Integer) 261;
                                    {
                                      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_41, ll_backend__unify_gen__Var_106, &ll_backend__unify_gen__UseFloatRegs_43);
                                    }
                                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__UseFloatRegs_43 == (MR_Integer) 0);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (ll_backend__unify_gen__succeeded)
      if ((ll_backend__unify_gen__CallArgs_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(ll_backend__unify_gen__Var_15, ll_backend__unify_gen__CallPred_29, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101, ll_backend__unify_gen__STATE_VARIABLE_CLD_102);
          }
          {
            *ll_backend__unify_gen__Code_18 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__unify_gen__STATE_VARIABLE_CI_100 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_99;
        }
      else
        {
          MR_Word ll_backend__unify_gen__TypeCtorInfo_284_284;
          MR_Word ll_backend__unify_gen__LoopStart_46;
          MR_Word ll_backend__unify_gen__LoopTest_47;
          MR_Word ll_backend__unify_gen__LoopCounter_48;
          MR_Word ll_backend__unify_gen__NumOldArgs_49;
          MR_Word ll_backend__unify_gen__NewClosure_50;
          MR_Word ll_backend__unify_gen__Zero_51;
          MR_Word ll_backend__unify_gen__One_52;
          MR_Word ll_backend__unify_gen__Two_53;
          MR_Word ll_backend__unify_gen__Three_54;
          MR_Integer ll_backend__unify_gen__NumNewArgs_55;
          MR_Word ll_backend__unify_gen__NumNewArgs_Rval_56;
          MR_Integer ll_backend__unify_gen__NumNewArgsPlusThree_57;
          MR_Word ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58;
          MR_Word ll_backend__unify_gen__OldClosureCode_59;
          MR_Word ll_backend__unify_gen__OldClosure_60;
          MR_Word ll_backend__unify_gen__Context_61;
          MR_Word ll_backend__unify_gen__MaybeAllocId_62;
          MR_Word ll_backend__unify_gen__NewClosureCode_64;
          MR_Word ll_backend__unify_gen__ExtraArgsCode_65;
          MR_Word ll_backend__unify_gen__AssignCode_66;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_107_107;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_108_108;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_110_110;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_112_112;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_114_114;
          MR_Word ll_backend__unify_gen__Var_123;
          MR_Word ll_backend__unify_gen__Var_125;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_126_126;
          MR_Word ll_backend__unify_gen__Var_129;
          MR_Word ll_backend__unify_gen__Var_134;
          MR_Word ll_backend__unify_gen__Var_135;
          MR_Word ll_backend__unify_gen__Var_136;
          MR_Word ll_backend__unify_gen__Var_137;
          MR_Word ll_backend__unify_gen__Var_138;
          MR_Word ll_backend__unify_gen__Var_139;
          MR_Word ll_backend__unify_gen__Var_142;
          MR_Word ll_backend__unify_gen__Var_143;
          MR_Word ll_backend__unify_gen__Var_144;
          MR_Word ll_backend__unify_gen__Var_147;
          MR_Word ll_backend__unify_gen__Var_149;
          MR_Word ll_backend__unify_gen__Var_153;
          MR_Word ll_backend__unify_gen__Var_154;
          MR_Word ll_backend__unify_gen__Var_155;
          MR_Word ll_backend__unify_gen__Var_156;
          MR_Word ll_backend__unify_gen__Var_159;
          MR_Word ll_backend__unify_gen__Var_160;
          MR_Word ll_backend__unify_gen__Var_161;
          MR_Word ll_backend__unify_gen__Var_165;
          MR_Word ll_backend__unify_gen__Var_166;
          MR_Word ll_backend__unify_gen__Var_167;
          MR_Word ll_backend__unify_gen__Var_168;
          MR_Word ll_backend__unify_gen__Var_172;
          MR_Word ll_backend__unify_gen__Var_173;
          MR_Word ll_backend__unify_gen__Var_177;
          MR_Word ll_backend__unify_gen__Var_178;
          MR_Word ll_backend__unify_gen__Var_179;
          MR_Word ll_backend__unify_gen__Var_180;
          MR_Word ll_backend__unify_gen__Var_184;
          MR_Word ll_backend__unify_gen__Var_188;
          MR_Word ll_backend__unify_gen__Var_189;
          MR_Word ll_backend__unify_gen__Var_190;
          MR_Word ll_backend__unify_gen__Var_191;
          MR_Word ll_backend__unify_gen__Var_195;
          MR_Word ll_backend__unify_gen__Var_196;
          MR_Word ll_backend__unify_gen__Var_197;
          MR_Word ll_backend__unify_gen__Var_199;
          MR_Word ll_backend__unify_gen__Var_200;
          MR_Word ll_backend__unify_gen__Var_201;
          MR_Word ll_backend__unify_gen__Var_202;
          MR_Word ll_backend__unify_gen__Var_204;
          MR_Word ll_backend__unify_gen__Var_205;
          MR_Word ll_backend__unify_gen__Var_206;
          MR_Word ll_backend__unify_gen__Var_208;
          MR_Word ll_backend__unify_gen__Var_209;
          MR_Word ll_backend__unify_gen__Var_210;
          MR_Word ll_backend__unify_gen__Var_211;
          MR_Word ll_backend__unify_gen__Var_215;
          MR_Word ll_backend__unify_gen__Var_216;
          MR_Word ll_backend__unify_gen__Var_217;
          MR_Word ll_backend__unify_gen__Var_222;
          MR_Word ll_backend__unify_gen__Var_223;
          MR_Word ll_backend__unify_gen__Var_224;
          MR_Word ll_backend__unify_gen__Var_225;
          MR_Word ll_backend__unify_gen__Var_229;
          MR_Word ll_backend__unify_gen__Var_230;
          MR_Word ll_backend__unify_gen__Var_231;
          MR_Word ll_backend__unify_gen__Var_233;
          MR_Word ll_backend__unify_gen__Var_234;
          MR_Word ll_backend__unify_gen__Var_235;
          MR_Word ll_backend__unify_gen__Var_236;
          MR_Word ll_backend__unify_gen__Var_240;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_243_243;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_244_244;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_245_245;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_246_246;
          MR_Word ll_backend__unify_gen__Var_248;
          MR_Word ll_backend__unify_gen__Var_249;

          {
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__unify_gen__LoopStart_46, ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, &ll_backend__unify_gen__STATE_VARIABLE_CI_107_107);
          }
          {
            ll_backend__code_info__get_next_label_3_p_0(&ll_backend__unify_gen__LoopTest_47, ll_backend__unify_gen__STATE_VARIABLE_CI_107_107, &ll_backend__unify_gen__STATE_VARIABLE_CI_108_108);
          }
          {
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__LoopCounter_48, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101, &ll_backend__unify_gen__STATE_VARIABLE_CLD_110_110);
          }
          {
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__NumOldArgs_49, ll_backend__unify_gen__STATE_VARIABLE_CLD_110_110, &ll_backend__unify_gen__STATE_VARIABLE_CLD_112_112);
          }
          {
            ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &ll_backend__unify_gen__NewClosure_50, ll_backend__unify_gen__STATE_VARIABLE_CLD_112_112, &ll_backend__unify_gen__STATE_VARIABLE_CLD_114_114);
          }
          ll_backend__unify_gen__Zero_51 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
          ll_backend__unify_gen__One_52 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9]);
          ll_backend__unify_gen__Two_53 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[10]);
          ll_backend__unify_gen__Three_54 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[11]);
          {
            mercury__list__length_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__CallArgs_30, &ll_backend__unify_gen__NumNewArgs_55);
          }
          {
            ll_backend__unify_gen__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_123, 0) = ((MR_Box) (ll_backend__unify_gen__NumNewArgs_55));
          }
          {
            ll_backend__unify_gen__NumNewArgs_Rval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgs_Rval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgs_Rval_56, 1) = ((MR_Box) (ll_backend__unify_gen__Var_123));
          }
          ll_backend__unify_gen__NumNewArgsPlusThree_57 = (ll_backend__unify_gen__NumNewArgs_55 + (MR_Integer) 3);
          {
            ll_backend__unify_gen__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_125, 0) = ((MR_Box) (ll_backend__unify_gen__NumNewArgsPlusThree_57));
          }
          {
            ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58, 1) = ((MR_Box) (ll_backend__unify_gen__Var_125));
          }
          {
            ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__CallPred_29, &ll_backend__unify_gen__OldClosureCode_59, &ll_backend__unify_gen__OldClosure_60, ll_backend__unify_gen__STATE_VARIABLE_CI_108_108, ll_backend__unify_gen__STATE_VARIABLE_CLD_114_114, &ll_backend__unify_gen__STATE_VARIABLE_CLD_126_126);
          }
          {
            ll_backend__unify_gen__Context_61 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_17);
          }
          {
            ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_61, (MR_String) "closure", ll_backend__unify_gen__NumNewArgsPlusThree_57, &ll_backend__unify_gen__MaybeAllocId_62, ll_backend__unify_gen__STATE_VARIABLE_CI_108_108, ll_backend__unify_gen__STATE_VARIABLE_CI_100);
          }
          ll_backend__unify_gen__TypeCtorInfo_284_284 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          ll_backend__unify_gen__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0]);
          {
            ll_backend__unify_gen__Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_138, 1) = ((MR_Box) (ll_backend__unify_gen__Var_139));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_138, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_60));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_138, 3) = ((MR_Box) (ll_backend__unify_gen__Two_53));
          }
          {
            ll_backend__unify_gen__Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_137, 0) = ((MR_Box) (ll_backend__unify_gen__Var_138));
          }
          {
            ll_backend__unify_gen__Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_136, 1) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_49));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_136, 2) = ((MR_Box) (ll_backend__unify_gen__Var_137));
          }
          {
            ll_backend__unify_gen__Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_135, 0) = ((MR_Box) (ll_backend__unify_gen__Var_136));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_135, 1) = ((MR_Box) ((MR_String) "get number of arguments"));
          }
          {
            ll_backend__unify_gen__Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_149, 0) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_49));
          }
          {
            ll_backend__unify_gen__Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_147, 2) = ((MR_Box) (ll_backend__unify_gen__Var_149));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_147, 3) = ((MR_Box) (ll_backend__unify_gen__NumNewArgsPlusThree_Rval_58));
          }
          {
            ll_backend__unify_gen__Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 1) = ((MR_Box) (ll_backend__unify_gen__NewClosure_50));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 4) = ((MR_Box) (ll_backend__unify_gen__Var_147));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 5) = ((MR_Box) (ll_backend__unify_gen__MaybeAllocId_62));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 6) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__unify_gen__Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_143, 0) = ((MR_Box) (ll_backend__unify_gen__Var_144));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_143, 1) = ((MR_Box) ((MR_String) "allocate new closure"));
          }
          {
            ll_backend__unify_gen__Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_159, 0) = ((MR_Box) (ll_backend__unify_gen__NewClosure_50));
          }
          {
            ll_backend__unify_gen__Var_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_156, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_156, 1) = ((MR_Box) (ll_backend__unify_gen__Var_139));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_156, 2) = ((MR_Box) (ll_backend__unify_gen__Var_159));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_156, 3) = ((MR_Box) (ll_backend__unify_gen__Zero_51));
          }
          {
            ll_backend__unify_gen__Var_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_161, 1) = ((MR_Box) (ll_backend__unify_gen__Var_139));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_161, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_60));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_161, 3) = ((MR_Box) (ll_backend__unify_gen__Zero_51));
          }
          {
            ll_backend__unify_gen__Var_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_160, 0) = ((MR_Box) (ll_backend__unify_gen__Var_161));
          }
          {
            ll_backend__unify_gen__Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_155, 1) = ((MR_Box) (ll_backend__unify_gen__Var_156));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_155, 2) = ((MR_Box) (ll_backend__unify_gen__Var_160));
          }
          {
            ll_backend__unify_gen__Var_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_154, 0) = ((MR_Box) (ll_backend__unify_gen__Var_155));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_154, 1) = ((MR_Box) ((MR_String) "set closure layout structure"));
          }
          {
            ll_backend__unify_gen__Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_168, 1) = ((MR_Box) (ll_backend__unify_gen__Var_139));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_168, 2) = ((MR_Box) (ll_backend__unify_gen__Var_159));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_168, 3) = ((MR_Box) (ll_backend__unify_gen__One_52));
          }
          {
            ll_backend__unify_gen__Var_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_173, 1) = ((MR_Box) (ll_backend__unify_gen__Var_139));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_173, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_60));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_173, 3) = ((MR_Box) (ll_backend__unify_gen__One_52));
          }
          {
            ll_backend__unify_gen__Var_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_172, 0) = ((MR_Box) (ll_backend__unify_gen__Var_173));
          }
          {
            ll_backend__unify_gen__Var_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_167, 1) = ((MR_Box) (ll_backend__unify_gen__Var_168));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_167, 2) = ((MR_Box) (ll_backend__unify_gen__Var_172));
          }
          {
            ll_backend__unify_gen__Var_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_166, 0) = ((MR_Box) (ll_backend__unify_gen__Var_167));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_166, 1) = ((MR_Box) ((MR_String) "set closure code pointer"));
          }
          {
            ll_backend__unify_gen__Var_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_180, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_180, 1) = ((MR_Box) (ll_backend__unify_gen__Var_139));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_180, 2) = ((MR_Box) (ll_backend__unify_gen__Var_159));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_180, 3) = ((MR_Box) (ll_backend__unify_gen__Two_53));
          }
          {
            ll_backend__unify_gen__Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_184, 2) = ((MR_Box) (ll_backend__unify_gen__Var_149));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_184, 3) = ((MR_Box) (ll_backend__unify_gen__NumNewArgs_Rval_56));
          }
          {
            ll_backend__unify_gen__Var_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_179, 1) = ((MR_Box) (ll_backend__unify_gen__Var_180));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_179, 2) = ((MR_Box) (ll_backend__unify_gen__Var_184));
          }
          {
            ll_backend__unify_gen__Var_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_178, 0) = ((MR_Box) (ll_backend__unify_gen__Var_179));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_178, 1) = ((MR_Box) ((MR_String) "set new number of arguments"));
          }
          {
            ll_backend__unify_gen__Var_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_191, 2) = ((MR_Box) (ll_backend__unify_gen__Var_149));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_191, 3) = ((MR_Box) (ll_backend__unify_gen__Three_54));
          }
          {
            ll_backend__unify_gen__Var_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_190, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_190, 1) = ((MR_Box) (ll_backend__unify_gen__NumOldArgs_49));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_190, 2) = ((MR_Box) (ll_backend__unify_gen__Var_191));
          }
          {
            ll_backend__unify_gen__Var_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_189, 0) = ((MR_Box) (ll_backend__unify_gen__Var_190));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_189, 1) = ((MR_Box) ((MR_String) "set up loop limit"));
          }
          {
            ll_backend__unify_gen__Var_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_197, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_197, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_48));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_197, 2) = ((MR_Box) (ll_backend__unify_gen__Three_54));
          }
          {
            ll_backend__unify_gen__Var_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_196, 0) = ((MR_Box) (ll_backend__unify_gen__Var_197));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_196, 1) = ((MR_Box) ((MR_String) "initialize loop counter"));
          }
          {
            ll_backend__unify_gen__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_202, 0) = ((MR_Box) (ll_backend__unify_gen__LoopTest_47));
          }
          {
            ll_backend__unify_gen__Var_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_201, 1) = ((MR_Box) (ll_backend__unify_gen__Var_202));
          }
          {
            ll_backend__unify_gen__Var_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_200, 0) = ((MR_Box) (ll_backend__unify_gen__Var_201));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_200, 1) = ((MR_Box) ((MR_String) "enter the copy loop at the conceptual top"));
          }
          {
            ll_backend__unify_gen__Var_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_206, 1) = ((MR_Box) (ll_backend__unify_gen__LoopStart_46));
          }
          {
            ll_backend__unify_gen__Var_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_205, 0) = ((MR_Box) (ll_backend__unify_gen__Var_206));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_205, 1) = ((MR_Box) ((MR_String) "start of loop, nofulljump"));
          }
          {
            ll_backend__unify_gen__Var_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_215, 0) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_48));
          }
          {
            ll_backend__unify_gen__Var_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_211, 1) = ((MR_Box) (ll_backend__unify_gen__Var_139));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_211, 2) = ((MR_Box) (ll_backend__unify_gen__Var_159));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_211, 3) = ((MR_Box) (ll_backend__unify_gen__Var_215));
          }
          {
            ll_backend__unify_gen__Var_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_217, 1) = ((MR_Box) (ll_backend__unify_gen__Var_139));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_217, 2) = ((MR_Box) (ll_backend__unify_gen__OldClosure_60));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_217, 3) = ((MR_Box) (ll_backend__unify_gen__Var_215));
          }
          {
            ll_backend__unify_gen__Var_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_216, 0) = ((MR_Box) (ll_backend__unify_gen__Var_217));
          }
          {
            ll_backend__unify_gen__Var_210 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_210, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_210, 1) = ((MR_Box) (ll_backend__unify_gen__Var_211));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_210, 2) = ((MR_Box) (ll_backend__unify_gen__Var_216));
          }
          {
            ll_backend__unify_gen__Var_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_209, 0) = ((MR_Box) (ll_backend__unify_gen__Var_210));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_209, 1) = ((MR_Box) ((MR_String) "copy old hidden argument"));
          }
          {
            ll_backend__unify_gen__Var_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_225, 2) = ((MR_Box) (ll_backend__unify_gen__Var_215));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_225, 3) = ((MR_Box) (ll_backend__unify_gen__One_52));
          }
          {
            ll_backend__unify_gen__Var_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_224, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_224, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_48));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_224, 2) = ((MR_Box) (ll_backend__unify_gen__Var_225));
          }
          {
            ll_backend__unify_gen__Var_223 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_223, 0) = ((MR_Box) (ll_backend__unify_gen__Var_224));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_223, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
          }
          {
            ll_backend__unify_gen__Var_231 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_231, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_231, 1) = ((MR_Box) (ll_backend__unify_gen__LoopTest_47));
          }
          {
            ll_backend__unify_gen__Var_230 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_230, 0) = ((MR_Box) (ll_backend__unify_gen__Var_231));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_230, 1) = ((MR_Box) ((MR_String) "do we have more old arguments to copy\? nofulljump"));
          }
          {
            ll_backend__unify_gen__Var_236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_236, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_236, 2) = ((MR_Box) (ll_backend__unify_gen__Var_215));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_236, 3) = ((MR_Box) (ll_backend__unify_gen__Var_149));
          }
          {
            ll_backend__unify_gen__Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_240, 0) = ((MR_Box) (ll_backend__unify_gen__LoopStart_46));
          }
          {
            ll_backend__unify_gen__Var_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_235, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_235, 1) = ((MR_Box) (ll_backend__unify_gen__Var_236));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_235, 2) = ((MR_Box) (ll_backend__unify_gen__Var_240));
          }
          {
            ll_backend__unify_gen__Var_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_234, 0) = ((MR_Box) (ll_backend__unify_gen__Var_235));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_234, 1) = ((MR_Box) ((MR_String) "repeat the loop\?"));
          }
          {
            ll_backend__unify_gen__Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_233, 0) = ((MR_Box) (ll_backend__unify_gen__Var_234));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__unify_gen__Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_229, 0) = ((MR_Box) (ll_backend__unify_gen__Var_230));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_229, 1) = ((MR_Box) (ll_backend__unify_gen__Var_233));
          }
          {
            ll_backend__unify_gen__Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_222, 0) = ((MR_Box) (ll_backend__unify_gen__Var_223));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_222, 1) = ((MR_Box) (ll_backend__unify_gen__Var_229));
          }
          {
            ll_backend__unify_gen__Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_208, 0) = ((MR_Box) (ll_backend__unify_gen__Var_209));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_208, 1) = ((MR_Box) (ll_backend__unify_gen__Var_222));
          }
          {
            ll_backend__unify_gen__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_204, 0) = ((MR_Box) (ll_backend__unify_gen__Var_205));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_204, 1) = ((MR_Box) (ll_backend__unify_gen__Var_208));
          }
          {
            ll_backend__unify_gen__Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_199, 0) = ((MR_Box) (ll_backend__unify_gen__Var_200));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_199, 1) = ((MR_Box) (ll_backend__unify_gen__Var_204));
          }
          {
            ll_backend__unify_gen__Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_195, 0) = ((MR_Box) (ll_backend__unify_gen__Var_196));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_195, 1) = ((MR_Box) (ll_backend__unify_gen__Var_199));
          }
          {
            ll_backend__unify_gen__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_188, 0) = ((MR_Box) (ll_backend__unify_gen__Var_189));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_188, 1) = ((MR_Box) (ll_backend__unify_gen__Var_195));
          }
          {
            ll_backend__unify_gen__Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_177, 0) = ((MR_Box) (ll_backend__unify_gen__Var_178));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_177, 1) = ((MR_Box) (ll_backend__unify_gen__Var_188));
          }
          {
            ll_backend__unify_gen__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_165, 0) = ((MR_Box) (ll_backend__unify_gen__Var_166));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_165, 1) = ((MR_Box) (ll_backend__unify_gen__Var_177));
          }
          {
            ll_backend__unify_gen__Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_153, 0) = ((MR_Box) (ll_backend__unify_gen__Var_154));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_153, 1) = ((MR_Box) (ll_backend__unify_gen__Var_165));
          }
          {
            ll_backend__unify_gen__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_142, 0) = ((MR_Box) (ll_backend__unify_gen__Var_143));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_142, 1) = ((MR_Box) (ll_backend__unify_gen__Var_153));
          }
          {
            ll_backend__unify_gen__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_134, 0) = ((MR_Box) (ll_backend__unify_gen__Var_135));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_134, 1) = ((MR_Box) (ll_backend__unify_gen__Var_142));
          }
          {
            ll_backend__unify_gen__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_129, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_1[12]));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_129, 1) = ((MR_Box) (ll_backend__unify_gen__Var_134));
          }
          {
            ll_backend__unify_gen__NewClosureCode_64 = mercury__cord__from_list_1_f_0(ll_backend__unify_gen__TypeCtorInfo_284_284, ll_backend__unify_gen__Var_129);
          }
          {
            ll_backend__unify_gen__generate_extra_closure_args_7_p_0(ll_backend__unify_gen__CallArgs_30, ll_backend__unify_gen__LoopCounter_48, ll_backend__unify_gen__NewClosure_50, &ll_backend__unify_gen__ExtraArgsCode_65, *ll_backend__unify_gen__STATE_VARIABLE_CI_100, ll_backend__unify_gen__STATE_VARIABLE_CLD_126_126, &ll_backend__unify_gen__STATE_VARIABLE_CLD_243_243);
          }
          {
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__unify_gen__LoopCounter_48, ll_backend__unify_gen__STATE_VARIABLE_CLD_243_243, &ll_backend__unify_gen__STATE_VARIABLE_CLD_244_244);
          }
          {
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__unify_gen__NumOldArgs_49, ll_backend__unify_gen__STATE_VARIABLE_CLD_244_244, &ll_backend__unify_gen__STATE_VARIABLE_CLD_245_245);
          }
          {
            ll_backend__code_loc_dep__release_reg_3_p_0(ll_backend__unify_gen__NewClosure_50, ll_backend__unify_gen__STATE_VARIABLE_CLD_245_245, &ll_backend__unify_gen__STATE_VARIABLE_CLD_246_246);
          }
          {
            ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(ll_backend__unify_gen__Var_15, ll_backend__unify_gen__NewClosure_50, &ll_backend__unify_gen__AssignCode_66, *ll_backend__unify_gen__STATE_VARIABLE_CI_100, ll_backend__unify_gen__STATE_VARIABLE_CLD_246_246, ll_backend__unify_gen__STATE_VARIABLE_CLD_102);
          }
          {
            ll_backend__unify_gen__Var_249 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_284_284, ll_backend__unify_gen__ExtraArgsCode_65, ll_backend__unify_gen__AssignCode_66);
          }
          {
            ll_backend__unify_gen__Var_248 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_284_284, ll_backend__unify_gen__NewClosureCode_64, ll_backend__unify_gen__Var_249);
          }
          {
            *ll_backend__unify_gen__Code_18 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_284_284, ll_backend__unify_gen__OldClosureCode_59, ll_backend__unify_gen__Var_248);
          }
        }
    else
      {
        MR_Word ll_backend__unify_gen__TypeCtorInfo_285_285;
        MR_Word ll_backend__unify_gen__CodeAddr_67;
        MR_Word ll_backend__unify_gen__ProcLabel_68;
        MR_Word ll_backend__unify_gen__CodeAddrRval_69;
        MR_Word ll_backend__unify_gen__ClosureInfo_70;
        MR_Word ll_backend__unify_gen__ModuleName_71;
        MR_String ll_backend__unify_gen__FileName_72;
        MR_Integer ll_backend__unify_gen__LineNumber_73;
        MR_Word ll_backend__unify_gen__GoalId_74;
        MR_Integer ll_backend__unify_gen__GoalIdNum_75;
        MR_String ll_backend__unify_gen__GoalIdStr_76;
        MR_Word ll_backend__unify_gen__CallerProcLabel_77;
        MR_Integer ll_backend__unify_gen__SeqNo_78;
        MR_Word ll_backend__unify_gen__StaticCellInfo0_79;
        MR_Word ll_backend__unify_gen__PredOrigin_80;
        MR_Word ll_backend__unify_gen__StaticCellInfo_81;
        MR_Word ll_backend__unify_gen__ClosureLayoutTypedRvals_82;
        MR_Word ll_backend__unify_gen__Data_83;
        MR_Word ll_backend__unify_gen__ClosureDataAddr_84;
        MR_Word ll_backend__unify_gen__ClosureLayoutRval_85;
        MR_Word ll_backend__unify_gen__ArgInfo_86;
        MR_Word ll_backend__unify_gen__VarTypes_87;
        MR_Word ll_backend__unify_gen__MayUseAtomic0_88;
        MR_Word ll_backend__unify_gen__ArgsR_89;
        MR_Word ll_backend__unify_gen__ArgsF_90;
        MR_Word ll_backend__unify_gen__MayUseAtomic_91;
        MR_Integer ll_backend__unify_gen__NumArgsR_92;
        MR_Integer ll_backend__unify_gen__NumArgsF_93;
        MR_Integer ll_backend__unify_gen__NumArgsRF_94;
        MR_Word ll_backend__unify_gen__ArgsRF_95;
        MR_Word ll_backend__unify_gen__Vector_96;
        MR_Word ll_backend__unify_gen__Var_252;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_253_253;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_254_254;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_255_255;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_256_256;
        MR_Word ll_backend__unify_gen__Var_257;
        MR_Word ll_backend__unify_gen__Var_259;
        MR_Word ll_backend__unify_gen__Var_261;
        MR_Word ll_backend__unify_gen__Var_262;
        MR_Word ll_backend__unify_gen__Var_264;
        MR_Word ll_backend__unify_gen__Var_265;
        MR_Word ll_backend__unify_gen__Var_266;
        MR_Word ll_backend__unify_gen__Var_267;
        MR_Integer ll_backend__unify_gen__Var_270;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_271_271;
        MR_Word ll_backend__unify_gen__Context_276;
        MR_Word ll_backend__unify_gen__MaybeAllocId_277;

        {
          ll_backend__unify_gen__CodeAddr_67 = ll_backend__code_info__make_proc_entry_label_5_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, ll_backend__unify_gen__ModuleInfo_21, ll_backend__unify_gen__PredId_12, ll_backend__unify_gen__ProcId_13, (MR_Integer) 0);
        }
        {
          ll_backend__unify_gen__ProcLabel_68 = ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(ll_backend__unify_gen__CodeAddr_67);
        }
        {
          ll_backend__unify_gen__Var_252 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_252, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_252, 1) = ((MR_Box) (ll_backend__unify_gen__CodeAddr_67));
        }
        {
          ll_backend__unify_gen__CodeAddrRval_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CodeAddrRval_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CodeAddrRval_69, 1) = ((MR_Box) (ll_backend__unify_gen__Var_252));
        }
        {
          ll_backend__continuation_info__generate_closure_layout_4_p_0(ll_backend__unify_gen__ModuleInfo_21, ll_backend__unify_gen__PredId_12, ll_backend__unify_gen__ProcId_13, &ll_backend__unify_gen__ClosureInfo_70);
        }
        {
          hlds__hlds_module__module_info_get_name_2_p_0(ll_backend__unify_gen__ModuleInfo_21, &ll_backend__unify_gen__ModuleName_71);
        }
        {
          ll_backend__unify_gen__Context_276 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_17);
        }
        {
          mercury__term__context_file_2_p_0(ll_backend__unify_gen__Context_276, &ll_backend__unify_gen__FileName_72);
        }
        {
          mercury__term__context_line_2_p_0(ll_backend__unify_gen__Context_276, &ll_backend__unify_gen__LineNumber_73);
        }
        {
          ll_backend__unify_gen__GoalId_74 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ll_backend__unify_gen__GoalInfo_17);
        }
        ll_backend__unify_gen__GoalIdNum_75 = (MR_Integer) ll_backend__unify_gen__GoalId_74;
        {
          ll_backend__unify_gen__GoalIdStr_76 = mercury__string__int_to_string_1_f_0(ll_backend__unify_gen__GoalIdNum_75);
        }
        {
          ll_backend__code_info__get_proc_label_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, &ll_backend__unify_gen__CallerProcLabel_77);
        }
        {
          ll_backend__code_info__get_next_closure_seq_no_3_p_0(&ll_backend__unify_gen__SeqNo_78, ll_backend__unify_gen__STATE_VARIABLE_CI_0_99, &ll_backend__unify_gen__STATE_VARIABLE_CI_253_253);
        }
        {
          ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_253_253, &ll_backend__unify_gen__StaticCellInfo0_79);
        }
        {
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ll_backend__unify_gen__PredInfo_23, &ll_backend__unify_gen__PredOrigin_80);
        }
        {
          ll_backend__stack_layout__construct_closure_layout_13_p_0(ll_backend__unify_gen__CallerProcLabel_77, ll_backend__unify_gen__SeqNo_78, ll_backend__unify_gen__ClosureInfo_70, ll_backend__unify_gen__ProcLabel_68, ll_backend__unify_gen__ModuleName_71, ll_backend__unify_gen__FileName_72, ll_backend__unify_gen__LineNumber_73, ll_backend__unify_gen__PredOrigin_80, ll_backend__unify_gen__GoalIdStr_76, ll_backend__unify_gen__StaticCellInfo0_79, &ll_backend__unify_gen__StaticCellInfo_81, &ll_backend__unify_gen__ClosureLayoutTypedRvals_82, &ll_backend__unify_gen__Data_83);
        }
        {
          ll_backend__code_info__set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_81, ll_backend__unify_gen__STATE_VARIABLE_CI_253_253, &ll_backend__unify_gen__STATE_VARIABLE_CI_254_254);
        }
        {
          ll_backend__code_info__add_closure_layout_3_p_0(ll_backend__unify_gen__Data_83, ll_backend__unify_gen__STATE_VARIABLE_CI_254_254, &ll_backend__unify_gen__STATE_VARIABLE_CI_255_255);
        }
        {
          ll_backend__code_info__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__ClosureLayoutTypedRvals_82, &ll_backend__unify_gen__ClosureDataAddr_84, ll_backend__unify_gen__STATE_VARIABLE_CI_255_255, &ll_backend__unify_gen__STATE_VARIABLE_CI_256_256);
        }
        {
          ll_backend__unify_gen__Var_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_257, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_257, 1) = ((MR_Box) (ll_backend__unify_gen__ClosureDataAddr_84));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_257, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ll_backend__unify_gen__ClosureLayoutRval_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ClosureLayoutRval_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ClosureLayoutRval_85, 1) = ((MR_Box) (ll_backend__unify_gen__Var_257));
        }
        {
          hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__unify_gen__ProcInfo_25, &ll_backend__unify_gen__ArgInfo_86);
        }
        {
          ll_backend__code_info__get_vartypes_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_256_256, &ll_backend__unify_gen__VarTypes_87);
        }
        {
          ll_backend__unify_gen__MayUseAtomic0_88 = ll_backend__unify_gen__initial_may_use_atomic_1_f_0(ll_backend__unify_gen__ModuleInfo_21);
        }
        {
          ll_backend__unify_gen__generate_pred_args_8_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_256_256, ll_backend__unify_gen__VarTypes_87, ll_backend__unify_gen__Args_16, ll_backend__unify_gen__ArgInfo_86, &ll_backend__unify_gen__ArgsR_89, &ll_backend__unify_gen__ArgsF_90, ll_backend__unify_gen__MayUseAtomic0_88, &ll_backend__unify_gen__MayUseAtomic_91);
        }
        ll_backend__unify_gen__TypeCtorInfo_285_285 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0;
        {
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_285_285, ll_backend__unify_gen__ArgsR_89, &ll_backend__unify_gen__NumArgsR_92);
        }
        {
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_285_285, ll_backend__unify_gen__ArgsF_90, &ll_backend__unify_gen__NumArgsF_93);
        }
        {
          ll_backend__unify_gen__NumArgsRF_94 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(ll_backend__unify_gen__NumArgsR_92, ll_backend__unify_gen__NumArgsF_93);
        }
        {
          mercury__list__append_3_p_1(ll_backend__unify_gen__TypeCtorInfo_285_285, ll_backend__unify_gen__ArgsR_89, ll_backend__unify_gen__ArgsF_90, &ll_backend__unify_gen__ArgsRF_95);
        }
        {
          ll_backend__unify_gen__Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_259, 0) = ((MR_Box) (ll_backend__unify_gen__ClosureLayoutRval_85));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_259, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ll_backend__unify_gen__Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_262, 0) = ((MR_Box) (ll_backend__unify_gen__CodeAddrRval_69));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_262, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ll_backend__unify_gen__Var_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_267, 0) = ((MR_Box) (ll_backend__unify_gen__NumArgsRF_94));
        }
        {
          ll_backend__unify_gen__Var_266 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_266, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_266, 1) = ((MR_Box) (ll_backend__unify_gen__Var_267));
        }
        {
          ll_backend__unify_gen__Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_265, 0) = ((MR_Box) (ll_backend__unify_gen__Var_266));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_265, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ll_backend__unify_gen__Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_264, 0) = ((MR_Box) (ll_backend__unify_gen__Var_265));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_264, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsRF_95));
        }
        {
          ll_backend__unify_gen__Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_261, 0) = ((MR_Box) (ll_backend__unify_gen__Var_262));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_261, 1) = ((MR_Box) (ll_backend__unify_gen__Var_264));
        }
        {
          ll_backend__unify_gen__Vector_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Vector_96, 0) = ((MR_Box) (ll_backend__unify_gen__Var_259));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Vector_96, 1) = ((MR_Box) (ll_backend__unify_gen__Var_261));
        }
        {
          ll_backend__unify_gen__Var_270 = mercury__list__length_1_f_0(ll_backend__unify_gen__TypeCtorInfo_285_285, ll_backend__unify_gen__Vector_96);
        }
        {
          ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_276, (MR_String) "closure", ll_backend__unify_gen__Var_270, &ll_backend__unify_gen__MaybeAllocId_277, ll_backend__unify_gen__STATE_VARIABLE_CI_256_256, &ll_backend__unify_gen__STATE_VARIABLE_CI_271_271);
        }
        {
          ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(ll_backend__unify_gen__Var_15, (MR_Integer) 0, (MR_Integer) 0, ll_backend__unify_gen__Vector_96, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__unify_gen__MaybeAllocId_277, ll_backend__unify_gen__MayUseAtomic_91, ll_backend__unify_gen__Code_18, ll_backend__unify_gen__STATE_VARIABLE_CI_271_271, ll_backend__unify_gen__STATE_VARIABLE_CI_100, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_101, ll_backend__unify_gen__STATE_VARIABLE_CLD_102);
        }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(
  MR_Word ll_backend__unify_gen__VarRval_12,
  MR_String ll_backend__unify_gen__VarName_14,
  MR_Word ll_backend__unify_gen__ConsId_15,
  MR_Word ll_backend__unify_gen__MaybeConsTag_16,
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
  MR_Word ll_backend__unify_gen__Sense_18,
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
  MR_Word * ll_backend__unify_gen__Code_20,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_33,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_34)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_String ll_backend__unify_gen__ConsIdName_22;
    MR_String ll_backend__unify_gen__Comment_27;
    MR_Word ll_backend__unify_gen__TestRval_29;
    MR_Word ll_backend__unify_gen__TheRval_32;
    MR_Word ll_backend__unify_gen__Var_46;
    MR_Word ll_backend__unify_gen__Var_47;
    MR_Word ll_backend__unify_gen__Var_48;
    MR_Word ll_backend__unify_gen__CheapConsTag_26;
    MR_Word ll_backend__unify_gen__ExpensiveConsId_23;
    MR_Word ll_backend__unify_gen___ExpensiveConsTag_24;
    MR_Word ll_backend__unify_gen___CheapConsId_25;

    {
      ll_backend__unify_gen__ConsIdName_22 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__unify_gen__ConsId_15);
    }
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__CheaperTagTest_17)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__unify_gen__succeeded)
      {
        ll_backend__unify_gen__ExpensiveConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 0)));
        ll_backend__unify_gen___ExpensiveConsTag_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 1)));
        ll_backend__unify_gen___CheapConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 2)));
        ll_backend__unify_gen__CheapConsTag_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_17, (MR_Integer) 3)));
        {
          ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__unify_gen__ConsId_15, ll_backend__unify_gen__ExpensiveConsId_23);
        }
      }
    if (ll_backend__unify_gen__succeeded)
      {
        MR_Word ll_backend__unify_gen__NegTestRval_28;
        MR_String ll_backend__unify_gen__Var_35;
        MR_String ll_backend__unify_gen__Var_36;
        MR_String ll_backend__unify_gen__Var_37;
        MR_String ll_backend__unify_gen__Var_39;

        switch (ll_backend__unify_gen__Sense_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ll_backend__unify_gen__Var_35 = (MR_String) "branch away unless ";
            break;
          case (MR_Integer) 0:
            ll_backend__unify_gen__Var_35 = (MR_String) "branch away if ";
            break;
        }
        {
          ll_backend__unify_gen__Var_39 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__ConsIdName_22, (MR_String) " (inverted test)");
        }
        {
          ll_backend__unify_gen__Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__Var_39);
        }
        {
          ll_backend__unify_gen__Var_36 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__Var_37);
        }
        {
          ll_backend__unify_gen__Comment_27 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__Var_35, ll_backend__unify_gen__Var_36);
        }
        {
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__CheapConsTag_26, &ll_backend__unify_gen__NegTestRval_28);
        }
        {
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__NegTestRval_28, &ll_backend__unify_gen__TestRval_29);
        }
      }
    else
      {
        MR_Word ll_backend__unify_gen__ConsTag_30;
        MR_String ll_backend__unify_gen__Var_41;
        MR_String ll_backend__unify_gen__Var_42;
        MR_String ll_backend__unify_gen__Var_43;

        switch (ll_backend__unify_gen__Sense_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ll_backend__unify_gen__Var_41 = (MR_String) "branch away unless ";
            break;
          case (MR_Integer) 0:
            ll_backend__unify_gen__Var_41 = (MR_String) "branch away if ";
            break;
        }
        {
          ll_backend__unify_gen__Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__ConsIdName_22);
        }
        {
          ll_backend__unify_gen__Var_42 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__Var_43);
        }
        {
          ll_backend__unify_gen__Comment_27 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__Var_41, ll_backend__unify_gen__Var_42);
        }
        if ((ll_backend__unify_gen__MaybeConsTag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word ll_backend__unify_gen__ModuleInfo_31;

            {
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_33, &ll_backend__unify_gen__ModuleInfo_31);
            }
            {
              ll_backend__unify_gen__ConsTag_30 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__ConsId_15);
            }
          }
        else
          ll_backend__unify_gen__ConsTag_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeConsTag_16, (MR_Integer) 0)));
        {
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__ConsTag_30, &ll_backend__unify_gen__TestRval_29);
        }
      }
    {
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_33, ll_backend__unify_gen__STATE_VARIABLE_CI_34);
    }
    switch (ll_backend__unify_gen__Sense_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_29, &ll_backend__unify_gen__TheRval_32);
        }
        break;
      case (MR_Integer) 0:
        ll_backend__unify_gen__TheRval_32 = ll_backend__unify_gen__TestRval_29;
        break;
    }
    {
      ll_backend__unify_gen__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_48, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_19));
    }
    {
      ll_backend__unify_gen__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_47, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_32));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_47, 2) = ((MR_Box) (ll_backend__unify_gen__Var_48));
    }
    {
      ll_backend__unify_gen__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_46, 0) = ((MR_Box) (ll_backend__unify_gen__Var_47));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_46, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_27));
    }
    {
      *ll_backend__unify_gen__Code_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__Var_46)));
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box * ll_backend__unify_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv2_TestRval_6;

    {
      ll_backend__unify_gen__raw_tag_test_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), &ll_backend__unify_gen__conv2_TestRval_6);
    }
    *ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv2_TestRval_6));
  }
}

static void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box * ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_String ll_backend__unify_gen__conv1_HeadVar__2_2;
    MR_Word ll_backend__unify_gen__conv0_HeadVar__3_3;

    {
      hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), &ll_backend__unify_gen__conv1_HeadVar__2_2, &ll_backend__unify_gen__conv0_HeadVar__3_3);
    }
    *ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv1_HeadVar__2_2));
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(
  MR_Word ll_backend__unify_gen__VarRval_12,
  MR_String ll_backend__unify_gen__VarName_14,
  MR_Word ll_backend__unify_gen__MainTaggedConsId_15,
  MR_Word ll_backend__unify_gen__OtherTaggedConsIds_16,
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
  MR_Word ll_backend__unify_gen__Sense_18,
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
  MR_Word * ll_backend__unify_gen__Code_20,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_34,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_35)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if ((ll_backend__unify_gen__OtherTaggedConsIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__unify_gen__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__MainTaggedConsId_15, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__MainConsTag_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__MainTaggedConsId_15, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_44;

        {
          ll_backend__unify_gen__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_44, 0) = ((MR_Box) (ll_backend__unify_gen__MainConsTag_23));
        }
        {
          ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_95_91_50_93_95_48_11_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainConsId_22, ll_backend__unify_gen__Var_44, ll_backend__unify_gen__CheaperTagTest_17, ll_backend__unify_gen__Sense_18, ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__Code_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
        }
      }
    else
      {
        MR_Word ll_backend__unify_gen__TypeCtorInfo_52_52;
        MR_String ll_backend__unify_gen__MainConsName_26;
        MR_Word ll_backend__unify_gen__OtherConsNames_27;
        MR_Word ll_backend__unify_gen__OtherConsTags_28;
        MR_String ll_backend__unify_gen__Comment_29;
        MR_Word ll_backend__unify_gen__MainTagTestRval_30;
        MR_Word ll_backend__unify_gen__OtherTagTestRvals_31;
        MR_Word ll_backend__unify_gen__TestRval_32;
        MR_Word ll_backend__unify_gen__TheRval_33;
        MR_String ll_backend__unify_gen__Var_37;
        MR_String ll_backend__unify_gen__Var_38;
        MR_Word ll_backend__unify_gen__Var_39;
        MR_Word ll_backend__unify_gen__Var_41;
        MR_Word ll_backend__unify_gen__Var_42;
        MR_Word ll_backend__unify_gen__Var_43;
        MR_Word ll_backend__unify_gen__MainConsTag_46;

        {
          hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(ll_backend__unify_gen__MainTaggedConsId_15, &ll_backend__unify_gen__MainConsName_26, &ll_backend__unify_gen__MainConsTag_46);
        }
        ll_backend__unify_gen__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
        {
          mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__unify_gen__TypeCtorInfo_52_52, (MR_Word) &ll_backend__unify_gen_scalar_common_2[9], ll_backend__unify_gen__OtherTaggedConsIds_16, &ll_backend__unify_gen__OtherConsNames_27, &ll_backend__unify_gen__OtherConsTags_28);
        }
        {
          ll_backend__unify_gen__Var_38 = hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainConsName_26, ll_backend__unify_gen__OtherConsNames_27);
        }
        {
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__MainConsTag_46, &ll_backend__unify_gen__MainTagTestRval_30);
        }
        {
          ll_backend__unify_gen__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_39, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_39, 1) = ((MR_Box) (ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0_2));
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_39, 3) = ((MR_Box) (ll_backend__unify_gen__VarRval_12));
        }
        {
          mercury__list__map_3_p_0(ll_backend__unify_gen__TypeCtorInfo_52_52, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__unify_gen__Var_39, ll_backend__unify_gen__OtherConsTags_28, &ll_backend__unify_gen__OtherTagTestRvals_31);
        }
        {
          ll_backend__unify_gen__disjoin_tag_tests_3_p_0(ll_backend__unify_gen__MainTagTestRval_30, ll_backend__unify_gen__OtherTagTestRvals_31, &ll_backend__unify_gen__TestRval_32);
        }
        {
          ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
        }
        switch (ll_backend__unify_gen__Sense_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              ll_backend__unify_gen__Var_37 = (MR_String) "branch away unless ";
              {
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_32, &ll_backend__unify_gen__TheRval_33);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              ll_backend__unify_gen__Var_37 = (MR_String) "branch away if ";
              ll_backend__unify_gen__TheRval_33 = ll_backend__unify_gen__TestRval_32;
            }
            break;
        }
        {
          ll_backend__unify_gen__Comment_29 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__Var_37, ll_backend__unify_gen__Var_38);
        }
        {
          ll_backend__unify_gen__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_43, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_19));
        }
        {
          ll_backend__unify_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_42, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_33));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_42, 2) = ((MR_Box) (ll_backend__unify_gen__Var_43));
        }
        {
          ll_backend__unify_gen__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_41, 0) = ((MR_Box) (ll_backend__unify_gen__Var_42));
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_41, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_29));
        }
        {
          *ll_backend__unify_gen__Code_20 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__Var_41)));
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2225__1_2_p_0(
  MR_Integer ll_backend__unify_gen__Shift_12,
  MR_Integer ll_backend__unify_gen__HeadVar__2_41)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_12 == ll_backend__unify_gen__HeadVar__2_41);

    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2054__1_2_p_0(
  MR_Word ll_backend__unify_gen__Lang_22,
  MR_Word ll_backend__unify_gen__HeadVar__2_120)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_22 == ll_backend__unify_gen__HeadVar__2_120);

    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_const_struct_arg_tag__1873__1_2_p_0(
  MR_Word ll_backend__unify_gen__Lang_18,
  MR_Word ll_backend__unify_gen__HeadVar__2_72)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_18 == ll_backend__unify_gen__HeadVar__2_72);

    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__645__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_152)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__RHSVars_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_152)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__673__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_129)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__RHSVars_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_129)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__700__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_109)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__RHSVars_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_109)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__708__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_102)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__RHSVars_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_102)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__562__1_2_p_0(
  MR_Word ll_backend__unify_gen__Lang_30,
  MR_Word ll_backend__unify_gen__HeadVar__2_202)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Lang_30 == ll_backend__unify_gen__HeadVar__2_202);

    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__683__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_119)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__RHSVars_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_119)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__723__1_2_p_0(
  MR_Word ll_backend__unify_gen__MaybeSize_22,
  MR_Word ll_backend__unify_gen__HeadVar__2_93)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[3], ((MR_Box) (ll_backend__unify_gen__MaybeSize_22)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_93)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__721__1_2_p_0(
  MR_Word ll_backend__unify_gen__TakeAddr_21,
  MR_Word ll_backend__unify_gen__HeadVar__2_88)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[2], ((MR_Box) (ll_backend__unify_gen__TakeAddr_21)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_88)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__655__1_2_p_0(
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__HeadVar__2_141)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[1], ((MR_Box) (ll_backend__unify_gen__RHSVars_17)), ((MR_Box) (ll_backend__unify_gen__HeadVar__2_141)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__496__1_3_f_0(
  MR_Word ll_backend__unify_gen__Rval_4,
  MR_Word ll_backend__unify_gen__LambdaHeadVar__1_49,
  MR_Word ll_backend__unify_gen__LambdaHeadVar__2_50)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__LambdaHeadVar__3_51;
    MR_Word ll_backend__unify_gen__EqualRA_47;
    MR_Word ll_backend__unify_gen__Var_52;
    MR_Word ll_backend__unify_gen__Var_54;

    {
      ll_backend__unify_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_52, 1) = ((MR_Box) (ll_backend__unify_gen__LambdaHeadVar__1_49));
    }
    {
      ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__Rval_4, ll_backend__unify_gen__Var_52, &ll_backend__unify_gen__EqualRA_47);
    }
    {
      ll_backend__unify_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_54, 1) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_54, 2) = ((MR_Box) (ll_backend__unify_gen__EqualRA_47));
    }
    {
      ll_backend__unify_gen__LambdaHeadVar__3_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LambdaHeadVar__3_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LambdaHeadVar__3_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LambdaHeadVar__3_51, 2) = ((MR_Box) (ll_backend__unify_gen__Var_54));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LambdaHeadVar__3_51, 3) = ((MR_Box) (ll_backend__unify_gen__LambdaHeadVar__2_50));
    }
    return ll_backend__unify_gen__LambdaHeadVar__3_51;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__427__1_2_p_0(
  MR_Word ll_backend__unify_gen__ForeignLang_11,
  MR_Word ll_backend__unify_gen__HeadVar__2_114)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ForeignLang_11 == ll_backend__unify_gen__HeadVar__2_114);

    return ll_backend__unify_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__231__1_1_f_0(
  MR_Word ll_backend__unify_gen__LambdaHeadVar__1_21)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__LambdaHeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__LambdaHeadVar__1_21, (MR_Integer) 2)));
    MR_Word ll_backend__unify_gen__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__LambdaHeadVar__1_21, (MR_Integer) 0)));
    MR_Word ll_backend__unify_gen__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__LambdaHeadVar__1_21, (MR_Integer) 1)));
    MR_Word ll_backend__unify_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__LambdaHeadVar__1_21, (MR_Integer) 3)));

    return ll_backend__unify_gen__LambdaHeadVar__2_22;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____uni_val_0_0(
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Integer ll_backend__unify_gen__CastX_17 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
    MR_Integer ll_backend__unify_gen__CastY_18 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_17 == ll_backend__unify_gen__CastY_18);
    if (ll_backend__unify_gen__succeeded)
      *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__unify_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__unify_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word ll_backend__unify_gen__Var_16;

            {
              ll_backend__llds____Compare____lval_0_0(&ll_backend__unify_gen__Var_16, ll_backend__unify_gen__Var_23, ll_backend__unify_gen__Var_14);
            }
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_16 == (MR_Integer) 0);
            ll_backend__unify_gen__succeeded = !(ll_backend__unify_gen__succeeded);
            if (ll_backend__unify_gen__succeeded)
              *ll_backend__unify_gen__HeadVar__1_1 = ll_backend__unify_gen__Var_16;
            else
              {
                parse_tree__prog_data____Compare____arg_width_0_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__Var_22, ll_backend__unify_gen__Var_15);
              }
          }
        else
          *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word ll_backend__unify_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word ll_backend__unify_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__Var_24)), ((MR_Box) (ll_backend__unify_gen__Var_5)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____uni_val_0_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Integer ll_backend__unify_gen__CastX_9 = (MR_Integer) ll_backend__unify_gen__HeadVar__1_1;
    MR_Integer ll_backend__unify_gen__CastY_10 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;

    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_9 == ll_backend__unify_gen__CastY_10);
    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__unify_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_7;
        MR_Word ll_backend__unify_gen__Var_8;

        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__unify_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
            {
              ll_backend__unify_gen__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__unify_gen__Var_5, ll_backend__unify_gen__Var_7);
            }
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____arg_width_0_0(ll_backend__unify_gen__Var_6, ll_backend__unify_gen__Var_8);
              }
          }
      }
    else
      {
        MR_Word ll_backend__unify_gen__TypeInfo_13_13;
        MR_Word ll_backend__unify_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Var_4;

        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__unify_gen__TypeInfo_13_13 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
            {
              ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_13_13, ((MR_Box) (ll_backend__unify_gen__Var_3)), ((MR_Box) (ll_backend__unify_gen__Var_4)));
            }
          }
      }
    return ll_backend__unify_gen__succeeded;
  }
}

void MR_CALL 
ll_backend__unify_gen____Compare____test_sense_0_0(
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Integer ll_backend__unify_gen__Cast_HeadVar1_4 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
    MR_Integer ll_backend__unify_gen__Cast_HeadVar2_5 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__Cast_HeadVar1_4, ll_backend__unify_gen__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__unify_gen____Unify____test_sense_0_0(
  MR_Word ll_backend__unify_gen__HeadVar__2_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_1 == ll_backend__unify_gen__HeadVar__2_2);

    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____field_addr_0_0(
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Integer ll_backend__unify_gen__CastX_9 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;
    MR_Integer ll_backend__unify_gen__CastY_10 = (MR_Integer) ll_backend__unify_gen__HeadVar__3_3;

    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_9 == ll_backend__unify_gen__CastY_10);
    if (ll_backend__unify_gen__succeeded)
      *ll_backend__unify_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer ll_backend__unify_gen__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ll_backend__unify_gen__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__unify_gen__Var_8, ll_backend__unify_gen__Var_4, ll_backend__unify_gen__Var_6);
        }
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_8 == (MR_Integer) 0);
        ll_backend__unify_gen__succeeded = !(ll_backend__unify_gen__succeeded);
        if (ll_backend__unify_gen__succeeded)
          *ll_backend__unify_gen__HeadVar__1_1 = ll_backend__unify_gen__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__Var_5)), ((MR_Box) (ll_backend__unify_gen__Var_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____field_addr_0_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Integer ll_backend__unify_gen__CastX_7 = (MR_Integer) ll_backend__unify_gen__HeadVar__1_1;
    MR_Integer ll_backend__unify_gen__CastY_8 = (MR_Integer) ll_backend__unify_gen__HeadVar__2_2;

    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__CastX_7 == ll_backend__unify_gen__CastY_8);
    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__unify_gen__TypeInfo_9_9;
        MR_Integer ll_backend__unify_gen__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ll_backend__unify_gen__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));

        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_3 == ll_backend__unify_gen__Var_5);
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__TypeInfo_9_9 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
            {
              ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_9_9, ((MR_Box) (ll_backend__unify_gen__Var_4)), ((MR_Box) (ll_backend__unify_gen__Var_6)));
            }
          }
      }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen____Compare____active_ground_term_map_0_0(
  MR_Word * ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__Cast_HeadVar1_4 = ll_backend__unify_gen__HeadVar__2_2;
    MR_Word ll_backend__unify_gen__Cast_HeadVar2_5 = ll_backend__unify_gen__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[2], ll_backend__unify_gen__HeadVar__1_1, ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen____Unify____active_ground_term_map_0_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__Cast_HeadVar1_3 = ll_backend__unify_gen__HeadVar__1_1;
    MR_Word ll_backend__unify_gen__Cast_HeadVar2_4 = ll_backend__unify_gen__HeadVar__2_2;

    {
      ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[2], ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__unify_gen__Cast_HeadVar2_4)));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(
  MR_Word ll_backend__unify_gen__CellArgA_4,
  MR_Word ll_backend__unify_gen__CellArgB_5)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__CellArg_6;
    MR_Word ll_backend__unify_gen__CellArgPrime_7;

    if ((ll_backend__unify_gen__CellArgA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__unify_gen__CellArgB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__unify_gen__succeeded = MR_TRUE;
        }
      else
      if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgB_5)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word ll_backend__unify_gen__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 1)));

          {
            ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_26));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) ((MR_Integer) 1));
          }
          ll_backend__unify_gen__succeeded = MR_TRUE;
        }
      else
        ll_backend__unify_gen__succeeded = MR_FALSE;
    else
    if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgA_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__unify_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_4, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_4, (MR_Integer) 0)));

        if ((ll_backend__unify_gen__CellArgB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__Var_28));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            ll_backend__unify_gen__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) ll_backend__unify_gen__CellArgB_5)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__unify_gen__RvalB_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen__CompletenessB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgB_5, (MR_Integer) 1)));
            MR_Word ll_backend__unify_gen__Expr_18;
            MR_Word ll_backend__unify_gen__Completeness_19;

            {
              ll_backend__unify_gen__Expr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 2) = ((MR_Box) (ll_backend__unify_gen__Var_28));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Expr_18, 3) = ((MR_Box) (ll_backend__unify_gen__RvalB_16));
            }
            switch (ll_backend__unify_gen__Var_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (ll_backend__unify_gen__CompletenessB_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (ll_backend__unify_gen__CompletenessB_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    ll_backend__unify_gen__Completeness_19 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            {
              ll_backend__unify_gen__CellArgPrime_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 0) = ((MR_Box) (ll_backend__unify_gen__Expr_18));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgPrime_7, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_19));
            }
            ll_backend__unify_gen__succeeded = MR_TRUE;
          }
        else
          ll_backend__unify_gen__succeeded = MR_FALSE;
      }
    else
      ll_backend__unify_gen__succeeded = MR_FALSE;
    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__CellArg_6 = ll_backend__unify_gen__CellArgPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "function \140ll_backend.unify_gen.bitwise_or_cell_arg\'/2", (MR_String) "invalid combination");
        }
      }
    return ll_backend__unify_gen__CellArg_6;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__right_shift_rval_2_f_0(
  MR_Word ll_backend__unify_gen__Rval_4,
  MR_Integer ll_backend__unify_gen__Shift_5)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__HeadVar__3_3;
    MR_Word ll_backend__unify_gen__Var_7;
    MR_Word ll_backend__unify_gen__Var_8;

    {
      ll_backend__unify_gen__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_8, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_5));
    }
    {
      ll_backend__unify_gen__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_7, 1) = ((MR_Box) (ll_backend__unify_gen__Var_8));
    }
    {
      ll_backend__unify_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 3) = ((MR_Box) (ll_backend__unify_gen__Var_7));
    }
    return ll_backend__unify_gen__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(
  MR_Word ll_backend__unify_gen__Rval_4,
  MR_Integer ll_backend__unify_gen__Shift_5)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_5 == (MR_Integer) 0);
    MR_Word ll_backend__unify_gen__HeadVar__3_3;

    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__HeadVar__3_3 = ll_backend__unify_gen__Rval_4;
    else
      {
        MR_Word ll_backend__unify_gen__Var_7;
        MR_Word ll_backend__unify_gen__Var_8;

        {
          ll_backend__unify_gen__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_8, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_5));
        }
        {
          ll_backend__unify_gen__Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_7, 1) = ((MR_Box) (ll_backend__unify_gen__Var_8));
        }
        {
          ll_backend__unify_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__3_3, 3) = ((MR_Box) (ll_backend__unify_gen__Var_7));
        }
      }
    return ll_backend__unify_gen__HeadVar__3_3;
  }
}

static void MR_CALL 
ll_backend__unify_gen__shift_combine_rval_type_8_p_0(
  MR_Word ll_backend__unify_gen__ArgA_9,
  MR_Integer ll_backend__unify_gen__Shift_10,
  MR_Word ll_backend__unify_gen__MaybeArgB_11,
  MR_Word * ll_backend__unify_gen__FinalArg_12)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_10 == (MR_Integer) 0);
    MR_Word ll_backend__unify_gen__RvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgA_9, (MR_Integer) 0)));
    MR_Word ll_backend__unify_gen__TypeA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgA_9, (MR_Integer) 1)));
    MR_Word ll_backend__unify_gen__ShiftRvalA_17;
    MR_Word ll_backend__unify_gen__FinalRval_20;

    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__ShiftRvalA_17 = ll_backend__unify_gen__RvalA_15;
    else
      {
        MR_Word ll_backend__unify_gen__Var_33;
        MR_Word ll_backend__unify_gen__Var_34;

        {
          ll_backend__unify_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_34, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_10));
        }
        {
          ll_backend__unify_gen__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_33, 1) = ((MR_Box) (ll_backend__unify_gen__Var_34));
        }
        {
          ll_backend__unify_gen__ShiftRvalA_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 2) = ((MR_Box) (ll_backend__unify_gen__RvalA_15));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ShiftRvalA_17, 3) = ((MR_Box) (ll_backend__unify_gen__Var_33));
        }
      }
    if ((ll_backend__unify_gen__MaybeArgB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__unify_gen__FinalRval_20 = ll_backend__unify_gen__ShiftRvalA_17;
    else
      {
        MR_Word ll_backend__unify_gen__RvalB_18;
        MR_Word ll_backend__unify_gen__TypeB_19;
        MR_Word ll_backend__unify_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeArgB_11, (MR_Integer) 0)));

        ll_backend__unify_gen__RvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_25, (MR_Integer) 0)));
        ll_backend__unify_gen__TypeB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_25, (MR_Integer) 1)));
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__TypeA_16 == ll_backend__unify_gen__TypeB_19);
        if (ll_backend__unify_gen__succeeded)
          {
            {
              ll_backend__unify_gen__FinalRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 2) = ((MR_Box) (ll_backend__unify_gen__ShiftRvalA_17));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FinalRval_20, 3) = ((MR_Box) (ll_backend__unify_gen__RvalB_18));
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
      *ll_backend__unify_gen__FinalArg_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__FinalRval_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__unify_gen__TypeA_16));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__shift_combine_arg__2225__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__shift_combine_arg_9_p_0(
  MR_Word ll_backend__unify_gen__CI_10,
  MR_Word ll_backend__unify_gen__CellArgA_11,
  MR_Integer ll_backend__unify_gen__Shift_12,
  MR_Word ll_backend__unify_gen__MaybeCellArgB_13,
  MR_Word * ll_backend__unify_gen__FinalCellArg_14,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_Code_0_30,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Code_31,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_33)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_12 == (MR_Integer) 0);

    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__MaybeCellArgB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (ll_backend__unify_gen__succeeded)
      {
        *ll_backend__unify_gen__FinalCellArg_14 = ll_backend__unify_gen__CellArgA_11;
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
        *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
      }
    else
      {
        MR_Word ll_backend__unify_gen__ShiftCellArgA_21;

        switch (MR_tag((MR_Word) ll_backend__unify_gen__CellArgA_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
              *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__unify_gen__RvalA_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_11, (MR_Integer) 0)));
              MR_Word ll_backend__unify_gen__Completeness_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgA_11, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__Var_19;

              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_17)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__unify_gen__succeeded)
                {
                  ll_backend__unify_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RvalA_17, (MR_Integer) 0)));
                  {
                    MR_Word ll_backend__unify_gen__IsDummy_20;

                    {
                      ll_backend__unify_gen__IsDummy_20 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__CI_10, ll_backend__unify_gen__Var_19);
                    }
                    switch (ll_backend__unify_gen__IsDummy_20) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
                          *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ll_backend__unify_gen__VarCode_22;
                          MR_Word ll_backend__unify_gen__VarRval_23;
                          MR_Word ll_backend__unify_gen__Var_49;

                          {
                            ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_19, &ll_backend__unify_gen__VarCode_22, &ll_backend__unify_gen__VarRval_23, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32, ll_backend__unify_gen__STATE_VARIABLE_CLD_33);
                          }
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_12 == (MR_Integer) 0);
                          if (ll_backend__unify_gen__succeeded)
                            ll_backend__unify_gen__Var_49 = ll_backend__unify_gen__VarRval_23;
                          else
                            {
                              MR_Word ll_backend__unify_gen__Var_72;
                              MR_Word ll_backend__unify_gen__Var_73;

                              {
                                ll_backend__unify_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_73, 0) = ((MR_Box) (ll_backend__unify_gen__Shift_12));
                              }
                              {
                                ll_backend__unify_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_72, 1) = ((MR_Box) (ll_backend__unify_gen__Var_73));
                              }
                              {
                                ll_backend__unify_gen__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_49, 2) = ((MR_Box) (ll_backend__unify_gen__VarRval_23));
                                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_49, 3) = ((MR_Box) (ll_backend__unify_gen__Var_72));
                              }
                            }
                          {
                            ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_21, 0) = ((MR_Box) (ll_backend__unify_gen__Var_49));
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_21, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_18));
                          }
                          {
                            *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__STATE_VARIABLE_Code_0_30, ll_backend__unify_gen__VarCode_22);
                          }
                        }
                        break;
                    }
                  }
                }
              else
                {
                  MR_Integer ll_backend__unify_gen__Int_24;
                  MR_Word ll_backend__unify_gen__Var_51;

                  ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (ll_backend__unify_gen__succeeded)
                    {
                      ll_backend__unify_gen__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_17, (MR_Integer) 1)));
                      ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Var_51)) == (MR_mktag((MR_Integer) 1)));
                      if (ll_backend__unify_gen__succeeded)
                        ll_backend__unify_gen__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_51, (MR_Integer) 0)));
                    }
                  if (ll_backend__unify_gen__succeeded)
                    {
                      MR_Integer ll_backend__unify_gen__NewInt_25;
                      MR_Word ll_backend__unify_gen__Var_52;
                      MR_Word ll_backend__unify_gen__Var_53;

                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Shift_12 == (MR_Integer) 0);
                      if (ll_backend__unify_gen__succeeded)
                        ll_backend__unify_gen__NewInt_25 = ll_backend__unify_gen__Int_24;
                      else
                        {
                          ll_backend__unify_gen__NewInt_25 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Int_24, ll_backend__unify_gen__Shift_12);
                        }
                      {
                        ll_backend__unify_gen__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_53, 0) = ((MR_Box) (ll_backend__unify_gen__NewInt_25));
                      }
                      {
                        ll_backend__unify_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_52, 1) = ((MR_Box) (ll_backend__unify_gen__Var_53));
                      }
                      {
                        ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_21, 0) = ((MR_Box) (ll_backend__unify_gen__Var_52));
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ShiftCellArgA_21, 1) = ((MR_Box) (ll_backend__unify_gen__Completeness_18));
                      }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "non-var or int argument");
                        return;
                      }
                    }
                  *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
                  *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__unify_gen__Var_37;
              MR_Word ll_backend__unify_gen__RvalA_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__CellArgA_11, (MR_Integer) 0)));
              MR_Word ll_backend__unify_gen__Var_59;

              {
                ll_backend__unify_gen__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_37, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[6]));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_37, 1) = ((MR_Box) (ll_backend__unify_gen__shift_combine_arg_9_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_37, 3) = ((MR_Box) (ll_backend__unify_gen__Shift_12));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_37, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "double word rval cannot be shifted");
              }
              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_62)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__unify_gen__succeeded)
                {
                  ll_backend__unify_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RvalA_62, (MR_Integer) 0)));
                  {
                    MR_Word ll_backend__unify_gen__VarCode_57;
                    MR_Word ll_backend__unify_gen__VarRval_58;

                    {
                      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_59, &ll_backend__unify_gen__VarCode_57, &ll_backend__unify_gen__VarRval_58, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32, ll_backend__unify_gen__STATE_VARIABLE_CLD_33);
                    }
                    {
                      ll_backend__unify_gen__ShiftCellArgA_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ShiftCellArgA_21, 0) = ((MR_Box) (ll_backend__unify_gen__VarRval_58));
                    }
                    {
                      *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__STATE_VARIABLE_Code_0_30, ll_backend__unify_gen__VarCode_57);
                    }
                  }
                }
              else
                {
                  MR_Word ll_backend__unify_gen__Var_44;
                  MR_Float ll_backend__unify_gen__Var_26;

                  ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__RvalA_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_62, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (ll_backend__unify_gen__succeeded)
                    {
                      ll_backend__unify_gen__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__RvalA_62, (MR_Integer) 1)));
                      ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__Var_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_44, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (ll_backend__unify_gen__succeeded)
                        ll_backend__unify_gen__Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_44, (MR_Integer) 1)));
                    }
                  if (ll_backend__unify_gen__succeeded)
                    ll_backend__unify_gen__ShiftCellArgA_21 = ll_backend__unify_gen__CellArgA_11;
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.shift_combine_arg\'/9", (MR_String) "non-var or float argument");
                        return;
                      }
                    }
                  *ll_backend__unify_gen__STATE_VARIABLE_CLD_33 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_32;
                  *ll_backend__unify_gen__STATE_VARIABLE_Code_31 = ll_backend__unify_gen__STATE_VARIABLE_Code_0_30;
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
        if ((ll_backend__unify_gen__MaybeCellArgB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__unify_gen__FinalCellArg_14 = ll_backend__unify_gen__ShiftCellArgA_21;
        else
          {
            MR_Word ll_backend__unify_gen__CellArgB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeCellArgB_13, (MR_Integer) 0)));

            {
              *ll_backend__unify_gen__FinalCellArg_14 = ll_backend__unify_gen__bitwise_or_cell_arg_2_f_0(ll_backend__unify_gen__ShiftCellArgA_21, ll_backend__unify_gen__CellArgB_29);
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
  MR_Box * ll_backend__unify_gen__wrapper_arg_8)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv0_FinalArg_12;

    {
      ll_backend__unify_gen__shift_combine_rval_type_8_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3), &ll_backend__unify_gen__conv0_FinalArg_12);
    }
    *ll_backend__unify_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__unify_gen__conv0_FinalArg_12));
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_ground_term_args_3_p_0(
  MR_Word ll_backend__unify_gen__Widths_4,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__TypeCtorInfo_23_23;
    MR_Box ll_backend__unify_gen__conv2_Var_6;
    MR_Box ll_backend__unify_gen__conv1_Var_7;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    ll_backend__unify_gen__TypeCtorInfo_23_23 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
    {
      backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__TypeCtorInfo_23_23, ll_backend__unify_gen__TypeCtorInfo_23_23, (MR_Word) &ll_backend__unify_gen_scalar_common_2[8], ll_backend__unify_gen__Widths_4, ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_0_8, ll_backend__unify_gen__STATE_VARIABLE_TypedRvals_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv2_Var_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv1_Var_7);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_arg_5_p_0(
  MR_Word ll_backend__unify_gen__Var_6,
  MR_Word ll_backend__unify_gen__ConsArgWidth_7,
  MR_Word * ll_backend__unify_gen__TypedRval_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__TypedRval0_10;
    MR_Box ll_backend__unify_gen__conv0_TypedRval0_10;
    MR_Word ll_backend__unify_gen__Rval_11;
    MR_Word ll_backend__unify_gen__Var_15;

    {
      mercury__map__det_remove_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_6)), &ll_backend__unify_gen__conv0_TypedRval0_10, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_12, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_13);
    }
    ll_backend__unify_gen__TypedRval0_10 = ((MR_Word) ll_backend__unify_gen__conv0_TypedRval0_10);
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__ConsArgWidth_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    if (ll_backend__unify_gen__succeeded)
      {
        ll_backend__unify_gen__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypedRval0_10, (MR_Integer) 0)));
        ll_backend__unify_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypedRval0_10, (MR_Integer) 1)));
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_15 == (MR_Integer) 11);
      }
    if (ll_backend__unify_gen__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__unify_gen__TypedRval_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_11));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 9));
        }
      }
    else
      *ll_backend__unify_gen__TypedRval_8 = ll_backend__unify_gen__TypedRval0_10;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv1_TypedRval_8;
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13;

    {
      ll_backend__unify_gen__generate_ground_term_arg_5_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_TypedRval_8, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13);
    }
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_TypedRval_8));
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_ActiveMap_13));
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_args_5_p_0(
  MR_Word ll_backend__unify_gen__Vars_6,
  MR_Word ll_backend__unify_gen__ConsArgWidths_7,
  MR_Word * ll_backend__unify_gen__TypedRvals_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11;

    {
      mercury__list__map_corresponding_foldl_6_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[2], (MR_Word) &ll_backend__unify_gen_scalar_common_2[7], ll_backend__unify_gen__Vars_6, ll_backend__unify_gen__ConsArgWidths_7, ll_backend__unify_gen__TypedRvals_8, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_10)), &ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11);
    }
    *ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_11 = ((MR_Word) ll_backend__unify_gen__conv2_STATE_VARIABLE_ActiveMap_11);
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_ground_term_conjunct_tag__2054__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(
  MR_Word ll_backend__unify_gen__Var_10,
  MR_Word ll_backend__unify_gen__ConsTag_11,
  MR_Word ll_backend__unify_gen__Args_12,
  MR_Word ll_backend__unify_gen__ConsArgWidths_13,
  MR_Word ll_backend__unify_gen__UnboxedFloats_14,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__unify_gen__succeeded;

        switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ll_backend__unify_gen__ConsTag_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_37;
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_38;
                  MR_Word ll_backend__unify_gen__DataAddr_39;
                  MR_Word ll_backend__unify_gen__CellPtrConst_41;
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_92_92;
                  MR_Word ll_backend__unify_gen__Var_94;
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_130;
                  MR_Word ll_backend__unify_gen__Rval_132;

                  {
                    ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_37, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_92_92);
                  }
                  {
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_37, &ll_backend__unify_gen__PackArgTypedRvals_38);
                  }
                  {
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_38, &ll_backend__unify_gen__DataAddr_39, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69);
                  }
                  {
                    ll_backend__unify_gen__Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_94, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_94, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_39));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_94, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__CellPtrConst_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_41, 1) = ((MR_Box) (ll_backend__unify_gen__Var_94));
                  }
                  {
                    ll_backend__unify_gen__Rval_132 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_132, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_132, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_41));
                  }
                  {
                    ll_backend__unify_gen__ActiveGroundTerm_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_130, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_132));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_130, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_130)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_92_92, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  if ((ll_backend__unify_gen__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
                        return;
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__unify_gen__Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 1)));
                      MR_Word ll_backend__unify_gen__Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 0)));

                      if ((ll_backend__unify_gen__Var_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word ll_backend__unify_gen__TypeInfo_159_159 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                          MR_Word ll_backend__unify_gen__TypeCtorInfo_160_160 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                          MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_102_102;
                          MR_Word ll_backend__unify_gen__RvalType_127;
                          MR_Box ll_backend__unify_gen__conv1_RvalType_127;

                          {
                            mercury__map__det_remove_4_p_0(ll_backend__unify_gen__TypeInfo_159_159, ll_backend__unify_gen__TypeCtorInfo_160_160, ((MR_Box) (ll_backend__unify_gen__Var_213)), &ll_backend__unify_gen__conv1_RvalType_127, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_102_102);
                          }
                          ll_backend__unify_gen__RvalType_127 = ((MR_Word) ll_backend__unify_gen__conv1_RvalType_127);
                          {
                            mercury__map__det_insert_4_p_0(ll_backend__unify_gen__TypeInfo_159_159, ll_backend__unify_gen__TypeCtorInfo_160_160, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__RvalType_127)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_102_102, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                          }
                        }
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "no_tag arity != 1");
                            return;
                          }
                        }
                    }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__unify_gen__String_17 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)));
              MR_Word ll_backend__unify_gen__Const_185;
              MR_Word ll_backend__unify_gen__ActiveGroundTerm_187;
              MR_Word ll_backend__unify_gen__Var_188;

              {
                ll_backend__unify_gen__Const_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_185, 1) = ((MR_Box) (ll_backend__unify_gen__String_17));
              }
              {
                ll_backend__unify_gen__Var_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_188, 1) = ((MR_Box) (ll_backend__unify_gen__Const_185));
              }
              {
                ll_backend__unify_gen__ActiveGroundTerm_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_187, 0) = ((MR_Box) (ll_backend__unify_gen__Var_188));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_187, 1) = ((MR_Box) ((MR_Integer) 10));
              }
              {
                mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_187)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
              }
              *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__unify_gen__Const_18;
              MR_Word ll_backend__unify_gen__Type_19;
              MR_Float ll_backend__unify_gen__Float_24 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)));
              MR_Word ll_backend__unify_gen__ActiveGroundTerm_25;
              MR_Word ll_backend__unify_gen__Var_122;

              {
                ll_backend__unify_gen__Const_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_18, 1) = MR_box_float(ll_backend__unify_gen__Float_24);
              }
              switch (ll_backend__unify_gen__UnboxedFloats_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__unify_gen__Type_19 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 0:
                  ll_backend__unify_gen__Type_19 = (MR_Integer) 9;
                  break;
              }
              {
                ll_backend__unify_gen__Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_122, 1) = ((MR_Box) (ll_backend__unify_gen__Const_18));
              }
              {
                ll_backend__unify_gen__ActiveGroundTerm_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_25, 0) = ((MR_Box) (ll_backend__unify_gen__Var_122));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_25, 1) = ((MR_Box) (ll_backend__unify_gen__Type_19));
              }
              {
                mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_25)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
              }
              *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ll_backend__unify_gen__Int_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Const_179;
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_181;
                  MR_Word ll_backend__unify_gen__Var_182;

                  {
                    ll_backend__unify_gen__Const_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Const_179, 0) = ((MR_Box) (ll_backend__unify_gen__Int_20));
                  }
                  {
                    ll_backend__unify_gen__Var_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_182, 1) = ((MR_Box) (ll_backend__unify_gen__Const_179));
                  }
                  {
                    ll_backend__unify_gen__ActiveGroundTerm_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_181, 0) = ((MR_Box) (ll_backend__unify_gen__Var_182));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_181, 1) = ((MR_Box) ((MR_Integer) 7));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_181)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned ll_backend__unify_gen__UInt_21 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Const_191;
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_193;
                  MR_Word ll_backend__unify_gen__Var_194;

                  {
                    ll_backend__unify_gen__Const_191 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Const_191, 0) = ((MR_Box) (ll_backend__unify_gen__UInt_21));
                  }
                  {
                    ll_backend__unify_gen__Var_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_194, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_194, 1) = ((MR_Box) (ll_backend__unify_gen__Const_191));
                  }
                  {
                    ll_backend__unify_gen__ActiveGroundTerm_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_193, 0) = ((MR_Box) (ll_backend__unify_gen__Var_194));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_193, 1) = ((MR_Box) ((MR_Integer) 8));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_193)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__unify_gen__Lang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
                  MR_String ll_backend__unify_gen__Val_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__Var_116;
                  MR_Word ll_backend__unify_gen__Const_173;
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_175;
                  MR_Word ll_backend__unify_gen__Var_176;

                  {
                    ll_backend__unify_gen__Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_116, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_116, 1) = ((MR_Box) (ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0_1));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_116, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_22));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_116, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_116, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "foreign_tag for language other than C");
                  }
                  {
                    ll_backend__unify_gen__Const_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_173, 1) = ((MR_Box) (ll_backend__unify_gen__Val_23));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Const_173, 2) = ((MR_Box) ((MR_Integer) 7));
                  }
                  {
                    ll_backend__unify_gen__Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_176, 1) = ((MR_Box) (ll_backend__unify_gen__Const_173));
                  }
                  {
                    ll_backend__unify_gen__ActiveGroundTerm_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_175, 0) = ((MR_Box) (ll_backend__unify_gen__Var_176));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_175, 1) = ((MR_Box) ((MR_Integer) 7));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_175)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
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
              case (MR_Integer) 11:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "unexpected tag");
                    return;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_197;
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_198;
                  MR_Word ll_backend__unify_gen__DataAddr_199;
                  MR_Word ll_backend__unify_gen__CellPtrConst_201;
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_92_202;
                  MR_Word ll_backend__unify_gen__Var_203;
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_205;
                  MR_Integer ll_backend__unify_gen__Ptag_206 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Rval_207;

                  {
                    ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_197, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_92_202);
                  }
                  {
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_197, &ll_backend__unify_gen__PackArgTypedRvals_198);
                  }
                  {
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__PackArgTypedRvals_198, &ll_backend__unify_gen__DataAddr_199, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69);
                  }
                  {
                    ll_backend__unify_gen__Var_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_203, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_199));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_203, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__CellPtrConst_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_201, 1) = ((MR_Box) (ll_backend__unify_gen__Var_203));
                  }
                  {
                    ll_backend__unify_gen__Rval_207 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_207, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_206));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_207, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_201));
                  }
                  {
                    ll_backend__unify_gen__ActiveGroundTerm_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_205, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_207));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_205, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_205)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_92_202, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));

                  if ((ll_backend__unify_gen__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
                        return;
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__unify_gen__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 1)));
                      MR_Word ll_backend__unify_gen__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Args_12, (MR_Integer) 0)));

                      if ((ll_backend__unify_gen__Var_210 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word ll_backend__unify_gen__TypeInfo_163_163 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                          MR_Word ll_backend__unify_gen__TypeCtorInfo_164_164 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                          MR_Word ll_backend__unify_gen__ArgRval_42;
                          MR_Word ll_backend__unify_gen__Var_88;
                          MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_89_89;
                          MR_Word ll_backend__unify_gen__ActiveGroundTerm_133;
                          MR_Word ll_backend__unify_gen__Rval_134;
                          MR_Box ll_backend__unify_gen__conv0_Var_88;
                          MR_Word ll_backend__unify_gen___RvalType_43;

                          {
                            mercury__map__det_remove_4_p_0(ll_backend__unify_gen__TypeInfo_163_163, ll_backend__unify_gen__TypeCtorInfo_164_164, ((MR_Box) (ll_backend__unify_gen__Var_211)), &ll_backend__unify_gen__conv0_Var_88, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_89_89);
                          }
                          ll_backend__unify_gen__Var_88 = ((MR_Word) ll_backend__unify_gen__conv0_Var_88);
                          ll_backend__unify_gen__ArgRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_88, (MR_Integer) 0)));
                          ll_backend__unify_gen___RvalType_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_88, (MR_Integer) 1)));
                          {
                            ll_backend__unify_gen__Rval_134 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_134, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_140));
                            MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_134, 1) = ((MR_Box) (ll_backend__unify_gen__ArgRval_42));
                          }
                          {
                            ll_backend__unify_gen__ActiveGroundTerm_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_133, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_134));
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_133, 1) = ((MR_Box) ((MR_Integer) 11));
                          }
                          {
                            mercury__map__det_insert_4_p_0(ll_backend__unify_gen__TypeInfo_163_163, ll_backend__unify_gen__TypeCtorInfo_164_164, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_133)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_89_89, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                          }
                        }
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct_tag\'/9", (MR_String) "direct_arg_tag: arity != 1");
                            return;
                          }
                        }
                    }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ll_backend__unify_gen__StagTypedRval_47;
                  MR_Word ll_backend__unify_gen__AllTypedRvals_48;
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_75_75;
                  MR_Word ll_backend__unify_gen__Var_76;
                  MR_Word ll_backend__unify_gen__Var_77;
                  MR_Word ll_backend__unify_gen__Var_80;
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_143;
                  MR_Integer ll_backend__unify_gen__Ptag_144 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__Stag_145 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__Rval_146;
                  MR_Word ll_backend__unify_gen__ArgTypedRvals_147;
                  MR_Word ll_backend__unify_gen__PackArgTypedRvals_148;
                  MR_Word ll_backend__unify_gen__DataAddr_149;
                  MR_Word ll_backend__unify_gen__CellPtrConst_151;

                  {
                    ll_backend__unify_gen__generate_ground_term_args_5_p_0(ll_backend__unify_gen__Args_12, ll_backend__unify_gen__ConsArgWidths_13, &ll_backend__unify_gen__ArgTypedRvals_147, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_75_75);
                  }
                  {
                    ll_backend__unify_gen__pack_ground_term_args_3_p_0(ll_backend__unify_gen__ConsArgWidths_13, ll_backend__unify_gen__ArgTypedRvals_147, &ll_backend__unify_gen__PackArgTypedRvals_148);
                  }
                  {
                    ll_backend__unify_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_77, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_145));
                  }
                  {
                    ll_backend__unify_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_76, 1) = ((MR_Box) (ll_backend__unify_gen__Var_77));
                  }
                  {
                    ll_backend__unify_gen__StagTypedRval_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_47, 0) = ((MR_Box) (ll_backend__unify_gen__Var_76));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__StagTypedRval_47, 1) = ((MR_Box) ((MR_Integer) 7));
                  }
                  {
                    ll_backend__unify_gen__AllTypedRvals_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_48, 0) = ((MR_Box) (ll_backend__unify_gen__StagTypedRval_47));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__AllTypedRvals_48, 1) = ((MR_Box) (ll_backend__unify_gen__PackArgTypedRvals_148));
                  }
                  {
                    ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__unify_gen__AllTypedRvals_48, &ll_backend__unify_gen__DataAddr_149, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69);
                  }
                  {
                    ll_backend__unify_gen__Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_80, 1) = ((MR_Box) (ll_backend__unify_gen__DataAddr_149));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_80, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__CellPtrConst_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellPtrConst_151, 1) = ((MR_Box) (ll_backend__unify_gen__Var_80));
                  }
                  {
                    ll_backend__unify_gen__Rval_146 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_146, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_144));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_146, 1) = ((MR_Box) (ll_backend__unify_gen__CellPtrConst_151));
                  }
                  {
                    ll_backend__unify_gen__ActiveGroundTerm_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_143, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_146));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_143, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_143)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_75_75, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__Stag_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__Rval_28;
                  MR_Word ll_backend__unify_gen__Var_110;
                  MR_Word ll_backend__unify_gen__Var_112;
                  MR_Word ll_backend__unify_gen__Var_113;
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_124;

                  {
                    ll_backend__unify_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_113, 0) = ((MR_Box) (ll_backend__unify_gen__Stag_27));
                  }
                  {
                    ll_backend__unify_gen__Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_112, 1) = ((MR_Box) (ll_backend__unify_gen__Var_113));
                  }
                  {
                    ll_backend__unify_gen__Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_110, 1) = ((MR_Box) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_110, 2) = ((MR_Box) (ll_backend__unify_gen__Var_112));
                  }
                  {
                    ll_backend__unify_gen__Rval_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_28, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_26));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Rval_28, 1) = ((MR_Box) (ll_backend__unify_gen__Var_110));
                  }
                  {
                    ll_backend__unify_gen__ActiveGroundTerm_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_124, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_28));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_124, 1) = ((MR_Box) ((MR_Integer) 11));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_124)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ll_backend__unify_gen__RA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__RvalType_30;
                  MR_Word ll_backend__unify_gen__ActiveGroundTerm_125;
                  MR_Word ll_backend__unify_gen__Rval_126;

                  {
                    ll_backend__unify_gen__Rval_126 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_29);
                  }
                  {
                    ll_backend__llds__rval_type_2_p_0(ll_backend__unify_gen__Rval_126, &ll_backend__unify_gen__RvalType_30);
                  }
                  {
                    ll_backend__unify_gen__ActiveGroundTerm_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_125, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_126));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ActiveGroundTerm_125, 1) = ((MR_Box) (ll_backend__unify_gen__RvalType_30));
                  }
                  {
                    mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ((MR_Box) (ll_backend__unify_gen__Var_10)), ((MR_Box) (ll_backend__unify_gen__ActiveGroundTerm_125)), ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_70, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_71);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_69 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_68;
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ll_backend__unify_gen__ActualConsTag_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_11, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__unify_gen__next_value_of_ConsTag_11 = ll_backend__unify_gen__ActualConsTag_32;

                    ll_backend__unify_gen__ConsTag_11 = ll_backend__unify_gen__next_value_of_ConsTag_11;
                  }
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

static void MR_CALL 
ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__unify_gen__succeeded;

        if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_7 = ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6;
            *ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_5 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4;
          }
        else
          {
            MR_Word ll_backend__unify_gen__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26;
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27;
            MR_Word ll_backend__unify_gen__GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_17, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen___GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_17, (MR_Integer) 1)));
            MR_Word ll_backend__unify_gen__Var_46;
            MR_Word ll_backend__unify_gen__ConsId_47;
            MR_Word ll_backend__unify_gen__Args_48;
            MR_Word ll_backend__unify_gen__Unify_44;
            MR_Word ll_backend__unify_gen__SubInfo_52;
            MR_Word ll_backend__unify_gen__Var_41;
            MR_Word ll_backend__unify_gen__Var_42;
            MR_Word ll_backend__unify_gen__Var_43;
            MR_Word ll_backend__unify_gen__Var_45;
            MR_Word ll_backend__unify_gen__Var_49;
            MR_Word ll_backend__unify_gen__Var_50;
            MR_Word ll_backend__unify_gen__Var_51;

            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__GoalExpr_39)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 0)));
                ll_backend__unify_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 1)));
                ll_backend__unify_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 2)));
                ll_backend__unify_gen__Unify_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 3)));
                ll_backend__unify_gen__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__GoalExpr_39, (MR_Integer) 4)));
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Unify_44)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__unify_gen__succeeded)
                  {
                    ll_backend__unify_gen__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 0)));
                    ll_backend__unify_gen__ConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 1)));
                    ll_backend__unify_gen__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 2)));
                    ll_backend__unify_gen__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 3)));
                    ll_backend__unify_gen__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 4)));
                    ll_backend__unify_gen__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 5)));
                    ll_backend__unify_gen__SubInfo_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Unify_44, (MR_Integer) 6)));
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__SubInfo_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (ll_backend__unify_gen__succeeded)
              {
                MR_Word ll_backend__unify_gen__ConsTag_53;
                MR_Word ll_backend__unify_gen__ConsArgWidths_54;

                {
                  ll_backend__unify_gen__ConsTag_53 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__ConsId_47);
                }
                {
                  ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__HeadVar__1_1, ll_backend__unify_gen__ConsId_47, ll_backend__unify_gen__Args_48, &ll_backend__unify_gen__ConsArgWidths_54);
                }
                {
                  ll_backend__unify_gen__generate_ground_term_conjunct_tag_9_p_0(ll_backend__unify_gen__Var_46, ll_backend__unify_gen__ConsTag_53, ll_backend__unify_gen__Args_48, ll_backend__unify_gen__ConsArgWidths_54, ll_backend__unify_gen__HeadVar__3_3, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4, &ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26, ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6, &ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27);
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_ground_term_conjunct\'/7", (MR_String) "malformed goal");
                  return;
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__unify_gen__next_value_of_HeadVar__2_2 = ll_backend__unify_gen__Goals_18;
              MR_Word ll_backend__unify_gen__next_value_of_STATE_VARIABLE_StaticCellInfo_0_4 = ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_26_26;
              MR_Word ll_backend__unify_gen__next_value_of_STATE_VARIABLE_ActiveMap_0_6 = ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_27_27;

              ll_backend__unify_gen__STATE_VARIABLE_ActiveMap_0_6 = ll_backend__unify_gen__next_value_of_STATE_VARIABLE_ActiveMap_0_6;
              ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_4 = ll_backend__unify_gen__next_value_of_STATE_VARIABLE_StaticCellInfo_0_4;
              ll_backend__unify_gen__HeadVar__2_2 = ll_backend__unify_gen__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__unify_gen__det_single_arg_width_2_p_0(
  MR_Word ll_backend__unify_gen__ArgWidths_3,
  MR_Word * ll_backend__unify_gen__ArgWidth_4)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if ((ll_backend__unify_gen__ArgWidths_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__unify_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_3, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgWidths_3, (MR_Integer) 0)));

        if ((ll_backend__unify_gen__Var_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__unify_gen__ArgWidth_4 = ll_backend__unify_gen__Var_20;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.det_single_arg_width\'/2", (MR_String) "unexpected arg_width list");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_arg_6_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
  MR_Word ll_backend__unify_gen__ConstArg_10,
  MR_Word ll_backend__unify_gen__ArgWidth_11,
  MR_Word * ll_backend__unify_gen__TypedRval_12)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if (((MR_tag((MR_Word) ll_backend__unify_gen__ConstArg_10)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Integer ll_backend__unify_gen__ConstNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 0)));
        MR_Box ll_backend__unify_gen__conv0_TypedRval_12;

        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_9, ll_backend__unify_gen__ConstNum_13, &ll_backend__unify_gen__conv0_TypedRval_12);
        }
        *ll_backend__unify_gen__TypedRval_12 = ((MR_Word) ll_backend__unify_gen__conv0_TypedRval_12);
      }
    else
      {
        MR_Word ll_backend__unify_gen__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__ConsTag_16;
        MR_Word ll_backend__unify_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConstArg_10, (MR_Integer) 1)));

        {
          ll_backend__unify_gen__ConsTag_16 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_7, ll_backend__unify_gen__ConsId_14);
        }
        {
          ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_97_114_103_95_116_97_103_95_95_91_49_44_32_51_93_95_48_6_p_0(ll_backend__unify_gen__UnboxedFloats_8, ll_backend__unify_gen__ConsTag_16, ll_backend__unify_gen__ArgWidth_11, ll_backend__unify_gen__TypedRval_12);
        }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv0_TypedRval_12;

    {
      ll_backend__unify_gen__generate_const_struct_arg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv0_TypedRval_12);
    }
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_TypedRval_12));
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_args_6_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_7,
  MR_Word ll_backend__unify_gen__UnboxedFloats_8,
  MR_Word ll_backend__unify_gen__ConstStructMap_9,
  MR_Word ll_backend__unify_gen__ConstArgs_10,
  MR_Word ll_backend__unify_gen__ArgWidths_11,
  MR_Word * ll_backend__unify_gen__TypedRvals_12)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__Var_13;

    {
      ll_backend__unify_gen__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_13, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_13, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_struct_args_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_13, 3) = ((MR_Box) (ll_backend__unify_gen__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_13, 4) = ((MR_Box) (ll_backend__unify_gen__UnboxedFloats_8));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_13, 5) = ((MR_Box) (ll_backend__unify_gen__ConstStructMap_9));
    }
    {
      mercury__list__map_corresponding_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__Var_13, ll_backend__unify_gen__ConstArgs_10, ll_backend__unify_gen__ArgWidths_11, ll_backend__unify_gen__TypedRvals_12);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_struct_7_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_8,
  MR_Word ll_backend__unify_gen__UnboxedFloats_9,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Integer ll_backend__unify_gen__ConstNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ll_backend__unify_gen__ConstStruct_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word ll_backend__unify_gen__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 0)));
    MR_Word ll_backend__unify_gen__ConstArgs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 1)));
    MR_Word ll_backend__unify_gen__ConsTag_18;
    MR_Word ll_backend__unify_gen__ConsArgWidths_19;
    MR_Word ll_backend__unify_gen__Rval_20;
    MR_Word ll_backend__unify_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 2)));
    MR_Word ll_backend__unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConstStruct_11, (MR_Integer) 3)));

    {
      ll_backend__unify_gen__ConsTag_18 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__ConsId_14);
    }
    {
      ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0, ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__ConsId_14, ll_backend__unify_gen__ConstArgs_15, &ll_backend__unify_gen__ConsArgWidths_19);
    }
    {
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_111_110_115_116_95_115_116_114_117_99_116_95_114_118_97_108_95_95_91_52_93_95_48_10_p_0(ll_backend__unify_gen__ModuleInfo_8, ll_backend__unify_gen__UnboxedFloats_9, ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21, ll_backend__unify_gen__ConsTag_18, ll_backend__unify_gen__ConstArgs_15, ll_backend__unify_gen__ConsArgWidths_19, &ll_backend__unify_gen__Rval_20, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_0_23, ll_backend__unify_gen__STATE_VARIABLE_StaticCellInfo_24);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstNum_10, ((MR_Box) (ll_backend__unify_gen__Rval_20)), ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_0_21, ll_backend__unify_gen__STATE_VARIABLE_ConstStructMap_22);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_deconstruct_9_p_0(
  MR_Word ll_backend__unify_gen__Var_10,
  MR_Word ll_backend__unify_gen__ArgVar_11,
  MR_Integer ll_backend__unify_gen__Ptag_12,
  MR_Word ll_backend__unify_gen__ArgMode_13,
  MR_Word ll_backend__unify_gen__Type_14,
  MR_Word * ll_backend__unify_gen__Code_15,
  MR_Word ll_backend__unify_gen__CI_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_24,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_25)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__ModuleInfo_18;
    MR_Word ll_backend__unify_gen__LeftFromToInsts_19;
    MR_Word ll_backend__unify_gen__RightFromToInsts_20;
    MR_Word ll_backend__unify_gen__LeftTopFunctorMode_21;
    MR_Word ll_backend__unify_gen__RightTopFunctorMode_22;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_16, &ll_backend__unify_gen__ModuleInfo_18);
    }
    ll_backend__unify_gen__LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgMode_13, (MR_Integer) 0)));
    ll_backend__unify_gen__RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgMode_13, (MR_Integer) 1)));
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__LeftFromToInsts_19, ll_backend__unify_gen__Type_14, &ll_backend__unify_gen__LeftTopFunctorMode_21);
    }
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__RightFromToInsts_20, ll_backend__unify_gen__Type_14, &ll_backend__unify_gen__RightTopFunctorMode_22);
    }
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 0);
    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_22 == (MR_Integer) 1);
    if (ll_backend__unify_gen__succeeded)
      {
        {
          ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_24, ll_backend__unify_gen__ArgVar_11);
        }
        if (ll_backend__unify_gen__succeeded)
          {
            MR_Word ll_backend__unify_gen__BodyRval_23;
            MR_Word ll_backend__unify_gen__Var_27;
            MR_Word ll_backend__unify_gen__Var_28;
            MR_Word ll_backend__unify_gen__Var_29;

            {
              ll_backend__unify_gen__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_27, 0) = ((MR_Box) (ll_backend__unify_gen__Var_10));
            }
            {
              ll_backend__unify_gen__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_29, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_12));
            }
            {
              ll_backend__unify_gen__Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_28, 1) = ((MR_Box) (ll_backend__unify_gen__Var_29));
            }
            {
              ll_backend__unify_gen__BodyRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__BodyRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__BodyRval_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__BodyRval_23, 2) = ((MR_Box) (ll_backend__unify_gen__Var_27));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__BodyRval_23, 3) = ((MR_Box) (ll_backend__unify_gen__Var_28));
            }
            {
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__ArgVar_11, ll_backend__unify_gen__BodyRval_23, ll_backend__unify_gen__Code_15, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_25);
            }
          }
        else
          {
            {
              *ll_backend__unify_gen__Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            *ll_backend__unify_gen__STATE_VARIABLE_CLD_25 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_24;
          }
      }
    else
      {
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 1);
        if (ll_backend__unify_gen__succeeded)
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_22 == (MR_Integer) 0);
        if (ll_backend__unify_gen__succeeded)
          {
            MR_Word ll_backend__unify_gen__Var_31;

            {
              ll_backend__unify_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_31, 0) = ((MR_Box) (ll_backend__unify_gen__ArgVar_11));
            }
            {
              ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__Ptag_12, ll_backend__unify_gen__Var_31, ll_backend__unify_gen__Code_15, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_25);
            }
          }
        else
          {
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 2);
            if (ll_backend__unify_gen__succeeded)
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_22 == (MR_Integer) 2);
            if (ll_backend__unify_gen__succeeded)
              {
                {
                  *ll_backend__unify_gen__Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                }
              }
            else
              {
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 0);
                if (ll_backend__unify_gen__succeeded)
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_22 == (MR_Integer) 0);
                if (ll_backend__unify_gen__succeeded)
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
            *ll_backend__unify_gen__STATE_VARIABLE_CLD_25 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_24;
          }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(
  MR_Word ll_backend__unify_gen__Var_10,
  MR_Word ll_backend__unify_gen__Arg_11,
  MR_Integer ll_backend__unify_gen__Ptag_12,
  MR_Word ll_backend__unify_gen__ArgMode_13,
  MR_Word ll_backend__unify_gen__Type_14,
  MR_Word * ll_backend__unify_gen__Code_15,
  MR_Word ll_backend__unify_gen__CI_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_24)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__ModuleInfo_18;
    MR_Word ll_backend__unify_gen__LeftFromToInsts_19;
    MR_Word ll_backend__unify_gen__RightFromToInsts_20;
    MR_Word ll_backend__unify_gen__LeftTopFunctorMode_21;
    MR_Word ll_backend__unify_gen__RightTopFunctorMode_22;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_16, &ll_backend__unify_gen__ModuleInfo_18);
    }
    ll_backend__unify_gen__LeftFromToInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgMode_13, (MR_Integer) 0)));
    ll_backend__unify_gen__RightFromToInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgMode_13, (MR_Integer) 1)));
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__LeftFromToInsts_19, ll_backend__unify_gen__Type_14, &ll_backend__unify_gen__LeftTopFunctorMode_21);
    }
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__RightFromToInsts_20, ll_backend__unify_gen__Type_14, &ll_backend__unify_gen__RightTopFunctorMode_22);
    }
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 0);
    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_22 == (MR_Integer) 0);
    if (ll_backend__unify_gen__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "test in arg of [de]construction");
          return;
        }
      }
    else
      {
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 0);
        if (ll_backend__unify_gen__succeeded)
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_22 == (MR_Integer) 1);
        if (ll_backend__unify_gen__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_direct_arg_construct\'/9", (MR_String) "left-to-right data flow in construction");
              return;
            }
          }
        else
          {
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 1);
            if (ll_backend__unify_gen__succeeded)
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_22 == (MR_Integer) 0);
            if (ll_backend__unify_gen__succeeded)
              {
                MR_Word ll_backend__unify_gen__Var_31;
                MR_Word ll_backend__unify_gen__Var_33;

                {
                  ll_backend__unify_gen__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_33, 0) = ((MR_Box) (ll_backend__unify_gen__Arg_11));
                }
                {
                  ll_backend__unify_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_31, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_12));
                  MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_31, 1) = ((MR_Box) (ll_backend__unify_gen__Var_33));
                }
                {
                  ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__Var_31, ll_backend__unify_gen__Code_15, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23, ll_backend__unify_gen__STATE_VARIABLE_CLD_24);
                }
              }
            else
              {
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_21 == (MR_Integer) 2);
                if (ll_backend__unify_gen__succeeded)
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_22 == (MR_Integer) 2);
                if (ll_backend__unify_gen__succeeded)
                  {
                    MR_Word ll_backend__unify_gen__Var_34;

                    {
                      ll_backend__unify_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_34, 1) = ((MR_Box) (ll_backend__unify_gen__Ptag_12));
                    }
                    {
                      ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__Var_34, ll_backend__unify_gen__CI_16, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23, ll_backend__unify_gen__STATE_VARIABLE_CLD_24);
                    }
                    {
                      *ll_backend__unify_gen__Code_15 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
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

static MR_bool MR_CALL 
ll_backend__unify_gen__field_offset_pair_3_p_0(
  MR_Word ll_backend__unify_gen__LvalA_4,
  MR_Word * ll_backend__unify_gen__LvalA_2,
  MR_Word * ll_backend__unify_gen__LvalB_5)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__Ptag_6;
    MR_Word ll_backend__unify_gen__Address_7;
    MR_Integer ll_backend__unify_gen__Offset_8;
    MR_Word ll_backend__unify_gen__Var_9;
    MR_Word ll_backend__unify_gen__Var_10;
    MR_Word ll_backend__unify_gen__Var_11;
    MR_Word ll_backend__unify_gen__Var_12;
    MR_Integer ll_backend__unify_gen__Var_13;
    MR_Integer ll_backend__unify_gen__Var_14;

    *ll_backend__unify_gen__LvalA_2 = ll_backend__unify_gen__LvalA_4;
    ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__LvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
    if (ll_backend__unify_gen__succeeded)
      {
        ll_backend__unify_gen__Ptag_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 1)));
        ll_backend__unify_gen__Address_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 2)));
        ll_backend__unify_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__LvalA_4, (MR_Integer) 3)));
        ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__Var_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_9, (MR_Integer) 1)));
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Var_10)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__Offset_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_10, (MR_Integer) 0)));
                ll_backend__unify_gen__Var_14 = (MR_Integer) 1;
                ll_backend__unify_gen__Var_13 = (ll_backend__unify_gen__Offset_8 + ll_backend__unify_gen__Var_14);
                {
                  ll_backend__unify_gen__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_12, 0) = ((MR_Box) (ll_backend__unify_gen__Var_13));
                }
                {
                  ll_backend__unify_gen__Var_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_11, 1) = ((MR_Box) (ll_backend__unify_gen__Var_12));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__unify_gen__LvalB_5 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__unify_gen__Ptag_6));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Address_7));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__Var_11));
                }
                ll_backend__unify_gen__succeeded = MR_TRUE;
              }
          }
      }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_sub_assign_6_p_0(
  MR_Word ll_backend__unify_gen__Left_7,
  MR_Word ll_backend__unify_gen__Right_8,
  MR_Word * ll_backend__unify_gen__Code_9,
  MR_Word ll_backend__unify_gen__CI_10,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_41)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if (((MR_tag((MR_Word) ll_backend__unify_gen__Left_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__unify_gen__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Left_7, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Left_7, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ll_backend__unify_gen__Right_8)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_assign\'/6", (MR_String) "lval/lval");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__unify_gen__TypeCtorInfo_135_135;
            MR_Word ll_backend__unify_gen__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Right_8, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen__SourceCode_19;
            MR_Word ll_backend__unify_gen__Source_20;
            MR_Word ll_backend__unify_gen__Lval_21;
            MR_Word ll_backend__unify_gen__MaterializeCode_22;
            MR_Word ll_backend__unify_gen__AssignCode_23;
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61;
            MR_Word ll_backend__unify_gen__Var_93;

            {
              ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_18, &ll_backend__unify_gen__SourceCode_19, &ll_backend__unify_gen__Source_20, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, &ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61);
            }
            {
              ll_backend__code_loc_dep__materialize_vars_in_lval_6_p_0(ll_backend__unify_gen__Var_163, &ll_backend__unify_gen__Lval_21, &ll_backend__unify_gen__MaterializeCode_22, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
            }
            switch (MR_tag((MR_Word) ll_backend__unify_gen__Var_162)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ll_backend__unify_gen__Var_162)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ll_backend__unify_gen__Var_90;
                      MR_Word ll_backend__unify_gen__Var_91;

                      {
                        ll_backend__unify_gen__Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_91, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_91, 2) = ((MR_Box) (ll_backend__unify_gen__Source_20));
                      }
                      {
                        ll_backend__unify_gen__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_90, 0) = ((MR_Box) (ll_backend__unify_gen__Var_91));
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_90, 1) = ((MR_Box) ((MR_String) "Copy value"));
                      }
                      {
                        ll_backend__unify_gen__AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__Var_90)));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ll_backend__unify_gen__LvalA_30;
                      MR_Word ll_backend__unify_gen__LvalB_31;

                      {
                        ll_backend__unify_gen__succeeded = ll_backend__unify_gen__field_offset_pair_3_p_0(ll_backend__unify_gen__Lval_21, &ll_backend__unify_gen__LvalA_30, &ll_backend__unify_gen__LvalB_31);
                      }
                      if (ll_backend__unify_gen__succeeded)
                        {
                          MR_Word ll_backend__unify_gen__SrcA_32;
                          MR_Word ll_backend__unify_gen__SrcB_33;
                          MR_Word ll_backend__unify_gen__Var_71;
                          MR_Word ll_backend__unify_gen__Var_72;
                          MR_Word ll_backend__unify_gen__Var_73;
                          MR_Word ll_backend__unify_gen__Var_74;
                          MR_Word ll_backend__unify_gen__Var_75;
                          MR_Word ll_backend__unify_gen__Var_76;

                          {
                            ll_backend__unify_gen__SrcA_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_32, 2) = ((MR_Box) (ll_backend__unify_gen__Source_20));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcA_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
                          }
                          {
                            ll_backend__unify_gen__SrcB_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 54))));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_33, 2) = ((MR_Box) (ll_backend__unify_gen__Source_20));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__SrcB_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
                          }
                          {
                            ll_backend__unify_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_73, 1) = ((MR_Box) (ll_backend__unify_gen__LvalA_30));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_73, 2) = ((MR_Box) (ll_backend__unify_gen__SrcA_32));
                          }
                          {
                            ll_backend__unify_gen__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_72, 0) = ((MR_Box) (ll_backend__unify_gen__Var_73));
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_72, 1) = ((MR_Box) ((MR_String) "Update double word"));
                          }
                          {
                            ll_backend__unify_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_76, 1) = ((MR_Box) (ll_backend__unify_gen__LvalB_31));
                            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_76, 2) = ((MR_Box) (ll_backend__unify_gen__SrcB_33));
                          }
                          {
                            ll_backend__unify_gen__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_75, 0) = ((MR_Box) (ll_backend__unify_gen__Var_76));
                            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_75, 1) = ((MR_Box) ((MR_String) "Update double word"));
                          }
                          {
                            ll_backend__unify_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_74, 0) = ((MR_Box) (ll_backend__unify_gen__Var_75));
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            ll_backend__unify_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_71, 0) = ((MR_Box) (ll_backend__unify_gen__Var_72));
                            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_71, 1) = ((MR_Box) (ll_backend__unify_gen__Var_74));
                          }
                          {
                            ll_backend__unify_gen__AssignCode_23 = mercury__cord__from_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__Var_71);
                          }
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
                  MR_Integer ll_backend__unify_gen__Mask_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_162, (MR_Integer) 0)));
                  MR_Word ll_backend__unify_gen__ComplementMask_26;
                  MR_Word ll_backend__unify_gen__MaskOld_27;
                  MR_Word ll_backend__unify_gen__ShiftNew_28;
                  MR_Word ll_backend__unify_gen__Combined_29;
                  MR_Word ll_backend__unify_gen__Var_81;
                  MR_Integer ll_backend__unify_gen__Var_82;
                  MR_Integer ll_backend__unify_gen__Var_83;
                  MR_Word ll_backend__unify_gen__Var_85;
                  MR_Word ll_backend__unify_gen__Var_87;
                  MR_Word ll_backend__unify_gen__Var_88;

                  {
                    ll_backend__unify_gen__Var_83 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Mask_24, (MR_Integer) 0);
                  }
                  ll_backend__unify_gen__Var_82 = ~(ll_backend__unify_gen__Var_83);
                  {
                    ll_backend__unify_gen__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_81, 0) = ((MR_Box) (ll_backend__unify_gen__Var_82));
                  }
                  {
                    ll_backend__unify_gen__ComplementMask_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_26, 1) = ((MR_Box) (ll_backend__unify_gen__Var_81));
                  }
                  {
                    ll_backend__unify_gen__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_85, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
                  }
                  {
                    ll_backend__unify_gen__MaskOld_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_27, 2) = ((MR_Box) (ll_backend__unify_gen__Var_85));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_27, 3) = ((MR_Box) (ll_backend__unify_gen__ComplementMask_26));
                  }
                  {
                    ll_backend__unify_gen__ShiftNew_28 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(ll_backend__unify_gen__Source_20, (MR_Integer) 0);
                  }
                  {
                    ll_backend__unify_gen__Combined_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_29, 2) = ((MR_Box) (ll_backend__unify_gen__MaskOld_27));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_29, 3) = ((MR_Box) (ll_backend__unify_gen__ShiftNew_28));
                  }
                  {
                    ll_backend__unify_gen__Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_88, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_88, 2) = ((MR_Box) (ll_backend__unify_gen__Combined_29));
                  }
                  {
                    ll_backend__unify_gen__Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_87, 0) = ((MR_Box) (ll_backend__unify_gen__Var_88));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_87, 1) = ((MR_Box) ((MR_String) "Update part of word"));
                  }
                  {
                    ll_backend__unify_gen__AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__Var_87)));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ll_backend__unify_gen__Mask_138 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_162, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__Shift_139 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_162, (MR_Integer) 0)));
                  MR_Word ll_backend__unify_gen__ComplementMask_140;
                  MR_Word ll_backend__unify_gen__MaskOld_141;
                  MR_Word ll_backend__unify_gen__ShiftNew_142;
                  MR_Word ll_backend__unify_gen__Combined_143;
                  MR_Word ll_backend__unify_gen__Var_144;
                  MR_Integer ll_backend__unify_gen__Var_145;
                  MR_Integer ll_backend__unify_gen__Var_146;
                  MR_Word ll_backend__unify_gen__Var_148;
                  MR_Word ll_backend__unify_gen__Var_150;
                  MR_Word ll_backend__unify_gen__Var_151;

                  {
                    ll_backend__unify_gen__Var_146 = mercury__int__f_60_60_2_f_0(ll_backend__unify_gen__Mask_138, ll_backend__unify_gen__Shift_139);
                  }
                  ll_backend__unify_gen__Var_145 = ~(ll_backend__unify_gen__Var_146);
                  {
                    ll_backend__unify_gen__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_144, 0) = ((MR_Box) (ll_backend__unify_gen__Var_145));
                  }
                  {
                    ll_backend__unify_gen__ComplementMask_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ComplementMask_140, 1) = ((MR_Box) (ll_backend__unify_gen__Var_144));
                  }
                  {
                    ll_backend__unify_gen__Var_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_148, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
                  }
                  {
                    ll_backend__unify_gen__MaskOld_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_141, 2) = ((MR_Box) (ll_backend__unify_gen__Var_148));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__MaskOld_141, 3) = ((MR_Box) (ll_backend__unify_gen__ComplementMask_140));
                  }
                  {
                    ll_backend__unify_gen__ShiftNew_142 = ll_backend__unify_gen__maybe_left_shift_rval_2_f_0(ll_backend__unify_gen__Source_20, ll_backend__unify_gen__Shift_139);
                  }
                  {
                    ll_backend__unify_gen__Combined_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_143, 2) = ((MR_Box) (ll_backend__unify_gen__MaskOld_141));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Combined_143, 3) = ((MR_Box) (ll_backend__unify_gen__ShiftNew_142));
                  }
                  {
                    ll_backend__unify_gen__Var_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_151, 1) = ((MR_Box) (ll_backend__unify_gen__Lval_21));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_151, 2) = ((MR_Box) (ll_backend__unify_gen__Combined_143));
                  }
                  {
                    ll_backend__unify_gen__Var_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_150, 0) = ((MR_Box) (ll_backend__unify_gen__Var_151));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_150, 1) = ((MR_Box) ((MR_String) "Update part of word"));
                  }
                  {
                    ll_backend__unify_gen__AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__Var_150)));
                  }
                }
                break;
            }
            ll_backend__unify_gen__TypeCtorInfo_135_135 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
            {
              ll_backend__unify_gen__Var_93 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_135_135, ll_backend__unify_gen__MaterializeCode_22, ll_backend__unify_gen__AssignCode_23);
            }
            {
              *ll_backend__unify_gen__Code_9 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_135_135, ll_backend__unify_gen__SourceCode_19, ll_backend__unify_gen__Var_93);
            }
          }
      }
    else
      {
        MR_Word ll_backend__unify_gen__Lvar_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Left_7, (MR_Integer) 0)));

        {
          ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__Lvar_35);
        }
        if (ll_backend__unify_gen__succeeded)
          if (((MR_tag((MR_Word) ll_backend__unify_gen__Right_8)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word ll_backend__unify_gen__RightWidth_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Right_8, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__Lval_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Right_8, (MR_Integer) 0)));

              switch (MR_tag((MR_Word) ll_backend__unify_gen__RightWidth_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__unify_gen__RightWidth_36)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__Lval_112, ll_backend__unify_gen__Code_9, ll_backend__unify_gen__CI_10, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__unify_gen__LvalA_102;
                        MR_Word ll_backend__unify_gen__LvalB_103;

                        {
                          ll_backend__unify_gen__succeeded = ll_backend__unify_gen__field_offset_pair_3_p_0(ll_backend__unify_gen__Lval_112, &ll_backend__unify_gen__LvalA_102, &ll_backend__unify_gen__LvalB_103);
                        }
                        if (ll_backend__unify_gen__succeeded)
                          {
                            MR_Word ll_backend__unify_gen__Var_44;
                            MR_Word ll_backend__unify_gen__Var_45;
                            MR_Word ll_backend__unify_gen__Var_46;
                            MR_Word ll_backend__unify_gen__Var_48;
                            MR_Word ll_backend__unify_gen__Rval_101;

                            {
                              ll_backend__unify_gen__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_44, 0) = ((MR_Box) (ll_backend__unify_gen__LvalA_102));
                            }
                            {
                              ll_backend__unify_gen__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_45, 0) = ((MR_Box) (ll_backend__unify_gen__LvalB_103));
                            }
                            {
                              ll_backend__unify_gen__Rval_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 55))));
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_101, 2) = ((MR_Box) (ll_backend__unify_gen__Var_44));
                              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_101, 3) = ((MR_Box) (ll_backend__unify_gen__Var_45));
                            }
                            {
                              ll_backend__unify_gen__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_48, 0) = ((MR_Box) (ll_backend__unify_gen__LvalB_103));
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              ll_backend__unify_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_46, 0) = ((MR_Box) (ll_backend__unify_gen__LvalA_102));
                              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_46, 1) = ((MR_Box) (ll_backend__unify_gen__Var_48));
                            }
                            {
                              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__Var_46, ll_backend__unify_gen__Rval_101, ll_backend__unify_gen__Code_9, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
                            }
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
                    MR_Word ll_backend__unify_gen__Rval0_37;
                    MR_Word ll_backend__unify_gen__Rval_38;
                    MR_Word ll_backend__unify_gen__Var_55;
                    MR_Word ll_backend__unify_gen__Var_56;
                    MR_Word ll_backend__unify_gen__Var_57;
                    MR_Integer ll_backend__unify_gen__Mask_99 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RightWidth_36, (MR_Integer) 0)));

                    {
                      ll_backend__unify_gen__Rval0_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Rval0_37, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_112));
                    }
                    {
                      ll_backend__unify_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_56, 0) = ((MR_Box) (ll_backend__unify_gen__Mask_99));
                    }
                    {
                      ll_backend__unify_gen__Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_55, 1) = ((MR_Box) (ll_backend__unify_gen__Var_56));
                    }
                    {
                      ll_backend__unify_gen__Rval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_38, 2) = ((MR_Box) (ll_backend__unify_gen__Rval0_37));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_38, 3) = ((MR_Box) (ll_backend__unify_gen__Var_55));
                    }
                    {
                      ll_backend__unify_gen__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_57, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_112));
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__Var_57, ll_backend__unify_gen__Rval_38, ll_backend__unify_gen__Code_9, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__unify_gen__Var_53;
                    MR_Integer ll_backend__unify_gen__Shift_97 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__RightWidth_36, (MR_Integer) 0)));
                    MR_Word ll_backend__unify_gen__Rval0_154;
                    MR_Word ll_backend__unify_gen__Rval_155;
                    MR_Word ll_backend__unify_gen__Var_157;
                    MR_Word ll_backend__unify_gen__Var_158;
                    MR_Word ll_backend__unify_gen__Var_159;
                    MR_Integer ll_backend__unify_gen__Mask_161 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__RightWidth_36, (MR_Integer) 1)));

                    {
                      ll_backend__unify_gen__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_53, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_112));
                    }
                    {
                      ll_backend__unify_gen__Rval0_154 = ll_backend__unify_gen__right_shift_rval_2_f_0(ll_backend__unify_gen__Var_53, ll_backend__unify_gen__Shift_97);
                    }
                    {
                      ll_backend__unify_gen__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_158, 0) = ((MR_Box) (ll_backend__unify_gen__Mask_161));
                    }
                    {
                      ll_backend__unify_gen__Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_157, 1) = ((MR_Box) (ll_backend__unify_gen__Var_158));
                    }
                    {
                      ll_backend__unify_gen__Rval_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_155, 2) = ((MR_Box) (ll_backend__unify_gen__Rval0_154));
                      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Rval_155, 3) = ((MR_Box) (ll_backend__unify_gen__Var_157));
                    }
                    {
                      ll_backend__unify_gen__Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_159, 0) = ((MR_Box) (ll_backend__unify_gen__Lval_112));
                      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__Var_159, ll_backend__unify_gen__Rval_155, ll_backend__unify_gen__Code_9, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
                    }
                  }
                  break;
              }
            }
          else
            {
              MR_Word ll_backend__unify_gen__Rvar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Right_8, (MR_Integer) 0)));

              {
                ll_backend__code_loc_dep__assign_var_to_var_4_p_0(ll_backend__unify_gen__Lvar_35, ll_backend__unify_gen__Rvar_39, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40, ll_backend__unify_gen__STATE_VARIABLE_CLD_41);
              }
              {
                *ll_backend__unify_gen__Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
            }
        else
          {
            {
              *ll_backend__unify_gen__Code_9 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
            }
            *ll_backend__unify_gen__STATE_VARIABLE_CLD_41 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_40;
          }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_sub_unify_8_p_0(
  MR_Word ll_backend__unify_gen__L_9,
  MR_Word ll_backend__unify_gen__R_10,
  MR_Word ll_backend__unify_gen__ArgMode_11,
  MR_Word ll_backend__unify_gen__Type_12,
  MR_Word * ll_backend__unify_gen__Code_13,
  MR_Word ll_backend__unify_gen__CI_14,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_21,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_22)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__ModuleInfo_16;
    MR_Word ll_backend__unify_gen__LeftFromToInsts_17;
    MR_Word ll_backend__unify_gen__RightFromToInsts_18;
    MR_Word ll_backend__unify_gen__LeftTopFunctorMode_19;
    MR_Word ll_backend__unify_gen__RightTopFunctorMode_20;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_14, &ll_backend__unify_gen__ModuleInfo_16);
    }
    ll_backend__unify_gen__LeftFromToInsts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgMode_11, (MR_Integer) 0)));
    ll_backend__unify_gen__RightFromToInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgMode_11, (MR_Integer) 1)));
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_16, ll_backend__unify_gen__LeftFromToInsts_17, ll_backend__unify_gen__Type_12, &ll_backend__unify_gen__LeftTopFunctorMode_19);
    }
    {
      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_16, ll_backend__unify_gen__RightFromToInsts_18, ll_backend__unify_gen__Type_12, &ll_backend__unify_gen__RightTopFunctorMode_20);
    }
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_19 == (MR_Integer) 0);
    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_20 == (MR_Integer) 0);
    if (ll_backend__unify_gen__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "test in arg of [de]construction");
          return;
        }
      }
    else
      {
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_19 == (MR_Integer) 0);
        if (ll_backend__unify_gen__succeeded)
          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_20 == (MR_Integer) 1);
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__generate_sub_assign_6_p_0(ll_backend__unify_gen__R_10, ll_backend__unify_gen__L_9, ll_backend__unify_gen__Code_13, ll_backend__unify_gen__CI_14, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_21, ll_backend__unify_gen__STATE_VARIABLE_CLD_22);
          }
        else
          {
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_19 == (MR_Integer) 1);
            if (ll_backend__unify_gen__succeeded)
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_20 == (MR_Integer) 0);
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__generate_sub_assign_6_p_0(ll_backend__unify_gen__L_9, ll_backend__unify_gen__R_10, ll_backend__unify_gen__Code_13, ll_backend__unify_gen__CI_14, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_21, ll_backend__unify_gen__STATE_VARIABLE_CLD_22);
              }
            else
              {
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_19 == (MR_Integer) 2);
                if (ll_backend__unify_gen__succeeded)
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_20 == (MR_Integer) 2);
                if (ll_backend__unify_gen__succeeded)
                  {
                    {
                      *ll_backend__unify_gen__Code_13 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "some strange unify");
                      return;
                    }
                  }
                *ll_backend__unify_gen__STATE_VARIABLE_CLD_22 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_21;
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_unify_args_2_8_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_8)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__unify_gen__TypeCtorInfo_30_30;

        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (ll_backend__unify_gen__succeeded)
                  {
                    ll_backend__unify_gen__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                    {
                      *ll_backend__unify_gen__HeadVar__5_5 = mercury__cord__empty_0_f_0(ll_backend__unify_gen__TypeCtorInfo_30_30);
                    }
                    *ll_backend__unify_gen__STATE_VARIABLE_CLD_8 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7;
                    ll_backend__unify_gen__succeeded = MR_TRUE;
                  }
              }
          }
      }
    else
      {
        MR_Word ll_backend__unify_gen__TypeCtorInfo_31_31;
        MR_Word ll_backend__unify_gen__L_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Ls_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__R_15;
        MR_Word ll_backend__unify_gen__Rs_16;
        MR_Word ll_backend__unify_gen__M_17;
        MR_Word ll_backend__unify_gen__Ms_18;
        MR_Word ll_backend__unify_gen__T_19;
        MR_Word ll_backend__unify_gen__Ts_20;
        MR_Word ll_backend__unify_gen__CodeA_24;
        MR_Word ll_backend__unify_gen__CodeB_25;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28;
        MR_Word ll_backend__unify_gen__ModuleInfo_41;
        MR_Word ll_backend__unify_gen__LeftFromToInsts_42;
        MR_Word ll_backend__unify_gen__RightFromToInsts_43;
        MR_Word ll_backend__unify_gen__LeftTopFunctorMode_44;
        MR_Word ll_backend__unify_gen__RightTopFunctorMode_45;

        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__unify_gen__Rs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__M_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
                ll_backend__unify_gen__Ms_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__unify_gen__succeeded)
                  {
                    ll_backend__unify_gen__T_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
                    ll_backend__unify_gen__Ts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
                    {
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__HeadVar__6_6, &ll_backend__unify_gen__ModuleInfo_41);
                    }
                    ll_backend__unify_gen__LeftFromToInsts_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__M_17, (MR_Integer) 0)));
                    ll_backend__unify_gen__RightFromToInsts_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__M_17, (MR_Integer) 1)));
                    {
                      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_41, ll_backend__unify_gen__LeftFromToInsts_42, ll_backend__unify_gen__T_19, &ll_backend__unify_gen__LeftTopFunctorMode_44);
                    }
                    {
                      check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_41, ll_backend__unify_gen__RightFromToInsts_43, ll_backend__unify_gen__T_19, &ll_backend__unify_gen__RightTopFunctorMode_45);
                    }
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_44 == (MR_Integer) 0);
                    if (ll_backend__unify_gen__succeeded)
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_45 == (MR_Integer) 0);
                    if (ll_backend__unify_gen__succeeded)
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "test in arg of [de]construction");
                        }
                      }
                    else
                      {
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_44 == (MR_Integer) 0);
                        if (ll_backend__unify_gen__succeeded)
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_45 == (MR_Integer) 1);
                        if (ll_backend__unify_gen__succeeded)
                          {
                            ll_backend__unify_gen__generate_sub_assign_6_p_0(ll_backend__unify_gen__R_15, ll_backend__unify_gen__L_13, &ll_backend__unify_gen__CodeA_24, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28);
                          }
                        else
                          {
                            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_44 == (MR_Integer) 1);
                            if (ll_backend__unify_gen__succeeded)
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_45 == (MR_Integer) 0);
                            if (ll_backend__unify_gen__succeeded)
                              {
                                ll_backend__unify_gen__generate_sub_assign_6_p_0(ll_backend__unify_gen__L_13, ll_backend__unify_gen__R_15, &ll_backend__unify_gen__CodeA_24, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7, &ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28);
                              }
                            else
                              {
                                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__LeftTopFunctorMode_44 == (MR_Integer) 2);
                                if (ll_backend__unify_gen__succeeded)
                                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__RightTopFunctorMode_45 == (MR_Integer) 2);
                                if (ll_backend__unify_gen__succeeded)
                                  {
                                    {
                                      ll_backend__unify_gen__CodeA_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                                    }
                                  }
                                else
                                  {
                                    {
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_sub_unify\'/8", (MR_String) "some strange unify");
                                    }
                                  }
                                ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_7;
                              }
                          }
                      }
                    {
                      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_unify_args_2_8_p_0(ll_backend__unify_gen__Ls_14, ll_backend__unify_gen__Rs_16, ll_backend__unify_gen__Ms_18, ll_backend__unify_gen__Ts_20, &ll_backend__unify_gen__CodeB_25, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__STATE_VARIABLE_CLD_28_28, ll_backend__unify_gen__STATE_VARIABLE_CLD_8);
                    }
                    if (ll_backend__unify_gen__succeeded)
                      {
                        ll_backend__unify_gen__TypeCtorInfo_31_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                        {
                          *ll_backend__unify_gen__HeadVar__5_5 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_31_31, ll_backend__unify_gen__CodeA_24, ll_backend__unify_gen__CodeB_25);
                        }
                        ll_backend__unify_gen__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_unify_args_8_p_0(
  MR_Word ll_backend__unify_gen__Ls_9,
  MR_Word ll_backend__unify_gen__Rs_10,
  MR_Word ll_backend__unify_gen__Ms_11,
  MR_Word ll_backend__unify_gen__Ts_12,
  MR_Word * ll_backend__unify_gen__Code_13,
  MR_Word ll_backend__unify_gen__CI_14,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_17,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_18)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__Code0_16;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_19_19;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_unify_args_2_8_p_0(ll_backend__unify_gen__Ls_9, ll_backend__unify_gen__Rs_10, ll_backend__unify_gen__Ms_11, ll_backend__unify_gen__Ts_12, &ll_backend__unify_gen__Code0_16, ll_backend__unify_gen__CI_14, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_17, &ll_backend__unify_gen__STATE_VARIABLE_CLD_19_19);
    }
    if (ll_backend__unify_gen__succeeded)
      {
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_18 = ll_backend__unify_gen__STATE_VARIABLE_CLD_19_19;
        *ll_backend__unify_gen__Code_13 = ll_backend__unify_gen__Code0_16;
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

static void MR_CALL 
ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(
  MR_Word ll_backend__unify_gen__Var_11,
  MR_Word ll_backend__unify_gen__Tag_12,
  MR_Word ll_backend__unify_gen__Args_13,
  MR_Word ll_backend__unify_gen__Modes_14,
  MR_Word ll_backend__unify_gen__ArgWidths_15,
  MR_Word * ll_backend__unify_gen__Code_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_27,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_28,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_29,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_30)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__TypeCtorInfo_42_42;
    MR_Word ll_backend__unify_gen__VarType_19;
    MR_Word ll_backend__unify_gen__CheaperTagTest_20;
    MR_Word ll_backend__unify_gen__SuccLabel_21;
    MR_Word ll_backend__unify_gen__TagTestCode_22;
    MR_Word ll_backend__unify_gen__AfterUnify_23;
    MR_Word ll_backend__unify_gen__FailCode_24;
    MR_Word ll_backend__unify_gen__DeconsCode_25;
    MR_Word ll_backend__unify_gen__SuccessLabelCode_26;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_32_32;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_33_33;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_35_35;
    MR_Word ll_backend__unify_gen__Var_37;
    MR_Word ll_backend__unify_gen__Var_38;
    MR_Word ll_backend__unify_gen__Var_40;
    MR_Word ll_backend__unify_gen__Var_41;
    MR_Word ll_backend__unify_gen__ModuleInfo_53;
    MR_Word ll_backend__unify_gen__Tag_54;

    {
      ll_backend__unify_gen__VarType_19 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_27, ll_backend__unify_gen__Var_11);
    }
    {
      ll_backend__unify_gen__CheaperTagTest_20 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_27, ll_backend__unify_gen__VarType_19);
    }
    {
      ll_backend__unify_gen__generate_tag_test_10_p_0(ll_backend__unify_gen__Var_11, ll_backend__unify_gen__Tag_12, ll_backend__unify_gen__CheaperTagTest_20, (MR_Integer) 0, &ll_backend__unify_gen__SuccLabel_21, &ll_backend__unify_gen__TagTestCode_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_27, &ll_backend__unify_gen__STATE_VARIABLE_CI_32_32, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_29, &ll_backend__unify_gen__STATE_VARIABLE_CLD_33_33);
    }
    {
      ll_backend__code_loc_dep__remember_position_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_33_33, &ll_backend__unify_gen__AfterUnify_23);
    }
    {
      ll_backend__code_loc_dep__generate_failure_4_p_0(&ll_backend__unify_gen__FailCode_24, ll_backend__unify_gen__STATE_VARIABLE_CI_32_32, ll_backend__unify_gen__STATE_VARIABLE_CI_28, ll_backend__unify_gen__STATE_VARIABLE_CLD_33_33);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__unify_gen__AfterUnify_23, *ll_backend__unify_gen__STATE_VARIABLE_CI_28, &ll_backend__unify_gen__STATE_VARIABLE_CLD_35_35);
    }
    {
      ll_backend__code_info__get_module_info_2_p_0(*ll_backend__unify_gen__STATE_VARIABLE_CI_28, &ll_backend__unify_gen__ModuleInfo_53);
    }
    {
      ll_backend__unify_gen__Tag_54 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_53, ll_backend__unify_gen__Tag_12);
    }
    {
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(ll_backend__unify_gen__Var_11, ll_backend__unify_gen__Args_13, ll_backend__unify_gen__Modes_14, ll_backend__unify_gen__ArgWidths_15, ll_backend__unify_gen__Tag_54, &ll_backend__unify_gen__DeconsCode_25, *ll_backend__unify_gen__STATE_VARIABLE_CI_28, ll_backend__unify_gen__STATE_VARIABLE_CLD_35_35, ll_backend__unify_gen__STATE_VARIABLE_CLD_30);
    }
    ll_backend__unify_gen__TypeCtorInfo_42_42 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    {
      ll_backend__unify_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_38, 1) = ((MR_Box) (ll_backend__unify_gen__SuccLabel_21));
    }
    {
      ll_backend__unify_gen__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_37, 0) = ((MR_Box) (ll_backend__unify_gen__Var_38));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_37, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      ll_backend__unify_gen__SuccessLabelCode_26 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ((MR_Box) (ll_backend__unify_gen__Var_37)));
    }
    {
      ll_backend__unify_gen__Var_41 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__SuccessLabelCode_26, ll_backend__unify_gen__DeconsCode_25);
    }
    {
      ll_backend__unify_gen__Var_40 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__FailCode_24, ll_backend__unify_gen__Var_41);
    }
    {
      *ll_backend__unify_gen__Code_16 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__TagTestCode_22, ll_backend__unify_gen__Var_40);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_det_deconstruction_9_p_0(
  MR_Word ll_backend__unify_gen__Var_10,
  MR_Word ll_backend__unify_gen__Cons_11,
  MR_Word ll_backend__unify_gen__Args_12,
  MR_Word ll_backend__unify_gen__Modes_13,
  MR_Word ll_backend__unify_gen__ArgWidths_14,
  MR_Word * ll_backend__unify_gen__Code_15,
  MR_Word ll_backend__unify_gen__CI_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_20,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_21)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__ModuleInfo_18;
    MR_Word ll_backend__unify_gen__Tag_19;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_16, &ll_backend__unify_gen__ModuleInfo_18);
    }
    {
      ll_backend__unify_gen__Tag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_18, ll_backend__unify_gen__Cons_11);
    }
    {
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_116_95_100_101_99_111_110_115_116_114_117_99_116_105_111_110_95_50_95_95_91_50_93_95_48_10_p_0(ll_backend__unify_gen__Var_10, ll_backend__unify_gen__Args_12, ll_backend__unify_gen__Modes_13, ll_backend__unify_gen__ArgWidths_14, ll_backend__unify_gen__Tag_19, ll_backend__unify_gen__Code_15, ll_backend__unify_gen__CI_16, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_20, ll_backend__unify_gen__STATE_VARIABLE_CLD_21);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__make_fields_and_argvars_7_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__Rval_3,
  MR_Integer ll_backend__unify_gen__PrevOffset0_4,
  MR_Integer ll_backend__unify_gen__TagNum_5,
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
  MR_Word * ll_backend__unify_gen__HeadVar__7_7)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *ll_backend__unify_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__unify_gen__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
        MR_Word ll_backend__unify_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));

        if ((ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.make_fields_and_argvars\'/7", (MR_String) "mismatched lists");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__unify_gen__Width_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen__Widths_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__unify_gen__F_18;
            MR_Word ll_backend__unify_gen__Fs_19;
            MR_Word ll_backend__unify_gen__A_20;
            MR_Word ll_backend__unify_gen__As_21;
            MR_Integer ll_backend__unify_gen__Offset_23;
            MR_Integer ll_backend__unify_gen__PrevOffset_24;
            MR_Word ll_backend__unify_gen__Var_29;
            MR_Word ll_backend__unify_gen__Var_30;
            MR_Word ll_backend__unify_gen__Var_31;
            MR_Word ll_backend__unify_gen__Var_32;

            switch (MR_tag((MR_Word) ll_backend__unify_gen__Width_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ll_backend__unify_gen__Width_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__unify_gen__Offset_23 = (ll_backend__unify_gen__PrevOffset0_4 + (MR_Integer) 1);
                      ll_backend__unify_gen__PrevOffset_24 = ll_backend__unify_gen__Offset_23;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__unify_gen__Offset_23 = (ll_backend__unify_gen__PrevOffset0_4 + (MR_Integer) 1);
                      ll_backend__unify_gen__PrevOffset_24 = (ll_backend__unify_gen__Offset_23 + (MR_Integer) 1);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__unify_gen__Offset_23 = (ll_backend__unify_gen__PrevOffset0_4 + (MR_Integer) 1);
                  ll_backend__unify_gen__PrevOffset_24 = ll_backend__unify_gen__Offset_23;
                }
                break;
              case (MR_Integer) 2:
                {
                  ll_backend__unify_gen__Offset_23 = ll_backend__unify_gen__PrevOffset0_4;
                  ll_backend__unify_gen__PrevOffset_24 = ll_backend__unify_gen__Offset_23;
                }
                break;
            }
            {
              ll_backend__unify_gen__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_30, 0) = ((MR_Box) (ll_backend__unify_gen__TagNum_5));
            }
            {
              ll_backend__unify_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_32, 0) = ((MR_Box) (ll_backend__unify_gen__Offset_23));
            }
            {
              ll_backend__unify_gen__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_31, 1) = ((MR_Box) (ll_backend__unify_gen__Var_32));
            }
            {
              ll_backend__unify_gen__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_29, 1) = ((MR_Box) (ll_backend__unify_gen__Var_30));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_29, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_3));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_29, 3) = ((MR_Box) (ll_backend__unify_gen__Var_31));
            }
            {
              ll_backend__unify_gen__F_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__F_18, 0) = ((MR_Box) (ll_backend__unify_gen__Var_29));
              MR_hl_field(MR_mktag(1), ll_backend__unify_gen__F_18, 1) = ((MR_Box) (ll_backend__unify_gen__Width_13));
            }
            {
              ll_backend__unify_gen__A_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__unify_gen__A_20, 0) = ((MR_Box) (ll_backend__unify_gen__Var_56));
            }
            {
              ll_backend__unify_gen__make_fields_and_argvars_7_p_0(ll_backend__unify_gen__Var_55, ll_backend__unify_gen__Widths_14, ll_backend__unify_gen__Rval_3, ll_backend__unify_gen__PrevOffset_24, ll_backend__unify_gen__TagNum_5, &ll_backend__unify_gen__Fs_19, &ll_backend__unify_gen__As_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__unify_gen__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__F_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__Fs_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__unify_gen__HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__A_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__As_21));
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__var_types_3_p_0(
  MR_Word ll_backend__unify_gen__CI_4,
  MR_Word ll_backend__unify_gen__Vars_5,
  MR_Word * ll_backend__unify_gen__Types_6)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__ProcInfo_7;
    MR_Word ll_backend__unify_gen__VarTypes_8;

    {
      ll_backend__code_info__get_proc_info_2_p_0(ll_backend__unify_gen__CI_4, &ll_backend__unify_gen__ProcInfo_7);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__unify_gen__ProcInfo_7, &ll_backend__unify_gen__VarTypes_8);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__unify_gen__VarTypes_8, ll_backend__unify_gen__Vars_5, ll_backend__unify_gen__Types_6);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__CellVar_2,
  MR_Integer ll_backend__unify_gen__CellPtag_3,
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_5,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_6)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_6 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_5;
      }
    else
      {
        MR_Word ll_backend__unify_gen__FieldAddr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__FieldAddrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__ThisCode_16;
        MR_Word ll_backend__unify_gen__RestCode_17;
        MR_Integer ll_backend__unify_gen__FieldNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_12, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_12, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__FieldNumRval_21;
        MR_Word ll_backend__unify_gen__Addr_22;
        MR_Word ll_backend__unify_gen__Var_25;
        MR_Word ll_backend__unify_gen__Var_26;
        MR_Word ll_backend__unify_gen__Var_27;
        MR_Word ll_backend__unify_gen__Var_28;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_29_29;

        {
          ll_backend__unify_gen__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_25, 0) = ((MR_Box) (ll_backend__unify_gen__FieldNum_19));
        }
        {
          ll_backend__unify_gen__FieldNumRval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldNumRval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldNumRval_21, 1) = ((MR_Box) (ll_backend__unify_gen__Var_25));
        }
        {
          ll_backend__unify_gen__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_27, 0) = ((MR_Box) (ll_backend__unify_gen__CellVar_2));
        }
        {
          ll_backend__unify_gen__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_28, 0) = ((MR_Box) (ll_backend__unify_gen__CellPtag_3));
        }
        {
          ll_backend__unify_gen__Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_26, 0) = ((MR_Box) (ll_backend__unify_gen__Var_27));
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_26, 1) = ((MR_Box) (ll_backend__unify_gen__Var_28));
          MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_26, 2) = ((MR_Box) (ll_backend__unify_gen__FieldNumRval_21));
        }
        {
          ll_backend__unify_gen__Addr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Addr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Addr_22, 1) = ((MR_Box) (ll_backend__unify_gen__Var_26));
        }
        {
          ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__Var_20, ll_backend__unify_gen__Addr_22, &ll_backend__unify_gen__ThisCode_16, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_5, &ll_backend__unify_gen__STATE_VARIABLE_CLD_29_29);
        }
        {
          ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(ll_backend__unify_gen__FieldAddrs_13, ll_backend__unify_gen__CellVar_2, ll_backend__unify_gen__CellPtag_3, &ll_backend__unify_gen__RestCode_17, ll_backend__unify_gen__STATE_VARIABLE_CLD_29_29, ll_backend__unify_gen__STATE_VARIABLE_CLD_6);
        }
        {
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__ThisCode_16, ll_backend__unify_gen__RestCode_17);
        }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_field_addr_5_p_0(
  MR_Word ll_backend__unify_gen__CellArg_6,
  MR_Integer ll_backend__unify_gen__ArgOffset_7,
  MR_Integer * ll_backend__unify_gen__NextOffset_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    switch (MR_tag((MR_Word) ll_backend__unify_gen__CellArg_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 1);
          *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 1);
          *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16;
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 2);
          *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__unify_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_6, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__FieldAddr_15;
          MR_Word ll_backend__unify_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_6, (MR_Integer) 1)));

          *ll_backend__unify_gen__NextOffset_8 = (ll_backend__unify_gen__ArgOffset_7 + (MR_Integer) 1);
          {
            ll_backend__unify_gen__FieldAddr_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_15, 0) = ((MR_Box) (ll_backend__unify_gen__ArgOffset_7));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__FieldAddr_15, 1) = ((MR_Box) (ll_backend__unify_gen__Var_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__FieldAddr_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_RevFieldAddrs_0_16));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__maybe_add_alloc_site_info_6_p_0(
  MR_Word ll_backend__unify_gen__Context_7,
  MR_String ll_backend__unify_gen__VarTypeMsg_8,
  MR_Integer ll_backend__unify_gen__Size_9,
  MR_Word * ll_backend__unify_gen__MaybeAllocId_10,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_15,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_16)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__Globals_12;
    MR_Word ll_backend__unify_gen__ProfileMemory_13;

    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_15, &ll_backend__unify_gen__Globals_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_12, (MR_Integer) 203, &ll_backend__unify_gen__ProfileMemory_13);
    }
    switch (ll_backend__unify_gen__ProfileMemory_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__unify_gen__MaybeAllocId_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__unify_gen__STATE_VARIABLE_CI_16 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__unify_gen__AllocId_14;

          {
            ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_7, ll_backend__unify_gen__VarTypeMsg_8, ll_backend__unify_gen__Size_9, &ll_backend__unify_gen__AllocId_14, ll_backend__unify_gen__STATE_VARIABLE_CI_0_15, ll_backend__unify_gen__STATE_VARIABLE_CI_16);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__unify_gen__MaybeAllocId_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__AllocId_14));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Integer ll_backend__unify_gen__conv1_NextOffset_8;
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17;

    {
      ll_backend__unify_gen__generate_field_addr_5_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_NextOffset_8, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17);
    }
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_NextOffset_8));
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_RevFieldAddrs_17));
  }
}

static void MR_CALL 
ll_backend__unify_gen__construct_cell_12_p_0(
  MR_Word ll_backend__unify_gen__Var_13,
  MR_Integer ll_backend__unify_gen__Ptag_14,
  MR_Word ll_backend__unify_gen__CellArgs_15,
  MR_Word ll_backend__unify_gen__HowToConstruct_16,
  MR_Word ll_backend__unify_gen__MaybeSize_17,
  MR_Word ll_backend__unify_gen__Context_18,
  MR_Word ll_backend__unify_gen__MayUseAtomic_19,
  MR_Word * ll_backend__unify_gen__Code_20,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_35,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_36,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_37,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_38)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__VarType_23;
    MR_String ll_backend__unify_gen__VarTypeMsg_24;
    MR_Word ll_backend__unify_gen__ReserveWordAtStart_27;
    MR_Integer ll_backend__unify_gen__Size_28;
    MR_Word ll_backend__unify_gen__MaybeAllocId_29;
    MR_Word ll_backend__unify_gen__CellCode_30;
    MR_Word ll_backend__unify_gen__FieldAddrs_31;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_39_39;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_41_41;
    MR_Word ll_backend__unify_gen__TypeCtor_46;
    MR_Word ll_backend__unify_gen__TypeSym_47;
    MR_Integer ll_backend__unify_gen__TypeArity_48;
    MR_String ll_backend__unify_gen__TypeSymStr_49;
    MR_String ll_backend__unify_gen__TypeArityStr_50;
    MR_Word ll_backend__unify_gen__Var_51;
    MR_Word ll_backend__unify_gen__Var_52;
    MR_Word ll_backend__unify_gen__Var_54;
    MR_Word ll_backend__unify_gen__Globals_63;
    MR_Word ll_backend__unify_gen__ProfileMemory_64;
    MR_Word ll_backend__unify_gen__RevFieldAddrs_71;
    MR_Word ll_backend__unify_gen__Globals_25;
    MR_Word ll_backend__unify_gen__GCMethod_26;
    MR_Integer ll_backend__unify_gen__Var_70;
    MR_Box ll_backend__unify_gen__conv3_Var_70;
    MR_Box ll_backend__unify_gen__conv2_RevFieldAddrs_71;

    {
      ll_backend__unify_gen__VarType_23 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_35, ll_backend__unify_gen__Var_13);
    }
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(ll_backend__unify_gen__VarType_23, &ll_backend__unify_gen__TypeCtor_46);
    }
    ll_backend__unify_gen__TypeSym_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypeCtor_46, (MR_Integer) 0)));
    ll_backend__unify_gen__TypeArity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__TypeCtor_46, (MR_Integer) 1)));
    {
      ll_backend__unify_gen__TypeSymStr_49 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__unify_gen__TypeSym_47);
    }
    {
      mercury__string__int_to_string_2_p_0(ll_backend__unify_gen__TypeArity_48, &ll_backend__unify_gen__TypeArityStr_50);
    }
    {
      ll_backend__unify_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_54, 0) = ((MR_Box) (ll_backend__unify_gen__TypeArityStr_50));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__unify_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_52, 0) = ((MR_Box) ((MR_String) "/"));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_52, 1) = ((MR_Box) (ll_backend__unify_gen__Var_54));
    }
    {
      ll_backend__unify_gen__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_51, 0) = ((MR_Box) (ll_backend__unify_gen__TypeSymStr_49));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_51, 1) = ((MR_Box) (ll_backend__unify_gen__Var_52));
    }
    {
      mercury__string__append_list_2_p_0(ll_backend__unify_gen__Var_51, &ll_backend__unify_gen__VarTypeMsg_24);
    }
    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_35, &ll_backend__unify_gen__Globals_25);
    }
    {
      libs__globals__get_gc_method_2_p_0(ll_backend__unify_gen__Globals_25, &ll_backend__unify_gen__GCMethod_26);
    }
    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__GCMethod_26 == (MR_Integer) 5);
    if (ll_backend__unify_gen__succeeded)
      {
        ll_backend__unify_gen__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(ll_backend__unify_gen__VarType_23);
      }
    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__ReserveWordAtStart_27 = (MR_Integer) 1;
    else
      ll_backend__unify_gen__ReserveWordAtStart_27 = (MR_Integer) 0;
    {
      ll_backend__unify_gen__Size_28 = ll_backend__code_util__size_of_cell_args_1_f_0(ll_backend__unify_gen__CellArgs_15);
    }
    {
      ll_backend__code_info__get_globals_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_35, &ll_backend__unify_gen__Globals_63);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_63, (MR_Integer) 203, &ll_backend__unify_gen__ProfileMemory_64);
    }
    switch (ll_backend__unify_gen__ProfileMemory_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__unify_gen__MaybeAllocId_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ll_backend__unify_gen__STATE_VARIABLE_CI_39_39 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__unify_gen__AllocId_65;

          {
            ll_backend__code_info__add_alloc_site_info_6_p_0(ll_backend__unify_gen__Context_18, ll_backend__unify_gen__VarTypeMsg_24, ll_backend__unify_gen__Size_28, &ll_backend__unify_gen__AllocId_65, ll_backend__unify_gen__STATE_VARIABLE_CI_0_35, &ll_backend__unify_gen__STATE_VARIABLE_CI_39_39);
          }
          {
            ll_backend__unify_gen__MaybeAllocId_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeAllocId_29, 0) = ((MR_Box) (ll_backend__unify_gen__AllocId_65));
          }
        }
        break;
    }
    {
      ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(ll_backend__unify_gen__Var_13, ll_backend__unify_gen__ReserveWordAtStart_27, ll_backend__unify_gen__Ptag_14, ll_backend__unify_gen__CellArgs_15, ll_backend__unify_gen__HowToConstruct_16, ll_backend__unify_gen__MaybeSize_17, ll_backend__unify_gen__MaybeAllocId_29, ll_backend__unify_gen__MayUseAtomic_19, &ll_backend__unify_gen__CellCode_30, ll_backend__unify_gen__STATE_VARIABLE_CI_39_39, ll_backend__unify_gen__STATE_VARIABLE_CI_36, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_37, &ll_backend__unify_gen__STATE_VARIABLE_CLD_41_41);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[6], (MR_Word) &ll_backend__unify_gen_scalar_common_2[6], ll_backend__unify_gen__CellArgs_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__unify_gen__conv3_Var_70, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__unify_gen__conv2_RevFieldAddrs_71);
    }
    ll_backend__unify_gen__Var_70 = ((MR_Integer) ll_backend__unify_gen__conv3_Var_70);
    ll_backend__unify_gen__RevFieldAddrs_71 = ((MR_Word) ll_backend__unify_gen__conv2_RevFieldAddrs_71);
    {
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__unify_gen__ll_backend__unify_gen__type_ctor_info_field_addr_0, ll_backend__unify_gen__RevFieldAddrs_71, &ll_backend__unify_gen__FieldAddrs_31);
    }
    if ((ll_backend__unify_gen__FieldAddrs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__unify_gen__Code_20 = ll_backend__unify_gen__CellCode_30;
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_38 = ll_backend__unify_gen__STATE_VARIABLE_CLD_41_41;
      }
    else
      {
        MR_Word ll_backend__unify_gen__FieldCode_34;

        {
          ll_backend__unify_gen__generate_field_take_address_assigns_6_p_0(ll_backend__unify_gen__FieldAddrs_31, ll_backend__unify_gen__Var_13, ll_backend__unify_gen__Ptag_14, &ll_backend__unify_gen__FieldCode_34, ll_backend__unify_gen__STATE_VARIABLE_CLD_41_41, ll_backend__unify_gen__STATE_VARIABLE_CLD_38);
        }
        {
          *ll_backend__unify_gen__Code_20 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__CellCode_30, ll_backend__unify_gen__FieldCode_34);
        }
      }
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__condense_needs_updates_1_f_0(
  MR_Word ll_backend__unify_gen__NeedsUpdatess_3)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__HeadVar__2_2;

    {
      ll_backend__unify_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__unify_gen__NeedsUpdatess_3);
    }
    if (ll_backend__unify_gen__succeeded)
      ll_backend__unify_gen__HeadVar__2_2 = (MR_Integer) 0;
    else
      ll_backend__unify_gen__HeadVar__2_2 = (MR_Integer) 1;
    return ll_backend__unify_gen__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__unify_gen__wrapper_arg_2;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv0_HeadVar__2_2;

    {
      ll_backend__unify_gen__conv0_HeadVar__2_2 = ll_backend__unify_gen__condense_needs_updates_1_f_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1));
    }
    ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__2_2));
    return ll_backend__unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_how_to_construct_3_p_0(
  MR_Word ll_backend__unify_gen__ArgWidths_4,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    switch (MR_tag((MR_Word) ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
            break;
          case (MR_Integer) 1:
            *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__unify_gen__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
          MR_Word ll_backend__unify_gen__CellToReuse0_7 = (MR_Word) MR_body(((MR_Word) ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14), (MR_Integer) 1);
          MR_Word ll_backend__unify_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__ConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 1)));
          MR_Word ll_backend__unify_gen__NeedsUpdates0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse0_7, (MR_Integer) 2)));
          MR_Word ll_backend__unify_gen__NeedsUpdates1_11;
          MR_Word ll_backend__unify_gen__NeedsUpdates_12;
          MR_Word ll_backend__unify_gen__CellToReuse_13;

          {
            backend_libs__arg_pack__group_same_word_elements_3_p_0(ll_backend__unify_gen__TypeCtorInfo_18_18, ll_backend__unify_gen__ArgWidths_4, ll_backend__unify_gen__NeedsUpdates0_10, &ll_backend__unify_gen__NeedsUpdates1_11);
          }
          {
            ll_backend__unify_gen__NeedsUpdates_12 = mercury__list__map_2_f_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[5], ll_backend__unify_gen__TypeCtorInfo_18_18, (MR_Word) &ll_backend__unify_gen_scalar_common_2[5], ll_backend__unify_gen__NeedsUpdates1_11);
          }
          {
            ll_backend__unify_gen__CellToReuse_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 0) = ((MR_Box) (ll_backend__unify_gen__Var_8));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 1) = ((MR_Box) (ll_backend__unify_gen__ConsIds_9));
            MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CellToReuse_13, 2) = ((MR_Box) (ll_backend__unify_gen__NeedsUpdates_12));
          }
          *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ll_backend__unify_gen__CellToReuse_13);
        }
        break;
      case (MR_Integer) 2:
        *ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_15 = ll_backend__unify_gen__STATE_VARIABLE_HowToConstruct_0_14;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box ll_backend__unify_gen__wrapper_arg_3,
  MR_Box * ll_backend__unify_gen__wrapper_arg_4,
  MR_Box ll_backend__unify_gen__wrapper_arg_5,
  MR_Box * ll_backend__unify_gen__wrapper_arg_6,
  MR_Box ll_backend__unify_gen__wrapper_arg_7,
  MR_Box * ll_backend__unify_gen__wrapper_arg_8)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv2_FinalCellArg_14;
    MR_Word ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_31;
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_CLD_33;

    {
      ll_backend__unify_gen__shift_combine_arg_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Integer) ll_backend__unify_gen__wrapper_arg_2), ((MR_Word) ll_backend__unify_gen__wrapper_arg_3), &ll_backend__unify_gen__conv2_FinalCellArg_14, ((MR_Word) ll_backend__unify_gen__wrapper_arg_5), &ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_31, ((MR_Word) ll_backend__unify_gen__wrapper_arg_7), &ll_backend__unify_gen__conv0_STATE_VARIABLE_CLD_33);
    }
    *ll_backend__unify_gen__wrapper_arg_4 = ((MR_Box) (ll_backend__unify_gen__conv2_FinalCellArg_14));
    *ll_backend__unify_gen__wrapper_arg_6 = ((MR_Box) (ll_backend__unify_gen__conv1_STATE_VARIABLE_Code_31));
    *ll_backend__unify_gen__wrapper_arg_8 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_CLD_33));
  }
}

static void MR_CALL 
ll_backend__unify_gen__pack_cell_rvals_7_p_0(
  MR_Word ll_backend__unify_gen__ArgWidths_8,
  MR_Word ll_backend__unify_gen__CellArgs0_9,
  MR_Word * ll_backend__unify_gen__CellArgs_10,
  MR_Word * ll_backend__unify_gen__Code_11,
  MR_Word ll_backend__unify_gen__CI_12,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_14,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_15)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__Var_16;
    MR_Word ll_backend__unify_gen__Var_17;
    MR_Box ll_backend__unify_gen__conv4_Code_11;
    MR_Box ll_backend__unify_gen__conv3_STATE_VARIABLE_CLD_15;

    {
      ll_backend__unify_gen__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_16, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_16, 1) = ((MR_Box) (ll_backend__unify_gen__pack_cell_rvals_7_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_16, 3) = ((MR_Box) (ll_backend__unify_gen__CI_12));
    }
    {
      ll_backend__unify_gen__Var_17 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
    {
      backend_libs__arg_pack__pack_args_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0, (MR_Word) &ll_backend__unify_gen_scalar_common_1[4], (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, ll_backend__unify_gen__Var_16, ll_backend__unify_gen__ArgWidths_8, ll_backend__unify_gen__CellArgs0_9, ll_backend__unify_gen__CellArgs_10, ((MR_Box) (ll_backend__unify_gen__Var_17)), &ll_backend__unify_gen__conv4_Code_11, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_CLD_0_14)), &ll_backend__unify_gen__conv3_STATE_VARIABLE_CLD_15);
    }
    *ll_backend__unify_gen__Code_11 = ((MR_Word) ll_backend__unify_gen__conv4_Code_11);
    *ll_backend__unify_gen__STATE_VARIABLE_CLD_15 = ((MR_Word) ll_backend__unify_gen__conv3_STATE_VARIABLE_CLD_15);
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__initial_may_use_atomic_1_f_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_3)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__InitMayUseAtomic_4;
    MR_Word ll_backend__unify_gen__Globals_5;
    MR_Word ll_backend__unify_gen__UseAtomicCells_6;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_3, &ll_backend__unify_gen__Globals_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_5, (MR_Integer) 458, &ll_backend__unify_gen__UseAtomicCells_6);
    }
    switch (ll_backend__unify_gen__UseAtomicCells_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__unify_gen__InitMayUseAtomic_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__unify_gen__InitMayUseAtomic_4 = (MR_Integer) 0;
        break;
    }
    return ll_backend__unify_gen__InitMayUseAtomic_4;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_cons_args_2_10_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__HeadVar__2_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
  MR_Integer ll_backend__unify_gen__HeadVar__5_5,
  MR_Word ll_backend__unify_gen__HeadVar__6_6,
  MR_Word ll_backend__unify_gen__HeadVar__7_7,
  MR_Word * ll_backend__unify_gen__HeadVar__8_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (ll_backend__unify_gen__succeeded)
                  {
                    *ll_backend__unify_gen__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9;
                    ll_backend__unify_gen__succeeded = MR_TRUE;
                  }
              }
          }
      }
    else
      {
        MR_Word ll_backend__unify_gen__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Type_19;
        MR_Word ll_backend__unify_gen__Types_20;
        MR_Word ll_backend__unify_gen__ArgMode_21;
        MR_Word ll_backend__unify_gen__ArgModes_22;
        MR_Word ll_backend__unify_gen__Width_23;
        MR_Word ll_backend__unify_gen__Widths_24;
        MR_Word ll_backend__unify_gen__CellArg_28;
        MR_Word ll_backend__unify_gen__CellArgs_29;
        MR_Word ll_backend__unify_gen__ModuleInfo_31;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_43_43;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_44_44;
        MR_Integer ll_backend__unify_gen__Var_61;

        ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__unify_gen__succeeded)
          {
            ll_backend__unify_gen__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__unify_gen__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__2_2, (MR_Integer) 1)));
            ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__unify_gen__succeeded)
              {
                ll_backend__unify_gen__ArgMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));
                ll_backend__unify_gen__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__unify_gen__succeeded)
                  {
                    ll_backend__unify_gen__Width_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
                    ll_backend__unify_gen__Widths_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
                    {
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__ModuleInfo_31);
                    }
                    {
                      check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__Type_19, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_9, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_43_43);
                    }
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__6_6)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__unify_gen__succeeded)
                      {
                        ll_backend__unify_gen__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__6_6, (MR_Integer) 0)));
                        ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__6_6, (MR_Integer) 1)));
                        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__HeadVar__5_5 == ll_backend__unify_gen__Var_61);
                      }
                    if (ll_backend__unify_gen__succeeded)
                      {
                        MR_Word ll_backend__unify_gen__LCMCNull_32;
                        MR_Word ll_backend__unify_gen__MaybeNull_33;
                        MR_Integer ll_backend__unify_gen__Var_49;

                        {
                          ll_backend__code_info__get_lcmc_null_2_p_0(ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__LCMCNull_32);
                        }
                        switch (ll_backend__unify_gen__LCMCNull_32) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ll_backend__unify_gen__MaybeNull_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            break;
                          case (MR_Integer) 1:
                            {
                              ll_backend__unify_gen__MaybeNull_33 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[2]);
                            }
                            break;
                        }
                        ll_backend__unify_gen__Var_49 = (ll_backend__unify_gen__HeadVar__5_5 + (MR_Integer) 1);
                        {
                          ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
                          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__CellArg_28, 1) = ((MR_Box) (ll_backend__unify_gen__MaybeNull_33));
                        }
                        {
                          ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_18, ll_backend__unify_gen__Types_20, ll_backend__unify_gen__ArgModes_22, ll_backend__unify_gen__Widths_24, ll_backend__unify_gen__Var_49, ll_backend__unify_gen__STATE_VARIABLE_TakeAddr_44_44, ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__CellArgs_29, (MR_Integer) 1, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);
                        }
                      }
                    else
                      {
                        MR_Word ll_backend__unify_gen__RHSInsts_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgMode_21, (MR_Integer) 1)));
                        MR_Word ll_backend__unify_gen__RHSTopFunctorMode_36;
                        MR_Integer ll_backend__unify_gen__Var_55;
                        MR_Word ll_backend__unify_gen___LHSMode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgMode_21, (MR_Integer) 0)));

                        {
                          check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(ll_backend__unify_gen__ModuleInfo_31, ll_backend__unify_gen__RHSInsts_35, ll_backend__unify_gen__Type_19, &ll_backend__unify_gen__RHSTopFunctorMode_36);
                        }
                        switch (ll_backend__unify_gen__RHSTopFunctorMode_36) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_tag((MR_Word) ll_backend__unify_gen__Width_23)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                switch (MR_unmkbody(ll_backend__unify_gen__Width_23)) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      MR_Word ll_backend__unify_gen__Var_53;

                                      {
                                        ll_backend__unify_gen__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_53, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
                                      }
                                      {
                                        ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__Var_53));
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 1) = ((MR_Box) ((MR_Integer) 0));
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word ll_backend__unify_gen__Var_52;

                                      {
                                        ll_backend__unify_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_52, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
                                      }
                                      {
                                        ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(2), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__Var_52));
                                      }
                                    }
                                    break;
                                }
                                break;
                              case (MR_Integer) 1:
                              case (MR_Integer) 2:
                                {
                                  MR_Word ll_backend__unify_gen__Var_53;

                                  {
                                    ll_backend__unify_gen__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_53, 0) = ((MR_Box) (ll_backend__unify_gen__Var_17));
                                  }
                                  {
                                    ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 0) = ((MR_Box) (ll_backend__unify_gen__Var_53));
                                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_28, 1) = ((MR_Box) ((MR_Integer) 0));
                                  }
                                }
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            ll_backend__unify_gen__CellArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            break;
                        }
                        ll_backend__unify_gen__Var_55 = (ll_backend__unify_gen__HeadVar__5_5 + (MR_Integer) 1);
                        {
                          ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_18, ll_backend__unify_gen__Types_20, ll_backend__unify_gen__ArgModes_22, ll_backend__unify_gen__Widths_24, ll_backend__unify_gen__Var_55, ll_backend__unify_gen__HeadVar__6_6, ll_backend__unify_gen__HeadVar__7_7, &ll_backend__unify_gen__CellArgs_29, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_43_43, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_10);
                        }
                      }
                    if (ll_backend__unify_gen__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__unify_gen__HeadVar__8_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_28));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__CellArgs_29));
                        }
                        ll_backend__unify_gen__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_cons_args_8_p_0(
  MR_Word ll_backend__unify_gen__Vars_9,
  MR_Word ll_backend__unify_gen__Types_10,
  MR_Word ll_backend__unify_gen__Modes_11,
  MR_Word ll_backend__unify_gen__Widths_12,
  MR_Word ll_backend__unify_gen__TakeAddr_13,
  MR_Word ll_backend__unify_gen__CI_14,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_Args_19,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__ModuleInfo_17;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21;
    MR_Word ll_backend__unify_gen__Globals_31;
    MR_Word ll_backend__unify_gen__UseAtomicCells_32;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_Args_22_22;
    MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_14, &ll_backend__unify_gen__ModuleInfo_17);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_17, &ll_backend__unify_gen__Globals_31);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_31, (MR_Integer) 458, &ll_backend__unify_gen__UseAtomicCells_32);
    }
    switch (ll_backend__unify_gen__UseAtomicCells_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21 = (MR_Integer) 0;
        break;
    }
    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__generate_cons_args_2_10_p_0(ll_backend__unify_gen__Vars_9, ll_backend__unify_gen__Types_10, ll_backend__unify_gen__Modes_11, ll_backend__unify_gen__Widths_12, (MR_Integer) 1, ll_backend__unify_gen__TakeAddr_13, ll_backend__unify_gen__CI_14, &ll_backend__unify_gen__STATE_VARIABLE_Args_22_22, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_21_21, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23);
    }
    if (ll_backend__unify_gen__succeeded)
      {
        *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_20 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_23_23;
        *ll_backend__unify_gen__STATE_VARIABLE_Args_19 = ll_backend__unify_gen__STATE_VARIABLE_Args_22_22;
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

static void MR_CALL 
ll_backend__unify_gen__generate_pred_args_8_p_0(
  MR_Word ll_backend__unify_gen__CI_1,
  MR_Word ll_backend__unify_gen__VarTypes_2,
  MR_Word ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__HeadVar__4_4,
  MR_Word * ll_backend__unify_gen__HeadVar__5_5,
  MR_Word * ll_backend__unify_gen__HeadVar__6_6,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if ((ll_backend__unify_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__unify_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__unify_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8 = ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7;
      }
    else
      {
        MR_Word ll_backend__unify_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__3_3, (MR_Integer) 0)));

        if ((ll_backend__unify_gen__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_pred_args\'/8", (MR_String) "insufficient args");
              return;
            }
          }
        else
          {
            MR_Word ll_backend__unify_gen__ArgInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen__ArgInfos_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word ll_backend__unify_gen__RegType_36;
            MR_Word ll_backend__unify_gen__ArgMode_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgInfo_31, (MR_Integer) 1)));
            MR_Word ll_backend__unify_gen__CellArg_41;
            MR_Word ll_backend__unify_gen__Type_42;
            MR_Word ll_backend__unify_gen__ModuleInfo_43;
            MR_Word ll_backend__unify_gen__ArgsR0_44;
            MR_Word ll_backend__unify_gen__ArgsF0_45;
            MR_Word ll_backend__unify_gen__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ArgInfo_31, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52;
            MR_Integer ll_backend__unify_gen__Var_37;

            ll_backend__unify_gen__RegType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_48, (MR_Integer) 0)));
            ll_backend__unify_gen__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_48, (MR_Integer) 1)));
            switch (ll_backend__unify_gen__ArgMode_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__unify_gen__IsDummy_39;
                  MR_Word ll_backend__unify_gen__Rval_40;

                  {
                    ll_backend__unify_gen__IsDummy_39 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__CI_1, ll_backend__unify_gen__Var_55);
                  }
                  switch (ll_backend__unify_gen__IsDummy_39) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ll_backend__unify_gen__Rval_40 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__unify_gen__Rval_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Rval_40, 0) = ((MR_Box) (ll_backend__unify_gen__Var_55));
                      }
                      break;
                  }
                  {
                    ll_backend__unify_gen__CellArg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_41, 0) = ((MR_Box) (ll_backend__unify_gen__Rval_40));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArg_41, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                ll_backend__unify_gen__CellArg_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(ll_backend__unify_gen__VarTypes_2, ll_backend__unify_gen__Var_55, &ll_backend__unify_gen__Type_42);
            }
            {
              ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__CI_1, &ll_backend__unify_gen__ModuleInfo_43);
            }
            {
              check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ll_backend__unify_gen__ModuleInfo_43, ll_backend__unify_gen__Type_42, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_0_7, &ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52);
            }
            {
              ll_backend__unify_gen__generate_pred_args_8_p_0(ll_backend__unify_gen__CI_1, ll_backend__unify_gen__VarTypes_2, ll_backend__unify_gen__Var_54, ll_backend__unify_gen__ArgInfos_32, &ll_backend__unify_gen__ArgsR0_44, &ll_backend__unify_gen__ArgsF0_45, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_52_52, ll_backend__unify_gen__STATE_VARIABLE_MayUseAtomic_8);
            }
            switch (ll_backend__unify_gen__RegType_36) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *ll_backend__unify_gen__HeadVar__5_5 = ll_backend__unify_gen__ArgsR0_44;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__unify_gen__HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_41));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsF0_45));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__unify_gen__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__unify_gen__CellArg_41));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__unify_gen__ArgsR0_44));
                  }
                  *ll_backend__unify_gen__HeadVar__6_6 = ll_backend__unify_gen__ArgsF0_45;
                }
                break;
            }
          }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_extra_closure_args_7_p_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1,
  MR_Word ll_backend__unify_gen__LoopCounter_2,
  MR_Word ll_backend__unify_gen__NewClosure_3,
  MR_Word * ll_backend__unify_gen__HeadVar__4_4,
  MR_Word ll_backend__unify_gen__HeadVar__5_5,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_7)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    if ((ll_backend__unify_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        }
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_7 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6;
      }
    else
      {
        MR_Word ll_backend__unify_gen__TypeCtorInfo_59_59;
        MR_Word ll_backend__unify_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Vars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__FieldLval_21;
        MR_Word ll_backend__unify_gen__IsDummy_22;
        MR_Word ll_backend__unify_gen__ProduceCode_23;
        MR_Word ll_backend__unify_gen__AssignCode_24;
        MR_Word ll_backend__unify_gen__IncrCode_26;
        MR_Word ll_backend__unify_gen__VarsCode_27;
        MR_Word ll_backend__unify_gen__Var_32;
        MR_Word ll_backend__unify_gen__Var_33;
        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_34_34;
        MR_Word ll_backend__unify_gen__Var_44;
        MR_Word ll_backend__unify_gen__Var_45;
        MR_Word ll_backend__unify_gen__Var_46;
        MR_Word ll_backend__unify_gen__Var_54;
        MR_Word ll_backend__unify_gen__Var_55;

        {
          ll_backend__unify_gen__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_32, 0) = ((MR_Box) (ll_backend__unify_gen__NewClosure_3));
        }
        {
          ll_backend__unify_gen__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_33, 0) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_2));
        }
        {
          ll_backend__unify_gen__FieldLval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_scalar_common_6[0])));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_21, 2) = ((MR_Box) (ll_backend__unify_gen__Var_32));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__FieldLval_21, 3) = ((MR_Box) (ll_backend__unify_gen__Var_33));
        }
        {
          ll_backend__unify_gen__IsDummy_22 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__HeadVar__5_5, ll_backend__unify_gen__Var_14);
        }
        switch (ll_backend__unify_gen__IsDummy_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__unify_gen__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              MR_Word ll_backend__unify_gen__Var_38;
              MR_Word ll_backend__unify_gen__Var_39;

              {
                ll_backend__unify_gen__ProduceCode_23 = mercury__cord__empty_0_f_0(ll_backend__unify_gen__TypeCtorInfo_57_57);
              }
              {
                ll_backend__unify_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_39, 1) = ((MR_Box) (ll_backend__unify_gen__FieldLval_21));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
              }
              {
                ll_backend__unify_gen__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_38, 0) = ((MR_Box) (ll_backend__unify_gen__Var_39));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_38, 1) = ((MR_Box) ((MR_String) "set new argument field (dummy type)"));
              }
              {
                ll_backend__unify_gen__AssignCode_24 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_57_57, ((MR_Box) (ll_backend__unify_gen__Var_38)));
              }
              ll_backend__unify_gen__STATE_VARIABLE_CLD_34_34 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__unify_gen__Value_25;
              MR_Word ll_backend__unify_gen__Var_35;
              MR_Word ll_backend__unify_gen__Var_36;

              {
                ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_14, &ll_backend__unify_gen__ProduceCode_23, &ll_backend__unify_gen__Value_25, ll_backend__unify_gen__HeadVar__5_5, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_6, &ll_backend__unify_gen__STATE_VARIABLE_CLD_34_34);
              }
              {
                ll_backend__unify_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_36, 1) = ((MR_Box) (ll_backend__unify_gen__FieldLval_21));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_36, 2) = ((MR_Box) (ll_backend__unify_gen__Value_25));
              }
              {
                ll_backend__unify_gen__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_35, 0) = ((MR_Box) (ll_backend__unify_gen__Var_36));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_35, 1) = ((MR_Box) ((MR_String) "set new argument field"));
              }
              {
                ll_backend__unify_gen__AssignCode_24 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__Var_35)));
              }
            }
            break;
        }
        ll_backend__unify_gen__TypeCtorInfo_59_59 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          ll_backend__unify_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_46, 2) = ((MR_Box) (ll_backend__unify_gen__Var_33));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[9])));
        }
        {
          ll_backend__unify_gen__Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_45, 1) = ((MR_Box) (ll_backend__unify_gen__LoopCounter_2));
          MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_45, 2) = ((MR_Box) (ll_backend__unify_gen__Var_46));
        }
        {
          ll_backend__unify_gen__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_44, 0) = ((MR_Box) (ll_backend__unify_gen__Var_45));
          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_44, 1) = ((MR_Box) ((MR_String) "increment argument counter"));
        }
        {
          ll_backend__unify_gen__IncrCode_26 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_59_59, ((MR_Box) (ll_backend__unify_gen__Var_44)));
        }
        {
          ll_backend__unify_gen__generate_extra_closure_args_7_p_0(ll_backend__unify_gen__Vars_15, ll_backend__unify_gen__LoopCounter_2, ll_backend__unify_gen__NewClosure_3, &ll_backend__unify_gen__VarsCode_27, ll_backend__unify_gen__HeadVar__5_5, ll_backend__unify_gen__STATE_VARIABLE_CLD_34_34, ll_backend__unify_gen__STATE_VARIABLE_CLD_7);
        }
        {
          ll_backend__unify_gen__Var_55 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_59_59, ll_backend__unify_gen__IncrCode_26, ll_backend__unify_gen__VarsCode_27);
        }
        {
          ll_backend__unify_gen__Var_54 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_59_59, ll_backend__unify_gen__AssignCode_24, ll_backend__unify_gen__Var_55);
        }
        {
          *ll_backend__unify_gen__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_59_59, ll_backend__unify_gen__ProduceCode_23, ll_backend__unify_gen__Var_54);
        }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_9(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__645__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_8(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__673__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_7(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__700__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_6(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__708__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_5(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__562__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_4(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__683__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_3(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__723__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_2(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__721__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__generate_construction_2__655__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_construction_2_14_p_0(
  MR_Word ll_backend__unify_gen__ConsTag_15,
  MR_Word ll_backend__unify_gen__LHSVar_16,
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__ArgModes_18,
  MR_Word ll_backend__unify_gen__ArgWidths_19,
  MR_Word ll_backend__unify_gen__HowToConstruct0_20,
  MR_Word ll_backend__unify_gen__TakeAddr_21,
  MR_Word ll_backend__unify_gen__MaybeSize_22,
  MR_Word ll_backend__unify_gen__GoalInfo_23,
  MR_Word * ll_backend__unify_gen__Code_24,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_80,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_81,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_83)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__unify_gen__succeeded;

        switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ll_backend__unify_gen__ConsTag_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__unify_gen__ArgTypes_40;
                  MR_Word ll_backend__unify_gen__CellArgs0_41;
                  MR_Word ll_backend__unify_gen__MayUseAtomic_42;
                  MR_Word ll_backend__unify_gen__CellArgs_43;
                  MR_Word ll_backend__unify_gen__PackCode_44;
                  MR_Word ll_backend__unify_gen__HowToConstruct_45;
                  MR_Word ll_backend__unify_gen__Context_46;
                  MR_Word ll_backend__unify_gen__ConstructCode_47;
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_181_181;

                  {
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__RHSVars_17, &ll_backend__unify_gen__ArgTypes_40);
                  }
                  {
                    ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__RHSVars_17, ll_backend__unify_gen__ArgTypes_40, ll_backend__unify_gen__ArgModes_18, ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__TakeAddr_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, &ll_backend__unify_gen__CellArgs0_41, &ll_backend__unify_gen__MayUseAtomic_42);
                  }
                  {
                    ll_backend__unify_gen__pack_cell_rvals_7_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__CellArgs0_41, &ll_backend__unify_gen__CellArgs_43, &ll_backend__unify_gen__PackCode_44, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, &ll_backend__unify_gen__STATE_VARIABLE_CLD_181_181);
                  }
                  {
                    ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__HowToConstruct0_20, &ll_backend__unify_gen__HowToConstruct_45);
                  }
                  {
                    ll_backend__unify_gen__Context_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_23);
                  }
                  {
                    ll_backend__unify_gen__construct_cell_12_p_0(ll_backend__unify_gen__LHSVar_16, (MR_Integer) 0, ll_backend__unify_gen__CellArgs_43, ll_backend__unify_gen__HowToConstruct_45, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__Context_46, ll_backend__unify_gen__MayUseAtomic_42, &ll_backend__unify_gen__ConstructCode_47, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CI_81, ll_backend__unify_gen__STATE_VARIABLE_CLD_181_181, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_44, ll_backend__unify_gen__ConstructCode_47);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__unify_gen__RHSVar_34;
                  MR_Word ll_backend__unify_gen__ArgMode_35;
                  MR_Word ll_backend__unify_gen__Var_184;
                  MR_Word ll_backend__unify_gen__Var_185;

                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__RHSVars_17)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__unify_gen__succeeded)
                    {
                      ll_backend__unify_gen__RHSVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RHSVars_17, (MR_Integer) 0)));
                      ll_backend__unify_gen__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RHSVars_17, (MR_Integer) 1)));
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ll_backend__unify_gen__succeeded)
                        {
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__unify_gen__succeeded)
                            {
                              ll_backend__unify_gen__ArgMode_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgModes_18, (MR_Integer) 0)));
                              ll_backend__unify_gen__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgModes_18, (MR_Integer) 1)));
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_185 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                  if (ll_backend__unify_gen__succeeded)
                    if ((ll_backend__unify_gen__TakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word ll_backend__unify_gen__Type_36;
                        MR_Word ll_backend__unify_gen__Var_189;
                        MR_Word ll_backend__unify_gen__Var_190;

                        {
                          ll_backend__unify_gen__Type_36 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__RHSVar_34);
                        }
                        {
                          ll_backend__unify_gen__Var_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_189, 0) = ((MR_Box) (ll_backend__unify_gen__LHSVar_16));
                        }
                        {
                          ll_backend__unify_gen__Var_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_190, 0) = ((MR_Box) (ll_backend__unify_gen__RHSVar_34));
                        }
                        {
                          ll_backend__unify_gen__generate_sub_unify_8_p_0(ll_backend__unify_gen__Var_189, ll_backend__unify_gen__Var_190, ll_backend__unify_gen__ArgMode_35, ll_backend__unify_gen__Type_36, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                        }
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
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__unify_gen__String_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)));
              MR_Word ll_backend__unify_gen__Var_212;
              MR_Word ll_backend__unify_gen__Var_214;

              {
                ll_backend__unify_gen__Var_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_214, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_214, 1) = ((MR_Box) (ll_backend__unify_gen__String_27));
              }
              {
                ll_backend__unify_gen__Var_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_212, 1) = ((MR_Box) (ll_backend__unify_gen__Var_214));
              }
              {
                ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_212, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
              }
              {
                *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Float ll_backend__unify_gen__Float_33 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)));
              MR_Word ll_backend__unify_gen__Var_195;
              MR_Word ll_backend__unify_gen__Var_197;

              {
                ll_backend__unify_gen__Var_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_197, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_197, 1) = MR_box_float(ll_backend__unify_gen__Float_33);
              }
              {
                ll_backend__unify_gen__Var_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_195, 1) = ((MR_Box) (ll_backend__unify_gen__Var_197));
              }
              {
                ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_195, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
              }
              {
                *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ll_backend__unify_gen__Int_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Var_209;
                  MR_Word ll_backend__unify_gen__Var_211;

                  {
                    ll_backend__unify_gen__Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_211, 0) = ((MR_Box) (ll_backend__unify_gen__Int_28));
                  }
                  {
                    ll_backend__unify_gen__Var_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_209, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_209, 1) = ((MR_Box) (ll_backend__unify_gen__Var_211));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_209, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Unsigned ll_backend__unify_gen__UInt_29 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Var_206;
                  MR_Word ll_backend__unify_gen__Var_208;

                  {
                    ll_backend__unify_gen__Var_208 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_208, 0) = ((MR_Box) (ll_backend__unify_gen__UInt_29));
                  }
                  {
                    ll_backend__unify_gen__Var_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_206, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_206, 1) = ((MR_Box) (ll_backend__unify_gen__Var_208));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_206, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__unify_gen__Lang_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_String ll_backend__unify_gen__Val_31 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__ForeignConst_32;
                  MR_Word ll_backend__unify_gen__Var_198;
                  MR_Word ll_backend__unify_gen__Var_203;

                  {
                    ll_backend__unify_gen__Var_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_198, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_198, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_5));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_198, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_198, 3) = ((MR_Box) (ll_backend__unify_gen__Lang_30));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_198, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_198, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "foreign_tag for language other than C");
                  }
                  {
                    ll_backend__unify_gen__Var_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_203, 1) = ((MR_Box) (ll_backend__unify_gen__Val_31));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_203, 2) = ((MR_Box) ((MR_Integer) 7));
                  }
                  {
                    ll_backend__unify_gen__ForeignConst_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ForeignConst_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ForeignConst_32, 1) = ((MR_Box) (ll_backend__unify_gen__Var_203));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__ForeignConst_32, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__unify_gen__Var_84;
                  MR_Word ll_backend__unify_gen__Var_89;
                  MR_Word ll_backend__unify_gen__PredId_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__ProcId_246 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));

                  {
                    ll_backend__unify_gen__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_84, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[3]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_84, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_84, 3) = ((MR_Box) (ll_backend__unify_gen__TakeAddr_21));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_84, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_84, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "closure_tag has take_addr");
                  }
                  {
                    ll_backend__unify_gen__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_89, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[4]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_89, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_3));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_89, 3) = ((MR_Box) (ll_backend__unify_gen__MaybeSize_22));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_89, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_89, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "closure_tag has size");
                  }
                  {
                    ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(ll_backend__unify_gen__PredId_245, ll_backend__unify_gen__ProcId_246, ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__RHSVars_17, ll_backend__unify_gen__GoalInfo_23, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CI_81, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__unify_gen__ModuleName_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_String ll_backend__unify_gen__TypeName_53 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Integer ll_backend__unify_gen__TypeArity_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 3)));
                  MR_Word ll_backend__unify_gen__RttiTypeCtor_55;
                  MR_Word ll_backend__unify_gen__DataId_56;
                  MR_Word ll_backend__unify_gen__Var_148;
                  MR_Word ll_backend__unify_gen__Var_153;
                  MR_Word ll_backend__unify_gen__Var_155;
                  MR_Word ll_backend__unify_gen__Var_157;

                  {
                    ll_backend__unify_gen__Var_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_148, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_148, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_9));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_148, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_148, 3) = ((MR_Box) (ll_backend__unify_gen__RHSVars_17));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_148, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_148, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "type_ctor_info constant has args");
                  }
                  {
                    ll_backend__unify_gen__RttiTypeCtor_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_55, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_52));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_55, 1) = ((MR_Box) (ll_backend__unify_gen__TypeName_53));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiTypeCtor_55, 2) = ((MR_Box) (ll_backend__unify_gen__TypeArity_54));
                  }
                  {
                    ll_backend__unify_gen__Var_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_153, 0) = ((MR_Box) (ll_backend__unify_gen__RttiTypeCtor_55));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
                  }
                  {
                    ll_backend__unify_gen__DataId_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_56, 0) = ((MR_Box) (ll_backend__unify_gen__Var_153));
                  }
                  {
                    ll_backend__unify_gen__Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_157, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_56));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_157, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_155, 1) = ((MR_Box) (ll_backend__unify_gen__Var_157));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_155, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ll_backend__unify_gen__ClassId_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_String ll_backend__unify_gen__Instance_58 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 3)));
                  MR_Word ll_backend__unify_gen__TCName_59;
                  MR_Word ll_backend__unify_gen__Var_137;
                  MR_Word ll_backend__unify_gen__Var_142;
                  MR_Word ll_backend__unify_gen__Var_143;
                  MR_Word ll_backend__unify_gen__Var_144;
                  MR_Word ll_backend__unify_gen__Var_146;
                  MR_Word ll_backend__unify_gen__ModuleName_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__DataId_236;

                  {
                    ll_backend__unify_gen__Var_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_137, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_137, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_1));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_137, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_137, 3) = ((MR_Box) (ll_backend__unify_gen__RHSVars_17));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_137, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_137, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "base_typeclass_info constant has args");
                  }
                  {
                    ll_backend__unify_gen__TCName_59 = backend_libs__type_class_info__generate_class_name_1_f_0(ll_backend__unify_gen__ClassId_57);
                  }
                  {
                    ll_backend__unify_gen__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_143, 0) = ((MR_Box) (ll_backend__unify_gen__ModuleName_235));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_143, 1) = ((MR_Box) (ll_backend__unify_gen__Instance_58));
                  }
                  {
                    ll_backend__unify_gen__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_142, 0) = ((MR_Box) (ll_backend__unify_gen__TCName_59));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_142, 1) = ((MR_Box) (ll_backend__unify_gen__Var_143));
                  }
                  {
                    ll_backend__unify_gen__DataId_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__DataId_236, 0) = ((MR_Box) (ll_backend__unify_gen__Var_142));
                  }
                  {
                    ll_backend__unify_gen__Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_146, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_236));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_146, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_144, 1) = ((MR_Box) (ll_backend__unify_gen__Var_146));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_144, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Integer ll_backend__unify_gen__ConstNum_288 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__ConstStructMap_289;
                  MR_Word ll_backend__unify_gen__Rval_290;
                  MR_Word ll_backend__unify_gen__Var_292;
                  MR_Box ll_backend__unify_gen__conv1_Var_292;
                  MR_Word ll_backend__unify_gen___Type_287;

                  {
                    ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, &ll_backend__unify_gen__ConstStructMap_289);
                  }
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_289, ll_backend__unify_gen__ConstNum_288, &ll_backend__unify_gen__conv1_Var_292);
                  }
                  ll_backend__unify_gen__Var_292 = ((MR_Word) ll_backend__unify_gen__conv1_Var_292);
                  ll_backend__unify_gen__Rval_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_292, (MR_Integer) 0)));
                  ll_backend__unify_gen___Type_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_292, (MR_Integer) 1)));
                  {
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Rval_290, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Integer ll_backend__unify_gen__ConstNum_296 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__ConstStructMap_297;
                  MR_Word ll_backend__unify_gen__Rval_298;
                  MR_Word ll_backend__unify_gen__Var_300;
                  MR_Box ll_backend__unify_gen__conv2_Var_300;
                  MR_Word ll_backend__unify_gen___Type_295;

                  {
                    ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, &ll_backend__unify_gen__ConstStructMap_297);
                  }
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_297, ll_backend__unify_gen__ConstNum_296, &ll_backend__unify_gen__conv2_Var_300);
                  }
                  ll_backend__unify_gen__Var_300 = ((MR_Word) ll_backend__unify_gen__conv2_Var_300);
                  ll_backend__unify_gen__Rval_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_300, (MR_Integer) 0)));
                  ll_backend__unify_gen___Type_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_300, (MR_Integer) 1)));
                  {
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Rval_298, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer ll_backend__unify_gen__ConstNum_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__ConstStructMap_62;
                  MR_Word ll_backend__unify_gen__Rval_63;
                  MR_Word ll_backend__unify_gen__Var_135;
                  MR_Word ll_backend__unify_gen__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Box ll_backend__unify_gen__conv0_Var_135;
                  MR_Word ll_backend__unify_gen___Type_64;

                  {
                    ll_backend__code_info__get_const_struct_map_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, &ll_backend__unify_gen__ConstStructMap_62);
                  }
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__unify_gen__ConstStructMap_62, ll_backend__unify_gen__ConstNum_60, &ll_backend__unify_gen__conv0_Var_135);
                  }
                  ll_backend__unify_gen__Var_135 = ((MR_Word) ll_backend__unify_gen__conv0_Var_135);
                  ll_backend__unify_gen__Rval_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_135, (MR_Integer) 0)));
                  ll_backend__unify_gen___Type_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_135, (MR_Integer) 1)));
                  {
                    ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Rval_63, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ll_backend__unify_gen__PredId_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__ProcId_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__ModuleInfo_67;
                  MR_Word ll_backend__unify_gen__ProcLabel_68;
                  MR_Word ll_backend__unify_gen__Var_125;
                  MR_Word ll_backend__unify_gen__Var_131;
                  MR_Word ll_backend__unify_gen__Var_133;
                  MR_Word ll_backend__unify_gen__DataId_237;

                  {
                    ll_backend__unify_gen__Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_125, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_125, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_8));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_125, 3) = ((MR_Box) (ll_backend__unify_gen__RHSVars_17));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_125, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_125, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "tabling_info constant has args");
                  }
                  {
                    ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, &ll_backend__unify_gen__ModuleInfo_67);
                  }
                  {
                    ll_backend__unify_gen__ProcLabel_68 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__unify_gen__ModuleInfo_67, ll_backend__unify_gen__PredId_65, ll_backend__unify_gen__ProcId_66);
                  }
                  {
                    ll_backend__unify_gen__DataId_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__DataId_237, 0) = ((MR_Box) (ll_backend__unify_gen__ProcLabel_68));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__DataId_237, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_133, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_237));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_133, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_131, 1) = ((MR_Box) (ll_backend__unify_gen__Var_133));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_131, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ll_backend__unify_gen__RttiProcLabel_69;
                  MR_Word ll_backend__unify_gen__Origin_70;
                  MR_Word ll_backend__unify_gen__UserOrUCI_73;
                  MR_Word ll_backend__unify_gen__ProcKind_74;
                  MR_Word ll_backend__unify_gen__Var_115;
                  MR_Word ll_backend__unify_gen__Var_120;
                  MR_Word ll_backend__unify_gen__Var_121;
                  MR_Word ll_backend__unify_gen__Var_123;
                  MR_Word ll_backend__unify_gen__DataId_238;
                  MR_Word ll_backend__unify_gen__PredId_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__ProcId_240 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__ModuleInfo_241;
                  MR_Word ll_backend__unify_gen__Var_247;
                  MR_Word ll_backend__unify_gen__Var_248;
                  MR_Word ll_backend__unify_gen__Var_249;
                  MR_String ll_backend__unify_gen__Var_250;
                  MR_Integer ll_backend__unify_gen__Var_251;
                  MR_Word ll_backend__unify_gen__Var_252;
                  MR_Word ll_backend__unify_gen__Var_253;
                  MR_Integer ll_backend__unify_gen__Var_254;
                  MR_Word ll_backend__unify_gen__Var_255;
                  MR_Word ll_backend__unify_gen__Var_256;
                  MR_Word ll_backend__unify_gen__Var_257;
                  MR_Word ll_backend__unify_gen__Var_258;
                  MR_Word ll_backend__unify_gen__Var_259;
                  MR_Word ll_backend__unify_gen__Var_260;
                  MR_Word ll_backend__unify_gen__Var_261;
                  MR_Word ll_backend__unify_gen__Var_71;
                  MR_Word ll_backend__unify_gen__Var_72;

                  {
                    ll_backend__unify_gen__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_115, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_115, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_4));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_115, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_115, 3) = ((MR_Box) (ll_backend__unify_gen__RHSVars_17));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_115, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_115, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "deep_profiling_proc_static has args");
                  }
                  {
                    ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, &ll_backend__unify_gen__ModuleInfo_241);
                  }
                  {
                    ll_backend__unify_gen__RttiProcLabel_69 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__unify_gen__ModuleInfo_241, ll_backend__unify_gen__PredId_239, ll_backend__unify_gen__ProcId_240);
                  }
                  ll_backend__unify_gen__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 0)));
                  ll_backend__unify_gen__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 1)));
                  ll_backend__unify_gen__Var_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 2)));
                  ll_backend__unify_gen__Var_250 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 3)));
                  ll_backend__unify_gen__Var_251 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 4)));
                  ll_backend__unify_gen__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 5)));
                  ll_backend__unify_gen__Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 6)));
                  ll_backend__unify_gen__Var_254 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 7)));
                  ll_backend__unify_gen__Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 8)));
                  ll_backend__unify_gen__Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 9)));
                  ll_backend__unify_gen__Var_257 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 10)))) & (MR_Integer) 7);
                  ll_backend__unify_gen__Var_258 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  ll_backend__unify_gen__Var_259 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  ll_backend__unify_gen__Origin_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 11)));
                  ll_backend__unify_gen__Var_260 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 12)))) & (MR_Integer) 1);
                  ll_backend__unify_gen__Var_261 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__RttiProcLabel_69, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Origin_70)) == (MR_mktag((MR_Integer) 0)));
                  if (ll_backend__unify_gen__succeeded)
                    {
                      ll_backend__unify_gen__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Origin_70, (MR_Integer) 0)));
                      ll_backend__unify_gen__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Origin_70, (MR_Integer) 1)));
                      ll_backend__unify_gen__UserOrUCI_73 = (MR_Integer) 1;
                    }
                  else
                    ll_backend__unify_gen__UserOrUCI_73 = (MR_Integer) 0;
                  {
                    ll_backend__unify_gen__ProcKind_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ProcKind_74, 0) = ((MR_Box) (ll_backend__unify_gen__UserOrUCI_73));
                  }
                  {
                    ll_backend__unify_gen__Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_120, 0) = ((MR_Box) (ll_backend__unify_gen__RttiProcLabel_69));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_120, 1) = ((MR_Box) (ll_backend__unify_gen__ProcKind_74));
                  }
                  {
                    ll_backend__unify_gen__DataId_238 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_238, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_238, 1) = ((MR_Box) (ll_backend__unify_gen__Var_120));
                  }
                  {
                    ll_backend__unify_gen__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_123, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_238));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_123, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_121, 1) = ((MR_Box) (ll_backend__unify_gen__Var_123));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_121, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ll_backend__unify_gen__PredProcId_75;
                  MR_Word ll_backend__unify_gen__Var_105;
                  MR_Word ll_backend__unify_gen__Var_111;
                  MR_Word ll_backend__unify_gen__Var_113;
                  MR_Word ll_backend__unify_gen__DataId_242;
                  MR_Word ll_backend__unify_gen__PredId_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__ProcId_244 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));

                  {
                    ll_backend__unify_gen__Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_105, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_105, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_7));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_105, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_105, 3) = ((MR_Box) (ll_backend__unify_gen__RHSVars_17));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_105, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_105, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "table_io_entry has args");
                  }
                  {
                    ll_backend__unify_gen__PredProcId_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__PredProcId_75, 0) = ((MR_Box) (ll_backend__unify_gen__PredId_243));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__PredProcId_75, 1) = ((MR_Box) (ll_backend__unify_gen__ProcId_244));
                  }
                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
                  {
                    ll_backend__unify_gen__DataId_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_242, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_242, 1) = NULL;
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__DataId_242, 2) = ((MR_Box) (ll_backend__unify_gen__PredProcId_75));
                  }
                  {
                    ll_backend__unify_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_113, 1) = ((MR_Box) (ll_backend__unify_gen__DataId_242));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_113, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ll_backend__unify_gen__Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_111, 1) = ((MR_Box) (ll_backend__unify_gen__Var_113));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_111, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_303 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__ArgTypes_304;
                  MR_Word ll_backend__unify_gen__CellArgs0_305;
                  MR_Word ll_backend__unify_gen__MayUseAtomic_306;
                  MR_Word ll_backend__unify_gen__CellArgs_307;
                  MR_Word ll_backend__unify_gen__PackCode_308;
                  MR_Word ll_backend__unify_gen__HowToConstruct_309;
                  MR_Word ll_backend__unify_gen__Context_310;
                  MR_Word ll_backend__unify_gen__ConstructCode_311;
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_181_312;

                  {
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__RHSVars_17, &ll_backend__unify_gen__ArgTypes_304);
                  }
                  {
                    ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__RHSVars_17, ll_backend__unify_gen__ArgTypes_304, ll_backend__unify_gen__ArgModes_18, ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__TakeAddr_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, &ll_backend__unify_gen__CellArgs0_305, &ll_backend__unify_gen__MayUseAtomic_306);
                  }
                  {
                    ll_backend__unify_gen__pack_cell_rvals_7_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__CellArgs0_305, &ll_backend__unify_gen__CellArgs_307, &ll_backend__unify_gen__PackCode_308, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, &ll_backend__unify_gen__STATE_VARIABLE_CLD_181_312);
                  }
                  {
                    ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__HowToConstruct0_20, &ll_backend__unify_gen__HowToConstruct_309);
                  }
                  {
                    ll_backend__unify_gen__Context_310 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_23);
                  }
                  {
                    ll_backend__unify_gen__construct_cell_12_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Ptag_303, ll_backend__unify_gen__CellArgs_307, ll_backend__unify_gen__HowToConstruct_309, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__Context_310, ll_backend__unify_gen__MayUseAtomic_306, &ll_backend__unify_gen__ConstructCode_311, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CI_81, ll_backend__unify_gen__STATE_VARIABLE_CLD_181_312, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_308, ll_backend__unify_gen__ConstructCode_311);
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Integer ll_backend__unify_gen__Ptag_223 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__RHSVar_217;
                  MR_Word ll_backend__unify_gen__ArgMode_218;
                  MR_Word ll_backend__unify_gen__Var_172;
                  MR_Word ll_backend__unify_gen__Var_173;

                  ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__RHSVars_17)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__unify_gen__succeeded)
                    {
                      ll_backend__unify_gen__RHSVar_217 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RHSVars_17, (MR_Integer) 0)));
                      ll_backend__unify_gen__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__RHSVars_17, (MR_Integer) 1)));
                      ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_172 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ll_backend__unify_gen__succeeded)
                        {
                          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ArgModes_18)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__unify_gen__succeeded)
                            {
                              ll_backend__unify_gen__ArgMode_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgModes_18, (MR_Integer) 0)));
                              ll_backend__unify_gen__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ArgModes_18, (MR_Integer) 1)));
                              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                  if (ll_backend__unify_gen__succeeded)
                    if ((ll_backend__unify_gen__TakeAddr_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word ll_backend__unify_gen__Type_215;

                        {
                          ll_backend__unify_gen__Type_215 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__RHSVar_217);
                        }
                        {
                          ll_backend__unify_gen__generate_direct_arg_construct_9_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__RHSVar_217, ll_backend__unify_gen__Ptag_223, ll_backend__unify_gen__ArgMode_218, ll_backend__unify_gen__Type_215, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                        }
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
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Integer ll_backend__unify_gen__Sectag_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen__CellArgs1_51;
                  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_165_165;
                  MR_Word ll_backend__unify_gen__Var_166;
                  MR_Word ll_backend__unify_gen__Var_167;
                  MR_Word ll_backend__unify_gen__Var_168;
                  MR_Integer ll_backend__unify_gen__Ptag_224 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__ArgTypes_225;
                  MR_Word ll_backend__unify_gen__CellArgs0_226;
                  MR_Word ll_backend__unify_gen__MayUseAtomic_227;
                  MR_Word ll_backend__unify_gen__CellArgs_228;
                  MR_Word ll_backend__unify_gen__PackCode_229;
                  MR_Word ll_backend__unify_gen__HowToConstruct_230;
                  MR_Word ll_backend__unify_gen__Context_231;
                  MR_Word ll_backend__unify_gen__ConstructCode_232;

                  {
                    ll_backend__unify_gen__var_types_3_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__RHSVars_17, &ll_backend__unify_gen__ArgTypes_225);
                  }
                  {
                    ll_backend__unify_gen__generate_cons_args_8_p_0(ll_backend__unify_gen__RHSVars_17, ll_backend__unify_gen__ArgTypes_225, ll_backend__unify_gen__ArgModes_18, ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__TakeAddr_21, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, &ll_backend__unify_gen__CellArgs0_226, &ll_backend__unify_gen__MayUseAtomic_227);
                  }
                  {
                    ll_backend__unify_gen__pack_cell_rvals_7_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__CellArgs0_226, &ll_backend__unify_gen__CellArgs1_51, &ll_backend__unify_gen__PackCode_229, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, &ll_backend__unify_gen__STATE_VARIABLE_CLD_165_165);
                  }
                  {
                    ll_backend__unify_gen__pack_how_to_construct_3_p_0(ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__HowToConstruct0_20, &ll_backend__unify_gen__HowToConstruct_230);
                  }
                  {
                    ll_backend__unify_gen__Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_168, 0) = ((MR_Box) (ll_backend__unify_gen__Sectag_50));
                  }
                  {
                    ll_backend__unify_gen__Var_167 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_167, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_167, 1) = ((MR_Box) (ll_backend__unify_gen__Var_168));
                  }
                  {
                    ll_backend__unify_gen__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_166, 0) = ((MR_Box) (ll_backend__unify_gen__Var_167));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_166, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    ll_backend__unify_gen__CellArgs_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgs_228, 0) = ((MR_Box) (ll_backend__unify_gen__Var_166));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CellArgs_228, 1) = ((MR_Box) (ll_backend__unify_gen__CellArgs1_51));
                  }
                  {
                    ll_backend__unify_gen__Context_231 = hlds__hlds_goal__goal_info_get_context_1_f_0(ll_backend__unify_gen__GoalInfo_23);
                  }
                  {
                    ll_backend__unify_gen__construct_cell_12_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Ptag_224, ll_backend__unify_gen__CellArgs_228, ll_backend__unify_gen__HowToConstruct_230, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__Context_231, ll_backend__unify_gen__MayUseAtomic_227, &ll_backend__unify_gen__ConstructCode_232, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CI_81, ll_backend__unify_gen__STATE_VARIABLE_CLD_165_165, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__PackCode_229, ll_backend__unify_gen__ConstructCode_232);
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word ll_backend__unify_gen__Var_159;
                  MR_Word ll_backend__unify_gen__Var_161;
                  MR_Word ll_backend__unify_gen__Var_163;
                  MR_Word ll_backend__unify_gen__Var_164;
                  MR_Integer ll_backend__unify_gen__Ptag_233 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Integer ll_backend__unify_gen__Sectag_234 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));

                  {
                    ll_backend__unify_gen__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_164, 0) = ((MR_Box) (ll_backend__unify_gen__Sectag_234));
                  }
                  {
                    ll_backend__unify_gen__Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_163, 1) = ((MR_Box) (ll_backend__unify_gen__Var_164));
                  }
                  {
                    ll_backend__unify_gen__Var_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_161, 1) = ((MR_Box) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_161, 2) = ((MR_Box) (ll_backend__unify_gen__Var_163));
                  }
                  {
                    ll_backend__unify_gen__Var_159 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_159, 0) = ((MR_Box) (ll_backend__unify_gen__Ptag_233));
                    MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_159, 1) = ((MR_Box) (ll_backend__unify_gen__Var_161));
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_159, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ll_backend__unify_gen__RA_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));
                  MR_Word ll_backend__unify_gen__Var_98;
                  MR_Word ll_backend__unify_gen__Var_103;

                  {
                    ll_backend__unify_gen__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_98, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[2]));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_98, 1) = ((MR_Box) (ll_backend__unify_gen__generate_construction_2_14_p_0_6));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_98, 3) = ((MR_Box) (ll_backend__unify_gen__RHSVars_17));
                    MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_98, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_98, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.generate_construction_2\'/14", (MR_String) "reserved_address constant has args");
                  }
                  {
                    ll_backend__unify_gen__Var_103 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_76);
                  }
                  {
                    ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__LHSVar_16, ll_backend__unify_gen__Var_103, ll_backend__unify_gen__STATE_VARIABLE_CI_0_80, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_82, ll_backend__unify_gen__STATE_VARIABLE_CLD_83);
                  }
                  {
                    *ll_backend__unify_gen__Code_24 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
                  }
                  *ll_backend__unify_gen__STATE_VARIABLE_CI_81 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_80;
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ll_backend__unify_gen__ThisTag_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 2)));
                  MR_Word ll_backend__unify_gen___RAs_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_15, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__unify_gen__next_value_of_ConsTag_15 = ll_backend__unify_gen__ThisTag_78;

                    ll_backend__unify_gen__ConsTag_15 = ll_backend__unify_gen__next_value_of_ConsTag_15;
                  }
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

static void MR_CALL 
ll_backend__unify_gen__generate_construction_14_p_0(
  MR_Word ll_backend__unify_gen__LHSVar_15,
  MR_Word ll_backend__unify_gen__ConsId_16,
  MR_Word ll_backend__unify_gen__RHSVars_17,
  MR_Word ll_backend__unify_gen__ArgModes_18,
  MR_Word ll_backend__unify_gen__ArgWidths_19,
  MR_Word ll_backend__unify_gen__HowToConstruct_20,
  MR_Word ll_backend__unify_gen__TakeAddr_21,
  MR_Word ll_backend__unify_gen__MaybeSize_22,
  MR_Word ll_backend__unify_gen__GoalInfo_23,
  MR_Word * ll_backend__unify_gen__Code_24,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_29,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_30,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_31,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_32)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__ModuleInfo_27;
    MR_Word ll_backend__unify_gen__Tag_28;

    {
      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_29, &ll_backend__unify_gen__ModuleInfo_27);
    }
    {
      ll_backend__unify_gen__Tag_28 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_27, ll_backend__unify_gen__ConsId_16);
    }
    {
      ll_backend__unify_gen__generate_construction_2_14_p_0(ll_backend__unify_gen__Tag_28, ll_backend__unify_gen__LHSVar_15, ll_backend__unify_gen__RHSVars_17, ll_backend__unify_gen__ArgModes_18, ll_backend__unify_gen__ArgWidths_19, ll_backend__unify_gen__HowToConstruct_20, ll_backend__unify_gen__TakeAddr_21, ll_backend__unify_gen__MaybeSize_22, ll_backend__unify_gen__GoalInfo_23, ll_backend__unify_gen__Code_24, ll_backend__unify_gen__STATE_VARIABLE_CI_0_29, ll_backend__unify_gen__STATE_VARIABLE_CI_30, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_31, ll_backend__unify_gen__STATE_VARIABLE_CLD_32);
    }
  }
}

static MR_Word MR_CALL 
ll_backend__unify_gen__generate_reserved_address_1_f_0(
  MR_Word ll_backend__unify_gen__HeadVar__1_1)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__unify_gen__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ll_backend__unify_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__unify_gen__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__Var_6;

          {
            ll_backend__unify_gen__Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_6, 0) = ((MR_Box) (ll_backend__unify_gen__N_5));
          }
          {
            ll_backend__unify_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__unify_gen__Var_6));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "function \140ll_backend.unify_gen.generate_reserved_address\'/1", (MR_String) "reserved_object");
          }
        }
        break;
    }
    return ll_backend__unify_gen__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_2(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2)
{
  {
    MR_Box ll_backend__unify_gen__wrapper_arg_3;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv0_LambdaHeadVar__3_51;

    {
      ll_backend__unify_gen__conv0_LambdaHeadVar__3_51 = ll_backend__unify_gen__IntroducedFrom__func__raw_tag_test__496__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2));
    }
    ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_LambdaHeadVar__3_51));
    return ll_backend__unify_gen__wrapper_arg_3;
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;

    {
      ll_backend__unify_gen__succeeded = ll_backend__unify_gen__IntroducedFrom__pred__raw_tag_test__427__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))));
    }
    return ll_backend__unify_gen__succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen__raw_tag_test_3_p_0(
  MR_Word ll_backend__unify_gen__Rval_4,
  MR_Word ll_backend__unify_gen__ConsTag_5,
  MR_Word * ll_backend__unify_gen__TestRval_6)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    switch (MR_tag((MR_Word) ll_backend__unify_gen__ConsTag_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__unify_gen__ConsTag_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__unify_gen__TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__unify_gen__TestRval_6 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[7]);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__unify_gen__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__Var_129;
          MR_Word ll_backend__unify_gen__Var_130;

          {
            ll_backend__unify_gen__Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_130, 1) = ((MR_Box) (ll_backend__unify_gen__String_7));
          }
          {
            ll_backend__unify_gen__Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_129, 1) = ((MR_Box) (ll_backend__unify_gen__Var_130));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__unify_gen__TestRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__Var_129));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float ll_backend__unify_gen__Float_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__Var_126;
          MR_Word ll_backend__unify_gen__Var_127;

          {
            ll_backend__unify_gen__Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_127, 1) = MR_box_float(ll_backend__unify_gen__Float_8);
          }
          {
            ll_backend__unify_gen__Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_126, 1) = ((MR_Box) (ll_backend__unify_gen__Var_127));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__unify_gen__TestRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 48))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__Var_126));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__unify_gen__Int_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__Var_123;
              MR_Word ll_backend__unify_gen__Var_124;

              {
                ll_backend__unify_gen__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_124, 0) = ((MR_Box) (ll_backend__unify_gen__Int_9));
              }
              {
                ll_backend__unify_gen__Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_123, 1) = ((MR_Box) (ll_backend__unify_gen__Var_124));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__unify_gen__TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__Var_123));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned ll_backend__unify_gen__UInt_10 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__Var_120;
              MR_Word ll_backend__unify_gen__Var_121;

              {
                ll_backend__unify_gen__Var_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Var_121, 0) = ((MR_Box) (ll_backend__unify_gen__UInt_10));
              }
              {
                ll_backend__unify_gen__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_120, 1) = ((MR_Box) (ll_backend__unify_gen__Var_121));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__unify_gen__TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__Var_120));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__unify_gen__ForeignLang_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_String ll_backend__unify_gen__ForeignVal_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
              MR_Word ll_backend__unify_gen__Var_110;
              MR_Word ll_backend__unify_gen__Var_116;
              MR_Word ll_backend__unify_gen__Var_117;

              {
                ll_backend__unify_gen__Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_110, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_5[1]));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_110, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_110, 3) = ((MR_Box) (ll_backend__unify_gen__ForeignLang_11));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_110, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                mercury__require__expect_4_p_0(ll_backend__unify_gen__Var_110, (MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "foreign tag for language other than C");
              }
              {
                ll_backend__unify_gen__Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_117, 1) = ((MR_Box) (ll_backend__unify_gen__ForeignVal_12));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_117, 2) = ((MR_Box) ((MR_Integer) 7));
              }
              {
                ll_backend__unify_gen__Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_116, 1) = ((MR_Box) (ll_backend__unify_gen__Var_117));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__unify_gen__TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__Var_116));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted higher-order unification");
                return;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_ctor_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted base_typeclass_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted type_info_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted typeclass_info_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted ground_term_const_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted tabling_info unification");
                return;
              }
            }
            break;
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted deep_profiling_proc_layout_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.unify_gen", (MR_String) "predicate \140ll_backend.unify_gen.raw_tag_test\'/3", (MR_String) "Attempted table_io_entry_tag unification");
                return;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer ll_backend__unify_gen__UnsharedTag_141 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__VarPtag_142;
              MR_Word ll_backend__unify_gen__ConstPtag_143;
              MR_Word ll_backend__unify_gen__Var_146;
              MR_Word ll_backend__unify_gen__Var_147;

              {
                ll_backend__unify_gen__VarPtag_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_142, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_142, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
              }
              {
                ll_backend__unify_gen__Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_147, 0) = ((MR_Box) (ll_backend__unify_gen__UnsharedTag_141));
              }
              {
                ll_backend__unify_gen__Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_146, 1) = ((MR_Box) (ll_backend__unify_gen__Var_147));
              }
              {
                ll_backend__unify_gen__ConstPtag_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_143, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_143, 2) = ((MR_Box) (ll_backend__unify_gen__Var_146));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__unify_gen__TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_142));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_143));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer ll_backend__unify_gen__UnsharedTag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__VarPtag_33;
              MR_Word ll_backend__unify_gen__ConstPtag_34;
              MR_Word ll_backend__unify_gen__Var_78;
              MR_Word ll_backend__unify_gen__Var_79;

              {
                ll_backend__unify_gen__VarPtag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_33, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_33, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
              }
              {
                ll_backend__unify_gen__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_79, 0) = ((MR_Box) (ll_backend__unify_gen__UnsharedTag_32));
              }
              {
                ll_backend__unify_gen__Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_78, 1) = ((MR_Box) (ll_backend__unify_gen__Var_79));
              }
              {
                ll_backend__unify_gen__ConstPtag_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_34, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_34, 2) = ((MR_Box) (ll_backend__unify_gen__Var_78));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__unify_gen__TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_33));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_34));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer ll_backend__unify_gen__Bits_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_Integer ll_backend__unify_gen__Num_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
              MR_Word ll_backend__unify_gen__PtagTestRval_37;
              MR_Word ll_backend__unify_gen__VarStag_38;
              MR_Word ll_backend__unify_gen__ConstStag_39;
              MR_Word ll_backend__unify_gen__StagTestRval_40;
              MR_Word ll_backend__unify_gen__Var_65;
              MR_Word ll_backend__unify_gen__Var_66;
              MR_Word ll_backend__unify_gen__Var_68;
              MR_Word ll_backend__unify_gen__Var_69;
              MR_Word ll_backend__unify_gen__Var_73;
              MR_Word ll_backend__unify_gen__VarPtag_131;
              MR_Word ll_backend__unify_gen__ConstPtag_132;

              {
                ll_backend__unify_gen__VarPtag_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_131, 1) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__VarPtag_131, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
              }
              {
                ll_backend__unify_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_66, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_35));
              }
              {
                ll_backend__unify_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_65, 1) = ((MR_Box) (ll_backend__unify_gen__Var_66));
              }
              {
                ll_backend__unify_gen__ConstPtag_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_132, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstPtag_132, 2) = ((MR_Box) (ll_backend__unify_gen__Var_65));
              }
              {
                ll_backend__unify_gen__PtagTestRval_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_37, 2) = ((MR_Box) (ll_backend__unify_gen__VarPtag_131));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__PtagTestRval_37, 3) = ((MR_Box) (ll_backend__unify_gen__ConstPtag_132));
              }
              {
                ll_backend__unify_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_69, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_35));
              }
              {
                ll_backend__unify_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_68, 1) = ((MR_Box) (ll_backend__unify_gen__Var_69));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_68, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_68, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_scalar_common_1[8])));
              }
              {
                ll_backend__unify_gen__VarStag_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__VarStag_38, 0) = ((MR_Box) (ll_backend__unify_gen__Var_68));
              }
              {
                ll_backend__unify_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_73, 0) = ((MR_Box) (ll_backend__unify_gen__Num_36));
              }
              {
                ll_backend__unify_gen__ConstStag_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstStag_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConstStag_39, 1) = ((MR_Box) (ll_backend__unify_gen__Var_73));
              }
              {
                ll_backend__unify_gen__StagTestRval_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_40, 2) = ((MR_Box) (ll_backend__unify_gen__VarStag_38));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__StagTestRval_40, 3) = ((MR_Box) (ll_backend__unify_gen__ConstStag_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__unify_gen__TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__PtagTestRval_37));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__StagTestRval_40));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__unify_gen__Var_58;
              MR_Word ll_backend__unify_gen__Var_60;
              MR_Word ll_backend__unify_gen__Var_61;
              MR_Integer ll_backend__unify_gen__Bits_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_Integer ll_backend__unify_gen__Num_134 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
              MR_Word ll_backend__unify_gen__ConstStag_135;

              {
                ll_backend__unify_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_61, 0) = ((MR_Box) (ll_backend__unify_gen__Num_134));
              }
              {
                ll_backend__unify_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_60, 1) = ((MR_Box) (ll_backend__unify_gen__Var_61));
              }
              {
                ll_backend__unify_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_58, 1) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_58, 2) = ((MR_Box) (ll_backend__unify_gen__Var_60));
              }
              {
                ll_backend__unify_gen__ConstStag_135 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConstStag_135, 0) = ((MR_Box) (ll_backend__unify_gen__Bits_133));
                MR_hl_field(MR_mktag(2), ll_backend__unify_gen__ConstStag_135, 1) = ((MR_Box) (ll_backend__unify_gen__Var_58));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__unify_gen__TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__ConstStag_135));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ll_backend__unify_gen__RA_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__Var_57;

              {
                ll_backend__unify_gen__Var_57 = ll_backend__unify_gen__generate_reserved_address_1_f_0(ll_backend__unify_gen__RA_41);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__unify_gen__TestRval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__unify_gen__Var_57));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__unify_gen__ReservedAddrs_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__ThisTag_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsTag_5, (MR_Integer) 2)));
              MR_Word ll_backend__unify_gen__CheckReservedAddrs_44;
              MR_Word ll_backend__unify_gen__MatchesThisTag_48;
              MR_Box ll_backend__unify_gen__conv1_TestRval_6;

              {
                ll_backend__unify_gen__CheckReservedAddrs_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_44, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_44, 1) = ((MR_Box) (ll_backend__unify_gen__raw_tag_test_3_p_0_2));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), ll_backend__unify_gen__CheckReservedAddrs_44, 3) = ((MR_Box) (ll_backend__unify_gen__Rval_4));
              }
              {
                ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__Rval_4, ll_backend__unify_gen__ThisTag_43, &ll_backend__unify_gen__MatchesThisTag_48);
              }
              {
                ll_backend__unify_gen__conv1_TestRval_6 = mercury__list__foldr_3_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__unify_gen__CheckReservedAddrs_44, ll_backend__unify_gen__ReservedAddrs_42, ((MR_Box) (ll_backend__unify_gen__MatchesThisTag_48)));
              }
              *ll_backend__unify_gen__TestRval_6 = ((MR_Word) ll_backend__unify_gen__conv1_TestRval_6);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__disjoin_tag_tests_3_p_0(
  MR_Word ll_backend__unify_gen__CurTestRval_4,
  MR_Word ll_backend__unify_gen__OtherTestRvals_5,
  MR_Word * ll_backend__unify_gen__TestRval_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__unify_gen__succeeded;

        if ((ll_backend__unify_gen__OtherTestRvals_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__unify_gen__TestRval_6 = ll_backend__unify_gen__CurTestRval_4;
        else
          {
            MR_Word ll_backend__unify_gen__HeadTestRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__OtherTestRvals_5, (MR_Integer) 0)));
            MR_Word ll_backend__unify_gen__TailTestRvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__OtherTestRvals_5, (MR_Integer) 1)));
            MR_Word ll_backend__unify_gen__NextTestRval_9;

            {
              ll_backend__unify_gen__NextTestRval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 2) = ((MR_Box) (ll_backend__unify_gen__CurTestRval_4));
              MR_hl_field(MR_mktag(3), ll_backend__unify_gen__NextTestRval_9, 3) = ((MR_Box) (ll_backend__unify_gen__HeadTestRval_7));
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__unify_gen__next_value_of_CurTestRval_4 = ll_backend__unify_gen__NextTestRval_9;
              MR_Word ll_backend__unify_gen__next_value_of_OtherTestRvals_5 = ll_backend__unify_gen__TailTestRvals_8;

              ll_backend__unify_gen__OtherTestRvals_5 = ll_backend__unify_gen__next_value_of_OtherTestRvals_5;
              ll_backend__unify_gen__CurTestRval_4 = ll_backend__unify_gen__next_value_of_CurTestRval_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__unify_gen__generate_test_7_p_0(
  MR_Word ll_backend__unify_gen__VarA_8,
  MR_Word ll_backend__unify_gen__VarB_9,
  MR_Word * ll_backend__unify_gen__Code_10,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_21,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_22,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_24)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__IsDummy_13;

    {
      ll_backend__unify_gen__IsDummy_13 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__VarA_8);
    }
    switch (ll_backend__unify_gen__IsDummy_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            *ll_backend__unify_gen__Code_10 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
          }
          *ll_backend__unify_gen__STATE_VARIABLE_CI_22 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_21;
          *ll_backend__unify_gen__STATE_VARIABLE_CLD_24 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__unify_gen__TypeCtorInfo_34_34;
          MR_Word ll_backend__unify_gen__CodeA_14;
          MR_Word ll_backend__unify_gen__ValA_15;
          MR_Word ll_backend__unify_gen__CodeB_16;
          MR_Word ll_backend__unify_gen__ValB_17;
          MR_Word ll_backend__unify_gen__Type_18;
          MR_Word ll_backend__unify_gen__Op_19;
          MR_Word ll_backend__unify_gen__FailCode_20;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_25_25;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_26_26;
          MR_Word ll_backend__unify_gen__Var_29;
          MR_Word ll_backend__unify_gen__Var_32;
          MR_Word ll_backend__unify_gen__Var_27;

          {
            ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__VarA_8, &ll_backend__unify_gen__CodeA_14, &ll_backend__unify_gen__ValA_15, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_23, &ll_backend__unify_gen__STATE_VARIABLE_CLD_25_25);
          }
          {
            ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__VarB_9, &ll_backend__unify_gen__CodeB_16, &ll_backend__unify_gen__ValB_17, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__STATE_VARIABLE_CLD_25_25, &ll_backend__unify_gen__STATE_VARIABLE_CLD_26_26);
          }
          {
            ll_backend__unify_gen__Type_18 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__VarA_8);
          }
          ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Type_18)) == (MR_mktag((MR_Integer) 2)));
          if (ll_backend__unify_gen__succeeded)
            {
              ll_backend__unify_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Type_18, (MR_Integer) 0)));
              ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_27 == (MR_Integer) 3);
            }
          if (ll_backend__unify_gen__succeeded)
            ll_backend__unify_gen__Op_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
          else
            {
              MR_Word ll_backend__unify_gen__Var_28;

              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__Type_18)) == (MR_mktag((MR_Integer) 2)));
              if (ll_backend__unify_gen__succeeded)
                {
                  ll_backend__unify_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Type_18, (MR_Integer) 0)));
                  ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_28 == (MR_Integer) 2);
                }
              if (ll_backend__unify_gen__succeeded)
                ll_backend__unify_gen__Op_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 48));
              else
                ll_backend__unify_gen__Op_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
            }
          {
            ll_backend__unify_gen__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_29, 1) = ((MR_Box) (ll_backend__unify_gen__Op_19));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_29, 2) = ((MR_Box) (ll_backend__unify_gen__ValA_15));
            MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_29, 3) = ((MR_Box) (ll_backend__unify_gen__ValB_17));
          }
          {
            ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(ll_backend__unify_gen__Var_29, &ll_backend__unify_gen__FailCode_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_21, ll_backend__unify_gen__STATE_VARIABLE_CI_22, ll_backend__unify_gen__STATE_VARIABLE_CLD_26_26, ll_backend__unify_gen__STATE_VARIABLE_CLD_24);
          }
          ll_backend__unify_gen__TypeCtorInfo_34_34 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
          {
            ll_backend__unify_gen__Var_32 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_34_34, ll_backend__unify_gen__CodeB_16, ll_backend__unify_gen__FailCode_20);
          }
          {
            *ll_backend__unify_gen__Code_10 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_34_34, ll_backend__unify_gen__CodeA_14, ll_backend__unify_gen__Var_32);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_assignment_5_p_0(
  MR_Word ll_backend__unify_gen__VarA_6,
  MR_Word ll_backend__unify_gen__VarB_7,
  MR_Word * ll_backend__unify_gen__HeadVar__3_3,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_10)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      *ll_backend__unify_gen__HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
    }
    {
      ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9, ll_backend__unify_gen__VarA_6);
    }
    if (ll_backend__unify_gen__succeeded)
      {
        ll_backend__code_loc_dep__assign_var_to_var_4_p_0(ll_backend__unify_gen__VarA_6, ll_backend__unify_gen__VarB_7, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9, ll_backend__unify_gen__STATE_VARIABLE_CLD_10);
      }
    else
      *ll_backend__unify_gen__STATE_VARIABLE_CLD_10 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_9;
  }
}

static MR_Box MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1)
{
  {
    MR_Box ll_backend__unify_gen__wrapper_arg_2;
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv0_LambdaHeadVar__2_22;

    {
      ll_backend__unify_gen__conv0_LambdaHeadVar__2_22 = ll_backend__unify_gen__IntroducedFrom__func__get_cons_arg_widths__231__1_1_f_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1));
    }
    ll_backend__unify_gen__wrapper_arg_2 = ((MR_Box) (ll_backend__unify_gen__conv0_LambdaHeadVar__2_22));
    return ll_backend__unify_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__unify_gen__get_cons_arg_widths_4_p_0(
  MR_Word ll_backend__unify_gen__TypeInfo_for_T_41,
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
  MR_Word ll_backend__unify_gen__ConsId_6,
  MR_Word ll_backend__unify_gen__Args_7,
  MR_Word * ll_backend__unify_gen__AllArgWidths_8)
{
  {
    MR_bool ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word ll_backend__unify_gen__ConsDefn_12;
    MR_Word ll_backend__unify_gen__TypeCtor_11;
    MR_Word ll_backend__unify_gen__Var_9;
    MR_Integer ll_backend__unify_gen__Var_10;

    if (ll_backend__unify_gen__succeeded)
      {
        ll_backend__unify_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 1)));
        ll_backend__unify_gen__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 2)));
        ll_backend__unify_gen__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__ConsId_6, (MR_Integer) 3)));
        {
          ll_backend__unify_gen__succeeded = check_hlds__type_util__get_cons_defn_4_p_0(ll_backend__unify_gen__ModuleInfo_5, ll_backend__unify_gen__TypeCtor_11, ll_backend__unify_gen__ConsId_6, &ll_backend__unify_gen__ConsDefn_12);
        }
      }
    if (ll_backend__unify_gen__succeeded)
      {
        MR_Word ll_backend__unify_gen__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
        MR_Word ll_backend__unify_gen__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0;
        MR_Word ll_backend__unify_gen__ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 6)));
        MR_Word ll_backend__unify_gen__ArgWidths_14;
        MR_Integer ll_backend__unify_gen__NumArgs_16;
        MR_Integer ll_backend__unify_gen__NumConsArgs_17;
        MR_Integer ll_backend__unify_gen__NumExtraArgs_18;
        MR_Word ll_backend__unify_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 0)));
        MR_Word ll_backend__unify_gen__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 2)));
        MR_Word ll_backend__unify_gen__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 3)));
        MR_Word ll_backend__unify_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 4)));
        MR_Word ll_backend__unify_gen__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 5)));
        MR_Word ll_backend__unify_gen__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__ConsDefn_12, (MR_Integer) 7)));

        {
          ll_backend__unify_gen__ArgWidths_14 = mercury__list__map_2_f_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__TypeCtorInfo_43_43, (MR_Word) &ll_backend__unify_gen_scalar_common_2[4], ll_backend__unify_gen__ConsArgs_13);
        }
        {
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeInfo_for_T_41, ll_backend__unify_gen__Args_7, &ll_backend__unify_gen__NumArgs_16);
        }
        {
          mercury__list__length_2_p_0(ll_backend__unify_gen__TypeCtorInfo_42_42, ll_backend__unify_gen__ConsArgs_13, &ll_backend__unify_gen__NumConsArgs_17);
        }
        ll_backend__unify_gen__NumExtraArgs_18 = (ll_backend__unify_gen__NumArgs_16 - ll_backend__unify_gen__NumConsArgs_17);
        ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__NumExtraArgs_18 == (MR_Integer) 0);
        if (ll_backend__unify_gen__succeeded)
          *ll_backend__unify_gen__AllArgWidths_8 = ll_backend__unify_gen__ArgWidths_14;
        else
          {
            ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__NumExtraArgs_18 > (MR_Integer) 0);
            if (ll_backend__unify_gen__succeeded)
              {
                MR_Word ll_backend__unify_gen__ExtraArgWidths_19;

                {
                  ll_backend__unify_gen__ExtraArgWidths_19 = mercury__list__duplicate_2_f_0(ll_backend__unify_gen__TypeCtorInfo_43_43, ll_backend__unify_gen__NumExtraArgs_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
                }
                {
                  *ll_backend__unify_gen__AllArgWidths_8 = mercury__list__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_43_43, ll_backend__unify_gen__ExtraArgWidths_19, ll_backend__unify_gen__ArgWidths_14);
                }
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
        MR_Integer ll_backend__unify_gen__Var_28;

        {
          ll_backend__unify_gen__Var_28 = mercury__list__length_1_f_0(ll_backend__unify_gen__TypeInfo_for_T_41, ll_backend__unify_gen__Args_7);
        }
        {
          *ll_backend__unify_gen__AllArgWidths_8 = mercury__list__duplicate_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0, ll_backend__unify_gen__Var_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
      }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3,
  MR_Box ll_backend__unify_gen__wrapper_arg_4,
  MR_Box * ll_backend__unify_gen__wrapper_arg_5)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22;
    MR_Word ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24;

    {
      ll_backend__unify_gen__generate_const_struct_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22, ((MR_Word) ll_backend__unify_gen__wrapper_arg_4), &ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24);
    }
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv1_STATE_VARIABLE_ConstStructMap_22));
    *ll_backend__unify_gen__wrapper_arg_5 = ((MR_Box) (ll_backend__unify_gen__conv0_STATE_VARIABLE_StaticCellInfo_24));
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_const_structs_4_p_0(
  MR_Word ll_backend__unify_gen__ModuleInfo_5,
  MR_Word * ll_backend__unify_gen__ConstStructMap_6,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_GlobalData_16)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__Globals_8;
    MR_Word ll_backend__unify_gen__UB_9;
    MR_Word ll_backend__unify_gen__UnboxedFloats_10;
    MR_Word ll_backend__unify_gen__ConstStructDb_11;
    MR_Word ll_backend__unify_gen__ConstStructs_12;
    MR_Word ll_backend__unify_gen__StaticCellInfo0_13;
    MR_Word ll_backend__unify_gen__StaticCellInfo_14;
    MR_Word ll_backend__unify_gen__Var_18;
    MR_Word ll_backend__unify_gen__Var_19;
    MR_Box ll_backend__unify_gen__conv3_ConstStructMap_6;
    MR_Box ll_backend__unify_gen__conv2_StaticCellInfo_14;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__unify_gen__ModuleInfo_5, &ll_backend__unify_gen__Globals_8);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ll_backend__unify_gen__Globals_8, (MR_Integer) 252, &ll_backend__unify_gen__UB_9);
    }
    switch (ll_backend__unify_gen__UB_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__unify_gen__UnboxedFloats_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ll_backend__unify_gen__UnboxedFloats_10 = (MR_Integer) 0;
        break;
    }
    {
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ll_backend__unify_gen__ModuleInfo_5, &ll_backend__unify_gen__ConstStructDb_11);
    }
    {
      hlds__const_struct__const_struct_db_get_structs_2_p_0(ll_backend__unify_gen__ConstStructDb_11, &ll_backend__unify_gen__ConstStructs_12);
    }
    {
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15, &ll_backend__unify_gen__StaticCellInfo0_13);
    }
    {
      ll_backend__unify_gen__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_18, 0) = ((MR_Box) (&ll_backend__unify_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_18, 1) = ((MR_Box) (ll_backend__unify_gen__generate_const_structs_4_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_18, 3) = ((MR_Box) (ll_backend__unify_gen__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_18, 4) = ((MR_Box) (ll_backend__unify_gen__UnboxedFloats_10));
    }
    {
      ll_backend__unify_gen__Var_19 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_2[0], (MR_Word) &ll_backend__unify_gen_scalar_common_2[1], (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0, ll_backend__unify_gen__Var_18, ll_backend__unify_gen__ConstStructs_12, ((MR_Box) (ll_backend__unify_gen__Var_19)), &ll_backend__unify_gen__conv3_ConstStructMap_6, ((MR_Box) (ll_backend__unify_gen__StaticCellInfo0_13)), &ll_backend__unify_gen__conv2_StaticCellInfo_14);
    }
    *ll_backend__unify_gen__ConstStructMap_6 = ((MR_Word) ll_backend__unify_gen__conv3_ConstStructMap_6);
    ll_backend__unify_gen__StaticCellInfo_14 = ((MR_Word) ll_backend__unify_gen__conv2_StaticCellInfo_14);
    {
      ll_backend__global_data__global_data_set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_14, ll_backend__unify_gen__STATE_VARIABLE_GlobalData_0_15, ll_backend__unify_gen__STATE_VARIABLE_GlobalData_16);
    }
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_ground_term_6_p_0(
  MR_Word ll_backend__unify_gen__TermVar_7,
  MR_Word ll_backend__unify_gen__Goal_8,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_31,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_32,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_33,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_34)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_8, (MR_Integer) 0)));
    MR_Word ll_backend__unify_gen__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Goal_8, (MR_Integer) 1)));
    MR_Word ll_backend__unify_gen__NonLocals_13;
    MR_Word ll_backend__unify_gen__NonLocalList_14;

    {
      ll_backend__unify_gen__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__unify_gen__GoalInfo_12);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__unify_gen__NonLocals_13, &ll_backend__unify_gen__NonLocalList_14);
    }
    if ((ll_backend__unify_gen__NonLocalList_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__unify_gen__STATE_VARIABLE_CI_32 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_31;
        *ll_backend__unify_gen__STATE_VARIABLE_CLD_34 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_33;
      }
    else
      {
        MR_Word ll_backend__unify_gen__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__NonLocalList_14, (MR_Integer) 1)));
        MR_Word ll_backend__unify_gen__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__NonLocalList_14, (MR_Integer) 0)));

        if ((ll_backend__unify_gen__Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ((MR_Box) (ll_backend__unify_gen__Var_60)), ((MR_Box) (ll_backend__unify_gen__TermVar_7)));
            }
            if (ll_backend__unify_gen__succeeded)
              {
                MR_Word ll_backend__unify_gen__Conjuncts_16;
                MR_Word ll_backend__unify_gen__Var_40;

                ll_backend__unify_gen__succeeded = ((((MR_tag((MR_Word) ll_backend__unify_gen__GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (ll_backend__unify_gen__succeeded)
                  {
                    ll_backend__unify_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_11, (MR_Integer) 1)));
                    ll_backend__unify_gen__Conjuncts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__GoalExpr_11, (MR_Integer) 2)));
                    ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_40 == (MR_Integer) 0);
                  }
                if (ll_backend__unify_gen__succeeded)
                  {
                    MR_Word ll_backend__unify_gen__TypeInfo_56_56;
                    MR_Word ll_backend__unify_gen__TypeCtorInfo_57_57;
                    MR_Word ll_backend__unify_gen__ModuleInfo_17;
                    MR_Word ll_backend__unify_gen__ExprnOpts_18;
                    MR_Word ll_backend__unify_gen__UnboxedFloats_19;
                    MR_Word ll_backend__unify_gen__StaticCellInfo0_20;
                    MR_Word ll_backend__unify_gen__ActiveMap0_21;
                    MR_Word ll_backend__unify_gen__StaticCellInfo_22;
                    MR_Word ll_backend__unify_gen__ActiveMap_23;
                    MR_Word ll_backend__unify_gen__ActivePairs_24;
                    MR_Word ll_backend__unify_gen__GroundTerm_25;
                    MR_Word ll_backend__unify_gen__TypeInfo_62_62;
                    MR_Word ll_backend__unify_gen__Var_41;
                    MR_Word ll_backend__unify_gen__Var_42;
                    MR_Word ll_backend__unify_gen__Var_58;

                    {
                      ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_31, &ll_backend__unify_gen__ModuleInfo_17);
                    }
                    {
                      ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_31, &ll_backend__unify_gen__ExprnOpts_18);
                    }
                    {
                      ll_backend__unify_gen__UnboxedFloats_19 = ll_backend__llds__get_unboxed_floats_1_f_0(ll_backend__unify_gen__ExprnOpts_18);
                    }
                    {
                      ll_backend__code_info__get_static_cell_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_31, &ll_backend__unify_gen__StaticCellInfo0_20);
                    }
                    ll_backend__unify_gen__TypeInfo_56_56 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                    ll_backend__unify_gen__TypeCtorInfo_57_57 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
                    {
                      mercury__map__init_1_p_0(ll_backend__unify_gen__TypeInfo_56_56, ll_backend__unify_gen__TypeCtorInfo_57_57, &ll_backend__unify_gen__ActiveMap0_21);
                    }
                    {
                      ll_backend__unify_gen__generate_ground_term_conjuncts_7_p_0(ll_backend__unify_gen__ModuleInfo_17, ll_backend__unify_gen__Conjuncts_16, ll_backend__unify_gen__UnboxedFloats_19, ll_backend__unify_gen__StaticCellInfo0_20, &ll_backend__unify_gen__StaticCellInfo_22, ll_backend__unify_gen__ActiveMap0_21, &ll_backend__unify_gen__ActiveMap_23);
                    }
                    {
                      mercury__map__to_assoc_list_2_p_0(ll_backend__unify_gen__TypeInfo_56_56, ll_backend__unify_gen__TypeCtorInfo_57_57, ll_backend__unify_gen__ActiveMap_23, &ll_backend__unify_gen__ActivePairs_24);
                    }
                    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__ActivePairs_24)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__unify_gen__succeeded)
                      {
                        ll_backend__unify_gen__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ActivePairs_24, (MR_Integer) 0)));
                        ll_backend__unify_gen__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__ActivePairs_24, (MR_Integer) 1)));
                        ll_backend__unify_gen__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_41, (MR_Integer) 0)));
                        ll_backend__unify_gen__GroundTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_41, (MR_Integer) 1)));
                        ll_backend__unify_gen__TypeInfo_62_62 = (MR_Word) &ll_backend__unify_gen_scalar_common_1[0];
                        {
                          ll_backend__unify_gen__succeeded = mercury__builtin__unify_2_p_0(ll_backend__unify_gen__TypeInfo_62_62, ((MR_Box) (ll_backend__unify_gen__TermVar_7)), ((MR_Box) (ll_backend__unify_gen__Var_58)));
                        }
                        if (ll_backend__unify_gen__succeeded)
                          ll_backend__unify_gen__succeeded = (ll_backend__unify_gen__Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    if (ll_backend__unify_gen__succeeded)
                      {
                        MR_Word ll_backend__unify_gen__Rval_26;
                        MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_43_43;
                        MR_Word ll_backend__unify_gen__Var_27;

                        {
                          ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(ll_backend__unify_gen__NonLocals_13, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_33, &ll_backend__unify_gen__STATE_VARIABLE_CLD_43_43);
                        }
                        {
                          ll_backend__code_info__set_static_cell_info_3_p_0(ll_backend__unify_gen__StaticCellInfo_22, ll_backend__unify_gen__STATE_VARIABLE_CI_0_31, ll_backend__unify_gen__STATE_VARIABLE_CI_32);
                        }
                        ll_backend__unify_gen__Rval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__GroundTerm_25, (MR_Integer) 0)));
                        ll_backend__unify_gen__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__GroundTerm_25, (MR_Integer) 1)));
                        {
                          ll_backend__code_loc_dep__assign_const_to_var_5_p_0(ll_backend__unify_gen__TermVar_7, ll_backend__unify_gen__Rval_26, *ll_backend__unify_gen__STATE_VARIABLE_CI_32, ll_backend__unify_gen__STATE_VARIABLE_CLD_43_43, ll_backend__unify_gen__STATE_VARIABLE_CLD_34);
                        }
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

void MR_CALL 
ll_backend__unify_gen__generate_raw_tag_test_case_11_p_0(
  MR_Word ll_backend__unify_gen__VarRval_12,
  MR_Word ll_backend__unify_gen__VarType_13,
  MR_String ll_backend__unify_gen__VarName_14,
  MR_Word ll_backend__unify_gen__MainTaggedConsId_15,
  MR_Word ll_backend__unify_gen__OtherTaggedConsIds_16,
  MR_Word ll_backend__unify_gen__CheaperTagTest_17,
  MR_Word ll_backend__unify_gen__Sense_18,
  MR_Word * ll_backend__unify_gen__ElseLabel_19,
  MR_Word * ll_backend__unify_gen__Code_20,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_34,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_35)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    {
      ll_backend__unify_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_97_119_95_116_97_103_95_116_101_115_116_95_99_97_115_101_95_95_91_50_93_95_48_11_p_0(ll_backend__unify_gen__VarRval_12, ll_backend__unify_gen__VarName_14, ll_backend__unify_gen__MainTaggedConsId_15, ll_backend__unify_gen__OtherTaggedConsIds_16, ll_backend__unify_gen__CheaperTagTest_17, ll_backend__unify_gen__Sense_18, ll_backend__unify_gen__ElseLabel_19, ll_backend__unify_gen__Code_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_34, ll_backend__unify_gen__STATE_VARIABLE_CI_35);
    }
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_tag_test_10_p_0(
  MR_Word ll_backend__unify_gen__Var_11,
  MR_Word ll_backend__unify_gen__ConsId_12,
  MR_Word ll_backend__unify_gen__CheaperTagTest_13,
  MR_Word ll_backend__unify_gen__Sense_14,
  MR_Word * ll_backend__unify_gen__ElseLabel_15,
  MR_Word * ll_backend__unify_gen__Code_16,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_24,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_25,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_27)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;
    MR_Word ll_backend__unify_gen__VarCode_19;
    MR_Word ll_backend__unify_gen__VarRval_20;
    MR_String ll_backend__unify_gen__VarName_22;
    MR_Word ll_backend__unify_gen__TestCode_23;
    MR_String ll_backend__unify_gen__ConsIdName_44;
    MR_String ll_backend__unify_gen__Comment_49;
    MR_Word ll_backend__unify_gen__TestRval_51;
    MR_Word ll_backend__unify_gen__TheRval_54;
    MR_Word ll_backend__unify_gen__Var_66;
    MR_Word ll_backend__unify_gen__Var_67;
    MR_Word ll_backend__unify_gen__Var_68;
    MR_Word ll_backend__unify_gen__VarType_21;
    MR_Word ll_backend__unify_gen__CheapConsTag_48;
    MR_Word ll_backend__unify_gen__ExpensiveConsId_45;
    MR_Word ll_backend__unify_gen___ExpensiveConsTag_46;
    MR_Word ll_backend__unify_gen___CheapConsId_47;

    {
      ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__Var_11, &ll_backend__unify_gen__VarCode_19, &ll_backend__unify_gen__VarRval_20, ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_26, ll_backend__unify_gen__STATE_VARIABLE_CLD_27);
    }
    {
      ll_backend__unify_gen__VarType_21 = ll_backend__code_info__variable_type_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__Var_11);
    }
    {
      ll_backend__unify_gen__VarName_22 = ll_backend__code_info__variable_name_2_f_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__Var_11);
    }
    {
      ll_backend__unify_gen__ConsIdName_44 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ll_backend__unify_gen__ConsId_12);
    }
    ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__CheaperTagTest_13)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__unify_gen__succeeded)
      {
        ll_backend__unify_gen__ExpensiveConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_13, (MR_Integer) 0)));
        ll_backend__unify_gen___ExpensiveConsTag_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_13, (MR_Integer) 1)));
        ll_backend__unify_gen___CheapConsId_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_13, (MR_Integer) 2)));
        ll_backend__unify_gen__CheapConsTag_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__CheaperTagTest_13, (MR_Integer) 3)));
        {
          ll_backend__unify_gen__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ll_backend__unify_gen__ConsId_12, ll_backend__unify_gen__ExpensiveConsId_45);
        }
      }
    if (ll_backend__unify_gen__succeeded)
      {
        MR_Word ll_backend__unify_gen__NegTestRval_50;
        MR_String ll_backend__unify_gen__Var_55;
        MR_String ll_backend__unify_gen__Var_56;
        MR_String ll_backend__unify_gen__Var_57;
        MR_String ll_backend__unify_gen__Var_59;

        switch (ll_backend__unify_gen__Sense_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ll_backend__unify_gen__Var_55 = (MR_String) "branch away unless ";
            break;
          case (MR_Integer) 0:
            ll_backend__unify_gen__Var_55 = (MR_String) "branch away if ";
            break;
        }
        {
          ll_backend__unify_gen__Var_59 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__ConsIdName_44, (MR_String) " (inverted test)");
        }
        {
          ll_backend__unify_gen__Var_57 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__Var_59);
        }
        {
          ll_backend__unify_gen__Var_56 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_22, ll_backend__unify_gen__Var_57);
        }
        {
          ll_backend__unify_gen__Comment_49 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__Var_55, ll_backend__unify_gen__Var_56);
        }
        {
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_20, ll_backend__unify_gen__CheapConsTag_48, &ll_backend__unify_gen__NegTestRval_50);
        }
        {
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__NegTestRval_50, &ll_backend__unify_gen__TestRval_51);
        }
      }
    else
      {
        MR_Word ll_backend__unify_gen__ConsTag_52;
        MR_Word ll_backend__unify_gen__ModuleInfo_53;
        MR_String ll_backend__unify_gen__Var_61;
        MR_String ll_backend__unify_gen__Var_62;
        MR_String ll_backend__unify_gen__Var_63;

        switch (ll_backend__unify_gen__Sense_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ll_backend__unify_gen__Var_61 = (MR_String) "branch away unless ";
            break;
          case (MR_Integer) 0:
            ll_backend__unify_gen__Var_61 = (MR_String) "branch away if ";
            break;
        }
        {
          ll_backend__unify_gen__Var_63 = mercury__string__f_43_43_2_f_0((MR_String) " has functor ", ll_backend__unify_gen__ConsIdName_44);
        }
        {
          ll_backend__unify_gen__Var_62 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__VarName_22, ll_backend__unify_gen__Var_63);
        }
        {
          ll_backend__unify_gen__Comment_49 = mercury__string__f_43_43_2_f_0(ll_backend__unify_gen__Var_61, ll_backend__unify_gen__Var_62);
        }
        {
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, &ll_backend__unify_gen__ModuleInfo_53);
        }
        {
          ll_backend__unify_gen__ConsTag_52 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ll_backend__unify_gen__ModuleInfo_53, ll_backend__unify_gen__ConsId_12);
        }
        {
          ll_backend__unify_gen__raw_tag_test_3_p_0(ll_backend__unify_gen__VarRval_20, ll_backend__unify_gen__ConsTag_52, &ll_backend__unify_gen__TestRval_51);
        }
      }
    {
      ll_backend__code_info__get_next_label_3_p_0(ll_backend__unify_gen__ElseLabel_15, ll_backend__unify_gen__STATE_VARIABLE_CI_0_24, ll_backend__unify_gen__STATE_VARIABLE_CI_25);
    }
    switch (ll_backend__unify_gen__Sense_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ll_backend__code_util__neg_rval_2_p_0(ll_backend__unify_gen__TestRval_51, &ll_backend__unify_gen__TheRval_54);
        }
        break;
      case (MR_Integer) 0:
        ll_backend__unify_gen__TheRval_54 = ll_backend__unify_gen__TestRval_51;
        break;
    }
    {
      ll_backend__unify_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Var_68, 0) = ((MR_Box) (*ll_backend__unify_gen__ElseLabel_15));
    }
    {
      ll_backend__unify_gen__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_67, 1) = ((MR_Box) (ll_backend__unify_gen__TheRval_54));
      MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_67, 2) = ((MR_Box) (ll_backend__unify_gen__Var_68));
    }
    {
      ll_backend__unify_gen__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_66, 0) = ((MR_Box) (ll_backend__unify_gen__Var_67));
      MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_66, 1) = ((MR_Box) (ll_backend__unify_gen__Comment_49));
    }
    {
      ll_backend__unify_gen__TestCode_23 = mercury__cord__singleton_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ((MR_Box) (ll_backend__unify_gen__Var_66)));
    }
    {
      *ll_backend__unify_gen__Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__unify_gen__VarCode_19, ll_backend__unify_gen__TestCode_23);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0_1(
  MR_Box ll_backend__unify_gen__closure_arg,
  MR_Box ll_backend__unify_gen__wrapper_arg_1,
  MR_Box ll_backend__unify_gen__wrapper_arg_2,
  MR_Box * ll_backend__unify_gen__wrapper_arg_3)
{
  {
    MR_Box ll_backend__unify_gen__closure = ll_backend__unify_gen__closure_arg;
    MR_Word ll_backend__unify_gen__conv0_HeadVar__3_3;

    {
      ll_backend__code_loc_dep__release_reg_3_p_0(((MR_Word) ll_backend__unify_gen__wrapper_arg_1), ((MR_Word) ll_backend__unify_gen__wrapper_arg_2), &ll_backend__unify_gen__conv0_HeadVar__3_3);
    }
    *ll_backend__unify_gen__wrapper_arg_3 = ((MR_Box) (ll_backend__unify_gen__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__unify_gen__generate_unification_8_p_0(
  MR_Word ll_backend__unify_gen__CodeModel_9,
  MR_Word ll_backend__unify_gen__Uni_10,
  MR_Word ll_backend__unify_gen__GoalInfo_11,
  MR_Word * ll_backend__unify_gen__Code_12,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CI_0_43,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CI_44,
  MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45,
  MR_Word * ll_backend__unify_gen__STATE_VARIABLE_CLD_46)
{
  {
    MR_bool ll_backend__unify_gen__succeeded;

    switch (ll_backend__unify_gen__CodeModel_9) {
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
    switch (MR_tag((MR_Word) ll_backend__unify_gen__Uni_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__unify_gen__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 1)));
          MR_Word ll_backend__unify_gen__RHSVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 2)));
          MR_Word ll_backend__unify_gen__ArgModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 3)));
          MR_Word ll_backend__unify_gen__HowToConstruct_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 4)));
          MR_Word ll_backend__unify_gen__SubInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 6)));
          MR_Word ll_backend__unify_gen__MaybeTakeAddr_23;
          MR_Word ll_backend__unify_gen__MaybeSize_24;
          MR_Word ll_backend__unify_gen__LHSVar_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Uni_10, (MR_Integer) 5)));

          if ((ll_backend__unify_gen__SubInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ll_backend__unify_gen__MaybeTakeAddr_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ll_backend__unify_gen__MaybeSize_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              ll_backend__unify_gen__MaybeTakeAddr_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__SubInfo_22, (MR_Integer) 0)));
              ll_backend__unify_gen__MaybeSize_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__SubInfo_22, (MR_Integer) 1)));
            }
          {
            ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45, ll_backend__unify_gen__LHSVar_76);
          }
          if (!(ll_backend__unify_gen__succeeded))
            {
              MR_Word ll_backend__unify_gen__Var_25;

              ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__MaybeTakeAddr_23)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__unify_gen__succeeded)
                ll_backend__unify_gen__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeTakeAddr_23, (MR_Integer) 0)));
            }
          if (ll_backend__unify_gen__succeeded)
            {
              MR_Word ll_backend__unify_gen__TakeAddr_26;
              MR_Word ll_backend__unify_gen__ModuleInfo_27;
              MR_Word ll_backend__unify_gen__ConsArgWidths_28;

              if ((ll_backend__unify_gen__MaybeTakeAddr_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__unify_gen__TakeAddr_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                ll_backend__unify_gen__TakeAddr_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__MaybeTakeAddr_23, (MR_Integer) 0)));
              {
                ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_43, &ll_backend__unify_gen__ModuleInfo_27);
              }
              {
                ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__ModuleInfo_27, ll_backend__unify_gen__ConsId_17, ll_backend__unify_gen__RHSVars_18, &ll_backend__unify_gen__ConsArgWidths_28);
              }
              {
                ll_backend__unify_gen__generate_construction_14_p_0(ll_backend__unify_gen__LHSVar_76, ll_backend__unify_gen__ConsId_17, ll_backend__unify_gen__RHSVars_18, ll_backend__unify_gen__ArgModes_19, ll_backend__unify_gen__ConsArgWidths_28, ll_backend__unify_gen__HowToConstruct_20, ll_backend__unify_gen__TakeAddr_26, ll_backend__unify_gen__MaybeSize_24, ll_backend__unify_gen__GoalInfo_11, ll_backend__unify_gen__Code_12, ll_backend__unify_gen__STATE_VARIABLE_CI_0_43, ll_backend__unify_gen__STATE_VARIABLE_CI_44, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45, ll_backend__unify_gen__STATE_VARIABLE_CLD_46);
              }
            }
          else
            {
              {
                *ll_backend__unify_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__unify_gen__STATE_VARIABLE_CLD_46 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45;
              *ll_backend__unify_gen__STATE_VARIABLE_CI_44 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_43;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__unify_gen__CanCGC_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 5)));
          MR_Word ll_backend__unify_gen__Code0_31;
          MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_60_60;
          MR_Word ll_backend__unify_gen__LHSVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__ConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 1)));
          MR_Word ll_backend__unify_gen__RHSVars_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 2)));
          MR_Word ll_backend__unify_gen__ArgModes_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 3)));
          MR_Word ll_backend__unify_gen__ModuleInfo_81;
          MR_Word ll_backend__unify_gen__ConsArgWidths_82;
          MR_Word ll_backend__unify_gen___CanFail_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__unify_gen__Uni_10, (MR_Integer) 4)));

          {
            ll_backend__code_info__get_module_info_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CI_0_43, &ll_backend__unify_gen__ModuleInfo_81);
          }
          {
            ll_backend__unify_gen__get_cons_arg_widths_4_p_0((MR_Word) &ll_backend__unify_gen_scalar_common_1[0], ll_backend__unify_gen__ModuleInfo_81, ll_backend__unify_gen__ConsId_78, ll_backend__unify_gen__RHSVars_79, &ll_backend__unify_gen__ConsArgWidths_82);
          }
          switch (ll_backend__unify_gen__CodeModel_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  ll_backend__unify_gen__generate_det_deconstruction_9_p_0(ll_backend__unify_gen__LHSVar_77, ll_backend__unify_gen__ConsId_78, ll_backend__unify_gen__RHSVars_79, ll_backend__unify_gen__ArgModes_80, ll_backend__unify_gen__ConsArgWidths_82, &ll_backend__unify_gen__Code0_31, ll_backend__unify_gen__STATE_VARIABLE_CI_0_43, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45, &ll_backend__unify_gen__STATE_VARIABLE_CLD_60_60);
                }
                *ll_backend__unify_gen__STATE_VARIABLE_CI_44 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_43;
              }
              break;
            case (MR_Integer) 1:
              {
                ll_backend__unify_gen__generate_semi_deconstruction_10_p_0(ll_backend__unify_gen__LHSVar_77, ll_backend__unify_gen__ConsId_78, ll_backend__unify_gen__RHSVars_79, ll_backend__unify_gen__ArgModes_80, ll_backend__unify_gen__ConsArgWidths_82, &ll_backend__unify_gen__Code0_31, ll_backend__unify_gen__STATE_VARIABLE_CI_0_43, ll_backend__unify_gen__STATE_VARIABLE_CI_44, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45, &ll_backend__unify_gen__STATE_VARIABLE_CLD_60_60);
              }
              break;
          }
          switch (ll_backend__unify_gen__CanCGC_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ll_backend__unify_gen__LHSVarName_32;
                MR_Word ll_backend__unify_gen__ProduceVar_33;
                MR_Word ll_backend__unify_gen__VarRval_34;
                MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61;
                MR_Word ll_backend__unify_gen__VarLval_35;

                {
                  ll_backend__unify_gen__LHSVarName_32 = ll_backend__code_info__variable_name_2_f_0(*ll_backend__unify_gen__STATE_VARIABLE_CI_44, ll_backend__unify_gen__LHSVar_77);
                }
                {
                  ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__unify_gen__LHSVar_77, &ll_backend__unify_gen__ProduceVar_33, &ll_backend__unify_gen__VarRval_34, *ll_backend__unify_gen__STATE_VARIABLE_CI_44, ll_backend__unify_gen__STATE_VARIABLE_CLD_60_60, &ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61);
                }
                ll_backend__unify_gen__succeeded = ((MR_tag((MR_Word) ll_backend__unify_gen__VarRval_34)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__unify_gen__succeeded)
                  {
                    ll_backend__unify_gen__VarLval_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__unify_gen__VarRval_34, (MR_Integer) 0)));
                    {
                      MR_Word ll_backend__unify_gen__TypeCtorInfo_94_94;
                      MR_Word ll_backend__unify_gen__SaveArgs_36;
                      MR_Word ll_backend__unify_gen__Regs_37;
                      MR_Word ll_backend__unify_gen__FreeVar_38;
                      MR_Word ll_backend__unify_gen__STATE_VARIABLE_CLD_62_62;
                      MR_Word ll_backend__unify_gen__Var_65;
                      MR_Word ll_backend__unify_gen__Var_66;
                      MR_Word ll_backend__unify_gen__Var_67;
                      MR_String ll_backend__unify_gen__Var_69;
                      MR_Word ll_backend__unify_gen__Var_71;
                      MR_Word ll_backend__unify_gen__Var_72;
                      MR_Box ll_backend__unify_gen__conv1_STATE_VARIABLE_CLD_46;

                      {
                        ll_backend__code_loc_dep__save_reused_cell_fields_7_p_0(ll_backend__unify_gen__LHSVar_77, ll_backend__unify_gen__VarLval_35, &ll_backend__unify_gen__SaveArgs_36, &ll_backend__unify_gen__Regs_37, *ll_backend__unify_gen__STATE_VARIABLE_CI_44, ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61, &ll_backend__unify_gen__STATE_VARIABLE_CLD_62_62);
                      }
                      {
                        mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0, (MR_Word) &ll_backend__unify_gen_scalar_common_2[3], ll_backend__unify_gen__Regs_37, ((MR_Box) (ll_backend__unify_gen__STATE_VARIABLE_CLD_62_62)), &ll_backend__unify_gen__conv1_STATE_VARIABLE_CLD_46);
                      }
                      *ll_backend__unify_gen__STATE_VARIABLE_CLD_46 = ((MR_Word) ll_backend__unify_gen__conv1_STATE_VARIABLE_CLD_46);
                      ll_backend__unify_gen__TypeCtorInfo_94_94 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                      {
                        ll_backend__unify_gen__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_67, 1) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_67, 2) = ((MR_Box) (ll_backend__unify_gen__VarRval_34));
                      }
                      {
                        ll_backend__unify_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                        MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Var_66, 1) = ((MR_Box) (ll_backend__unify_gen__Var_67));
                      }
                      {
                        ll_backend__unify_gen__Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", ll_backend__unify_gen__LHSVarName_32);
                      }
                      {
                        ll_backend__unify_gen__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_65, 0) = ((MR_Box) (ll_backend__unify_gen__Var_66));
                        MR_hl_field(MR_mktag(0), ll_backend__unify_gen__Var_65, 1) = ((MR_Box) (ll_backend__unify_gen__Var_69));
                      }
                      {
                        ll_backend__unify_gen__FreeVar_38 = mercury__cord__singleton_1_f_0(ll_backend__unify_gen__TypeCtorInfo_94_94, ((MR_Box) (ll_backend__unify_gen__Var_65)));
                      }
                      {
                        ll_backend__unify_gen__Var_72 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_94_94, ll_backend__unify_gen__SaveArgs_36, ll_backend__unify_gen__FreeVar_38);
                      }
                      {
                        ll_backend__unify_gen__Var_71 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_94_94, ll_backend__unify_gen__ProduceVar_33, ll_backend__unify_gen__Var_72);
                      }
                      {
                        *ll_backend__unify_gen__Code_12 = mercury__cord__f_43_43_2_f_0(ll_backend__unify_gen__TypeCtorInfo_94_94, ll_backend__unify_gen__Code0_31, ll_backend__unify_gen__Var_71);
                      }
                    }
                  }
                else
                  {
                    *ll_backend__unify_gen__Code_12 = ll_backend__unify_gen__Code0_31;
                    *ll_backend__unify_gen__STATE_VARIABLE_CLD_46 = ll_backend__unify_gen__STATE_VARIABLE_CLD_61_61;
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                *ll_backend__unify_gen__Code_12 = ll_backend__unify_gen__Code0_31;
                *ll_backend__unify_gen__STATE_VARIABLE_CLD_46 = ll_backend__unify_gen__STATE_VARIABLE_CLD_60_60;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__unify_gen__LHSVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Uni_10, (MR_Integer) 0)));
          MR_Word ll_backend__unify_gen__RHSVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__unify_gen__Uni_10, (MR_Integer) 1)));

          {
            ll_backend__unify_gen__succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45, ll_backend__unify_gen__LHSVar_15);
          }
          if (ll_backend__unify_gen__succeeded)
            {
              ll_backend__unify_gen__generate_assignment_5_p_0(ll_backend__unify_gen__LHSVar_15, ll_backend__unify_gen__RHSVar_16, ll_backend__unify_gen__Code_12, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45, ll_backend__unify_gen__STATE_VARIABLE_CLD_46);
            }
          else
            {
              {
                *ll_backend__unify_gen__Code_12 = mercury__cord__empty_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
              }
              *ll_backend__unify_gen__STATE_VARIABLE_CLD_46 = ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45;
            }
          *ll_backend__unify_gen__STATE_VARIABLE_CI_44 = ll_backend__unify_gen__STATE_VARIABLE_CI_0_43;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__unify_gen__VarA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_10, (MR_Integer) 1)));
              MR_Word ll_backend__unify_gen__VarB_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__unify_gen__Uni_10, (MR_Integer) 2)));

              switch (ll_backend__unify_gen__CodeModel_9) {
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
                  {
                    ll_backend__unify_gen__generate_test_7_p_0(ll_backend__unify_gen__VarA_39, ll_backend__unify_gen__VarB_40, ll_backend__unify_gen__Code_12, ll_backend__unify_gen__STATE_VARIABLE_CI_0_43, ll_backend__unify_gen__STATE_VARIABLE_CI_44, ll_backend__unify_gen__STATE_VARIABLE_CLD_0_45, ll_backend__unify_gen__STATE_VARIABLE_CLD_46);
                  }
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

/* :- end_module ll_backend.unify_gen. */
