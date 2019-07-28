/*
** Automatically generated from `table_gen.m'
** by the Mercury compiler,
** version rotd-2019-07-28
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


// :- module transform_hlds.table_gen.
// :- implementation.

/*
INIT mercury__transform_hlds__table_gen__init
ENDINIT
*/

#include "transform_hlds.table_gen.mih"


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
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
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
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0_s {
  MR_Word * transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__TabledForIoAttr_4;
  MR_Cont transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont;
  void * transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont_env_ptr;
  MR_bool transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded;
  MR_Word transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14;
  MR_Word transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__SubGoal_15;
  MR_Word transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Attrs_16;
};

struct transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0_s {
  MR_Word * transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__MayCallMercuryAttr_4;
  MR_Cont transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont;
  void * transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont_env_ptr;
  MR_bool transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__succeeded;
  MR_Word transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14;
  MR_Word transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__SubGoal_15;
  MR_Word transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Attrs_16;
};

struct transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0_s {
  MR_Box * transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__cont;
  void * transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__cont_env_ptr;
  MR_Word transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__conv1_MayCallMercuryAttr_4;
};

struct transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0_s {
  MR_Box * transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__cont;
  void * transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__conv0_TabledForIoAttr_4;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_0;

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_value_ordered_call_or_answer_table_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_call_or_answer_table_0[2];

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_call_or_answer_table_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__table_gen__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_maybe_specified_method_0_0[1];

static const MR_DuArgLocn transform_hlds__table_gen__transform_hlds__table_gen__field_locns_maybe_specified_method_0_0[1];

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_maybe_specified_method_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__list__ti_list_1maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_maybe_specified_method_0_1[2];

static const MR_DuArgLocn transform_hlds__table_gen__transform_hlds__table_gen__field_locns_maybe_specified_method_0_1[2];

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_maybe_specified_method_0_1;

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_maybe_specified_method_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_maybe_specified_method_0_1[1];

static const MR_DuPtagLayout transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_maybe_specified_method_0[2];

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_maybe_specified_method_0[2];

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_maybe_specified_method_0[2];

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_table_info_0_0[3];

static const MR_ConstString transform_hlds__table_gen__transform_hlds__table_gen__field_names_table_info_0_0[3];

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_table_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_table_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_table_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_table_info_0[1];

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_table_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_var_mode_method_0_0[3];

static const MR_DuArgLocn transform_hlds__table_gen__transform_hlds__table_gen__field_locns_var_mode_method_0_0[3];

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_var_mode_method_0_0;

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_var_mode_method_0_0[1];

static const MR_DuPtagLayout transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_var_mode_method_0[1];

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_var_mode_method_0[1];

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_var_mode_method_0[1];

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_var_mode_pos_method_1_0[4];

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_var_mode_pos_method_1_0;

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_var_mode_pos_method_1_0[1];

static const MR_DuPtagLayout transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_var_mode_pos_method_1[1];

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_var_mode_pos_method_1[1];

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_var_mode_pos_method_1[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__ti_var_mode_pos_method_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0;

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_make_type_info_vars__3825__1_2_p_0(
  MR_Word PolySpecs_25,
  MR_Word HeadVar__2_38);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__get_input_output_vars__3426__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word LastMaybeArgMethod_70);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_mm_restore_or_suspend_goal__3160__1_1_f_0(
  MR_Word HeadVar__1_76);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_restore_goal__3086__1_1_f_0(
  MR_Word HeadVar__1_77);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_mm_call_table_lookup_goal__2288__1_1_f_0(
  MR_Word HeadVar__1_139);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_call_table_lookup_goal__2229__1_1_f_0(
  MR_Word HeadVar__1_139);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_simple_call_table_lookup_goal__2171__1_1_f_0(
  MR_Word HeadVar__1_127);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_gen_proc_table_info__2113__1_1_f_0(
  MR_Word HeadVar__1_41);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1865__1_2_f_0(
  MR_Word ModuleInfo0_40,
  MR_Word HeadVar__2_174);

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_105_110_105_116_95_105_110_115_116_95_95_91_49_93_95_48_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1863__1_1_f_0(
  MR_Word HeadVar__1_170);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1861__1_1_f_0(
  MR_Word HeadVar__1_166);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_transform__1722__1_1_f_0(
  MR_Word HeadVar__1_259);

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_109_111_100_101_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1361__1_1_f_0(
  MR_Word HeadVar__1_315);

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_112_111_115_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__create_new_io_goal__1355__1_2_p_0(
  MR_Word UnnumberedSavedOutputVars_62,
  MR_Word HeadVar__2_311);

static MR_bool MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_98_101_108_111_110_103_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word List_3,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1354__1_1_f_0(
  MR_Word HeadVar__1_308);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_non_goal__1182__1_1_f_0(
  MR_Word HeadVar__1_204);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_goal__1020__1_1_f_0(
  MR_Word HeadVar__1_178);

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_loop_goal__791__1_1_f_0(
  MR_Word HeadVar__1_211);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__540__1_2_p_0(
  MR_Word CodeModel_21,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__444__1_2_p_0(
  MR_Word MaybeAttributes_27,
  MR_Word HeadVar__2_93);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__477__1_2_p_0(
  MR_Word MaybeSpecMethod_31,
  MR_Word HeadVar__2_88);

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__475__1_2_p_0(
  MR_Word MaybeSizeLimit_33,
  MR_Word HeadVar__2_84);

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____table_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____table_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____maybe_specified_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____maybe_specified_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____generator_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____generator_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____call_or_answer_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____call_or_answer_table_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
transform_hlds__table_gen__answer_table_name_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__pred_name_var_name_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__num_input_args_name_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__table_tip_node_name_0_f_0(void);

static MR_bool MR_CALL 
transform_hlds__table_gen__var_mode_is_io_state_2_p_0(
  MR_Word VarTypes_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__table_gen__var_mode_pos_is_io_state_2_p_0(
  MR_Word VarTypes_3,
  MR_Word VarModePosMethod_4);

static MR_Word MR_CALL 
transform_hlds__table_gen__project_out_pos_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__table_gen__project_out_arg_method_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__table_gen__filter_marker_1_p_0(
  MR_Word Marker_2);

static void MR_CALL 
transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0(
  MR_Word Goal_3,
  MR_Word * TabledForIoAttr_4,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0(
  MR_Word Goal_3,
  MR_Word * MayCallMercuryAttr_4,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_preds_8_p_0(
  MR_Word TraceTableIO_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_GenMap_0_5,
  MR_Word * STATE_VARIABLE_GenMap_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_procs_9_p_0(
  MR_Word TraceTableIO_1,
  MR_Word PredId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_GenMap_0_6,
  MR_Word * STATE_VARIABLE_GenMap_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_io_proc_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word ProcInfo0_13,
  MR_Word PredInfo0_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_GenMap_0_41,
  MR_Word * STATE_VARIABLE_GenMap_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_if_possible_13_p_0(
  MR_Word EvalMethod_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31,
  MR_Word STATE_VARIABLE_PredInfo_0_32,
  MR_Word * STATE_VARIABLE_PredInfo_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_GenMap_0_36,
  MR_Word * STATE_VARIABLE_GenMap_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0(
  MR_Word EvalMethod_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_71,
  MR_Word * STATE_VARIABLE_ProcInfo_72,
  MR_Word STATE_VARIABLE_PredInfo_0_73,
  MR_Word * STATE_VARIABLE_PredInfo_74,
  MR_Word STATE_VARIABLE_ModuleInfo_0_75,
  MR_Word * STATE_VARIABLE_ModuleInfo_76,
  MR_Word STATE_VARIABLE_GenMap_0_77,
  MR_Word * STATE_VARIABLE_GenMap_78);

static MR_Box MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_19_p_0(
  MR_Word Detism_20,
  MR_Word OrigGoal_21,
  MR_Word Statistics_22,
  MR_Word PredId_24,
  MR_Integer ProcId_25,
  MR_Word HeadVars_26,
  MR_Word NumberedInputVars_27,
  MR_Word NumberedOutputVars_28,
  MR_Word STATE_VARIABLE_VarSet_0_89,
  MR_Word * STATE_VARIABLE_VarSet_90,
  MR_Word STATE_VARIABLE_VarTypes_0_91,
  MR_Word * STATE_VARIABLE_VarTypes_92,
  MR_Word STATE_VARIABLE_TableInfo_0_93,
  MR_Word * STATE_VARIABLE_TableInfo_94,
  MR_Word * RecordVar_32,
  MR_Word * Goal_33,
  MR_Word * InputSteps_34,
  MR_Word * OutputSteps_35);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_complete_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_incomplete_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_active_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_inactive_cons_id_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__need_minimal_model_msg_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_memo_non_restore_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_restore_goal_11_p_0(
  MR_Word Detism_12,
  MR_Word NumberedOutputVars_13,
  MR_Word OrigInstMapDelta_14,
  MR_Word RecordVar_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_VarTypes_0_39,
  MR_Word * STATE_VARIABLE_VarTypes_40,
  MR_Word TableInfo_19,
  MR_Word * Goal_20);

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_save_goals_15_p_0(
  MR_Word NumberedSaveVars_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word RecordVar_19,
  MR_Integer BlockSize_20,
  MR_Word Statistics_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_VarTypes_0_52,
  MR_Word * STATE_VARIABLE_VarTypes_53,
  MR_Word STATE_VARIABLE_TableInfo_0_54,
  MR_Word * STATE_VARIABLE_TableInfo_55,
  MR_Word * OutputSteps_26,
  MR_Word * Goals_27);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_15_p_0(
  MR_Word NumberedVars_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_55,
  MR_Word * STATE_VARIABLE_VarSet_56,
  MR_Word STATE_VARIABLE_VarTypes_0_57,
  MR_Word * STATE_VARIABLE_VarTypes_58,
  MR_Word STATE_VARIABLE_TableInfo_0_59,
  MR_Word * STATE_VARIABLE_TableInfo_60,
  MR_Word * RecordVar_24,
  MR_Word * StatusVar_25,
  MR_Word * Goal_26,
  MR_Word * Steps_27);

static MR_String MR_CALL 
transform_hlds__table_gen__memo_non_record_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_status_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_record_type_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_18_p_0(
  MR_Word Detism_19,
  MR_Word OrigGoal_20,
  MR_Word Statistics_21,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word HeadVars_25,
  MR_Word NumberedInputVars_26,
  MR_Word NumberedOutputVars_27,
  MR_Word STATE_VARIABLE_VarSet_0_80,
  MR_Word * STATE_VARIABLE_VarSet_81,
  MR_Word STATE_VARIABLE_VarTypes_0_82,
  MR_Word * STATE_VARIABLE_VarTypes_83,
  MR_Word STATE_VARIABLE_TableInfo_0_84,
  MR_Word * STATE_VARIABLE_TableInfo_85,
  MR_Word * TableTipVar_31,
  MR_Word * Goal_32,
  MR_Word * Steps_33);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_status_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_status_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_failed_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_succeeded_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_active_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_inactive_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_succeeded_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_active_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_inactive_cons_id_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__table_info_extract_4_p_0(
  MR_Word TableInfo_5,
  MR_Word * ModuleInfo_6,
  MR_Word * PredInfo_7,
  MR_Word * ProcInfo_8);

static MR_bool MR_CALL 
transform_hlds__table_gen__get_input_output_vars_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__table_gen__get_input_output_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Word STATE_VARIABLE_MaybeSpecMethod_0_4,
  MR_Word * STATE_VARIABLE_MaybeSpecMethod_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_transform_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__do_own_stack_transform_21_p_0(
  MR_Word Detism_22,
  MR_Word OrigGoal_23,
  MR_Word Statistics_24,
  MR_Word PredId_25,
  MR_Integer ProcId_26,
  MR_Word PredInfo0_27,
  MR_Word ProcInfo0_28,
  MR_Word HeadVars_29,
  MR_Word NumberedInputVars_30,
  MR_Word NumberedOutputVars_31,
  MR_Word STATE_VARIABLE_VarSet_0_91,
  MR_Word * STATE_VARIABLE_VarSet_92,
  MR_Word STATE_VARIABLE_VarTypes_0_93,
  MR_Word * STATE_VARIABLE_VarTypes_94,
  MR_Word STATE_VARIABLE_TableInfo_0_95,
  MR_Word * STATE_VARIABLE_TableInfo_96,
  MR_Word STATE_VARIABLE_GenMap_0_97,
  MR_Word * STATE_VARIABLE_GenMap_98,
  MR_Word * Goal_36,
  MR_Word * InputSteps_37,
  MR_Word * OutputSteps_38);

static void MR_CALL 
transform_hlds__table_gen__table_info_init_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * TableInfo_8);

static MR_String MR_CALL 
transform_hlds__table_gen__generator_pred_name_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__consumer_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__make_generator_c_attributes_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__consumer_type_0_f_0(void);

static MR_bool MR_CALL 
transform_hlds__table_gen__clone_pred_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__clone_pred_info_7_p_0(
  MR_Word OrigPredId_8,
  MR_Word PredInfo0_9,
  MR_Word HeadVars_10,
  MR_Word NumberedOutputVars_11,
  MR_Word * GeneratorPredId_12,
  MR_Word STATE_VARIABLE_TableInfo_0_44,
  MR_Word * STATE_VARIABLE_TableInfo_45);

static void MR_CALL 
transform_hlds__table_gen__keep_only_output_arg_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0(
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word STATE_VARIABLE_PredInfo_0_75,
  MR_Word STATE_VARIABLE_ProcInfo_0_76,
  MR_Word Statistics_25,
  MR_Word Context_26,
  MR_Word GeneratorVar_27,
  MR_String DebugArgStr_28,
  MR_String PickupVarCode_29,
  MR_Word PickupForeignArgs_30,
  MR_Word NumberedInputVars_31,
  MR_Word NumberedOutputVars_32,
  MR_Word OrigNonLocals_33,
  MR_Word OrigInstMapDelta_34,
  MR_Word STATE_VARIABLE_VarTypes_0_77,
  MR_Word STATE_VARIABLE_VarSet_0_78,
  MR_Word STATE_VARIABLE_TableInfo_0_79,
  MR_Word * STATE_VARIABLE_TableInfo_80,
  MR_Word InputSteps_38,
  MR_Word * OutputSteps_39);

static void MR_CALL 
transform_hlds__table_gen__add_proc_table_struct_5_p_0(
  MR_Word PredProcId_6,
  MR_Word ProcTableStructInfo_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
transform_hlds__table_gen__generate_own_stack_save_return_goal_15_p_0(
  MR_Word NumberedOutputVars_16,
  MR_Word GeneratorVar_17,
  MR_Word PredId_18,
  MR_Integer ProcId_19,
  MR_Integer BlockSize_20,
  MR_Word Statistics_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_VarSet_0_54,
  MR_Word * STATE_VARIABLE_VarSet_55,
  MR_Word STATE_VARIABLE_VarTypes_0_56,
  MR_Word * STATE_VARIABLE_VarTypes_57,
  MR_Word STATE_VARIABLE_TableInfo_0_58,
  MR_Word * STATE_VARIABLE_TableInfo_59,
  MR_Word * OutputSteps_26,
  MR_Word * Goals_27);

static MR_String MR_CALL 
transform_hlds__table_gen__returning_generator_locn_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__generator_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__generator_type_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(
  MR_Word TableInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word InputSteps_12,
  MR_Word MaybeOutputSteps_13,
  MR_Word InputVars_14,
  MR_Word OutputVars_15,
  MR_Word * ProcTableStructInfo_16);

static void MR_CALL 
transform_hlds__table_gen__allocate_slot_numbers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset0_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__table_gen__generate_save_input_vars_code_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Integer Pos_3,
  MR_Word * HeadVar__4_4,
  MR_String * HeadVar__5_5,
  MR_String * HeadVar__6_6);

static void MR_CALL 
transform_hlds__table_gen__create_new_mm_goal_18_p_0(
  MR_Word Detism_19,
  MR_Word OrigGoal_20,
  MR_Word Statistics_21,
  MR_Word PredId_22,
  MR_Integer ProcId_23,
  MR_Word HeadVars_24,
  MR_Word NumberedInputVars_25,
  MR_Word NumberedOutputVars_26,
  MR_Word STATE_VARIABLE_VarSet_0_62,
  MR_Word * STATE_VARIABLE_VarSet_63,
  MR_Word STATE_VARIABLE_VarTypes_0_64,
  MR_Word * STATE_VARIABLE_VarTypes_65,
  MR_Word STATE_VARIABLE_TableInfo_0_66,
  MR_Word * STATE_VARIABLE_TableInfo_67,
  MR_Word * SubgoalVar_30,
  MR_Word * Goal_31,
  MR_Word * InputSteps_32,
  MR_Word * OutputSteps_33);

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_complete_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_active_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_inactive_cons_id_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__append_fail_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalAndThenFail_4);

static void MR_CALL 
transform_hlds__table_gen__generate_mm_suspend_goal_10_p_0(
  MR_Word NumberedOutputVars_11,
  MR_Word OrigInstMapDelta_12,
  MR_Word SubgoalVar_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22,
  MR_Word TableInfo_17,
  MR_Word * Goal_18);

static void MR_CALL 
transform_hlds__table_gen__generate_mm_restore_goal_11_p_0(
  MR_Word Detism_12,
  MR_Word NumberedOutputVars_13,
  MR_Word OrigInstMapDelta_14,
  MR_Word SubgoalVar_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word TableInfo_19,
  MR_Word * Goal_20);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_13_p_0(
  MR_String PredName_14,
  MR_Word Detism_15,
  MR_Word Purity_16,
  MR_Word NumberedOutputVars_17,
  MR_Word OrigInstMapDelta_18,
  MR_Word SubgoalVar_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_VarTypes_0_42,
  MR_Word * STATE_VARIABLE_VarTypes_43,
  MR_Word TableInfo_23,
  MR_Word * Goal_24);

static MR_Word MR_CALL 
transform_hlds__table_gen__answer_block_type_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__generate_mm_save_goals_15_p_0(
  MR_Word NumberedSaveVars_16,
  MR_Word SubgoalVar_17,
  MR_Word PredId_18,
  MR_Integer ProcId_19,
  MR_Integer BlockSize_20,
  MR_Word Statistics_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_VarSet_0_51,
  MR_Word * STATE_VARIABLE_VarSet_52,
  MR_Word STATE_VARIABLE_VarTypes_0_53,
  MR_Word * STATE_VARIABLE_VarTypes_54,
  MR_Word STATE_VARIABLE_TableInfo_0_55,
  MR_Word * STATE_VARIABLE_TableInfo_56,
  MR_Word * OutputSteps_26,
  MR_Word * Goals_27);

static MR_String MR_CALL 
transform_hlds__table_gen__success_indicator_name_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__generate_answer_table_lookup_goals_15_p_0(
  MR_Word NumberedVars_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_VarTypes_0_39,
  MR_Word * STATE_VARIABLE_VarTypes_40,
  MR_Word STATE_VARIABLE_TableInfo_0_41,
  MR_Word * STATE_VARIABLE_TableInfo_42,
  MR_Word * OutputSteps_24,
  MR_Word * ForeignArgs_25,
  MR_Word * PrefixGoals_26,
  MR_String * CodeStr_27);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_mm_call_table_lookup_goal_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_mm_call_table_lookup_goal_15_p_0(
  MR_Word NumberedVars_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_56,
  MR_Word * STATE_VARIABLE_VarSet_57,
  MR_Word STATE_VARIABLE_VarTypes_0_58,
  MR_Word * STATE_VARIABLE_VarTypes_59,
  MR_Word STATE_VARIABLE_TableInfo_0_60,
  MR_Word * STATE_VARIABLE_TableInfo_61,
  MR_Word * SubgoalVar_24,
  MR_Word * StatusVar_25,
  MR_Word * Goal_26,
  MR_Word * Steps_27);

static MR_String MR_CALL 
transform_hlds__table_gen__subgoal_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_status_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__subgoal_type_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0(
  MR_Word OrigGoal_18,
  MR_Word TableIoEntryKind_19,
  MR_Word Unitize_20,
  MR_Word TableIoStates_21,
  MR_Word PredId_22,
  MR_Integer ProcId_23,
  MR_Word HeadVarModes_24,
  MR_Word OrigInputVars_25,
  MR_Word OrigOutputVars_26,
  MR_Word STATE_VARIABLE_VarSet_0_114,
  MR_Word * STATE_VARIABLE_VarSet_115,
  MR_Word STATE_VARIABLE_VarTypes_0_116,
  MR_Word * STATE_VARIABLE_VarTypes_117,
  MR_Word STATE_VARIABLE_TableInfo_0_118,
  MR_Word * STATE_VARIABLE_TableInfo_119,
  MR_Word * Goal_30,
  MR_Word * MaybeProcTableIOInfo_31);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset0_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_10_p_0(
  MR_Word NumberedOutputVars_11,
  MR_Word OrigInstMapDelta_12,
  MR_Word TipVar_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_VarTypes_0_36,
  MR_Word * STATE_VARIABLE_VarTypes_37,
  MR_Word TableInfo_17,
  MR_Word * Goal_18);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OrigInstmapDelta_2,
  MR_String DebugArgStr_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_String * HeadVar__11_11);

static void MR_CALL 
transform_hlds__table_gen__gen_restore_call_for_type_9_p_0(
  MR_String DebugArgStr_10,
  MR_Word CtorCat_11,
  MR_Word Type_12,
  MR_Word OrigInstmapDelta_13,
  MR_Word Var_14,
  MR_Integer Offset_15,
  MR_Word * HeadVar__7_7,
  MR_Word * Arg_17,
  MR_String * CodeStr_18);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_11_p_0(
  MR_Word NumberedSaveVars_12,
  MR_Word TableTipVar_13,
  MR_Integer BlockSize_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_VarTypes_0_36,
  MR_Word * STATE_VARIABLE_VarTypes_37,
  MR_Word STATE_VARIABLE_TableInfo_0_38,
  MR_Word * STATE_VARIABLE_TableInfo_39,
  MR_Word * Goals_19);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_15_p_0(
  MR_Word NumberedSaveVars_16,
  MR_String BaseVarName_17,
  MR_Integer BlockSize_18,
  MR_String CreateMacroName_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word STATE_VARIABLE_TableInfo_0_35,
  MR_Word * STATE_VARIABLE_TableInfo_36,
  MR_Word * SaveArgs_24,
  MR_Word * SavePrefixGoals_25,
  MR_String * SaveDeclCodeStr_26,
  MR_String * CreateSaveCodeStr_27);

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_String DebugArgStr_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7,
  MR_Word STATE_VARIABLE_TableInfo_0_8,
  MR_Word * STATE_VARIABLE_TableInfo_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_String * HeadVar__12_12);

static void MR_CALL 
transform_hlds__table_gen__gen_save_call_for_type_15_p_0(
  MR_Word CtorCat_16,
  MR_Word Type_17,
  MR_Word Var_18,
  MR_Integer Offset_19,
  MR_String DebugArgStr_20,
  MR_Word Context_21,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_VarTypes_0_39,
  MR_Word * STATE_VARIABLE_VarTypes_40,
  MR_Word STATE_VARIABLE_TableInfo_0_41,
  MR_Word * STATE_VARIABLE_TableInfo_42,
  MR_Word * Args_25,
  MR_Word * PrefixGoals_26,
  MR_String * CodeStr_27);

static MR_String MR_CALL 
transform_hlds__table_gen__answer_block_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__dummy_type_var_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__type_save_category_2_p_0(
  MR_Word CtorCat_3,
  MR_String * Name_4);

static MR_Word MR_CALL 
transform_hlds__table_gen__builtin_type_1_f_0(
  MR_Word CtorCat_3);

static void MR_CALL 
transform_hlds__table_gen__allocate_plain_slot_numbers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset0_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__table_gen__create_instmap_delta_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * IMD_2);

static void MR_CALL 
transform_hlds__table_gen__clone_proc_and_create_call_5_p_0(
  MR_Word PredInfo_6,
  MR_Integer ProcId_7,
  MR_Word * CallExpr_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41);

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_loop_goal_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__create_new_loop_goal_16_p_0(
  MR_Word OrigGoal_17,
  MR_Word Statistics_18,
  MR_Word PredId_19,
  MR_Integer ProcId_20,
  MR_Word HeadVars_21,
  MR_Word NumberedInputVars_22,
  MR_Word NumberedOutputVars_23,
  MR_Word STATE_VARIABLE_VarSet_0_87,
  MR_Word * STATE_VARIABLE_VarSet_88,
  MR_Word STATE_VARIABLE_VarTypes_0_89,
  MR_Word * STATE_VARIABLE_VarTypes_90,
  MR_Word STATE_VARIABLE_TableInfo_0_91,
  MR_Word * STATE_VARIABLE_TableInfo_92,
  MR_Word * TableTipVar_27,
  MR_Word * Goal_28,
  MR_Word * Steps_29);

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_status_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_active_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_inactive_cons_id_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__generate_error_goal_8_p_0(
  MR_Word TableInfo_9,
  MR_Word Context_10,
  MR_String Msg_11,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31,
  MR_Word STATE_VARIABLE_VarTypes_0_32,
  MR_Word * STATE_VARIABLE_VarTypes_33,
  MR_Word * Goal_14);

static void MR_CALL 
transform_hlds__table_gen__table_generate_call_8_p_0(
  MR_String PredName_9,
  MR_Word Detism_10,
  MR_Word Args_11,
  MR_Word Purity_12,
  MR_Word InstMapDelta_13,
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word * Goal_16);

static MR_String MR_CALL 
transform_hlds__table_gen__infinite_recursion_msg_0_f_0(void);

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_simple_call_table_lookup_goal_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__table_gen__generate_simple_call_table_lookup_goal_18_p_0(
  MR_Word StatusType_19,
  MR_String PredName_20,
  MR_String SetupMacroName_21,
  MR_Word NumberedVars_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word Statistics_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_VarSet_0_56,
  MR_Word * STATE_VARIABLE_VarSet_57,
  MR_Word STATE_VARIABLE_VarTypes_0_58,
  MR_Word * STATE_VARIABLE_VarTypes_59,
  MR_Word STATE_VARIABLE_TableInfo_0_60,
  MR_Word * STATE_VARIABLE_TableInfo_61,
  MR_Word * TableTipVar_30,
  MR_Word * StatusVar_31,
  MR_Word * Goal_32,
  MR_Word * Steps_33);

static MR_String MR_CALL 
transform_hlds__table_gen__status_name_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0(void);

static void MR_CALL 
transform_hlds__table_gen__goal_info_init_hide_6_p_0(
  MR_Word NonLocals_7,
  MR_Word InstmapDelta_8,
  MR_Word Detism_9,
  MR_Word Purity_10,
  MR_Word Context_11,
  MR_Word * GoalInfo_12);

static void MR_CALL 
transform_hlds__table_gen__table_generate_foreign_proc_11_p_0(
  MR_String PredName_12,
  MR_Word Detism_13,
  MR_Word Attributes_14,
  MR_Word Args_15,
  MR_Word ExtraArgs_16,
  MR_String Code_17,
  MR_Word Purity_18,
  MR_Word InstMapDelta_19,
  MR_Word ModuleInfo_20,
  MR_Word Context_21,
  MR_Word * Goal_22);

static void MR_CALL 
transform_hlds__table_gen__attach_call_table_tip_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__table_gen__generate_call_table_lookup_goals_19_p_0(
  MR_Word NumberedVars_20,
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word Statistics_23,
  MR_Word Context_24,
  MR_Word STATE_VARIABLE_VarSet_0_47,
  MR_Word * STATE_VARIABLE_VarSet_48,
  MR_Word STATE_VARIABLE_VarTypes_0_49,
  MR_Word * STATE_VARIABLE_VarTypes_50,
  MR_Word STATE_VARIABLE_TableInfo_0_51,
  MR_Word * STATE_VARIABLE_TableInfo_52,
  MR_Word * InputSteps_28,
  MR_Word * CallTableTipVar_29,
  MR_Word * CallTableTipArg_30,
  MR_Word * InfoArg_31,
  MR_Word * LookupArgs_32,
  MR_Word * PrefixGoals_33,
  MR_String * MainCodeStr_34,
  MR_String * CallTableTipVarCodeStr_35);

static MR_Word MR_CALL 
transform_hlds__table_gen__trie_node_type_0_f_0(void);

static MR_Word MR_CALL 
transform_hlds__table_gen__stats_ref_2_f_0(
  MR_Word Statistics_4,
  MR_Word Kind_5);

static MR_String MR_CALL 
transform_hlds__table_gen__get_back_arg_string_1_f_0(
  MR_Word TableInfo_3);

static MR_String MR_CALL 
transform_hlds__table_gen__get_debug_arg_string_1_f_0(
  MR_Word TableInfo_3);

static void MR_CALL 
transform_hlds__table_gen__generate_new_table_var_7_p_0(
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14,
  MR_Word STATE_VARIABLE_VarTypes_0_15,
  MR_Word * STATE_VARIABLE_VarTypes_16,
  MR_Word * Var_12);

static void MR_CALL 
transform_hlds__table_gen__generate_table_lookup_goals_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeStatsRef_2,
  MR_String DebugArgStr_3,
  MR_String BackArgStr_4,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9,
  MR_Word STATE_VARIABLE_TableInfo_0_10,
  MR_Word * STATE_VARIABLE_TableInfo_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_String * HeadVar__15_15);

static void MR_CALL 
transform_hlds__table_gen__gen_lookup_call_for_type_19_p_0(
  MR_Word ArgTablingMethod0_20,
  MR_Word CtorCat_21,
  MR_Word Type_22,
  MR_Word ArgVar_23,
  MR_Integer VarSeqNum_24,
  MR_Word MaybeStatsRef_25,
  MR_String DebugArgStr_26,
  MR_String BackArgStr_27,
  MR_Word Context_28,
  MR_Word STATE_VARIABLE_VarSet_0_71,
  MR_Word * STATE_VARIABLE_VarSet_72,
  MR_Word STATE_VARIABLE_VarTypes_0_73,
  MR_Word * STATE_VARIABLE_VarTypes_74,
  MR_Word STATE_VARIABLE_TableInfo_0_75,
  MR_Word * STATE_VARIABLE_TableInfo_76,
  MR_Word * Step_32,
  MR_Word * ExtraArgs_33,
  MR_Word * PrefixGoals_34,
  MR_String * CodeStr_35);

static MR_String MR_CALL 
transform_hlds__table_gen__arg_name_1_f_0(
  MR_Integer VarSeqNum_3);

static MR_String MR_CALL 
transform_hlds__table_gen__next_table_node_name_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__cur_table_node_name_0_f_0(void);

static MR_String MR_CALL 
transform_hlds__table_gen__step_stats_arg_addr_2_f_0(
  MR_String StatsRef_4,
  MR_Integer SeqNum_5);

static void MR_CALL 
transform_hlds__table_gen__gen_general_lookup_call_20_p_0(
  MR_Word IsAddr_21,
  MR_String MaybeAddrString_22,
  MR_Word Type_23,
  MR_Word ForeignArg_24,
  MR_String ArgName_25,
  MR_Integer VarSeqNum_26,
  MR_Word MaybeStatsRef_27,
  MR_String DebugArgStr_28,
  MR_String BackArgStr_29,
  MR_Word Context_30,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_VarTypes_0_51,
  MR_Word * STATE_VARIABLE_VarTypes_52,
  MR_Word STATE_VARIABLE_TableInfo_0_53,
  MR_Word * STATE_VARIABLE_TableInfo_54,
  MR_Word * Step_34,
  MR_Word * ExtraArgs_35,
  MR_Word * PrefixGoals_36,
  MR_String * LookupCodeStr_37);

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_make_type_info_var_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__table_gen__table_gen_make_type_info_var_10_p_0(
  MR_Word Type_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_TableInfo_0_24,
  MR_Word * STATE_VARIABLE_TableInfo_25,
  MR_Word * TypeInfoVar_16,
  MR_Word * TypeInfoGoals_17);

static MR_String MR_CALL 
transform_hlds__table_gen__maybe_step_stats_arg_addr_2_f_0(
  MR_Word MaybeStatsRef_4,
  MR_Integer SeqNum_5);

static void MR_CALL 
transform_hlds__table_gen__maybe_record_overall_stats_13_p_0(
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word Context_16,
  MR_String InfoVarName_17,
  MR_String TipVarName_18,
  MR_Word MaybeStatsRef_19,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29,
  MR_Word STATE_VARIABLE_VarTypes_0_30,
  MR_Word * STATE_VARIABLE_VarTypes_31,
  MR_Word * PrefixGoals_22,
  MR_Word * Args_23,
  MR_String * StatsCodeStr_24);

static void MR_CALL 
transform_hlds__table_gen__generate_get_table_info_goal_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word Context_13,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_VarTypes_0_27,
  MR_Word * STATE_VARIABLE_VarTypes_28,
  MR_String InfoVarName_16,
  MR_Word * Arg_17,
  MR_Word * Goal_18);

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0(
  MR_Word TransformAll_7,
  MR_Word Require_8,
  MR_Word BodyGoal_9,
  MR_Word PredModuleName_10,
  MR_Word * AnnotationIsMissing_11,
  MR_Word * TransformInfo_12);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____call_or_answer_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____call_or_answer_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____generator_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____generator_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____maybe_specified_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____maybe_specified_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_1[18][2];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_2[25][3];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_3[17][5];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_4[11][1];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_7[1][6];

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_8[1][4];


/* sealed */ struct transform_hlds__table_gen__vector_common_type_5_0_s {
  const MR_Word transform_hlds__table_gen__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct transform_hlds__table_gen__vector_common_type_5_0_s transform_hlds__table_gen_vector_common_5[4];

/* sealed */ struct transform_hlds__table_gen__vector_common_type_6_0_s {
  const MR_String transform_hlds__table_gen__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct transform_hlds__table_gen__vector_common_type_6_0_s transform_hlds__table_gen_vector_common_6[10];



static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_1[5]))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains untabled I/O primitive."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__table_gen_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "due to lack of support on this back end."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__table_gen_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_1[8])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Ignoring the pragma"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__table_gen_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_2[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_1[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__generate_simple_call_table_lookup_goal_18_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__create_new_loop_goal_16_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[6])),
    ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_17_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_17_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[8])),
    ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_17_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[6])),
    ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_17_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__generate_mm_call_table_lookup_goal_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[9])),
    ((MR_Box) (transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[10])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[11])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[11])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__table_gen__clone_pred_info_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[10])),
    ((MR_Box) (transform_hlds__table_gen__do_own_stack_transform_21_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_18_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__generate_memo_non_restore_goal_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_19_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_3[17][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__table_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_maybe_specified_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_maybe_specified_method_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)),
    ((MR_Box) (&transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_4[11][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Message"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "TableIoEntryDescPtr"))
  },
  /* row 5 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "proc_table_info->MR_pt_stats[MR_TABLE_ANSWER_TABLE][MR_TABLE_STATS_CURR]"))
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 8 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 9 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 10 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)),
    ((MR_Box) (&transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box transform_hlds__table_gen_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
};


static /* final */ const struct transform_hlds__table_gen__vector_common_type_5_0_s transform_hlds__table_gen_vector_common_5[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
};

static /* final */ const struct transform_hlds__table_gen__vector_common_type_6_0_s transform_hlds__table_gen_vector_common_6[10] = {
  /* row 0 */   {     (MR_String) "int" },
  /* row 1 */   {     (MR_String) "uint" },
  /* row 2 */   {     (MR_String) "int8" },
  /* row 3 */   {     (MR_String) "uint8" },
  /* row 4 */   {     (MR_String) "int16" },
  /* row 5 */   {     (MR_String) "uint16" },
  /* row 6 */   {     (MR_String) "int32" },
  /* row 7 */   {     (MR_String) "uint32" },
  /* row 8 */   {     (MR_String) "int64" },
  /* row 9 */   {     (MR_String) "uint64" },
};


#include "io.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__pti_var_mode_pos_method_1__plain_unit__type_ctor_info_unit_0 = {
  &transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1,
  {
    (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__table_gen__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__table_gen__maybe__pti_maybe_1__plain_parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)
  }
};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_0 = {
  (MR_String) "call_table",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_1 = {
  (MR_String) "answer_table",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_value_ordered_call_or_answer_table_0[2] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_0,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_call_or_answer_table_0[2] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_1,
  &transform_hlds__table_gen__transform_hlds__table_gen__enum_functor_desc_call_or_answer_table_0_0
};

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_call_or_answer_table_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_call_or_answer_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__table_gen____Unify____call_or_answer_table_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____call_or_answer_table_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "call_or_answer_table",
  {     transform_hlds__table_gen__transform_hlds__table_gen__enum_name_ordered_call_or_answer_table_0 },
  {     transform_hlds__table_gen__transform_hlds__table_gen__enum_value_ordered_call_or_answer_table_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_call_or_answer_table_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__table_gen__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_generator_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__table_gen____Unify____generator_map_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____generator_map_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "generator_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__table_gen__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_maybe_specified_method_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
};

static const MR_DuArgLocn transform_hlds__table_gen__transform_hlds__table_gen__field_locns_maybe_specified_method_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_maybe_specified_method_0_0 = {
  (MR_String) "msm_all_same",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__table_gen__transform_hlds__table_gen__field_types_maybe_specified_method_0_0,
  NULL,
  transform_hlds__table_gen__transform_hlds__table_gen__field_locns_maybe_specified_method_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__list__ti_list_1maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__table_gen__maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_maybe_specified_method_0_1[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__table_gen__list__ti_list_1maybe__ti_maybe_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_hidden_arg_tabling_method_0)
};

static const MR_DuArgLocn transform_hlds__table_gen__transform_hlds__table_gen__field_locns_maybe_specified_method_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_maybe_specified_method_0_1 = {
  (MR_String) "msm_specified",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__table_gen__transform_hlds__table_gen__field_types_maybe_specified_method_0_1,
  NULL,
  transform_hlds__table_gen__transform_hlds__table_gen__field_locns_maybe_specified_method_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_maybe_specified_method_0_0[1] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_maybe_specified_method_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_maybe_specified_method_0_1[1] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_maybe_specified_method_0_1
};

static const MR_DuPtagLayout transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_maybe_specified_method_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_maybe_specified_method_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_maybe_specified_method_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_maybe_specified_method_0[2] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_maybe_specified_method_0_0,
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_maybe_specified_method_0_1
};

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_maybe_specified_method_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_maybe_specified_method_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__table_gen____Unify____maybe_specified_method_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____maybe_specified_method_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "maybe_specified_method",
  {     transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_maybe_specified_method_0 },
  {     transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_maybe_specified_method_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_maybe_specified_method_0
};

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
};

static const MR_ConstString transform_hlds__table_gen__transform_hlds__table_gen__field_names_table_info_0_0[3] = {
  (MR_String) "table_module_info",
  (MR_String) "table_cur_pred_info",
  (MR_String) "table_cur_proc_info"
};

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_table_info_0_0 = {
  (MR_String) "table_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__table_gen__transform_hlds__table_gen__field_types_table_info_0_0,
  transform_hlds__table_gen__transform_hlds__table_gen__field_names_table_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_table_info_0_0[1] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_table_info_0_0
};

static const MR_DuPtagLayout transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_table_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_table_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_table_info_0[1] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_table_info_0_0
};

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_table_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_table_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__table_gen____Unify____table_info_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____table_info_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "table_info",
  {     transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_table_info_0 },
  {     transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_table_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_table_info_0
};

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_var_mode_method_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
};

static const MR_DuArgLocn transform_hlds__table_gen__transform_hlds__table_gen__field_locns_var_mode_method_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_var_mode_method_0_0 = {
  (MR_String) "var_mode_method",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__table_gen__transform_hlds__table_gen__field_types_var_mode_method_0_0,
  NULL,
  transform_hlds__table_gen__transform_hlds__table_gen__field_locns_var_mode_method_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_var_mode_method_0_0[1] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_var_mode_method_0_0
};

static const MR_DuPtagLayout transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_var_mode_method_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_var_mode_method_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_var_mode_method_0[1] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_var_mode_method_0_0
};

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_var_mode_method_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__table_gen____Unify____var_mode_method_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____var_mode_method_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "var_mode_method",
  {     transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_var_mode_method_0 },
  {     transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_var_mode_method_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_var_mode_method_0
};

static const MR_PseudoTypeInfo transform_hlds__table_gen__transform_hlds__table_gen__field_types_var_mode_pos_method_1_0[4] = {
  (MR_PseudoTypeInfo) (&transform_hlds__table_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_var_mode_pos_method_1_0 = {
  (MR_String) "var_mode_pos_method",
  INT16_C(4),
  UINT16_C(8),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__table_gen__transform_hlds__table_gen__field_types_var_mode_pos_method_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_var_mode_pos_method_1_0[1] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_var_mode_pos_method_1_0
};

static const MR_DuPtagLayout transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_var_mode_pos_method_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__table_gen__transform_hlds__table_gen__du_stag_ordered_var_mode_pos_method_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_var_mode_pos_method_1[1] = {
  &transform_hlds__table_gen__transform_hlds__table_gen__du_functor_desc_var_mode_pos_method_1_0
};

static const MR_Integer transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_var_mode_pos_method_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__table_gen____Unify____var_mode_pos_method_1_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____var_mode_pos_method_1_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "var_mode_pos_method",
  {     transform_hlds__table_gen__transform_hlds__table_gen__du_name_ordered_var_mode_pos_method_1 },
  {     transform_hlds__table_gen__transform_hlds__table_gen__du_ptag_ordered_var_mode_pos_method_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__table_gen__transform_hlds__table_gen__functor_number_map_var_mode_pos_method_1
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__table_gen__transform_hlds__table_gen__ti_var_mode_pos_method_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0 = {
  &transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__table_gen____Unify____var_mode_pos_method_0_0_10001)),
  ((MR_Box) (transform_hlds__table_gen____Compare____var_mode_pos_method_0_0_10001)),
  (MR_String) "transform_hlds.table_gen",
  (MR_String) "var_mode_pos_method",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__table_gen__transform_hlds__table_gen__ti_var_mode_pos_method_1parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_make_type_info_vars__3825__1_2_p_0(
  MR_Word PolySpecs_25,
  MR_Word HeadVar__2_38)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[6]), ((MR_Box) (PolySpecs_25)), ((MR_Box) (HeadVar__2_38)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__get_input_output_vars__3426__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word LastMaybeArgMethod_70)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[5]), ((MR_Box) (LastMaybeArgMethod_70)), ((MR_Box) (HeadVar__1_60)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_mm_restore_or_suspend_goal__3160__1_1_f_0(
  MR_Word HeadVar__1_76)
{
  {
    MR_Word HeadVar__2_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_76, (MR_Integer) 0))));

    return HeadVar__2_77;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_restore_goal__3086__1_1_f_0(
  MR_Word HeadVar__1_77)
{
  {
    MR_Word HeadVar__2_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_77, (MR_Integer) 0))));

    return HeadVar__2_78;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_mm_call_table_lookup_goal__2288__1_1_f_0(
  MR_Word HeadVar__1_139)
{
  {
    MR_Word HeadVar__2_140;

    HeadVar__2_140 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(HeadVar__1_139);
    return HeadVar__2_140;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_call_table_lookup_goal__2229__1_1_f_0(
  MR_Word HeadVar__1_139)
{
  {
    MR_Word HeadVar__2_140;

    HeadVar__2_140 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(HeadVar__1_139);
    return HeadVar__2_140;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_simple_call_table_lookup_goal__2171__1_1_f_0(
  MR_Word HeadVar__1_127)
{
  {
    MR_Word HeadVar__2_128;

    HeadVar__2_128 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(HeadVar__1_127);
    return HeadVar__2_128;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__generate_gen_proc_table_info__2113__1_1_f_0(
  MR_Word HeadVar__1_41)
{
  {
    MR_Word HeadVar__2_42;
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_41, (MR_Integer) 0))));
    MR_Integer Pos_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_41, (MR_Integer) 2))));

    {
      HeadVar__2_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_42, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), HeadVar__2_42, 1) = ((MR_Box) (Pos_46));
    }
    return HeadVar__2_42;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1865__1_2_f_0(
  MR_Word ModuleInfo0_40,
  MR_Word HeadVar__2_174)
{
  {
    MR_Word HeadVar__3_175;

    HeadVar__3_175 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_105_110_105_116_95_105_110_115_116_95_95_91_49_93_95_48_2_f_0(ModuleInfo0_40, HeadVar__2_174);
    return HeadVar__3_175;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_105_110_105_116_95_105_110_115_116_95_95_91_49_93_95_48_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Mode_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Inst_9;
    MR_Word Var_10;

    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_6, &Inst_9, &Var_10);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Inst_9));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1863__1_1_f_0(
  MR_Word HeadVar__1_170)
{
  {
    MR_Word HeadVar__2_171;

    HeadVar__2_171 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_109_111_100_101_95_95_91_49_93_95_48_1_f_0(HeadVar__1_170);
    return HeadVar__2_171;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1861__1_1_f_0(
  MR_Word HeadVar__1_166)
{
  {
    MR_Word HeadVar__2_167;

    HeadVar__2_167 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(HeadVar__1_166);
    return HeadVar__2_167;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_transform__1722__1_1_f_0(
  MR_Word HeadVar__1_259)
{
  {
    MR_Word HeadVar__2_260;

    HeadVar__2_260 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_109_111_100_101_95_95_91_49_93_95_48_1_f_0(HeadVar__1_259);
    return HeadVar__2_260;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_109_111_100_101_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return Mode_4;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1361__1_1_f_0(
  MR_Word HeadVar__1_315)
{
  {
    MR_Word HeadVar__2_316;

    HeadVar__2_316 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_112_111_115_95_95_91_49_93_95_48_1_f_0(HeadVar__1_315);
    return HeadVar__2_316;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_112_111_115_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Pos_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Pos_5));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__create_new_io_goal__1355__1_2_p_0(
  MR_Word UnnumberedSavedOutputVars_62,
  MR_Word HeadVar__2_311)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_98_101_108_111_110_103_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(UnnumberedSavedOutputVars_62, HeadVar__2_311);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_118_97_114_95_98_101_108_111_110_103_95_116_111_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word List_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), ((MR_Box) (Var_4)), List_3);
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1354__1_1_f_0(
  MR_Word HeadVar__1_308)
{
  {
    MR_Word HeadVar__2_309;

    HeadVar__2_309 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(HeadVar__1_308);
    return HeadVar__2_309;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_non_goal__1182__1_1_f_0(
  MR_Word HeadVar__1_204)
{
  {
    MR_Word HeadVar__2_205;

    HeadVar__2_205 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(HeadVar__1_204);
    return HeadVar__2_205;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_goal__1020__1_1_f_0(
  MR_Word HeadVar__1_178)
{
  {
    MR_Word HeadVar__2_179;

    HeadVar__2_179 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(HeadVar__1_178);
    return HeadVar__2_179;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__IntroducedFrom__func__create_new_loop_goal__791__1_1_f_0(
  MR_Word HeadVar__1_211)
{
  {
    MR_Word HeadVar__2_212;

    HeadVar__2_212 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(HeadVar__1_211);
    return HeadVar__2_212;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__540__1_2_p_0(
  MR_Word CodeModel_21,
  MR_Word HeadVar__2_102)
{
  {
    MR_bool succeeded = (CodeModel_21 == HeadVar__2_102);

    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__444__1_2_p_0(
  MR_Word MaybeAttributes_27,
  MR_Word HeadVar__2_93)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[0]), ((MR_Box) (MaybeAttributes_27)), ((MR_Box) (HeadVar__2_93)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__477__1_2_p_0(
  MR_Word MaybeSpecMethod_31,
  MR_Word HeadVar__2_88)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen____Unify____maybe_specified_method_0_0(MaybeSpecMethod_31, HeadVar__2_88);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__475__1_2_p_0(
  MR_Word MaybeSizeLimit_33,
  MR_Word HeadVar__2_84)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[1]), ((MR_Box) (MaybeSizeLimit_33)), ((MR_Box) (HeadVar__2_84)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_1_0(
  MR_Word TypeInfo_for_T_17,
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
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Box ArgX4_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3));
      MR_Box ArgY4_14 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__prog_data____Compare____mer_mode_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__builtin__compare_3_p_0(TypeInfo_for_T_17, HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = transform_hlds__table_gen____Unify____var_mode_pos_method_1_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_tabling_method_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_1_0(
  MR_Word TypeInfo_for_T_13,
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
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Box ArgX4_9 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3));
      MR_Box ArgY4_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_method_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__prog_data____Compare____mer_mode_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_17 < Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > Var_18);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_method_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____table_info_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          hlds__hlds_pred____Compare____proc_info_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____table_info_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____maybe_specified_method_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Integer Var_25 = (MR_Integer) (Var_22);
        MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_25 < Var_26);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_25 > Var_26);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word SubResult1_14;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[7]), &SubResult1_14, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_13)));
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
        {
          MR_Integer Var_27 = (MR_Integer) (Var_23);
          MR_Integer Var_28 = (MR_Integer) (ArgY2_16);

          succeeded = (Var_27 < Var_28);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_27 > Var_28);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____maybe_specified_method_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
        TypeInfo_11_11 = (MR_Word) (&transform_hlds__table_gen_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____generator_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____generator_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____call_or_answer_table_0_0(
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
transform_hlds__table_gen____Unify____call_or_answer_table_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__answer_table_name_0_f_0(void)
{
  {
    return (MR_String) "answer_table";
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__pred_name_var_name_0_f_0(void)
{
  {
    return (MR_String) "pred_name";
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__num_input_args_name_0_f_0(void)
{
  {
    return (MR_String) "num_input_args";
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__table_tip_node_name_0_f_0(void)
{
  {
    return (MR_String) "table_tip";
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__var_mode_is_io_state_2_p_0(
  MR_Word VarTypes_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word VarType_8;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_4, &VarType_8);
    succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(VarType_8);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__var_mode_pos_is_io_state_2_p_0(
  MR_Word VarTypes_3,
  MR_Word VarModePosMethod_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarModePosMethod_4, (MR_Integer) 0))));
    MR_Word VarType_13;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_3, Var_5, &VarType_13);
    succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(VarType_13);
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__project_out_pos_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgMethod_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Mode_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = (MR_Box) ((MR_Unsigned) (ArgMethod_6));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__project_out_arg_method_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Mode_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Pos_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Mode_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Pos_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = NULL;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__filter_marker_1_p_0(
  MR_Word Marker_2)
{
  {
    MR_bool succeeded;

    if (((MR_Unsigned) 266321920U & (((MR_Integer) 1 << Marker_2))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0_s * env_ptr = (struct transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_13;
      MR_Word Var_7;
      MR_Integer Var_8;
      MR_Word Var_9;
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Word Var_12;

      (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__SubGoal_15, (MR_Integer) 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__SubGoal_15, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded)
      {
        (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Attrs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 1))));
        Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 2))));
        Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 3))));
        Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 4))));
        Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 5))));
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 6))));
        Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Var_14, (MR_Integer) 7))));
        *((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__TabledForIoAttr_4) = parse_tree__prog_data_foreign__get_tabled_for_io_1_f_0((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__Attrs_16);
        (env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded = (*((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__TabledForIoAttr_4) != (MR_Integer) 0);
        if ((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__succeeded)
          ((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont)((env_ptr)->transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0(
  MR_Word Goal_3,
  MR_Word * TabledForIoAttr_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0_s env;

    (env).transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__TabledForIoAttr_4 = TabledForIoAttr_4;
    (env).transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont = cont;
    (env).transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    hlds__goal_util__goal_contains_goal_2_p_0(Goal_3, &(env).transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_env_0__SubGoal_15, transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0_1, &env);
  }
}

static void MR_CALL 
transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0_s * env_ptr = (struct transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_13;
      MR_Word Var_7;
      MR_Integer Var_8;
      MR_Word Var_9;
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Word Var_12;

      (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__SubGoal_15, (MR_Integer) 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__SubGoal_15, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__succeeded)
      {
        (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Attrs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 1))));
        Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 2))));
        Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 3))));
        Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 4))));
        Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 5))));
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 6))));
        Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Var_14, (MR_Integer) 7))));
        *((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__MayCallMercuryAttr_4) = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__Attrs_16);
        ((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont)((env_ptr)->transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0(
  MR_Word Goal_3,
  MR_Word * MayCallMercuryAttr_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0_s env;

    (env).transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__MayCallMercuryAttr_4 = MayCallMercuryAttr_4;
    (env).transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont = cont;
    (env).transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    hlds__goal_util__goal_contains_goal_2_p_0(Goal_3, &(env).transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_env_0__SubGoal_15, transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0_1, &env);
  }
}

void MR_CALL 
transform_hlds__table_gen__table_gen_process_module_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word Globals_7;
    MR_Word TraceTableIO_8;
    MR_Word Preds0_9;
    MR_Word PredIds_10;
    MR_Word GenMap0_11;
    MR_Word Var_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &Globals_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 138, &TraceTableIO_8);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &Preds0_9);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_9, &PredIds_10);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &GenMap0_11);
    transform_hlds__table_gen__table_gen_process_preds_8_p_0(TraceTableIO_8, PredIds_10, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14, GenMap0_11, &Var_12, STATE_VARIABLE_Specs_0_15, STATE_VARIABLE_Specs_16);
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_preds_8_p_0(
  MR_Word TraceTableIO_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_GenMap_0_5,
  MR_Word * STATE_VARIABLE_GenMap_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_GenMap_6 = STATE_VARIABLE_GenMap_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_31_31;
      MR_Word STATE_VARIABLE_GenMap_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Word PredInfo_48;
      MR_Word ProcIds_49;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_GenMap_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_20, &PredInfo_48);
      ProcIds_49 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_48);
      transform_hlds__table_gen__table_gen_process_procs_9_p_0(TraceTableIO_1, PredId_20, ProcIds_49, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_31_31, STATE_VARIABLE_GenMap_0_5, &STATE_VARIABLE_GenMap_32_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_33_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_21;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_31_31;
      next_value_of_STATE_VARIABLE_GenMap_0_5 = STATE_VARIABLE_GenMap_32_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_33_33;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_GenMap_0_5 = next_value_of_STATE_VARIABLE_GenMap_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_procs_9_p_0(
  MR_Word TraceTableIO_1,
  MR_Word PredId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_GenMap_0_6,
  MR_Word * STATE_VARIABLE_GenMap_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_GenMap_7 = STATE_VARIABLE_GenMap_0_6;
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
    {
      MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredTable_28;
      MR_Word PredInfo_29;
      MR_Word ProcTable_30;
      MR_Word ProcInfo0_31;
      MR_Word STATE_VARIABLE_ModuleInfo_38_38;
      MR_Word STATE_VARIABLE_GenMap_39_39;
      MR_Word STATE_VARIABLE_Specs_40_40;
      MR_Word EvalMethod_62;
      MR_Word RequiresTablingTransform_63;
      MR_Box conv0_PredInfo_29;
      MR_Box conv1_ProcInfo0_31;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_GenMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_4, &PredTable_28);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_28, ((MR_Box) (PredId_2)), &conv0_PredInfo_29);
      PredInfo_29 = ((MR_Word) (conv0_PredInfo_29));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_29, &ProcTable_30);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_30, ((MR_Box) (ProcId_23)), &conv1_ProcInfo0_31);
      ProcInfo0_31 = ((MR_Word) (conv1_ProcInfo0_31));
      hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo0_31, &EvalMethod_62);
      RequiresTablingTransform_63 = hlds__hlds_pred__eval_method_requires_tabling_transform_1_f_0(EvalMethod_62);
      switch (RequiresTablingTransform_63) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer _InArgNum_66;
            MR_Integer _OutArgNum_67;

            succeeded = (TraceTableIO_1 == (MR_Integer) 1);
            if (succeeded)
              succeeded = hlds__hlds_pred__proc_info_has_io_state_pair_4_p_0(STATE_VARIABLE_ModuleInfo_0_4, ProcInfo0_31, &_InArgNum_66, &_OutArgNum_67);
            if (succeeded)
              transform_hlds__table_gen__table_gen_process_io_proc_10_p_0(PredId_2, ProcId_23, ProcInfo0_31, PredInfo_29, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_38_38, STATE_VARIABLE_GenMap_0_6, &STATE_VARIABLE_GenMap_39_39, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_40_40);
            else
            {
              STATE_VARIABLE_Specs_40_40 = STATE_VARIABLE_Specs_0_8;
              STATE_VARIABLE_GenMap_39_39 = STATE_VARIABLE_GenMap_0_6;
              STATE_VARIABLE_ModuleInfo_38_38 = STATE_VARIABLE_ModuleInfo_0_4;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_64;
            MR_Word Var_65;

            transform_hlds__table_gen__table_gen_transform_proc_if_possible_13_p_0(EvalMethod_62, PredId_2, ProcId_23, ProcInfo0_31, &Var_64, PredInfo_29, &Var_65, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_38_38, STATE_VARIABLE_GenMap_0_6, &STATE_VARIABLE_GenMap_39_39, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_40_40);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_24;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_38_38;
      next_value_of_STATE_VARIABLE_GenMap_0_6 = STATE_VARIABLE_GenMap_39_39;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_40_40;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      STATE_VARIABLE_GenMap_0_6 = next_value_of_STATE_VARIABLE_GenMap_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_process_io_proc_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word ProcInfo0_13,
  MR_Word PredInfo0_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_GenMap_0_41,
  MR_Word * STATE_VARIABLE_GenMap_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;
    MR_Word CodeModel_18;
    MR_Word Globals_21;
    MR_Word TransformAll_22;
    MR_Word Require_23;
    MR_Word BodyGoal_24;
    MR_Word PredModuleName_25;
    MR_Word AnnotationIsMissing_26;
    MR_Word TransformPrimitive_27;
    MR_Word STATE_VARIABLE_Specs_52_52;

    CodeModel_18 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo0_13);
    switch (CodeModel_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Integer PredIdInt_19;
          MR_String Msg_20;
          MR_String Var_58;
          MR_String Var_65;

          hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_11, &PredIdInt_19);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_4[10]), PredIdInt_19, &Var_58);
          Var_65 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) " not model_det");
          Msg_20 = mercury__string__f_43_43_2_f_0((MR_String) "I/O procedure pred id ", Var_65);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_process_io_proc\'/10", Msg_20);
            return;
          }
        }
        break;
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Globals_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 142, &TransformAll_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 141, &Require_23);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_13, &BodyGoal_24);
    PredModuleName_25 = hlds__hlds_module__predicate_module_2_f_0(STATE_VARIABLE_ModuleInfo_0_39, PredId_11);
    transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0(TransformAll_22, Require_23, BodyGoal_24, PredModuleName_25, &AnnotationIsMissing_26, &TransformPrimitive_27);
    switch (AnnotationIsMissing_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_52_52 = STATE_VARIABLE_Specs_0_43;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Spec_28;
          MR_Word Context_72;
          MR_Word ProcPieces_73;
          MR_Word Pieces_74;
          MR_Word Msg_75;
          MR_Word Var_77;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_89;

          hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_14, &Context_72);
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (PredId_11));
            MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (ProcId_12));
          }
          ProcPieces_73 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_39, (MR_Integer) 1, Var_77);
          Pieces_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProcPieces_73, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_1[10])));
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Pieces_74));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_75, 0) = ((MR_Box) (Context_72));
            MR_hl_field(MR_mktag(0), Msg_75, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Msg_75));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 72U));
            MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_89));
          }
          {
            STATE_VARIABLE_Specs_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_52_52, 0) = ((MR_Box) (Spec_28));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_52_52, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
          }
        }
        break;
    }
    if ((TransformPrimitive_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
      *STATE_VARIABLE_GenMap_42 = STATE_VARIABLE_GenMap_0_41;
      *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_52_52;
    }
    else
    {
      MR_Word Unitize_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TransformPrimitive_27, (MR_Integer) 0))));
      MR_Word TraceTableIoOnlyRetry_30;
      MR_Word EntryKind_34;
      MR_Word TableIoMethod_35;
      MR_Word ProcInfo1_36;
      MR_Word Var_37;
      MR_Word Var_38;

      libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 139, &TraceTableIoOnlyRetry_30);
      switch (TraceTableIoOnlyRetry_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeClassConstraints_31;
            MR_Word UnivConstraints_32;
            MR_Word ExistConstraints_33;

            hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_14, &TypeClassConstraints_31);
            UnivConstraints_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassConstraints_31, (MR_Integer) 0))));
            ExistConstraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassConstraints_31, (MR_Integer) 1))));
            succeeded = (UnivConstraints_32 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (ExistConstraints_33 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              EntryKind_34 = (MR_Integer) 2;
            else
              EntryKind_34 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
          EntryKind_34 = (MR_Integer) 0;
          break;
      }
      {
        TableIoMethod_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TableIoMethod_35, 0) = (MR_Box) (((((MR_Unsigned) (EntryKind_34) << 1)) | (MR_Unsigned) (Unitize_29)));
      }
      hlds__hlds_pred__proc_info_set_eval_method_3_p_0(TableIoMethod_35, ProcInfo0_13, &ProcInfo1_36);
      transform_hlds__table_gen__table_gen_transform_proc_if_possible_13_p_0(TableIoMethod_35, PredId_11, ProcId_12, ProcInfo1_36, &Var_37, PredInfo0_14, &Var_38, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_GenMap_0_41, STATE_VARIABLE_GenMap_42, STATE_VARIABLE_Specs_52_52, STATE_VARIABLE_Specs_44);
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_if_possible_13_p_0(
  MR_Word EvalMethod_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31,
  MR_Word STATE_VARIABLE_PredInfo_0_32,
  MR_Word * STATE_VARIABLE_PredInfo_33,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_GenMap_0_36,
  MR_Word * STATE_VARIABLE_GenMap_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_Word Globals_22;
    MR_Word IsTablingSupported_23;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &Globals_22);
    libs__globals__current_grade_supports_tabling_2_p_0(Globals_22, &IsTablingSupported_23);
    switch (IsTablingSupported_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_24;
          MR_Word ProcPieces_25;
          MR_String EvalMethodStr_26;
          MR_Word Pieces_27;
          MR_Word Msg_28;
          MR_Word Spec_29;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_51;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_63;

          hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_32, &Context_24);
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (PredId_15));
            MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ProcId_16));
          }
          ProcPieces_25 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_34, (MR_Integer) 0, Var_41);
          EvalMethodStr_26 = parse_tree__prog_out__eval_method_to_string_1_f_0(EvalMethod_14);
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (EvalMethodStr_26));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_1[17])));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__table_gen_scalar_common_1[15])));
            MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
          }
          Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProcPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_1[12])));
          Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_42, Var_51);
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Pieces_27));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_28, 0) = ((MR_Box) (Context_24));
            MR_hl_field(MR_mktag(0), Msg_28, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Msg_28));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(0), Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 72U));
            MR_hl_field(MR_mktag(0), Spec_29, 2) = ((MR_Box) (Var_63));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_39 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
          }
          hlds__hlds_pred__proc_info_set_eval_method_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ProcInfo_0_30, STATE_VARIABLE_ProcInfo_31);
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_15, ProcId_16, STATE_VARIABLE_PredInfo_0_32, *STATE_VARIABLE_ProcInfo_31, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
          *STATE_VARIABLE_PredInfo_33 = STATE_VARIABLE_PredInfo_0_32;
          *STATE_VARIABLE_GenMap_37 = STATE_VARIABLE_GenMap_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__table_gen__table_gen_transform_proc_11_p_0(EvalMethod_14, PredId_15, ProcId_16, STATE_VARIABLE_ProcInfo_0_30, STATE_VARIABLE_ProcInfo_31, STATE_VARIABLE_PredInfo_0_32, STATE_VARIABLE_PredInfo_33, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35, STATE_VARIABLE_GenMap_0_36, STATE_VARIABLE_GenMap_37);
          *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__444__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__540__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__477__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_transform_proc__475__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_transform_proc_11_p_0(
  MR_Word EvalMethod_12,
  MR_Word PredId_13,
  MR_Integer ProcId_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_71,
  MR_Word * STATE_VARIABLE_ProcInfo_72,
  MR_Word STATE_VARIABLE_PredInfo_0_73,
  MR_Word * STATE_VARIABLE_PredInfo_74,
  MR_Word STATE_VARIABLE_ModuleInfo_0_75,
  MR_Word * STATE_VARIABLE_ModuleInfo_76,
  MR_Word STATE_VARIABLE_GenMap_0_77,
  MR_Word * STATE_VARIABLE_GenMap_78)
{
  {
    MR_bool succeeded;
    MR_Word TableInfo0_19;
    MR_Word Detism_20;
    MR_Word CodeModel_21;
    MR_Word HeadVars_22;
    MR_Word VarSet0_23;
    MR_Word VarTypes0_24;
    MR_Word OrigGoal_25;
    MR_Word ArgModes_26;
    MR_Word MaybeAttributes_27;
    MR_Word Attributes_28;
    MR_Word VarSet_49;
    MR_Word VarTypes_50;
    MR_Word TableInfo_51;
    MR_Word Goal_52;
    MR_Word MaybeProcTableIOInfo_53;
    MR_Word MaybeCallTableTip_54;
    MR_Word MaybeProcTableStructInfo_55;
    MR_Word ProcTable1_67;
    MR_Word ProcTable_68;
    MR_Word PredTable1_69;
    MR_Word PredTable_70;
    MR_Word STATE_VARIABLE_ModuleInfo_107_107;
    MR_Word STATE_VARIABLE_PredInfo_108_108;
    MR_Word STATE_VARIABLE_ProcInfo_109_109;
    MR_Word STATE_VARIABLE_ProcInfo_110_110;
    MR_Word STATE_VARIABLE_ProcInfo_111_111;
    MR_Word STATE_VARIABLE_ProcInfo_112_112;
    MR_Word STATE_VARIABLE_ProcInfo_113_113;
    MR_Word STATE_VARIABLE_ProcInfo_115_115;
    MR_Word STATE_VARIABLE_ModuleInfo_116_116;
    MR_Word STATE_VARIABLE_ModuleInfo_119_119;
    MR_Word STATE_VARIABLE_PredInfo_120_120;
    MR_Word Var_121;

    transform_hlds__table_gen__table_info_init_4_p_0(STATE_VARIABLE_ModuleInfo_0_75, STATE_VARIABLE_PredInfo_0_73, STATE_VARIABLE_ProcInfo_0_71, &TableInfo0_19);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_71, &Detism_20);
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_20, &CodeModel_21);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_71, &HeadVars_22);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_71, &VarSet0_23);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_71, &VarTypes0_24);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_71, &OrigGoal_25);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_71, &ArgModes_26);
    hlds__hlds_pred__proc_info_get_table_attributes_2_p_0(STATE_VARIABLE_ProcInfo_0_71, &MaybeAttributes_27);
    if ((MaybeAttributes_27 == (MR_Word) ((MR_Unsigned) 0U)))
      Attributes_28 = parse_tree__prog_data_pragma__default_memo_table_attributes_0_f_0();
    else
      Attributes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_27, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) EvalMethod_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(EvalMethod_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "eval_normal");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word MaybeSpecMethod_31;
              MR_Word Statistics_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_28, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word MaybeSizeLimit_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_28, (MR_Integer) 1))));
              MR_Word CallStrictness_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_28, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) CallStrictness_35)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(CallStrictness_35)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      MaybeSpecMethod_31 = (MR_Word) (&transform_hlds__table_gen_scalar_common_4[9]);
                      break;
                    case (MR_Integer) 1:
                      MaybeSpecMethod_31 = (MR_Word) (&transform_hlds__table_gen_scalar_common_4[8]);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgMethods_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallStrictness_35, (MR_Integer) 0))));
                    MR_Word HiddenArgMethod_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), CallStrictness_35, (MR_Integer) 1))) & (MR_Integer) 1);

                    {
                      MaybeSpecMethod_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeSpecMethod_31, 0) = ((MR_Box) (ArgMethods_36));
                      MR_hl_field(MR_mktag(1), MaybeSpecMethod_31, 1) = (MR_Box) ((MR_Unsigned) (HiddenArgMethod_37));
                    }
                  }
                  break;
              }
              switch (MR_tag((MR_Word) EvalMethod_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(EvalMethod_12)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word InputVarModeMethods_40;
                        MR_Word OutputVarModeMethods_41;
                        MR_Word NumberedInputVars_42;
                        MR_Word NumberedOutputVars_43;
                        MR_Word CallTableTip_56;
                        MR_Word InputSteps_57;
                        MR_Word ProcTableStructInfo_59;
                        MR_Word Var_39;

                        transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_26, STATE_VARIABLE_ModuleInfo_0_75, MaybeSpecMethod_31, &Var_39, &InputVarModeMethods_40, &OutputVarModeMethods_41);
                        transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_40, (MR_Integer) 0, &NumberedInputVars_42);
                        transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_41, (MR_Integer) 0, &NumberedOutputVars_43);
                        transform_hlds__table_gen__create_new_loop_goal_16_p_0(OrigGoal_25, Statistics_32, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_42, NumberedOutputVars_43, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &CallTableTip_56, &Goal_52, &InputSteps_57);
                        transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(TableInfo_51, PredId_13, ProcId_14, InputSteps_57, (MR_Word) ((MR_Unsigned) 0U), InputVarModeMethods_40, OutputVarModeMethods_41, &ProcTableStructInfo_59);
                        {
                          MaybeCallTableTip_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybeCallTableTip_54, 0) = ((MR_Box) (CallTableTip_56));
                        }
                        MaybeProcTableIOInfo_53 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          MaybeProcTableStructInfo_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybeProcTableStructInfo_55, 0) = ((MR_Box) (ProcTableStructInfo_59));
                        }
                        *STATE_VARIABLE_GenMap_78 = STATE_VARIABLE_GenMap_0_77;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word CallTableTip_124;
                        MR_Word InputSteps_125;
                        MR_Word MaybeOutputSteps_126;
                        MR_Word ProcTableStructInfo_127;
                        MR_Word InputVarModeMethods_175;
                        MR_Word OutputVarModeMethods_176;
                        MR_Word NumberedInputVars_177;
                        MR_Word NumberedOutputVars_178;
                        MR_Word Var_173;

                        transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_26, STATE_VARIABLE_ModuleInfo_0_75, MaybeSpecMethod_31, &Var_173, &InputVarModeMethods_175, &OutputVarModeMethods_176);
                        transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_175, (MR_Integer) 0, &NumberedInputVars_177);
                        transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_176, (MR_Integer) 0, &NumberedOutputVars_178);
                        switch (CodeModel_21) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            {
                              transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_18_p_0(Detism_20, OrigGoal_25, Statistics_32, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_177, NumberedOutputVars_178, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &CallTableTip_124, &Goal_52, &InputSteps_125);
                              MaybeOutputSteps_126 = (MR_Word) ((MR_Unsigned) 0U);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word OutputSteps_60;

                              transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_19_p_0(Detism_20, OrigGoal_25, Statistics_32, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_177, NumberedOutputVars_178, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &CallTableTip_124, &Goal_52, &InputSteps_125, &OutputSteps_60);
                              {
                                MaybeOutputSteps_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), MaybeOutputSteps_126, 0) = ((MR_Box) (OutputSteps_60));
                              }
                            }
                            break;
                        }
                        transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(TableInfo_51, PredId_13, ProcId_14, InputSteps_125, MaybeOutputSteps_126, InputVarModeMethods_175, OutputVarModeMethods_176, &ProcTableStructInfo_127);
                        {
                          MaybeCallTableTip_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybeCallTableTip_54, 0) = ((MR_Box) (CallTableTip_124));
                        }
                        MaybeProcTableIOInfo_53 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          MaybeProcTableStructInfo_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), MaybeProcTableStructInfo_55, 0) = ((MR_Box) (ProcTableStructInfo_127));
                        }
                        *STATE_VARIABLE_GenMap_78 = STATE_VARIABLE_GenMap_0_77;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MinimalMethod_61;
                    MR_Word Var_81;
                    MR_Word Var_85;
                    MR_Word Var_99;
                    MR_Word InputVarModeMethods_181;
                    MR_Word OutputVarModeMethods_182;
                    MR_Word NumberedInputVars_183;
                    MR_Word NumberedOutputVars_184;
                    MR_Word Var_179;

                    {
                      Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[13]));
                      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (MaybeSizeLimit_33));
                      MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    mercury__require__expect_3_p_0(Var_81, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "eval_minimal with size limit");
                    {
                      Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[14]));
                      MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (MaybeSpecMethod_31));
                      MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_4[9]));
                    }
                    mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "eval_minimal without all_strict");
                    transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_26, STATE_VARIABLE_ModuleInfo_0_75, MaybeSpecMethod_31, &Var_179, &InputVarModeMethods_181, &OutputVarModeMethods_182);
                    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_181, (MR_Integer) 0, &NumberedInputVars_183);
                    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_182, (MR_Integer) 0, &NumberedOutputVars_184);
                    MinimalMethod_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), EvalMethod_12, (MR_Integer) 0))) & (MR_Integer) 3);
                    {
                      Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[15]));
                      MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (CodeModel_21));
                      MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) ((MR_Integer) 2));
                    }
                    mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "table_gen_transform_proc: minimal model but not model_non");
                    switch (MinimalMethod_61) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word _InputSteps_62;
                          MR_Word _OutputSteps_63;

                          transform_hlds__table_gen__do_own_stack_transform_21_p_0(Detism_20, OrigGoal_25, Statistics_32, PredId_13, ProcId_14, STATE_VARIABLE_PredInfo_0_73, STATE_VARIABLE_ProcInfo_0_71, HeadVars_22, NumberedInputVars_183, NumberedOutputVars_184, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, STATE_VARIABLE_GenMap_0_77, STATE_VARIABLE_GenMap_78, &Goal_52, &_InputSteps_62, &_OutputSteps_63);
                          MaybeCallTableTip_54 = (MR_Word) ((MR_Unsigned) 0U);
                          MaybeProcTableStructInfo_55 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "own stacks generator");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word CallTableTip_128;
                          MR_Word InputSteps_129;
                          MR_Word MaybeOutputSteps_130;
                          MR_Word ProcTableStructInfo_131;
                          MR_Word OutputSteps_132;

                          transform_hlds__table_gen__create_new_mm_goal_18_p_0(Detism_20, OrigGoal_25, Statistics_32, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_183, NumberedOutputVars_184, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &CallTableTip_128, &Goal_52, &InputSteps_129, &OutputSteps_132);
                          {
                            MaybeCallTableTip_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), MaybeCallTableTip_54, 0) = ((MR_Box) (CallTableTip_128));
                          }
                          {
                            MaybeOutputSteps_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), MaybeOutputSteps_130, 0) = ((MR_Box) (OutputSteps_132));
                          }
                          transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(TableInfo_51, PredId_13, ProcId_14, InputSteps_129, MaybeOutputSteps_130, InputVarModeMethods_181, OutputVarModeMethods_182, &ProcTableStructInfo_131);
                          {
                            MaybeProcTableStructInfo_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), MaybeProcTableStructInfo_55, 0) = ((MR_Box) (ProcTableStructInfo_131));
                          }
                          *STATE_VARIABLE_GenMap_78 = STATE_VARIABLE_GenMap_0_77;
                        }
                        break;
                    }
                    MaybeProcTableIOInfo_53 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Decl_44;
          MR_Word Unitize_45;
          MR_Word Globals_46;
          MR_Word TableIoStates_47;
          MR_Word HeadVarModes_48;
          MR_Word Var_90;
          MR_Word InputVarModeMethods_169;
          MR_Word OutputVarModeMethods_170;
          MR_Word NumberedInputVars_171;
          MR_Word NumberedOutputVars_172;
          MR_Word Var_164;

          {
            Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[16]));
            MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_4));
            MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (MaybeAttributes_27));
            MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_90, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "eval_table_io and Attributes");
          transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_26, STATE_VARIABLE_ModuleInfo_0_75, (MR_Word) (&transform_hlds__table_gen_scalar_common_4[9]), &Var_164, &InputVarModeMethods_169, &OutputVarModeMethods_170);
          transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_169, (MR_Integer) 0, &NumberedInputVars_171);
          transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_170, (MR_Integer) 0, &NumberedOutputVars_172);
          Decl_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), EvalMethod_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          Unitize_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), EvalMethod_12, (MR_Integer) 0))) & (MR_Integer) 1);
          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_75, &Globals_46);
          libs__globals__lookup_bool_option_3_p_0(Globals_46, (MR_Integer) 140, &TableIoStates_47);
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadVars_22, ArgModes_26, &HeadVarModes_48);
          transform_hlds__table_gen__create_new_io_goal_17_p_0(OrigGoal_25, Decl_44, Unitize_45, TableIoStates_47, PredId_13, ProcId_14, HeadVarModes_48, NumberedInputVars_171, NumberedOutputVars_172, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &Goal_52, &MaybeProcTableIOInfo_53);
          MaybeCallTableTip_54 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeProcTableStructInfo_55 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_GenMap_78 = STATE_VARIABLE_GenMap_0_77;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeSpecMethod_31;
          MR_Word Statistics_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_28, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          MR_Word MaybeSizeLimit_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_28, (MR_Integer) 1))));
          MR_Word CallStrictness_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_28, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) CallStrictness_35)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(CallStrictness_35)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MaybeSpecMethod_31 = (MR_Word) (&transform_hlds__table_gen_scalar_common_4[9]);
                  break;
                case (MR_Integer) 1:
                  MaybeSpecMethod_31 = (MR_Word) (&transform_hlds__table_gen_scalar_common_4[8]);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgMethods_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallStrictness_35, (MR_Integer) 0))));
                MR_Word HiddenArgMethod_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), CallStrictness_35, (MR_Integer) 1))) & (MR_Integer) 1);

                {
                  MaybeSpecMethod_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeSpecMethod_31, 0) = ((MR_Box) (ArgMethods_36));
                  MR_hl_field(MR_mktag(1), MaybeSpecMethod_31, 1) = (MR_Box) ((MR_Unsigned) (HiddenArgMethod_37));
                }
              }
              break;
          }
          switch (MR_tag((MR_Word) EvalMethod_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(EvalMethod_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word InputVarModeMethods_40;
                    MR_Word OutputVarModeMethods_41;
                    MR_Word NumberedInputVars_42;
                    MR_Word NumberedOutputVars_43;
                    MR_Word CallTableTip_56;
                    MR_Word InputSteps_57;
                    MR_Word ProcTableStructInfo_59;
                    MR_Word Var_39;

                    transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_26, STATE_VARIABLE_ModuleInfo_0_75, MaybeSpecMethod_31, &Var_39, &InputVarModeMethods_40, &OutputVarModeMethods_41);
                    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_40, (MR_Integer) 0, &NumberedInputVars_42);
                    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_41, (MR_Integer) 0, &NumberedOutputVars_43);
                    transform_hlds__table_gen__create_new_loop_goal_16_p_0(OrigGoal_25, Statistics_32, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_42, NumberedOutputVars_43, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &CallTableTip_56, &Goal_52, &InputSteps_57);
                    transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(TableInfo_51, PredId_13, ProcId_14, InputSteps_57, (MR_Word) ((MR_Unsigned) 0U), InputVarModeMethods_40, OutputVarModeMethods_41, &ProcTableStructInfo_59);
                    {
                      MaybeCallTableTip_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeCallTableTip_54, 0) = ((MR_Box) (CallTableTip_56));
                    }
                    MaybeProcTableIOInfo_53 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MaybeProcTableStructInfo_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeProcTableStructInfo_55, 0) = ((MR_Box) (ProcTableStructInfo_59));
                    }
                    *STATE_VARIABLE_GenMap_78 = STATE_VARIABLE_GenMap_0_77;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CallTableTip_124;
                    MR_Word InputSteps_125;
                    MR_Word MaybeOutputSteps_126;
                    MR_Word ProcTableStructInfo_127;
                    MR_Word InputVarModeMethods_175;
                    MR_Word OutputVarModeMethods_176;
                    MR_Word NumberedInputVars_177;
                    MR_Word NumberedOutputVars_178;
                    MR_Word Var_173;

                    transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_26, STATE_VARIABLE_ModuleInfo_0_75, MaybeSpecMethod_31, &Var_173, &InputVarModeMethods_175, &OutputVarModeMethods_176);
                    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_175, (MR_Integer) 0, &NumberedInputVars_177);
                    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_176, (MR_Integer) 0, &NumberedOutputVars_178);
                    switch (CodeModel_21) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        {
                          transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_18_p_0(Detism_20, OrigGoal_25, Statistics_32, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_177, NumberedOutputVars_178, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &CallTableTip_124, &Goal_52, &InputSteps_125);
                          MaybeOutputSteps_126 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word OutputSteps_60;

                          transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_19_p_0(Detism_20, OrigGoal_25, Statistics_32, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_177, NumberedOutputVars_178, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &CallTableTip_124, &Goal_52, &InputSteps_125, &OutputSteps_60);
                          {
                            MaybeOutputSteps_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), MaybeOutputSteps_126, 0) = ((MR_Box) (OutputSteps_60));
                          }
                        }
                        break;
                    }
                    transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(TableInfo_51, PredId_13, ProcId_14, InputSteps_125, MaybeOutputSteps_126, InputVarModeMethods_175, OutputVarModeMethods_176, &ProcTableStructInfo_127);
                    {
                      MaybeCallTableTip_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeCallTableTip_54, 0) = ((MR_Box) (CallTableTip_124));
                    }
                    MaybeProcTableIOInfo_53 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      MaybeProcTableStructInfo_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeProcTableStructInfo_55, 0) = ((MR_Box) (ProcTableStructInfo_127));
                    }
                    *STATE_VARIABLE_GenMap_78 = STATE_VARIABLE_GenMap_0_77;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word MinimalMethod_61;
                MR_Word Var_81;
                MR_Word Var_85;
                MR_Word Var_99;
                MR_Word InputVarModeMethods_181;
                MR_Word OutputVarModeMethods_182;
                MR_Word NumberedInputVars_183;
                MR_Word NumberedOutputVars_184;
                MR_Word Var_179;

                {
                  Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[13]));
                  MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (MaybeSizeLimit_33));
                  MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_81, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "eval_minimal with size limit");
                {
                  Var_85 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[14]));
                  MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (MaybeSpecMethod_31));
                  MR_hl_field(MR_mktag(0), Var_85, 4) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_4[9]));
                }
                mercury__require__expect_3_p_0(Var_85, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "eval_minimal without all_strict");
                transform_hlds__table_gen__get_input_output_vars_7_p_0(HeadVars_22, ArgModes_26, STATE_VARIABLE_ModuleInfo_0_75, MaybeSpecMethod_31, &Var_179, &InputVarModeMethods_181, &OutputVarModeMethods_182);
                transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InputVarModeMethods_181, (MR_Integer) 0, &NumberedInputVars_183);
                transform_hlds__table_gen__allocate_slot_numbers_3_p_0(OutputVarModeMethods_182, (MR_Integer) 0, &NumberedOutputVars_184);
                MinimalMethod_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), EvalMethod_12, (MR_Integer) 0))) & (MR_Integer) 3);
                {
                  Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[15]));
                  MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_transform_proc_11_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (CodeModel_21));
                  MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) ((MR_Integer) 2));
                }
                mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "table_gen_transform_proc: minimal model but not model_non");
                switch (MinimalMethod_61) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word _InputSteps_62;
                      MR_Word _OutputSteps_63;

                      transform_hlds__table_gen__do_own_stack_transform_21_p_0(Detism_20, OrigGoal_25, Statistics_32, PredId_13, ProcId_14, STATE_VARIABLE_PredInfo_0_73, STATE_VARIABLE_ProcInfo_0_71, HeadVars_22, NumberedInputVars_183, NumberedOutputVars_184, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, STATE_VARIABLE_GenMap_0_77, STATE_VARIABLE_GenMap_78, &Goal_52, &_InputSteps_62, &_OutputSteps_63);
                      MaybeCallTableTip_54 = (MR_Word) ((MR_Unsigned) 0U);
                      MaybeProcTableStructInfo_55 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_transform_proc\'/11", (MR_String) "own stacks generator");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word CallTableTip_128;
                      MR_Word InputSteps_129;
                      MR_Word MaybeOutputSteps_130;
                      MR_Word ProcTableStructInfo_131;
                      MR_Word OutputSteps_132;

                      transform_hlds__table_gen__create_new_mm_goal_18_p_0(Detism_20, OrigGoal_25, Statistics_32, PredId_13, ProcId_14, HeadVars_22, NumberedInputVars_183, NumberedOutputVars_184, VarSet0_23, &VarSet_49, VarTypes0_24, &VarTypes_50, TableInfo0_19, &TableInfo_51, &CallTableTip_128, &Goal_52, &InputSteps_129, &OutputSteps_132);
                      {
                        MaybeCallTableTip_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeCallTableTip_54, 0) = ((MR_Box) (CallTableTip_128));
                      }
                      {
                        MaybeOutputSteps_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeOutputSteps_130, 0) = ((MR_Box) (OutputSteps_132));
                      }
                      transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(TableInfo_51, PredId_13, ProcId_14, InputSteps_129, MaybeOutputSteps_130, InputVarModeMethods_181, OutputVarModeMethods_182, &ProcTableStructInfo_131);
                      {
                        MaybeProcTableStructInfo_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), MaybeProcTableStructInfo_55, 0) = ((MR_Box) (ProcTableStructInfo_131));
                      }
                      *STATE_VARIABLE_GenMap_78 = STATE_VARIABLE_GenMap_0_77;
                    }
                    break;
                }
                MaybeProcTableIOInfo_53 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
    }
    transform_hlds__table_gen__table_info_extract_4_p_0(TableInfo_51, &STATE_VARIABLE_ModuleInfo_107_107, &STATE_VARIABLE_PredInfo_108_108, &STATE_VARIABLE_ProcInfo_109_109);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_52, STATE_VARIABLE_ProcInfo_109_109, &STATE_VARIABLE_ProcInfo_110_110);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_49, STATE_VARIABLE_ProcInfo_110_110, &STATE_VARIABLE_ProcInfo_111_111);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_50, STATE_VARIABLE_ProcInfo_111_111, &STATE_VARIABLE_ProcInfo_112_112);
    hlds__hlds_pred__proc_info_set_call_table_tip_3_p_0(MaybeCallTableTip_54, STATE_VARIABLE_ProcInfo_112_112, &STATE_VARIABLE_ProcInfo_113_113);
    if ((MaybeProcTableIOInfo_53 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ProcInfo_115_115 = STATE_VARIABLE_ProcInfo_113_113;
    else
      hlds__hlds_pred__proc_info_set_maybe_proc_table_io_info_3_p_0(MaybeProcTableIOInfo_53, STATE_VARIABLE_ProcInfo_113_113, &STATE_VARIABLE_ProcInfo_115_115);
    if ((MaybeProcTableStructInfo_55 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_ModuleInfo_116_116 = STATE_VARIABLE_ModuleInfo_107_107;
    else
    {
      MR_Word FinalProcTableStructInfo_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcTableStructInfo_55, (MR_Integer) 0))));
      MR_Word PredProcId_66;

      {
        PredProcId_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredProcId_66, 0) = ((MR_Box) (PredId_13));
        MR_hl_field(MR_mktag(0), PredProcId_66, 1) = ((MR_Box) (ProcId_14));
      }
      transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_66, FinalProcTableStructInfo_65, STATE_VARIABLE_ProcInfo_115_115, STATE_VARIABLE_ModuleInfo_107_107, &STATE_VARIABLE_ModuleInfo_116_116);
    }
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_115_115, STATE_VARIABLE_ProcInfo_72, STATE_VARIABLE_ModuleInfo_116_116, &STATE_VARIABLE_ModuleInfo_119_119);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_108_108, &ProcTable1_67);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_14)), ((MR_Box) (*STATE_VARIABLE_ProcInfo_72)), ProcTable1_67, &ProcTable_68);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_68, STATE_VARIABLE_PredInfo_108_108, &STATE_VARIABLE_PredInfo_120_120);
    {
      Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (PredId_13));
      MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (ProcId_14));
    }
    check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_119_119, Var_121, STATE_VARIABLE_PredInfo_120_120, STATE_VARIABLE_PredInfo_74);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_119_119, &PredTable1_69);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_13)), ((MR_Box) (*STATE_VARIABLE_PredInfo_74)), PredTable1_69, &PredTable_70);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_70, STATE_VARIABLE_ModuleInfo_119_119, STATE_VARIABLE_ModuleInfo_76);
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_205;

    conv0_HeadVar__2_205 = transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_non_goal__1182__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_205));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_110_111_110_95_103_111_97_108_95_95_91_52_93_95_48_19_p_0(
  MR_Word Detism_20,
  MR_Word OrigGoal_21,
  MR_Word Statistics_22,
  MR_Word PredId_24,
  MR_Integer ProcId_25,
  MR_Word HeadVars_26,
  MR_Word NumberedInputVars_27,
  MR_Word NumberedOutputVars_28,
  MR_Word STATE_VARIABLE_VarSet_0_89,
  MR_Word * STATE_VARIABLE_VarSet_90,
  MR_Word STATE_VARIABLE_VarTypes_0_91,
  MR_Word * STATE_VARIABLE_VarTypes_92,
  MR_Word STATE_VARIABLE_TableInfo_0_93,
  MR_Word * STATE_VARIABLE_TableInfo_94,
  MR_Word * RecordVar_32,
  MR_Word * Goal_33,
  MR_Word * InputSteps_34,
  MR_Word * OutputSteps_35)
{
  {
    MR_Word OrigNonLocals_36;
    MR_Word OrigGoalInfo_38;
    MR_Word OrigInstMapDelta_39;
    MR_Word Context_40;
    MR_Word ModuleInfo_41;
    MR_Integer BlockSize_42;
    MR_Word InfiniteRecursionGoal_43;
    MR_Word NeedMinModelGoal_44;
    MR_Word StatusVar_45;
    MR_Word LookUpGoal_46;
    MR_Word SaveAnswerGoals_47;
    MR_Word RestoreAllAnswerGoal_48;
    MR_String RecordVarName_49;
    MR_Word RecordArg_50;
    MR_String DebugArgStr_57;
    MR_String MarkIncompleteCode_58;
    MR_String MarkActiveCode_59;
    MR_String MarkCompleteCode_60;
    MR_Word MarkIncompleteGoal_61;
    MR_Word MarkActiveGoal_62;
    MR_Word MarkCompleteGoal_63;
    MR_Word OrigSaveExpr_64;
    MR_Word OrigSaveNonLocals_65;
    MR_Word OrigSaveIMD0_66;
    MR_Word OrigSaveIMD_67;
    MR_Word OrigSaveGoalInfo_68;
    MR_Word OrigSaveGoal_69;
    MR_Word AfterExpr_70;
    MR_Word AfterNonLocals_71;
    MR_Word AfterInstMapDelta_72;
    MR_Word AfterGoalInfo_73;
    MR_Word AfterGoal_74;
    MR_Word OrigSaveAfterExpr_75;
    MR_Word OrigSaveAfterGoal_76;
    MR_Word InactiveExpr_77;
    MR_Word InactiveGoal_78;
    MR_Word InactiveNonLocals_79;
    MR_Word OutputVars_80;
    MR_Word InactiveInstmapDelta_81;
    MR_Word SwitchArms_82;
    MR_Word SwitchExpr_83;
    MR_Word SwitchNonLocals_84;
    MR_Word SwitchGoalInfo_85;
    MR_Word SwitchGoal_86;
    MR_Word GoalExpr_87;
    MR_Word GoalInfo_88;
    MR_String Var_95;
    MR_Word STATE_VARIABLE_VarSet_96_96;
    MR_Word STATE_VARIABLE_VarTypes_97_97;
    MR_String Var_98;
    MR_Word STATE_VARIABLE_VarSet_99_99;
    MR_Word STATE_VARIABLE_VarTypes_100_100;
    MR_Word STATE_VARIABLE_VarSet_101_101;
    MR_Word STATE_VARIABLE_VarTypes_102_102;
    MR_Word STATE_VARIABLE_TableInfo_103_103;
    MR_Word STATE_VARIABLE_VarSet_104_104;
    MR_Word STATE_VARIABLE_VarTypes_105_105;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_String Var_114;
    MR_String Var_116;
    MR_String Var_117;
    MR_String Var_119;
    MR_String Var_121;
    MR_String Var_123;
    MR_String Var_124;
    MR_String Var_126;
    MR_String Var_128;
    MR_String Var_130;
    MR_String Var_131;
    MR_String Var_133;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_140;
    MR_Word Var_143;
    MR_Word Var_147;
    MR_Word Var_150;
    MR_Word Var_154;
    MR_Word Var_157;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_171;
    MR_Word Var_172;
    MR_Word Var_174;
    MR_Word Var_176;
    MR_Word Var_177;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_183;
    MR_Word Var_184;
    MR_Word Var_185;
    MR_Word Var_187;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_195;
    MR_Word Var_196;

    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_26, &OrigNonLocals_36);
    OrigGoalInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_21, (MR_Integer) 1))));
    OrigInstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_38);
    Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_38);
    ModuleInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_93, (MR_Integer) 0))));
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedOutputVars_28, &BlockSize_42);
    Var_95 = transform_hlds__table_gen__infinite_recursion_msg_0_f_0();
    transform_hlds__table_gen__generate_error_goal_8_p_0(STATE_VARIABLE_TableInfo_0_93, Context_40, Var_95, STATE_VARIABLE_VarSet_0_89, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_VarTypes_0_91, &STATE_VARIABLE_VarTypes_97_97, &InfiniteRecursionGoal_43);
    Var_98 = transform_hlds__table_gen__need_minimal_model_msg_0_f_0();
    transform_hlds__table_gen__generate_error_goal_8_p_0(STATE_VARIABLE_TableInfo_0_93, Context_40, Var_98, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_99_99, STATE_VARIABLE_VarTypes_97_97, &STATE_VARIABLE_VarTypes_100_100, &NeedMinModelGoal_44);
    transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_15_p_0(NumberedInputVars_27, PredId_24, ProcId_25, Statistics_22, Context_40, STATE_VARIABLE_VarSet_99_99, &STATE_VARIABLE_VarSet_101_101, STATE_VARIABLE_VarTypes_100_100, &STATE_VARIABLE_VarTypes_102_102, STATE_VARIABLE_TableInfo_0_93, &STATE_VARIABLE_TableInfo_103_103, RecordVar_32, &StatusVar_45, &LookUpGoal_46, InputSteps_34);
    transform_hlds__table_gen__generate_memo_non_save_goals_15_p_0(NumberedOutputVars_28, PredId_24, ProcId_25, *RecordVar_32, BlockSize_42, Statistics_22, Context_40, STATE_VARIABLE_VarSet_101_101, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_VarTypes_102_102, &STATE_VARIABLE_VarTypes_105_105, STATE_VARIABLE_TableInfo_103_103, STATE_VARIABLE_TableInfo_94, OutputSteps_35, &SaveAnswerGoals_47);
    transform_hlds__table_gen__generate_memo_non_restore_goal_11_p_0(Detism_20, NumberedOutputVars_28, OrigInstMapDelta_39, *RecordVar_32, Context_40, STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_VarSet_90, STATE_VARIABLE_VarTypes_105_105, STATE_VARIABLE_VarTypes_92, *STATE_VARIABLE_TableInfo_94, &RestoreAllAnswerGoal_48);
    RecordVarName_49 = transform_hlds__table_gen__memo_non_record_name_0_f_0();
    Var_111 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (RecordVarName_49));
      MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
    }
    Var_112 = transform_hlds__table_gen__memo_non_record_type_0_f_0();
    {
      RecordArg_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RecordArg_50, 0) = ((MR_Box) (*RecordVar_32));
      MR_hl_field(MR_mktag(0), RecordArg_50, 1) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), RecordArg_50, 2) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), RecordArg_50, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    DebugArgStr_57 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_94);
    Var_119 = mercury__string__f_43_43_2_f_0(RecordVarName_49, (MR_String) ");\n");
    Var_117 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_119);
    Var_116 = mercury__string__f_43_43_2_f_0(DebugArgStr_57, Var_117);
    Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_116);
    MarkIncompleteCode_58 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_incomplete", Var_114);
    Var_126 = mercury__string__f_43_43_2_f_0(RecordVarName_49, (MR_String) ");\n");
    Var_124 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_126);
    Var_123 = mercury__string__f_43_43_2_f_0(DebugArgStr_57, Var_124);
    Var_121 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_123);
    MarkActiveCode_59 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_active_and_fail", Var_121);
    Var_133 = mercury__string__f_43_43_2_f_0(RecordVarName_49, (MR_String) ");\n");
    Var_131 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_133);
    Var_130 = mercury__string__f_43_43_2_f_0(DebugArgStr_57, Var_131);
    Var_128 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_130);
    MarkCompleteCode_60 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_complete_and_fail", Var_128);
    Var_136 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (RecordArg_50));
      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_140 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_mark_as_incomplete", (MR_Integer) 0, Var_136, Var_137, (MR_Word) ((MR_Unsigned) 0U), MarkIncompleteCode_58, (MR_Integer) 2, Var_140, ModuleInfo_41, Context_40, &MarkIncompleteGoal_61);
    Var_143 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_147 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_mark_as_active_and_fail", (MR_Integer) 7, Var_143, Var_137, (MR_Word) ((MR_Unsigned) 0U), MarkActiveCode_59, (MR_Integer) 2, Var_147, ModuleInfo_41, Context_40, &MarkActiveGoal_62);
    Var_150 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_154 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_mark_as_complete_and_fail", (MR_Integer) 7, Var_150, Var_137, (MR_Word) ((MR_Unsigned) 0U), MarkCompleteCode_60, (MR_Integer) 2, Var_154, ModuleInfo_41, Context_40, &MarkCompleteGoal_63);
    {
      Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (OrigGoal_21));
      MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (SaveAnswerGoals_47));
    }
    {
      OrigSaveExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OrigSaveExpr_64, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), OrigSaveExpr_64, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), OrigSaveExpr_64, 2) = ((MR_Box) (Var_157));
    }
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *RecordVar_32, OrigNonLocals_36, &OrigSaveNonLocals_65);
    transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_157, &OrigSaveIMD0_66);
    hlds__instmap__instmap_delta_restrict_3_p_0(OrigSaveNonLocals_65, OrigSaveIMD0_66, &OrigSaveIMD_67);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigSaveNonLocals_65, OrigSaveIMD_67, (MR_Integer) 3, (MR_Integer) 2, Context_40, &OrigSaveGoalInfo_68);
    {
      OrigSaveGoal_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrigSaveGoal_69, 0) = ((MR_Box) (OrigSaveExpr_64));
      MR_hl_field(MR_mktag(0), OrigSaveGoal_69, 1) = ((MR_Box) (OrigSaveGoalInfo_68));
    }
    {
      Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (MarkActiveGoal_62));
      MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (MarkIncompleteGoal_61));
      MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_162));
    }
    {
      AfterExpr_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), AfterExpr_70, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), AfterExpr_70, 1) = ((MR_Box) (Var_161));
    }
    AfterNonLocals_71 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *RecordVar_32);
    transform_hlds__table_gen__create_instmap_delta_2_p_0((MR_Word) ((MR_Unsigned) 0U), &AfterInstMapDelta_72);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(AfterNonLocals_71, AfterInstMapDelta_72, (MR_Integer) 3, (MR_Integer) 2, Context_40, &AfterGoalInfo_73);
    {
      AfterGoal_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AfterGoal_74, 0) = ((MR_Box) (AfterExpr_70));
      MR_hl_field(MR_mktag(0), AfterGoal_74, 1) = ((MR_Box) (AfterGoalInfo_73));
    }
    {
      Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (AfterGoal_74));
      MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (OrigSaveGoal_69));
      MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_169));
    }
    {
      OrigSaveAfterExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OrigSaveAfterExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), OrigSaveAfterExpr_75, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), OrigSaveAfterExpr_75, 2) = ((MR_Box) (Var_168));
    }
    {
      OrigSaveAfterGoal_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrigSaveAfterGoal_76, 0) = ((MR_Box) (OrigSaveAfterExpr_75));
      MR_hl_field(MR_mktag(0), OrigSaveAfterGoal_76, 1) = ((MR_Box) (OrigSaveGoalInfo_68));
    }
    {
      Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MarkCompleteGoal_63));
      MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (OrigSaveAfterGoal_76));
      MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
    }
    {
      InactiveExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InactiveExpr_77, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), InactiveExpr_77, 1) = ((MR_Box) (Var_171));
    }
    {
      InactiveGoal_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InactiveGoal_78, 0) = ((MR_Box) (InactiveExpr_77));
      MR_hl_field(MR_mktag(0), InactiveGoal_78, 1) = ((MR_Box) (OrigSaveGoalInfo_68));
    }
    {
      Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (*RecordVar_32));
      MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (HeadVars_26));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_174, &InactiveNonLocals_79);
    OutputVars_80 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[24]), NumberedOutputVars_28);
    InactiveInstmapDelta_81 = hlds__instmap__instmap_delta_bind_vars_1_f_0(OutputVars_80);
    Var_177 = transform_hlds__table_gen__memo_non_active_cons_id_0_f_0();
    {
      Var_176 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) (Var_177));
      MR_hl_field(MR_mktag(0), Var_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_176, 2) = ((MR_Box) (InfiniteRecursionGoal_43));
    }
    Var_181 = transform_hlds__table_gen__memo_non_inactive_cons_id_0_f_0();
    {
      Var_180 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_180, 0) = ((MR_Box) (Var_181));
      MR_hl_field(MR_mktag(0), Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_180, 2) = ((MR_Box) (InactiveGoal_78));
    }
    Var_185 = transform_hlds__table_gen__memo_non_incomplete_cons_id_0_f_0();
    {
      Var_184 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_184, 0) = ((MR_Box) (Var_185));
      MR_hl_field(MR_mktag(0), Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_184, 2) = ((MR_Box) (NeedMinModelGoal_44));
    }
    Var_189 = transform_hlds__table_gen__memo_non_complete_cons_id_0_f_0();
    {
      Var_188 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_188, 0) = ((MR_Box) (Var_189));
      MR_hl_field(MR_mktag(0), Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_188, 2) = ((MR_Box) (RestoreAllAnswerGoal_48));
    }
    {
      Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (Var_188));
      MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Var_184));
      MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Var_187));
    }
    {
      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
      MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_183));
    }
    {
      SwitchArms_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SwitchArms_82, 0) = ((MR_Box) (Var_176));
      MR_hl_field(MR_mktag(1), SwitchArms_82, 1) = ((MR_Box) (Var_179));
    }
    {
      SwitchExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchExpr_83, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), SwitchExpr_83, 1) = ((MR_Box) (StatusVar_45));
      MR_hl_field(MR_mktag(3), SwitchExpr_83, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SwitchExpr_83, 3) = ((MR_Box) (SwitchArms_82));
    }
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StatusVar_45, InactiveNonLocals_79, &SwitchNonLocals_84);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(SwitchNonLocals_84, InactiveInstmapDelta_81, Detism_20, (MR_Integer) 2, Context_40, &SwitchGoalInfo_85);
    {
      SwitchGoal_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SwitchGoal_86, 0) = ((MR_Box) (SwitchExpr_83));
      MR_hl_field(MR_mktag(0), SwitchGoal_86, 1) = ((MR_Box) (SwitchGoalInfo_85));
    }
    {
      Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (SwitchGoal_86));
      MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (LookUpGoal_46));
      MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_196));
    }
    {
      GoalExpr_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_87, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_87, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_87, 2) = ((MR_Box) (Var_195));
    }
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_36, OrigInstMapDelta_39, Detism_20, (MR_Integer) 2, Context_40, &GoalInfo_88);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_33 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_87));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_88));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_complete_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_non_complete"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_incomplete_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_non_incomplete"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_active_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_non_active"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_inactive_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_non_inactive"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__need_minimal_model_msg_0_f_0(void)
{
  {
    return (MR_String) "detected need for minimal model";
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_memo_non_restore_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_78;

    conv0_HeadVar__2_78 = transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_restore_goal__3086__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_78));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_restore_goal_11_p_0(
  MR_Word Detism_12,
  MR_Word NumberedOutputVars_13,
  MR_Word OrigInstMapDelta_14,
  MR_Word RecordVar_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_VarTypes_0_39,
  MR_Word * STATE_VARIABLE_VarTypes_40,
  MR_Word TableInfo_19,
  MR_Word * Goal_20)
{
  {
    MR_bool succeeded = (Detism_12 == (MR_Integer) 2);
    MR_String ReturnAllAns_21;
    MR_Word AnswerBlockVar_22;
    MR_Word ModuleInfo_23;
    MR_Word ReturnAnswerBlocksGoal_24;
    MR_String DebugArgStr_25;
    MR_Word RestoreInstMapDeltaSrc_26;
    MR_Word RestoreArgs_27;
    MR_String RestoreCodeStr_28;
    MR_Word OutputVars_29;
    MR_Word Arg_30;
    MR_Word Args_31;
    MR_Word ShortcutGoal_33;
    MR_Word GoalExpr_34;
    MR_Word NonLocals_35;
    MR_Word GoalInfo_36;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_VarSet_45_45;
    MR_Word STATE_VARIABLE_VarTypes_46_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word TB_82;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word ModuleInfo_90;
    MR_Word Globals_91;
    MR_Word TableDebug_92;

    if (succeeded)
      ReturnAllAns_21 = (MR_String) "table_memo_return_all_answers_multi";
    else
    {
      succeeded = (Detism_12 == (MR_Integer) 3);
      if (succeeded)
        ReturnAllAns_21 = (MR_String) "table_memo_return_all_answers_nondet";
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.generate_memo_non_restore_goal\'/11", (MR_String) "invalid determinism");
          return;
        }
      }
    }
    TB_82 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (TB_82));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_String) "ml_answer_block"));
    }
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_83, (MR_Word) ((MR_Unsigned) 0U), &Var_44);
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "AnswerBlock", Var_44, STATE_VARIABLE_VarSet_0_37, &STATE_VARIABLE_VarSet_45_45, STATE_VARIABLE_VarTypes_0_39, &STATE_VARIABLE_VarTypes_46_46, &AnswerBlockVar_22);
    ModuleInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_19, (MR_Integer) 0))));
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (AnswerBlockVar_22));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (RecordVar_15));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
    }
    Var_49 = hlds__instmap__instmap_delta_bind_var_1_f_0(AnswerBlockVar_22);
    transform_hlds__table_gen__table_generate_call_8_p_0(ReturnAllAns_21, Detism_12, Var_47, (MR_Integer) 1, Var_49, ModuleInfo_23, Context_16, &ReturnAnswerBlocksGoal_24);
    ModuleInfo_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_19, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_90, &Globals_91);
    libs__globals__lookup_bool_option_3_p_0(Globals_91, (MR_Integer) 322, &TableDebug_92);
    switch (TableDebug_92) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugArgStr_25 = (MR_String) "MR_FALSE";
        break;
      case (MR_Integer) 1:
        DebugArgStr_25 = (MR_String) "MR_TRUE";
        break;
    }
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_11_p_0(NumberedOutputVars_13, OrigInstMapDelta_14, DebugArgStr_25, ModuleInfo_23, STATE_VARIABLE_VarSet_45_45, STATE_VARIABLE_VarSet_38, STATE_VARIABLE_VarTypes_46_46, STATE_VARIABLE_VarTypes_40, &RestoreInstMapDeltaSrc_26, &RestoreArgs_27, &RestoreCodeStr_28);
    OutputVars_29 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[23]), NumberedOutputVars_13);
    Var_58 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) ((MR_String) "answerblock"));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
    }
    Var_59 = transform_hlds__table_gen__answer_block_type_0_f_0();
    {
      Arg_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_30, 0) = ((MR_Box) (AnswerBlockVar_22));
      MR_hl_field(MR_mktag(0), Arg_30, 1) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Arg_30, 2) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Arg_30, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Args_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_31, 0) = ((MR_Box) (Arg_30));
      MR_hl_field(MR_mktag(1), Args_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_63 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
    Var_65 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(RestoreInstMapDeltaSrc_26);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_non_return_all_shortcut", (MR_Integer) 0, Var_63, Args_31, RestoreArgs_27, RestoreCodeStr_28, (MR_Integer) 1, Var_65, ModuleInfo_23, Context_16, &ShortcutGoal_33);
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ShortcutGoal_33));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ReturnAnswerBlocksGoal_24));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
    }
    {
      GoalExpr_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_34, 2) = ((MR_Box) (Var_67));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (RecordVar_15));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (OutputVars_29));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_70, &NonLocals_35);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(NonLocals_35, OrigInstMapDelta_14, Detism_12, (MR_Integer) 1, Context_16, &GoalInfo_36);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_36));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_save_goals_15_p_0(
  MR_Word NumberedSaveVars_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word RecordVar_19,
  MR_Integer BlockSize_20,
  MR_Word Statistics_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_VarTypes_0_52,
  MR_Word * STATE_VARIABLE_VarTypes_53,
  MR_Word STATE_VARIABLE_TableInfo_0_54,
  MR_Word * STATE_VARIABLE_TableInfo_55,
  MR_Word * OutputSteps_26,
  MR_Word * Goals_27)
{
  {
    MR_Word ModuleInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_54, (MR_Integer) 0))));
    MR_String RecordName_29;
    MR_Word RecordArg_30;
    MR_Word LookupForeignArgs_31;
    MR_Word LookupPrefixGoals_32;
    MR_String LookupCodeStr_33;
    MR_String SaveDeclCodeStr_37;
    MR_String CreateSaveCode_38;
    MR_String DebugArgStr_42;
    MR_String LookupDeclCodeStr_44;
    MR_String GetCodeStr_45;
    MR_String DuplCheckCodeStr_46;
    MR_String AssignSuccessCodeStr_47;
    MR_String CodeStr_48;
    MR_Word DuplicateCheckSaveGoal_49;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_VarSet_61_61;
    MR_Word STATE_VARIABLE_VarTypes_62_62;
    MR_Word STATE_VARIABLE_TableInfo_63_63;
    MR_String Var_64;
    MR_String Var_69;
    MR_String Var_70;
    MR_String Var_71;
    MR_String Var_73;
    MR_String Var_75;
    MR_String Var_76;
    MR_String Var_84;
    MR_String Var_85;
    MR_String Var_87;
    MR_String Var_88;
    MR_String Var_90;
    MR_String Var_91;
    MR_String Var_93;
    MR_String Var_94;
    MR_String Var_95;
    MR_String Var_98;
    MR_String Var_99;
    MR_String Var_101;
    MR_String Var_102;
    MR_String Var_104;
    MR_String Var_105;
    MR_String Var_111;
    MR_String Var_112;
    MR_String Var_117;
    MR_String Var_118;
    MR_String Var_120;
    MR_String Var_121;
    MR_String Var_122;
    MR_String Var_123;
    MR_String Var_125;
    MR_String Var_126;
    MR_String Var_128;
    MR_String Var_129;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word _SaveForeignArgs_35;
    MR_Word _SavePrefixGoals_36;

    RecordName_29 = transform_hlds__table_gen__memo_non_record_name_0_f_0();
    Var_58 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (RecordName_29));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
    }
    Var_59 = transform_hlds__table_gen__memo_non_record_type_0_f_0();
    {
      RecordArg_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RecordArg_30, 0) = ((MR_Box) (RecordVar_19));
      MR_hl_field(MR_mktag(0), RecordArg_30, 1) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), RecordArg_30, 2) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), RecordArg_30, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    transform_hlds__table_gen__generate_answer_table_lookup_goals_15_p_0(NumberedSaveVars_16, PredId_17, ProcId_18, Statistics_21, Context_22, STATE_VARIABLE_VarSet_0_50, &STATE_VARIABLE_VarSet_61_61, STATE_VARIABLE_VarTypes_0_52, &STATE_VARIABLE_VarTypes_62_62, STATE_VARIABLE_TableInfo_0_54, &STATE_VARIABLE_TableInfo_63_63, OutputSteps_26, &LookupForeignArgs_31, &LookupPrefixGoals_32, &LookupCodeStr_33);
    Var_64 = transform_hlds__table_gen__memo_non_record_name_0_f_0();
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_15_p_0(NumberedSaveVars_16, Var_64, BlockSize_20, (MR_String) "MR_tbl_memo_non_create_answer_block", Context_22, STATE_VARIABLE_VarSet_61_61, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_VarTypes_62_62, STATE_VARIABLE_VarTypes_53, STATE_VARIABLE_TableInfo_63_63, STATE_VARIABLE_TableInfo_55, &_SaveForeignArgs_35, &_SavePrefixGoals_36, &SaveDeclCodeStr_37, &CreateSaveCode_38);
    DebugArgStr_42 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_55);
    Var_70 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_76 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_75 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) ";\n\tMR_bool succeeded;\n");
    Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_75);
    Var_71 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_73);
    Var_69 = mercury__string__f_43_43_2_f_0(Var_70, Var_71);
    LookupDeclCodeStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_69);
    Var_94 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_95 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", LookupCodeStr_33);
    Var_93 = mercury__string__f_43_43_2_f_0(Var_94, Var_95);
    Var_91 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_93);
    Var_90 = mercury__string__f_43_43_2_f_0(RecordName_29, Var_91);
    Var_88 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_90);
    Var_87 = mercury__string__f_43_43_2_f_0(DebugArgStr_42, Var_88);
    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_87);
    Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_non_get_answer_table", Var_85);
    GetCodeStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_84);
    Var_105 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_104 = mercury__string__f_43_43_2_f_0(Var_105, (MR_String) ", succeeded);\n");
    Var_102 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_104);
    Var_101 = mercury__string__f_43_43_2_f_0(DebugArgStr_42, Var_102);
    Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_101);
    Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_non_answer_is_not_duplicate", Var_99);
    DuplCheckCodeStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_98);
    Var_112 = transform_hlds__table_gen__success_indicator_name_0_f_0();
    Var_111 = mercury__string__f_43_43_2_f_0(Var_112, (MR_String) " = succeeded;\n");
    AssignSuccessCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_111);
    Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "\t}\n", AssignSuccessCodeStr_47);
    Var_128 = mercury__string__f_43_43_2_f_0(CreateSaveCode_38, Var_129);
    Var_126 = mercury__string__f_43_43_2_f_0((MR_String) ") {\n", Var_128);
    Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", Var_126);
    Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "\tif (", Var_125);
    Var_122 = mercury__string__f_43_43_2_f_0(DuplCheckCodeStr_46, Var_123);
    Var_121 = mercury__string__f_43_43_2_f_0(LookupCodeStr_33, Var_122);
    Var_120 = mercury__string__f_43_43_2_f_0(GetCodeStr_45, Var_121);
    Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_120);
    Var_117 = mercury__string__f_43_43_2_f_0(SaveDeclCodeStr_37, Var_118);
    CodeStr_48 = mercury__string__f_43_43_2_f_0(LookupDeclCodeStr_44, Var_117);
    Var_132 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (RecordArg_30));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_135 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_non_answer_is_not_duplicate_shortcut", (MR_Integer) 1, Var_132, Var_133, LookupForeignArgs_31, CodeStr_48, (MR_Integer) 2, Var_135, ModuleInfo_28, Context_22, &DuplicateCheckSaveGoal_49);
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (DuplicateCheckSaveGoal_49));
      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_32, Var_137);
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_140;

    conv0_HeadVar__2_140 = transform_hlds__table_gen__IntroducedFrom__func__generate_memo_non_call_table_lookup_goal__2229__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_140));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_memo_non_call_table_lookup_goal_15_p_0(
  MR_Word NumberedVars_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_55,
  MR_Word * STATE_VARIABLE_VarSet_56,
  MR_Word STATE_VARIABLE_VarTypes_0_57,
  MR_Word * STATE_VARIABLE_VarTypes_58,
  MR_Word STATE_VARIABLE_TableInfo_0_59,
  MR_Word * STATE_VARIABLE_TableInfo_60,
  MR_Word * RecordVar_24,
  MR_Word * StatusVar_25,
  MR_Word * Goal_26,
  MR_Word * Steps_27)
{
  {
    MR_Word InfoArg_30;
    MR_Word LookupForeignArgs_31;
    MR_Word LookupPrefixGoals_32;
    MR_String LookupCodeStr_33;
    MR_Word ModuleInfo_35;
    MR_Word BoundVars_38;
    MR_String RecordVarName_39;
    MR_String StatusVarName_40;
    MR_Word RecordArg_41;
    MR_Word StatusArg_42;
    MR_Word Args_43;
    MR_String LookupDeclCodeStr_44;
    MR_String DebugArgStr_45;
    MR_String BackArgStr_46;
    MR_String PredCodeStr_47;
    MR_Word SetupGoal0_48;
    MR_Word SetupGoal_49;
    MR_Word LookupSetupGoals_50;
    MR_Word GoalExpr_51;
    MR_Word Vars_52;
    MR_Word NonLocals_53;
    MR_Word GoalInfo_54;
    MR_Word STATE_VARIABLE_VarSet_61_61;
    MR_Word STATE_VARIABLE_VarTypes_62_62;
    MR_Word Var_65;
    MR_Word STATE_VARIABLE_VarSet_66_66;
    MR_Word STATE_VARIABLE_VarTypes_67_67;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_String Var_88;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_92;
    MR_String Var_94;
    MR_String Var_95;
    MR_String Var_96;
    MR_String Var_99;
    MR_String Var_100;
    MR_String Var_102;
    MR_String Var_103;
    MR_String Var_105;
    MR_String Var_106;
    MR_String Var_108;
    MR_String Var_109;
    MR_String Var_110;
    MR_String Var_112;
    MR_String Var_113;
    MR_String Var_115;
    MR_Word Var_118;
    MR_String Var_119;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word _TableTipVar_28;
    MR_Word _TableTipArg_29;
    MR_String _CallTableTipAssignStr_34;

    transform_hlds__table_gen__generate_call_table_lookup_goals_19_p_0(NumberedVars_16, PredId_17, ProcId_18, Statistics_19, Context_20, STATE_VARIABLE_VarSet_0_55, &STATE_VARIABLE_VarSet_61_61, STATE_VARIABLE_VarTypes_0_57, &STATE_VARIABLE_VarTypes_62_62, STATE_VARIABLE_TableInfo_0_59, STATE_VARIABLE_TableInfo_60, Steps_27, &_TableTipVar_28, &_TableTipArg_29, &InfoArg_30, &LookupForeignArgs_31, &LookupPrefixGoals_32, &LookupCodeStr_33, &_CallTableTipAssignStr_34);
    ModuleInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_TableInfo_60, (MR_Integer) 0))));
    Var_65 = transform_hlds__table_gen__memo_non_record_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "Record", Var_65, STATE_VARIABLE_VarSet_61_61, &STATE_VARIABLE_VarSet_66_66, STATE_VARIABLE_VarTypes_62_62, &STATE_VARIABLE_VarTypes_67_67, RecordVar_24);
    Var_69 = transform_hlds__table_gen__memo_non_status_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "Status", Var_69, STATE_VARIABLE_VarSet_66_66, STATE_VARIABLE_VarSet_56, STATE_VARIABLE_VarTypes_67_67, STATE_VARIABLE_VarTypes_58, StatusVar_25);
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (*StatusVar_25));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      BoundVars_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), BoundVars_38, 0) = ((MR_Box) (*RecordVar_24));
      MR_hl_field(MR_mktag(1), BoundVars_38, 1) = ((MR_Box) (Var_72));
    }
    RecordVarName_39 = transform_hlds__table_gen__memo_non_record_name_0_f_0();
    StatusVarName_40 = transform_hlds__table_gen__status_name_0_f_0();
    Var_76 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (RecordVarName_39));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
    }
    Var_77 = transform_hlds__table_gen__memo_non_record_type_0_f_0();
    {
      RecordArg_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RecordArg_41, 0) = ((MR_Box) (*RecordVar_24));
      MR_hl_field(MR_mktag(0), RecordArg_41, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), RecordArg_41, 2) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), RecordArg_41, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_81 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (StatusVarName_40));
      MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
    }
    Var_82 = transform_hlds__table_gen__memo_non_status_type_0_f_0();
    {
      StatusArg_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StatusArg_42, 0) = ((MR_Box) (*StatusVar_25));
      MR_hl_field(MR_mktag(0), StatusArg_42, 1) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), StatusArg_42, 2) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), StatusArg_42, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (StatusArg_42));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (RecordArg_41));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      Args_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_43, 0) = ((MR_Box) (InfoArg_30));
      MR_hl_field(MR_mktag(1), Args_43, 1) = ((MR_Box) (Var_84));
    }
    Var_89 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_95 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n", LookupCodeStr_33);
    Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Var_96);
    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_94);
    Var_90 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_92);
    Var_88 = mercury__string__f_43_43_2_f_0(Var_89, Var_90);
    LookupDeclCodeStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_88);
    DebugArgStr_45 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_60);
    BackArgStr_46 = transform_hlds__table_gen__get_back_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_60);
    Var_109 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_115 = mercury__string__f_43_43_2_f_0(StatusVarName_40, (MR_String) ");\n");
    Var_113 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_115);
    Var_112 = mercury__string__f_43_43_2_f_0(RecordVarName_39, Var_113);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_112);
    Var_108 = mercury__string__f_43_43_2_f_0(Var_109, Var_110);
    Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_108);
    Var_105 = mercury__string__f_43_43_2_f_0(BackArgStr_46, Var_106);
    Var_103 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_105);
    Var_102 = mercury__string__f_43_43_2_f_0(DebugArgStr_45, Var_103);
    Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_102);
    Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_non_setup", Var_100);
    PredCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_99);
    Var_118 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
    Var_119 = mercury__string__f_43_43_2_f_0(LookupDeclCodeStr_44, PredCodeStr_47);
    Var_121 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_38);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_non_setup", (MR_Integer) 0, Var_118, Args_43, LookupForeignArgs_31, Var_119, (MR_Integer) 2, Var_121, ModuleInfo_35, Context_20, &SetupGoal0_48);
    transform_hlds__table_gen__attach_call_table_tip_2_p_0(SetupGoal0_48, &SetupGoal_49);
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (SetupGoal_49));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    LookupSetupGoals_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_32, Var_122);
    {
      GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_51, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_51, 2) = ((MR_Box) (LookupSetupGoals_50));
    }
    Vars_52 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[22]), NumberedVars_16);
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (*RecordVar_24));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Vars_52));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (*StatusVar_25));
      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_126, &NonLocals_53);
    Var_128 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_38);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(NonLocals_53, Var_128, (MR_Integer) 0, (MR_Integer) 2, Context_20, &GoalInfo_54);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_51));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_54));
    }
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__memo_non_record_name_0_f_0(void)
{
  {
    return (MR_String) "record";
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_status_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "memo_non_status"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_non_record_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "memo_non_record"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_179;

    conv0_HeadVar__2_179 = transform_hlds__table_gen__IntroducedFrom__func__create_new_memo_goal__1020__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_179));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_119_95_109_101_109_111_95_103_111_97_108_95_95_91_52_93_95_48_18_p_0(
  MR_Word Detism_19,
  MR_Word OrigGoal_20,
  MR_Word Statistics_21,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word HeadVars_25,
  MR_Word NumberedInputVars_26,
  MR_Word NumberedOutputVars_27,
  MR_Word STATE_VARIABLE_VarSet_0_80,
  MR_Word * STATE_VARIABLE_VarSet_81,
  MR_Word STATE_VARIABLE_VarTypes_0_82,
  MR_Word * STATE_VARIABLE_VarTypes_83,
  MR_Word STATE_VARIABLE_TableInfo_0_84,
  MR_Word * STATE_VARIABLE_TableInfo_85,
  MR_Word * TableTipVar_31,
  MR_Word * Goal_32,
  MR_Word * Steps_33)
{
  {
    MR_Word OrigNonLocals_34;
    MR_Word OrigGoalInfo_36;
    MR_Word OrigInstMapDelta_37;
    MR_Word Context_38;
    MR_Word ModuleInfo_39;
    MR_Word CodeModel_40;
    MR_Word StatusVar_44;
    MR_Word LookUpGoal_45;
    MR_Integer BlockSize_47;
    MR_Word InactiveNonLocals_51;
    MR_Word OutputVars_52;
    MR_Word InactiveInstmapDelta_53;
    MR_Word SwitchArms_57;
    MR_Word SwitchExpr_74;
    MR_Word SwitchNonLocals_75;
    MR_Word SwitchGoalInfo_76;
    MR_Word SwitchGoal_77;
    MR_Word GoalExpr_78;
    MR_Word GoalInfo_79;
    MR_String Var_91;
    MR_Word Var_165;
    MR_Word Var_166;

    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_25, &OrigNonLocals_34);
    OrigGoalInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_20, (MR_Integer) 1))));
    OrigInstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_36);
    Context_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_36);
    ModuleInfo_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_84, (MR_Integer) 0))));
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_19, &CodeModel_40);
    Var_91 = transform_hlds__table_gen__infinite_recursion_msg_0_f_0();
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedOutputVars_27, &BlockSize_47);
    OutputVars_52 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[21]), NumberedOutputVars_27);
    InactiveInstmapDelta_53 = hlds__instmap__instmap_delta_bind_vars_1_f_0(OutputVars_52);
    switch (CodeModel_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StatusType_41;
          MR_Word ActiveGoal_46;
          MR_Word SaveAnswerGoals_48;
          MR_Word SucceededGoal_50;
          MR_Word InactiveGoalExpr_54;
          MR_Word InactiveGoalInfo_55;
          MR_Word InactiveGoal_56;
          MR_Word STATE_VARIABLE_VarSet_88_88;
          MR_Word STATE_VARIABLE_VarTypes_89_89;
          MR_Word STATE_VARIABLE_TableInfo_90_90;
          MR_Word STATE_VARIABLE_VarSet_92_92;
          MR_Word STATE_VARIABLE_VarTypes_93_93;
          MR_Word STATE_VARIABLE_VarSet_94_94;
          MR_Word STATE_VARIABLE_VarTypes_95_95;
          MR_Word Var_99;
          MR_Word Var_148;
          MR_Word Var_150;
          MR_Word Var_151;
          MR_Word Var_153;
          MR_Word Var_154;
          MR_Word Var_155;
          MR_Word Var_157;
          MR_Word Var_158;
          MR_Word Var_159;

          StatusType_41 = transform_hlds__table_gen__memo_det_status_type_0_f_0();
          transform_hlds__table_gen__generate_simple_call_table_lookup_goal_18_p_0(StatusType_41, (MR_String) "table_memo_det_setup_shortcut", (MR_String) "MR_tbl_memo_det_setup", NumberedInputVars_26, PredId_23, ProcId_24, Statistics_21, Context_38, STATE_VARIABLE_VarSet_0_80, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_VarTypes_0_82, &STATE_VARIABLE_VarTypes_89_89, STATE_VARIABLE_TableInfo_0_84, &STATE_VARIABLE_TableInfo_90_90, TableTipVar_31, &StatusVar_44, &LookUpGoal_45, Steps_33);
          transform_hlds__table_gen__generate_error_goal_8_p_0(STATE_VARIABLE_TableInfo_90_90, Context_38, Var_91, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_92_92, STATE_VARIABLE_VarTypes_89_89, &STATE_VARIABLE_VarTypes_93_93, &ActiveGoal_46);
          transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_11_p_0(NumberedOutputVars_27, *TableTipVar_31, BlockSize_47, Context_38, STATE_VARIABLE_VarSet_92_92, &STATE_VARIABLE_VarSet_94_94, STATE_VARIABLE_VarTypes_93_93, &STATE_VARIABLE_VarTypes_95_95, STATE_VARIABLE_TableInfo_90_90, STATE_VARIABLE_TableInfo_85, &SaveAnswerGoals_48);
          transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_10_p_0(NumberedOutputVars_27, OrigInstMapDelta_37, *TableTipVar_31, Context_38, STATE_VARIABLE_VarSet_94_94, STATE_VARIABLE_VarSet_81, STATE_VARIABLE_VarTypes_95_95, STATE_VARIABLE_VarTypes_83, *STATE_VARIABLE_TableInfo_85, &SucceededGoal_50);
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (*TableTipVar_31));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (HeadVars_25));
          }
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_99, &InactiveNonLocals_51);
          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (OrigGoal_20));
            MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (SaveAnswerGoals_48));
          }
          {
            InactiveGoalExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_54, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_54, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_54, 2) = ((MR_Box) (Var_148));
          }
          transform_hlds__table_gen__goal_info_init_hide_6_p_0(InactiveNonLocals_51, InactiveInstmapDelta_53, Detism_19, (MR_Integer) 2, Context_38, &InactiveGoalInfo_55);
          {
            InactiveGoal_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InactiveGoal_56, 0) = ((MR_Box) (InactiveGoalExpr_54));
            MR_hl_field(MR_mktag(0), InactiveGoal_56, 1) = ((MR_Box) (InactiveGoalInfo_55));
          }
          Var_151 = transform_hlds__table_gen__memo_det_active_cons_id_0_f_0();
          {
            Var_150 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (Var_151));
            MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_150, 2) = ((MR_Box) (ActiveGoal_46));
          }
          Var_155 = transform_hlds__table_gen__memo_det_inactive_cons_id_0_f_0();
          {
            Var_154 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (Var_155));
            MR_hl_field(MR_mktag(0), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_154, 2) = ((MR_Box) (InactiveGoal_56));
          }
          Var_159 = transform_hlds__table_gen__memo_det_succeeded_cons_id_0_f_0();
          {
            Var_158 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (Var_159));
            MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) (SucceededGoal_50));
          }
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Var_158));
            MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (Var_154));
            MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_157));
          }
          {
            SwitchArms_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SwitchArms_57, 0) = ((MR_Box) (Var_150));
            MR_hl_field(MR_mktag(1), SwitchArms_57, 1) = ((MR_Box) (Var_153));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.create_new_memo_goal\'/18", (MR_String) "model_non");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unifies_58;
          MR_Word NewVars_59;
          MR_Word Renaming_60;
          MR_Word RenamedOrigGoal_61;
          MR_Word ThenGoalExpr_62;
          MR_Word ThenVars_63;
          MR_Word ThenNonLocals_64;
          MR_Word ThenGoalInfo_65;
          MR_Word ThenGoal_66;
          MR_Word TableTipArg_69;
          MR_String DebugArgStr_70;
          MR_String MarkAsFailedCode_71;
          MR_Word ElseGoal_72;
          MR_Word FailedGoal_73;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_String Var_110;
          MR_Word Var_111;
          MR_Word Var_112;
          MR_String Var_114;
          MR_String Var_116;
          MR_String Var_117;
          MR_String Var_119;
          MR_String Var_120;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word Var_127;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_142;
          MR_Word Var_143;
          MR_Word Var_144;
          MR_Word InactiveGoalExpr_169;
          MR_Word InactiveGoalInfo_170;
          MR_Word InactiveGoal_171;
          MR_Word StatusType_182;
          MR_Word ActiveGoal_185;
          MR_Word SaveAnswerGoals_186;
          MR_Word SucceededGoal_187;
          MR_Word STATE_VARIABLE_VarSet_88_188;
          MR_Word STATE_VARIABLE_VarTypes_89_189;
          MR_Word STATE_VARIABLE_TableInfo_90_190;
          MR_Word STATE_VARIABLE_VarSet_92_191;
          MR_Word STATE_VARIABLE_VarTypes_93_192;
          MR_Word STATE_VARIABLE_VarSet_94_193;
          MR_Word STATE_VARIABLE_VarTypes_95_194;
          MR_Word STATE_VARIABLE_VarSet_97_195;
          MR_Word STATE_VARIABLE_VarTypes_98_196;
          MR_Word Var_197;

          StatusType_182 = transform_hlds__table_gen__memo_semi_status_type_0_f_0();
          transform_hlds__table_gen__generate_simple_call_table_lookup_goal_18_p_0(StatusType_182, (MR_String) "table_memo_semi_setup_shortcut", (MR_String) "MR_tbl_memo_semi_setup", NumberedInputVars_26, PredId_23, ProcId_24, Statistics_21, Context_38, STATE_VARIABLE_VarSet_0_80, &STATE_VARIABLE_VarSet_88_188, STATE_VARIABLE_VarTypes_0_82, &STATE_VARIABLE_VarTypes_89_189, STATE_VARIABLE_TableInfo_0_84, &STATE_VARIABLE_TableInfo_90_190, TableTipVar_31, &StatusVar_44, &LookUpGoal_45, Steps_33);
          transform_hlds__table_gen__generate_error_goal_8_p_0(STATE_VARIABLE_TableInfo_90_190, Context_38, Var_91, STATE_VARIABLE_VarSet_88_188, &STATE_VARIABLE_VarSet_92_191, STATE_VARIABLE_VarTypes_89_189, &STATE_VARIABLE_VarTypes_93_192, &ActiveGoal_185);
          transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_11_p_0(NumberedOutputVars_27, *TableTipVar_31, BlockSize_47, Context_38, STATE_VARIABLE_VarSet_92_191, &STATE_VARIABLE_VarSet_94_193, STATE_VARIABLE_VarTypes_93_192, &STATE_VARIABLE_VarTypes_95_194, STATE_VARIABLE_TableInfo_90_190, STATE_VARIABLE_TableInfo_85, &SaveAnswerGoals_186);
          transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_10_p_0(NumberedOutputVars_27, OrigInstMapDelta_37, *TableTipVar_31, Context_38, STATE_VARIABLE_VarSet_94_193, &STATE_VARIABLE_VarSet_97_195, STATE_VARIABLE_VarTypes_95_194, &STATE_VARIABLE_VarTypes_98_196, *STATE_VARIABLE_TableInfo_85, &SucceededGoal_187);
          {
            Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (*TableTipVar_31));
            MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (HeadVars_25));
          }
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_197, &InactiveNonLocals_51);
          hlds__goal_util__create_renaming_9_p_0(OutputVars_52, OrigInstMapDelta_37, STATE_VARIABLE_VarSet_97_195, STATE_VARIABLE_VarSet_81, STATE_VARIABLE_VarTypes_98_196, STATE_VARIABLE_VarTypes_83, &Unifies_58, &NewVars_59, &Renaming_60);
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_60, OrigGoal_20, &RenamedOrigGoal_61);
          Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Unifies_58, SaveAnswerGoals_186);
          {
            ThenGoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ThenGoalExpr_62, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ThenGoalExpr_62, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ThenGoalExpr_62, 2) = ((MR_Box) (Var_104));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (*TableTipVar_31));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (OutputVars_52));
          }
          ThenVars_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), Var_105, NewVars_59);
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ThenVars_63, &ThenNonLocals_64);
          transform_hlds__table_gen__goal_info_init_hide_6_p_0(ThenNonLocals_64, InactiveInstmapDelta_53, (MR_Integer) 0, (MR_Integer) 2, Context_38, &ThenGoalInfo_65);
          {
            ThenGoal_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ThenGoal_66, 0) = ((MR_Box) (ThenGoalExpr_62));
            MR_hl_field(MR_mktag(0), ThenGoal_66, 1) = ((MR_Box) (ThenGoalInfo_65));
          }
          Var_110 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
          Var_111 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (Var_110));
            MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (Var_111));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
          }
          Var_112 = transform_hlds__table_gen__trie_node_type_0_f_0();
          {
            TableTipArg_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TableTipArg_69, 0) = ((MR_Box) (*TableTipVar_31));
            MR_hl_field(MR_mktag(0), TableTipArg_69, 1) = ((MR_Box) (Var_108));
            MR_hl_field(MR_mktag(0), TableTipArg_69, 2) = ((MR_Box) (Var_112));
            MR_hl_field(MR_mktag(0), TableTipArg_69, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          DebugArgStr_70 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_85);
          Var_120 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
          Var_119 = mercury__string__f_43_43_2_f_0(Var_120, (MR_String) ");");
          Var_117 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_119);
          Var_116 = mercury__string__f_43_43_2_f_0(DebugArgStr_70, Var_117);
          Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_116);
          MarkAsFailedCode_71 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_failed", Var_114);
          Var_123 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
          {
            Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (TableTipArg_69));
            MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_127 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_mark_as_failed", (MR_Integer) 7, Var_123, Var_124, (MR_Word) ((MR_Unsigned) 0U), MarkAsFailedCode_71, (MR_Integer) 2, Var_127, ModuleInfo_39, Context_38, &ElseGoal_72);
          {
            InactiveGoalExpr_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_169, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_169, 2) = ((MR_Box) (RenamedOrigGoal_61));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_169, 3) = ((MR_Box) (ThenGoal_66));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_169, 4) = ((MR_Box) (ElseGoal_72));
          }
          transform_hlds__table_gen__goal_info_init_hide_6_p_0(InactiveNonLocals_51, InactiveInstmapDelta_53, Detism_19, (MR_Integer) 2, Context_38, &InactiveGoalInfo_170);
          {
            InactiveGoal_171 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InactiveGoal_171, 0) = ((MR_Box) (InactiveGoalExpr_169));
            MR_hl_field(MR_mktag(0), InactiveGoal_171, 1) = ((MR_Box) (InactiveGoalInfo_170));
          }
          FailedGoal_73 = hlds__make_goal__fail_goal_0_f_0();
          Var_132 = transform_hlds__table_gen__memo_semi_active_cons_id_0_f_0();
          {
            Var_131 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (Var_132));
            MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_131, 2) = ((MR_Box) (ActiveGoal_185));
          }
          Var_136 = transform_hlds__table_gen__memo_semi_inactive_cons_id_0_f_0();
          {
            Var_135 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (Var_136));
            MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_135, 2) = ((MR_Box) (InactiveGoal_171));
          }
          Var_140 = transform_hlds__table_gen__memo_semi_succeeded_cons_id_0_f_0();
          {
            Var_139 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Var_140));
            MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_139, 2) = ((MR_Box) (SucceededGoal_187));
          }
          Var_144 = transform_hlds__table_gen__memo_semi_failed_cons_id_0_f_0();
          {
            Var_143 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (Var_144));
            MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_143, 2) = ((MR_Box) (FailedGoal_73));
          }
          {
            Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
            MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (Var_139));
            MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_142));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_138));
          }
          {
            SwitchArms_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SwitchArms_57, 0) = ((MR_Box) (Var_131));
            MR_hl_field(MR_mktag(1), SwitchArms_57, 1) = ((MR_Box) (Var_134));
          }
        }
        break;
    }
    {
      SwitchExpr_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), SwitchExpr_74, 1) = ((MR_Box) (StatusVar_44));
      MR_hl_field(MR_mktag(3), SwitchExpr_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SwitchExpr_74, 3) = ((MR_Box) (SwitchArms_57));
    }
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StatusVar_44, InactiveNonLocals_51, &SwitchNonLocals_75);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(SwitchNonLocals_75, InactiveInstmapDelta_53, Detism_19, (MR_Integer) 2, Context_38, &SwitchGoalInfo_76);
    {
      SwitchGoal_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SwitchGoal_77, 0) = ((MR_Box) (SwitchExpr_74));
      MR_hl_field(MR_mktag(0), SwitchGoal_77, 1) = ((MR_Box) (SwitchGoalInfo_76));
    }
    {
      Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (SwitchGoal_77));
      MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (LookUpGoal_45));
      MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_166));
    }
    {
      GoalExpr_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_78, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_78, 2) = ((MR_Box) (Var_165));
    }
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_34, OrigInstMapDelta_37, Detism_19, (MR_Integer) 2, Context_38, &GoalInfo_79);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_78));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_79));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_status_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_status_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "memo_det_status"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_failed_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_semi_failed"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_succeeded_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_semi_succeeded"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_active_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_semi_active"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_semi_inactive_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_semi_inactive"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_semi_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_succeeded_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_det_succeeded"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_det_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_active_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_det_active"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_det_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__memo_det_inactive_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "memo_det_inactive"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "memo_det_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_info_extract_4_p_0(
  MR_Word TableInfo_5,
  MR_Word * ModuleInfo_6,
  MR_Word * PredInfo_7,
  MR_Word * ProcInfo_8)
{
  {
    *ModuleInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_5, (MR_Integer) 0))));
    *PredInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_5, (MR_Integer) 1))));
    *ProcInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_5, (MR_Integer) 2))));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__get_input_output_vars_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__IntroducedFrom__pred__get_input_output_vars__3426__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen__get_input_output_vars_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ModuleInfo_3,
  MR_Word STATE_VARIABLE_MaybeSpecMethod_0_4,
  MR_Word * STATE_VARIABLE_MaybeSpecMethod_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_MaybeSpecMethod_5 = STATE_VARIABLE_MaybeSpecMethod_0_4;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "lists not same length");
          return;
        }
      }
    else
    {
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "lists not same length");
          return;
        }
      }
      else
      {
        MR_Word Mode_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Modes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

        succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(ModuleInfo_3, Mode_34);
        if (succeeded)
        {
          MR_Word InVarModes0_40;
          MR_Word ArgMethod_41;
          MR_Word STATE_VARIABLE_MaybeSpecMethod_50_50;
          MR_Word Var_55;

          transform_hlds__table_gen__get_input_output_vars_7_p_0(Var_94, Modes_35, ModuleInfo_3, STATE_VARIABLE_MaybeSpecMethod_0_4, &STATE_VARIABLE_MaybeSpecMethod_50_50, &InVarModes0_40, HeadVar__7_7);
          if (((MR_tag((MR_Word) STATE_VARIABLE_MaybeSpecMethod_50_50)) == (MR_Integer) 0))
          {
            ArgMethod_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MaybeSpecMethod_50_50, (MR_Integer) 0))) & (MR_Integer) 3);
            *STATE_VARIABLE_MaybeSpecMethod_5 = STATE_VARIABLE_MaybeSpecMethod_50_50;
          }
          else
          {
            MR_Word MaybeArgMethods0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeSpecMethod_50_50, (MR_Integer) 0))));
            MR_Word HiddenArgMethod_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeSpecMethod_50_50, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word MaybeArgMethods_44;
            MR_Word LastMaybeArgMethod_45;
            MR_Box conv0_LastMaybeArgMethod_45;

            succeeded = mercury__list__split_last_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[5]), MaybeArgMethods0_42, &MaybeArgMethods_44, &conv0_LastMaybeArgMethod_45);
            if (succeeded)
            {
              LastMaybeArgMethod_45 = ((MR_Word) (conv0_LastMaybeArgMethod_45));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              if ((LastMaybeArgMethod_45 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "bad method for input var");
                  return;
                }
              }
              else
                ArgMethod_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LastMaybeArgMethod_45, (MR_Integer) 0))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MaybeSpecMethod_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeArgMethods_44));
                MR_hl_field(MR_mktag(1), base, 1) = (MR_Box) ((MR_Unsigned) (HiddenArgMethod_43));
              }
            }
            else
            {
              switch (HiddenArgMethod_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ArgMethod_41 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  ArgMethod_41 = (MR_Integer) 0;
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_MaybeSpecMethod_5 = base;
                MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (ArgMethod_41));
              }
            }
          }
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Mode_34));
            MR_hl_field(MR_mktag(0), Var_55, 2) = (MR_Box) ((MR_Unsigned) (ArgMethod_41));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InVarModes0_40));
          }
        }
        else
        {
          succeeded = check_hlds__mode_util__mode_is_fully_output_2_p_0(ModuleInfo_3, Mode_34);
          if (succeeded)
          {
            MR_Word OutVarModes0_46;
            MR_Word STATE_VARIABLE_MaybeSpecMethod_56_56;
            MR_Word Var_63;

            transform_hlds__table_gen__get_input_output_vars_7_p_0(Var_94, Modes_35, ModuleInfo_3, STATE_VARIABLE_MaybeSpecMethod_0_4, &STATE_VARIABLE_MaybeSpecMethod_56_56, HeadVar__6_6, &OutVarModes0_46);
            if (((MR_tag((MR_Word) STATE_VARIABLE_MaybeSpecMethod_56_56)) == (MR_Integer) 0))
              *STATE_VARIABLE_MaybeSpecMethod_5 = STATE_VARIABLE_MaybeSpecMethod_56_56;
            else
            {
              MR_Word MaybeArgMethods0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeSpecMethod_56_56, (MR_Integer) 0))));
              MR_Word HiddenArgMethod_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeSpecMethod_56_56, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word MaybeArgMethods_69;
              MR_Word LastMaybeArgMethod_70;
              MR_Box conv1_LastMaybeArgMethod_70;

              succeeded = mercury__list__split_last_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[5]), MaybeArgMethods0_72, &MaybeArgMethods_69, &conv1_LastMaybeArgMethod_70);
              if (succeeded)
              {
                LastMaybeArgMethod_70 = ((MR_Word) (conv1_LastMaybeArgMethod_70));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Var_57;

                {
                  Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[12]));
                  MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (transform_hlds__table_gen__get_input_output_vars_7_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (LastMaybeArgMethod_70));
                }
                mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "bad method for output var");
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_MaybeSpecMethod_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeArgMethods_69));
                  MR_hl_field(MR_mktag(1), base, 1) = (MR_Box) ((MR_Unsigned) (HiddenArgMethod_73));
                }
              }
              else
              {
                MR_Word ArgMethod_67;

                switch (HiddenArgMethod_73) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    ArgMethod_67 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 0:
                    ArgMethod_67 = (MR_Integer) 0;
                    break;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_MaybeSpecMethod_5 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (ArgMethod_67));
                }
              }
            }
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Var_95));
              MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (Mode_34));
              MR_hl_field(MR_mktag(0), Var_63, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutVarModes0_46));
            }
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.get_input_output_vars\'/7", (MR_String) "bad var");
              return;
            }
          }
        }
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_transform_21_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_260;

    conv1_HeadVar__2_260 = transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_transform__1722__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_260));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__do_own_stack_transform_21_p_0(
  MR_Word Detism_22,
  MR_Word OrigGoal_23,
  MR_Word Statistics_24,
  MR_Word PredId_25,
  MR_Integer ProcId_26,
  MR_Word PredInfo0_27,
  MR_Word ProcInfo0_28,
  MR_Word HeadVars_29,
  MR_Word NumberedInputVars_30,
  MR_Word NumberedOutputVars_31,
  MR_Word STATE_VARIABLE_VarSet_0_91,
  MR_Word * STATE_VARIABLE_VarSet_92,
  MR_Word STATE_VARIABLE_VarTypes_0_93,
  MR_Word * STATE_VARIABLE_VarTypes_94,
  MR_Word STATE_VARIABLE_TableInfo_0_95,
  MR_Word * STATE_VARIABLE_TableInfo_96,
  MR_Word STATE_VARIABLE_GenMap_0_97,
  MR_Word * STATE_VARIABLE_GenMap_98,
  MR_Word * Goal_36,
  MR_Word * InputSteps_37,
  MR_Word * OutputSteps_38)
{
  {
    MR_bool succeeded;
    MR_String PredName_39;
    MR_Word GeneratorPredId_41;
    MR_Word OrigNonLocals_42;
    MR_Word OrigGoalInfo_44;
    MR_Word OrigInstMapDelta_45;
    MR_Word Context_46;
    MR_Integer NumInputVars_47;
    MR_Word ModuleInfo_48;
    MR_Word GeneratorPredType_49;
    MR_Word GeneratorPredVar_50;
    MR_Word ConsumerVar_51;
    MR_Word ShroudedPredProcId_52;
    MR_Word GeneratorConsId_53;
    MR_Word MakeGeneratorVarGoal_54;
    MR_Word InfoArg_57;
    MR_Word LookupForeignArgs_58;
    MR_Word LookupPrefixGoals_59;
    MR_String LookupCodeStr_60;
    MR_Word InputVarModes_62;
    MR_Word LookupForeignArgModes_63;
    MR_Word PickupForeignArgs_64;
    MR_String SaveInputVarCode_65;
    MR_String PickupInputVarCode_66;
    MR_String GeneratorPredVarName_67;
    MR_String ConsumerVarName_68;
    MR_Word GeneratorPredArg_69;
    MR_Word ConsumerArg_70;
    MR_String LookupDeclCodeStr_71;
    MR_String SetupCode_73;
    MR_Word SetupGoal_74;
    MR_Word LookupSetupGoals_75;
    MR_Word AnswerBlockVar_76;
    MR_String ConsumePredName_77;
    MR_Word GetNextAnswerGoal_78;
    MR_String DebugArgStr_79;
    MR_Word RestoreInstMapDeltaSrc_80;
    MR_Word RestoreArgs_81;
    MR_String RestoreCodeStr_82;
    MR_Word AnswerBlockArg_83;
    MR_Word RestoreGoal_85;
    MR_Word GoalExpr_86;
    MR_Word GoalInfo_87;
    MR_Word GeneratorPredInfo_88;
    MR_Word GeneratorTableInfo0_89;
    MR_Word GeneratorTableInfo_90;
    MR_Word STATE_VARIABLE_TableInfo_99_99;
    MR_Word STATE_VARIABLE_VarSet_102_102;
    MR_Word STATE_VARIABLE_VarTypes_103_103;
    MR_Word Var_105;
    MR_Word STATE_VARIABLE_VarSet_106_106;
    MR_Word STATE_VARIABLE_VarTypes_107_107;
    MR_Word Var_108;
    MR_Word STATE_VARIABLE_VarSet_110_110;
    MR_Word STATE_VARIABLE_VarTypes_111_111;
    MR_Word STATE_VARIABLE_TableInfo_112_112;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_String Var_117;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_String Var_126;
    MR_String Var_127;
    MR_String Var_128;
    MR_String Var_130;
    MR_String Var_132;
    MR_String Var_133;
    MR_String Var_134;
    MR_String Var_136;
    MR_String Var_138;
    MR_String Var_139;
    MR_String Var_140;
    MR_String Var_143;
    MR_String Var_144;
    MR_String Var_145;
    MR_String Var_147;
    MR_String Var_148;
    MR_String Var_149;
    MR_String Var_151;
    MR_String Var_153;
    MR_String Var_154;
    MR_String Var_155;
    MR_String Var_157;
    MR_String Var_158;
    MR_String Var_160;
    MR_String Var_161;
    MR_String Var_162;
    MR_String Var_164;
    MR_String Var_165;
    MR_String Var_166;
    MR_String Var_168;
    MR_String Var_169;
    MR_String Var_170;
    MR_String Var_172;
    MR_String Var_173;
    MR_String Var_175;
    MR_String Var_177;
    MR_String Var_178;
    MR_String Var_180;
    MR_String Var_182;
    MR_String Var_183;
    MR_String Var_184;
    MR_String Var_186;
    MR_String Var_188;
    MR_String Var_190;
    MR_String Var_191;
    MR_String Var_192;
    MR_String Var_194;
    MR_String Var_196;
    MR_String Var_197;
    MR_String Var_198;
    MR_String Var_200;
    MR_Word Var_203;
    MR_Word Var_204;
    MR_String Var_205;
    MR_Word Var_207;
    MR_Word Var_208;
    MR_Word Var_209;
    MR_Word Var_211;
    MR_Word Var_212;
    MR_Word Var_215;
    MR_Word STATE_VARIABLE_VarSet_216_216;
    MR_Word STATE_VARIABLE_VarTypes_217_217;
    MR_Word Var_220;
    MR_Word Var_222;
    MR_Word Var_223;
    MR_Word Var_227;
    MR_Word Var_228;
    MR_String Var_229;
    MR_Word Var_230;
    MR_Word Var_231;
    MR_Word Var_234;
    MR_Word Var_235;
    MR_Word Var_237;
    MR_Word Var_240;
    MR_Word Var_241;
    MR_Word Var_242;
    MR_Word Var_246;
    MR_Word GeneratorPredIdPrime_40;
    MR_Box conv0_GeneratorPredIdPrime_40;
    MR_Word _TableTipVar_55;
    MR_Word _TableTipArg_56;
    MR_String _CallTableTipAssignStr_61;
    MR_Word Var_252;
    MR_Word Var_253;

    PredName_39 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_27);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_GenMap_0_97, ((MR_Box) (PredId_25)), &conv0_GeneratorPredIdPrime_40);
    if (succeeded)
    {
      GeneratorPredIdPrime_40 = ((MR_Word) (conv0_GeneratorPredIdPrime_40));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      GeneratorPredId_41 = GeneratorPredIdPrime_40;
      *STATE_VARIABLE_GenMap_98 = STATE_VARIABLE_GenMap_0_97;
      STATE_VARIABLE_TableInfo_99_99 = STATE_VARIABLE_TableInfo_0_95;
    }
    else
    {
      transform_hlds__table_gen__clone_pred_info_7_p_0(PredId_25, PredInfo0_27, HeadVars_29, NumberedOutputVars_31, &GeneratorPredId_41, STATE_VARIABLE_TableInfo_0_95, &STATE_VARIABLE_TableInfo_99_99);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_25)), ((MR_Box) (GeneratorPredId_41)), STATE_VARIABLE_GenMap_0_97, STATE_VARIABLE_GenMap_98);
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_29, &OrigNonLocals_42);
    OrigGoalInfo_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_23, (MR_Integer) 1))));
    OrigInstMapDelta_45 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_44);
    Context_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_44);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedInputVars_30, &NumInputVars_47);
    ModuleInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_99_99, (MR_Integer) 0))));
    GeneratorPredType_49 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "GeneratorPredVar", GeneratorPredType_49, STATE_VARIABLE_VarSet_0_91, &STATE_VARIABLE_VarSet_102_102, STATE_VARIABLE_VarTypes_0_93, &STATE_VARIABLE_VarTypes_103_103, &GeneratorPredVar_50);
    Var_105 = transform_hlds__table_gen__consumer_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "Consumer", Var_105, STATE_VARIABLE_VarSet_102_102, &STATE_VARIABLE_VarSet_106_106, STATE_VARIABLE_VarTypes_103_103, &STATE_VARIABLE_VarTypes_107_107, &ConsumerVar_51);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (GeneratorPredId_41));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (ProcId_26));
    }
    ShroudedPredProcId_52 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_108);
    {
      GeneratorConsId_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GeneratorConsId_53, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), GeneratorConsId_53, 1) = ((MR_Box) (ShroudedPredProcId_52));
      MR_hl_field(MR_mktag(3), GeneratorConsId_53, 2) = NULL;
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_46, GeneratorPredVar_50, GeneratorConsId_53, &MakeGeneratorVarGoal_54);
    transform_hlds__table_gen__generate_call_table_lookup_goals_19_p_0(NumberedInputVars_30, GeneratorPredId_41, ProcId_26, Statistics_24, Context_46, STATE_VARIABLE_VarSet_106_106, &STATE_VARIABLE_VarSet_110_110, STATE_VARIABLE_VarTypes_107_107, &STATE_VARIABLE_VarTypes_111_111, STATE_VARIABLE_TableInfo_99_99, &STATE_VARIABLE_TableInfo_112_112, InputSteps_37, &_TableTipVar_55, &_TableTipArg_56, &InfoArg_57, &LookupForeignArgs_58, &LookupPrefixGoals_59, &LookupCodeStr_60, &_CallTableTipAssignStr_61);
    InputVarModes_62 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[20]), NumberedInputVars_30);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), LookupForeignArgs_58, InputVarModes_62, &LookupForeignArgModes_63);
    transform_hlds__table_gen__generate_save_input_vars_code_6_p_0(LookupForeignArgModes_63, ModuleInfo_48, (MR_Integer) 0, &PickupForeignArgs_64, &SaveInputVarCode_65, &PickupInputVarCode_66);
    GeneratorPredVarName_67 = transform_hlds__table_gen__generator_pred_name_0_f_0();
    ConsumerVarName_68 = transform_hlds__table_gen__consumer_name_0_f_0();
    Var_117 = transform_hlds__table_gen__generator_pred_name_0_f_0();
    Var_118 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
    }
    {
      GeneratorPredArg_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GeneratorPredArg_69, 0) = ((MR_Box) (GeneratorPredVar_50));
      MR_hl_field(MR_mktag(0), GeneratorPredArg_69, 1) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), GeneratorPredArg_69, 2) = ((MR_Box) (GeneratorPredType_49));
      MR_hl_field(MR_mktag(0), GeneratorPredArg_69, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_122 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (ConsumerVarName_68));
      MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
    }
    Var_123 = transform_hlds__table_gen__consumer_type_0_f_0();
    {
      ConsumerArg_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConsumerArg_70, 0) = ((MR_Box) (ConsumerVar_51));
      MR_hl_field(MR_mktag(0), ConsumerArg_70, 1) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(0), ConsumerArg_70, 2) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(0), ConsumerArg_70, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_127 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_133 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_139 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_140 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n", LookupCodeStr_60);
    Var_138 = mercury__string__f_43_43_2_f_0(Var_139, Var_140);
    Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_GeneratorPtr ", Var_138);
    Var_134 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_136);
    Var_132 = mercury__string__f_43_43_2_f_0(Var_133, Var_134);
    Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_132);
    Var_128 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_130);
    Var_126 = mercury__string__f_43_43_2_f_0(Var_127, Var_128);
    LookupDeclCodeStr_71 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_126);
    Var_144 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_148 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_154 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_161 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_165 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_169 = mercury__string__int_to_string_1_f_0(NumInputVars_47);
    Var_183 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_191 = transform_hlds__table_gen__consumer_name_0_f_0();
    Var_197 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_200 = mercury__string__f_43_43_2_f_0(PredName_39, (MR_String) "\");\n");
    Var_198 = mercury__string__f_43_43_2_f_0((MR_String) ", \"", Var_200);
    Var_196 = mercury__string__f_43_43_2_f_0(Var_197, Var_198);
    Var_194 = mercury__string__f_43_43_2_f_0((MR_String) "MR_table_mmos_setup_consumer(", Var_196);
    Var_192 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_194);
    Var_190 = mercury__string__f_43_43_2_f_0(Var_191, Var_192);
    Var_188 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_190);
    Var_186 = mercury__string__f_43_43_2_f_0((MR_String) "\t}\n", Var_188);
    Var_184 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_186);
    Var_182 = mercury__string__f_43_43_2_f_0(Var_183, Var_184);
    Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_mmos_new_generator = ", Var_182);
    Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\");\n", Var_180);
    Var_177 = mercury__string__f_43_43_2_f_0(PredName_39, Var_178);
    Var_175 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_177);
    Var_173 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_175);
    Var_172 = mercury__string__f_43_43_2_f_0(GeneratorPredVarName_67, Var_173);
    Var_170 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_172);
    Var_168 = mercury__string__f_43_43_2_f_0(Var_169, Var_170);
    Var_166 = mercury__string__f_43_43_2_f_0((MR_String) ",\n\t\t\t", Var_168);
    Var_164 = mercury__string__f_43_43_2_f_0(Var_165, Var_166);
    Var_162 = mercury__string__f_43_43_2_f_0((MR_String) " = MR_table_mmos_setup_generator(", Var_164);
    Var_160 = mercury__string__f_43_43_2_f_0(Var_161, Var_162);
    Var_158 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_160);
    Var_157 = mercury__string__f_43_43_2_f_0(SaveInputVarCode_65, Var_158);
    Var_155 = mercury__string__f_43_43_2_f_0((MR_String) " == NULL) {\n", Var_157);
    Var_153 = mercury__string__f_43_43_2_f_0(Var_154, Var_155);
    Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "\tif (", Var_153);
    Var_149 = mercury__string__f_43_43_2_f_0((MR_String) "->MR_generator;\n", Var_151);
    Var_147 = mercury__string__f_43_43_2_f_0(Var_148, Var_149);
    Var_145 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_147);
    Var_143 = mercury__string__f_43_43_2_f_0(Var_144, Var_145);
    SetupCode_73 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_143);
    Var_203 = transform_hlds__table_gen__make_generator_c_attributes_0_f_0();
    {
      Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (ConsumerArg_70));
      MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (GeneratorPredArg_69));
      MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_209));
    }
    {
      Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (InfoArg_57));
      MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_208));
    }
    Var_205 = mercury__string__f_43_43_2_f_0(LookupDeclCodeStr_71, SetupCode_73);
    Var_207 = hlds__instmap__instmap_delta_bind_var_1_f_0(ConsumerVar_51);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_mmos_setup_consumer", (MR_Integer) 0, Var_203, Var_204, LookupForeignArgs_58, Var_205, (MR_Integer) 2, Var_207, ModuleInfo_48, Context_46, &SetupGoal_74);
    {
      Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (MakeGeneratorVarGoal_54));
      MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (LookupPrefixGoals_59));
    }
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (SetupGoal_74));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    LookupSetupGoals_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_211, Var_212);
    Var_215 = transform_hlds__table_gen__answer_block_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "AnswerBlock", Var_215, STATE_VARIABLE_VarSet_110_110, &STATE_VARIABLE_VarSet_216_216, STATE_VARIABLE_VarTypes_111_111, &STATE_VARIABLE_VarTypes_217_217, &AnswerBlockVar_76);
    succeeded = (Detism_22 == (MR_Integer) 2);
    if (succeeded)
      ConsumePredName_77 = (MR_String) "table_mmos_consume_next_answer_multi";
    else
    {
      succeeded = (Detism_22 == (MR_Integer) 3);
      if (succeeded)
        ConsumePredName_77 = (MR_String) "table_mmos_consume_next_answer_nondet";
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.do_own_stack_transform\'/21", (MR_String) "invalid determinism");
          return;
        }
      }
    }
    {
      Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (AnswerBlockVar_76));
      MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) (ConsumerVar_51));
      MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) (Var_223));
    }
    Var_222 = hlds__instmap__instmap_delta_bind_var_1_f_0(AnswerBlockVar_76);
    transform_hlds__table_gen__table_generate_call_8_p_0(ConsumePredName_77, Detism_22, Var_220, (MR_Integer) 2, Var_222, ModuleInfo_48, Context_46, &GetNextAnswerGoal_78);
    DebugArgStr_79 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(STATE_VARIABLE_TableInfo_112_112);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_11_p_0(NumberedOutputVars_31, OrigInstMapDelta_45, DebugArgStr_79, ModuleInfo_48, STATE_VARIABLE_VarSet_216_216, STATE_VARIABLE_VarSet_92, STATE_VARIABLE_VarTypes_217_217, STATE_VARIABLE_VarTypes_94, &RestoreInstMapDeltaSrc_80, &RestoreArgs_81, &RestoreCodeStr_82);
    Var_229 = transform_hlds__table_gen__answer_block_name_0_f_0();
    Var_230 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_228 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_228, 0) = ((MR_Box) (Var_229));
      MR_hl_field(MR_mktag(0), Var_228, 1) = ((MR_Box) (Var_230));
    }
    {
      Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (Var_228));
    }
    Var_231 = transform_hlds__table_gen__answer_block_type_0_f_0();
    {
      AnswerBlockArg_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AnswerBlockArg_83, 0) = ((MR_Box) (AnswerBlockVar_76));
      MR_hl_field(MR_mktag(0), AnswerBlockArg_83, 1) = ((MR_Box) (Var_227));
      MR_hl_field(MR_mktag(0), AnswerBlockArg_83, 2) = ((MR_Box) (Var_231));
      MR_hl_field(MR_mktag(0), AnswerBlockArg_83, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_234 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
    {
      Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (AnswerBlockArg_83));
      MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_237 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(RestoreInstMapDeltaSrc_80);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_mmos_restore_answers", (MR_Integer) 0, Var_234, Var_235, RestoreArgs_81, RestoreCodeStr_82, (MR_Integer) 1, Var_237, ModuleInfo_48, Context_46, &RestoreGoal_85);
    {
      Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_242, 0) = ((MR_Box) (RestoreGoal_85));
      MR_hl_field(MR_mktag(1), Var_242, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (GetNextAnswerGoal_78));
      MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) (Var_242));
    }
    Var_240 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupSetupGoals_75, Var_241);
    {
      GoalExpr_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_86, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_86, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_86, 2) = ((MR_Box) (Var_240));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(OrigNonLocals_42, OrigInstMapDelta_45, Detism_22, (MR_Integer) 2, Context_46, &GoalInfo_87);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_36 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_86));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_87));
    }
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_48, GeneratorPredId_41, &GeneratorPredInfo_88);
    transform_hlds__table_gen__table_info_init_4_p_0(ModuleInfo_48, GeneratorPredInfo_88, ProcInfo0_28, &GeneratorTableInfo0_89);
    transform_hlds__table_gen__do_own_stack_create_generator_20_p_0(GeneratorPredId_41, ProcId_26, GeneratorPredInfo_88, ProcInfo0_28, Statistics_24, Context_46, GeneratorPredVar_50, DebugArgStr_79, PickupInputVarCode_66, PickupForeignArgs_64, NumberedInputVars_30, NumberedOutputVars_31, OrigNonLocals_42, OrigInstMapDelta_45, *STATE_VARIABLE_VarTypes_94, *STATE_VARIABLE_VarSet_92, GeneratorTableInfo0_89, &GeneratorTableInfo_90, *InputSteps_37, OutputSteps_38);
    Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GeneratorTableInfo_90, (MR_Integer) 0))));
    Var_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_112_112, (MR_Integer) 1))));
    Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_112_112, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TableInfo_96 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_246));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_252));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_253));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_info_init_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word * TableInfo_8)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *TableInfo_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredInfo_6));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcInfo_7));
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__generator_pred_name_0_f_0(void)
{
  {
    return (MR_String) "generator_pred";
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__consumer_name_0_f_0(void)
{
  {
    return (MR_String) "consumer";
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__make_generator_c_attributes_0_f_0(void)
{
  {
    MR_Word Attrs_2;
    MR_Word Attrs0_3;

    Attrs0_3 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 0, Attrs0_3, &Attrs_2);
    return Attrs_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__consumer_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "ml_consumer"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__clone_pred_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__filter_marker_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen__clone_pred_info_7_p_0(
  MR_Word OrigPredId_8,
  MR_Word PredInfo0_9,
  MR_Word HeadVars_10,
  MR_Word NumberedOutputVars_11,
  MR_Word * GeneratorPredId_12,
  MR_Word STATE_VARIABLE_TableInfo_0_44,
  MR_Word * STATE_VARIABLE_TableInfo_45)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_14;
    MR_String PredName0_15;
    MR_Word PredOrFunc_16;
    MR_Word Context_17;
    MR_Word GoalType_19;
    MR_Word Markers0_20;
    MR_Word ArgTypes0_21;
    MR_Word TypeVarSet_22;
    MR_Word ExistQVars_23;
    MR_Word ClassContext_24;
    MR_Word ClassProofMap_25;
    MR_Word ClassConstraintMap_26;
    MR_Word OrigOrigin_27;
    MR_Word ClausesInfo_28;
    MR_Word VarNameRemap_29;
    MR_Word PredName_30;
    MR_Word HeadVarTypes_31;
    MR_Word ArgTypes_32;
    MR_Integer Arity_33;
    MR_Word MarkerList0_34;
    MR_Word MarkerList_35;
    MR_Word Markers_36;
    MR_Word Origin_37;
    MR_Word PredInfo_39;
    MR_Word ModuleInfo0_40;
    MR_Word PredTable0_41;
    MR_Word PredTable_42;
    MR_Word ModuleInfo_43;
    MR_String Var_47;
    MR_Word Var_55;
    MR_Word Var_56;

    ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_9);
    PredName0_15 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_9);
    PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_9);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_9, &Context_17);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo0_9, &GoalType_19);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_9, &Markers0_20);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_9, &ArgTypes0_21);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_9, &TypeVarSet_22);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_9, &ExistQVars_23);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_9, &ClassContext_24);
    hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(PredInfo0_9, &ClassProofMap_25);
    hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo0_9, &ClassConstraintMap_26);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_9, &OrigOrigin_27);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_9, &ClausesInfo_28);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_9, &VarNameRemap_29);
    Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "GeneratorFor_", PredName0_15);
    {
      PredName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredName_30, 0) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(1), PredName_30, 1) = ((MR_Box) (Var_47));
    }
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HeadVars_10, ArgTypes0_21, &HeadVarTypes_31);
    transform_hlds__table_gen__keep_only_output_arg_types_3_p_0(HeadVarTypes_31, NumberedOutputVars_11, &ArgTypes_32);
    Arity_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_32);
    hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers0_20, &MarkerList0_34);
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[19]), MarkerList0_34, &MarkerList_35);
    hlds__hlds_pred__marker_list_to_markers_2_p_0(MarkerList_35, &Markers_36);
    {
      Origin_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Origin_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(2), Origin_37, 1) = ((MR_Box) (OrigOrigin_27));
      MR_hl_field(MR_mktag(2), Origin_37, 2) = ((MR_Box) (OrigPredId_8));
    }
    hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_14, PredName_30, Arity_33, PredOrFunc_16, Context_17, Origin_37, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), (MR_Word) ((MR_Unsigned) 0U), GoalType_19, Markers_36, ArgTypes_32, TypeVarSet_22, ExistQVars_23, ClassContext_24, ClassProofMap_25, ClassConstraintMap_26, ClausesInfo_28, VarNameRemap_29, &PredInfo_39);
    ModuleInfo0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_44, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo0_40, &PredTable0_41);
    hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_39, GeneratorPredId_12, PredTable0_41, &PredTable_42);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_42, ModuleInfo0_40, &ModuleInfo_43);
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_44, (MR_Integer) 1))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_44, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TableInfo_45 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_56));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__keep_only_output_arg_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        MR_Word Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
        MR_Word Out_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Outs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word OutVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Out_10, (MR_Integer) 0))));

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), ((MR_Box) (Var_7)), ((MR_Box) (OutVar_13)));
        if (succeeded)
        {
          MR_Word OutTypesTail_17;

          transform_hlds__table_gen__keep_only_output_arg_types_3_p_0(Var_20, Outs_11, &OutTypesTail_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OutTypesTail_17));
          }
        }
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = Var_20;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = transform_hlds__table_gen__project_out_pos_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = transform_hlds__table_gen__project_out_pos_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__3_175;

    conv2_HeadVar__3_175 = transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1865__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_175));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_171;

    conv1_HeadVar__2_171 = transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1863__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_171));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_167;

    conv0_HeadVar__2_167 = transform_hlds__table_gen__IntroducedFrom__func__do_own_stack_create_generator__1861__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_167));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__do_own_stack_create_generator_20_p_0(
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word STATE_VARIABLE_PredInfo_0_75,
  MR_Word STATE_VARIABLE_ProcInfo_0_76,
  MR_Word Statistics_25,
  MR_Word Context_26,
  MR_Word GeneratorVar_27,
  MR_String DebugArgStr_28,
  MR_String PickupVarCode_29,
  MR_Word PickupForeignArgs_30,
  MR_Word NumberedInputVars_31,
  MR_Word NumberedOutputVars_32,
  MR_Word OrigNonLocals_33,
  MR_Word OrigInstMapDelta_34,
  MR_Word STATE_VARIABLE_VarTypes_0_77,
  MR_Word STATE_VARIABLE_VarSet_0_78,
  MR_Word STATE_VARIABLE_TableInfo_0_79,
  MR_Word * STATE_VARIABLE_TableInfo_80,
  MR_Word InputSteps_38,
  MR_Word * OutputSteps_39)
{
  {
    MR_Word ModuleInfo0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_79, (MR_Integer) 0))));
    MR_Word PickupInstMapDeltaSrc0_41;
    MR_Word PickupInstMapDeltaSrc_42;
    MR_String PickupGeneratorCode_43;
    MR_Word PickupGeneratorArg_44;
    MR_Word PickupGoal_45;
    MR_Integer BlockSize_46;
    MR_Word SaveReturnAnswerGoals_47;
    MR_Word OrigGoal_48;
    MR_Word OrigGoalInfo_50;
    MR_Word MainGoalExpr_51;
    MR_Word Detism_52;
    MR_Word NonLocals_53;
    MR_Word MainGoalInfo0_54;
    MR_Word MainGoalInfo_55;
    MR_Word MainGoal_56;
    MR_String CompletionCode_57;
    MR_Word CompletionArg_58;
    MR_Word CompletionGoal_59;
    MR_Word DisjGoalExpr_60;
    MR_Word DisjGoal_61;
    MR_Word GoalExpr_62;
    MR_Word Goal_63;
    MR_Word InputVarModeMethods_64;
    MR_Word OutputVarModeMethods_65;
    MR_Word ProcTableStructInfo_66;
    MR_Word PredProcId_67;
    MR_Word ModuleInfo1_68;
    MR_Word SpecialReturn_69;
    MR_Word ProcTable0_70;
    MR_Word ProcTable_71;
    MR_Word PredTable0_72;
    MR_Word PredTable_73;
    MR_Word ModuleInfo_74;
    MR_Word Var_81;
    MR_Word STATE_VARIABLE_ProcInfo_82_82;
    MR_Word Var_84;
    MR_Word STATE_VARIABLE_ProcInfo_85_85;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_String Var_91;
    MR_String Var_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_String Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_String Var_104;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_VarSet_108_108;
    MR_Word STATE_VARIABLE_VarTypes_109_109;
    MR_Word STATE_VARIABLE_TableInfo_110_110;
    MR_Word Var_112;
    MR_String Var_116;
    MR_String Var_118;
    MR_String Var_119;
    MR_String Var_121;
    MR_String Var_122;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_String Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_136;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word STATE_VARIABLE_ProcInfo_145_145;
    MR_Word STATE_VARIABLE_ProcInfo_146_146;
    MR_Word STATE_VARIABLE_ProcInfo_147_147;
    MR_Word Var_150;
    MR_String Var_151;
    MR_Word Var_152;
    MR_Word STATE_VARIABLE_ProcInfo_153_153;
    MR_Word STATE_VARIABLE_ProcInfo_155_155;
    MR_Word STATE_VARIABLE_PredInfo_157_157;
    MR_Word Var_162;
    MR_Word Var_163;

    Var_81 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[15]), NumberedOutputVars_32);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(Var_81, STATE_VARIABLE_ProcInfo_0_76, &STATE_VARIABLE_ProcInfo_82_82);
    Var_84 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[16]), NumberedOutputVars_32);
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(Var_84, STATE_VARIABLE_ProcInfo_82_82, &STATE_VARIABLE_ProcInfo_85_85);
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (transform_hlds__table_gen__do_own_stack_create_generator_20_p_0_3));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (ModuleInfo0_40));
    }
    PickupInstMapDeltaSrc0_41 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[2]), Var_87, NumberedInputVars_31);
    Var_89 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (GeneratorVar_27));
      MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (Var_89));
    }
    {
      PickupInstMapDeltaSrc_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PickupInstMapDeltaSrc_42, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), PickupInstMapDeltaSrc_42, 1) = ((MR_Box) (PickupInstMapDeltaSrc0_41));
    }
    Var_92 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_91 = mercury__string__f_43_43_2_f_0(Var_92, (MR_String) " = MR_mmos_new_generator;\n");
    PickupGeneratorCode_43 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_91);
    Var_96 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_97 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
    }
    Var_98 = transform_hlds__table_gen__generator_type_0_f_0();
    {
      PickupGeneratorArg_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PickupGeneratorArg_44, 0) = ((MR_Box) (GeneratorVar_27));
      MR_hl_field(MR_mktag(0), PickupGeneratorArg_44, 1) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), PickupGeneratorArg_44, 2) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), PickupGeneratorArg_44, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_102 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (PickupGeneratorArg_44));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_104 = mercury__string__f_43_43_2_f_0(PickupGeneratorCode_43, PickupVarCode_29);
    Var_106 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(PickupInstMapDeltaSrc_42);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_mmos_pickup_inputs", (MR_Integer) 0, Var_102, Var_103, PickupForeignArgs_30, Var_104, (MR_Integer) 2, Var_106, ModuleInfo0_40, Context_26, &PickupGoal_45);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedOutputVars_32, &BlockSize_46);
    transform_hlds__table_gen__generate_own_stack_save_return_goal_15_p_0(NumberedOutputVars_32, GeneratorVar_27, PredId_21, ProcId_22, BlockSize_46, Statistics_25, Context_26, STATE_VARIABLE_VarSet_0_78, &STATE_VARIABLE_VarSet_108_108, STATE_VARIABLE_VarTypes_0_77, &STATE_VARIABLE_VarTypes_109_109, STATE_VARIABLE_TableInfo_0_79, &STATE_VARIABLE_TableInfo_110_110, OutputSteps_39, &SaveReturnAnswerGoals_47);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_85_85, &OrigGoal_48);
    OrigGoalInfo_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_48, (MR_Integer) 1))));
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (OrigGoal_48));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (SaveReturnAnswerGoals_47));
    }
    {
      MainGoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MainGoalExpr_51, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), MainGoalExpr_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MainGoalExpr_51, 2) = ((MR_Box) (Var_112));
    }
    Detism_52 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(OrigGoalInfo_50);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GeneratorVar_27, OrigNonLocals_33, &NonLocals_53);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_53, OrigInstMapDelta_34, Detism_52, (MR_Integer) 2, Context_26, &MainGoalInfo0_54);
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, MainGoalInfo0_54, &MainGoalInfo_55);
    {
      MainGoal_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainGoal_56, 0) = ((MR_Box) (MainGoalExpr_51));
      MR_hl_field(MR_mktag(0), MainGoal_56, 1) = ((MR_Box) (MainGoalInfo_55));
    }
    Var_122 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_121 = mercury__string__f_43_43_2_f_0(Var_122, (MR_String) ");\n");
    Var_119 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_121);
    Var_118 = mercury__string__f_43_43_2_f_0(DebugArgStr_28, Var_119);
    Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_completion(", Var_118);
    CompletionCode_57 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_116);
    Var_126 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_127 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (Var_127));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
    }
    Var_128 = transform_hlds__table_gen__generator_type_0_f_0();
    {
      CompletionArg_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CompletionArg_58, 0) = ((MR_Box) (GeneratorVar_27));
      MR_hl_field(MR_mktag(0), CompletionArg_58, 1) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(0), CompletionArg_58, 2) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(0), CompletionArg_58, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_132 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (CompletionArg_58));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_136 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_mmos_completion", (MR_Integer) 7, Var_132, Var_133, (MR_Word) ((MR_Unsigned) 0U), CompletionCode_57, (MR_Integer) 2, Var_136, ModuleInfo0_40, Context_26, &CompletionGoal_59);
    {
      Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (CompletionGoal_59));
      MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (MainGoal_56));
      MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_139));
    }
    {
      DisjGoalExpr_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), DisjGoalExpr_60, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), DisjGoalExpr_60, 1) = ((MR_Box) (Var_138));
    }
    {
      DisjGoal_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DisjGoal_61, 0) = ((MR_Box) (DisjGoalExpr_60));
      MR_hl_field(MR_mktag(0), DisjGoal_61, 1) = ((MR_Box) (MainGoalInfo_55));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (DisjGoal_61));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (PickupGoal_45));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_143));
    }
    {
      GoalExpr_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_62, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_62, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_62, 2) = ((MR_Box) (Var_142));
    }
    {
      Goal_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_63, 0) = ((MR_Box) (GoalExpr_62));
      MR_hl_field(MR_mktag(0), Goal_63, 1) = ((MR_Box) (OrigGoalInfo_50));
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_63, STATE_VARIABLE_ProcInfo_85_85, &STATE_VARIABLE_ProcInfo_145_145);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_109_109, STATE_VARIABLE_ProcInfo_145_145, &STATE_VARIABLE_ProcInfo_146_146);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_108_108, STATE_VARIABLE_ProcInfo_146_146, &STATE_VARIABLE_ProcInfo_147_147);
    InputVarModeMethods_64 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[17]), NumberedInputVars_31);
    OutputVarModeMethods_65 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[18]), NumberedOutputVars_32);
    {
      Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (*OutputSteps_39));
    }
    transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(STATE_VARIABLE_TableInfo_110_110, PredId_21, ProcId_22, InputSteps_38, Var_150, InputVarModeMethods_64, OutputVarModeMethods_65, &ProcTableStructInfo_66);
    {
      PredProcId_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_67, 0) = ((MR_Box) (PredId_21));
      MR_hl_field(MR_mktag(0), PredProcId_67, 1) = ((MR_Box) (ProcId_22));
    }
    transform_hlds__table_gen__add_proc_table_struct_5_p_0(PredProcId_67, ProcTableStructInfo_66, STATE_VARIABLE_ProcInfo_147_147, ModuleInfo0_40, &ModuleInfo1_68);
    Var_151 = transform_hlds__table_gen__returning_generator_locn_0_f_0();
    {
      SpecialReturn_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SpecialReturn_69, 0) = ((MR_Box) (Var_151));
      MR_hl_field(MR_mktag(0), SpecialReturn_69, 1) = ((MR_Box) (DebugArgStr_28));
    }
    {
      Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (SpecialReturn_69));
    }
    hlds__hlds_pred__proc_info_set_maybe_special_return_3_p_0(Var_152, STATE_VARIABLE_ProcInfo_147_147, &STATE_VARIABLE_ProcInfo_153_153);
    hlds__hlds_pred__proc_info_set_eval_method_3_p_0((MR_Word) (MR_mkword(MR_mktag(2), &transform_hlds__table_gen_scalar_common_4[7])), STATE_VARIABLE_ProcInfo_153_153, &STATE_VARIABLE_ProcInfo_155_155);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_75, &ProcTable0_70);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_22)), ((MR_Box) (STATE_VARIABLE_ProcInfo_155_155)), ProcTable0_70, &ProcTable_71);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_71, STATE_VARIABLE_PredInfo_0_75, &STATE_VARIABLE_PredInfo_157_157);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo1_68, &PredTable0_72);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_21)), ((MR_Box) (STATE_VARIABLE_PredInfo_157_157)), PredTable0_72, &PredTable_73);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_73, ModuleInfo1_68, &ModuleInfo_74);
    Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_110_110, (MR_Integer) 1))));
    Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_110_110, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TableInfo_80 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_74));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_162));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_163));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__add_proc_table_struct_5_p_0(
  MR_Word PredProcId_6,
  MR_Word ProcTableStructInfo_7,
  MR_Word ProcInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_Word TableStructMap0_10;
    MR_Word MaybeTableAttributes_11;
    MR_Word TableAttributes_12;
    MR_Word TableStructInfo_13;
    MR_Word TableStructMap_14;

    hlds__hlds_module__module_info_get_table_struct_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_15, &TableStructMap0_10);
    hlds__hlds_pred__proc_info_get_table_attributes_2_p_0(ProcInfo_8, &MaybeTableAttributes_11);
    if ((MaybeTableAttributes_11 == (MR_Word) ((MR_Unsigned) 0U)))
      TableAttributes_12 = parse_tree__prog_data_pragma__default_memo_table_attributes_0_f_0();
    else
      TableAttributes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTableAttributes_11, (MR_Integer) 0))));
    {
      TableStructInfo_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TableStructInfo_13, 0) = ((MR_Box) (ProcTableStructInfo_7));
      MR_hl_field(MR_mktag(0), TableStructInfo_13, 1) = ((MR_Box) (TableAttributes_12));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), ((MR_Box) (PredProcId_6)), ((MR_Box) (TableStructInfo_13)), TableStructMap0_10, &TableStructMap_14);
    hlds__hlds_module__module_info_set_table_struct_map_3_p_0(TableStructMap_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_own_stack_save_return_goal_15_p_0(
  MR_Word NumberedOutputVars_16,
  MR_Word GeneratorVar_17,
  MR_Word PredId_18,
  MR_Integer ProcId_19,
  MR_Integer BlockSize_20,
  MR_Word Statistics_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_VarSet_0_54,
  MR_Word * STATE_VARIABLE_VarSet_55,
  MR_Word STATE_VARIABLE_VarTypes_0_56,
  MR_Word * STATE_VARIABLE_VarTypes_57,
  MR_Word STATE_VARIABLE_TableInfo_0_58,
  MR_Word * STATE_VARIABLE_TableInfo_59,
  MR_Word * OutputSteps_26,
  MR_Word * Goals_27)
{
  {
    MR_String GeneratorName_28;
    MR_Word GeneratorArg_29;
    MR_String DebugArgStr_30;
    MR_Word LookupForeignArgs_31;
    MR_Word LookupPrefixGoals_32;
    MR_String LookupCodeStr_33;
    MR_Word SavePrefixGoals_35;
    MR_String SaveCodeStr_36;
    MR_Word Args_41;
    MR_String LookupSaveDeclCodeStr_43;
    MR_String GetCodeStr_44;
    MR_String DuplCheckCodeStr_45;
    MR_String AssignSuccessCodeStr_46;
    MR_String CreateCodeStr_47;
    MR_String SetupReturnCodeStr_48;
    MR_String CreateSaveSetupReturnCodeStr_49;
    MR_String CondSaveCodeStr_50;
    MR_String CodeStr_51;
    MR_Word ModuleInfo_52;
    MR_Word DuplicateCheckSaveGoal_53;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word STATE_VARIABLE_VarSet_65_65;
    MR_Word STATE_VARIABLE_VarTypes_66_66;
    MR_Word STATE_VARIABLE_TableInfo_67_67;
    MR_String Var_73;
    MR_String Var_74;
    MR_String Var_75;
    MR_String Var_77;
    MR_String Var_79;
    MR_String Var_80;
    MR_String Var_81;
    MR_String Var_83;
    MR_String Var_85;
    MR_String Var_86;
    MR_String Var_94;
    MR_String Var_95;
    MR_String Var_96;
    MR_String Var_98;
    MR_String Var_99;
    MR_String Var_101;
    MR_String Var_104;
    MR_String Var_105;
    MR_String Var_107;
    MR_String Var_108;
    MR_String Var_110;
    MR_String Var_111;
    MR_String Var_117;
    MR_String Var_118;
    MR_String Var_124;
    MR_String Var_125;
    MR_String Var_127;
    MR_String Var_128;
    MR_String Var_130;
    MR_String Var_131;
    MR_String Var_133;
    MR_String Var_134;
    MR_String Var_135;
    MR_String Var_137;
    MR_String Var_138;
    MR_String Var_141;
    MR_String Var_142;
    MR_String Var_143;
    MR_String Var_145;
    MR_String Var_147;
    MR_String Var_149;
    MR_String Var_150;
    MR_String Var_152;
    MR_String Var_154;
    MR_String Var_155;
    MR_String Var_156;
    MR_String Var_157;
    MR_Word Var_159;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word _SaveArgs_34;

    GeneratorName_28 = transform_hlds__table_gen__generator_name_0_f_0();
    Var_62 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (GeneratorName_28));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
    }
    Var_63 = transform_hlds__table_gen__generator_type_0_f_0();
    {
      GeneratorArg_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GeneratorArg_29, 0) = ((MR_Box) (GeneratorVar_17));
      MR_hl_field(MR_mktag(0), GeneratorArg_29, 1) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), GeneratorArg_29, 2) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), GeneratorArg_29, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    DebugArgStr_30 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(STATE_VARIABLE_TableInfo_0_58);
    transform_hlds__table_gen__generate_answer_table_lookup_goals_15_p_0(NumberedOutputVars_16, PredId_18, ProcId_19, Statistics_21, Context_22, STATE_VARIABLE_VarSet_0_54, &STATE_VARIABLE_VarSet_65_65, STATE_VARIABLE_VarTypes_0_56, &STATE_VARIABLE_VarTypes_66_66, STATE_VARIABLE_TableInfo_0_58, &STATE_VARIABLE_TableInfo_67_67, OutputSteps_26, &LookupForeignArgs_31, &LookupPrefixGoals_32, &LookupCodeStr_33);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_12_p_0(NumberedOutputVars_16, DebugArgStr_30, Context_22, STATE_VARIABLE_VarSet_65_65, STATE_VARIABLE_VarSet_55, STATE_VARIABLE_VarTypes_66_66, STATE_VARIABLE_VarTypes_57, STATE_VARIABLE_TableInfo_67_67, STATE_VARIABLE_TableInfo_59, &_SaveArgs_34, &SavePrefixGoals_35, &SaveCodeStr_36);
    {
      Args_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_41, 0) = ((MR_Box) (GeneratorArg_29));
      MR_hl_field(MR_mktag(1), Args_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_74 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_80 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_86 = transform_hlds__table_gen__answer_block_name_0_f_0();
    Var_85 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) ";\n\tMR_bool succeeded;\n\n");
    Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_AnswerBlock ", Var_85);
    Var_81 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_83);
    Var_79 = mercury__string__f_43_43_2_f_0(Var_80, Var_81);
    Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_79);
    Var_75 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_77);
    Var_73 = mercury__string__f_43_43_2_f_0(Var_74, Var_75);
    LookupSaveDeclCodeStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_73);
    Var_95 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_101 = mercury__string__f_43_43_2_f_0(GeneratorName_28, (MR_String) ");\n");
    Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_101);
    Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "MR_table_mmos_get_answer_table", Var_99);
    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_98);
    Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Var_96);
    GetCodeStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_94);
    Var_111 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_110 = mercury__string__f_43_43_2_f_0(Var_111, (MR_String) ", succeeded);\n");
    Var_108 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_110);
    Var_107 = mercury__string__f_43_43_2_f_0(DebugArgStr_30, Var_108);
    Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_107);
    Var_104 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_answer_is_not_duplicate", Var_105);
    DuplCheckCodeStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_104);
    Var_118 = transform_hlds__table_gen__success_indicator_name_0_f_0();
    Var_117 = mercury__string__f_43_43_2_f_0(Var_118, (MR_String) " = succeeded;\n");
    AssignSuccessCodeStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_117);
    Var_134 = mercury__string__int_to_string_1_f_0(BlockSize_20);
    Var_138 = transform_hlds__table_gen__answer_block_name_0_f_0();
    Var_137 = mercury__string__f_43_43_2_f_0(Var_138, (MR_String) ");\n");
    Var_135 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_137);
    Var_133 = mercury__string__f_43_43_2_f_0(Var_134, Var_135);
    Var_131 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_133);
    Var_130 = mercury__string__f_43_43_2_f_0(GeneratorName_28, Var_131);
    Var_128 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_130);
    Var_127 = mercury__string__f_43_43_2_f_0(DebugArgStr_30, Var_128);
    Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_127);
    Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mmos_create_answer_block", Var_125);
    CreateCodeStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_124);
    Var_142 = transform_hlds__table_gen__returning_generator_locn_0_f_0();
    Var_145 = mercury__string__f_43_43_2_f_0(GeneratorName_28, (MR_String) ";\n");
    Var_143 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_145);
    Var_141 = mercury__string__f_43_43_2_f_0(Var_142, Var_143);
    SetupReturnCodeStr_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_141);
    Var_147 = mercury__string__f_43_43_2_f_0(SaveCodeStr_36, SetupReturnCodeStr_48);
    CreateSaveSetupReturnCodeStr_49 = mercury__string__f_43_43_2_f_0(CreateCodeStr_47, Var_147);
    Var_152 = mercury__string__f_43_43_2_f_0(CreateSaveSetupReturnCodeStr_49, (MR_String) "\t}\n");
    Var_150 = mercury__string__f_43_43_2_f_0((MR_String) ") {\n", Var_152);
    Var_149 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", Var_150);
    CondSaveCodeStr_50 = mercury__string__f_43_43_2_f_0((MR_String) "\tif (", Var_149);
    Var_157 = mercury__string__f_43_43_2_f_0(CondSaveCodeStr_50, AssignSuccessCodeStr_46);
    Var_156 = mercury__string__f_43_43_2_f_0(DuplCheckCodeStr_45, Var_157);
    Var_155 = mercury__string__f_43_43_2_f_0(LookupCodeStr_33, Var_156);
    Var_154 = mercury__string__f_43_43_2_f_0(GetCodeStr_44, Var_155);
    CodeStr_51 = mercury__string__f_43_43_2_f_0(LookupSaveDeclCodeStr_43, Var_154);
    ModuleInfo_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_TableInfo_59, (MR_Integer) 0))));
    Var_159 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_161 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_mmos_answer_is_not_duplicate_shortcut", (MR_Integer) 1, Var_159, Args_41, LookupForeignArgs_31, CodeStr_51, (MR_Integer) 2, Var_161, ModuleInfo_52, Context_22, &DuplicateCheckSaveGoal_53);
    {
      Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (DuplicateCheckSaveGoal_53));
      MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SavePrefixGoals_35, Var_163);
    *Goals_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_32, Var_162);
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__returning_generator_locn_0_f_0(void)
{
  {
    return (MR_String) "MR_mmos_returning_generator";
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__generator_name_0_f_0(void)
{
  {
    return (MR_String) "generator";
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__generator_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "ml_generator"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_42;

    conv0_HeadVar__2_42 = transform_hlds__table_gen__IntroducedFrom__func__generate_gen_proc_table_info__2113__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_42));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_gen_proc_table_info_8_p_0(
  MR_Word TableInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word InputSteps_12,
  MR_Word MaybeOutputSteps_13,
  MR_Word InputVars_14,
  MR_Word OutputVars_15,
  MR_Word * ProcTableStructInfo_16)
{
  {
    MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_9, (MR_Integer) 0))));
    MR_Word RTTIProcLabel_18;
    MR_Word PredInfo_19;
    MR_Word TVarSet_20;
    MR_Word ProcInfo_21;
    MR_Word EvalMethod_22;
    MR_Word Context_23;
    MR_Word InOutHeadVars_24;
    MR_Word NumberedInOutHeadVars_25;
    MR_Word ArgInfos_26;
    MR_Word TableArgTypeInfo_27;
    MR_Integer NumInputs_28;
    MR_Integer NumOutputs_29;

    RTTIProcLabel_18 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_17, PredId_10, ProcId_11);
    PredInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_9, (MR_Integer) 1))));
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_19, &TVarSet_20);
    ProcInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_9, (MR_Integer) 2))));
    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_21, &EvalMethod_22);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_21, &Context_23);
    InOutHeadVars_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), InputVars_14, OutputVars_15);
    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(InOutHeadVars_24, (MR_Integer) 1, &NumberedInOutHeadVars_25);
    ArgInfos_26 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[1]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[14]), NumberedInOutHeadVars_25);
    ll_backend__continuation_info__generate_table_arg_type_info_3_p_0(ProcInfo_21, ArgInfos_26, &TableArgTypeInfo_27);
    NumInputs_28 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), InputVars_14);
    NumOutputs_29 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0), OutputVars_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ProcTableStructInfo_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RTTIProcLabel_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarSet_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NumInputs_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NumOutputs_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InputSteps_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MaybeOutputSteps_13));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TableArgTypeInfo_27));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (EvalMethod_22));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__allocate_slot_numbers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset0_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_5;
    MR_Word Mode_6;
    MR_Word ArgMethod_7;
    MR_Word VarModes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarModePos_10;
    MR_Word VarModePoss_11;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Var_13;

    Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
    Mode_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1))));
    ArgMethod_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2))) & (MR_Integer) 3);
    {
      VarModePos_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarModePos_10, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), VarModePos_10, 1) = ((MR_Box) (Mode_6));
      MR_hl_field(MR_mktag(0), VarModePos_10, 2) = ((MR_Box) (Offset0_2));
      MR_hl_field(MR_mktag(0), VarModePos_10, 3) = ((MR_Box) (ArgMethod_7));
    }
    Var_13 = (MR_Integer) ((MR_Unsigned) Offset0_2 + (MR_Unsigned) 1);
    transform_hlds__table_gen__allocate_slot_numbers_3_p_0(VarModes_8, Var_13, &VarModePoss_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarModePos_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarModePoss_11));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_save_input_vars_code_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Integer Pos_3,
  MR_Word * HeadVar__4_4,
  MR_String * HeadVar__5_5,
  MR_String * HeadVar__6_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_String) "";
    *HeadVar__6_6 = (MR_String) "";
  }
  else
  {
    MR_Word InputArg_9;
    MR_Word Mode_10;
    MR_Word InputArgModes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word PickupArg_14;
    MR_Word PickupArgs_15;
    MR_String SaveVarCode_16;
    MR_String SaveVarCodes_17;
    MR_String PickupVarCode_18;
    MR_String PickupVarCodes_19;
    MR_Word InputVar_20;
    MR_Word MaybeArgNameMode_21;
    MR_Word Type_22;
    MR_String InputVarName_24;
    MR_Word InitInst_26;
    MR_Word PickupMode_28;
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_34;
    MR_Word Var_35;
    MR_String Var_38;
    MR_String Var_39;
    MR_String Var_40;
    MR_String Var_42;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_47;
    MR_String Var_49;
    MR_Integer Var_51;
    MR_Word _FinalInst_27;

    InputArg_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
    Mode_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1))));
    InputVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputArg_9, (MR_Integer) 0))));
    MaybeArgNameMode_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputArg_9, (MR_Integer) 1))));
    Type_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputArg_9, (MR_Integer) 2))));
    if ((MaybeArgNameMode_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.generate_save_input_vars_code\'/6", (MR_String) "no InputVarName");
        return;
      }
    }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgNameMode_21, (MR_Integer) 0))));

      InputVarName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
    }
    check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_2, Mode_10, &InitInst_26, &_FinalInst_27);
    {
      PickupMode_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PickupMode_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PickupMode_28, 1) = ((MR_Box) (InitInst_26));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (InputVarName_24));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (PickupMode_28));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
    }
    {
      PickupArg_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PickupArg_14, 0) = ((MR_Box) (InputVar_20));
      MR_hl_field(MR_mktag(0), PickupArg_14, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), PickupArg_14, 2) = ((MR_Box) (Type_22));
      MR_hl_field(MR_mktag(0), PickupArg_14, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_39 = mercury__string__int_to_string_1_f_0(Pos_3);
    Var_42 = mercury__string__f_43_43_2_f_0(InputVarName_24, (MR_String) ");\n");
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_42);
    Var_38 = mercury__string__f_43_43_2_f_0(Var_39, Var_40);
    SaveVarCode_16 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_table_mmos_save_input_arg(", Var_38);
    Var_46 = mercury__string__int_to_string_1_f_0(Pos_3);
    Var_49 = mercury__string__f_43_43_2_f_0(InputVarName_24, (MR_String) ");\n");
    Var_47 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_49);
    Var_45 = mercury__string__f_43_43_2_f_0(Var_46, Var_47);
    PickupVarCode_18 = mercury__string__f_43_43_2_f_0((MR_String) "\t\tMR_table_mmos_pickup_input_arg(", Var_45);
    Var_51 = (MR_Integer) ((MR_Unsigned) Pos_3 + (MR_Unsigned) 1);
    transform_hlds__table_gen__generate_save_input_vars_code_6_p_0(InputArgModes_11, ModuleInfo_2, Var_51, &PickupArgs_15, &SaveVarCodes_17, &PickupVarCodes_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PickupArg_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PickupArgs_15));
    }
    *HeadVar__5_5 = mercury__string__f_43_43_2_f_0(SaveVarCode_16, SaveVarCodes_17);
    *HeadVar__6_6 = mercury__string__f_43_43_2_f_0(PickupVarCode_18, PickupVarCodes_19);
  }
}

static void MR_CALL 
transform_hlds__table_gen__create_new_mm_goal_18_p_0(
  MR_Word Detism_19,
  MR_Word OrigGoal_20,
  MR_Word Statistics_21,
  MR_Word PredId_22,
  MR_Integer ProcId_23,
  MR_Word HeadVars_24,
  MR_Word NumberedInputVars_25,
  MR_Word NumberedOutputVars_26,
  MR_Word STATE_VARIABLE_VarSet_0_62,
  MR_Word * STATE_VARIABLE_VarSet_63,
  MR_Word STATE_VARIABLE_VarTypes_0_64,
  MR_Word * STATE_VARIABLE_VarTypes_65,
  MR_Word STATE_VARIABLE_TableInfo_0_66,
  MR_Word * STATE_VARIABLE_TableInfo_67,
  MR_Word * SubgoalVar_30,
  MR_Word * Goal_31,
  MR_Word * InputSteps_32,
  MR_Word * OutputSteps_33)
{
  {
    MR_Word OrigNonLocals_34;
    MR_Word OrigGoalInfo_36;
    MR_Word OrigInstMapDelta_37;
    MR_Word Context_38;
    MR_Word ModuleInfo_39;
    MR_Integer BlockSize_40;
    MR_Word StatusVar_41;
    MR_Word LookUpGoal_42;
    MR_Word SaveAnswerGoals_43;
    MR_Word RestoreAllAnswerGoal_44;
    MR_Word SuspendGoal_45;
    MR_Word MainExpr_46;
    MR_Word MainNonLocals_47;
    MR_Word MainIMD0_48;
    MR_Word MainIMD_49;
    MR_Word MainGoalInfo_50;
    MR_Word MainGoal_51;
    MR_Word ResumeGoal0_52;
    MR_Word ResumeGoal_53;
    MR_Word InactiveExpr_54;
    MR_Word InactiveGoal_55;
    MR_Word SwitchArms_56;
    MR_Word SwitchExpr_57;
    MR_Word SwitchGoalInfo_58;
    MR_Word SwitchGoal_59;
    MR_Word GoalExpr_60;
    MR_Word GoalInfo_61;
    MR_Word STATE_VARIABLE_VarSet_68_68;
    MR_Word STATE_VARIABLE_VarTypes_69_69;
    MR_Word STATE_VARIABLE_TableInfo_70_70;
    MR_Word STATE_VARIABLE_VarSet_71_71;
    MR_Word STATE_VARIABLE_VarTypes_72_72;
    MR_Word STATE_VARIABLE_VarSet_74_74;
    MR_Word STATE_VARIABLE_VarTypes_75_75;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_88;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Goal_120;
    MR_Word Rest_121;
    MR_Word GoalInfo_124;
    MR_Word IMD0_125;
    MR_Word IMD1_126;

    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_24, &OrigNonLocals_34);
    OrigGoalInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_20, (MR_Integer) 1))));
    OrigInstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_36);
    Context_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_36);
    ModuleInfo_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_66, (MR_Integer) 0))));
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), NumberedOutputVars_26, &BlockSize_40);
    transform_hlds__table_gen__generate_mm_call_table_lookup_goal_15_p_0(NumberedInputVars_25, PredId_22, ProcId_23, Statistics_21, Context_38, STATE_VARIABLE_VarSet_0_62, &STATE_VARIABLE_VarSet_68_68, STATE_VARIABLE_VarTypes_0_64, &STATE_VARIABLE_VarTypes_69_69, STATE_VARIABLE_TableInfo_0_66, &STATE_VARIABLE_TableInfo_70_70, SubgoalVar_30, &StatusVar_41, &LookUpGoal_42, InputSteps_32);
    transform_hlds__table_gen__generate_mm_save_goals_15_p_0(NumberedOutputVars_26, *SubgoalVar_30, PredId_22, ProcId_23, BlockSize_40, Statistics_21, Context_38, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_71_71, STATE_VARIABLE_VarTypes_69_69, &STATE_VARIABLE_VarTypes_72_72, STATE_VARIABLE_TableInfo_70_70, STATE_VARIABLE_TableInfo_67, OutputSteps_33, &SaveAnswerGoals_43);
    transform_hlds__table_gen__generate_mm_restore_goal_11_p_0(Detism_19, NumberedOutputVars_26, OrigInstMapDelta_37, *SubgoalVar_30, Context_38, STATE_VARIABLE_VarSet_71_71, &STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_VarTypes_72_72, &STATE_VARIABLE_VarTypes_75_75, *STATE_VARIABLE_TableInfo_67, &RestoreAllAnswerGoal_44);
    transform_hlds__table_gen__generate_mm_suspend_goal_10_p_0(NumberedOutputVars_26, OrigInstMapDelta_37, *SubgoalVar_30, Context_38, STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_VarSet_63, STATE_VARIABLE_VarTypes_75_75, STATE_VARIABLE_VarTypes_65, *STATE_VARIABLE_TableInfo_67, &SuspendGoal_45);
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (OrigGoal_20));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (SaveAnswerGoals_43));
    }
    {
      MainExpr_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MainExpr_46, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), MainExpr_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MainExpr_46, 2) = ((MR_Box) (Var_79));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (StatusVar_41));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (*SubgoalVar_30));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
    }
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_80, OrigNonLocals_34, &MainNonLocals_47);
    Goal_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 0))));
    Rest_121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 1))));
    GoalInfo_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_120, (MR_Integer) 1))));
    IMD0_125 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_124);
    transform_hlds__table_gen__create_instmap_delta_2_p_0(Rest_121, &IMD1_126);
    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(IMD0_125, IMD1_126, (MR_Integer) 2, &MainIMD0_48);
    hlds__instmap__instmap_delta_restrict_3_p_0(MainNonLocals_47, MainIMD0_48, &MainIMD_49);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(MainNonLocals_47, MainIMD_49, (MR_Integer) 3, (MR_Integer) 2, Context_38, &MainGoalInfo_50);
    {
      MainGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainGoal_51, 0) = ((MR_Box) (MainExpr_46));
      MR_hl_field(MR_mktag(0), MainGoal_51, 1) = ((MR_Box) (MainGoalInfo_50));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (*SubgoalVar_30));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_90 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_call_8_p_0((MR_String) "table_mm_completion", (MR_Integer) 0, Var_88, (MR_Integer) 2, Var_90, ModuleInfo_39, Context_38, &ResumeGoal0_52);
    transform_hlds__table_gen__append_fail_2_p_0(ResumeGoal0_52, &ResumeGoal_53);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (ResumeGoal_53));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MainGoal_51));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      InactiveExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), InactiveExpr_54, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), InactiveExpr_54, 1) = ((MR_Box) (Var_92));
    }
    {
      InactiveGoal_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InactiveGoal_55, 0) = ((MR_Box) (InactiveExpr_54));
      MR_hl_field(MR_mktag(0), InactiveGoal_55, 1) = ((MR_Box) (MainGoalInfo_50));
    }
    Var_96 = transform_hlds__table_gen__mm_inactive_cons_id_0_f_0();
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) (InactiveGoal_55));
    }
    Var_100 = transform_hlds__table_gen__mm_active_cons_id_0_f_0();
    {
      Var_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) (SuspendGoal_45));
    }
    Var_104 = transform_hlds__table_gen__mm_complete_cons_id_0_f_0();
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) (RestoreAllAnswerGoal_44));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_102));
    }
    {
      SwitchArms_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SwitchArms_56, 0) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(1), SwitchArms_56, 1) = ((MR_Box) (Var_98));
    }
    {
      SwitchExpr_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchExpr_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), SwitchExpr_57, 1) = ((MR_Box) (StatusVar_41));
      MR_hl_field(MR_mktag(3), SwitchExpr_57, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SwitchExpr_57, 3) = ((MR_Box) (SwitchArms_56));
    }
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, MainGoalInfo_50, &SwitchGoalInfo_58);
    {
      SwitchGoal_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SwitchGoal_59, 0) = ((MR_Box) (SwitchExpr_57));
      MR_hl_field(MR_mktag(0), SwitchGoal_59, 1) = ((MR_Box) (SwitchGoalInfo_58));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (SwitchGoal_59));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (LookUpGoal_42));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_111));
    }
    {
      GoalExpr_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_60, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_60, 2) = ((MR_Box) (Var_110));
    }
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_34, OrigInstMapDelta_37, (MR_Integer) 3, (MR_Integer) 2, Context_38, &GoalInfo_61);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_31 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_60));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_61));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_complete_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "mm_complete"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "mm_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_active_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "mm_active"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "mm_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_inactive_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "mm_inactive"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "mm_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static void MR_CALL 
transform_hlds__table_gen__append_fail_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalAndThenFail_4)
{
  {
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));
    MR_Word NonLocals_7;
    MR_Word Context_8;
    MR_Word UnreachInstMapDelta_9;
    MR_Word ConjGoalInfo_10;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word GoalInfo0_25;

    NonLocals_7 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_6);
    Context_8 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&UnreachInstMapDelta_9);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_7, UnreachInstMapDelta_9, (MR_Integer) 7, (MR_Integer) 2, Context_8, &GoalInfo0_25);
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_25, &ConjGoalInfo_10);
    Var_17 = hlds__make_goal__fail_goal_0_f_0();
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Goal_3));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_13, 2) = ((MR_Box) (Var_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *GoalAndThenFail_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConjGoalInfo_10));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_suspend_goal_10_p_0(
  MR_Word NumberedOutputVars_11,
  MR_Word OrigInstMapDelta_12,
  MR_Word SubgoalVar_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22,
  MR_Word TableInfo_17,
  MR_Word * Goal_18)
{
  {
    transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_13_p_0((MR_String) "table_mm_suspend_consumer", (MR_Integer) 3, (MR_Integer) 2, NumberedOutputVars_11, OrigInstMapDelta_12, SubgoalVar_13, Context_14, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20, STATE_VARIABLE_VarTypes_0_21, STATE_VARIABLE_VarTypes_22, TableInfo_17, Goal_18);
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_restore_goal_11_p_0(
  MR_Word Detism_12,
  MR_Word NumberedOutputVars_13,
  MR_Word OrigInstMapDelta_14,
  MR_Word SubgoalVar_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word TableInfo_19,
  MR_Word * Goal_20)
{
  {
    MR_bool succeeded = (Detism_12 == (MR_Integer) 2);
    MR_String ReturnAllAns_21;

    if (succeeded)
      ReturnAllAns_21 = (MR_String) "table_mm_return_all_multi";
    else
    {
      succeeded = (Detism_12 == (MR_Integer) 3);
      if (succeeded)
        ReturnAllAns_21 = (MR_String) "table_mm_return_all_nondet";
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.generate_mm_restore_goal\'/11", (MR_String) "invalid determinism");
          return;
        }
      }
    }
    transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_13_p_0(ReturnAllAns_21, Detism_12, (MR_Integer) 1, NumberedOutputVars_13, OrigInstMapDelta_14, SubgoalVar_15, Context_16, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_VarTypes_0_24, STATE_VARIABLE_VarTypes_25, TableInfo_19, Goal_20);
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_77;

    conv0_HeadVar__2_77 = transform_hlds__table_gen__IntroducedFrom__func__generate_mm_restore_or_suspend_goal__3160__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_77));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_restore_or_suspend_goal_13_p_0(
  MR_String PredName_14,
  MR_Word Detism_15,
  MR_Word Purity_16,
  MR_Word NumberedOutputVars_17,
  MR_Word OrigInstMapDelta_18,
  MR_Word SubgoalVar_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_VarTypes_0_42,
  MR_Word * STATE_VARIABLE_VarTypes_43,
  MR_Word TableInfo_23,
  MR_Word * Goal_24)
{
  {
    MR_Word AnswerBlockVar_25;
    MR_Word ModuleInfo_26;
    MR_Word ReturnAnswerBlocksGoal_27;
    MR_String DebugArgStr_28;
    MR_Word RestoreInstMapDeltaSrc_29;
    MR_Word RestoreArgs_30;
    MR_String RestoreCodeStr_31;
    MR_Word OutputVars_32;
    MR_Word Arg_33;
    MR_Word Args_34;
    MR_Word ReturnAllGoal_36;
    MR_Word GoalExpr_37;
    MR_Word NonLocals_38;
    MR_Word GoalInfo_39;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_VarSet_46_46;
    MR_Word STATE_VARIABLE_VarTypes_47_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word TB_81;
    MR_Word Var_82;
    MR_Word Var_84;
    MR_Word ModuleInfo_89;
    MR_Word Globals_90;
    MR_Word TableDebug_91;

    TB_81 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (TB_81));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_String) "ml_answer_block"));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_82, (MR_Word) ((MR_Unsigned) 0U), &Var_45);
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "AnswerBlock", Var_45, STATE_VARIABLE_VarSet_0_40, &STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_VarTypes_0_42, &STATE_VARIABLE_VarTypes_47_47, &AnswerBlockVar_25);
    ModuleInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_23, (MR_Integer) 0))));
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (AnswerBlockVar_25));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (SubgoalVar_19));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    Var_49 = hlds__instmap__instmap_delta_bind_var_1_f_0(AnswerBlockVar_25);
    transform_hlds__table_gen__table_generate_call_8_p_0(PredName_14, Detism_15, Var_48, Purity_16, Var_49, ModuleInfo_26, Context_20, &ReturnAnswerBlocksGoal_27);
    ModuleInfo_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_23, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_89, &Globals_90);
    libs__globals__lookup_bool_option_3_p_0(Globals_90, (MR_Integer) 322, &TableDebug_91);
    switch (TableDebug_91) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugArgStr_28 = (MR_String) "MR_FALSE";
        break;
      case (MR_Integer) 1:
        DebugArgStr_28 = (MR_String) "MR_TRUE";
        break;
    }
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_11_p_0(NumberedOutputVars_17, OrigInstMapDelta_18, DebugArgStr_28, ModuleInfo_26, STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_VarTypes_47_47, STATE_VARIABLE_VarTypes_43, &RestoreInstMapDeltaSrc_29, &RestoreArgs_30, &RestoreCodeStr_31);
    OutputVars_32 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[13]), NumberedOutputVars_17);
    Var_58 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) ((MR_String) "answerblock"));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
    }
    Var_59 = transform_hlds__table_gen__answer_block_type_0_f_0();
    {
      Arg_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_33, 0) = ((MR_Box) (AnswerBlockVar_25));
      MR_hl_field(MR_mktag(0), Arg_33, 1) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Arg_33, 2) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Arg_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Args_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_34, 0) = ((MR_Box) (Arg_33));
      MR_hl_field(MR_mktag(1), Args_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_63 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
    Var_65 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(RestoreInstMapDeltaSrc_29);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_mm_return_all_shortcut", (MR_Integer) 0, Var_63, Args_34, RestoreArgs_30, RestoreCodeStr_31, (MR_Integer) 1, Var_65, ModuleInfo_26, Context_20, &ReturnAllGoal_36);
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ReturnAllGoal_36));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (ReturnAnswerBlocksGoal_27));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
    }
    {
      GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_37, 2) = ((MR_Box) (Var_67));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (SubgoalVar_19));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (OutputVars_32));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_70, &NonLocals_38);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(NonLocals_38, OrigInstMapDelta_18, Detism_15, Purity_16, Context_20, &GoalInfo_39);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_39));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__answer_block_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "ml_answer_block"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_save_goals_15_p_0(
  MR_Word NumberedSaveVars_16,
  MR_Word SubgoalVar_17,
  MR_Word PredId_18,
  MR_Integer ProcId_19,
  MR_Integer BlockSize_20,
  MR_Word Statistics_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_VarSet_0_51,
  MR_Word * STATE_VARIABLE_VarSet_52,
  MR_Word STATE_VARIABLE_VarTypes_0_53,
  MR_Word * STATE_VARIABLE_VarTypes_54,
  MR_Word STATE_VARIABLE_TableInfo_0_55,
  MR_Word * STATE_VARIABLE_TableInfo_56,
  MR_Word * OutputSteps_26,
  MR_Word * Goals_27)
{
  {
    MR_Word ModuleInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_55, (MR_Integer) 0))));
    MR_String DebugArgStr_29;
    MR_Word LookupForeignArgs_30;
    MR_Word LookupPrefixGoals_31;
    MR_String LookupCodeStr_32;
    MR_String SaveDeclCode_39;
    MR_String CreateSaveCode_40;
    MR_String SubgoalName_41;
    MR_Word Args_42;
    MR_String LookupDeclCodeStr_44;
    MR_String GetCodeStr_45;
    MR_String DuplCheckCodeStr_46;
    MR_String CondSaveStr_47;
    MR_String AssignSuccessCodeStr_48;
    MR_String CodeStr_49;
    MR_Word DuplicateCheckSaveGoal_50;
    MR_Word STATE_VARIABLE_VarSet_57_57;
    MR_Word STATE_VARIABLE_VarTypes_58_58;
    MR_Word STATE_VARIABLE_TableInfo_59_59;
    MR_String Var_60;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_String Var_72;
    MR_String Var_73;
    MR_String Var_74;
    MR_String Var_76;
    MR_String Var_78;
    MR_String Var_79;
    MR_String Var_87;
    MR_String Var_88;
    MR_String Var_90;
    MR_String Var_91;
    MR_String Var_93;
    MR_String Var_94;
    MR_String Var_96;
    MR_String Var_97;
    MR_String Var_100;
    MR_String Var_101;
    MR_String Var_103;
    MR_String Var_104;
    MR_String Var_106;
    MR_String Var_107;
    MR_String Var_113;
    MR_String Var_114;
    MR_String Var_116;
    MR_String Var_119;
    MR_String Var_120;
    MR_String Var_125;
    MR_String Var_126;
    MR_String Var_127;
    MR_String Var_128;
    MR_String Var_129;
    MR_Word Var_131;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word _SaveArgs_37;
    MR_Word _SavePrefixGoals_38;

    DebugArgStr_29 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(STATE_VARIABLE_TableInfo_0_55);
    transform_hlds__table_gen__generate_answer_table_lookup_goals_15_p_0(NumberedSaveVars_16, PredId_18, ProcId_19, Statistics_21, Context_22, STATE_VARIABLE_VarSet_0_51, &STATE_VARIABLE_VarSet_57_57, STATE_VARIABLE_VarTypes_0_53, &STATE_VARIABLE_VarTypes_58_58, STATE_VARIABLE_TableInfo_0_55, &STATE_VARIABLE_TableInfo_59_59, OutputSteps_26, &LookupForeignArgs_30, &LookupPrefixGoals_31, &LookupCodeStr_32);
    Var_60 = transform_hlds__table_gen__subgoal_name_0_f_0();
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_15_p_0(NumberedSaveVars_16, Var_60, BlockSize_20, (MR_String) "MR_tbl_mm_create_answer_block", Context_22, STATE_VARIABLE_VarSet_57_57, STATE_VARIABLE_VarSet_52, STATE_VARIABLE_VarTypes_58_58, STATE_VARIABLE_VarTypes_54, STATE_VARIABLE_TableInfo_59_59, STATE_VARIABLE_TableInfo_56, &_SaveArgs_37, &_SavePrefixGoals_38, &SaveDeclCode_39, &CreateSaveCode_40);
    SubgoalName_41 = transform_hlds__table_gen__subgoal_name_0_f_0();
    Var_67 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (SubgoalName_41));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
    }
    Var_68 = transform_hlds__table_gen__subgoal_type_0_f_0();
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (SubgoalVar_17));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), Var_64, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Args_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_42, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Args_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_73 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_79 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_78 = mercury__string__f_43_43_2_f_0(Var_79, (MR_String) ";\n\tMR_bool succeeded;\n");
    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_78);
    Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_76);
    Var_72 = mercury__string__f_43_43_2_f_0(Var_73, Var_74);
    LookupDeclCodeStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_72);
    Var_97 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_96 = mercury__string__f_43_43_2_f_0(Var_97, (MR_String) ");\n");
    Var_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_96);
    Var_93 = mercury__string__f_43_43_2_f_0(SubgoalName_41, Var_94);
    Var_91 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_93);
    Var_90 = mercury__string__f_43_43_2_f_0(DebugArgStr_29, Var_91);
    Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_90);
    Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mm_get_answer_table", Var_88);
    GetCodeStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_87);
    Var_107 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_106 = mercury__string__f_43_43_2_f_0(Var_107, (MR_String) ", succeeded);\n");
    Var_104 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_106);
    Var_103 = mercury__string__f_43_43_2_f_0(DebugArgStr_29, Var_104);
    Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_103);
    Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mm_answer_is_not_duplicate", Var_101);
    DuplCheckCodeStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_100);
    Var_116 = mercury__string__f_43_43_2_f_0(CreateSaveCode_40, (MR_String) "\t}\n");
    Var_114 = mercury__string__f_43_43_2_f_0((MR_String) ") {\n", Var_116);
    Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "succeeded", Var_114);
    CondSaveStr_47 = mercury__string__f_43_43_2_f_0((MR_String) "\tif (", Var_113);
    Var_120 = transform_hlds__table_gen__success_indicator_name_0_f_0();
    Var_119 = mercury__string__f_43_43_2_f_0(Var_120, (MR_String) " = succeeded;\n");
    AssignSuccessCodeStr_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_119);
    Var_129 = mercury__string__f_43_43_2_f_0(CondSaveStr_47, AssignSuccessCodeStr_48);
    Var_128 = mercury__string__f_43_43_2_f_0(DuplCheckCodeStr_46, Var_129);
    Var_127 = mercury__string__f_43_43_2_f_0(LookupCodeStr_32, Var_128);
    Var_126 = mercury__string__f_43_43_2_f_0(GetCodeStr_45, Var_127);
    Var_125 = mercury__string__f_43_43_2_f_0(SaveDeclCode_39, Var_126);
    CodeStr_49 = mercury__string__f_43_43_2_f_0(LookupDeclCodeStr_44, Var_125);
    Var_131 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_133 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_mm_answer_is_not_duplicate_shortcut", (MR_Integer) 1, Var_131, Args_42, LookupForeignArgs_30, CodeStr_49, (MR_Integer) 2, Var_133, ModuleInfo_28, Context_22, &DuplicateCheckSaveGoal_50);
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (DuplicateCheckSaveGoal_50));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_31, Var_134);
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__success_indicator_name_0_f_0(void)
{
  {
    return (MR_String) "SUCCESS_INDICATOR";
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_answer_table_lookup_goals_15_p_0(
  MR_Word NumberedVars_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_VarTypes_0_39,
  MR_Word * STATE_VARIABLE_VarTypes_40,
  MR_Word STATE_VARIABLE_TableInfo_0_41,
  MR_Word * STATE_VARIABLE_TableInfo_42,
  MR_Word * OutputSteps_24,
  MR_Word * ForeignArgs_25,
  MR_Word * PrefixGoals_26,
  MR_String * CodeStr_27)
{
  {
    MR_Word MaybeStatsRef_28;
    MR_String DebugArgStr_29;
    MR_Word LookupArgs_31;
    MR_Word LookupPrefixGoals_32;
    MR_String LookupCodeStr_33;
    MR_Word StatsPrefixGoals_34;
    MR_Word StatsExtraArgs_35;
    MR_String StatsCodeStr_36;
    MR_Word STATE_VARIABLE_VarSet_44_44;
    MR_Word STATE_VARIABLE_VarTypes_45_45;
    MR_Word ModuleInfo_67;
    MR_Word Globals_68;
    MR_Word TableDebug_69;

    switch (Statistics_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        MaybeStatsRef_28 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        MaybeStatsRef_28 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[6]));
        break;
    }
    ModuleInfo_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_41, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_67, &Globals_68);
    libs__globals__lookup_bool_option_3_p_0(Globals_68, (MR_Integer) 322, &TableDebug_69);
    switch (TableDebug_69) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugArgStr_29 = (MR_String) "MR_FALSE";
        break;
      case (MR_Integer) 1:
        DebugArgStr_29 = (MR_String) "MR_TRUE";
        break;
    }
    transform_hlds__table_gen__generate_table_lookup_goals_15_p_0(NumberedVars_16, MaybeStatsRef_28, DebugArgStr_29, (MR_String) "MR_FALSE", Context_20, STATE_VARIABLE_VarSet_0_37, &STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarTypes_0_39, &STATE_VARIABLE_VarTypes_45_45, STATE_VARIABLE_TableInfo_0_41, STATE_VARIABLE_TableInfo_42, OutputSteps_24, &LookupArgs_31, &LookupPrefixGoals_32, &LookupCodeStr_33);
    transform_hlds__table_gen__maybe_record_overall_stats_13_p_0(PredId_17, ProcId_18, Context_20, (MR_String) "proc_table_info", (MR_String) "cur_node", MaybeStatsRef_28, STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarSet_38, STATE_VARIABLE_VarTypes_45_45, STATE_VARIABLE_VarTypes_40, &StatsPrefixGoals_34, &StatsExtraArgs_35, &StatsCodeStr_36);
    *CodeStr_27 = mercury__string__f_43_43_2_f_0(LookupCodeStr_33, StatsCodeStr_36);
    *ForeignArgs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), StatsExtraArgs_35, LookupArgs_31);
    *PrefixGoals_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), StatsPrefixGoals_34, LookupPrefixGoals_32);
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_mm_call_table_lookup_goal_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_140;

    conv0_HeadVar__2_140 = transform_hlds__table_gen__IntroducedFrom__func__generate_mm_call_table_lookup_goal__2288__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_140));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_mm_call_table_lookup_goal_15_p_0(
  MR_Word NumberedVars_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word Statistics_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_56,
  MR_Word * STATE_VARIABLE_VarSet_57,
  MR_Word STATE_VARIABLE_VarTypes_0_58,
  MR_Word * STATE_VARIABLE_VarTypes_59,
  MR_Word STATE_VARIABLE_TableInfo_0_60,
  MR_Word * STATE_VARIABLE_TableInfo_61,
  MR_Word * SubgoalVar_24,
  MR_Word * StatusVar_25,
  MR_Word * Goal_26,
  MR_Word * Steps_27)
{
  {
    MR_Word InfoArg_30;
    MR_Word LookupForeignArgs_31;
    MR_Word LookupPrefixGoals_32;
    MR_String LookupCodeStr_33;
    MR_Word BoundVars_37;
    MR_String SubgoalVarName_38;
    MR_String StatusVarName_39;
    MR_Word SubgoalArg_40;
    MR_Word StatusArg_41;
    MR_Word Args_42;
    MR_String LookupDeclStr_43;
    MR_String DebugArgStr_44;
    MR_String BackArgStr_45;
    MR_String SetupCodeStr_46;
    MR_String CodeStr_47;
    MR_Word ModuleInfo_48;
    MR_Word SetupGoal0_49;
    MR_Word SetupGoal_50;
    MR_Word LookupSetupGoals_51;
    MR_Word GoalExpr_52;
    MR_Word Vars_53;
    MR_Word NonLocals_54;
    MR_Word GoalInfo_55;
    MR_Word STATE_VARIABLE_VarSet_62_62;
    MR_Word STATE_VARIABLE_VarTypes_63_63;
    MR_Word Var_66;
    MR_Word STATE_VARIABLE_VarSet_67_67;
    MR_Word STATE_VARIABLE_VarTypes_68_68;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_91;
    MR_String Var_93;
    MR_String Var_95;
    MR_String Var_96;
    MR_String Var_99;
    MR_String Var_100;
    MR_String Var_102;
    MR_String Var_103;
    MR_String Var_105;
    MR_String Var_106;
    MR_String Var_108;
    MR_String Var_109;
    MR_String Var_110;
    MR_String Var_112;
    MR_String Var_113;
    MR_String Var_115;
    MR_String Var_117;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word _TableTipVar_28;
    MR_Word _TableTipArg_29;
    MR_String _CallTableTipAssignStr_34;

    transform_hlds__table_gen__generate_call_table_lookup_goals_19_p_0(NumberedVars_16, PredId_17, ProcId_18, Statistics_19, Context_20, STATE_VARIABLE_VarSet_0_56, &STATE_VARIABLE_VarSet_62_62, STATE_VARIABLE_VarTypes_0_58, &STATE_VARIABLE_VarTypes_63_63, STATE_VARIABLE_TableInfo_0_60, STATE_VARIABLE_TableInfo_61, Steps_27, &_TableTipVar_28, &_TableTipArg_29, &InfoArg_30, &LookupForeignArgs_31, &LookupPrefixGoals_32, &LookupCodeStr_33, &_CallTableTipAssignStr_34);
    Var_66 = transform_hlds__table_gen__subgoal_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "Subgoal", Var_66, STATE_VARIABLE_VarSet_62_62, &STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_VarTypes_63_63, &STATE_VARIABLE_VarTypes_68_68, SubgoalVar_24);
    Var_70 = transform_hlds__table_gen__mm_status_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "Status", Var_70, STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_VarSet_57, STATE_VARIABLE_VarTypes_68_68, STATE_VARIABLE_VarTypes_59, StatusVar_25);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (*StatusVar_25));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      BoundVars_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), BoundVars_37, 0) = ((MR_Box) (*SubgoalVar_24));
      MR_hl_field(MR_mktag(1), BoundVars_37, 1) = ((MR_Box) (Var_73));
    }
    SubgoalVarName_38 = transform_hlds__table_gen__subgoal_name_0_f_0();
    StatusVarName_39 = transform_hlds__table_gen__status_name_0_f_0();
    Var_77 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (SubgoalVarName_38));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
    }
    Var_78 = transform_hlds__table_gen__subgoal_type_0_f_0();
    {
      SubgoalArg_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubgoalArg_40, 0) = ((MR_Box) (*SubgoalVar_24));
      MR_hl_field(MR_mktag(0), SubgoalArg_40, 1) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), SubgoalArg_40, 2) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), SubgoalArg_40, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_82 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (StatusVarName_39));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
    }
    Var_83 = transform_hlds__table_gen__mm_status_type_0_f_0();
    {
      StatusArg_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StatusArg_41, 0) = ((MR_Box) (*StatusVar_25));
      MR_hl_field(MR_mktag(0), StatusArg_41, 1) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), StatusArg_41, 2) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), StatusArg_41, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (StatusArg_41));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (SubgoalArg_40));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
    }
    {
      Args_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_42, 0) = ((MR_Box) (InfoArg_30));
      MR_hl_field(MR_mktag(1), Args_42, 1) = ((MR_Box) (Var_85));
    }
    Var_90 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_96 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_95 = mercury__string__f_43_43_2_f_0(Var_96, (MR_String) ";\n\n");
    Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_95);
    Var_91 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_93);
    Var_89 = mercury__string__f_43_43_2_f_0(Var_90, Var_91);
    LookupDeclStr_43 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_89);
    DebugArgStr_44 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_61);
    BackArgStr_45 = transform_hlds__table_gen__get_back_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_61);
    Var_109 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_115 = mercury__string__f_43_43_2_f_0(StatusVarName_39, (MR_String) ");\n");
    Var_113 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_115);
    Var_112 = mercury__string__f_43_43_2_f_0(SubgoalVarName_38, Var_113);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_112);
    Var_108 = mercury__string__f_43_43_2_f_0(Var_109, Var_110);
    Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_108);
    Var_105 = mercury__string__f_43_43_2_f_0(BackArgStr_45, Var_106);
    Var_103 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_105);
    Var_102 = mercury__string__f_43_43_2_f_0(DebugArgStr_44, Var_103);
    Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_102);
    Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_mm_setup", Var_100);
    SetupCodeStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_99);
    Var_117 = mercury__string__f_43_43_2_f_0(LookupCodeStr_33, SetupCodeStr_46);
    CodeStr_47 = mercury__string__f_43_43_2_f_0(LookupDeclStr_43, Var_117);
    ModuleInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_TableInfo_61, (MR_Integer) 0))));
    Var_119 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
    Var_121 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_37);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_mm_setup", (MR_Integer) 0, Var_119, Args_42, LookupForeignArgs_31, CodeStr_47, (MR_Integer) 2, Var_121, ModuleInfo_48, Context_20, &SetupGoal0_49);
    transform_hlds__table_gen__attach_call_table_tip_2_p_0(SetupGoal0_49, &SetupGoal_50);
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (SetupGoal_50));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    LookupSetupGoals_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_32, Var_122);
    {
      GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 2) = ((MR_Box) (LookupSetupGoals_51));
    }
    Vars_53 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[12]), NumberedVars_16);
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (*SubgoalVar_24));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Vars_53));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (*StatusVar_25));
      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_126, &NonLocals_54);
    Var_128 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_37);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(NonLocals_54, Var_128, (MR_Integer) 0, (MR_Integer) 2, Context_20, &GoalInfo_55);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_55));
    }
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__subgoal_name_0_f_0(void)
{
  {
    return (MR_String) "subgoal";
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__mm_status_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "mm_status"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__subgoal_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "ml_subgoal"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = transform_hlds__table_gen__project_out_arg_method_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_316;

    conv2_HeadVar__2_316 = transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1361__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_316));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__IntroducedFrom__pred__create_new_io_goal__1355__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_309;

    conv1_HeadVar__2_309 = transform_hlds__table_gen__IntroducedFrom__func__create_new_io_goal__1354__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_309));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = transform_hlds__table_gen__project_out_arg_method_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__var_mode_is_io_state_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__var_mode_pos_is_io_state_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen__create_new_io_goal_17_p_0(
  MR_Word OrigGoal_18,
  MR_Word TableIoEntryKind_19,
  MR_Word Unitize_20,
  MR_Word TableIoStates_21,
  MR_Word PredId_22,
  MR_Integer ProcId_23,
  MR_Word HeadVarModes_24,
  MR_Word OrigInputVars_25,
  MR_Word OrigOutputVars_26,
  MR_Word STATE_VARIABLE_VarSet_0_114,
  MR_Word * STATE_VARIABLE_VarSet_115,
  MR_Word STATE_VARIABLE_VarTypes_0_116,
  MR_Word * STATE_VARIABLE_VarTypes_117,
  MR_Word STATE_VARIABLE_TableInfo_0_118,
  MR_Word * STATE_VARIABLE_TableInfo_119,
  MR_Word * Goal_30,
  MR_Word * MaybeProcTableIOInfo_31)
{
  {
    MR_bool succeeded;
    MR_Word OrigGoalInfo_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_18, (MR_Integer) 1))));
    MR_Word ModuleInfo0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_118, (MR_Integer) 0))));
    MR_Word PredInfo_35;
    MR_Word Markers_36;
    MR_Word ModuleInfo_38;
    MR_Word NewGoal_39;
    MR_Word OrigNonLocals_40;
    MR_Word Context_41;
    MR_Word IoStateAssignToVars_42;
    MR_Word IoStateAssignFromVars_43;
    MR_Word SavedOutputVars_44;
    MR_Word SavedHeadVars_45;
    MR_Word TableVar_49;
    MR_Word CounterVar_50;
    MR_Word StartVar_51;
    MR_Word InRangeGoal_52;
    MR_Word TipVar_53;
    MR_Word LookupGoal_54;
    MR_Word OccurredGoal_55;
    MR_Word TableIoEntryDescGoal_58;
    MR_Word NumberedSaveVars_61;
    MR_Word NumberedRestoreVars_64;
    MR_Integer BlockSize_69;
    MR_Word OrigInstMapDelta_70;
    MR_Word RestoreAnswerGoal0_71;
    MR_Word RestoreAnswerGoal_72;
    MR_Word SaveAnswerGoals_86;
    MR_Word CallSaveAnswerGoalList_87;
    MR_Word CallSaveAnswerGoalExpr_91;
    MR_Word CallSaveAnswerInstMapDelta0_92;
    MR_Word CallSaveAnswerNonLocals_93;
    MR_Word CallSaveAnswerInstMapDelta_94;
    MR_Word CallSaveAnswerGoalInfo0_95;
    MR_Word CallSaveAnswerGoalInfo_96;
    MR_Word CallSaveAnswerGoal_97;
    MR_Word GenIfNecGoalExpr_98;
    MR_Word GenIfNecInstMapDelta0_99;
    MR_Word GenIfNecNonLocals_100;
    MR_Word GenIfNecInstMapDelta_101;
    MR_Word GenIfNecGoalInfo_102;
    MR_Word GenIfNecGoal_103;
    MR_Word CheckAndGenAnswerGoalExpr_104;
    MR_Word CheckAndGenAnswerInstMapDelta0_105;
    MR_Word CheckAndGenAnswerNonLocals_106;
    MR_Word CheckAndGenAnswerInstMapDelta_107;
    MR_Word CheckAndGenAnswerGoalInfo_108;
    MR_Word CheckAndGenAnswerGoal_109;
    MR_Word BodyGoalExpr_110;
    MR_Word BodyInstMapDelta0_111;
    MR_Word BodyInstMapDelta_112;
    MR_Word BodyGoalInfo_113;
    MR_Word STATE_VARIABLE_TableInfo_121_121;
    MR_Word Var_127;
    MR_Word STATE_VARIABLE_VarSet_128_128;
    MR_Word STATE_VARIABLE_VarTypes_129_129;
    MR_Word Var_131;
    MR_Word STATE_VARIABLE_VarSet_132_132;
    MR_Word STATE_VARIABLE_VarTypes_133_133;
    MR_Word Var_135;
    MR_Word STATE_VARIABLE_VarSet_136_136;
    MR_Word STATE_VARIABLE_VarTypes_137_137;
    MR_Word Var_140;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_151;
    MR_Word STATE_VARIABLE_VarSet_152_152;
    MR_Word STATE_VARIABLE_VarTypes_153_153;
    MR_Word Var_156;
    MR_Word Var_158;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_167;
    MR_Word STATE_VARIABLE_VarSet_186_186;
    MR_Word STATE_VARIABLE_VarTypes_187_187;
    MR_Word STATE_VARIABLE_VarSet_199_199;
    MR_Word STATE_VARIABLE_VarTypes_200_200;
    MR_Word STATE_VARIABLE_VarSet_235_235;
    MR_Word STATE_VARIABLE_VarTypes_236_236;
    MR_Word Var_263;
    MR_Word Var_264;
    MR_Word Var_265;
    MR_Word Var_270;
    MR_Word Var_271;
    MR_Word Var_283;
    MR_Word Var_284;
    MR_Word Var_285;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_34, PredId_22, &PredInfo_35);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_35, &Markers_36);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_36, (MR_Integer) 8);
    if (succeeded)
    {
      MR_Word CallExpr_37;
      MR_Word Var_296;
      MR_Word Var_297;

      transform_hlds__table_gen__clone_proc_and_create_call_5_p_0(PredInfo_35, ProcId_23, &CallExpr_37, ModuleInfo0_34, &ModuleInfo_38);
      {
        NewGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewGoal_39, 0) = ((MR_Box) (CallExpr_37));
        MR_hl_field(MR_mktag(0), NewGoal_39, 1) = ((MR_Box) (OrigGoalInfo_33));
      }
      Var_296 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_118, (MR_Integer) 1))));
      Var_297 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_118, (MR_Integer) 2))));
      {
        STATE_VARIABLE_TableInfo_121_121 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_121_121, 0) = ((MR_Box) (ModuleInfo_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_121_121, 1) = ((MR_Box) (Var_296));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_121_121, 2) = ((MR_Box) (Var_297));
      }
    }
    else
    {
      NewGoal_39 = OrigGoal_18;
      ModuleInfo_38 = ModuleInfo0_34;
      STATE_VARIABLE_TableInfo_121_121 = STATE_VARIABLE_TableInfo_0_118;
    }
    OrigNonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OrigGoalInfo_33);
    Context_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_33);
    switch (TableIoStates_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MisNumberedSavedOutputVars_46;
          MR_Word Var_122;
          MR_Word Var_125;
          MR_Word _MisNumberedSavedInputVars_47;
          MR_Word Var_48;

          {
            Var_122 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[4]));
            MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_17_p_0_1));
            MR_hl_field(MR_mktag(0), Var_122, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_122, 3) = ((MR_Box) (STATE_VARIABLE_VarTypes_0_116));
          }
          mercury__list__filter_4_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), Var_122, OrigOutputVars_26, &IoStateAssignToVars_42, &MisNumberedSavedOutputVars_46);
          transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(MisNumberedSavedOutputVars_46, (MR_Integer) 0, &SavedOutputVars_44);
          mercury__list__filter_4_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), Var_122, OrigInputVars_25, &IoStateAssignFromVars_43, &_MisNumberedSavedInputVars_47);
          {
            Var_125 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[5]));
            MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_17_p_0_2));
            MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (STATE_VARIABLE_VarTypes_0_116));
          }
          mercury__list__filter_4_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_2[0]), Var_125, HeadVarModes_24, &Var_48, &SavedHeadVars_45);
        }
        break;
      case (MR_Integer) 1:
        {
          IoStateAssignToVars_42 = (MR_Word) ((MR_Unsigned) 0U);
          IoStateAssignFromVars_43 = (MR_Word) ((MR_Unsigned) 0U);
          SavedOutputVars_44 = OrigOutputVars_26;
          SavedHeadVars_45 = HeadVarModes_24;
        }
        break;
    }
    Var_127 = transform_hlds__table_gen__trie_node_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "TableVar", Var_127, STATE_VARIABLE_VarSet_0_114, &STATE_VARIABLE_VarSet_128_128, STATE_VARIABLE_VarTypes_0_116, &STATE_VARIABLE_VarTypes_129_129, &TableVar_49);
    Var_131 = parse_tree__builtin_lib_types__int_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "CounterVar", Var_131, STATE_VARIABLE_VarSet_128_128, &STATE_VARIABLE_VarSet_132_132, STATE_VARIABLE_VarTypes_129_129, &STATE_VARIABLE_VarTypes_133_133, &CounterVar_50);
    Var_135 = parse_tree__builtin_lib_types__int_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "StartVar", Var_135, STATE_VARIABLE_VarSet_132_132, &STATE_VARIABLE_VarSet_136_136, STATE_VARIABLE_VarTypes_133_133, &STATE_VARIABLE_VarTypes_137_137, &StartVar_51);
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (StartVar_51));
      MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (CounterVar_50));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (TableVar_49));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_143));
    }
    Var_142 = hlds__instmap__instmap_delta_bind_vars_1_f_0(Var_140);
    transform_hlds__table_gen__table_generate_call_8_p_0((MR_String) "table_io_in_range", (MR_Integer) 1, Var_140, (MR_Integer) 2, Var_142, ModuleInfo_38, Context_41, &InRangeGoal_52);
    Var_151 = transform_hlds__table_gen__trie_node_type_0_f_0();
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "TipVar", Var_151, STATE_VARIABLE_VarSet_136_136, &STATE_VARIABLE_VarSet_152_152, STATE_VARIABLE_VarTypes_137_137, &STATE_VARIABLE_VarTypes_153_153, &TipVar_53);
    {
      Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (TipVar_53));
      MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (CounterVar_50));
      MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_161));
    }
    {
      Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (StartVar_51));
      MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_160));
    }
    {
      Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (TableVar_49));
      MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_159));
    }
    Var_158 = hlds__instmap__instmap_delta_bind_var_1_f_0(TipVar_53);
    transform_hlds__table_gen__table_generate_call_8_p_0((MR_String) "table_lookup_insert_start_int", (MR_Integer) 0, Var_156, (MR_Integer) 2, Var_158, ModuleInfo_38, Context_41, &LookupGoal_54);
    Var_167 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_call_8_p_0((MR_String) "table_io_has_occurred", (MR_Integer) 1, Var_161, (MR_Integer) 2, Var_167, ModuleInfo_38, Context_41, &OccurredGoal_55);
    switch (TableIoEntryKind_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TableIoEntryDescGoal_58 = hlds__make_goal__true_goal_0_f_0();
          NumberedRestoreVars_64 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[6]), SavedOutputVars_44);
          NumberedSaveVars_61 = NumberedRestoreVars_64;
          *MaybeProcTableIOInfo_31 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_VarSet_186_186 = STATE_VARIABLE_VarSet_152_152;
          STATE_VARIABLE_VarTypes_187_187 = STATE_VARIABLE_VarTypes_153_153;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ShroudedPredProcId_56;
          MR_Word TableIoEntryConsId_57;
          MR_Word TableIoEntryDescPtrVar_59;
          MR_Word NumberedSavedHeadVars_60;
          MR_Word UnnumberedSavedOutputVars_62;
          MR_Word ProcInfo0_65;
          MR_Word TableArgTypeInfo_66;
          MR_Word ProcTableIOInfo_67;
          MR_Word Var_183;
          MR_Word Var_184;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_195;
          MR_Word Var_196;
          MR_Word Var_198;

          {
            Var_183 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_183, 0) = ((MR_Box) (PredId_22));
            MR_hl_field(MR_mktag(0), Var_183, 1) = ((MR_Box) (ProcId_23));
          }
          ShroudedPredProcId_56 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_183);
          {
            TableIoEntryConsId_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TableIoEntryConsId_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), TableIoEntryConsId_57, 1) = ((MR_Box) (ShroudedPredProcId_56));
          }
          Var_184 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          hlds__make_goal__make_const_construction_alloc_9_p_0(TableIoEntryConsId_57, Var_184, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[4])), &TableIoEntryDescGoal_58, &TableIoEntryDescPtrVar_59, STATE_VARIABLE_VarSet_152_152, &STATE_VARIABLE_VarSet_186_186, STATE_VARIABLE_VarTypes_153_153, &STATE_VARIABLE_VarTypes_187_187);
          transform_hlds__table_gen__allocate_plain_slot_numbers_3_p_0(SavedHeadVars_45, (MR_Integer) 1, &NumberedSavedHeadVars_60);
          Var_191 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_190 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_190, 0) = ((MR_Box) (TableIoEntryDescPtrVar_59));
            MR_hl_field(MR_mktag(0), Var_190, 1) = ((MR_Box) (Var_191));
            MR_hl_field(MR_mktag(0), Var_190, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_190, 3) = NULL;
          }
          {
            NumberedSaveVars_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NumberedSaveVars_61, 0) = ((MR_Box) (Var_190));
            MR_hl_field(MR_mktag(1), NumberedSaveVars_61, 1) = ((MR_Box) (NumberedSavedHeadVars_60));
          }
          UnnumberedSavedOutputVars_62 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[7]), SavedOutputVars_44);
          {
            Var_195 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_195, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[7]));
            MR_hl_field(MR_mktag(0), Var_195, 1) = ((MR_Box) (transform_hlds__table_gen__create_new_io_goal_17_p_0_5));
            MR_hl_field(MR_mktag(0), Var_195, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_195, 3) = ((MR_Box) (UnnumberedSavedOutputVars_62));
          }
          mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), Var_195, NumberedSaveVars_61, &NumberedRestoreVars_64);
          ProcInfo0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_121_121, (MR_Integer) 2))));
          Var_196 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[1]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[8]), NumberedSavedHeadVars_60);
          ll_backend__continuation_info__generate_table_arg_type_info_3_p_0(ProcInfo0_65, Var_196, &TableArgTypeInfo_66);
          {
            Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (TableArgTypeInfo_66));
          }
          ProcTableIOInfo_67 = (MR_Word) (Var_198);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeProcTableIOInfo_31 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcTableIOInfo_67));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NumberedRestoreVars0_68;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word ShroudedPredProcId_289;
          MR_Word TableIoEntryConsId_290;
          MR_Word TableIoEntryDescPtrVar_291;

          {
            Var_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (PredId_22));
            MR_hl_field(MR_mktag(0), Var_170, 1) = ((MR_Box) (ProcId_23));
          }
          ShroudedPredProcId_289 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_170);
          {
            TableIoEntryConsId_290 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TableIoEntryConsId_290, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), TableIoEntryConsId_290, 1) = ((MR_Box) (ShroudedPredProcId_289));
          }
          Var_171 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          hlds__make_goal__make_const_construction_alloc_9_p_0(TableIoEntryConsId_290, Var_171, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[4])), &TableIoEntryDescGoal_58, &TableIoEntryDescPtrVar_291, STATE_VARIABLE_VarSet_152_152, &STATE_VARIABLE_VarSet_186_186, STATE_VARIABLE_VarTypes_153_153, &STATE_VARIABLE_VarTypes_187_187);
          NumberedRestoreVars0_68 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[9]), SavedOutputVars_44);
          transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(NumberedRestoreVars0_68, (MR_Integer) 1, &NumberedRestoreVars_64);
          Var_179 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_178 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_178, 0) = ((MR_Box) (TableIoEntryDescPtrVar_291));
            MR_hl_field(MR_mktag(0), Var_178, 1) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(0), Var_178, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_178, 3) = NULL;
          }
          {
            NumberedSaveVars_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NumberedSaveVars_61, 0) = ((MR_Box) (Var_178));
            MR_hl_field(MR_mktag(1), NumberedSaveVars_61, 1) = ((MR_Box) (NumberedRestoreVars_64));
          }
          *MaybeProcTableIOInfo_31 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[5]));
        }
        break;
    }
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[4]), NumberedSaveVars_61, &BlockSize_69);
    OrigInstMapDelta_70 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_33);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_10_p_0(NumberedRestoreVars_64, OrigInstMapDelta_70, TipVar_53, Context_41, STATE_VARIABLE_VarSet_186_186, &STATE_VARIABLE_VarSet_199_199, STATE_VARIABLE_VarTypes_187_187, &STATE_VARIABLE_VarTypes_200_200, STATE_VARIABLE_TableInfo_121_121, &RestoreAnswerGoal0_71);
    switch (TableIoStates_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IoStateAssignFromVar_75;
          MR_Word IoStateAssignToVar_76;
          MR_Word IoStateAssignGoal_77;
          MR_Word RestoreAnswerGoalExpr_78;
          MR_Word RestoreAnswerInstMapDelta0_79;
          MR_Word RestoreAnswerGoal0Info_81;
          MR_Word RestoreAnswer0NonLocals_82;
          MR_Word RestoreAnswerNonLocals_83;
          MR_Word RestoreAnswerInstMapDelta_84;
          MR_Word RestoreAnswerGoalInfo_85;
          MR_Word Var_207;
          MR_Word Var_209;
          MR_Word Var_210;
          MR_Word Var_212;
          MR_Word Var_213;
          MR_Word Var_217;
          MR_Word Var_218;
          MR_Word Var_224;
          MR_Word Var_225;
          MR_Word IoStateAssignFromVarPrime_73;
          MR_Word IoStateAssignToVarPrime_74;
          MR_Word Var_201;
          MR_Word Var_202;

          succeeded = (IoStateAssignFromVars_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            IoStateAssignFromVarPrime_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IoStateAssignFromVars_43, (MR_Integer) 0))));
            Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IoStateAssignFromVars_43, (MR_Integer) 1))));
            succeeded = (Var_201 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (IoStateAssignToVars_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                IoStateAssignToVarPrime_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IoStateAssignToVars_42, (MR_Integer) 0))));
                Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IoStateAssignToVars_42, (MR_Integer) 1))));
                succeeded = (Var_202 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
          {
            IoStateAssignFromVar_75 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(IoStateAssignFromVarPrime_73);
            IoStateAssignToVar_76 = transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(IoStateAssignToVarPrime_74);
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.create_new_io_goal\'/17", (MR_String) "one in / one out violation");
              return;
            }
          }
          {
            Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (IoStateAssignToVar_76));
            MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (IoStateAssignFromVar_75));
            MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_210));
          }
          {
            Var_213 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_213, 0) = ((MR_Box) (IoStateAssignFromVar_75));
            MR_hl_field(MR_mktag(0), Var_213, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__table_gen_scalar_common_2[10])));
          }
          {
            Var_218 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (IoStateAssignToVar_76));
            MR_hl_field(MR_mktag(0), Var_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__table_gen_scalar_common_2[11])));
          }
          {
            Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (Var_218));
            MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (Var_213));
            MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_217));
          }
          Var_209 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_212);
          transform_hlds__table_gen__table_generate_call_8_p_0((MR_String) "table_io_copy_io_state", (MR_Integer) 0, Var_207, (MR_Integer) 0, Var_209, ModuleInfo_38, Context_41, &IoStateAssignGoal_77);
          {
            Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (IoStateAssignGoal_77));
            MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_224, 0) = ((MR_Box) (RestoreAnswerGoal0_71));
            MR_hl_field(MR_mktag(1), Var_224, 1) = ((MR_Box) (Var_225));
          }
          {
            RestoreAnswerGoalExpr_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RestoreAnswerGoalExpr_78, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), RestoreAnswerGoalExpr_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), RestoreAnswerGoalExpr_78, 2) = ((MR_Box) (Var_224));
          }
          transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_224, &RestoreAnswerInstMapDelta0_79);
          RestoreAnswerGoal0Info_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RestoreAnswerGoal0_71, (MR_Integer) 1))));
          RestoreAnswer0NonLocals_82 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(RestoreAnswerGoal0Info_81);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_207, RestoreAnswer0NonLocals_82, &RestoreAnswerNonLocals_83);
          hlds__instmap__instmap_delta_restrict_3_p_0(RestoreAnswerNonLocals_83, RestoreAnswerInstMapDelta0_79, &RestoreAnswerInstMapDelta_84);
          transform_hlds__table_gen__goal_info_init_hide_6_p_0(RestoreAnswerNonLocals_83, RestoreAnswerInstMapDelta_84, (MR_Integer) 0, (MR_Integer) 1, Context_41, &RestoreAnswerGoalInfo_85);
          {
            RestoreAnswerGoal_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RestoreAnswerGoal_72, 0) = ((MR_Box) (RestoreAnswerGoalExpr_78));
            MR_hl_field(MR_mktag(0), RestoreAnswerGoal_72, 1) = ((MR_Box) (RestoreAnswerGoalInfo_85));
          }
        }
        break;
      case (MR_Integer) 1:
        RestoreAnswerGoal_72 = RestoreAnswerGoal0_71;
        break;
    }
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_11_p_0(NumberedSaveVars_61, TipVar_53, BlockSize_69, Context_41, STATE_VARIABLE_VarSet_199_199, &STATE_VARIABLE_VarSet_235_235, STATE_VARIABLE_VarTypes_200_200, &STATE_VARIABLE_VarTypes_236_236, STATE_VARIABLE_TableInfo_121_121, STATE_VARIABLE_TableInfo_119, &SaveAnswerGoals_86);
    switch (Unitize_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_257;

          {
            Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (TableIoEntryDescGoal_58));
            MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) (SaveAnswerGoals_86));
          }
          {
            CallSaveAnswerGoalList_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallSaveAnswerGoalList_87, 0) = ((MR_Box) (NewGoal_39));
            MR_hl_field(MR_mktag(1), CallSaveAnswerGoalList_87, 1) = ((MR_Box) (Var_257));
          }
          *STATE_VARIABLE_VarSet_115 = STATE_VARIABLE_VarSet_235_235;
          *STATE_VARIABLE_VarTypes_117 = STATE_VARIABLE_VarTypes_236_236;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word SavedTraceEnabledVar_88;
          MR_Word LeftBracketGoal_89;
          MR_Word RightBracketGoal_90;
          MR_Word Var_239;
          MR_Word Var_244;
          MR_Word Var_246;
          MR_Word Var_252;
          MR_Word Var_254;
          MR_Word Var_255;
          MR_Word Var_256;

          Var_239 = parse_tree__builtin_lib_types__int_type_0_f_0();
          transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "SavedTraceEnabled", Var_239, STATE_VARIABLE_VarSet_235_235, STATE_VARIABLE_VarSet_115, STATE_VARIABLE_VarTypes_236_236, STATE_VARIABLE_VarTypes_117, &SavedTraceEnabledVar_88);
          {
            Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (SavedTraceEnabledVar_88));
            MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_246 = hlds__instmap__instmap_delta_bind_var_1_f_0(SavedTraceEnabledVar_88);
          transform_hlds__table_gen__table_generate_call_8_p_0((MR_String) "table_io_left_bracket_unitized_goal", (MR_Integer) 0, Var_244, (MR_Integer) 2, Var_246, ModuleInfo_38, Context_41, &LeftBracketGoal_89);
          Var_252 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          transform_hlds__table_gen__table_generate_call_8_p_0((MR_String) "table_io_right_bracket_unitized_goal", (MR_Integer) 0, Var_244, (MR_Integer) 2, Var_252, ModuleInfo_38, Context_41, &RightBracketGoal_90);
          {
            Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (TableIoEntryDescGoal_58));
            MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) (SaveAnswerGoals_86));
          }
          {
            Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (RightBracketGoal_90));
            MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) (Var_256));
          }
          {
            Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (NewGoal_39));
            MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) (Var_255));
          }
          {
            CallSaveAnswerGoalList_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallSaveAnswerGoalList_87, 0) = ((MR_Box) (LeftBracketGoal_89));
            MR_hl_field(MR_mktag(1), CallSaveAnswerGoalList_87, 1) = ((MR_Box) (Var_254));
          }
        }
        break;
    }
    {
      CallSaveAnswerGoalExpr_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CallSaveAnswerGoalExpr_91, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), CallSaveAnswerGoalExpr_91, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), CallSaveAnswerGoalExpr_91, 2) = ((MR_Box) (CallSaveAnswerGoalList_87));
    }
    transform_hlds__table_gen__create_instmap_delta_2_p_0(CallSaveAnswerGoalList_87, &CallSaveAnswerInstMapDelta0_92);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TipVar_53, OrigNonLocals_40, &CallSaveAnswerNonLocals_93);
    hlds__instmap__instmap_delta_restrict_3_p_0(CallSaveAnswerNonLocals_93, CallSaveAnswerInstMapDelta0_92, &CallSaveAnswerInstMapDelta_94);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(CallSaveAnswerNonLocals_93, CallSaveAnswerInstMapDelta_94, (MR_Integer) 0, (MR_Integer) 2, Context_41, &CallSaveAnswerGoalInfo0_95);
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, CallSaveAnswerGoalInfo0_95, &CallSaveAnswerGoalInfo_96);
    {
      CallSaveAnswerGoal_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallSaveAnswerGoal_97, 0) = ((MR_Box) (CallSaveAnswerGoalExpr_91));
      MR_hl_field(MR_mktag(0), CallSaveAnswerGoal_97, 1) = ((MR_Box) (CallSaveAnswerGoalInfo_96));
    }
    {
      GenIfNecGoalExpr_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GenIfNecGoalExpr_98, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), GenIfNecGoalExpr_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), GenIfNecGoalExpr_98, 2) = ((MR_Box) (OccurredGoal_55));
      MR_hl_field(MR_mktag(3), GenIfNecGoalExpr_98, 3) = ((MR_Box) (RestoreAnswerGoal_72));
      MR_hl_field(MR_mktag(3), GenIfNecGoalExpr_98, 4) = ((MR_Box) (CallSaveAnswerGoal_97));
    }
    {
      Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (CallSaveAnswerGoal_97));
      MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_264, 0) = ((MR_Box) (RestoreAnswerGoal_72));
      MR_hl_field(MR_mktag(1), Var_264, 1) = ((MR_Box) (Var_265));
    }
    {
      Var_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_263, 0) = ((MR_Box) (OccurredGoal_55));
      MR_hl_field(MR_mktag(1), Var_263, 1) = ((MR_Box) (Var_264));
    }
    transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_263, &GenIfNecInstMapDelta0_99);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TipVar_53, OrigNonLocals_40, &GenIfNecNonLocals_100);
    hlds__instmap__instmap_delta_restrict_3_p_0(GenIfNecNonLocals_100, GenIfNecInstMapDelta0_99, &GenIfNecInstMapDelta_101);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(GenIfNecNonLocals_100, GenIfNecInstMapDelta_101, (MR_Integer) 0, (MR_Integer) 2, Context_41, &GenIfNecGoalInfo_102);
    {
      GenIfNecGoal_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GenIfNecGoal_103, 0) = ((MR_Box) (GenIfNecGoalExpr_98));
      MR_hl_field(MR_mktag(0), GenIfNecGoal_103, 1) = ((MR_Box) (GenIfNecGoalInfo_102));
    }
    {
      Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) (GenIfNecGoal_103));
      MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_270, 0) = ((MR_Box) (LookupGoal_54));
      MR_hl_field(MR_mktag(1), Var_270, 1) = ((MR_Box) (Var_271));
    }
    {
      CheckAndGenAnswerGoalExpr_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CheckAndGenAnswerGoalExpr_104, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), CheckAndGenAnswerGoalExpr_104, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), CheckAndGenAnswerGoalExpr_104, 2) = ((MR_Box) (Var_270));
    }
    transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_270, &CheckAndGenAnswerInstMapDelta0_105);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_140, OrigNonLocals_40, &CheckAndGenAnswerNonLocals_106);
    hlds__instmap__instmap_delta_restrict_3_p_0(CheckAndGenAnswerNonLocals_106, CheckAndGenAnswerInstMapDelta0_105, &CheckAndGenAnswerInstMapDelta_107);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(CheckAndGenAnswerNonLocals_106, CheckAndGenAnswerInstMapDelta_107, (MR_Integer) 0, (MR_Integer) 2, Context_41, &CheckAndGenAnswerGoalInfo_108);
    {
      CheckAndGenAnswerGoal_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CheckAndGenAnswerGoal_109, 0) = ((MR_Box) (CheckAndGenAnswerGoalExpr_104));
      MR_hl_field(MR_mktag(0), CheckAndGenAnswerGoal_109, 1) = ((MR_Box) (CheckAndGenAnswerGoalInfo_108));
    }
    {
      BodyGoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BodyGoalExpr_110, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), BodyGoalExpr_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), BodyGoalExpr_110, 2) = ((MR_Box) (InRangeGoal_52));
      MR_hl_field(MR_mktag(3), BodyGoalExpr_110, 3) = ((MR_Box) (CheckAndGenAnswerGoal_109));
      MR_hl_field(MR_mktag(3), BodyGoalExpr_110, 4) = ((MR_Box) (NewGoal_39));
    }
    {
      Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_285, 0) = ((MR_Box) (NewGoal_39));
      MR_hl_field(MR_mktag(1), Var_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_284, 0) = ((MR_Box) (CheckAndGenAnswerGoal_109));
      MR_hl_field(MR_mktag(1), Var_284, 1) = ((MR_Box) (Var_285));
    }
    {
      Var_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_283, 0) = ((MR_Box) (InRangeGoal_52));
      MR_hl_field(MR_mktag(1), Var_283, 1) = ((MR_Box) (Var_284));
    }
    transform_hlds__table_gen__create_instmap_delta_2_p_0(Var_283, &BodyInstMapDelta0_111);
    hlds__instmap__instmap_delta_restrict_3_p_0(OrigNonLocals_40, BodyInstMapDelta0_111, &BodyInstMapDelta_112);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_40, BodyInstMapDelta_112, (MR_Integer) 0, (MR_Integer) 2, Context_41, &BodyGoalInfo_113);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (BodyGoalExpr_110));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (BodyGoalInfo_113));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset0_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word VarModePos0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VarModes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarModePos_8;
    MR_Word VarModePoss_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarModePos0_5, (MR_Integer) 0))));
    MR_Word Mode_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarModePos0_5, (MR_Integer) 1))));
    MR_Box ArgMethod_13 = (MR_hl_field(MR_mktag(0), VarModePos0_5, (MR_Integer) 3));
    MR_Integer Var_14;

    {
      VarModePos_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarModePos_8, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), VarModePos_8, 1) = ((MR_Box) (Mode_11));
      MR_hl_field(MR_mktag(0), VarModePos_8, 2) = ((MR_Box) (Offset0_2));
      MR_hl_field(MR_mktag(0), VarModePos_8, 3) = ArgMethod_13;
    }
    Var_14 = (MR_Integer) ((MR_Unsigned) Offset0_2 + (MR_Unsigned) 1);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_108_108_111_99_97_116_101_95_115_108_111_116_95_110_117_109_98_101_114_115_95_95_91_49_93_95_48_3_p_0(VarModes_6, Var_14, &VarModePoss_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarModePos_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarModePoss_9));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_111_106_101_99_116_95_118_97_114_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return Var_3;
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_114_101_115_116_111_114_101_95_103_111_97_108_95_95_91_49_93_95_48_10_p_0(
  MR_Word NumberedOutputVars_11,
  MR_Word OrigInstMapDelta_12,
  MR_Word TipVar_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_VarTypes_0_36,
  MR_Word * STATE_VARIABLE_VarTypes_37,
  MR_Word TableInfo_17,
  MR_Word * Goal_18)
{
  if ((NumberedOutputVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Goal_18 = hlds__make_goal__true_goal_0_f_0();
    *STATE_VARIABLE_VarSet_35 = STATE_VARIABLE_VarSet_0_34;
    *STATE_VARIABLE_VarTypes_37 = STATE_VARIABLE_VarTypes_0_36;
  }
  else
  {
    MR_String DebugArgStr_21;
    MR_Word ModuleInfo_22;
    MR_Word RestoreInstMapDeltaSrc_23;
    MR_Word RestoreArgs_24;
    MR_String RestoreCodeStr_25;
    MR_Word Arg_27;
    MR_Word Args_28;
    MR_String GetRestoreCodeStr_32;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_54;
    MR_String Var_55;
    MR_String Var_57;
    MR_String Var_58;
    MR_String Var_60;
    MR_String Var_62;
    MR_Word Var_65;
    MR_String Var_66;
    MR_Word Var_68;
    MR_Word ModuleInfo_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_17, (MR_Integer) 0))));
    MR_Word Globals_75;
    MR_Word TableDebug_76;
    MR_Word TB_81;
    MR_Word Var_82;
    MR_Word Var_84;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_74, &Globals_75);
    libs__globals__lookup_bool_option_3_p_0(Globals_75, (MR_Integer) 322, &TableDebug_76);
    switch (TableDebug_76) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugArgStr_21 = (MR_String) "MR_FALSE";
        break;
      case (MR_Integer) 1:
        DebugArgStr_21 = (MR_String) "MR_TRUE";
        break;
    }
    ModuleInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_17, (MR_Integer) 0))));
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_11_p_0(NumberedOutputVars_11, OrigInstMapDelta_12, DebugArgStr_21, ModuleInfo_22, STATE_VARIABLE_VarSet_0_34, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_VarTypes_0_36, STATE_VARIABLE_VarTypes_37, &RestoreInstMapDeltaSrc_23, &RestoreArgs_24, &RestoreCodeStr_25);
    Var_42 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) ((MR_String) "base"));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
    }
    TB_81 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (TB_81));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_String) "ml_trie_node"));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_82, (MR_Word) ((MR_Unsigned) 0U), &Var_43);
    {
      Arg_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_27, 0) = ((MR_Box) (TipVar_13));
      MR_hl_field(MR_mktag(0), Arg_27, 1) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Arg_27, 2) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Arg_27, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Args_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_28, 0) = ((MR_Box) (Arg_27));
      MR_hl_field(MR_mktag(1), Args_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ");\n", RestoreCodeStr_25);
    Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "answerblock", Var_62);
    Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_60);
    Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "base", Var_58);
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_57);
    Var_54 = mercury__string__f_43_43_2_f_0(DebugArgStr_21, Var_55);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_54);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_get_answer_block", Var_52);
    GetRestoreCodeStr_32 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_51);
    Var_65 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_AnswerBlock answerblock;\n", GetRestoreCodeStr_32);
    Var_68 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(RestoreInstMapDeltaSrc_23);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_get_answer_block_shortcut", (MR_Integer) 0, Var_65, Args_28, RestoreArgs_24, Var_66, (MR_Integer) 1, Var_68, ModuleInfo_22, Context_14, Goal_18);
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OrigInstmapDelta_2,
  MR_String DebugArgStr_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_VarSet_0_5,
  MR_Word * STATE_VARIABLE_VarSet_6,
  MR_Word STATE_VARIABLE_VarTypes_0_7,
  MR_Word * STATE_VARIABLE_VarTypes_8,
  MR_Word * HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_String * HeadVar__11_11)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__11_11 = (MR_String) "";
    *STATE_VARIABLE_VarTypes_8 = STATE_VARIABLE_VarTypes_0_7;
    *STATE_VARIABLE_VarSet_6 = STATE_VARIABLE_VarSet_0_5;
  }
  else
  {
    MR_Word NumberedVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word NumberedRest_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarInst_28;
    MR_Word VarInsts_29;
    MR_Word Arg_30;
    MR_Word Args_31;
    MR_String CodeStr_32;
    MR_String RestCodeStr_33;
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NumberedVar_21, (MR_Integer) 0))));
    MR_Integer Offset_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NumberedVar_21, (MR_Integer) 2))));
    MR_Word VarType_38;
    MR_Word CtorCat_39;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_7, Var_34, &VarType_38);
    CtorCat_39 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_4, VarType_38);
    transform_hlds__table_gen__gen_restore_call_for_type_9_p_0(DebugArgStr_3, CtorCat_39, VarType_38, OrigInstmapDelta_2, Var_34, Offset_36, &VarInst_28, &Arg_30, &CodeStr_32);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_114_101_115_116_111_114_101_95_103_111_97_108_115_95_95_91_49_93_95_48_11_p_0(NumberedRest_22, OrigInstmapDelta_2, DebugArgStr_3, ModuleInfo_4, STATE_VARIABLE_VarSet_0_5, STATE_VARIABLE_VarSet_6, STATE_VARIABLE_VarTypes_0_7, STATE_VARIABLE_VarTypes_8, &VarInsts_29, &Args_31, &RestCodeStr_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarInst_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarInsts_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_30));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_31));
    }
    *HeadVar__11_11 = mercury__string__f_43_43_2_f_0(CodeStr_32, RestCodeStr_33);
  }
}

static void MR_CALL 
transform_hlds__table_gen__gen_restore_call_for_type_9_p_0(
  MR_String DebugArgStr_10,
  MR_Word CtorCat_11,
  MR_Word Type_12,
  MR_Word OrigInstmapDelta_13,
  MR_Word Var_14,
  MR_Integer Offset_15,
  MR_Word * HeadVar__7_7,
  MR_Word * Arg_17,
  MR_String * CodeStr_18)
{
  {
    MR_bool succeeded;
    MR_Word Inst_16;
    MR_String Name_19;
    MR_String RestoreMacroName_20;
    MR_Word ArgType_21;
    MR_String Var_25;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_String Var_38;
    MR_String Var_39;
    MR_String Var_41;
    MR_String Var_42;
    MR_String Var_44;
    MR_String Var_46;
    MR_String Var_48;
    MR_String Var_49;
    MR_String Var_50;
    MR_String Var_52;
    MR_Word InstPrime_23;

    Var_25 = mercury__string__int_to_string_1_f_0(Offset_15);
    Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "restore_arg", Var_25);
    succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Type_12);
    if (succeeded)
    {
      RestoreMacroName_20 = (MR_String) "MR_tbl_restore_io_state_answer";
      ArgType_21 = Type_12;
    }
    else
    {
      switch (MR_tag((MR_Word) CtorCat_11)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(CtorCat_11)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorCat_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CtorCat_11, (MR_Integer) 1))) & (MR_Integer) 3);

                succeeded = (Var_63 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
          break;
      }
      if (succeeded)
      {
        MR_Word DummyTVarSet0_65;
        MR_Word DummyTVar_66;
        MR_Word Var_67;

        RestoreMacroName_20 = (MR_String) "MR_tbl_restore_any_answer";
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &DummyTVarSet0_65);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &DummyTVar_66, DummyTVarSet0_65, &Var_67);
        {
          ArgType_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgType_21, 0) = ((MR_Box) (DummyTVar_66));
          MR_hl_field(MR_mktag(0), ArgType_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_String CatString_22;
        MR_String Var_28;

        transform_hlds__table_gen__type_save_category_2_p_0(CtorCat_11, &CatString_22);
        Var_28 = mercury__string__f_43_43_2_f_0(CatString_22, (MR_String) "_answer");
        RestoreMacroName_20 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_restore_", Var_28);
        ArgType_21 = Type_12;
      }
    }
    succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(OrigInstmapDelta_13, Var_14, &InstPrime_23);
    if (succeeded)
      Inst_16 = InstPrime_23;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_restore_call_for_type\'/9", (MR_String) "no inst");
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Inst_16));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Inst_16));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Name_19));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Arg_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgType_21));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_49 = mercury__string__int_to_string_1_f_0(Offset_15);
    Var_52 = mercury__string__f_43_43_2_f_0(Name_19, (MR_String) ");\n");
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_52);
    Var_48 = mercury__string__f_43_43_2_f_0(Var_49, Var_50);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_48);
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "answerblock", Var_46);
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_44);
    Var_41 = mercury__string__f_43_43_2_f_0(DebugArgStr_10, Var_42);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_41);
    Var_38 = mercury__string__f_43_43_2_f_0(RestoreMacroName_20, Var_39);
    *CodeStr_18 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_38);
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_109_101_109_111_95_115_97_118_101_95_103_111_97_108_95_95_91_49_93_95_48_11_p_0(
  MR_Word NumberedSaveVars_12,
  MR_Word TableTipVar_13,
  MR_Integer BlockSize_14,
  MR_Word Context_15,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_VarTypes_0_36,
  MR_Word * STATE_VARIABLE_VarTypes_37,
  MR_Word STATE_VARIABLE_TableInfo_0_38,
  MR_Word * STATE_VARIABLE_TableInfo_39,
  MR_Word * Goals_19)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_38, (MR_Integer) 0))));
    MR_Word TableArg_22;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word TB_80;
    MR_Word Var_81;
    MR_Word Var_83;

    Var_42 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) ((MR_String) "cur_node"));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
    }
    TB_80 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (TB_80));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_String) "ml_trie_node"));
    }
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_81, (MR_Word) ((MR_Unsigned) 0U), &Var_43);
    {
      TableArg_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TableArg_22, 0) = ((MR_Box) (TableTipVar_13));
      MR_hl_field(MR_mktag(0), TableArg_22, 1) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), TableArg_22, 2) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), TableArg_22, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    succeeded = (BlockSize_14 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word SaveArgs_25;
      MR_Word SavePrefixGoals_26;
      MR_String SaveDeclCode_27;
      MR_String SaveCode_28;
      MR_Word SaveGoal_29;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_String Var_52;
      MR_Word Var_54;
      MR_Word Var_56;

      transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_15_p_0(NumberedSaveVars_12, (MR_String) "cur_node", BlockSize_14, (MR_String) "MR_tbl_memo_create_answer_block", Context_15, STATE_VARIABLE_VarSet_0_34, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_VarTypes_0_36, STATE_VARIABLE_VarTypes_37, STATE_VARIABLE_TableInfo_0_38, STATE_VARIABLE_TableInfo_39, &SaveArgs_25, &SavePrefixGoals_26, &SaveDeclCode_27, &SaveCode_28);
      Var_50 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (TableArg_22));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_52 = mercury__string__f_43_43_2_f_0(SaveDeclCode_27, SaveCode_28);
      Var_54 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
      transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_fill_answer_block_shortcut", (MR_Integer) 0, Var_50, Var_51, SaveArgs_25, Var_52, (MR_Integer) 2, Var_54, ModuleInfo_20, Context_15, &SaveGoal_29);
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (SaveGoal_29));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *Goals_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SavePrefixGoals_26, Var_56);
    }
    else
    {
      MR_String DebugArgStr_30;
      MR_String MarkAsSucceededCode_33;
      MR_String Var_58;
      MR_String Var_60;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word SaveGoal_74;
      MR_Word ModuleInfo_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_38, (MR_Integer) 0))));
      MR_Word Globals_89;
      MR_Word TableDebug_90;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_88, &Globals_89);
      libs__globals__lookup_bool_option_3_p_0(Globals_89, (MR_Integer) 322, &TableDebug_90);
      switch (TableDebug_90) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          DebugArgStr_30 = (MR_String) "MR_FALSE";
          break;
        case (MR_Integer) 1:
          DebugArgStr_30 = (MR_String) "MR_TRUE";
          break;
      }
      Var_60 = mercury__string__f_43_43_2_f_0(DebugArgStr_30, (MR_String) ", cur_node);");
      Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_60);
      MarkAsSucceededCode_33 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_memo_mark_as_succeeded", Var_58);
      Var_67 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (TableArg_22));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_71 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
      transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_memo_mark_as_succeeded", (MR_Integer) 0, Var_67, Var_68, (MR_Word) ((MR_Unsigned) 0U), MarkAsSucceededCode_33, (MR_Integer) 2, Var_71, ModuleInfo_20, Context_15, &SaveGoal_74);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_19 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SaveGoal_74));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_TableInfo_39 = STATE_VARIABLE_TableInfo_0_38;
      *STATE_VARIABLE_VarTypes_37 = STATE_VARIABLE_VarTypes_0_36;
      *STATE_VARIABLE_VarSet_35 = STATE_VARIABLE_VarSet_0_34;
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_97_108_108_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_15_p_0(
  MR_Word NumberedSaveVars_16,
  MR_String BaseVarName_17,
  MR_Integer BlockSize_18,
  MR_String CreateMacroName_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34,
  MR_Word STATE_VARIABLE_TableInfo_0_35,
  MR_Word * STATE_VARIABLE_TableInfo_36,
  MR_Word * SaveArgs_24,
  MR_Word * SavePrefixGoals_25,
  MR_String * SaveDeclCodeStr_26,
  MR_String * CreateSaveCodeStr_27)
{
  {
    MR_String DebugArgStr_28;
    MR_String SaveCodeStr_29;
    MR_String CreateCodeStr_30;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_48;
    MR_String Var_49;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_54;
    MR_String Var_55;
    MR_Word ModuleInfo_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_35, (MR_Integer) 0))));
    MR_Word Globals_65;
    MR_Word TableDebug_66;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_64, &Globals_65);
    libs__globals__lookup_bool_option_3_p_0(Globals_65, (MR_Integer) 322, &TableDebug_66);
    switch (TableDebug_66) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugArgStr_28 = (MR_String) "MR_FALSE";
        break;
      case (MR_Integer) 1:
        DebugArgStr_28 = (MR_String) "MR_TRUE";
        break;
    }
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_12_p_0(NumberedSaveVars_16, DebugArgStr_28, Context_20, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_VarTypes_0_33, STATE_VARIABLE_VarTypes_34, STATE_VARIABLE_TableInfo_0_35, STATE_VARIABLE_TableInfo_36, SaveArgs_24, SavePrefixGoals_25, &SaveCodeStr_29);
    *SaveDeclCodeStr_26 = (MR_String) "\tMR_AnswerBlock answerblock;\n";
    Var_55 = mercury__string__int_to_string_1_f_0(BlockSize_18);
    Var_54 = mercury__string__f_43_43_2_f_0(Var_55, (MR_String) ", answerblock);\n");
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_54);
    Var_51 = mercury__string__f_43_43_2_f_0(BaseVarName_17, Var_52);
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_51);
    Var_48 = mercury__string__f_43_43_2_f_0(DebugArgStr_28, Var_49);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_48);
    Var_45 = mercury__string__f_43_43_2_f_0(CreateMacroName_19, Var_46);
    CreateCodeStr_30 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_45);
    *CreateSaveCodeStr_27 = mercury__string__f_43_43_2_f_0(CreateCodeStr_30, SaveCodeStr_29);
  }
}

static void MR_CALL 
transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_12_p_0(
  MR_Word HeadVar__1_1,
  MR_String DebugArgStr_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_VarSet_0_4,
  MR_Word * STATE_VARIABLE_VarSet_5,
  MR_Word STATE_VARIABLE_VarTypes_0_6,
  MR_Word * STATE_VARIABLE_VarTypes_7,
  MR_Word STATE_VARIABLE_TableInfo_0_8,
  MR_Word * STATE_VARIABLE_TableInfo_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_String * HeadVar__12_12)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__12_12 = (MR_String) "";
    *STATE_VARIABLE_TableInfo_9 = STATE_VARIABLE_TableInfo_0_8;
    *STATE_VARIABLE_VarTypes_7 = STATE_VARIABLE_VarTypes_0_6;
    *STATE_VARIABLE_VarSet_5 = STATE_VARIABLE_VarSet_0_4;
  }
  else
  {
    MR_Word NumberedVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word NumberedRest_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Args_31;
    MR_Word RestArgs_32;
    MR_Word PrefixGoals_33;
    MR_Word RestPrefixGoals_34;
    MR_String CodeStr_35;
    MR_String RestCodeStr_36;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NumberedVar_24, (MR_Integer) 0))));
    MR_Integer Offset_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NumberedVar_24, (MR_Integer) 2))));
    MR_Word ModuleInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_8, (MR_Integer) 0))));
    MR_Word VarType_42;
    MR_Word CtorCat_43;
    MR_Word STATE_VARIABLE_VarSet_50_50;
    MR_Word STATE_VARIABLE_VarTypes_51_51;
    MR_Word STATE_VARIABLE_TableInfo_52_52;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_6, Var_37, &VarType_42);
    CtorCat_43 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_41, VarType_42);
    transform_hlds__table_gen__gen_save_call_for_type_15_p_0(CtorCat_43, VarType_42, Var_37, Offset_39, DebugArgStr_2, Context_3, STATE_VARIABLE_VarSet_0_4, &STATE_VARIABLE_VarSet_50_50, STATE_VARIABLE_VarTypes_0_6, &STATE_VARIABLE_VarTypes_51_51, STATE_VARIABLE_TableInfo_0_8, &STATE_VARIABLE_TableInfo_52_52, &Args_31, &PrefixGoals_33, &CodeStr_35);
    transform_hlds__table_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_115_97_118_101_95_103_111_97_108_115_95_95_91_49_93_95_48_12_p_0(NumberedRest_25, DebugArgStr_2, Context_3, STATE_VARIABLE_VarSet_50_50, STATE_VARIABLE_VarSet_5, STATE_VARIABLE_VarTypes_51_51, STATE_VARIABLE_VarTypes_7, STATE_VARIABLE_TableInfo_52_52, STATE_VARIABLE_TableInfo_9, &RestArgs_32, &RestPrefixGoals_34, &RestCodeStr_36);
    *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_31, RestArgs_32);
    *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrefixGoals_33, RestPrefixGoals_34);
    *HeadVar__12_12 = mercury__string__f_43_43_2_f_0(CodeStr_35, RestCodeStr_36);
  }
}

static void MR_CALL 
transform_hlds__table_gen__gen_save_call_for_type_15_p_0(
  MR_Word CtorCat_16,
  MR_Word Type_17,
  MR_Word Var_18,
  MR_Integer Offset_19,
  MR_String DebugArgStr_20,
  MR_Word Context_21,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_VarTypes_0_39,
  MR_Word * STATE_VARIABLE_VarTypes_40,
  MR_Word STATE_VARIABLE_TableInfo_0_41,
  MR_Word * STATE_VARIABLE_TableInfo_42,
  MR_Word * Args_25,
  MR_Word * PrefixGoals_26,
  MR_String * CodeStr_27)
{
  {
    MR_bool succeeded;
    MR_String Name_28;
    MR_Word ForeignArg_29;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    Name_28 = transform_hlds__table_gen__arg_name_1_f_0(Offset_19);
    Var_45 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Name_28));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
    }
    {
      ForeignArg_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ForeignArg_29, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), ForeignArg_29, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), ForeignArg_29, 2) = ((MR_Box) (Type_17));
      MR_hl_field(MR_mktag(0), ForeignArg_29, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Type_17);
    if (succeeded)
    {
      MR_String Var_49;
      MR_String Var_50;
      MR_String Var_52;
      MR_String Var_53;
      MR_String Var_55;
      MR_String Var_56;
      MR_String Var_57;
      MR_String Var_59;
      MR_String Var_60;
      MR_String Var_61;
      MR_String Var_63;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Args_25 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_29));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *PrefixGoals_26 = (MR_Word) ((MR_Unsigned) 0U);
      Var_56 = transform_hlds__table_gen__answer_block_name_0_f_0();
      Var_60 = mercury__string__int_to_string_1_f_0(Offset_19);
      Var_63 = mercury__string__f_43_43_2_f_0(Name_28, (MR_String) ");\n");
      Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_63);
      Var_59 = mercury__string__f_43_43_2_f_0(Var_60, Var_61);
      Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_59);
      Var_55 = mercury__string__f_43_43_2_f_0(Var_56, Var_57);
      Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_55);
      Var_52 = mercury__string__f_43_43_2_f_0(DebugArgStr_20, Var_53);
      Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_52);
      Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_save_io_state_answer", Var_50);
      *CodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_49);
      *STATE_VARIABLE_TableInfo_42 = STATE_VARIABLE_TableInfo_0_41;
      *STATE_VARIABLE_VarTypes_40 = STATE_VARIABLE_VarTypes_0_39;
      *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_0_37;
    }
    else
    {
      MR_Word Var_65;

      Var_65 = transform_hlds__table_gen__builtin_type_1_f_0(CtorCat_16);
      succeeded = (Var_65 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word GenericForeignArg_31;
        MR_Word TypeInfoVar_32;
        MR_String TypeInfoName_33;
        MR_Word TypeInfoType_34;
        MR_Word TypeInfoForeignArg_35;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_String Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_80;
        MR_String Var_83;
        MR_String Var_84;
        MR_String Var_86;
        MR_String Var_87;
        MR_String Var_89;
        MR_String Var_90;
        MR_String Var_91;
        MR_String Var_93;
        MR_String Var_94;
        MR_String Var_95;
        MR_String Var_97;
        MR_String Var_98;
        MR_String Var_100;

        Var_68 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Name_28));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        }
        Var_69 = transform_hlds__table_gen__dummy_type_var_0_f_0();
        {
          GenericForeignArg_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), GenericForeignArg_31, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(0), GenericForeignArg_31, 1) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), GenericForeignArg_31, 2) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), GenericForeignArg_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        transform_hlds__table_gen__table_gen_make_type_info_var_10_p_0(Type_17, Context_21, STATE_VARIABLE_VarSet_0_37, STATE_VARIABLE_VarSet_38, STATE_VARIABLE_VarTypes_0_39, STATE_VARIABLE_VarTypes_40, STATE_VARIABLE_TableInfo_0_41, STATE_VARIABLE_TableInfo_42, &TypeInfoVar_32, PrefixGoals_26);
        Var_75 = mercury__string__int_to_string_1_f_0(Offset_19);
        TypeInfoName_33 = mercury__string__f_43_43_2_f_0((MR_String) "save_arg_typeinfo", Var_75);
        hlds__vartypes__lookup_var_type_3_p_0(*STATE_VARIABLE_VarTypes_40, TypeInfoVar_32, &TypeInfoType_34);
        Var_78 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (TypeInfoName_33));
          MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
        }
        {
          TypeInfoForeignArg_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfoForeignArg_35, 0) = ((MR_Box) (TypeInfoVar_32));
          MR_hl_field(MR_mktag(0), TypeInfoForeignArg_35, 1) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), TypeInfoForeignArg_35, 2) = ((MR_Box) (TypeInfoType_34));
          MR_hl_field(MR_mktag(0), TypeInfoForeignArg_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (TypeInfoForeignArg_35));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Args_25 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GenericForeignArg_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_80));
        }
        Var_90 = transform_hlds__table_gen__answer_block_name_0_f_0();
        Var_94 = mercury__string__int_to_string_1_f_0(Offset_19);
        Var_100 = mercury__string__f_43_43_2_f_0(Name_28, (MR_String) ");\n");
        Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_100);
        Var_97 = mercury__string__f_43_43_2_f_0(TypeInfoName_33, Var_98);
        Var_95 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_97);
        Var_93 = mercury__string__f_43_43_2_f_0(Var_94, Var_95);
        Var_91 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_93);
        Var_89 = mercury__string__f_43_43_2_f_0(Var_90, Var_91);
        Var_87 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_89);
        Var_86 = mercury__string__f_43_43_2_f_0(DebugArgStr_20, Var_87);
        Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_86);
        Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_save_any_answer", Var_84);
        *CodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_83);
      }
      else
      {
        MR_String CatString_36;
        MR_String Var_103;
        MR_String Var_107;
        MR_String Var_108;
        MR_String Var_110;
        MR_String Var_111;
        MR_String Var_113;
        MR_String Var_114;
        MR_String Var_115;
        MR_String Var_117;
        MR_String Var_118;
        MR_String Var_119;
        MR_String Var_121;
        MR_String SaveMacroName_124;

        transform_hlds__table_gen__type_save_category_2_p_0(CtorCat_16, &CatString_36);
        Var_103 = mercury__string__f_43_43_2_f_0(CatString_36, (MR_String) "_answer");
        SaveMacroName_124 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_save_", Var_103);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Args_25 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *PrefixGoals_26 = (MR_Word) ((MR_Unsigned) 0U);
        Var_114 = transform_hlds__table_gen__answer_block_name_0_f_0();
        Var_118 = mercury__string__int_to_string_1_f_0(Offset_19);
        Var_121 = mercury__string__f_43_43_2_f_0(Name_28, (MR_String) ");\n");
        Var_119 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_121);
        Var_117 = mercury__string__f_43_43_2_f_0(Var_118, Var_119);
        Var_115 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_117);
        Var_113 = mercury__string__f_43_43_2_f_0(Var_114, Var_115);
        Var_111 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_113);
        Var_110 = mercury__string__f_43_43_2_f_0(DebugArgStr_20, Var_111);
        Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_110);
        Var_107 = mercury__string__f_43_43_2_f_0(SaveMacroName_124, Var_108);
        *CodeStr_27 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_107);
        *STATE_VARIABLE_TableInfo_42 = STATE_VARIABLE_TableInfo_0_41;
        *STATE_VARIABLE_VarTypes_40 = STATE_VARIABLE_VarTypes_0_39;
        *STATE_VARIABLE_VarSet_38 = STATE_VARIABLE_VarSet_0_37;
      }
    }
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__answer_block_name_0_f_0(void)
{
  {
    return (MR_String) "answerblock";
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__dummy_type_var_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word DummyTVarSet0_3;
    MR_Word DummyTVar_4;
    MR_Word Var_5;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &DummyTVarSet0_3);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &DummyTVar_4, DummyTVarSet0_3, &Var_5);
    {
      Type_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_2, 0) = ((MR_Box) (DummyTVar_4));
      MR_hl_field(MR_mktag(0), Type_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return Type_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__type_save_category_2_p_0(
  MR_Word CtorCat_3,
  MR_String * Name_4)
{
  switch (MR_tag((MR_Word) CtorCat_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Name_4 = (MR_String) "pred";
          break;
        case (MR_Integer) 1:
          *Name_4 = (MR_String) "any";
          break;
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          *Name_4 = (MR_String) "any";
          break;
        case (MR_Integer) 4:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
              return;
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Var_49)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_49)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *Name_4 = (MR_String) "float";
                break;
              case (MR_Integer) 1:
                *Name_4 = (MR_String) "char";
                break;
              case (MR_Integer) 2:
                *Name_4 = (MR_String) "string";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))) & (MR_Integer) 15);

              *Name_4 = ((&transform_hlds__table_gen_vector_common_6[0 + Var_52]))->transform_hlds__table_gen__vector_common_type_6_0__vct_6_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CtorCat_3, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_50) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "tabling and foreign enumerations NYI.");
                return;
              }
            }
            break;
          case (MR_Integer) 0:
            *Name_4 = (MR_String) "enum";
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorCat_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CtorCat_3, (MR_Integer) 1))) & (MR_Integer) 3);

            switch (Var_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
                    return;
                  }
                }
                break;
              case (MR_Integer) 0:
                *Name_4 = (MR_String) "any";
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.type_save_category\'/2", (MR_String) "unexpected category");
                    return;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          *Name_4 = (MR_String) "any";
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__builtin_type_1_f_0(
  MR_Word CtorCat_3)
{
  {
    MR_Word Builtin_4;

    switch (MR_tag((MR_Word) CtorCat_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Builtin_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            Builtin_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Builtin_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            Builtin_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            Builtin_4 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        Builtin_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        Builtin_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorCat_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CtorCat_3, (MR_Integer) 1))) & (MR_Integer) 3);

              Builtin_4 = ((&transform_hlds__table_gen_vector_common_5[0 + Var_12]))->transform_hlds__table_gen__vector_common_type_5_0__vct_5_f_0;
            }
            break;
          case (MR_Integer) 1:
            Builtin_4 = (MR_Integer) 0;
            break;
        }
        break;
    }
    return Builtin_4;
  }
}

static void MR_CALL 
transform_hlds__table_gen__allocate_plain_slot_numbers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Offset0_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_5;
    MR_Word Mode_6;
    MR_Word VarModes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word VarModePos_9;
    MR_Word VarModePoss_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Var_13;

    Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
    Mode_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    {
      VarModePos_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarModePos_9, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), VarModePos_9, 1) = ((MR_Box) (Mode_6));
      MR_hl_field(MR_mktag(0), VarModePos_9, 2) = ((MR_Box) (Offset0_2));
      MR_hl_field(MR_mktag(0), VarModePos_9, 3) = NULL;
    }
    Var_13 = (MR_Integer) ((MR_Unsigned) Offset0_2 + (MR_Unsigned) 1);
    transform_hlds__table_gen__allocate_plain_slot_numbers_3_p_0(VarModes_7, Var_13, &VarModePoss_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarModePos_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarModePoss_10));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__create_instmap_delta_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * IMD_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *IMD_2 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  else
  {
    MR_Word Goal_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Rest_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
    MR_Word IMD0_9;
    MR_Word IMD1_10;

    IMD0_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_8);
    transform_hlds__table_gen__create_instmap_delta_2_p_0(Rest_5, &IMD1_10);
    hlds__instmap__instmap_delta_apply_instmap_delta_4_p_0(IMD0_9, IMD1_10, (MR_Integer) 2, IMD_2);
  }
}

static void MR_CALL 
transform_hlds__table_gen__clone_proc_and_create_call_5_p_0(
  MR_Word PredInfo_6,
  MR_Integer ProcId_7,
  MR_Word * CallExpr_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41)
{
  {
    MR_Word ProcInfo_10;
    MR_Word ProcContext_11;
    MR_Word ProcVarSet_12;
    MR_Word ProcVarTypes_13;
    MR_Word ProcHeadVars_14;
    MR_Word ProcInstVarSet_15;
    MR_Word ProcHeadModes_16;
    MR_Word ProcDetism_17;
    MR_Word ProcGoal_18;
    MR_Word ProcRttiVarMaps_19;
    MR_Word HasParallelConj_20;
    MR_Word VarNameRemap_21;
    MR_Word NewProcInfo_23;
    MR_Word ModuleName_24;
    MR_String OrigPredName_25;
    MR_Word PredOrFunc_26;
    MR_Word PredContext_27;
    MR_Word NewPredName_28;
    MR_Word PredArgTypes_29;
    MR_Word PredTypeVarSet_30;
    MR_Word PredExistQVars_31;
    MR_Word PredClassContext_32;
    MR_Word PredAssertions_33;
    MR_Word Markers_34;
    MR_Integer NewProcId_35;
    MR_Word NewPredInfo_36;
    MR_Word PredicateTable0_37;
    MR_Word NewPredId_38;
    MR_Word PredicateTable_39;
    MR_String Var_44;

    hlds__hlds_pred__pred_info_proc_info_3_p_0(PredInfo_6, ProcId_7, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_10, &ProcContext_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &ProcVarSet_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &ProcVarTypes_13);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &ProcHeadVars_14);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_10, &ProcInstVarSet_15);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &ProcHeadModes_16);
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_10, &ProcDetism_17);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_10, &ProcGoal_18);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_10, &ProcRttiVarMaps_19);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_10, &HasParallelConj_20);
    hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(ProcInfo_10, &VarNameRemap_21);
    hlds__hlds_pred__proc_info_create_15_p_0(ProcContext_11, (MR_Integer) -1, ProcVarSet_12, ProcVarTypes_13, ProcHeadVars_14, ProcInstVarSet_15, ProcHeadModes_16, (MR_Integer) 2, ProcDetism_17, ProcGoal_18, ProcRttiVarMaps_19, (MR_Integer) 1, HasParallelConj_20, VarNameRemap_21, &NewProcInfo_23);
    ModuleName_24 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
    OrigPredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
    PredOrFunc_26 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_6, &PredContext_27);
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "OutlinedForIOTablingFrom_", OrigPredName_25);
    {
      NewPredName_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NewPredName_28, 0) = ((MR_Box) (ModuleName_24));
      MR_hl_field(MR_mktag(1), NewPredName_28, 1) = ((MR_Box) (Var_44));
    }
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_6, &PredArgTypes_29);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &PredTypeVarSet_30);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_6, &PredExistQVars_31);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_6, &PredClassContext_32);
    hlds__hlds_pred__pred_info_get_assertions_2_p_0(PredInfo_6, &PredAssertions_33);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_6, &Markers_34);
    hlds__hlds_pred__pred_info_create_16_p_0(ModuleName_24, NewPredName_28, PredOrFunc_26, PredContext_27, (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__table_gen_scalar_common_1[14])), (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Markers_34, PredArgTypes_29, PredTypeVarSet_30, PredExistQVars_31, PredClassContext_32, PredAssertions_33, VarNameRemap_21, NewProcInfo_23, &NewProcId_35, &NewPredInfo_36);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &PredicateTable0_37);
    hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_36, &NewPredId_38, PredicateTable0_37, &PredicateTable_39);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_39, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *CallExpr_8 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (NewPredId_38));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (NewProcId_35));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ProcHeadVars_14));
      MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (NewPredName_28));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__create_new_loop_goal_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_212;

    conv0_HeadVar__2_212 = transform_hlds__table_gen__IntroducedFrom__func__create_new_loop_goal__791__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_212));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__create_new_loop_goal_16_p_0(
  MR_Word OrigGoal_17,
  MR_Word Statistics_18,
  MR_Word PredId_19,
  MR_Integer ProcId_20,
  MR_Word HeadVars_21,
  MR_Word NumberedInputVars_22,
  MR_Word NumberedOutputVars_23,
  MR_Word STATE_VARIABLE_VarSet_0_87,
  MR_Word * STATE_VARIABLE_VarSet_88,
  MR_Word STATE_VARIABLE_VarTypes_0_89,
  MR_Word * STATE_VARIABLE_VarTypes_90,
  MR_Word STATE_VARIABLE_TableInfo_0_91,
  MR_Word * STATE_VARIABLE_TableInfo_92,
  MR_Word * TableTipVar_27,
  MR_Word * Goal_28,
  MR_Word * Steps_29)
{
  {
    MR_Word OrigNonLocals_30;
    MR_Word OrigGoalInfo_32;
    MR_Word OrigInstMapDelta_33;
    MR_Word Context_34;
    MR_Word ModuleInfo_35;
    MR_Word StatusVar_36;
    MR_Word LookUpGoal_37;
    MR_Word ActiveGoal_38;
    MR_Word TableTipArg_39;
    MR_String DebugArgStr_46;
    MR_String MarkInactiveCode_47;
    MR_String MarkInactiveFailCode_48;
    MR_String MarkActiveFailCode_49;
    MR_Word MarkInactiveGoal_50;
    MR_Word MarkInactiveFailGoal_51;
    MR_Word MarkActiveFailGoal_52;
    MR_Word Detism_53;
    MR_Word CodeModel_54;
    MR_Word InactiveNonLocals_55;
    MR_Word OutputVars_56;
    MR_Word InactiveInstmapDelta_57;
    MR_Word InactiveGoalExpr_58;
    MR_Word InactiveGoalInfo_78;
    MR_Word InactiveGoal_79;
    MR_Word SwitchArms_80;
    MR_Word SwitchExpr_81;
    MR_Word SwitchNonLocals_82;
    MR_Word SwitchGoalInfo_83;
    MR_Word SwitchGoal_84;
    MR_Word GoalExpr_85;
    MR_Word GoalInfo_86;
    MR_Word Var_93;
    MR_Word STATE_VARIABLE_VarSet_96_96;
    MR_Word STATE_VARIABLE_VarTypes_97_97;
    MR_String Var_99;
    MR_Word STATE_VARIABLE_VarSet_100_100;
    MR_Word STATE_VARIABLE_VarTypes_101_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_String Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_String Var_109;
    MR_String Var_110;
    MR_String Var_112;
    MR_String Var_113;
    MR_String Var_115;
    MR_String Var_116;
    MR_String Var_119;
    MR_String Var_120;
    MR_String Var_122;
    MR_String Var_123;
    MR_String Var_125;
    MR_String Var_126;
    MR_String Var_129;
    MR_String Var_130;
    MR_String Var_132;
    MR_String Var_133;
    MR_String Var_135;
    MR_String Var_136;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_143;
    MR_Word Var_146;
    MR_Word Var_150;
    MR_Word Var_153;
    MR_Word Var_157;
    MR_Word Var_159;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_193;
    MR_Word Var_197;
    MR_Word Var_198;
    MR_Word Var_202;
    MR_Word Var_203;

    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_21, &OrigNonLocals_30);
    OrigGoalInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigGoal_17, (MR_Integer) 1))));
    OrigInstMapDelta_33 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_32);
    Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_32);
    ModuleInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_91, (MR_Integer) 0))));
    Var_93 = transform_hlds__table_gen__loop_status_type_0_f_0();
    transform_hlds__table_gen__generate_simple_call_table_lookup_goal_18_p_0(Var_93, (MR_String) "table_loop_setup_shortcut", (MR_String) "MR_tbl_loop_setup", NumberedInputVars_22, PredId_19, ProcId_20, Statistics_18, Context_34, STATE_VARIABLE_VarSet_0_87, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_VarTypes_0_89, &STATE_VARIABLE_VarTypes_97_97, STATE_VARIABLE_TableInfo_0_91, STATE_VARIABLE_TableInfo_92, TableTipVar_27, &StatusVar_36, &LookUpGoal_37, Steps_29);
    Var_99 = transform_hlds__table_gen__infinite_recursion_msg_0_f_0();
    transform_hlds__table_gen__generate_error_goal_8_p_0(*STATE_VARIABLE_TableInfo_92, Context_34, Var_99, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_100_100, STATE_VARIABLE_VarTypes_97_97, &STATE_VARIABLE_VarTypes_101_101, &ActiveGoal_38);
    Var_104 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_105 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
    }
    Var_106 = transform_hlds__table_gen__trie_node_type_0_f_0();
    {
      TableTipArg_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TableTipArg_39, 0) = ((MR_Box) (*TableTipVar_27));
      MR_hl_field(MR_mktag(0), TableTipArg_39, 1) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), TableTipArg_39, 2) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), TableTipArg_39, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    DebugArgStr_46 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_92);
    Var_116 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_115 = mercury__string__f_43_43_2_f_0(Var_116, (MR_String) ");\n");
    Var_113 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_115);
    Var_112 = mercury__string__f_43_43_2_f_0(DebugArgStr_46, Var_113);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_112);
    Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_loop_mark_as_inactive", Var_110);
    MarkInactiveCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_109);
    Var_126 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_125 = mercury__string__f_43_43_2_f_0(Var_126, (MR_String) ");\n");
    Var_123 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_125);
    Var_122 = mercury__string__f_43_43_2_f_0(DebugArgStr_46, Var_123);
    Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_122);
    Var_119 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_loop_mark_as_inactive_and_fail", Var_120);
    MarkInactiveFailCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_119);
    Var_136 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_135 = mercury__string__f_43_43_2_f_0(Var_136, (MR_String) ");\n");
    Var_133 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_135);
    Var_132 = mercury__string__f_43_43_2_f_0(DebugArgStr_46, Var_133);
    Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_132);
    Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_loop_mark_as_active_and_fail", Var_130);
    MarkActiveFailCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_129);
    Var_139 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (TableTipArg_39));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_143 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_loop_mark_as_inactive", (MR_Integer) 0, Var_139, Var_140, (MR_Word) ((MR_Unsigned) 0U), MarkInactiveCode_47, (MR_Integer) 2, Var_143, ModuleInfo_35, Context_34, &MarkInactiveGoal_50);
    Var_146 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_150 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_loop_mark_as_inactive_and_fail", (MR_Integer) 7, Var_146, Var_140, (MR_Word) ((MR_Unsigned) 0U), MarkInactiveFailCode_48, (MR_Integer) 2, Var_150, ModuleInfo_35, Context_34, &MarkInactiveFailGoal_51);
    Var_153 = transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0();
    Var_157 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0((MR_String) "table_loop_mark_as_active_and_fail", (MR_Integer) 7, Var_153, Var_140, (MR_Word) ((MR_Unsigned) 0U), MarkActiveFailCode_49, (MR_Integer) 2, Var_157, ModuleInfo_35, Context_34, &MarkActiveFailGoal_52);
    Detism_53 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(OrigGoalInfo_32);
    hlds__code_model__determinism_to_code_model_2_p_0(Detism_53, &CodeModel_54);
    {
      Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (*TableTipVar_27));
      MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (HeadVars_21));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_159, &InactiveNonLocals_55);
    OutputVars_56 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[5]), NumberedOutputVars_23);
    InactiveInstmapDelta_57 = hlds__instmap__instmap_delta_bind_vars_1_f_0(OutputVars_56);
    switch (CodeModel_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_184;
          MR_Word Var_185;

          {
            Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (MarkInactiveGoal_50));
            MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (OrigGoal_17));
            MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_185));
          }
          {
            InactiveGoalExpr_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 2) = ((MR_Box) (Var_184));
          }
          *STATE_VARIABLE_VarSet_88 = STATE_VARIABLE_VarSet_100_100;
          *STATE_VARIABLE_VarTypes_90 = STATE_VARIABLE_VarTypes_101_101;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word AfterGoalExpr_69;
          MR_Word AfterInstMapDelta_70;
          MR_Word AfterGoalInfo_71;
          MR_Word AfterGoal_72;
          MR_Word FirstGoalExpr_73;
          MR_Word OrigGINonLocals_74;
          MR_Word FirstNonlocals_75;
          MR_Word FirstGoalInfo_76;
          MR_Word FirstGoal_77;
          MR_Word Var_161;
          MR_Word Var_162;
          MR_Word Var_164;
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_171;
          MR_Word Var_172;

          {
            Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (MarkActiveFailGoal_52));
            MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (MarkInactiveGoal_50));
            MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_162));
          }
          {
            AfterGoalExpr_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), AfterGoalExpr_69, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), AfterGoalExpr_69, 1) = ((MR_Box) (Var_161));
          }
          hlds__instmap__instmap_delta_init_reachable_1_p_0(&AfterInstMapDelta_70);
          Var_164 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TableTipVar_27);
          transform_hlds__table_gen__goal_info_init_hide_6_p_0(Var_164, AfterInstMapDelta_70, (MR_Integer) 2, (MR_Integer) 2, Context_34, &AfterGoalInfo_71);
          {
            AfterGoal_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AfterGoal_72, 0) = ((MR_Box) (AfterGoalExpr_69));
            MR_hl_field(MR_mktag(0), AfterGoal_72, 1) = ((MR_Box) (AfterGoalInfo_71));
          }
          {
            Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (AfterGoal_72));
            MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (OrigGoal_17));
            MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_169));
          }
          {
            FirstGoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), FirstGoalExpr_73, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), FirstGoalExpr_73, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), FirstGoalExpr_73, 2) = ((MR_Box) (Var_168));
          }
          OrigGINonLocals_74 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(OrigGoalInfo_32);
          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TableTipVar_27, OrigGINonLocals_74, &FirstNonlocals_75);
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(FirstNonlocals_75, OrigGoalInfo_32, &FirstGoalInfo_76);
          {
            FirstGoal_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FirstGoal_77, 0) = ((MR_Box) (FirstGoalExpr_73));
            MR_hl_field(MR_mktag(0), FirstGoal_77, 1) = ((MR_Box) (FirstGoalInfo_76));
          }
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MarkInactiveFailGoal_51));
            MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (FirstGoal_77));
            MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
          }
          {
            InactiveGoalExpr_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 1) = ((MR_Box) (Var_171));
          }
          *STATE_VARIABLE_VarSet_88 = STATE_VARIABLE_VarSet_100_100;
          *STATE_VARIABLE_VarTypes_90 = STATE_VARIABLE_VarTypes_101_101;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstMapDelta_59;
          MR_Word Unifies_60;
          MR_Word NewVars_61;
          MR_Word Renaming_62;
          MR_Word RenamedOrigGoal_63;
          MR_Word ThenGoalExpr_64;
          MR_Word ThenVars_65;
          MR_Word ThenNonLocals_66;
          MR_Word ThenGoalInfo_67;
          MR_Word ThenGoal_68;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_180;

          InstMapDelta_59 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(OrigGoalInfo_32);
          hlds__goal_util__create_renaming_9_p_0(OutputVars_56, InstMapDelta_59, STATE_VARIABLE_VarSet_100_100, STATE_VARIABLE_VarSet_88, STATE_VARIABLE_VarTypes_101_101, STATE_VARIABLE_VarTypes_90, &Unifies_60, &NewVars_61, &Renaming_62);
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_62, OrigGoal_17, &RenamedOrigGoal_63);
          {
            Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (MarkInactiveGoal_50));
            MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Unifies_60, Var_178);
          {
            ThenGoalExpr_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ThenGoalExpr_64, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ThenGoalExpr_64, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ThenGoalExpr_64, 2) = ((MR_Box) (Var_177));
          }
          {
            Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (*TableTipVar_27));
            MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (OutputVars_56));
          }
          ThenVars_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), Var_180, NewVars_61);
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ThenVars_65, &ThenNonLocals_66);
          transform_hlds__table_gen__goal_info_init_hide_6_p_0(ThenNonLocals_66, InactiveInstmapDelta_57, Detism_53, (MR_Integer) 2, Context_34, &ThenGoalInfo_67);
          {
            ThenGoal_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ThenGoal_68, 0) = ((MR_Box) (ThenGoalExpr_64));
            MR_hl_field(MR_mktag(0), ThenGoal_68, 1) = ((MR_Box) (ThenGoalInfo_67));
          }
          {
            InactiveGoalExpr_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 2) = ((MR_Box) (RenamedOrigGoal_63));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 3) = ((MR_Box) (ThenGoal_68));
            MR_hl_field(MR_mktag(3), InactiveGoalExpr_58, 4) = ((MR_Box) (MarkInactiveFailGoal_51));
          }
        }
        break;
    }
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(InactiveNonLocals_55, InactiveInstmapDelta_57, Detism_53, (MR_Integer) 2, Context_34, &InactiveGoalInfo_78);
    {
      InactiveGoal_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InactiveGoal_79, 0) = ((MR_Box) (InactiveGoalExpr_58));
      MR_hl_field(MR_mktag(0), InactiveGoal_79, 1) = ((MR_Box) (InactiveGoalInfo_78));
    }
    Var_189 = transform_hlds__table_gen__loop_active_cons_id_0_f_0();
    {
      Var_188 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_188, 0) = ((MR_Box) (Var_189));
      MR_hl_field(MR_mktag(0), Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_188, 2) = ((MR_Box) (ActiveGoal_38));
    }
    Var_193 = transform_hlds__table_gen__loop_inactive_cons_id_0_f_0();
    {
      Var_192 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_192, 0) = ((MR_Box) (Var_193));
      MR_hl_field(MR_mktag(0), Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_192, 2) = ((MR_Box) (InactiveGoal_79));
    }
    {
      Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Var_192));
      MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SwitchArms_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SwitchArms_80, 0) = ((MR_Box) (Var_188));
      MR_hl_field(MR_mktag(1), SwitchArms_80, 1) = ((MR_Box) (Var_191));
    }
    {
      SwitchExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SwitchExpr_81, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), SwitchExpr_81, 1) = ((MR_Box) (StatusVar_36));
      MR_hl_field(MR_mktag(3), SwitchExpr_81, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), SwitchExpr_81, 3) = ((MR_Box) (SwitchArms_80));
    }
    {
      Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (*TableTipVar_27));
      MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (StatusVar_36));
      MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_198));
    }
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_197, InactiveNonLocals_55, &SwitchNonLocals_82);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(SwitchNonLocals_82, InactiveInstmapDelta_57, Detism_53, (MR_Integer) 2, Context_34, &SwitchGoalInfo_83);
    {
      SwitchGoal_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SwitchGoal_84, 0) = ((MR_Box) (SwitchExpr_81));
      MR_hl_field(MR_mktag(0), SwitchGoal_84, 1) = ((MR_Box) (SwitchGoalInfo_83));
    }
    {
      Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (SwitchGoal_84));
      MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (LookUpGoal_37));
      MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_203));
    }
    {
      GoalExpr_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_85, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_85, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_85, 2) = ((MR_Box) (Var_202));
    }
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(OrigNonLocals_30, OrigInstMapDelta_33, Detism_53, (MR_Integer) 2, Context_34, &GoalInfo_86);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_85));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_86));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_status_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "loop_status"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_active_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "loop_active"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "loop_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__loop_inactive_cons_id_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word SymName_2;
    MR_Word TypeCtor_3;
    MR_Word Var_5;
    MR_Word TypeModule_8;
    MR_Word TypeSymName_9;

    Var_5 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      SymName_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), SymName_2, 1) = ((MR_Box) ((MR_String) "loop_inactive"));
    }
    TypeModule_8 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      TypeSymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 0) = ((MR_Box) (TypeModule_8));
      MR_hl_field(MR_mktag(1), TypeSymName_9, 1) = ((MR_Box) ((MR_String) "loop_status"));
    }
    {
      TypeCtor_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_3, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(0), TypeCtor_3, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 1) = ((MR_Box) (SymName_2));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__1_1, 3) = ((MR_Box) (TypeCtor_3));
    }
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__tabling_c_attributes_dupl_0_f_0(void)
{
  {
    MR_Word Attrs_2;
    MR_Word Attrs0_3;
    MR_Word Attrs1_4;
    MR_Word Attrs2_5;

    Attrs0_3 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_3, &Attrs1_4);
    parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, Attrs1_4, &Attrs2_5);
    parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[3])), Attrs2_5, &Attrs_2);
    return Attrs_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_error_goal_8_p_0(
  MR_Word TableInfo_9,
  MR_Word Context_10,
  MR_String Msg_11,
  MR_Word STATE_VARIABLE_VarSet_0_30,
  MR_Word * STATE_VARIABLE_VarSet_31,
  MR_Word STATE_VARIABLE_VarTypes_0_32,
  MR_Word * STATE_VARIABLE_VarTypes_33,
  MR_Word * Goal_14)
{
  {
    MR_Word ModuleInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_9, (MR_Integer) 0))));
    MR_Word PredInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_9, (MR_Integer) 1))));
    MR_Word Module_17;
    MR_String Name_18;
    MR_Integer Arity_19;
    MR_Word PredOrFunc_20;
    MR_String PredOrFuncStr_21;
    MR_String NameStr_22;
    MR_String ArityStr_23;
    MR_String Message_24;
    MR_Word MessageStrGoal_25;
    MR_Word MessageVar_26;
    MR_Word CallGoal_27;
    MR_Word GoalExpr_28;
    MR_Word GoalInfo_29;
    MR_Word Var_34;
    MR_String Var_35;
    MR_String Var_37;
    MR_String Var_38;
    MR_String Var_40;
    MR_String Var_41;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word GoalInfo0_72;

    Module_17 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
    Name_18 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_16);
    Arity_19 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_16);
    PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_16);
    PredOrFuncStr_21 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_20);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Module_17));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Name_18));
    }
    NameStr_22 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Var_34);
    mercury__string__int_to_string_2_p_0(Arity_19, &ArityStr_23);
    Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "/", ArityStr_23);
    Var_40 = mercury__string__f_43_43_2_f_0(NameStr_22, Var_41);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_40);
    Var_37 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_21, Var_38);
    Var_35 = mercury__string__f_43_43_2_f_0((MR_String) " in ", Var_37);
    Message_24 = mercury__string__f_43_43_2_f_0(Msg_11, Var_35);
    hlds__make_goal__make_string_const_construction_alloc_8_p_0(Message_24, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[2])), &MessageStrGoal_25, &MessageVar_26, STATE_VARIABLE_VarSet_0_30, STATE_VARIABLE_VarSet_31, STATE_VARIABLE_VarTypes_0_32, STATE_VARIABLE_VarTypes_33);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MessageVar_26));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_51 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    transform_hlds__table_gen__table_generate_call_8_p_0((MR_String) "table_error", (MR_Integer) 6, Var_49, (MR_Integer) 0, Var_51, ModuleInfo_15, Context_10, &CallGoal_27);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CallGoal_27));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MessageStrGoal_25));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_28, 2) = ((MR_Box) (Var_54));
    }
    Var_57 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_58 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__hlds_goal__goal_info_init_6_p_0(Var_57, Var_58, (MR_Integer) 6, (MR_Integer) 2, Context_10, &GoalInfo0_72);
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_72, &GoalInfo_29);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_generate_call_8_p_0(
  MR_String PredName_9,
  MR_Word Detism_10,
  MR_Word Args_11,
  MR_Word Purity_12,
  MR_Word InstMapDelta_13,
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word * Goal_16)
{
  {
    MR_bool succeeded;
    MR_Word BuiltinModule_17;
    MR_Word Features0_18;
    MR_Word Features_19;

    BuiltinModule_17 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    switch (Purity_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        Features0_18 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_1[13]));
        break;
      case (MR_Integer) 0:
        Features0_18 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    succeeded = (Detism_10 == (MR_Integer) 7);
    if (succeeded)
    {
      {
        Features_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Features_19, 0) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(1), Features_19, 1) = ((MR_Box) (Features0_18));
      }
    }
    else
      Features_19 = Features0_18;
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, BuiltinModule_17, PredName_9, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Detism_10, Purity_12, Args_11, Features_19, InstMapDelta_13, Context_15, Goal_16);
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__infinite_recursion_msg_0_f_0(void)
{
  {
    return (MR_String) "detected infinite recursion";
  }
}

static MR_Box MR_CALL 
transform_hlds__table_gen__generate_simple_call_table_lookup_goal_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_128;

    conv0_HeadVar__2_128 = transform_hlds__table_gen__IntroducedFrom__func__generate_simple_call_table_lookup_goal__2171__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_128));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_simple_call_table_lookup_goal_18_p_0(
  MR_Word StatusType_19,
  MR_String PredName_20,
  MR_String SetupMacroName_21,
  MR_Word NumberedVars_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word Statistics_25,
  MR_Word Context_26,
  MR_Word STATE_VARIABLE_VarSet_0_56,
  MR_Word * STATE_VARIABLE_VarSet_57,
  MR_Word STATE_VARIABLE_VarTypes_0_58,
  MR_Word * STATE_VARIABLE_VarTypes_59,
  MR_Word STATE_VARIABLE_TableInfo_0_60,
  MR_Word * STATE_VARIABLE_TableInfo_61,
  MR_Word * TableTipVar_30,
  MR_Word * StatusVar_31,
  MR_Word * Goal_32,
  MR_Word * Steps_33)
{
  {
    MR_Word TableTipArg_34;
    MR_Word InfoArg_35;
    MR_Word LookupForeignArgs_36;
    MR_Word LookupPrefixGoals_37;
    MR_String LookupCodeStr_38;
    MR_String CallTableTipAssignStr_39;
    MR_Word ModuleInfo_40;
    MR_String StatusVarName_41;
    MR_Word StatusArg_42;
    MR_String DebugArgStr_43;
    MR_String BackArgStr_44;
    MR_String MainPredCodeStr_45;
    MR_Word Args_46;
    MR_Word BoundVars_47;
    MR_String CodeStr_48;
    MR_Word SetupGoal0_49;
    MR_Word SetupGoal_50;
    MR_Word LookupSetupGoals_51;
    MR_Word GoalExpr_52;
    MR_Word Vars_53;
    MR_Word NonLocals_54;
    MR_Word GoalInfo_55;
    MR_Word STATE_VARIABLE_VarSet_62_62;
    MR_Word STATE_VARIABLE_VarTypes_63_63;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_String Var_73;
    MR_String Var_74;
    MR_String Var_76;
    MR_String Var_77;
    MR_String Var_79;
    MR_String Var_80;
    MR_String Var_82;
    MR_String Var_83;
    MR_String Var_84;
    MR_String Var_86;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_String Var_94;
    MR_String Var_95;
    MR_String Var_96;
    MR_String Var_98;
    MR_String Var_100;
    MR_String Var_101;
    MR_String Var_102;
    MR_String Var_104;
    MR_String Var_105;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;

    transform_hlds__table_gen__generate_call_table_lookup_goals_19_p_0(NumberedVars_22, PredId_23, ProcId_24, Statistics_25, Context_26, STATE_VARIABLE_VarSet_0_56, &STATE_VARIABLE_VarSet_62_62, STATE_VARIABLE_VarTypes_0_58, &STATE_VARIABLE_VarTypes_63_63, STATE_VARIABLE_TableInfo_0_60, STATE_VARIABLE_TableInfo_61, Steps_33, TableTipVar_30, &TableTipArg_34, &InfoArg_35, &LookupForeignArgs_36, &LookupPrefixGoals_37, &LookupCodeStr_38, &CallTableTipAssignStr_39);
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "Status", StatusType_19, STATE_VARIABLE_VarSet_62_62, STATE_VARIABLE_VarSet_57, STATE_VARIABLE_VarTypes_63_63, STATE_VARIABLE_VarTypes_59, StatusVar_31);
    ModuleInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_TableInfo_61, (MR_Integer) 0))));
    StatusVarName_41 = transform_hlds__table_gen__status_name_0_f_0();
    Var_70 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (StatusVarName_41));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
    }
    {
      StatusArg_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StatusArg_42, 0) = ((MR_Box) (*StatusVar_31));
      MR_hl_field(MR_mktag(0), StatusArg_42, 1) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), StatusArg_42, 2) = ((MR_Box) (StatusType_19));
      MR_hl_field(MR_mktag(0), StatusArg_42, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    DebugArgStr_43 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_61);
    BackArgStr_44 = transform_hlds__table_gen__get_back_arg_string_1_f_0(*STATE_VARIABLE_TableInfo_61);
    Var_83 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_86 = mercury__string__f_43_43_2_f_0(StatusVarName_41, (MR_String) ");\n");
    Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_86);
    Var_82 = mercury__string__f_43_43_2_f_0(Var_83, Var_84);
    Var_80 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_82);
    Var_79 = mercury__string__f_43_43_2_f_0(BackArgStr_44, Var_80);
    Var_77 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_79);
    Var_76 = mercury__string__f_43_43_2_f_0(DebugArgStr_43, Var_77);
    Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_76);
    Var_73 = mercury__string__f_43_43_2_f_0(SetupMacroName_21, Var_74);
    MainPredCodeStr_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_73);
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (StatusArg_42));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (TableTipArg_34));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
    }
    {
      Args_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_46, 0) = ((MR_Box) (InfoArg_35));
      MR_hl_field(MR_mktag(1), Args_46, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (*StatusVar_31));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      BoundVars_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), BoundVars_47, 0) = ((MR_Box) (*TableTipVar_30));
      MR_hl_field(MR_mktag(1), BoundVars_47, 1) = ((MR_Box) (Var_91));
    }
    Var_95 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_101 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_105 = mercury__string__f_43_43_2_f_0(CallTableTipAssignStr_39, MainPredCodeStr_45);
    Var_104 = mercury__string__f_43_43_2_f_0(LookupCodeStr_38, Var_105);
    Var_102 = mercury__string__f_43_43_2_f_0((MR_String) ";\n\n", Var_104);
    Var_100 = mercury__string__f_43_43_2_f_0(Var_101, Var_102);
    Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_100);
    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) ";\n", Var_98);
    Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Var_96);
    CodeStr_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_TrieNode ", Var_94);
    Var_107 = transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0();
    Var_109 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_47);
    transform_hlds__table_gen__table_generate_foreign_proc_11_p_0(PredName_20, (MR_Integer) 0, Var_107, Args_46, LookupForeignArgs_36, CodeStr_48, (MR_Integer) 2, Var_109, ModuleInfo_40, Context_26, &SetupGoal0_49);
    transform_hlds__table_gen__attach_call_table_tip_2_p_0(SetupGoal0_49, &SetupGoal_50);
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (SetupGoal_50));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    LookupSetupGoals_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), LookupPrefixGoals_37, Var_110);
    {
      GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 2) = ((MR_Box) (LookupSetupGoals_51));
    }
    Vars_53 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__table_gen_scalar_common_1[3]), (MR_Word) (&transform_hlds__table_gen_scalar_common_1[2]), (MR_Word) (&transform_hlds__table_gen_scalar_common_2[4]), NumberedVars_22);
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (*TableTipVar_30));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Vars_53));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (*StatusVar_31));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_114, &NonLocals_54);
    Var_116 = hlds__instmap__instmap_delta_bind_vars_1_f_0(BoundVars_47);
    transform_hlds__table_gen__goal_info_init_hide_6_p_0(NonLocals_54, Var_116, (MR_Integer) 0, (MR_Integer) 2, Context_26, &GoalInfo_55);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_55));
    }
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__status_name_0_f_0(void)
{
  {
    return (MR_String) "status";
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__tabling_c_attributes_no_dupl_0_f_0(void)
{
  {
    MR_Word Attrs_2;
    MR_Word Attrs0_3;
    MR_Word Attrs1_4;

    Attrs0_3 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs0_3, &Attrs1_4);
    parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, Attrs1_4, &Attrs_2);
    return Attrs_2;
  }
}

static void MR_CALL 
transform_hlds__table_gen__goal_info_init_hide_6_p_0(
  MR_Word NonLocals_7,
  MR_Word InstmapDelta_8,
  MR_Word Detism_9,
  MR_Word Purity_10,
  MR_Word Context_11,
  MR_Word * GoalInfo_12)
{
  {
    MR_Word GoalInfo0_13;

    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_7, InstmapDelta_8, Detism_9, Purity_10, Context_11, &GoalInfo0_13);
    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 8, GoalInfo0_13, GoalInfo_12);
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_generate_foreign_proc_11_p_0(
  MR_String PredName_12,
  MR_Word Detism_13,
  MR_Word Attributes_14,
  MR_Word Args_15,
  MR_Word ExtraArgs_16,
  MR_String Code_17,
  MR_Word Purity_18,
  MR_Word InstMapDelta_19,
  MR_Word ModuleInfo_20,
  MR_Word Context_21,
  MR_Word * Goal_22)
{
  {
    MR_bool succeeded;
    MR_Word Features0_23;
    MR_Word Features_24;
    MR_Word BuiltinModule_25;

    switch (Purity_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        Features0_23 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_1[13]));
        break;
      case (MR_Integer) 0:
        Features0_23 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    succeeded = (Detism_13 == (MR_Integer) 7);
    if (succeeded)
    {
      {
        Features_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Features_24, 0) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(1), Features_24, 1) = ((MR_Box) (Features0_23));
      }
    }
    else
      Features_24 = Features0_23;
    BuiltinModule_25 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    hlds__goal_util__generate_foreign_proc_16_p_0(ModuleInfo_20, BuiltinModule_25, PredName_12, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Detism_13, Purity_18, Attributes_14, Args_15, ExtraArgs_16, (MR_Word) ((MR_Unsigned) 0U), Code_17, Features_24, InstMapDelta_19, Context_21, Goal_22);
  }
}

static void MR_CALL 
transform_hlds__table_gen__attach_call_table_tip_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word GoalInfo0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalInfo_5;
    MR_Word Features0_6;
    MR_Word Features_7;

    Features0_6 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo0_4);
    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), ((MR_Box) ((MR_Integer) 5)), Features0_6, &Features_7);
    hlds__hlds_goal__goal_info_set_features_3_p_0(Features_7, GoalInfo0_4, &GoalInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_5));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_call_table_lookup_goals_19_p_0(
  MR_Word NumberedVars_20,
  MR_Word PredId_21,
  MR_Integer ProcId_22,
  MR_Word Statistics_23,
  MR_Word Context_24,
  MR_Word STATE_VARIABLE_VarSet_0_47,
  MR_Word * STATE_VARIABLE_VarSet_48,
  MR_Word STATE_VARIABLE_VarTypes_0_49,
  MR_Word * STATE_VARIABLE_VarTypes_50,
  MR_Word STATE_VARIABLE_TableInfo_0_51,
  MR_Word * STATE_VARIABLE_TableInfo_52,
  MR_Word * InputSteps_28,
  MR_Word * CallTableTipVar_29,
  MR_Word * CallTableTipArg_30,
  MR_Word * InfoArg_31,
  MR_Word * LookupArgs_32,
  MR_Word * PrefixGoals_33,
  MR_String * MainCodeStr_34,
  MR_String * CallTableTipVarCodeStr_35)
{
  {
    MR_Word GetTableInfoGoal_37;
    MR_Word MaybeStatsRef_38;
    MR_String DebugArgStr_39;
    MR_String BackArgStr_40;
    MR_Word LookupPrefixGoals_41;
    MR_String LookupCodeStr_42;
    MR_String StatsCodeStr_45;
    MR_Word STATE_VARIABLE_VarSet_63_63;
    MR_Word STATE_VARIABLE_VarTypes_64_64;
    MR_Word STATE_VARIABLE_VarSet_67_67;
    MR_Word STATE_VARIABLE_VarTypes_68_68;
    MR_Word Var_70;
    MR_Word STATE_VARIABLE_VarSet_74_74;
    MR_Word STATE_VARIABLE_VarTypes_75_75;
    MR_String Var_76;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word TB_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word _StatsPrefixGoals_43;
    MR_Word _StatsExtraArgs_44;

    transform_hlds__table_gen__generate_get_table_info_goal_10_p_0(PredId_21, ProcId_22, Context_24, STATE_VARIABLE_VarSet_0_47, &STATE_VARIABLE_VarSet_63_63, STATE_VARIABLE_VarTypes_0_49, &STATE_VARIABLE_VarTypes_64_64, (MR_String) "proc_table_info", InfoArg_31, &GetTableInfoGoal_37);
    MaybeStatsRef_38 = transform_hlds__table_gen__stats_ref_2_f_0(Statistics_23, (MR_Integer) 0);
    DebugArgStr_39 = transform_hlds__table_gen__get_debug_arg_string_1_f_0(STATE_VARIABLE_TableInfo_0_51);
    BackArgStr_40 = transform_hlds__table_gen__get_back_arg_string_1_f_0(STATE_VARIABLE_TableInfo_0_51);
    transform_hlds__table_gen__generate_table_lookup_goals_15_p_0(NumberedVars_20, MaybeStatsRef_38, DebugArgStr_39, BackArgStr_40, Context_24, STATE_VARIABLE_VarSet_63_63, &STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_VarTypes_64_64, &STATE_VARIABLE_VarTypes_68_68, STATE_VARIABLE_TableInfo_0_51, STATE_VARIABLE_TableInfo_52, InputSteps_28, LookupArgs_32, &LookupPrefixGoals_41, &LookupCodeStr_42);
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (GetTableInfoGoal_37));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *PrefixGoals_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_70, LookupPrefixGoals_41);
    transform_hlds__table_gen__maybe_record_overall_stats_13_p_0(PredId_21, ProcId_22, Context_24, (MR_String) "proc_table_info", (MR_String) "cur_node", MaybeStatsRef_38, STATE_VARIABLE_VarSet_67_67, &STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_VarTypes_68_68, &STATE_VARIABLE_VarTypes_75_75, &_StatsPrefixGoals_43, &_StatsExtraArgs_44, &StatsCodeStr_45);
    Var_76 = mercury__string__f_43_43_2_f_0(LookupCodeStr_42, StatsCodeStr_45);
    *MainCodeStr_34 = mercury__string__f_43_43_2_f_0((MR_String) "\tcur_node = &proc_table_info->MR_pt_tablenode;\n", Var_76);
    TB_94 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (TB_94));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_String) "ml_trie_node"));
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_95, (MR_Word) ((MR_Unsigned) 0U), &Var_77);
    transform_hlds__table_gen__generate_new_table_var_7_p_0((MR_String) "CallTableTipVar", Var_77, STATE_VARIABLE_VarSet_74_74, STATE_VARIABLE_VarSet_48, STATE_VARIABLE_VarTypes_75_75, STATE_VARIABLE_VarTypes_50, CallTableTipVar_29);
    Var_82 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) ((MR_String) "CallTableTipVar"));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
    }
    Var_83 = transform_hlds__table_gen__trie_node_type_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *CallTableTipArg_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*CallTableTipVar_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    *CallTableTipVarCodeStr_35 = (MR_String) "\tCallTableTipVar = cur_node;\n";
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__trie_node_type_0_f_0(void)
{
  {
    MR_Word Type_2;
    MR_Word TB_3;
    MR_Word Var_4;
    MR_Word Var_6;

    TB_3 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (TB_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_String) "ml_trie_node"));
    }
    {
      Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_4, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_4, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_4, (MR_Word) ((MR_Unsigned) 0U), &Type_2);
    return Type_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__table_gen__stats_ref_2_f_0(
  MR_Word Statistics_4,
  MR_Word Kind_5)
{
  {
    MR_Word MaybeStatsRef_6;

    switch (Statistics_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        MaybeStatsRef_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        {
          MR_String KindStr_7;
          MR_String StatsRef_8;
          MR_String Var_10;
          MR_String Var_12;
          MR_String Var_14;

          switch (Kind_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              KindStr_7 = (MR_String) "MR_TABLE_ANSWER_TABLE";
              break;
            case (MR_Integer) 0:
              KindStr_7 = (MR_String) "MR_TABLE_CALL_TABLE";
              break;
          }
          Var_14 = mercury__string__f_43_43_2_f_0(KindStr_7, (MR_String) "][MR_TABLE_STATS_CURR]");
          Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_14);
          Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "->MR_pt_stats", Var_12);
          StatsRef_8 = mercury__string__f_43_43_2_f_0((MR_String) "proc_table_info", Var_10);
          {
            MaybeStatsRef_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeStatsRef_6, 0) = ((MR_Box) (StatsRef_8));
          }
        }
        break;
    }
    return MaybeStatsRef_6;
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__get_back_arg_string_1_f_0(
  MR_Word TableInfo_3)
{
  {
    MR_String BackArgStr_4;
    MR_Word ProcInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_3, (MR_Integer) 2))));
    MR_Word MaybeAttributes_6;

    hlds__hlds_pred__proc_info_get_table_attributes_2_p_0(ProcInfo_5, &MaybeAttributes_6);
    if ((MaybeAttributes_6 == (MR_Word) ((MR_Unsigned) 0U)))
      BackArgStr_4 = (MR_String) "MR_FALSE";
    else
    {
      MR_Word Attributes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttributes_6, (MR_Integer) 0))));
      MR_Word MaybeSizeLimit_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_7, (MR_Integer) 1))));

      if ((MaybeSizeLimit_8 == (MR_Word) ((MR_Unsigned) 0U)))
        BackArgStr_4 = (MR_String) "MR_FALSE";
      else
        BackArgStr_4 = (MR_String) "MR_TRUE";
    }
    return BackArgStr_4;
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__get_debug_arg_string_1_f_0(
  MR_Word TableInfo_3)
{
  {
    MR_String DebugArgStr_4;
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TableInfo_3, (MR_Integer) 0))));
    MR_Word Globals_6;
    MR_Word TableDebug_7;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_6);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 322, &TableDebug_7);
    switch (TableDebug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DebugArgStr_4 = (MR_String) "MR_FALSE";
        break;
      case (MR_Integer) 1:
        DebugArgStr_4 = (MR_String) "MR_TRUE";
        break;
    }
    return DebugArgStr_4;
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_new_table_var_7_p_0(
  MR_String Name_8,
  MR_Word Type_9,
  MR_Word STATE_VARIABLE_VarSet_0_13,
  MR_Word * STATE_VARIABLE_VarSet_14,
  MR_Word STATE_VARIABLE_VarTypes_0_15,
  MR_Word * STATE_VARIABLE_VarTypes_16,
  MR_Word * Var_12)
{
  {
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_8, Var_12, STATE_VARIABLE_VarSet_0_13, STATE_VARIABLE_VarSet_14);
    hlds__vartypes__add_var_type_4_p_0(*Var_12, Type_9, STATE_VARIABLE_VarTypes_0_15, STATE_VARIABLE_VarTypes_16);
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_table_lookup_goals_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MaybeStatsRef_2,
  MR_String DebugArgStr_3,
  MR_String BackArgStr_4,
  MR_Word Context_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9,
  MR_Word STATE_VARIABLE_TableInfo_0_10,
  MR_Word * STATE_VARIABLE_TableInfo_11,
  MR_Word * HeadVar__12_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_String * HeadVar__15_15)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__15_15 = (MR_String) "";
    *STATE_VARIABLE_TableInfo_11 = STATE_VARIABLE_TableInfo_0_10;
    *STATE_VARIABLE_VarTypes_9 = STATE_VARIABLE_VarTypes_0_8;
    *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
  }
  else
  {
    MR_Word VarModePos_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word NumberedVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word StepDesc_38;
    MR_Word StepDescs_39;
    MR_Word ForeignArgs_40;
    MR_Word RestForeignArgs_41;
    MR_Word PrefixGoals_42;
    MR_Word RestPrefixGoals_43;
    MR_String CodeStr_44;
    MR_String RestCodeStr_45;
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarModePos_29, (MR_Integer) 0))));
    MR_Integer VarSeqNum_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VarModePos_29, (MR_Integer) 2))));
    MR_Word ArgMethod_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarModePos_29, (MR_Integer) 3))));
    MR_String VarName_50;
    MR_Word ModuleInfo_51;
    MR_Word VarType_52;
    MR_Word CtorCat_53;
    MR_Word Step_54;
    MR_Word STATE_VARIABLE_VarSet_61_61;
    MR_Word STATE_VARIABLE_VarTypes_62_62;
    MR_Word STATE_VARIABLE_TableInfo_63_63;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_6, Var_46, &VarName_50);
    ModuleInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_10, (MR_Integer) 0))));
    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_8, Var_46, &VarType_52);
    CtorCat_53 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_51, VarType_52);
    switch (ArgMethod_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        transform_hlds__table_gen__gen_lookup_call_for_type_19_p_0(ArgMethod_49, CtorCat_53, VarType_52, Var_46, VarSeqNum_48, MaybeStatsRef_2, DebugArgStr_3, BackArgStr_4, Context_5, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_61_61, STATE_VARIABLE_VarTypes_0_8, &STATE_VARIABLE_VarTypes_62_62, STATE_VARIABLE_TableInfo_0_10, &STATE_VARIABLE_TableInfo_63_63, &Step_54, &ForeignArgs_40, &PrefixGoals_42, &CodeStr_44);
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_65;
          MR_String Var_66;
          MR_String Var_78;

          Step_54 = (MR_Word) ((MR_Unsigned) 28U);
          ForeignArgs_40 = (MR_Word) ((MR_Unsigned) 0U);
          PrefixGoals_42 = (MR_Word) ((MR_Unsigned) 0U);
          Var_78 = mercury__string__int_to_string_1_f_0(VarSeqNum_48);
          Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "arg", Var_78);
          Var_65 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) " */\n");
          CodeStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "\t/* promise_implied for ", Var_65);
          STATE_VARIABLE_VarSet_61_61 = STATE_VARIABLE_VarSet_0_6;
          STATE_VARIABLE_VarTypes_62_62 = STATE_VARIABLE_VarTypes_0_8;
          STATE_VARIABLE_TableInfo_63_63 = STATE_VARIABLE_TableInfo_0_10;
        }
        break;
    }
    {
      StepDesc_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StepDesc_38, 0) = ((MR_Box) (VarName_50));
      MR_hl_field(MR_mktag(0), StepDesc_38, 1) = ((MR_Box) (Step_54));
    }
    transform_hlds__table_gen__generate_table_lookup_goals_15_p_0(NumberedVars_30, MaybeStatsRef_2, DebugArgStr_3, BackArgStr_4, Context_5, STATE_VARIABLE_VarSet_61_61, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_62_62, STATE_VARIABLE_VarTypes_9, STATE_VARIABLE_TableInfo_63_63, STATE_VARIABLE_TableInfo_11, &StepDescs_39, &RestForeignArgs_41, &RestPrefixGoals_43, &RestCodeStr_45);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__12_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StepDesc_38));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StepDescs_39));
    }
    *HeadVar__13_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ForeignArgs_40, RestForeignArgs_41);
    *HeadVar__14_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrefixGoals_42, RestPrefixGoals_43);
    *HeadVar__15_15 = mercury__string__f_43_43_2_f_0(CodeStr_44, RestCodeStr_45);
  }
}

static void MR_CALL 
transform_hlds__table_gen__gen_lookup_call_for_type_19_p_0(
  MR_Word ArgTablingMethod0_20,
  MR_Word CtorCat_21,
  MR_Word Type_22,
  MR_Word ArgVar_23,
  MR_Integer VarSeqNum_24,
  MR_Word MaybeStatsRef_25,
  MR_String DebugArgStr_26,
  MR_String BackArgStr_27,
  MR_Word Context_28,
  MR_Word STATE_VARIABLE_VarSet_0_71,
  MR_Word * STATE_VARIABLE_VarSet_72,
  MR_Word STATE_VARIABLE_VarTypes_0_73,
  MR_Word * STATE_VARIABLE_VarTypes_74,
  MR_Word STATE_VARIABLE_TableInfo_0_75,
  MR_Word * STATE_VARIABLE_TableInfo_76,
  MR_Word * Step_32,
  MR_Word * ExtraArgs_33,
  MR_Word * PrefixGoals_34,
  MR_String * CodeStr_35)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_75, (MR_Integer) 0))));
    MR_String ArgName_37;
    MR_Word ForeignArg_38;
    MR_String MaybeStepStatsArgStr_44;
    MR_String LookupCodeStr_56;
    MR_String UpdateCurNodeCodeStr_66;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_String Var_239;
    MR_String Var_240;
    MR_String Var_241;
    MR_String Var_243;
    MR_String Var_244;

    ArgName_37 = transform_hlds__table_gen__arg_name_1_f_0(VarSeqNum_24);
    Var_79 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (ArgName_37));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
    }
    {
      ForeignArg_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ForeignArg_38, 0) = ((MR_Box) (ArgVar_23));
      MR_hl_field(MR_mktag(0), ForeignArg_38, 1) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), ForeignArg_38, 2) = ((MR_Box) (Type_22));
      MR_hl_field(MR_mktag(0), ForeignArg_38, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    MaybeStepStatsArgStr_44 = transform_hlds__table_gen__maybe_step_stats_arg_addr_2_f_0(MaybeStatsRef_25, VarSeqNum_24);
    switch (MR_tag((MR_Word) CtorCat_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (ArgTablingMethod0_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 1, (MR_String) "_addr", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                    return;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 0, (MR_String) "", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (ArgTablingMethod0_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 1, (MR_String) "_addr", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                    return;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 0, (MR_String) "", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (ArgTablingMethod0_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "tabling dummies by addr");
                    return;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                    return;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String Var_113;
                  MR_String Var_114;
                  MR_String Var_115;
                  MR_String Var_117;
                  MR_String Var_118;

                  *Step_32 = (MR_Word) ((MR_Unsigned) 0U);
                  *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                  *ExtraArgs_33 = (MR_Word) ((MR_Unsigned) 0U);
                  Var_114 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                  Var_118 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                  Var_117 = mercury__string__f_43_43_2_f_0(Var_118, (MR_String) ";\n");
                  Var_115 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_117);
                  Var_113 = mercury__string__f_43_43_2_f_0(Var_114, Var_115);
                  LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_113);
                  *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                  *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                  *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (ArgTablingMethod0_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 1, (MR_String) "_addr", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                    return;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 0, (MR_String) "", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            {
              succeeded = (ArgTablingMethod0_20 == (MR_Integer) 1);
              if (succeeded)
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "void");
                  return;
                }
              }
              else
                switch (ArgTablingMethod0_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "void");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "void");
                        return;
                      }
                    }
                    break;
                }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_406 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_21, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_406)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_406)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (ArgTablingMethod0_20) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 1, (MR_String) "_addr", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_355;
                        MR_String Var_356;
                        MR_String Var_358;
                        MR_String Var_359;
                        MR_String Var_361;
                        MR_String Var_362;
                        MR_String Var_364;
                        MR_String Var_365;
                        MR_String Var_367;
                        MR_String Var_368;
                        MR_String Var_369;
                        MR_String Var_371;
                        MR_String Var_372;
                        MR_String Var_374;
                        MR_String Var_375;

                        *Step_32 = (MR_Word) ((MR_Unsigned) 12U);
                        *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ExtraArgs_33 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_38));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_368 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                        Var_375 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                        Var_374 = mercury__string__f_43_43_2_f_0(Var_375, (MR_String) ");\n");
                        Var_372 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_374);
                        Var_371 = mercury__string__f_43_43_2_f_0(ArgName_37, Var_372);
                        Var_369 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_371);
                        Var_367 = mercury__string__f_43_43_2_f_0(Var_368, Var_369);
                        Var_365 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_367);
                        Var_364 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_365);
                        Var_362 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_364);
                        Var_361 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_362);
                        Var_359 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_361);
                        Var_358 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_44, Var_359);
                        Var_356 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_358);
                        Var_355 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_float", Var_356);
                        LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_355);
                        *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                        *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                        *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgTablingMethod_41;

                    succeeded = (ArgTablingMethod0_20 == (MR_Integer) 1);
                    if (succeeded)
                      ArgTablingMethod_41 = (MR_Integer) 0;
                    else
                      ArgTablingMethod_41 = ArgTablingMethod0_20;
                    switch (ArgTablingMethod_41) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "tabling chars by addr");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_String Var_301;
                          MR_String Var_302;
                          MR_String Var_304;
                          MR_String Var_305;
                          MR_String Var_307;
                          MR_String Var_308;
                          MR_String Var_310;
                          MR_String Var_311;
                          MR_String Var_313;
                          MR_String Var_314;
                          MR_String Var_315;
                          MR_String Var_317;
                          MR_String Var_318;
                          MR_String Var_320;
                          MR_String Var_321;

                          *Step_32 = (MR_Word) ((MR_Unsigned) 4U);
                          *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *ExtraArgs_33 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_38));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          Var_314 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                          Var_321 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                          Var_320 = mercury__string__f_43_43_2_f_0(Var_321, (MR_String) ");\n");
                          Var_318 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_320);
                          Var_317 = mercury__string__f_43_43_2_f_0(ArgName_37, Var_318);
                          Var_315 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_317);
                          Var_313 = mercury__string__f_43_43_2_f_0(Var_314, Var_315);
                          Var_311 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_313);
                          Var_310 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_311);
                          Var_308 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_310);
                          Var_307 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_308);
                          Var_305 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_307);
                          Var_304 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_44, Var_305);
                          Var_302 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_304);
                          Var_301 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_char", Var_302);
                          LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_301);
                          *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                          *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                          *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  switch (ArgTablingMethod0_20) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 1, (MR_String) "_addr", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_328;
                        MR_String Var_329;
                        MR_String Var_331;
                        MR_String Var_332;
                        MR_String Var_334;
                        MR_String Var_335;
                        MR_String Var_337;
                        MR_String Var_338;
                        MR_String Var_340;
                        MR_String Var_341;
                        MR_String Var_342;
                        MR_String Var_344;
                        MR_String Var_345;
                        MR_String Var_347;
                        MR_String Var_348;

                        *Step_32 = (MR_Word) ((MR_Unsigned) 8U);
                        *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ExtraArgs_33 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_38));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_341 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                        Var_348 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                        Var_347 = mercury__string__f_43_43_2_f_0(Var_348, (MR_String) ");\n");
                        Var_345 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_347);
                        Var_344 = mercury__string__f_43_43_2_f_0(ArgName_37, Var_345);
                        Var_342 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_344);
                        Var_340 = mercury__string__f_43_43_2_f_0(Var_341, Var_342);
                        Var_338 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_340);
                        Var_337 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_338);
                        Var_335 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_337);
                        Var_334 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_335);
                        Var_332 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_334);
                        Var_331 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_44, Var_332);
                        Var_329 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_331);
                        Var_328 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_string", Var_329);
                        LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_328);
                        *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                        *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                        *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                      }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgTablingMethod_496;

                succeeded = (ArgTablingMethod0_20 == (MR_Integer) 1);
                if (succeeded)
                  ArgTablingMethod_496 = (MR_Integer) 0;
                else
                  ArgTablingMethod_496 = ArgTablingMethod0_20;
                switch (ArgTablingMethod_496) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "tabling integer type by addr");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word IntType_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_406, (MR_Integer) 0))) & (MR_Integer) 15);
                      MR_String Var_130;
                      MR_String Var_131;
                      MR_String Var_133;
                      MR_String Var_134;
                      MR_String Var_136;
                      MR_String Var_137;
                      MR_String Var_139;
                      MR_String Var_140;
                      MR_String Var_142;
                      MR_String Var_143;
                      MR_String Var_144;
                      MR_String Var_146;
                      MR_String Var_147;
                      MR_String Var_149;
                      MR_String Var_150;
                      MR_String LookupMacroName_271;
                      MR_String CatString_272;

                      parse_tree__prog_data__int_type_to_string_2_p_0(IntType_58, &CatString_272);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *Step_32 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (IntType_58));
                      }
                      LookupMacroName_271 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_", CatString_272);
                      *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ExtraArgs_33 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_38));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_143 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                      Var_150 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                      Var_149 = mercury__string__f_43_43_2_f_0(Var_150, (MR_String) ");\n");
                      Var_147 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_149);
                      Var_146 = mercury__string__f_43_43_2_f_0(ArgName_37, Var_147);
                      Var_144 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_146);
                      Var_142 = mercury__string__f_43_43_2_f_0(Var_143, Var_144);
                      Var_140 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_142);
                      Var_139 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_140);
                      Var_137 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_139);
                      Var_136 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_137);
                      Var_134 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_136);
                      Var_133 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_44, Var_134);
                      Var_131 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_133);
                      Var_130 = mercury__string__f_43_43_2_f_0(LookupMacroName_271, Var_131);
                      LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_130);
                      *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                      *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                      *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgTablingMethod_422;

          succeeded = (ArgTablingMethod0_20 == (MR_Integer) 1);
          if (succeeded)
            ArgTablingMethod_422 = (MR_Integer) 0;
          else
            ArgTablingMethod_422 = ArgTablingMethod0_20;
          switch (ArgTablingMethod_422) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "tabling enums by addr");
                  return;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                  return;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_409 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), CtorCat_21, (MR_Integer) 0))) & (MR_Integer) 1);

                switch (Var_409) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_String Var_183;
                      MR_String Var_184;
                      MR_String Var_186;
                      MR_String Var_187;
                      MR_String Var_189;
                      MR_String Var_190;
                      MR_String Var_192;
                      MR_String Var_193;
                      MR_String Var_195;
                      MR_String Var_196;
                      MR_String Var_197;
                      MR_String Var_199;
                      MR_String Var_200;
                      MR_String Var_202;
                      MR_String Var_203;

                      *Step_32 = (MR_Word) ((MR_Unsigned) 16U);
                      *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ExtraArgs_33 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_38));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_196 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                      Var_203 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                      Var_202 = mercury__string__f_43_43_2_f_0(Var_203, (MR_String) ");\n");
                      Var_200 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_202);
                      Var_199 = mercury__string__f_43_43_2_f_0(ArgName_37, Var_200);
                      Var_197 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_199);
                      Var_195 = mercury__string__f_43_43_2_f_0(Var_196, Var_197);
                      Var_193 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_195);
                      Var_192 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_193);
                      Var_190 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_192);
                      Var_189 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_190);
                      Var_187 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_189);
                      Var_186 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_44, Var_187);
                      Var_184 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_186);
                      Var_183 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_foreign_enum", Var_184);
                      LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_183);
                      *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                      *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                      *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word TypeCtor_45;
                      MR_Word TypeTable_46;
                      MR_Word TypeDefn_47;
                      MR_Word TypeBody_48;
                      MR_Integer EnumRange_54;
                      MR_String Var_212;
                      MR_String Var_213;
                      MR_String Var_215;
                      MR_String Var_216;
                      MR_String Var_218;
                      MR_String Var_219;
                      MR_String Var_221;
                      MR_String Var_222;
                      MR_String Var_224;
                      MR_String Var_225;
                      MR_String Var_226;
                      MR_String Var_228;
                      MR_String Var_229;
                      MR_String Var_230;
                      MR_String Var_232;
                      MR_String Var_233;
                      MR_String Var_235;
                      MR_String Var_236;
                      MR_Word Ctors_49;
                      MR_Word MaybeCanonical_50;
                      MR_Word MaybeRepn_51;
                      MR_Word Repn_53;
                      MR_Word Var_206;

                      parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_22, &TypeCtor_45);
                      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_36, &TypeTable_46);
                      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_46, TypeCtor_45, &TypeDefn_47);
                      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_47, &TypeBody_48);
                      succeeded = ((MR_tag((MR_Word) TypeBody_48)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Ctors_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_48, (MR_Integer) 0))));
                        MaybeCanonical_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_48, (MR_Integer) 1))));
                        MaybeRepn_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_48, (MR_Integer) 2))));
                        succeeded = (MaybeCanonical_50 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (MaybeRepn_51 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Repn_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_51, (MR_Integer) 0))));
                            Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_53, (MR_Integer) 3))));
                            succeeded = (Var_206 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word Var_207;

                        Var_207 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_49);
                        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Var_207, &EnumRange_54);
                      }
                      else
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "enum type is not du_type\?");
                          return;
                        }
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *Step_32 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (EnumRange_54));
                      }
                      *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ExtraArgs_33 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_38));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      Var_225 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                      Var_229 = mercury__string__int_to_string_1_f_0(EnumRange_54);
                      Var_236 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                      Var_235 = mercury__string__f_43_43_2_f_0(Var_236, (MR_String) ");\n");
                      Var_233 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_235);
                      Var_232 = mercury__string__f_43_43_2_f_0(ArgName_37, Var_233);
                      Var_230 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_232);
                      Var_228 = mercury__string__f_43_43_2_f_0(Var_229, Var_230);
                      Var_226 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_228);
                      Var_224 = mercury__string__f_43_43_2_f_0(Var_225, Var_226);
                      Var_222 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_224);
                      Var_221 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_222);
                      Var_219 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_221);
                      Var_218 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_219);
                      Var_216 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_218);
                      Var_215 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_44, Var_216);
                      Var_213 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_215);
                      Var_212 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_enum", Var_213);
                      LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_212);
                      *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                      *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                      *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorCat_21, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (ArgTablingMethod0_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 1, (MR_String) "_addr", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                    return;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_410 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CtorCat_21, (MR_Integer) 1))) & (MR_Integer) 3);

                  switch (Var_410) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "base_typeclass_info_type");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String Var_382;
                        MR_String Var_383;
                        MR_String Var_385;
                        MR_String Var_386;
                        MR_String Var_388;
                        MR_String Var_389;
                        MR_String Var_391;
                        MR_String Var_392;
                        MR_String Var_394;
                        MR_String Var_395;
                        MR_String Var_396;
                        MR_String Var_398;
                        MR_String Var_399;
                        MR_String Var_401;
                        MR_String Var_402;

                        *Step_32 = (MR_Word) ((MR_Unsigned) 20U);
                        *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ExtraArgs_33 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_38));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_395 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                        Var_402 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                        Var_401 = mercury__string__f_43_43_2_f_0(Var_402, (MR_String) ");\n");
                        Var_399 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_401);
                        Var_398 = mercury__string__f_43_43_2_f_0(ArgName_37, Var_399);
                        Var_396 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_398);
                        Var_394 = mercury__string__f_43_43_2_f_0(Var_395, Var_396);
                        Var_392 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_394);
                        Var_391 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_392);
                        Var_389 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_391);
                        Var_388 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_389);
                        Var_386 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_388);
                        Var_385 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_44, Var_386);
                        Var_383 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_385);
                        Var_382 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_typeinfo", Var_383);
                        LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_382);
                        *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                        *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                        *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Var_157;
                        MR_String Var_158;
                        MR_String Var_160;
                        MR_String Var_161;
                        MR_String Var_163;
                        MR_String Var_164;
                        MR_String Var_166;
                        MR_String Var_167;
                        MR_String Var_169;
                        MR_String Var_170;
                        MR_String Var_171;
                        MR_String Var_173;
                        MR_String Var_174;
                        MR_String Var_176;
                        MR_String Var_177;

                        *Step_32 = (MR_Word) ((MR_Unsigned) 20U);
                        *PrefixGoals_34 = (MR_Word) ((MR_Unsigned) 0U);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *ExtraArgs_33 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignArg_38));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        Var_170 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
                        Var_177 = transform_hlds__table_gen__next_table_node_name_0_f_0();
                        Var_176 = mercury__string__f_43_43_2_f_0(Var_177, (MR_String) ");\n");
                        Var_174 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_176);
                        Var_173 = mercury__string__f_43_43_2_f_0(ArgName_37, Var_174);
                        Var_171 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_173);
                        Var_169 = mercury__string__f_43_43_2_f_0(Var_170, Var_171);
                        Var_167 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_169);
                        Var_166 = mercury__string__f_43_43_2_f_0(BackArgStr_27, Var_167);
                        Var_164 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_166);
                        Var_163 = mercury__string__f_43_43_2_f_0(DebugArgStr_26, Var_164);
                        Var_161 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_163);
                        Var_160 = mercury__string__f_43_43_2_f_0(MaybeStepStatsArgStr_44, Var_161);
                        Var_158 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_160);
                        Var_157 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_typeinfo", Var_158);
                        LookupCodeStr_56 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_157);
                        *STATE_VARIABLE_VarSet_72 = STATE_VARIABLE_VarSet_0_71;
                        *STATE_VARIABLE_VarTypes_74 = STATE_VARIABLE_VarTypes_0_73;
                        *STATE_VARIABLE_TableInfo_76 = STATE_VARIABLE_TableInfo_0_75;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "typeclass_info_type");
                          return;
                        }
                      }
                      break;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (ArgTablingMethod0_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 1, (MR_String) "_addr", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.gen_lookup_call_for_type\'/19", (MR_String) "arg_promise_implied");
                    return;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  transform_hlds__table_gen__gen_general_lookup_call_20_p_0((MR_Integer) 0, (MR_String) "", Type_22, ForeignArg_38, ArgName_37, VarSeqNum_24, MaybeStatsRef_25, DebugArgStr_26, BackArgStr_27, Context_28, STATE_VARIABLE_VarSet_0_71, STATE_VARIABLE_VarSet_72, STATE_VARIABLE_VarTypes_0_73, STATE_VARIABLE_VarTypes_74, STATE_VARIABLE_TableInfo_0_75, STATE_VARIABLE_TableInfo_76, Step_32, ExtraArgs_33, PrefixGoals_34, &LookupCodeStr_56);
                }
                break;
            }
            break;
        }
        break;
    }
    Var_240 = transform_hlds__table_gen__cur_table_node_name_0_f_0();
    Var_244 = transform_hlds__table_gen__next_table_node_name_0_f_0();
    Var_243 = mercury__string__f_43_43_2_f_0(Var_244, (MR_String) ";\n");
    Var_241 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_243);
    Var_239 = mercury__string__f_43_43_2_f_0(Var_240, Var_241);
    UpdateCurNodeCodeStr_66 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_239);
    if ((MaybeStatsRef_25 == (MR_Word) ((MR_Unsigned) 0U)))
      *CodeStr_35 = mercury__string__f_43_43_2_f_0(LookupCodeStr_56, UpdateCurNodeCodeStr_66);
    else
    {
      MR_String StatsRef_67 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStatsRef_25, (MR_Integer) 0))));
      MR_String StepStatsArgStr_68;
      MR_String NextVarName_69;
      MR_String LookupStatsCodeStr_70;
      MR_String Var_247;
      MR_String Var_248;
      MR_String Var_250;
      MR_String Var_252;
      MR_String Var_254;
      MR_String Var_255;
      MR_String Var_257;
      MR_String Var_259;
      MR_String Var_261;
      MR_String Var_267;

      StepStatsArgStr_68 = transform_hlds__table_gen__step_stats_arg_addr_2_f_0(StatsRef_67, VarSeqNum_24);
      NextVarName_69 = transform_hlds__table_gen__next_table_node_name_0_f_0();
      Var_261 = mercury__string__f_43_43_2_f_0(StepStatsArgStr_68, (MR_String) ".MR_tss_num_lookups_is_dupl++;\n\t}\n");
      Var_259 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_261);
      Var_257 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", Var_259);
      Var_255 = mercury__string__f_43_43_2_f_0((MR_String) "))", Var_257);
      Var_254 = mercury__string__f_43_43_2_f_0(NextVarName_69, Var_255);
      Var_252 = mercury__string__f_43_43_2_f_0((MR_String) "if (MR_trie_node_seen_before(", Var_254);
      Var_250 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_252);
      Var_248 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_tss_num_lookups++;\n", Var_250);
      Var_247 = mercury__string__f_43_43_2_f_0(StepStatsArgStr_68, Var_248);
      LookupStatsCodeStr_70 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_247);
      Var_267 = mercury__string__f_43_43_2_f_0(LookupStatsCodeStr_70, UpdateCurNodeCodeStr_66);
      *CodeStr_35 = mercury__string__f_43_43_2_f_0(LookupCodeStr_56, Var_267);
    }
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__arg_name_1_f_0(
  MR_Integer VarSeqNum_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String Var_5;

    Var_5 = mercury__string__int_to_string_1_f_0(VarSeqNum_3);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "arg", Var_5);
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__next_table_node_name_0_f_0(void)
{
  {
    return (MR_String) "next_node";
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__cur_table_node_name_0_f_0(void)
{
  {
    return (MR_String) "cur_node";
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__step_stats_arg_addr_2_f_0(
  MR_String StatsRef_4,
  MR_Integer SeqNum_5)
{
  {
    MR_String ArgStr_6;
    MR_String Var_7;
    MR_String Var_9;
    MR_String Var_11;
    MR_String Var_12;

    Var_12 = mercury__string__int_to_string_1_f_0(SeqNum_5);
    Var_11 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) "]");
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_11);
    Var_7 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_ts_steps", Var_9);
    ArgStr_6 = mercury__string__f_43_43_2_f_0(StatsRef_4, Var_7);
    return ArgStr_6;
  }
}

static void MR_CALL 
transform_hlds__table_gen__gen_general_lookup_call_20_p_0(
  MR_Word IsAddr_21,
  MR_String MaybeAddrString_22,
  MR_Word Type_23,
  MR_Word ForeignArg_24,
  MR_String ArgName_25,
  MR_Integer VarSeqNum_26,
  MR_Word MaybeStatsRef_27,
  MR_String DebugArgStr_28,
  MR_String BackArgStr_29,
  MR_Word Context_30,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_VarTypes_0_51,
  MR_Word * STATE_VARIABLE_VarTypes_52,
  MR_Word STATE_VARIABLE_TableInfo_0_53,
  MR_Word * STATE_VARIABLE_TableInfo_54,
  MR_Word * Step_34,
  MR_Word * ExtraArgs_35,
  MR_Word * PrefixGoals_36,
  MR_String * LookupCodeStr_37)
{
  {
    MR_Word TypeVars_38;
    MR_String MaybePolyString_39;
    MR_Word IsPoly_40;
    MR_String LookupMacroName_43;
    MR_Word TypeInfoVar_44;
    MR_String TypeInfoArgName_45;
    MR_Word TypeInfoType_46;
    MR_Word ForeignTypeInfoArg_47;
    MR_String StepStatsArgStr_48;
    MR_String Var_56;
    MR_String Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_String Var_69;
    MR_String Var_70;
    MR_String Var_72;
    MR_String Var_73;
    MR_String Var_75;
    MR_String Var_76;
    MR_String Var_78;
    MR_String Var_79;
    MR_String Var_81;
    MR_String Var_83;
    MR_String Var_85;
    MR_String Var_86;
    MR_String Var_88;

    parse_tree__prog_type__type_vars_2_p_0(Type_23, &TypeVars_38);
    if ((TypeVars_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybePolyString_39 = (MR_String) "";
      IsPoly_40 = (MR_Integer) 0;
    }
    else
    {
      MaybePolyString_39 = (MR_String) "_poly";
      IsPoly_40 = (MR_Integer) 1;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Step_34 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Type_23));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) (((((MR_Unsigned) (IsPoly_40) << 1)) | (MR_Unsigned) (IsAddr_21)));
    }
    Var_56 = mercury__string__f_43_43_2_f_0(MaybePolyString_39, MaybeAddrString_22);
    LookupMacroName_43 = mercury__string__f_43_43_2_f_0((MR_String) "MR_tbl_lookup_insert_gen", Var_56);
    transform_hlds__table_gen__table_gen_make_type_info_var_10_p_0(Type_23, Context_30, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_VarTypes_0_51, STATE_VARIABLE_VarTypes_52, STATE_VARIABLE_TableInfo_0_53, STATE_VARIABLE_TableInfo_54, &TypeInfoVar_44, PrefixGoals_36);
    Var_61 = mercury__string__int_to_string_1_f_0(VarSeqNum_26);
    TypeInfoArgName_45 = mercury__string__f_43_43_2_f_0((MR_String) "input_typeinfo", Var_61);
    hlds__vartypes__lookup_var_type_3_p_0(*STATE_VARIABLE_VarTypes_52, TypeInfoVar_44, &TypeInfoType_46);
    Var_64 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (TypeInfoArgName_45));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
    }
    {
      ForeignTypeInfoArg_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ForeignTypeInfoArg_47, 0) = ((MR_Box) (TypeInfoVar_44));
      MR_hl_field(MR_mktag(0), ForeignTypeInfoArg_47, 1) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), ForeignTypeInfoArg_47, 2) = ((MR_Box) (TypeInfoType_46));
      MR_hl_field(MR_mktag(0), ForeignTypeInfoArg_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (ForeignArg_24));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ExtraArgs_35 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignTypeInfoArg_47));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_66));
    }
    StepStatsArgStr_48 = transform_hlds__table_gen__maybe_step_stats_arg_addr_2_f_0(MaybeStatsRef_27, VarSeqNum_26);
    Var_88 = mercury__string__f_43_43_2_f_0(ArgName_25, (MR_String) ", next_node);\n");
    Var_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_88);
    Var_85 = mercury__string__f_43_43_2_f_0(TypeInfoArgName_45, Var_86);
    Var_83 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_85);
    Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "cur_node", Var_83);
    Var_79 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_81);
    Var_78 = mercury__string__f_43_43_2_f_0(BackArgStr_29, Var_79);
    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_78);
    Var_75 = mercury__string__f_43_43_2_f_0(DebugArgStr_28, Var_76);
    Var_73 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_75);
    Var_72 = mercury__string__f_43_43_2_f_0(StepStatsArgStr_48, Var_73);
    Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_72);
    Var_69 = mercury__string__f_43_43_2_f_0(LookupMacroName_43, Var_70);
    *LookupCodeStr_37 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_69);
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen__table_gen_make_type_info_var_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__table_gen__IntroducedFrom__pred__table_gen_make_type_info_vars__3825__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen__table_gen_make_type_info_var_10_p_0(
  MR_Word Type_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_VarSet_0_20,
  MR_Word * STATE_VARIABLE_VarSet_21,
  MR_Word STATE_VARIABLE_VarTypes_0_22,
  MR_Word * STATE_VARIABLE_VarTypes_23,
  MR_Word STATE_VARIABLE_TableInfo_0_24,
  MR_Word * STATE_VARIABLE_TableInfo_25,
  MR_Word * TypeInfoVar_16,
  MR_Word * TypeInfoGoals_17)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfoVars_18;
    MR_Word Var_26;
    MR_Word ModuleInfo0_47;
    MR_Word PredInfo0_48;
    MR_Word ProcInfo0_49;
    MR_Word ProcInfo1_50;
    MR_Word ProcInfo2_51;
    MR_Word PolyInfo0_52;
    MR_Word PolyInfo_53;
    MR_Word PolySpecs_54;
    MR_Word PredInfo_55;
    MR_Word ProcInfo_56;
    MR_Word ModuleInfo_57;
    MR_Word Var_58;
    MR_Word TypeInfoVar0_19;
    MR_Word Var_31;

    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Type_11));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ModuleInfo0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_24, (MR_Integer) 0))));
    PredInfo0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_24, (MR_Integer) 1))));
    ProcInfo0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TableInfo_0_24, (MR_Integer) 2))));
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_0_22, ProcInfo0_49, &ProcInfo1_50);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_0_20, ProcInfo1_50, &ProcInfo2_51);
    check_hlds__polymorphism__create_poly_info_4_p_0(ModuleInfo0_47, PredInfo0_48, ProcInfo2_51, &PolyInfo0_52);
    check_hlds__polymorphism__polymorphism_make_type_info_vars_6_p_0(Var_26, Context_12, &TypeInfoVars_18, TypeInfoGoals_17, PolyInfo0_52, &PolyInfo_53);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_53, &PolySpecs_54, PredInfo0_48, &PredInfo_55, ProcInfo0_49, &ProcInfo_56, &ModuleInfo_57);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__table_gen__table_gen_make_type_info_var_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (PolySpecs_54));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140transform_hlds.table_gen.table_gen_make_type_info_vars\'/10", (MR_String) "got errors while making type_info_vars");
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_56, STATE_VARIABLE_VarTypes_23);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_56, STATE_VARIABLE_VarSet_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TableInfo_25 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredInfo_55));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ProcInfo_56));
    }
    succeeded = (TypeInfoVars_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeInfoVar0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfoVars_18, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeInfoVars_18, (MR_Integer) 1))));
      succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      *TypeInfoVar_16 = TypeInfoVar0_19;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.table_gen_make_type_info_var\'/10", (MR_String) "list length != 1");
        return;
      }
    }
  }
}

static MR_String MR_CALL 
transform_hlds__table_gen__maybe_step_stats_arg_addr_2_f_0(
  MR_Word MaybeStatsRef_4,
  MR_Integer SeqNum_5)
{
  {
    MR_String ArgStr_6;

    if ((MaybeStatsRef_4 == (MR_Word) ((MR_Unsigned) 0U)))
      ArgStr_6 = (MR_String) "NULL";
    else
    {
      MR_String StatsRef_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStatsRef_4, (MR_Integer) 0))));
      MR_String Var_9;
      MR_String Var_10;
      MR_String Var_15;
      MR_String Var_17;
      MR_String Var_19;
      MR_String Var_20;

      Var_20 = mercury__string__int_to_string_1_f_0(SeqNum_5);
      Var_19 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) "]");
      Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_19);
      Var_15 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_ts_steps", Var_17);
      Var_10 = mercury__string__f_43_43_2_f_0(StatsRef_7, Var_15);
      Var_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) ")");
      ArgStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "&(", Var_9);
    }
    return ArgStr_6;
  }
}

static void MR_CALL 
transform_hlds__table_gen__maybe_record_overall_stats_13_p_0(
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word Context_16,
  MR_String InfoVarName_17,
  MR_String TipVarName_18,
  MR_Word MaybeStatsRef_19,
  MR_Word STATE_VARIABLE_VarSet_0_28,
  MR_Word * STATE_VARIABLE_VarSet_29,
  MR_Word STATE_VARIABLE_VarTypes_0_30,
  MR_Word * STATE_VARIABLE_VarTypes_31,
  MR_Word * PrefixGoals_22,
  MR_Word * Args_23,
  MR_String * StatsCodeStr_24)
{
  if ((MaybeStatsRef_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *PrefixGoals_22 = (MR_Word) ((MR_Unsigned) 0U);
    *Args_23 = (MR_Word) ((MR_Unsigned) 0U);
    *StatsCodeStr_24 = (MR_String) "";
    *STATE_VARIABLE_VarSet_29 = STATE_VARIABLE_VarSet_0_28;
    *STATE_VARIABLE_VarTypes_31 = STATE_VARIABLE_VarTypes_0_30;
  }
  else
  {
    MR_String StatsRef_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStatsRef_19, (MR_Integer) 0))));
    MR_Word Arg_26;
    MR_Word Goal_27;
    MR_String Var_37;
    MR_String Var_38;
    MR_String Var_40;
    MR_String Var_42;
    MR_String Var_44;
    MR_String Var_45;
    MR_String Var_47;
    MR_String Var_49;
    MR_String Var_51;

    transform_hlds__table_gen__generate_get_table_info_goal_10_p_0(PredId_14, ProcId_15, Context_16, STATE_VARIABLE_VarSet_0_28, STATE_VARIABLE_VarSet_29, STATE_VARIABLE_VarTypes_0_30, STATE_VARIABLE_VarTypes_31, InfoVarName_17, &Arg_26, &Goal_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *PrefixGoals_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Args_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_51 = mercury__string__f_43_43_2_f_0(StatsRef_25, (MR_String) ".MR_ts_num_lookups_is_dupl++;\n\t}\n");
    Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t", Var_51);
    Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "{\n", Var_49);
    Var_45 = mercury__string__f_43_43_2_f_0((MR_String) ")) ", Var_47);
    Var_44 = mercury__string__f_43_43_2_f_0(TipVarName_18, Var_45);
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "if (MR_trie_node_seen_before(", Var_44);
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_42);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ".MR_ts_num_lookups++;\n", Var_40);
    Var_37 = mercury__string__f_43_43_2_f_0(StatsRef_25, Var_38);
    *StatsCodeStr_24 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_37);
  }
}

static void MR_CALL 
transform_hlds__table_gen__generate_get_table_info_goal_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word Context_13,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_VarTypes_0_27,
  MR_Word * STATE_VARIABLE_VarTypes_28,
  MR_String InfoVarName_16,
  MR_Word * Arg_17,
  MR_Word * Goal_18)
{
  {
    MR_Word ProcTableInfoVar_19;
    MR_Word ShroudedPredProcId_20;
    MR_Word InfoConsId_21;
    MR_Word GoalExpr_22;
    MR_Word GoalInfo0_23;
    MR_Word GoalInfo_24;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word TB_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word TB_61;
    MR_Word Var_62;
    MR_Word Var_64;

    TB_42 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (TB_42));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_String) "ml_proc_table_info"));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_43, (MR_Word) ((MR_Unsigned) 0U), &Var_30);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "ProcTableInfo", &ProcTableInfoVar_19, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26);
    hlds__vartypes__add_var_type_4_p_0(ProcTableInfoVar_19, Var_30, STATE_VARIABLE_VarTypes_0_27, STATE_VARIABLE_VarTypes_28);
    Var_35 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (InfoVarName_16));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
    }
    TB_61 = mdbcomp__builtin_modules__mercury_table_builtin_module_0_f_0();
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (TB_61));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_String) "ml_proc_table_info"));
    }
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type__construct_type_3_p_0(Var_62, (MR_Word) ((MR_Unsigned) 0U), &Var_36);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Arg_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ProcTableInfoVar_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ProcId_12));
    }
    ShroudedPredProcId_20 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_38);
    InfoConsId_21 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ShroudedPredProcId_20)));
    hlds__make_goal__make_const_construction_4_p_0(Context_13, ProcTableInfoVar_19, InfoConsId_21, &Var_39);
    GoalExpr_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
    GoalInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
    hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, GoalInfo0_23, &GoalInfo_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_24));
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0_s * env_ptr = (struct transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0_s *) (env_ptr_arg);

    *((env_ptr)->transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__conv1_MayCallMercuryAttr_4));
    ((env_ptr)->transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__cont)((env_ptr)->transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0_s env;

    (env).transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__cont = cont;
    (env).transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      transform_hlds__table_gen__subgoal_may_call_mercury_attribute_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &(env).transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4_env_0__conv1_MayCallMercuryAttr_4, transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_3, &env);
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0_s * env_ptr = (struct transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__conv0_TabledForIoAttr_4));
    ((env_ptr)->transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__cont)((env_ptr)->transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0_s env;

    (env).transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__cont = cont;
    (env).transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      transform_hlds__table_gen__subgoal_tabled_for_io_attribute_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &(env).transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2_env_0__conv0_TabledForIoAttr_4, transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_1, &env);
    }
  }
}

static void MR_CALL 
transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0(
  MR_Word TransformAll_7,
  MR_Word Require_8,
  MR_Word BodyGoal_9,
  MR_Word PredModuleName_10,
  MR_Word * AnnotationIsMissing_11,
  MR_Word * TransformInfo_12)
{
  {
    MR_bool succeeded;
    MR_Word TabledForIoAttrs_13;
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (BodyGoal_9));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_tabled_for_io_0), Var_32, &TabledForIoAttrs_13);
    if ((TabledForIoAttrs_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AnnotationIsMissing_11 = (MR_Integer) 0;
      *TransformInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TabledForIoAttrs_13, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TabledForIoAttrs_13, (MR_Integer) 0))));

      if ((Var_28 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (Var_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = (Require_8 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(PredModuleName_10);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                *AnnotationIsMissing_11 = (MR_Integer) 1;
                *TransformInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                *AnnotationIsMissing_11 = (MR_Integer) 0;
                switch (TransformAll_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *TransformInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MayCallMercuryAttrs_15;
                      MR_Word Var_37;
                      MR_Word Var_25;
                      MR_Word Var_26;

                      {
                        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__table_gen_scalar_common_3[1]));
                        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__table_gen__should_io_procedure_be_transformed_6_p_0_4));
                        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (BodyGoal_9));
                      }
                      mercury__solutions__solutions_2_p_1((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_proc_may_call_mercury_0), Var_37, &MayCallMercuryAttrs_15);
                      succeeded = (MayCallMercuryAttrs_15 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayCallMercuryAttrs_15, (MR_Integer) 0))));
                        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MayCallMercuryAttrs_15, (MR_Integer) 1))));
                        succeeded = (Var_25 == (MR_Integer) 0);
                        if (succeeded)
                          succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                      if (succeeded)
                        *TransformInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                        *TransformInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[0]));
                    }
                    break;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *AnnotationIsMissing_11 = (MR_Integer) 0;
              *TransformInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              *AnnotationIsMissing_11 = (MR_Integer) 0;
              *TransformInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[0]));
            }
            break;
          case (MR_Integer) 2:
            {
              *AnnotationIsMissing_11 = (MR_Integer) 0;
              *TransformInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__table_gen_scalar_common_4[1]));
            }
            break;
        }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.table_gen.should_io_procedure_be_transformed\'/6", (MR_String) "different tabled_for_io attributes in one procedure");
          return;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____call_or_answer_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen____Unify____call_or_answer_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____call_or_answer_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__table_gen____Compare____call_or_answer_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____generator_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen____Unify____generator_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____generator_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__table_gen____Compare____generator_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____maybe_specified_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen____Unify____maybe_specified_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____maybe_specified_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__table_gen____Compare____maybe_specified_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen____Unify____table_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__table_gen____Compare____table_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen____Unify____var_mode_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__table_gen____Compare____var_mode_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen____Unify____var_mode_pos_method_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__table_gen____Compare____var_mode_pos_method_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__table_gen____Unify____var_mode_pos_method_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__table_gen____Unify____var_mode_pos_method_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__table_gen____Compare____var_mode_pos_method_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__table_gen____Compare____var_mode_pos_method_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__table_gen__init(void)
{
}

void mercury__transform_hlds__table_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_call_or_answer_table_0);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_generator_map_0);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_maybe_specified_method_0);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_table_info_0);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_method_0);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_1);
	MR_register_type_ctor_info(&transform_hlds__table_gen__transform_hlds__table_gen__type_ctor_info_var_mode_pos_method_0);
}

void mercury__transform_hlds__table_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__table_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.table_gen.
